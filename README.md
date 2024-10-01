# Tree-sitter grammar for Cerberus Core language

- [tree-sitter](https://tree-sitter.github.io/tree-sitter/)
- [Cerberus](https://www.cl.cam.ac.uk/~pes20/cerberus/)

# Building

The source repository contains generated parser source code and
bindings for all supported languages. Just type `make` to build.

To re-generate the parser follow these steps:

```
tree-sitter generate
tree-sitter build
make
```
