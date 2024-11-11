import XCTest
import SwiftTreeSitter
import TreeSitterTars

final class TreeSitterTarsTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_tars())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Tars grammar")
    }
}
