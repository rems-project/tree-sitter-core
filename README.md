# Tree-sitter grammar for Cerberus Core language

- [tree-sitter](https://tree-sitter.github.io/tree-sitter/)
- [Cerberus](https://www.cl.cam.ac.uk/~pes20/cerberus/)

# Building

## NOTE: 
Due to bug
[#768](https://github.com/tree-sitter/tree-sitter/issues/768) as
a temporary workaround switched to this
[version](https://github.com/WillLillis/tree-sitter/tree/missing_key)
of tree-sitter, until [PR
3721](https://github.com/tree-sitter/tree-sitter/pull/3721) is
approved or another solution is presented.

The source repository contains generated parser source code and
bindings for all supported languages. Just type `make` to build.

To re-generate the parser follow these steps:

```
tree-sitter generate
tree-sitter build
make
```
