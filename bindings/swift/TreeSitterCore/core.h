#ifndef TREE_SITTER_CORE_H_
#define TREE_SITTER_CORE_H_

typedef struct TSLanguage TSLanguage;

#ifdef __cplusplus
extern "C" {
#endif

const TSLanguage *tree_sitter_core(void);

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_CORE_H_
