// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterTars",
    products: [
        .library(name: "TreeSitterTars", targets: ["TreeSitterTars"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterTars",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterTarsTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterTars",
            ],
            path: "bindings/swift/TreeSitterTarsTests"
        )
    ],
    cLanguageStandard: .c11
)
