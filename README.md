# tree-sitter-tars

[![CI](https://github.com/Stool233/tree-sitter-tars/actions/workflows/ci.yml/badge.svg)](https://github.com/Stool233/tree-sitter-tars/actions)
[![npm](https://img.shields.io/npm/v/tree-sitter-tars.svg)](https://www.npmjs.com/package/tree-sitter-tars)
[![crates.io](https://img.shields.io/crates/v/tree-sitter-tars.svg)](https://crates.io/crates/tree-sitter-tars)

A [Tree-sitter](https://tree-sitter.github.io/tree-sitter/) grammar for the [TARS](https://tarscloud.org) Interface Definition Language (IDL).

## About TARS

TARS is a high-performance RPC framework based on name service and TARS protocol, originally developed by Tencent in 2008. It has been battle-tested in production environments, running on over 16,000 machines across hundreds of business services. TARS provides a comprehensive microservice development ecosystem with multi-language support and cross-platform compatibility.

**Key Features of TARS:**
- High-performance RPC communication
- Multi-language support (C++, Java, Node.js, PHP, Go)
- Cross-platform compatibility (Linux, Mac, Windows) 
- Integrated administration platform
- Extensible protocol for encoding/decoding

For more information, visit the [official TARS documentation](https://tarscloud.github.io/TarsDocs_en/).

## Supported Language Features

This grammar supports all TARS IDL language constructs:

### Basic Types
- Primitive types: `void`, `bool`, `byte`, `short`, `int`, `long`, `float`, `double`, `string`
- Complex types: `vector<T>`, `map<K,V>`
- User-defined types: `struct`, `enum`

### Language Constructs
- **Modules/Namespaces**: Organize code into logical units
- **Structures**: Define data types with tagged fields
- **Interfaces**: Define RPC service contracts
- **Enumerations**: Define named constants
- **Constants**: Define compile-time constants
- **Includes**: Import other TARS files
- **Key definitions**: Define primary keys for structures

### Syntax Features
- Field tags with `require`/`optional` modifiers
- Default values for struct members
- Parameter modifiers (`out`, `routekey`)
- Nested type definitions
- C++-style comments (`//` and `/* */`)

## Installation

### Node.js

```bash
npm install tree-sitter-tars
```

### Python

```bash
pip install tree-sitter-tars
```

### Rust

Add to your `Cargo.toml`:

```toml
[dependencies]
tree-sitter-tars = "0.1.0"
```

### Other Languages

Bindings are available for:
- C
- Go  
- Swift

## Usage

### Node.js

```javascript
const Parser = require('tree-sitter');
const Tars = require('tree-sitter-tars');

const parser = new Parser();
parser.setLanguage(Tars);

const sourceCode = `
module TestModule {
    struct UserInfo {
        0 require string username;
        1 optional int age = 18;
        2 optional vector<string> tags;
    };
    
    interface UserService {
        int getUserInfo(string uid, out UserInfo info);
        bool updateUser(UserInfo info);
    };
};
`;

const tree = parser.parse(sourceCode);
console.log(tree.rootNode.toString());
```

### Python

```python
import tree_sitter_tars as tstars
from tree_sitter import Language, Parser

TARS_LANGUAGE = Language(tstars.language(), "tars")
parser = Parser()
parser.set_language(TARS_LANGUAGE)

# Parse TARS code
tree = parser.parse(bytes(source_code, "utf8"))
```

### Tree-sitter CLI

```bash
# Install tree-sitter CLI
npm install -g tree-sitter-cli

# Parse a TARS file
tree-sitter parse example.tars

# Test the grammar
tree-sitter test

# Generate syntax highlighting
tree-sitter highlight example.tars
```

## Examples

### Basic Structure

```tars
module MyApp {
    // Define an enumeration
    enum Status {
        SUCCESS = 0,
        FAILED = 1,
        TIMEOUT = 2
    };
    
    // Define a structure with tagged fields
    struct Request {
        0 require string method;
        1 require map<string, string> params;
        2 optional long timeout = 30000;
    };
    
    struct Response {
        0 require Status status;
        1 optional string message;
        2 optional vector<byte> data;
    };
};
```

### Interface Definition

```tars
module ServiceModule {
    interface MyService {
        // Simple method
        int ping();
        
        // Method with input and output parameters
        int processRequest(Request req, out Response rsp);
        
        // Method with route key
        int routedCall(routekey string key, string data);
    };
};
```

### Complex Types

```tars
module ComplexTypes {
    struct NestedStruct {
        0 require int id;
        1 optional vector<map<string, long>> complexData;
        2 optional CustomType::NestedType nested;
    };
    
    // Constants
    const int MAX_SIZE = 1024;
    const string VERSION = "1.0.0";
};
```

## Editor Integration

### VS Code

Install the [TARS Language Support](https://marketplace.visualstudio.com/items?itemName=tars.tars-language) extension, or configure Tree-sitter manually.

### Neovim

```lua
-- Add to your nvim-treesitter configuration
require('nvim-treesitter.configs').setup({
  ensure_installed = { 'tars' },
  -- ... other config
})
```

### Emacs

```elisp
;; Add TARS mode
(use-package tars-mode
  :mode "\\.tars\\'"
  :config
  (add-to-list 'tree-sitter-major-mode-language-alist '(tars-mode . tars)))
```

## Development

### Building

```bash
# Generate parser
tree-sitter generate

# Build for Node.js
npm install

# Build for other languages
tree-sitter build --wasm  # WebAssembly
```

### Testing

```bash
# Run tests
tree-sitter test

# Test specific cases
tree-sitter test -f "module"

# Update test cases
tree-sitter test -u
```

### Contributing

1. Fork the repository
2. Create a feature branch
3. Add test cases for new features
4. Ensure all tests pass
5. Submit a pull request

## Language Bindings Support

| Language | Status | Package |
|----------|--------|---------|
| Node.js  | ✅ | `tree-sitter-tars` |
| Python   | ✅ | `tree-sitter-tars` |
| Rust     | ✅ | `tree-sitter-tars` |
| C        | ✅ | Built-in |
| Go       | ✅ | Built-in |
| Swift    | ✅ | Built-in |

## Related Projects

- [TARS Framework](https://github.com/TarsCloud/Tars) - The official TARS RPC framework
- [TARS Documentation](https://tarscloud.github.io/TarsDocs_en/) - Official documentation
- [TARS Protocol Specification](https://tarscloud.github.io/TarsDocs_en/base/tars-protocol.html) - Protocol details

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

The TARS framework itself is licensed under the BSD-3-Clause License.

## Acknowledgments

- [TarsCloud](https://github.com/TarsCloud) for the TARS framework
- [Tree-sitter](https://tree-sitter.github.io/) for the parsing framework
- All contributors to this grammar