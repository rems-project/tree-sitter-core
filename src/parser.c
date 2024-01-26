#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 659
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 191
#define ALIAS_COUNT 0
#define TOKEN_COUNT 138
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 14
#define PRODUCTION_ID_COUNT 1

enum {
  sym_comment = 1,
  anon_sym_def = 2,
  anon_sym_struct = 3,
  anon_sym_union = 4,
  anon_sym_COLON_EQ = 5,
  sym_int_const = 6,
  sym_floating_const = 7,
  aux_sym_sym_token1 = 8,
  anon_sym_COLON = 9,
  anon_sym_SQUOTE = 10,
  anon_sym_void = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_const = 16,
  anon_sym_volatile = 17,
  anon_sym__Atomic = 18,
  anon_sym_STAR = 19,
  anon_sym_LPAREN_STAR_RPAREN = 20,
  anon_sym_restrict = 21,
  anon_sym_COMMA = 22,
  anon_sym_DOT_DOT_DOT = 23,
  sym_floating_type = 24,
  anon_sym_ail_ctype = 25,
  anon_sym_EQ = 26,
  anon_sym_glob = 27,
  anon_sym_pure = 28,
  anon_sym_memop = 29,
  anon_sym_let = 30,
  anon_sym_in = 31,
  anon_sym_if = 32,
  anon_sym_then = 33,
  anon_sym_else = 34,
  anon_sym_case = 35,
  anon_sym_of = 36,
  anon_sym_PIPE = 37,
  anon_sym_EQ_GT = 38,
  anon_sym_end = 39,
  anon_sym_pcall = 40,
  anon_sym_ccall = 41,
  anon_sym_unseq = 42,
  anon_sym_weak = 43,
  anon_sym_SEMI = 44,
  anon_sym_strong = 45,
  anon_sym_bound = 46,
  anon_sym_save = 47,
  anon_sym_run = 48,
  anon_sym_nd = 49,
  anon_sym_par = 50,
  anon_sym_eff = 51,
  anon_sym_undef = 52,
  anon_sym_error = 53,
  anon_sym_CivNULLcap = 54,
  anon_sym_signed = 55,
  anon_sym_unsigned = 56,
  anon_sym_array_shift = 57,
  anon_sym_member_shift = 58,
  anon_sym_DOT = 59,
  anon_sym_not = 60,
  anon_sym_DASH = 61,
  anon_sym_cfunction = 62,
  anon_sym_LBRACE = 63,
  anon_sym_RBRACE = 64,
  anon_sym_is_scalar = 65,
  anon_sym_is_integer = 66,
  anon_sym_is_signed = 67,
  anon_sym_is_unsigned = 68,
  anon_sym_are_compatible = 69,
  anon_sym_LBRACK_RBRACK = 70,
  anon_sym_COLON_COLON = 71,
  anon_sym_DeriveCap = 72,
  aux_sym_pure_memop_op_token1 = 73,
  anon_sym_CapAssignValue = 74,
  anon_sym_Ptr_tIntValue = 75,
  anon_sym_PtrEq = 76,
  anon_sym_PtrNe = 77,
  anon_sym_PtrLt = 78,
  anon_sym_PtrGt = 79,
  anon_sym_PtrLe = 80,
  anon_sym_PtrGe = 81,
  anon_sym_Ptrdiff = 82,
  anon_sym_IntFromPtr = 83,
  anon_sym_PtrFromInt = 84,
  anon_sym_PtrValidForDeref = 85,
  anon_sym_PtrWellAligned = 86,
  anon_sym_PtrArrayShift = 87,
  aux_sym_memop_op_token1 = 88,
  anon_sym_PtrMemberShift = 89,
  anon_sym__ = 90,
  anon_sym_unit = 91,
  anon_sym_boolean = 92,
  anon_sym_ctype = 93,
  anon_sym_loaded = 94,
  anon_sym_storable = 95,
  anon_sym_integer = 96,
  anon_sym_floating = 97,
  anon_sym_pointer = 98,
  anon_sym_array = 99,
  sym_memory_order = 100,
  anon_sym_create_readonly = 101,
  anon_sym_create = 102,
  anon_sym_alloc = 103,
  anon_sym_free = 104,
  anon_sym_kill = 105,
  anon_sym_store = 106,
  anon_sym_store_lock = 107,
  anon_sym_load = 108,
  anon_sym_seq_rmw = 109,
  anon_sym_seq_rmw_with_forward = 110,
  anon_sym_rmw = 111,
  anon_sym_fence = 112,
  anon_sym_neg = 113,
  sym_ub = 114,
  aux_sym_string_token1 = 115,
  anon_sym_Array = 116,
  anon_sym_Ivmax = 117,
  anon_sym_Ivmin = 118,
  anon_sym_Ivsizeof = 119,
  anon_sym_Ivalignof = 120,
  anon_sym_Specified = 121,
  anon_sym_Unspecified = 122,
  anon_sym_Fvfromint = 123,
  anon_sym_Ivfromfloat = 124,
  anon_sym_IvCOMPL = 125,
  anon_sym_IvAND = 126,
  anon_sym_IvOR = 127,
  anon_sym_IvXOR = 128,
  sym_binary_operator = 129,
  sym_bool_literal = 130,
  anon_sym_IvMaxAlignment = 131,
  anon_sym_NULL = 132,
  anon_sym_Cfunction = 133,
  anon_sym_Unit = 134,
  sym_impl = 135,
  anon_sym_ailname = 136,
  anon_sym_proc = 137,
  sym_source_file = 138,
  sym_declaration = 139,
  sym_def_aggregate_declaration = 140,
  sym_sym = 141,
  sym_def_fields = 142,
  sym_def_field = 143,
  sym_core_ctype = 144,
  sym_ctype = 145,
  sym_ctype_star = 146,
  sym_params = 147,
  sym_integer_type = 148,
  sym_basic_type = 149,
  sym_glob_ctype_attribute = 150,
  sym_glob_declaration = 151,
  sym_expr = 152,
  sym_core_type = 153,
  sym_pexpr = 154,
  sym_list_pexpr = 155,
  sym_pure_memop_op = 156,
  sym_memop_op = 157,
  sym_pattern = 158,
  sym_list_pattern = 159,
  sym_name = 160,
  sym_core_base_type = 161,
  sym_core_object_type = 162,
  sym_action = 163,
  sym_paction = 164,
  sym_string = 165,
  sym_cstring = 166,
  sym_ctor = 167,
  sym_cabs_id = 168,
  sym_member = 169,
  sym_value = 170,
  sym_attribute = 171,
  sym_attribute_pair = 172,
  sym_proc_declaration = 173,
  sym_proc_full_declaration = 174,
  sym_proc_forward_declaration = 175,
  sym_def_declaration = 176,
  aux_sym_source_file_repeat1 = 177,
  aux_sym_def_fields_repeat1 = 178,
  aux_sym_params_repeat1 = 179,
  aux_sym_integer_type_repeat1 = 180,
  aux_sym_expr_repeat1 = 181,
  aux_sym_expr_repeat2 = 182,
  aux_sym_expr_repeat3 = 183,
  aux_sym_expr_repeat4 = 184,
  aux_sym_pexpr_repeat1 = 185,
  aux_sym_pexpr_repeat2 = 186,
  aux_sym_pattern_repeat1 = 187,
  aux_sym_core_base_type_repeat1 = 188,
  aux_sym_attribute_repeat1 = 189,
  aux_sym_proc_full_declaration_repeat1 = 190,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_def] = "def",
  [anon_sym_struct] = "struct",
  [anon_sym_union] = "union",
  [anon_sym_COLON_EQ] = ":=",
  [sym_int_const] = "int_const",
  [sym_floating_const] = "floating_const",
  [aux_sym_sym_token1] = "sym_token1",
  [anon_sym_COLON] = ":",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_void] = "void",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_const] = "const",
  [anon_sym_volatile] = "volatile",
  [anon_sym__Atomic] = "_Atomic",
  [anon_sym_STAR] = "*",
  [anon_sym_LPAREN_STAR_RPAREN] = "(*)",
  [anon_sym_restrict] = "restrict",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT_DOT] = "...",
  [sym_floating_type] = "floating_type",
  [anon_sym_ail_ctype] = "ail_ctype",
  [anon_sym_EQ] = "=",
  [anon_sym_glob] = "glob",
  [anon_sym_pure] = "pure",
  [anon_sym_memop] = "memop",
  [anon_sym_let] = "let",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_then] = "then",
  [anon_sym_else] = "else",
  [anon_sym_case] = "case",
  [anon_sym_of] = "of",
  [anon_sym_PIPE] = "|",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_end] = "end",
  [anon_sym_pcall] = "pcall",
  [anon_sym_ccall] = "ccall",
  [anon_sym_unseq] = "unseq",
  [anon_sym_weak] = "weak",
  [anon_sym_SEMI] = ";",
  [anon_sym_strong] = "strong",
  [anon_sym_bound] = "bound",
  [anon_sym_save] = "save",
  [anon_sym_run] = "run",
  [anon_sym_nd] = "nd",
  [anon_sym_par] = "par",
  [anon_sym_eff] = "eff",
  [anon_sym_undef] = "undef",
  [anon_sym_error] = "error",
  [anon_sym_CivNULLcap] = "CivNULLcap",
  [anon_sym_signed] = "signed",
  [anon_sym_unsigned] = "unsigned",
  [anon_sym_array_shift] = "array_shift",
  [anon_sym_member_shift] = "member_shift",
  [anon_sym_DOT] = ".",
  [anon_sym_not] = "not",
  [anon_sym_DASH] = "-",
  [anon_sym_cfunction] = "cfunction",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_is_scalar] = "is_scalar",
  [anon_sym_is_integer] = "is_integer",
  [anon_sym_is_signed] = "is_signed",
  [anon_sym_is_unsigned] = "is_unsigned",
  [anon_sym_are_compatible] = "are_compatible",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_DeriveCap] = "DeriveCap",
  [aux_sym_pure_memop_op_token1] = "pure_memop_op_token1",
  [anon_sym_CapAssignValue] = "CapAssignValue",
  [anon_sym_Ptr_tIntValue] = "Ptr_tIntValue",
  [anon_sym_PtrEq] = "PtrEq",
  [anon_sym_PtrNe] = "PtrNe",
  [anon_sym_PtrLt] = "PtrLt",
  [anon_sym_PtrGt] = "PtrGt",
  [anon_sym_PtrLe] = "PtrLe",
  [anon_sym_PtrGe] = "PtrGe",
  [anon_sym_Ptrdiff] = "Ptrdiff",
  [anon_sym_IntFromPtr] = "IntFromPtr",
  [anon_sym_PtrFromInt] = "PtrFromInt",
  [anon_sym_PtrValidForDeref] = "PtrValidForDeref",
  [anon_sym_PtrWellAligned] = "PtrWellAligned",
  [anon_sym_PtrArrayShift] = "PtrArrayShift",
  [aux_sym_memop_op_token1] = "memop_op_token1",
  [anon_sym_PtrMemberShift] = "PtrMemberShift",
  [anon_sym__] = "_",
  [anon_sym_unit] = "unit",
  [anon_sym_boolean] = "boolean",
  [anon_sym_ctype] = "ctype",
  [anon_sym_loaded] = "loaded",
  [anon_sym_storable] = "storable",
  [anon_sym_integer] = "integer",
  [anon_sym_floating] = "floating",
  [anon_sym_pointer] = "pointer",
  [anon_sym_array] = "array",
  [sym_memory_order] = "memory_order",
  [anon_sym_create_readonly] = "create_readonly",
  [anon_sym_create] = "create",
  [anon_sym_alloc] = "alloc",
  [anon_sym_free] = "free",
  [anon_sym_kill] = "kill",
  [anon_sym_store] = "store",
  [anon_sym_store_lock] = "store_lock",
  [anon_sym_load] = "load",
  [anon_sym_seq_rmw] = "seq_rmw",
  [anon_sym_seq_rmw_with_forward] = "seq_rmw_with_forward",
  [anon_sym_rmw] = "rmw",
  [anon_sym_fence] = "fence",
  [anon_sym_neg] = "neg",
  [sym_ub] = "ub",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_Array] = "Array",
  [anon_sym_Ivmax] = "Ivmax",
  [anon_sym_Ivmin] = "Ivmin",
  [anon_sym_Ivsizeof] = "Ivsizeof",
  [anon_sym_Ivalignof] = "Ivalignof",
  [anon_sym_Specified] = "Specified",
  [anon_sym_Unspecified] = "Unspecified",
  [anon_sym_Fvfromint] = "Fvfromint",
  [anon_sym_Ivfromfloat] = "Ivfromfloat",
  [anon_sym_IvCOMPL] = "IvCOMPL",
  [anon_sym_IvAND] = "IvAND",
  [anon_sym_IvOR] = "IvOR",
  [anon_sym_IvXOR] = "IvXOR",
  [sym_binary_operator] = "binary_operator",
  [sym_bool_literal] = "bool_literal",
  [anon_sym_IvMaxAlignment] = "IvMaxAlignment",
  [anon_sym_NULL] = "NULL",
  [anon_sym_Cfunction] = "Cfunction",
  [anon_sym_Unit] = "Unit",
  [sym_impl] = "impl",
  [anon_sym_ailname] = "ailname",
  [anon_sym_proc] = "proc",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym_def_aggregate_declaration] = "def_aggregate_declaration",
  [sym_sym] = "sym",
  [sym_def_fields] = "def_fields",
  [sym_def_field] = "def_field",
  [sym_core_ctype] = "core_ctype",
  [sym_ctype] = "ctype",
  [sym_ctype_star] = "ctype_star",
  [sym_params] = "params",
  [sym_integer_type] = "integer_type",
  [sym_basic_type] = "basic_type",
  [sym_glob_ctype_attribute] = "glob_ctype_attribute",
  [sym_glob_declaration] = "glob_declaration",
  [sym_expr] = "expr",
  [sym_core_type] = "core_type",
  [sym_pexpr] = "pexpr",
  [sym_list_pexpr] = "list_pexpr",
  [sym_pure_memop_op] = "pure_memop_op",
  [sym_memop_op] = "memop_op",
  [sym_pattern] = "pattern",
  [sym_list_pattern] = "list_pattern",
  [sym_name] = "name",
  [sym_core_base_type] = "core_base_type",
  [sym_core_object_type] = "core_object_type",
  [sym_action] = "action",
  [sym_paction] = "paction",
  [sym_string] = "string",
  [sym_cstring] = "cstring",
  [sym_ctor] = "ctor",
  [sym_cabs_id] = "cabs_id",
  [sym_member] = "member",
  [sym_value] = "value",
  [sym_attribute] = "attribute",
  [sym_attribute_pair] = "attribute_pair",
  [sym_proc_declaration] = "proc_declaration",
  [sym_proc_full_declaration] = "proc_full_declaration",
  [sym_proc_forward_declaration] = "proc_forward_declaration",
  [sym_def_declaration] = "def_declaration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_def_fields_repeat1] = "def_fields_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
  [aux_sym_integer_type_repeat1] = "integer_type_repeat1",
  [aux_sym_expr_repeat1] = "expr_repeat1",
  [aux_sym_expr_repeat2] = "expr_repeat2",
  [aux_sym_expr_repeat3] = "expr_repeat3",
  [aux_sym_expr_repeat4] = "expr_repeat4",
  [aux_sym_pexpr_repeat1] = "pexpr_repeat1",
  [aux_sym_pexpr_repeat2] = "pexpr_repeat2",
  [aux_sym_pattern_repeat1] = "pattern_repeat1",
  [aux_sym_core_base_type_repeat1] = "core_base_type_repeat1",
  [aux_sym_attribute_repeat1] = "attribute_repeat1",
  [aux_sym_proc_full_declaration_repeat1] = "proc_full_declaration_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_def] = anon_sym_def,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_union] = anon_sym_union,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_int_const] = sym_int_const,
  [sym_floating_const] = sym_floating_const,
  [aux_sym_sym_token1] = aux_sym_sym_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_volatile] = anon_sym_volatile,
  [anon_sym__Atomic] = anon_sym__Atomic,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_LPAREN_STAR_RPAREN] = anon_sym_LPAREN_STAR_RPAREN,
  [anon_sym_restrict] = anon_sym_restrict,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [sym_floating_type] = sym_floating_type,
  [anon_sym_ail_ctype] = anon_sym_ail_ctype,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_glob] = anon_sym_glob,
  [anon_sym_pure] = anon_sym_pure,
  [anon_sym_memop] = anon_sym_memop,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_then] = anon_sym_then,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_case] = anon_sym_case,
  [anon_sym_of] = anon_sym_of,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_pcall] = anon_sym_pcall,
  [anon_sym_ccall] = anon_sym_ccall,
  [anon_sym_unseq] = anon_sym_unseq,
  [anon_sym_weak] = anon_sym_weak,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_strong] = anon_sym_strong,
  [anon_sym_bound] = anon_sym_bound,
  [anon_sym_save] = anon_sym_save,
  [anon_sym_run] = anon_sym_run,
  [anon_sym_nd] = anon_sym_nd,
  [anon_sym_par] = anon_sym_par,
  [anon_sym_eff] = anon_sym_eff,
  [anon_sym_undef] = anon_sym_undef,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_CivNULLcap] = anon_sym_CivNULLcap,
  [anon_sym_signed] = anon_sym_signed,
  [anon_sym_unsigned] = anon_sym_unsigned,
  [anon_sym_array_shift] = anon_sym_array_shift,
  [anon_sym_member_shift] = anon_sym_member_shift,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_cfunction] = anon_sym_cfunction,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_is_scalar] = anon_sym_is_scalar,
  [anon_sym_is_integer] = anon_sym_is_integer,
  [anon_sym_is_signed] = anon_sym_is_signed,
  [anon_sym_is_unsigned] = anon_sym_is_unsigned,
  [anon_sym_are_compatible] = anon_sym_are_compatible,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_DeriveCap] = anon_sym_DeriveCap,
  [aux_sym_pure_memop_op_token1] = aux_sym_pure_memop_op_token1,
  [anon_sym_CapAssignValue] = anon_sym_CapAssignValue,
  [anon_sym_Ptr_tIntValue] = anon_sym_Ptr_tIntValue,
  [anon_sym_PtrEq] = anon_sym_PtrEq,
  [anon_sym_PtrNe] = anon_sym_PtrNe,
  [anon_sym_PtrLt] = anon_sym_PtrLt,
  [anon_sym_PtrGt] = anon_sym_PtrGt,
  [anon_sym_PtrLe] = anon_sym_PtrLe,
  [anon_sym_PtrGe] = anon_sym_PtrGe,
  [anon_sym_Ptrdiff] = anon_sym_Ptrdiff,
  [anon_sym_IntFromPtr] = anon_sym_IntFromPtr,
  [anon_sym_PtrFromInt] = anon_sym_PtrFromInt,
  [anon_sym_PtrValidForDeref] = anon_sym_PtrValidForDeref,
  [anon_sym_PtrWellAligned] = anon_sym_PtrWellAligned,
  [anon_sym_PtrArrayShift] = anon_sym_PtrArrayShift,
  [aux_sym_memop_op_token1] = aux_sym_memop_op_token1,
  [anon_sym_PtrMemberShift] = anon_sym_PtrMemberShift,
  [anon_sym__] = anon_sym__,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_ctype] = anon_sym_ctype,
  [anon_sym_loaded] = anon_sym_loaded,
  [anon_sym_storable] = anon_sym_storable,
  [anon_sym_integer] = anon_sym_integer,
  [anon_sym_floating] = anon_sym_floating,
  [anon_sym_pointer] = anon_sym_pointer,
  [anon_sym_array] = anon_sym_array,
  [sym_memory_order] = sym_memory_order,
  [anon_sym_create_readonly] = anon_sym_create_readonly,
  [anon_sym_create] = anon_sym_create,
  [anon_sym_alloc] = anon_sym_alloc,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_kill] = anon_sym_kill,
  [anon_sym_store] = anon_sym_store,
  [anon_sym_store_lock] = anon_sym_store_lock,
  [anon_sym_load] = anon_sym_load,
  [anon_sym_seq_rmw] = anon_sym_seq_rmw,
  [anon_sym_seq_rmw_with_forward] = anon_sym_seq_rmw_with_forward,
  [anon_sym_rmw] = anon_sym_rmw,
  [anon_sym_fence] = anon_sym_fence,
  [anon_sym_neg] = anon_sym_neg,
  [sym_ub] = sym_ub,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_Array] = anon_sym_Array,
  [anon_sym_Ivmax] = anon_sym_Ivmax,
  [anon_sym_Ivmin] = anon_sym_Ivmin,
  [anon_sym_Ivsizeof] = anon_sym_Ivsizeof,
  [anon_sym_Ivalignof] = anon_sym_Ivalignof,
  [anon_sym_Specified] = anon_sym_Specified,
  [anon_sym_Unspecified] = anon_sym_Unspecified,
  [anon_sym_Fvfromint] = anon_sym_Fvfromint,
  [anon_sym_Ivfromfloat] = anon_sym_Ivfromfloat,
  [anon_sym_IvCOMPL] = anon_sym_IvCOMPL,
  [anon_sym_IvAND] = anon_sym_IvAND,
  [anon_sym_IvOR] = anon_sym_IvOR,
  [anon_sym_IvXOR] = anon_sym_IvXOR,
  [sym_binary_operator] = sym_binary_operator,
  [sym_bool_literal] = sym_bool_literal,
  [anon_sym_IvMaxAlignment] = anon_sym_IvMaxAlignment,
  [anon_sym_NULL] = anon_sym_NULL,
  [anon_sym_Cfunction] = anon_sym_Cfunction,
  [anon_sym_Unit] = anon_sym_Unit,
  [sym_impl] = sym_impl,
  [anon_sym_ailname] = anon_sym_ailname,
  [anon_sym_proc] = anon_sym_proc,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym_def_aggregate_declaration] = sym_def_aggregate_declaration,
  [sym_sym] = sym_sym,
  [sym_def_fields] = sym_def_fields,
  [sym_def_field] = sym_def_field,
  [sym_core_ctype] = sym_core_ctype,
  [sym_ctype] = sym_ctype,
  [sym_ctype_star] = sym_ctype_star,
  [sym_params] = sym_params,
  [sym_integer_type] = sym_integer_type,
  [sym_basic_type] = sym_basic_type,
  [sym_glob_ctype_attribute] = sym_glob_ctype_attribute,
  [sym_glob_declaration] = sym_glob_declaration,
  [sym_expr] = sym_expr,
  [sym_core_type] = sym_core_type,
  [sym_pexpr] = sym_pexpr,
  [sym_list_pexpr] = sym_list_pexpr,
  [sym_pure_memop_op] = sym_pure_memop_op,
  [sym_memop_op] = sym_memop_op,
  [sym_pattern] = sym_pattern,
  [sym_list_pattern] = sym_list_pattern,
  [sym_name] = sym_name,
  [sym_core_base_type] = sym_core_base_type,
  [sym_core_object_type] = sym_core_object_type,
  [sym_action] = sym_action,
  [sym_paction] = sym_paction,
  [sym_string] = sym_string,
  [sym_cstring] = sym_cstring,
  [sym_ctor] = sym_ctor,
  [sym_cabs_id] = sym_cabs_id,
  [sym_member] = sym_member,
  [sym_value] = sym_value,
  [sym_attribute] = sym_attribute,
  [sym_attribute_pair] = sym_attribute_pair,
  [sym_proc_declaration] = sym_proc_declaration,
  [sym_proc_full_declaration] = sym_proc_full_declaration,
  [sym_proc_forward_declaration] = sym_proc_forward_declaration,
  [sym_def_declaration] = sym_def_declaration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_def_fields_repeat1] = aux_sym_def_fields_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
  [aux_sym_integer_type_repeat1] = aux_sym_integer_type_repeat1,
  [aux_sym_expr_repeat1] = aux_sym_expr_repeat1,
  [aux_sym_expr_repeat2] = aux_sym_expr_repeat2,
  [aux_sym_expr_repeat3] = aux_sym_expr_repeat3,
  [aux_sym_expr_repeat4] = aux_sym_expr_repeat4,
  [aux_sym_pexpr_repeat1] = aux_sym_pexpr_repeat1,
  [aux_sym_pexpr_repeat2] = aux_sym_pexpr_repeat2,
  [aux_sym_pattern_repeat1] = aux_sym_pattern_repeat1,
  [aux_sym_core_base_type_repeat1] = aux_sym_core_base_type_repeat1,
  [aux_sym_attribute_repeat1] = aux_sym_attribute_repeat1,
  [aux_sym_proc_full_declaration_repeat1] = aux_sym_proc_full_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_def] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_union] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_int_const] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_const] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_sym_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_volatile] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__Atomic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN_STAR_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_restrict] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_floating_type] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ail_ctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_glob] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_memop] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_then] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_case] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_of] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pcall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ccall] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unseq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_weak] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strong] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bound] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_run] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_par] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_eff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_undef] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CivNULLcap] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_member_shift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_scalar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_signed] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is_unsigned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_are_compatible] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DeriveCap] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_pure_memop_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_CapAssignValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptr_tIntValue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrEq] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrNe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrLt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrGt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrLe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrGe] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ptrdiff] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IntFromPtr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrFromInt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrValidForDeref] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrWellAligned] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PtrArrayShift] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_memop_op_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PtrMemberShift] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ctype] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_loaded] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_storable] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_floating] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pointer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_array] = {
    .visible = true,
    .named = false,
  },
  [sym_memory_order] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_create_readonly] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_create] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alloc] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_kill] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_store_lock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_load] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_rmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_seq_rmw_with_forward] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rmw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fence] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_neg] = {
    .visible = true,
    .named = false,
  },
  [sym_ub] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivmax] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivmin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivsizeof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivalignof] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Specified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unspecified] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fvfromint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Ivfromfloat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvCOMPL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IvXOR] = {
    .visible = true,
    .named = false,
  },
  [sym_binary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_bool_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_IvMaxAlignment] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NULL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Cfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Unit] = {
    .visible = true,
    .named = false,
  },
  [sym_impl] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ailname] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_proc] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_aggregate_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_sym] = {
    .visible = true,
    .named = true,
  },
  [sym_def_fields] = {
    .visible = true,
    .named = true,
  },
  [sym_def_field] = {
    .visible = true,
    .named = true,
  },
  [sym_core_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype] = {
    .visible = true,
    .named = true,
  },
  [sym_ctype_star] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_type] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_ctype_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_glob_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_core_type] = {
    .visible = true,
    .named = true,
  },
  [sym_pexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pexpr] = {
    .visible = true,
    .named = true,
  },
  [sym_pure_memop_op] = {
    .visible = true,
    .named = true,
  },
  [sym_memop_op] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_list_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_core_base_type] = {
    .visible = true,
    .named = true,
  },
  [sym_core_object_type] = {
    .visible = true,
    .named = true,
  },
  [sym_action] = {
    .visible = true,
    .named = true,
  },
  [sym_paction] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_cstring] = {
    .visible = true,
    .named = true,
  },
  [sym_ctor] = {
    .visible = true,
    .named = true,
  },
  [sym_cabs_id] = {
    .visible = true,
    .named = true,
  },
  [sym_member] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_full_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_proc_forward_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_def_declaration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_def_fields_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expr_repeat4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexpr_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pexpr_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_core_base_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_proc_full_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 8,
  [11] = 7,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 14,
  [43] = 34,
  [44] = 23,
  [45] = 20,
  [46] = 15,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 41,
  [56] = 56,
  [57] = 57,
  [58] = 40,
  [59] = 54,
  [60] = 60,
  [61] = 61,
  [62] = 52,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 31,
  [67] = 27,
  [68] = 57,
  [69] = 69,
  [70] = 61,
  [71] = 17,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 92,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 96,
  [103] = 100,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 107,
  [109] = 107,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 113,
  [126] = 126,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 112,
  [133] = 123,
  [134] = 120,
  [135] = 113,
  [136] = 136,
  [137] = 114,
  [138] = 138,
  [139] = 139,
  [140] = 122,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 146,
  [148] = 142,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 152,
  [155] = 155,
  [156] = 152,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 155,
  [164] = 158,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 159,
  [173] = 173,
  [174] = 174,
  [175] = 160,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 150,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 151,
  [185] = 153,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 142,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 181,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 215,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 220,
  [225] = 215,
  [226] = 157,
  [227] = 227,
  [228] = 228,
  [229] = 220,
  [230] = 162,
  [231] = 231,
  [232] = 187,
  [233] = 182,
  [234] = 234,
  [235] = 183,
  [236] = 165,
  [237] = 176,
  [238] = 238,
  [239] = 186,
  [240] = 240,
  [241] = 180,
  [242] = 242,
  [243] = 168,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 171,
  [248] = 248,
  [249] = 188,
  [250] = 250,
  [251] = 251,
  [252] = 174,
  [253] = 169,
  [254] = 177,
  [255] = 255,
  [256] = 167,
  [257] = 178,
  [258] = 173,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 261,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 269,
  [274] = 259,
  [275] = 275,
  [276] = 268,
  [277] = 277,
  [278] = 278,
  [279] = 277,
  [280] = 280,
  [281] = 281,
  [282] = 275,
  [283] = 283,
  [284] = 271,
  [285] = 269,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 181,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 292,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 300,
  [303] = 303,
  [304] = 304,
  [305] = 305,
  [306] = 306,
  [307] = 307,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 310,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 317,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 325,
  [334] = 327,
  [335] = 326,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 329,
  [343] = 315,
  [344] = 344,
  [345] = 345,
  [346] = 346,
  [347] = 347,
  [348] = 348,
  [349] = 349,
  [350] = 350,
  [351] = 351,
  [352] = 352,
  [353] = 353,
  [354] = 354,
  [355] = 355,
  [356] = 356,
  [357] = 357,
  [358] = 355,
  [359] = 359,
  [360] = 360,
  [361] = 345,
  [362] = 362,
  [363] = 350,
  [364] = 348,
  [365] = 365,
  [366] = 350,
  [367] = 367,
  [368] = 368,
  [369] = 369,
  [370] = 340,
  [371] = 371,
  [372] = 324,
  [373] = 373,
  [374] = 374,
  [375] = 375,
  [376] = 376,
  [377] = 377,
  [378] = 378,
  [379] = 330,
  [380] = 380,
  [381] = 381,
  [382] = 331,
  [383] = 319,
  [384] = 365,
  [385] = 385,
  [386] = 386,
  [387] = 387,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 394,
  [395] = 395,
  [396] = 346,
  [397] = 355,
  [398] = 398,
  [399] = 399,
  [400] = 400,
  [401] = 401,
  [402] = 402,
  [403] = 403,
  [404] = 404,
  [405] = 405,
  [406] = 406,
  [407] = 407,
  [408] = 408,
  [409] = 392,
  [410] = 410,
  [411] = 385,
  [412] = 412,
  [413] = 395,
  [414] = 391,
  [415] = 336,
  [416] = 338,
  [417] = 373,
  [418] = 337,
  [419] = 419,
  [420] = 420,
  [421] = 421,
  [422] = 422,
  [423] = 423,
  [424] = 155,
  [425] = 150,
  [426] = 426,
  [427] = 427,
  [428] = 428,
  [429] = 151,
  [430] = 153,
  [431] = 431,
  [432] = 432,
  [433] = 433,
  [434] = 434,
  [435] = 435,
  [436] = 436,
  [437] = 160,
  [438] = 438,
  [439] = 439,
  [440] = 440,
  [441] = 441,
  [442] = 442,
  [443] = 443,
  [444] = 444,
  [445] = 445,
  [446] = 446,
  [447] = 447,
  [448] = 448,
  [449] = 449,
  [450] = 450,
  [451] = 451,
  [452] = 452,
  [453] = 158,
  [454] = 454,
  [455] = 455,
  [456] = 456,
  [457] = 457,
  [458] = 458,
  [459] = 459,
  [460] = 159,
  [461] = 461,
  [462] = 462,
  [463] = 463,
  [464] = 464,
  [465] = 465,
  [466] = 466,
  [467] = 467,
  [468] = 468,
  [469] = 420,
  [470] = 470,
  [471] = 471,
  [472] = 465,
  [473] = 432,
  [474] = 466,
  [475] = 443,
  [476] = 432,
  [477] = 423,
  [478] = 478,
  [479] = 441,
  [480] = 455,
  [481] = 481,
  [482] = 482,
  [483] = 444,
  [484] = 484,
  [485] = 485,
  [486] = 486,
  [487] = 487,
  [488] = 488,
  [489] = 489,
  [490] = 490,
  [491] = 491,
  [492] = 492,
  [493] = 493,
  [494] = 494,
  [495] = 495,
  [496] = 496,
  [497] = 497,
  [498] = 498,
  [499] = 499,
  [500] = 500,
  [501] = 501,
  [502] = 502,
  [503] = 503,
  [504] = 504,
  [505] = 505,
  [506] = 506,
  [507] = 507,
  [508] = 508,
  [509] = 509,
  [510] = 510,
  [511] = 511,
  [512] = 512,
  [513] = 513,
  [514] = 514,
  [515] = 515,
  [516] = 516,
  [517] = 517,
  [518] = 518,
  [519] = 519,
  [520] = 520,
  [521] = 521,
  [522] = 522,
  [523] = 523,
  [524] = 524,
  [525] = 525,
  [526] = 526,
  [527] = 527,
  [528] = 528,
  [529] = 529,
  [530] = 530,
  [531] = 531,
  [532] = 532,
  [533] = 533,
  [534] = 534,
  [535] = 535,
  [536] = 536,
  [537] = 537,
  [538] = 538,
  [539] = 539,
  [540] = 540,
  [541] = 541,
  [542] = 542,
  [543] = 543,
  [544] = 544,
  [545] = 545,
  [546] = 546,
  [547] = 547,
  [548] = 548,
  [549] = 549,
  [550] = 550,
  [551] = 551,
  [552] = 552,
  [553] = 553,
  [554] = 554,
  [555] = 555,
  [556] = 556,
  [557] = 557,
  [558] = 558,
  [559] = 559,
  [560] = 560,
  [561] = 561,
  [562] = 559,
  [563] = 563,
  [564] = 564,
  [565] = 556,
  [566] = 566,
  [567] = 567,
  [568] = 550,
  [569] = 569,
  [570] = 570,
  [571] = 571,
  [572] = 535,
  [573] = 573,
  [574] = 574,
  [575] = 575,
  [576] = 576,
  [577] = 577,
  [578] = 578,
  [579] = 579,
  [580] = 522,
  [581] = 581,
  [582] = 521,
  [583] = 583,
  [584] = 514,
  [585] = 585,
  [586] = 586,
  [587] = 587,
  [588] = 502,
  [589] = 589,
  [590] = 548,
  [591] = 591,
  [592] = 592,
  [593] = 551,
  [594] = 558,
  [595] = 557,
  [596] = 596,
  [597] = 597,
  [598] = 598,
  [599] = 599,
  [600] = 599,
  [601] = 601,
  [602] = 591,
  [603] = 603,
  [604] = 604,
  [605] = 553,
  [606] = 606,
  [607] = 560,
  [608] = 608,
  [609] = 609,
  [610] = 610,
  [611] = 530,
  [612] = 612,
  [613] = 613,
  [614] = 534,
  [615] = 615,
  [616] = 616,
  [617] = 551,
  [618] = 618,
  [619] = 619,
  [620] = 620,
  [621] = 621,
  [622] = 622,
  [623] = 615,
  [624] = 608,
  [625] = 603,
  [626] = 601,
  [627] = 627,
  [628] = 628,
  [629] = 629,
  [630] = 566,
  [631] = 554,
  [632] = 552,
  [633] = 548,
  [634] = 537,
  [635] = 520,
  [636] = 510,
  [637] = 621,
  [638] = 616,
  [639] = 639,
  [640] = 640,
  [641] = 641,
  [642] = 642,
  [643] = 643,
  [644] = 621,
  [645] = 564,
  [646] = 646,
  [647] = 519,
  [648] = 613,
  [649] = 612,
  [650] = 606,
  [651] = 651,
  [652] = 652,
  [653] = 653,
  [654] = 654,
  [655] = 655,
  [656] = 610,
  [657] = 657,
  [658] = 609,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(816);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '\'') ADVANCE(1271);
      if (lookahead == '(') ADVANCE(1278);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*') ADVANCE(1286);
      if (lookahead == '+' ||
          lookahead == '^') ADVANCE(1445);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(1344);
      if (lookahead == '.') ADVANCE(1341);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == ':') ADVANCE(1270);
      if (lookahead == ';') ADVANCE(1319);
      if (lookahead == '<') ADVANCE(1447);
      if (lookahead == '=') ADVANCE(1295);
      if (lookahead == '>') ADVANCE(1448);
      if (lookahead == 'A') ADVANCE(641);
      if (lookahead == 'B') ADVANCE(381);
      if (lookahead == 'C') ADVANCE(102);
      if (lookahead == 'D') ADVANCE(248);
      if (lookahead == 'E') ADVANCE(517);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(516);
      if (lookahead == 'N') ADVANCE(64);
      if (lookahead == 'P') ADVANCE(451);
      if (lookahead == 'S') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(643);
      if (lookahead == 'U') ADVANCE(505);
      if (lookahead == '[') ADVANCE(1275);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(1380);
      if (lookahead == 'a') ADVANCE(165);
      if (lookahead == 'b') ADVANCE(565);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'd') ADVANCE(250);
      if (lookahead == 'e') ADVANCE(335);
      if (lookahead == 'f') ADVANCE(259);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(323);
      if (lookahead == 'k') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(252);
      if (lookahead == 'm') ADVANCE(220);
      if (lookahead == 'n') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(221);
      if (lookahead == 's') ADVANCE(111);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == 'u') ADVANCE(507);
      if (lookahead == 'v') ADVANCE(566);
      if (lookahead == 'w') ADVANCE(254);
      if (lookahead == '{') ADVANCE(1348);
      if (lookahead == '|') ADVANCE(1311);
      if (lookahead == '}') ADVANCE(1349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(827);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(817);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(1418);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\'') ADVANCE(1271);
      if (lookahead == '(') ADVANCE(1278);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*') ADVANCE(1286);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(1294);
      if (lookahead == '[') ADVANCE(1274);
      if (lookahead == 'a') ADVANCE(1191);
      if (lookahead == 'b') ADVANCE(1142);
      if (lookahead == 'c') ADVANCE(1241);
      if (lookahead == 'f') ADVANCE(1072);
      if (lookahead == 'i') ADVANCE(1124);
      if (lookahead == 'l') ADVANCE(1146);
      if (lookahead == 'p') ADVANCE(1158);
      if (lookahead == 's') ADVANCE(1219);
      if (lookahead == 'u') ADVANCE(1112);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(1271);
      if (lookahead == '(') ADVANCE(1278);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*') ADVANCE(1286);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'A') ADVANCE(1221);
      if (lookahead == 'B') ADVANCE(1012);
      if (lookahead == 'C') ADVANCE(1008);
      if (lookahead == 'E') ADVANCE(1098);
      if (lookahead == 'I') ADVANCE(1097);
      if (lookahead == 'P') ADVANCE(1058);
      if (lookahead == 'S') ADVANCE(840);
      if (lookahead == '[') ADVANCE(1274);
      if (lookahead == 'a') ADVANCE(1057);
      if (lookahead == 'b') ADVANCE(1245);
      if (lookahead == 'c') ADVANCE(1208);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('D' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(1271);
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(807);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '<') ADVANCE(25);
      if (lookahead == '=') ADVANCE(1295);
      if (lookahead == 'A') ADVANCE(1175);
      if (lookahead == 'B') ADVANCE(1012);
      if (lookahead == 'C') ADVANCE(984);
      if (lookahead == 'E') ADVANCE(1098);
      if (lookahead == 'F') ADVANCE(876);
      if (lookahead == 'I') ADVANCE(1096);
      if (lookahead == 'N') ADVANCE(855);
      if (lookahead == 'P') ADVANCE(1058);
      if (lookahead == 'S') ADVANCE(839);
      if (lookahead == 'T') ADVANCE(1177);
      if (lookahead == 'U') ADVANCE(1089);
      if (lookahead == '[') ADVANCE(1275);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(828);
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(1245);
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == 'l') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(933);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1013);
      if (lookahead == 'u') ADVANCE(1090);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(1271);
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '+') ADVANCE(20);
      if (lookahead == '-') ADVANCE(1345);
      if (lookahead == '.') ADVANCE(807);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(1294);
      if (lookahead == 'A') ADVANCE(1175);
      if (lookahead == 'B') ADVANCE(1012);
      if (lookahead == 'C') ADVANCE(984);
      if (lookahead == 'E') ADVANCE(1098);
      if (lookahead == 'F') ADVANCE(876);
      if (lookahead == 'I') ADVANCE(1096);
      if (lookahead == 'N') ADVANCE(855);
      if (lookahead == 'P') ADVANCE(1058);
      if (lookahead == 'S') ADVANCE(839);
      if (lookahead == 'T') ADVANCE(1177);
      if (lookahead == 'U') ADVANCE(1089);
      if (lookahead == '[') ADVANCE(1275);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(828);
      if (lookahead == 'a') ADVANCE(1056);
      if (lookahead == 'b') ADVANCE(1245);
      if (lookahead == 'c') ADVANCE(873);
      if (lookahead == 'e') ADVANCE(1180);
      if (lookahead == 'i') ADVANCE(979);
      if (lookahead == 'l') ADVANCE(943);
      if (lookahead == 'm') ADVANCE(933);
      if (lookahead == 'n') ADVANCE(1131);
      if (lookahead == 's') ADVANCE(1014);
      if (lookahead == 'u') ADVANCE(1109);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      if (('D' <= lookahead && lookahead <= 'Z') ||
          ('d' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(1269);
      if (lookahead == 'A') ADVANCE(1176);
      if (lookahead == 'F') ADVANCE(1251);
      if (lookahead == 'I') ADVANCE(1253);
      if (lookahead == 'S') ADVANCE(1161);
      if (lookahead == 'U') ADVANCE(1104);
      if (lookahead == '[') ADVANCE(1275);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == '_') ADVANCE(1381);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == 'A') ADVANCE(1176);
      if (lookahead == 'F') ADVANCE(1251);
      if (lookahead == 'I') ADVANCE(1253);
      if (lookahead == 'S') ADVANCE(1161);
      if (lookahead == 'U') ADVANCE(1104);
      if (lookahead == '[') ADVANCE(1275);
      if (lookahead == '_') ADVANCE(1381);
      if (lookahead == 's') ADVANCE(1239);
      if (lookahead == 'w') ADVANCE(960);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '_') ADVANCE(836);
      if (lookahead == 'c') ADVANCE(1151);
      if (lookahead == 'd') ADVANCE(1134);
      if (lookahead == 'f') ADVANCE(1074);
      if (lookahead == 'l') ADVANCE(1152);
      if (lookahead == 's') ADVANCE(1231);
      if (lookahead == 'u') ADVANCE(1120);
      if (lookahead == 'v') ADVANCE(1127);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(1287);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '}') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(1290);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(174);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(63);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(695);
      END_STATE();
    case 22:
      if (lookahead == '/') ADVANCE(1445);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(1361);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(1361);
      if (lookahead == '=') ADVANCE(825);
      END_STATE();
    case 25:
      if (lookahead == '<') ADVANCE(810);
      END_STATE();
    case 26:
      if (lookahead == '>') ADVANCE(1312);
      END_STATE();
    case 27:
      if (lookahead == '>') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 28:
      if (lookahead == '>') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'C') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(106);
      if (lookahead == 'O') ADVANCE(58);
      if (lookahead == 'X') ADVANCE(54);
      if (lookahead == 'a') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(672);
      if (lookahead == 'm') ADVANCE(110);
      if (lookahead == 's') ADVANCE(383);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(702);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(674);
      if (lookahead == 'E') ADVANCE(628);
      if (lookahead == 'F') ADVANCE(677);
      if (lookahead == 'G') ADVANCE(229);
      if (lookahead == 'L') ADVANCE(230);
      if (lookahead == 'M') ADVANCE(257);
      if (lookahead == 'N') ADVANCE(231);
      if (lookahead == 'V') ADVANCE(138);
      if (lookahead == 'W') ADVANCE(308);
      if (lookahead == '_') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(387);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(481);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(482);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(117);
      END_STATE();
    case 35:
      if (lookahead == 'D') ADVANCE(1439);
      END_STATE();
    case 36:
      if (lookahead == 'D') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'D') ADVANCE(309);
      END_STATE();
    case 38:
      if (lookahead == 'F') ADVANCE(594);
      END_STATE();
    case 39:
      if (lookahead == 'F') ADVANCE(675);
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 40:
      if (lookahead == 'H') ADVANCE(60);
      END_STATE();
    case 41:
      if (lookahead == 'H') ADVANCE(60);
      if (lookahead == 'p') ADVANCE(222);
      END_STATE();
    case 42:
      if (lookahead == 'I') ADVANCE(532);
      END_STATE();
    case 43:
      if (lookahead == 'I') ADVANCE(537);
      END_STATE();
    case 44:
      if (lookahead == 'L') ADVANCE(1454);
      END_STATE();
    case 45:
      if (lookahead == 'L') ADVANCE(1437);
      END_STATE();
    case 46:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 48:
      if (lookahead == 'L') ADVANCE(178);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(56);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 51:
      if (lookahead == 'N') ADVANCE(65);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'O') ADVANCE(1461);
      END_STATE();
    case 54:
      if (lookahead == 'O') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(36);
      END_STATE();
    case 56:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 57:
      if (lookahead == 'P') ADVANCE(738);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(1441);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(1443);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 'S') ADVANCE(376);
      END_STATE();
    case 62:
      if (lookahead == 'S') ADVANCE(377);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead == 'b') ADVANCE(405);
      if (lookahead == 'e') ADVANCE(791);
      if (lookahead == 'p') ADVANCE(478);
      END_STATE();
    case 64:
      if (lookahead == 'U') ADVANCE(46);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 66:
      if (lookahead == 'V') ADVANCE(126);
      END_STATE();
    case 67:
      if (lookahead == 'V') ADVANCE(150);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(413);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(806);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(172);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(808);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(809);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(552);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(158);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(698);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(782);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(156);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(211);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(184);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(625);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(171);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(345);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(395);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(556);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(650);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(665);
      if (lookahead == 'u') ADVANCE(419);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(182);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(406);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(696);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(547);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(697);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(185);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(440);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(757);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(701);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(164);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(704);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(705);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(611);
      if (lookahead == 'f') ADVANCE(767);
      if (lookahead == 'h') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(776);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'f') ADVANCE(775);
      if (lookahead == 'h') ADVANCE(304);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 't') ADVANCE(797);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(689);
      if (lookahead == 'c') ADVANCE(137);
      if (lookahead == 'r') ADVANCE(266);
      if (lookahead == 't') ADVANCE(802);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(441);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(789);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(473);
      if (lookahead == 'v') ADVANCE(337);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(792);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead == 'n') ADVANCE(352);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(787);
      if (lookahead == 'i') ADVANCE(510);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == 'e') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(353);
      if (lookahead == 't') ADVANCE(580);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(778);
      if (lookahead == 'e') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(804);
      if (lookahead == 't') ADVANCE(607);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(793);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(790);
      if (lookahead == 'e') ADVANCE(146);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(794);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(788);
      if (lookahead == 'i') ADVANCE(512);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(613);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(495);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead == 'u') ADVANCE(655);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(614);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(796);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(740);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(714);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(745);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(470);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(472);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(637);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(513);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(209);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(667);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(662);
      END_STATE();
    case 132:
      if (lookahead == 'a') ADVANCE(722);
      END_STATE();
    case 133:
      if (lookahead == 'a') ADVANCE(663);
      END_STATE();
    case 134:
      if (lookahead == 'a') ADVANCE(754);
      END_STATE();
    case 135:
      if (lookahead == 'a') ADVANCE(654);
      END_STATE();
    case 136:
      if (lookahead == 'a') ADVANCE(397);
      END_STATE();
    case 137:
      if (lookahead == 'a') ADVANCE(455);
      END_STATE();
    case 138:
      if (lookahead == 'a') ADVANCE(462);
      END_STATE();
    case 139:
      if (lookahead == 'a') ADVANCE(218);
      END_STATE();
    case 140:
      if (lookahead == 'a') ADVANCE(737);
      END_STATE();
    case 141:
      if (lookahead == 'a') ADVANCE(216);
      END_STATE();
    case 142:
      if (lookahead == 'a') ADVANCE(459);
      END_STATE();
    case 143:
      if (lookahead == 'a') ADVANCE(404);
      END_STATE();
    case 144:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 145:
      if (lookahead == 'a') ADVANCE(496);
      END_STATE();
    case 146:
      if (lookahead == 'a') ADVANCE(694);
      END_STATE();
    case 147:
      if (lookahead == 'a') ADVANCE(160);
      END_STATE();
    case 148:
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 149:
      if (lookahead == 'a') ADVANCE(751);
      END_STATE();
    case 150:
      if (lookahead == 'a') ADVANCE(474);
      END_STATE();
    case 151:
      if (lookahead == 'a') ADVANCE(477);
      END_STATE();
    case 152:
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 153:
      if (lookahead == 'a') ADVANCE(188);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(682);
      END_STATE();
    case 155:
      if (lookahead == 'b') ADVANCE(1296);
      END_STATE();
    case 156:
      if (lookahead == 'b') ADVANCE(799);
      END_STATE();
    case 157:
      if (lookahead == 'b') ADVANCE(464);
      END_STATE();
    case 158:
      if (lookahead == 'b') ADVANCE(402);
      END_STATE();
    case 159:
      if (lookahead == 'b') ADVANCE(275);
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(465);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(468);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(292);
      END_STATE();
    case 163:
      if (lookahead == 'b') ADVANCE(469);
      END_STATE();
    case 164:
      if (lookahead == 'b') ADVANCE(439);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(444);
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(251);
      END_STATE();
    case 166:
      if (lookahead == 'c') ADVANCE(1464);
      END_STATE();
    case 167:
      if (lookahead == 'c') ADVANCE(1405);
      END_STATE();
    case 168:
      if (lookahead == 'c') ADVANCE(1284);
      END_STATE();
    case 169:
      if (lookahead == 'c') ADVANCE(442);
      END_STATE();
    case 170:
      if (lookahead == 'c') ADVANCE(774);
      END_STATE();
    case 171:
      if (lookahead == 'c') ADVANCE(378);
      END_STATE();
    case 172:
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 173:
      if (lookahead == 'c') ADVANCE(390);
      END_STATE();
    case 174:
      if (lookahead == 'c') ADVANCE(601);
      if (lookahead == 'd') ADVANCE(274);
      if (lookahead == 'e') ADVANCE(529);
      END_STATE();
    case 175:
      if (lookahead == 'c') ADVANCE(735);
      END_STATE();
    case 176:
      if (lookahead == 'c') ADVANCE(588);
      END_STATE();
    case 177:
      if (lookahead == 'c') ADVANCE(753);
      END_STATE();
    case 178:
      if (lookahead == 'c') ADVANCE(120);
      END_STATE();
    case 179:
      if (lookahead == 'c') ADVANCE(716);
      END_STATE();
    case 180:
      if (lookahead == 'c') ADVANCE(233);
      END_STATE();
    case 181:
      if (lookahead == 'c') ADVANCE(719);
      END_STATE();
    case 182:
      if (lookahead == 'c') ADVANCE(380);
      END_STATE();
    case 183:
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(360);
      END_STATE();
    case 184:
      if (lookahead == 'c') ADVANCE(581);
      END_STATE();
    case 185:
      if (lookahead == 'c') ADVANCE(585);
      END_STATE();
    case 186:
      if (lookahead == 'c') ADVANCE(432);
      END_STATE();
    case 187:
      if (lookahead == 'c') ADVANCE(750);
      END_STATE();
    case 188:
      if (lookahead == 'c') ADVANCE(752);
      END_STATE();
    case 189:
      if (lookahead == 'c') ADVANCE(755);
      END_STATE();
    case 190:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 191:
      if (lookahead == 'd') ADVANCE(1325);
      if (lookahead == 'e') ADVANCE(349);
      END_STATE();
    case 192:
      if (lookahead == 'd') ADVANCE(1325);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead == 'o') ADVANCE(710);
      END_STATE();
    case 193:
      if (lookahead == 'd') ADVANCE(1313);
      END_STATE();
    case 194:
      if (lookahead == 'd') ADVANCE(1411);
      END_STATE();
    case 195:
      if (lookahead == 'd') ADVANCE(1272);
      END_STATE();
    case 196:
      if (lookahead == 'd') ADVANCE(1322);
      END_STATE();
    case 197:
      if (lookahead == 'd') ADVANCE(1389);
      END_STATE();
    case 198:
      if (lookahead == 'd') ADVANCE(1334);
      END_STATE();
    case 199:
      if (lookahead == 'd') ADVANCE(1460);
      END_STATE();
    case 200:
      if (lookahead == 'd') ADVANCE(1402);
      END_STATE();
    case 201:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 202:
      if (lookahead == 'd') ADVANCE(1335);
      END_STATE();
    case 203:
      if (lookahead == 'd') ADVANCE(1429);
      END_STATE();
    case 204:
      if (lookahead == 'd') ADVANCE(1354);
      END_STATE();
    case 205:
      if (lookahead == 'd') ADVANCE(1431);
      END_STATE();
    case 206:
      if (lookahead == 'd') ADVANCE(1356);
      END_STATE();
    case 207:
      if (lookahead == 'd') ADVANCE(1376);
      END_STATE();
    case 208:
      if (lookahead == 'd') ADVANCE(1413);
      END_STATE();
    case 209:
      if (lookahead == 'd') ADVANCE(1410);
      END_STATE();
    case 210:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 211:
      if (lookahead == 'd') ADVANCE(571);
      END_STATE();
    case 212:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 213:
      if (lookahead == 'd') ADVANCE(261);
      if (lookahead == 'i') ADVANCE(590);
      if (lookahead == 's') ADVANCE(256);
      END_STATE();
    case 214:
      if (lookahead == 'd') ADVANCE(80);
      END_STATE();
    case 215:
      if (lookahead == 'd') ADVANCE(238);
      END_STATE();
    case 216:
      if (lookahead == 'd') ADVANCE(262);
      END_STATE();
    case 217:
      if (lookahead == 'd') ADVANCE(96);
      END_STATE();
    case 218:
      if (lookahead == 'd') ADVANCE(599);
      END_STATE();
    case 219:
      if (lookahead == 'd') ADVANCE(98);
      END_STATE();
    case 220:
      if (lookahead == 'e') ADVANCE(484);
      END_STATE();
    case 221:
      if (lookahead == 'e') ADVANCE(445);
      if (lookahead == 'm') ADVANCE(783);
      if (lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 222:
      if (lookahead == 'e') ADVANCE(173);
      END_STATE();
    case 223:
      if (lookahead == 'e') ADVANCE(1451);
      END_STATE();
    case 224:
      if (lookahead == 'e') ADVANCE(1308);
      END_STATE();
    case 225:
      if (lookahead == 'e') ADVANCE(1307);
      END_STATE();
    case 226:
      if (lookahead == 'e') ADVANCE(1406);
      END_STATE();
    case 227:
      if (lookahead == 'e') ADVANCE(1298);
      END_STATE();
    case 228:
      if (lookahead == 'e') ADVANCE(1323);
      END_STATE();
    case 229:
      if (lookahead == 'e') ADVANCE(1371);
      if (lookahead == 't') ADVANCE(1369);
      END_STATE();
    case 230:
      if (lookahead == 'e') ADVANCE(1370);
      if (lookahead == 't') ADVANCE(1368);
      END_STATE();
    case 231:
      if (lookahead == 'e') ADVANCE(1367);
      END_STATE();
    case 232:
      if (lookahead == 'e') ADVANCE(1387);
      END_STATE();
    case 233:
      if (lookahead == 'e') ADVANCE(1415);
      END_STATE();
    case 234:
      if (lookahead == 'e') ADVANCE(1408);
      END_STATE();
    case 235:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 236:
      if (lookahead == 'e') ADVANCE(1404);
      END_STATE();
    case 237:
      if (lookahead == 'e') ADVANCE(1291);
      END_STATE();
    case 238:
      if (lookahead == 'e') ADVANCE(1460);
      END_STATE();
    case 239:
      if (lookahead == 'e') ADVANCE(1402);
      END_STATE();
    case 240:
      if (lookahead == 'e') ADVANCE(1463);
      END_STATE();
    case 241:
      if (lookahead == 'e') ADVANCE(1391);
      END_STATE();
    case 242:
      if (lookahead == 'e') ADVANCE(1282);
      END_STATE();
    case 243:
      if (lookahead == 'e') ADVANCE(1293);
      END_STATE();
    case 244:
      if (lookahead == 'e') ADVANCE(1365);
      END_STATE();
    case 245:
      if (lookahead == 'e') ADVANCE(1364);
      END_STATE();
    case 246:
      if (lookahead == 'e') ADVANCE(1358);
      END_STATE();
    case 247:
      if (lookahead == 'e') ADVANCE(1386);
      END_STATE();
    case 248:
      if (lookahead == 'e') ADVANCE(646);
      END_STATE();
    case 249:
      if (lookahead == 'e') ADVANCE(326);
      END_STATE();
    case 250:
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 251:
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 252:
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'o') ADVANCE(109);
      END_STATE();
    case 253:
      if (lookahead == 'e') ADVANCE(709);
      if (lookahead == 'o') ADVANCE(129);
      END_STATE();
    case 254:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 255:
      if (lookahead == 'e') ADVANCE(629);
      END_STATE();
    case 256:
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead == 'i') ADVANCE(358);
      END_STATE();
    case 257:
      if (lookahead == 'e') ADVANCE(489);
      END_STATE();
    case 258:
      if (lookahead == 'e') ADVANCE(359);
      END_STATE();
    case 259:
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(604);
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 260:
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'l') ADVANCE(608);
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 261:
      if (lookahead == 'e') ADVANCE(328);
      END_STATE();
    case 262:
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 263:
      if (lookahead == 'e') ADVANCE(198);
      END_STATE();
    case 264:
      if (lookahead == 'e') ADVANCE(363);
      END_STATE();
    case 265:
      if (lookahead == 'e') ADVANCE(578);
      END_STATE();
    case 266:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 267:
      if (lookahead == 'e') ADVANCE(200);
      END_STATE();
    case 268:
      if (lookahead == 'e') ADVANCE(684);
      END_STATE();
    case 269:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 270:
      if (lookahead == 'e') ADVANCE(584);
      END_STATE();
    case 271:
      if (lookahead == 'e') ADVANCE(624);
      END_STATE();
    case 272:
      if (lookahead == 'e') ADVANCE(509);
      END_STATE();
    case 273:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 274:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 275:
      if (lookahead == 'e') ADVANCE(673);
      END_STATE();
    case 276:
      if (lookahead == 'e') ADVANCE(457);
      END_STATE();
    case 277:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 278:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 279:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 280:
      if (lookahead == 'e') ADVANCE(642);
      END_STATE();
    case 281:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 282:
      if (lookahead == 'e') ADVANCE(493);
      END_STATE();
    case 283:
      if (lookahead == 'e') ADVANCE(636);
      END_STATE();
    case 284:
      if (lookahead == 'e') ADVANCE(449);
      END_STATE();
    case 285:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 286:
      if (lookahead == 'e') ADVANCE(488);
      END_STATE();
    case 287:
      if (lookahead == 'e') ADVANCE(488);
      if (lookahead == 'm') ADVANCE(783);
      if (lookahead == 'u') ADVANCE(508);
      END_STATE();
    case 288:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 289:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 290:
      if (lookahead == 'e') ADVANCE(652);
      END_STATE();
    case 291:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 292:
      if (lookahead == 'e') ADVANCE(680);
      END_STATE();
    case 293:
      if (lookahead == 'e') ADVANCE(463);
      END_STATE();
    case 294:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 295:
      if (lookahead == 'e') ADVANCE(639);
      END_STATE();
    case 296:
      if (lookahead == 'e') ADVANCE(199);
      END_STATE();
    case 297:
      if (lookahead == 'e') ADVANCE(660);
      END_STATE();
    case 298:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 299:
      if (lookahead == 'e') ADVANCE(656);
      END_STATE();
    case 300:
      if (lookahead == 'e') ADVANCE(664);
      END_STATE();
    case 301:
      if (lookahead == 'e') ADVANCE(635);
      END_STATE();
    case 302:
      if (lookahead == 'e') ADVANCE(640);
      END_STATE();
    case 303:
      if (lookahead == 'e') ADVANCE(739);
      END_STATE();
    case 304:
      if (lookahead == 'e') ADVANCE(657);
      END_STATE();
    case 305:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 306:
      if (lookahead == 'e') ADVANCE(476);
      END_STATE();
    case 307:
      if (lookahead == 'e') ADVANCE(688);
      END_STATE();
    case 308:
      if (lookahead == 'e') ADVANCE(461);
      END_STATE();
    case 309:
      if (lookahead == 'e') ADVANCE(668);
      END_STATE();
    case 310:
      if (lookahead == 'e') ADVANCE(217);
      END_STATE();
    case 311:
      if (lookahead == 'e') ADVANCE(700);
      END_STATE();
    case 312:
      if (lookahead == 'e') ADVANCE(538);
      END_STATE();
    case 313:
      if (lookahead == 'e') ADVANCE(540);
      END_STATE();
    case 314:
      if (lookahead == 'e') ADVANCE(543);
      END_STATE();
    case 315:
      if (lookahead == 'e') ADVANCE(544);
      END_STATE();
    case 316:
      if (lookahead == 'e') ADVANCE(365);
      END_STATE();
    case 317:
      if (lookahead == 'e') ADVANCE(367);
      END_STATE();
    case 318:
      if (lookahead == 'e') ADVANCE(504);
      END_STATE();
    case 319:
      if (lookahead == 'e') ADVANCE(368);
      END_STATE();
    case 320:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 321:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 322:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 323:
      if (lookahead == 'f') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(1303);
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 324:
      if (lookahead == 'f') ADVANCE(1304);
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 325:
      if (lookahead == 'f') ADVANCE(1310);
      END_STATE();
    case 326:
      if (lookahead == 'f') ADVANCE(819);
      END_STATE();
    case 327:
      if (lookahead == 'f') ADVANCE(1327);
      END_STATE();
    case 328:
      if (lookahead == 'f') ADVANCE(1328);
      END_STATE();
    case 329:
      if (lookahead == 'f') ADVANCE(1460);
      END_STATE();
    case 330:
      if (lookahead == 'f') ADVANCE(1372);
      END_STATE();
    case 331:
      if (lookahead == 'f') ADVANCE(1425);
      END_STATE();
    case 332:
      if (lookahead == 'f') ADVANCE(1427);
      END_STATE();
    case 333:
      if (lookahead == 'f') ADVANCE(1375);
      END_STATE();
    case 334:
      if (lookahead == 'f') ADVANCE(327);
      END_STATE();
    case 335:
      if (lookahead == 'f') ADVANCE(327);
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'n') ADVANCE(193);
      if (lookahead == 'r') ADVANCE(651);
      END_STATE();
    case 336:
      if (lookahead == 'f') ADVANCE(399);
      if (lookahead == 'w') ADVANCE(423);
      END_STATE();
    case 337:
      if (lookahead == 'f') ADVANCE(679);
      END_STATE();
    case 338:
      if (lookahead == 'f') ADVANCE(330);
      END_STATE();
    case 339:
      if (lookahead == 'f') ADVANCE(723);
      END_STATE();
    case 340:
      if (lookahead == 'f') ADVANCE(724);
      END_STATE();
    case 341:
      if (lookahead == 'f') ADVANCE(725);
      END_STATE();
    case 342:
      if (lookahead == 'f') ADVANCE(727);
      END_STATE();
    case 343:
      if (lookahead == 'f') ADVANCE(407);
      END_STATE();
    case 344:
      if (lookahead == 'f') ADVANCE(479);
      END_STATE();
    case 345:
      if (lookahead == 'f') ADVANCE(596);
      END_STATE();
    case 346:
      if (lookahead == 'f') ADVANCE(409);
      END_STATE();
    case 347:
      if (lookahead == 'f') ADVANCE(410);
      END_STATE();
    case 348:
      if (lookahead == 'f') ADVANCE(416);
      END_STATE();
    case 349:
      if (lookahead == 'g') ADVANCE(1416);
      END_STATE();
    case 350:
      if (lookahead == 'g') ADVANCE(1320);
      END_STATE();
    case 351:
      if (lookahead == 'g') ADVANCE(1395);
      END_STATE();
    case 352:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 353:
      if (lookahead == 'g') ADVANCE(535);
      if (lookahead == 'z') ADVANCE(265);
      END_STATE();
    case 354:
      if (lookahead == 'g') ADVANCE(527);
      END_STATE();
    case 355:
      if (lookahead == 'g') ADVANCE(550);
      END_STATE();
    case 356:
      if (lookahead == 'g') ADVANCE(560);
      END_STATE();
    case 357:
      if (lookahead == 'g') ADVANCE(512);
      END_STATE();
    case 358:
      if (lookahead == 'g') ADVANCE(539);
      END_STATE();
    case 359:
      if (lookahead == 'g') ADVANCE(280);
      END_STATE();
    case 360:
      if (lookahead == 'g') ADVANCE(541);
      END_STATE();
    case 361:
      if (lookahead == 'g') ADVANCE(542);
      END_STATE();
    case 362:
      if (lookahead == 'g') ADVANCE(545);
      END_STATE();
    case 363:
      if (lookahead == 'g') ADVANCE(134);
      END_STATE();
    case 364:
      if (lookahead == 'g') ADVANCE(546);
      END_STATE();
    case 365:
      if (lookahead == 'g') ADVANCE(295);
      END_STATE();
    case 366:
      if (lookahead == 'g') ADVANCE(548);
      END_STATE();
    case 367:
      if (lookahead == 'g') ADVANCE(301);
      END_STATE();
    case 368:
      if (lookahead == 'g') ADVANCE(302);
      END_STATE();
    case 369:
      if (lookahead == 'g') ADVANCE(557);
      END_STATE();
    case 370:
      if (lookahead == 'g') ADVANCE(559);
      END_STATE();
    case 371:
      if (lookahead == 'h') ADVANCE(135);
      END_STATE();
    case 372:
      if (lookahead == 'h') ADVANCE(272);
      END_STATE();
    case 373:
      if (lookahead == 'h') ADVANCE(84);
      END_STATE();
    case 374:
      if (lookahead == 'h') ADVANCE(398);
      END_STATE();
    case 375:
      if (lookahead == 'h') ADVANCE(415);
      END_STATE();
    case 376:
      if (lookahead == 'h') ADVANCE(422);
      END_STATE();
    case 377:
      if (lookahead == 'h') ADVANCE(426);
      END_STATE();
    case 378:
      if (lookahead == 'h') ADVANCE(133);
      END_STATE();
    case 379:
      if (lookahead == 'h') ADVANCE(297);
      END_STATE();
    case 380:
      if (lookahead == 'h') ADVANCE(154);
      END_STATE();
    case 381:
      if (lookahead == 'i') ADVANCE(707);
      END_STATE();
    case 382:
      if (lookahead == 'i') ADVANCE(590);
      END_STATE();
    case 383:
      if (lookahead == 'i') ADVANCE(805);
      END_STATE();
    case 384:
      if (lookahead == 'i') ADVANCE(354);
      if (lookahead == 'l') ADVANCE(574);
      END_STATE();
    case 385:
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 386:
      if (lookahead == 'i') ADVANCE(454);
      END_STATE();
    case 387:
      if (lookahead == 'i') ADVANCE(338);
      END_STATE();
    case 388:
      if (lookahead == 'i') ADVANCE(711);
      if (lookahead == 's') ADVANCE(626);
      END_STATE();
    case 389:
      if (lookahead == 'i') ADVANCE(456);
      END_STATE();
    case 390:
      if (lookahead == 'i') ADVANCE(343);
      END_STATE();
    case 391:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 392:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 393:
      if (lookahead == 'i') ADVANCE(168);
      END_STATE();
    case 394:
      if (lookahead == 'i') ADVANCE(530);
      END_STATE();
    case 395:
      if (lookahead == 'i') ADVANCE(706);
      END_STATE();
    case 396:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 397:
      if (lookahead == 'i') ADVANCE(526);
      END_STATE();
    case 398:
      if (lookahead == 'i') ADVANCE(339);
      END_STATE();
    case 399:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 400:
      if (lookahead == 'i') ADVANCE(528);
      END_STATE();
    case 401:
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 402:
      if (lookahead == 'i') ADVANCE(758);
      END_STATE();
    case 403:
      if (lookahead == 'i') ADVANCE(730);
      END_STATE();
    case 404:
      if (lookahead == 'i') ADVANCE(549);
      END_STATE();
    case 405:
      if (lookahead == 'i') ADVANCE(734);
      END_STATE();
    case 406:
      if (lookahead == 'i') ADVANCE(531);
      END_STATE();
    case 407:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 408:
      if (lookahead == 'i') ADVANCE(749);
      END_STATE();
    case 409:
      if (lookahead == 'i') ADVANCE(285);
      END_STATE();
    case 410:
      if (lookahead == 'i') ADVANCE(293);
      END_STATE();
    case 411:
      if (lookahead == 'i') ADVANCE(780);
      END_STATE();
    case 412:
      if (lookahead == 'i') ADVANCE(653);
      END_STATE();
    case 413:
      if (lookahead == 'i') ADVANCE(551);
      if (lookahead == 's') ADVANCE(183);
      if (lookahead == 'u') ADVANCE(563);
      END_STATE();
    case 414:
      if (lookahead == 'i') ADVANCE(595);
      END_STATE();
    case 415:
      if (lookahead == 'i') ADVANCE(340);
      END_STATE();
    case 416:
      if (lookahead == 'i') ADVANCE(306);
      END_STATE();
    case 417:
      if (lookahead == 'i') ADVANCE(355);
      END_STATE();
    case 418:
      if (lookahead == 'i') ADVANCE(781);
      END_STATE();
    case 419:
      if (lookahead == 'i') ADVANCE(666);
      END_STATE();
    case 420:
      if (lookahead == 'i') ADVANCE(598);
      END_STATE();
    case 421:
      if (lookahead == 'i') ADVANCE(466);
      END_STATE();
    case 422:
      if (lookahead == 'i') ADVANCE(341);
      END_STATE();
    case 423:
      if (lookahead == 'i') ADVANCE(693);
      END_STATE();
    case 424:
      if (lookahead == 'i') ADVANCE(356);
      END_STATE();
    case 425:
      if (lookahead == 'i') ADVANCE(536);
      END_STATE();
    case 426:
      if (lookahead == 'i') ADVANCE(342);
      END_STATE();
    case 427:
      if (lookahead == 'i') ADVANCE(370);
      END_STATE();
    case 428:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 429:
      if (lookahead == 'i') ADVANCE(357);
      END_STATE();
    case 430:
      if (lookahead == 'i') ADVANCE(610);
      END_STATE();
    case 431:
      if (lookahead == 'i') ADVANCE(589);
      if (lookahead == 's') ADVANCE(255);
      END_STATE();
    case 432:
      if (lookahead == 'i') ADVANCE(346);
      END_STATE();
    case 433:
      if (lookahead == 'i') ADVANCE(161);
      END_STATE();
    case 434:
      if (lookahead == 'i') ADVANCE(361);
      END_STATE();
    case 435:
      if (lookahead == 'i') ADVANCE(362);
      END_STATE();
    case 436:
      if (lookahead == 'i') ADVANCE(364);
      END_STATE();
    case 437:
      if (lookahead == 'i') ADVANCE(366);
      END_STATE();
    case 438:
      if (lookahead == 'i') ADVANCE(369);
      END_STATE();
    case 439:
      if (lookahead == 'i') ADVANCE(760);
      END_STATE();
    case 440:
      if (lookahead == 'i') ADVANCE(561);
      END_STATE();
    case 441:
      if (lookahead == 'k') ADVANCE(1317);
      END_STATE();
    case 442:
      if (lookahead == 'k') ADVANCE(1409);
      END_STATE();
    case 443:
      if (lookahead == 'l') ADVANCE(384);
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 444:
      if (lookahead == 'l') ADVANCE(88);
      END_STATE();
    case 445:
      if (lookahead == 'l') ADVANCE(114);
      if (lookahead == 'm') ADVANCE(69);
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 446:
      if (lookahead == 'l') ADVANCE(1407);
      END_STATE();
    case 447:
      if (lookahead == 'l') ADVANCE(1315);
      END_STATE();
    case 448:
      if (lookahead == 'l') ADVANCE(1314);
      END_STATE();
    case 449:
      if (lookahead == 'l') ADVANCE(1402);
      END_STATE();
    case 450:
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 451:
      if (lookahead == 'l') ADVANCE(136);
      if (lookahead == 't') ADVANCE(632);
      END_STATE();
    case 452:
      if (lookahead == 'l') ADVANCE(568);
      END_STATE();
    case 453:
      if (lookahead == 'l') ADVANCE(795);
      END_STATE();
    case 454:
      if (lookahead == 'l') ADVANCE(446);
      END_STATE();
    case 455:
      if (lookahead == 'l') ADVANCE(447);
      END_STATE();
    case 456:
      if (lookahead == 'l') ADVANCE(746);
      END_STATE();
    case 457:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 458:
      if (lookahead == 'l') ADVANCE(417);
      END_STATE();
    case 459:
      if (lookahead == 'l') ADVANCE(448);
      END_STATE();
    case 460:
      if (lookahead == 'l') ADVANCE(582);
      END_STATE();
    case 461:
      if (lookahead == 'l') ADVANCE(483);
      END_STATE();
    case 462:
      if (lookahead == 'l') ADVANCE(396);
      END_STATE();
    case 463:
      if (lookahead == 'l') ADVANCE(219);
      END_STATE();
    case 464:
      if (lookahead == 'l') ADVANCE(237);
      END_STATE();
    case 465:
      if (lookahead == 'l') ADVANCE(241);
      END_STATE();
    case 466:
      if (lookahead == 'l') ADVANCE(242);
      END_STATE();
    case 467:
      if (lookahead == 'l') ADVANCE(318);
      END_STATE();
    case 468:
      if (lookahead == 'l') ADVANCE(246);
      END_STATE();
    case 469:
      if (lookahead == 'l') ADVANCE(322);
      END_STATE();
    case 470:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 471:
      if (lookahead == 'l') ADVANCE(690);
      if (lookahead == 'n') ADVANCE(193);
      END_STATE();
    case 472:
      if (lookahead == 'l') ADVANCE(770);
      END_STATE();
    case 473:
      if (lookahead == 'l') ADVANCE(687);
      END_STATE();
    case 474:
      if (lookahead == 'l') ADVANCE(771);
      END_STATE();
    case 475:
      if (lookahead == 'l') ADVANCE(277);
      END_STATE();
    case 476:
      if (lookahead == 'l') ADVANCE(214);
      END_STATE();
    case 477:
      if (lookahead == 'l') ADVANCE(772);
      END_STATE();
    case 478:
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 479:
      if (lookahead == 'l') ADVANCE(606);
      END_STATE();
    case 480:
      if (lookahead == 'l') ADVANCE(608);
      END_STATE();
    case 481:
      if (lookahead == 'l') ADVANCE(427);
      END_STATE();
    case 482:
      if (lookahead == 'l') ADVANCE(436);
      END_STATE();
    case 483:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 484:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 485:
      if (lookahead == 'm') ADVANCE(784);
      END_STATE();
    case 486:
      if (lookahead == 'm') ADVANCE(57);
      END_STATE();
    case 487:
      if (lookahead == 'm') ADVANCE(622);
      END_STATE();
    case 488:
      if (lookahead == 'm') ADVANCE(69);
      END_STATE();
    case 489:
      if (lookahead == 'm') ADVANCE(162);
      END_STATE();
    case 490:
      if (lookahead == 'm') ADVANCE(391);
      END_STATE();
    case 491:
      if (lookahead == 'm') ADVANCE(623);
      END_STATE();
    case 492:
      if (lookahead == 'm') ADVANCE(344);
      END_STATE();
    case 493:
      if (lookahead == 'm') ADVANCE(570);
      END_STATE();
    case 494:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 495:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 496:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 497:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 498:
      if (lookahead == 'm') ADVANCE(312);
      END_STATE();
    case 499:
      if (lookahead == 'm') ADVANCE(393);
      END_STATE();
    case 500:
      if (lookahead == 'm') ADVANCE(408);
      END_STATE();
    case 501:
      if (lookahead == 'm') ADVANCE(43);
      END_STATE();
    case 502:
      if (lookahead == 'm') ADVANCE(425);
      END_STATE();
    case 503:
      if (lookahead == 'm') ADVANCE(313);
      END_STATE();
    case 504:
      if (lookahead == 'm') ADVANCE(314);
      END_STATE();
    case 505:
      if (lookahead == 'n') ADVANCE(388);
      END_STATE();
    case 506:
      if (lookahead == 'n') ADVANCE(1303);
      END_STATE();
    case 507:
      if (lookahead == 'n') ADVANCE(213);
      END_STATE();
    case 508:
      if (lookahead == 'n') ADVANCE(1324);
      END_STATE();
    case 509:
      if (lookahead == 'n') ADVANCE(1306);
      END_STATE();
    case 510:
      if (lookahead == 'n') ADVANCE(1423);
      END_STATE();
    case 511:
      if (lookahead == 'n') ADVANCE(823);
      END_STATE();
    case 512:
      if (lookahead == 'n') ADVANCE(1460);
      END_STATE();
    case 513:
      if (lookahead == 'n') ADVANCE(1384);
      END_STATE();
    case 514:
      if (lookahead == 'n') ADVANCE(1456);
      END_STATE();
    case 515:
      if (lookahead == 'n') ADVANCE(1346);
      END_STATE();
    case 516:
      if (lookahead == 'n') ADVANCE(708);
      if (lookahead == 'v') ADVANCE(29);
      END_STATE();
    case 517:
      if (lookahead == 'n') ADVANCE(777);
      END_STATE();
    case 518:
      if (lookahead == 'n') ADVANCE(431);
      END_STATE();
    case 519:
      if (lookahead == 'n') ADVANCE(683);
      END_STATE();
    case 520:
      if (lookahead == 'n') ADVANCE(180);
      END_STATE();
    case 521:
      if (lookahead == 'n') ADVANCE(779);
      END_STATE();
    case 522:
      if (lookahead == 'n') ADVANCE(196);
      END_STATE();
    case 523:
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 524:
      if (lookahead == 'n') ADVANCE(350);
      END_STATE();
    case 525:
      if (lookahead == 'n') ADVANCE(351);
      END_STATE();
    case 526:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 527:
      if (lookahead == 'n') ADVANCE(578);
      END_STATE();
    case 528:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 529:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 530:
      if (lookahead == 'n') ADVANCE(748);
      END_STATE();
    case 531:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 532:
      if (lookahead == 'n') ADVANCE(718);
      END_STATE();
    case 533:
      if (lookahead == 'n') ADVANCE(453);
      END_STATE();
    case 534:
      if (lookahead == 'n') ADVANCE(382);
      END_STATE();
    case 535:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 536:
      if (lookahead == 'n') ADVANCE(720);
      END_STATE();
    case 537:
      if (lookahead == 'n') ADVANCE(721);
      END_STATE();
    case 538:
      if (lookahead == 'n') ADVANCE(731);
      END_STATE();
    case 539:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 540:
      if (lookahead == 'n') ADVANCE(726);
      END_STATE();
    case 541:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 542:
      if (lookahead == 'n') ADVANCE(305);
      END_STATE();
    case 543:
      if (lookahead == 'n') ADVANCE(715);
      END_STATE();
    case 544:
      if (lookahead == 'n') ADVANCE(736);
      END_STATE();
    case 545:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 546:
      if (lookahead == 'n') ADVANCE(294);
      END_STATE();
    case 547:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 548:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 549:
      if (lookahead == 'n') ADVANCE(83);
      END_STATE();
    case 550:
      if (lookahead == 'n') ADVANCE(586);
      END_STATE();
    case 551:
      if (lookahead == 'n') ADVANCE(741);
      END_STATE();
    case 552:
      if (lookahead == 'n') ADVANCE(145);
      if (lookahead == 't') ADVANCE(801);
      END_STATE();
    case 553:
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 554:
      if (lookahead == 'n') ADVANCE(498);
      END_STATE();
    case 555:
      if (lookahead == 'n') ADVANCE(669);
      END_STATE();
    case 556:
      if (lookahead == 'n') ADVANCE(600);
      END_STATE();
    case 557:
      if (lookahead == 'n') ADVANCE(310);
      END_STATE();
    case 558:
      if (lookahead == 'n') ADVANCE(756);
      END_STATE();
    case 559:
      if (lookahead == 'n') ADVANCE(503);
      END_STATE();
    case 560:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 561:
      if (lookahead == 'n') ADVANCE(763);
      END_STATE();
    case 562:
      if (lookahead == 'n') ADVANCE(764);
      END_STATE();
    case 563:
      if (lookahead == 'n') ADVANCE(703);
      END_STATE();
    case 564:
      if (lookahead == 'n') ADVANCE(189);
      END_STATE();
    case 565:
      if (lookahead == 'o') ADVANCE(576);
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 566:
      if (lookahead == 'o') ADVANCE(385);
      END_STATE();
    case 567:
      if (lookahead == 'o') ADVANCE(490);
      END_STATE();
    case 568:
      if (lookahead == 'o') ADVANCE(155);
      END_STATE();
    case 569:
      if (lookahead == 'o') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 570:
      if (lookahead == 'o') ADVANCE(612);
      END_STATE();
    case 571:
      if (lookahead == 'o') ADVANCE(765);
      END_STATE();
    case 572:
      if (lookahead == 'o') ADVANCE(492);
      END_STATE();
    case 573:
      if (lookahead == 'o') ADVANCE(166);
      END_STATE();
    case 574:
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 575:
      if (lookahead == 'o') ADVANCE(475);
      END_STATE();
    case 576:
      if (lookahead == 'o') ADVANCE(475);
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 577:
      if (lookahead == 'o') ADVANCE(486);
      END_STATE();
    case 578:
      if (lookahead == 'o') ADVANCE(329);
      END_STATE();
    case 579:
      if (lookahead == 'o') ADVANCE(501);
      END_STATE();
    case 580:
      if (lookahead == 'o') ADVANCE(644);
      if (lookahead == 'r') ADVANCE(587);
      END_STATE();
    case 581:
      if (lookahead == 'o') ADVANCE(487);
      END_STATE();
    case 582:
      if (lookahead == 'o') ADVANCE(169);
      END_STATE();
    case 583:
      if (lookahead == 'o') ADVANCE(634);
      END_STATE();
    case 584:
      if (lookahead == 'o') ADVANCE(331);
      END_STATE();
    case 585:
      if (lookahead == 'o') ADVANCE(491);
      END_STATE();
    case 586:
      if (lookahead == 'o') ADVANCE(332);
      END_STATE();
    case 587:
      if (lookahead == 'o') ADVANCE(524);
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 588:
      if (lookahead == 'o') ADVANCE(215);
      END_STATE();
    case 589:
      if (lookahead == 'o') ADVANCE(511);
      END_STATE();
    case 590:
      if (lookahead == 'o') ADVANCE(511);
      if (lookahead == 't') ADVANCE(1382);
      END_STATE();
    case 591:
      if (lookahead == 'o') ADVANCE(554);
      END_STATE();
    case 592:
      if (lookahead == 'o') ADVANCE(575);
      END_STATE();
    case 593:
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 594:
      if (lookahead == 'o') ADVANCE(645);
      END_STATE();
    case 595:
      if (lookahead == 'o') ADVANCE(514);
      END_STATE();
    case 596:
      if (lookahead == 'o') ADVANCE(647);
      END_STATE();
    case 597:
      if (lookahead == 'o') ADVANCE(729);
      END_STATE();
    case 598:
      if (lookahead == 'o') ADVANCE(515);
      END_STATE();
    case 599:
      if (lookahead == 'o') ADVANCE(533);
      END_STATE();
    case 600:
      if (lookahead == 'o') ADVANCE(555);
      END_STATE();
    case 601:
      if (lookahead == 'o') ADVANCE(521);
      END_STATE();
    case 602:
      if (lookahead == 'o') ADVANCE(768);
      if (lookahead == 'u') ADVANCE(389);
      END_STATE();
    case 603:
      if (lookahead == 'o') ADVANCE(502);
      END_STATE();
    case 604:
      if (lookahead == 'o') ADVANCE(123);
      END_STATE();
    case 605:
      if (lookahead == 'o') ADVANCE(681);
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 606:
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 607:
      if (lookahead == 'o') ADVANCE(671);
      if (lookahead == 'r') ADVANCE(773);
      END_STATE();
    case 608:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 609:
      if (lookahead == 'o') ADVANCE(499);
      END_STATE();
    case 610:
      if (lookahead == 'o') ADVANCE(553);
      END_STATE();
    case 611:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 612:
      if (lookahead == 'p') ADVANCE(1299);
      END_STATE();
    case 613:
      if (lookahead == 'p') ADVANCE(1362);
      END_STATE();
    case 614:
      if (lookahead == 'p') ADVANCE(1332);
      END_STATE();
    case 615:
      if (lookahead == 'p') ADVANCE(232);
      END_STATE();
    case 616:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 617:
      if (lookahead == 'p') ADVANCE(243);
      END_STATE();
    case 618:
      if (lookahead == 'p') ADVANCE(238);
      END_STATE();
    case 619:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 620:
      if (lookahead == 'p') ADVANCE(298);
      END_STATE();
    case 621:
      if (lookahead == 'p') ADVANCE(247);
      END_STATE();
    case 622:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 623:
      if (lookahead == 'p') ADVANCE(467);
      END_STATE();
    case 624:
      if (lookahead == 'p') ADVANCE(670);
      END_STATE();
    case 625:
      if (lookahead == 'p') ADVANCE(299);
      END_STATE();
    case 626:
      if (lookahead == 'p') ADVANCE(320);
      END_STATE();
    case 627:
      if (lookahead == 'q') ADVANCE(89);
      END_STATE();
    case 628:
      if (lookahead == 'q') ADVANCE(1366);
      END_STATE();
    case 629:
      if (lookahead == 'q') ADVANCE(1316);
      END_STATE();
    case 630:
      if (lookahead == 'q') ADVANCE(70);
      END_STATE();
    case 631:
      if (lookahead == 'q') ADVANCE(87);
      END_STATE();
    case 632:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 633:
      if (lookahead == 'r') ADVANCE(1326);
      END_STATE();
    case 634:
      if (lookahead == 'r') ADVANCE(1330);
      END_STATE();
    case 635:
      if (lookahead == 'r') ADVANCE(1460);
      END_STATE();
    case 636:
      if (lookahead == 'r') ADVANCE(1397);
      END_STATE();
    case 637:
      if (lookahead == 'r') ADVANCE(1350);
      END_STATE();
    case 638:
      if (lookahead == 'r') ADVANCE(1373);
      END_STATE();
    case 639:
      if (lookahead == 'r') ADVANCE(1352);
      END_STATE();
    case 640:
      if (lookahead == 'r') ADVANCE(1393);
      END_STATE();
    case 641:
      if (lookahead == 'r') ADVANCE(649);
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 642:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 643:
      if (lookahead == 'r') ADVANCE(766);
      END_STATE();
    case 644:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 645:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 646:
      if (lookahead == 'r') ADVANCE(411);
      END_STATE();
    case 647:
      if (lookahead == 'r') ADVANCE(786);
      END_STATE();
    case 648:
      if (lookahead == 'r') ADVANCE(573);
      END_STATE();
    case 649:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 650:
      if (lookahead == 'r') ADVANCE(485);
      END_STATE();
    case 651:
      if (lookahead == 'r') ADVANCE(583);
      END_STATE();
    case 652:
      if (lookahead == 'r') ADVANCE(686);
      END_STATE();
    case 653:
      if (lookahead == 'r') ADVANCE(591);
      END_STATE();
    case 654:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 655:
      if (lookahead == 'r') ADVANCE(227);
      END_STATE();
    case 656:
      if (lookahead == 'r') ADVANCE(500);
      END_STATE();
    case 657:
      if (lookahead == 'r') ADVANCE(392);
      END_STATE();
    case 658:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 659:
      if (lookahead == 'r') ADVANCE(428);
      END_STATE();
    case 660:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 661:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 662:
      if (lookahead == 'r') ADVANCE(208);
      END_STATE();
    case 663:
      if (lookahead == 'r') ADVANCE(85);
      END_STATE();
    case 664:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 665:
      if (lookahead == 'r') ADVANCE(284);
      END_STATE();
    case 666:
      if (lookahead == 'r') ADVANCE(239);
      END_STATE();
    case 667:
      if (lookahead == 'r') ADVANCE(733);
      END_STATE();
    case 668:
      if (lookahead == 'r') ADVANCE(288);
      END_STATE();
    case 669:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 670:
      if (lookahead == 'r') ADVANCE(311);
      END_STATE();
    case 671:
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 672:
      if (lookahead == 'r') ADVANCE(572);
      END_STATE();
    case 673:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 674:
      if (lookahead == 'r') ADVANCE(658);
      END_STATE();
    case 675:
      if (lookahead == 'r') ADVANCE(577);
      END_STATE();
    case 676:
      if (lookahead == 'r') ADVANCE(661);
      END_STATE();
    case 677:
      if (lookahead == 'r') ADVANCE(579);
      END_STATE();
    case 678:
      if (lookahead == 'r') ADVANCE(291);
      END_STATE();
    case 679:
      if (lookahead == 'r') ADVANCE(603);
      END_STATE();
    case 680:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 681:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 682:
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 683:
      if (lookahead == 's') ADVANCE(713);
      END_STATE();
    case 684:
      if (lookahead == 's') ADVANCE(1460);
      END_STATE();
    case 685:
      if (lookahead == 's') ADVANCE(374);
      END_STATE();
    case 686:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 687:
      if (lookahead == 's') ADVANCE(223);
      END_STATE();
    case 688:
      if (lookahead == 's') ADVANCE(747);
      END_STATE();
    case 689:
      if (lookahead == 's') ADVANCE(224);
      END_STATE();
    case 690:
      if (lookahead == 's') ADVANCE(225);
      END_STATE();
    case 691:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 692:
      if (lookahead == 's') ADVANCE(717);
      END_STATE();
    case 693:
      if (lookahead == 's') ADVANCE(321);
      END_STATE();
    case 694:
      if (lookahead == 's') ADVANCE(239);
      END_STATE();
    case 695:
      if (lookahead == 's') ADVANCE(744);
      END_STATE();
    case 696:
      if (lookahead == 's') ADVANCE(303);
      END_STATE();
    case 697:
      if (lookahead == 's') ADVANCE(375);
      END_STATE();
    case 698:
      if (lookahead == 's') ADVANCE(434);
      END_STATE();
    case 699:
      if (lookahead == 's') ADVANCE(424);
      END_STATE();
    case 700:
      if (lookahead == 's') ADVANCE(315);
      END_STATE();
    case 701:
      if (lookahead == 's') ADVANCE(429);
      END_STATE();
    case 702:
      if (lookahead == 's') ADVANCE(699);
      END_STATE();
    case 703:
      if (lookahead == 's') ADVANCE(435);
      END_STATE();
    case 704:
      if (lookahead == 's') ADVANCE(437);
      END_STATE();
    case 705:
      if (lookahead == 's') ADVANCE(438);
      END_STATE();
    case 706:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 707:
      if (lookahead == 't') ADVANCE(336);
      END_STATE();
    case 708:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 709:
      if (lookahead == 't') ADVANCE(1301);
      END_STATE();
    case 710:
      if (lookahead == 't') ADVANCE(1342);
      END_STATE();
    case 711:
      if (lookahead == 't') ADVANCE(1458);
      END_STATE();
    case 712:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 713:
      if (lookahead == 't') ADVANCE(1280);
      if (lookahead == 'u') ADVANCE(494);
      END_STATE();
    case 714:
      if (lookahead == 't') ADVANCE(1292);
      END_STATE();
    case 715:
      if (lookahead == 't') ADVANCE(1460);
      END_STATE();
    case 716:
      if (lookahead == 't') ADVANCE(821);
      END_STATE();
    case 717:
      if (lookahead == 't') ADVANCE(1402);
      END_STATE();
    case 718:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 719:
      if (lookahead == 't') ADVANCE(1288);
      END_STATE();
    case 720:
      if (lookahead == 't') ADVANCE(1433);
      END_STATE();
    case 721:
      if (lookahead == 't') ADVANCE(1374);
      END_STATE();
    case 722:
      if (lookahead == 't') ADVANCE(1435);
      END_STATE();
    case 723:
      if (lookahead == 't') ADVANCE(1336);
      END_STATE();
    case 724:
      if (lookahead == 't') ADVANCE(1338);
      END_STATE();
    case 725:
      if (lookahead == 't') ADVANCE(1377);
      END_STATE();
    case 726:
      if (lookahead == 't') ADVANCE(1452);
      END_STATE();
    case 727:
      if (lookahead == 't') ADVANCE(1379);
      END_STATE();
    case 728:
      if (lookahead == 't') ADVANCE(567);
      END_STATE();
    case 729:
      if (lookahead == 't') ADVANCE(379);
      END_STATE();
    case 730:
      if (lookahead == 't') ADVANCE(373);
      END_STATE();
    case 731:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 732:
      if (lookahead == 't') ADVANCE(605);
      END_STATE();
    case 733:
      if (lookahead == 't') ADVANCE(769);
      END_STATE();
    case 734:
      if (lookahead == 't') ADVANCE(691);
      END_STATE();
    case 735:
      if (lookahead == 't') ADVANCE(414);
      END_STATE();
    case 736:
      if (lookahead == 't') ADVANCE(152);
      END_STATE();
    case 737:
      if (lookahead == 't') ADVANCE(433);
      END_STATE();
    case 738:
      if (lookahead == 't') ADVANCE(638);
      END_STATE();
    case 739:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 740:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 741:
      if (lookahead == 't') ADVANCE(316);
      END_STATE();
    case 742:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 743:
      if (lookahead == 't') ADVANCE(296);
      END_STATE();
    case 744:
      if (lookahead == 't') ADVANCE(130);
      END_STATE();
    case 745:
      if (lookahead == 't') ADVANCE(421);
      END_STATE();
    case 746:
      if (lookahead == 't') ADVANCE(400);
      END_STATE();
    case 747:
      if (lookahead == 't') ADVANCE(659);
      END_STATE();
    case 748:
      if (lookahead == 't') ADVANCE(283);
      END_STATE();
    case 749:
      if (lookahead == 't') ADVANCE(743);
      END_STATE();
    case 750:
      if (lookahead == 't') ADVANCE(290);
      END_STATE();
    case 751:
      if (lookahead == 't') ADVANCE(401);
      END_STATE();
    case 752:
      if (lookahead == 't') ADVANCE(300);
      END_STATE();
    case 753:
      if (lookahead == 't') ADVANCE(798);
      END_STATE();
    case 754:
      if (lookahead == 't') ADVANCE(418);
      END_STATE();
    case 755:
      if (lookahead == 't') ADVANCE(420);
      END_STATE();
    case 756:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 757:
      if (lookahead == 't') ADVANCE(800);
      END_STATE();
    case 758:
      if (lookahead == 't') ADVANCE(347);
      END_STATE();
    case 759:
      if (lookahead == 't') ADVANCE(430);
      END_STATE();
    case 760:
      if (lookahead == 't') ADVANCE(348);
      END_STATE();
    case 761:
      if (lookahead == 't') ADVANCE(803);
      END_STATE();
    case 762:
      if (lookahead == 't') ADVANCE(609);
      END_STATE();
    case 763:
      if (lookahead == 't') ADVANCE(317);
      END_STATE();
    case 764:
      if (lookahead == 't') ADVANCE(319);
      END_STATE();
    case 765:
      if (lookahead == 'u') ADVANCE(157);
      END_STATE();
    case 766:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 767:
      if (lookahead == 'u') ADVANCE(523);
      END_STATE();
    case 768:
      if (lookahead == 'u') ADVANCE(522);
      END_STATE();
    case 769:
      if (lookahead == 'u') ADVANCE(616);
      END_STATE();
    case 770:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 771:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 772:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 773:
      if (lookahead == 'u') ADVANCE(179);
      END_STATE();
    case 774:
      if (lookahead == 'u') ADVANCE(759);
      END_STATE();
    case 775:
      if (lookahead == 'u') ADVANCE(564);
      END_STATE();
    case 776:
      if (lookahead == 'v') ADVANCE(51);
      END_STATE();
    case 777:
      if (lookahead == 'v') ADVANCE(412);
      END_STATE();
    case 778:
      if (lookahead == 'v') ADVANCE(228);
      END_STATE();
    case 779:
      if (lookahead == 'v') ADVANCE(86);
      END_STATE();
    case 780:
      if (lookahead == 'v') ADVANCE(235);
      END_STATE();
    case 781:
      if (lookahead == 'v') ADVANCE(238);
      END_STATE();
    case 782:
      if (lookahead == 'v') ADVANCE(151);
      END_STATE();
    case 783:
      if (lookahead == 'w') ADVANCE(1414);
      END_STATE();
    case 784:
      if (lookahead == 'w') ADVANCE(1412);
      END_STATE();
    case 785:
      if (lookahead == 'w') ADVANCE(403);
      END_STATE();
    case 786:
      if (lookahead == 'w') ADVANCE(131);
      END_STATE();
    case 787:
      if (lookahead == 'x') ADVANCE(1421);
      END_STATE();
    case 788:
      if (lookahead == 'x') ADVANCE(1460);
      END_STATE();
    case 789:
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 790:
      if (lookahead == 'x') ADVANCE(267);
      END_STATE();
    case 791:
      if (lookahead == 'x') ADVANCE(279);
      END_STATE();
    case 792:
      if (lookahead == 'y') ADVANCE(1419);
      END_STATE();
    case 793:
      if (lookahead == 'y') ADVANCE(1400);
      END_STATE();
    case 794:
      if (lookahead == 'y') ADVANCE(61);
      END_STATE();
    case 795:
      if (lookahead == 'y') ADVANCE(1403);
      END_STATE();
    case 796:
      if (lookahead == 'y') ADVANCE(1399);
      END_STATE();
    case 797:
      if (lookahead == 'y') ADVANCE(615);
      END_STATE();
    case 798:
      if (lookahead == 'y') ADVANCE(617);
      END_STATE();
    case 799:
      if (lookahead == 'y') ADVANCE(742);
      END_STATE();
    case 800:
      if (lookahead == 'y') ADVANCE(619);
      END_STATE();
    case 801:
      if (lookahead == 'y') ADVANCE(618);
      END_STATE();
    case 802:
      if (lookahead == 'y') ADVANCE(620);
      END_STATE();
    case 803:
      if (lookahead == 'y') ADVANCE(621);
      END_STATE();
    case 804:
      if (lookahead == 'z') ADVANCE(265);
      END_STATE();
    case 805:
      if (lookahead == 'z') ADVANCE(270);
      END_STATE();
    case 806:
      if (lookahead == 'f' ||
          lookahead == 't') ADVANCE(1445);
      END_STATE();
    case 807:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      END_STATE();
    case 808:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 809:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1462);
      END_STATE();
    case 810:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 811:
      if (eof) ADVANCE(816);
      if (lookahead == '\'') ADVANCE(1271);
      if (lookahead == '(') ADVANCE(1278);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*') ADVANCE(1286);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == ':') ADVANCE(1269);
      if (lookahead == '[') ADVANCE(1274);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(307);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(811)
      END_STATE();
    case 812:
      if (eof) ADVANCE(816);
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1445);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(1446);
      if (lookahead == '.') ADVANCE(1340);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == ':') ADVANCE(1270);
      if (lookahead == '<') ADVANCE(1448);
      if (lookahead == '=') ADVANCE(1449);
      if (lookahead == '>') ADVANCE(1448);
      if (lookahead == 'A') ADVANCE(728);
      if (lookahead == 'B') ADVANCE(381);
      if (lookahead == 'C') ADVANCE(371);
      if (lookahead == 'E') ADVANCE(517);
      if (lookahead == 'I') ADVANCE(558);
      if (lookahead == 'P') ADVANCE(450);
      if (lookahead == 'S') ADVANCE(40);
      if (lookahead == '[') ADVANCE(1274);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == 'a') ADVANCE(443);
      if (lookahead == 'b') ADVANCE(602);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(324);
      if (lookahead == 'k') ADVANCE(386);
      if (lookahead == 'l') ADVANCE(253);
      if (lookahead == 'm') ADVANCE(282);
      if (lookahead == 'n') ADVANCE(191);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(287);
      if (lookahead == 's') ADVANCE(112);
      if (lookahead == 'u') ADVANCE(518);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(1349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(812)
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(827);
      END_STATE();
    case 813:
      if (eof) ADVANCE(816);
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '^') ADVANCE(1445);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(1446);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == '<') ADVANCE(1448);
      if (lookahead == '=') ADVANCE(1449);
      if (lookahead == '>') ADVANCE(1448);
      if (lookahead == '[') ADVANCE(1274);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == 'a') ADVANCE(676);
      if (lookahead == 'b') ADVANCE(592);
      if (lookahead == 'c') ADVANCE(761);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead == 'f') ADVANCE(480);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(562);
      if (lookahead == 'l') ADVANCE(593);
      if (lookahead == 'p') ADVANCE(569);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 's') ADVANCE(732);
      if (lookahead == 'u') ADVANCE(534);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(813)
      END_STATE();
    case 814:
      if (eof) ADVANCE(816);
      if (lookahead == '(') ADVANCE(1277);
      if (lookahead == ')') ADVANCE(1279);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '=' ||
          lookahead == '^') ADVANCE(1445);
      if (lookahead == ',') ADVANCE(1289);
      if (lookahead == '-') ADVANCE(1446);
      if (lookahead == '/') ADVANCE(1450);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '<') ADVANCE(1448);
      if (lookahead == '>') ADVANCE(1448);
      if (lookahead == '\\') ADVANCE(22);
      if (lookahead == ']') ADVANCE(1276);
      if (lookahead == 'd') ADVANCE(249);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'g') ADVANCE(452);
      if (lookahead == 'i') ADVANCE(506);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead == 'p') ADVANCE(648);
      if (lookahead == 'r') ADVANCE(286);
      if (lookahead == 't') ADVANCE(372);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '|') ADVANCE(1311);
      if (lookahead == '}') ADVANCE(1349);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(814)
      END_STATE();
    case 815:
      if (eof) ADVANCE(816);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == 'd') ADVANCE(958);
      if (lookahead == 'g') ADVANCE(1062);
      if (lookahead == 'p') ADVANCE(1187);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(815)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(14);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_def);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_def);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_struct);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_union);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_union);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_int_const);
      if (lookahead == '.') ADVANCE(830);
      if (lookahead == '_') ADVANCE(827);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(826);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(827);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_int_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(828);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_floating_const);
      if (lookahead == '.') ADVANCE(830);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_floating_const);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(830);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '.') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(849);
      if (lookahead == 'M') ADVANCE(874);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == 'X') ADVANCE(850);
      if (lookahead == 'a') ADVANCE(1070);
      if (lookahead == 'f') ADVANCE(1189);
      if (lookahead == 'm') ADVANCE(878);
      if (lookahead == 's') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(847);
      if (lookahead == 'C') ADVANCE(849);
      if (lookahead == 'O') ADVANCE(852);
      if (lookahead == 'X') ADVANCE(850);
      if (lookahead == 'a') ADVANCE(1070);
      if (lookahead == 'f') ADVANCE(1189);
      if (lookahead == 'm') ADVANCE(878);
      if (lookahead == 's') ADVANCE(1038);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(1242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'A') ADVANCE(1075);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'D') ADVANCE(1440);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'H') ADVANCE(854);
      if (lookahead == 'p') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'H') ADVANCE(854);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(1455);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(1438);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(841);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(845);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'L') ADVANCE(909);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'M') ADVANCE(851);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'N') ADVANCE(838);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'N') ADVANCE(856);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'O') ADVANCE(846);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'O') ADVANCE(853);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'P') ADVANCE(842);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(1442);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(1444);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'R') ADVANCE(860);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'U') ADVANCE(843);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'U') ADVANCE(844);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1027);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(900);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1267);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1203);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1197);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(912);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1083);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(928);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1204);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(913);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(1206);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == '_') ADVANCE(903);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1200);
      if (lookahead == 'f') ADVANCE(1250);
      if (lookahead == 't') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1054);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1069);
      if (lookahead == 'v') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1258);
      if (lookahead == 'i') ADVANCE(1091);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1256);
      if (lookahead == 'i') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(911);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1024);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1232);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1095);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1068);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1183);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(930);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(902);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'a') ADVANCE(1237);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1297);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1059);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(955);
      if (lookahead == 'o') ADVANCE(1159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1030);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1064);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1066);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'b') ADVANCE(1053);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1465);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(890);
      if (lookahead == 'i') ADVANCE(1000);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(882);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1019);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1051);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(1240);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'c') ADVANCE(872);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1355);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1432);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1357);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1273);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(940);
      if (lookahead == 'i') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(940);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(866);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(868);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(1134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(867);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(956);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'd') ADVANCE(871);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1076);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(910);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1309);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1283);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(980);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(998);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(918);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1210);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(862);
      if (lookahead == 'r') ADVANCE(879);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1006);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(919);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(920);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1055);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1195);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(921);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(863);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(917);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1194);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(922);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(983);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(875);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1173);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(889);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1115);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(927);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1002);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1071);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1003);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1073);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(1087);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(914);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'e') ADVANCE(870);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1305);
      if (lookahead == 's') ADVANCE(857);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1428);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(820);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1246);
      if (lookahead == 'h') ADVANCE(891);
      if (lookahead == 'i') ADVANCE(1252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1061);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1031);
      if (lookahead == 'w') ADVANCE(1043);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1216);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1034);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1036);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1042);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'f') ADVANCE(1052);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1321);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(957);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(864);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1088);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(961);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(964);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(894);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'g') ADVANCE(1123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(891);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(1028);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(962);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'h') ADVANCE(1041);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1209);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1265);
      if (lookahead == 't') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1265);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(996);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(901);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(990);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1060);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(916);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1212);
      if (lookahead == 's') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1190);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(904);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1122);
      if (lookahead == 's') ADVANCE(907);
      if (lookahead == 'u') ADVANCE(1125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(988);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(923);
      if (lookahead == 'l') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1243);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(948);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1108);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(942);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(947);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1266);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(989);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(972);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1201);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1004);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1005);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1067);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1007);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1001);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(991);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(974);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'i') ADVANCE(1244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'k') ADVANCE(1318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(926);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1015);
      if (lookahead == 'r') ADVANCE(944);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1015);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(884);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1234);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(975);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(936);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(966);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(938);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(939);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(885);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1199);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1039);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(931);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(929);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1154);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'l') ADVANCE(1049);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(899);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(986);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1022);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1026);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(967);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(880);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(968);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1035);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(1033);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'm') ADVANCE(969);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1023);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(924);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(824);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1457);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1224);
      if (lookahead == 'v') ADVANCE(834);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(906);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(858);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(994);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(995);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1082);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(999);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(859);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(925);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1214);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1016);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(946);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1207);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(970);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(951);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(945);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1021);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1084);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1236);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(1205);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'n') ADVANCE(915);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1029);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1080);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1078);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(897);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1211);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(978);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1077);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(981);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(982);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1079);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(905);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1092);
      if (lookahead == 't') ADVANCE(1383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1092);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(886);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1105);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(893);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(896);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1093);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1094);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1107);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1106);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1086);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(887);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1081);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1065);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1188);
      if (lookahead == 'r') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'o') ADVANCE(1040);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1300);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1160:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1161:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(934);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1162:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(1063);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1163:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(953);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1164:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(892);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1165:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(963);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1166:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(950);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1167:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(937);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1168:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'p') ADVANCE(976);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1169:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1170:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(831);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1171:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1351);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1172:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1173:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1174:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1175:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1179);
      if (lookahead == 't') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1176:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1179);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1177:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1247);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1178:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1179:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(877);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1180:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1181:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1182:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1198);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1183:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(883);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1184:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1085);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1185:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(865);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1186:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(881);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1187:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1188:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(895);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1189:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1190:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1191:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1186);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1192:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1193:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(1153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1194:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'r') ADVANCE(869);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1195:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1196:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1197:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1009);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1198:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(832);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1199:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1200:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(935);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1201:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(977);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1202:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1203:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1045);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1204:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1011);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1205:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1047);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1206:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 's') ADVANCE(1050);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1207:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1208:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1262);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1209:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(987);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1210:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1302);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1211:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1212:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1459);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1213:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(822);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1214:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1434);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1215:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1436);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1216:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1217:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1218:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1453);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1219:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1157);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1220:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1281);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1221:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1222:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1010);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1223:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(833);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1224:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(941);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1225:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1044);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1226:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1017);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1227:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1018);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1228:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(959);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1229:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(954);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1230:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(965);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1231:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1232:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1048);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1233:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(971);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1234:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1032);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1235:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1236:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(973);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1237:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1037);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1238:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1263);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1239:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1192);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1240:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1046);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1241:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1264);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1242:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(1155);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1243:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(992);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1244:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 't') ADVANCE(993);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1245:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1020);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1246:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1099);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1247:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1248:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(908);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1249:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(898);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1250:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'u') ADVANCE(1126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1251:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(985);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1252:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(848);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1253:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(835);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1254:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(1025);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1255:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'v') ADVANCE(932);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1256:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(1268);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1257:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(837);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1258:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'x') ADVANCE(1422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1259:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1420);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1260:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1261:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(861);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1262:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1263:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1264:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'y') ADVANCE(1167);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1265:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'z') ADVANCE(949);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1268);
      END_STATE();
    case 1266:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (lookahead == 'z') ADVANCE(952);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'y')) ADVANCE(1268);
      END_STATE();
    case 1267:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(1268);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1268:
      ACCEPT_TOKEN(aux_sym_sym_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1269:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 1270:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(1361);
      if (lookahead == '=') ADVANCE(825);
      END_STATE();
    case 1271:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 1272:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 1273:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1274:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 1275:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(1360);
      END_STATE();
    case 1276:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 1277:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 1278:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(10);
      END_STATE();
    case 1279:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 1280:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 1281:
      ACCEPT_TOKEN(anon_sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1282:
      ACCEPT_TOKEN(anon_sym_volatile);
      END_STATE();
    case 1283:
      ACCEPT_TOKEN(anon_sym_volatile);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1284:
      ACCEPT_TOKEN(anon_sym__Atomic);
      END_STATE();
    case 1285:
      ACCEPT_TOKEN(anon_sym__Atomic);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1286:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 1287:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR_RPAREN);
      END_STATE();
    case 1288:
      ACCEPT_TOKEN(anon_sym_restrict);
      END_STATE();
    case 1289:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 1290:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 1291:
      ACCEPT_TOKEN(sym_floating_type);
      END_STATE();
    case 1292:
      ACCEPT_TOKEN(sym_floating_type);
      if (lookahead == 'i') ADVANCE(525);
      END_STATE();
    case 1293:
      ACCEPT_TOKEN(anon_sym_ail_ctype);
      END_STATE();
    case 1294:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1295:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(1312);
      END_STATE();
    case 1296:
      ACCEPT_TOKEN(anon_sym_glob);
      END_STATE();
    case 1297:
      ACCEPT_TOKEN(anon_sym_glob);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1298:
      ACCEPT_TOKEN(anon_sym_pure);
      END_STATE();
    case 1299:
      ACCEPT_TOKEN(anon_sym_memop);
      END_STATE();
    case 1300:
      ACCEPT_TOKEN(anon_sym_memop);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1301:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 1302:
      ACCEPT_TOKEN(anon_sym_let);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1303:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 1304:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 1305:
      ACCEPT_TOKEN(anon_sym_if);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1306:
      ACCEPT_TOKEN(anon_sym_then);
      END_STATE();
    case 1307:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 1308:
      ACCEPT_TOKEN(anon_sym_case);
      END_STATE();
    case 1309:
      ACCEPT_TOKEN(anon_sym_case);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1310:
      ACCEPT_TOKEN(anon_sym_of);
      END_STATE();
    case 1311:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 1312:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 1313:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 1314:
      ACCEPT_TOKEN(anon_sym_pcall);
      END_STATE();
    case 1315:
      ACCEPT_TOKEN(anon_sym_ccall);
      END_STATE();
    case 1316:
      ACCEPT_TOKEN(anon_sym_unseq);
      END_STATE();
    case 1317:
      ACCEPT_TOKEN(anon_sym_weak);
      END_STATE();
    case 1318:
      ACCEPT_TOKEN(anon_sym_weak);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1319:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 1320:
      ACCEPT_TOKEN(anon_sym_strong);
      END_STATE();
    case 1321:
      ACCEPT_TOKEN(anon_sym_strong);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1322:
      ACCEPT_TOKEN(anon_sym_bound);
      END_STATE();
    case 1323:
      ACCEPT_TOKEN(anon_sym_save);
      END_STATE();
    case 1324:
      ACCEPT_TOKEN(anon_sym_run);
      END_STATE();
    case 1325:
      ACCEPT_TOKEN(anon_sym_nd);
      END_STATE();
    case 1326:
      ACCEPT_TOKEN(anon_sym_par);
      END_STATE();
    case 1327:
      ACCEPT_TOKEN(anon_sym_eff);
      END_STATE();
    case 1328:
      ACCEPT_TOKEN(anon_sym_undef);
      END_STATE();
    case 1329:
      ACCEPT_TOKEN(anon_sym_undef);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1330:
      ACCEPT_TOKEN(anon_sym_error);
      END_STATE();
    case 1331:
      ACCEPT_TOKEN(anon_sym_error);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1332:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      END_STATE();
    case 1333:
      ACCEPT_TOKEN(anon_sym_CivNULLcap);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1334:
      ACCEPT_TOKEN(anon_sym_signed);
      END_STATE();
    case 1335:
      ACCEPT_TOKEN(anon_sym_unsigned);
      END_STATE();
    case 1336:
      ACCEPT_TOKEN(anon_sym_array_shift);
      END_STATE();
    case 1337:
      ACCEPT_TOKEN(anon_sym_array_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1338:
      ACCEPT_TOKEN(anon_sym_member_shift);
      END_STATE();
    case 1339:
      ACCEPT_TOKEN(anon_sym_member_shift);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1340:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 1341:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(17);
      END_STATE();
    case 1342:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 1343:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1344:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1345:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(1);
      if (lookahead == '.') ADVANCE(807);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(829);
      END_STATE();
    case 1346:
      ACCEPT_TOKEN(anon_sym_cfunction);
      END_STATE();
    case 1347:
      ACCEPT_TOKEN(anon_sym_cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1348:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 1349:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 1350:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      END_STATE();
    case 1351:
      ACCEPT_TOKEN(anon_sym_is_scalar);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1352:
      ACCEPT_TOKEN(anon_sym_is_integer);
      END_STATE();
    case 1353:
      ACCEPT_TOKEN(anon_sym_is_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1354:
      ACCEPT_TOKEN(anon_sym_is_signed);
      END_STATE();
    case 1355:
      ACCEPT_TOKEN(anon_sym_is_signed);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1356:
      ACCEPT_TOKEN(anon_sym_is_unsigned);
      END_STATE();
    case 1357:
      ACCEPT_TOKEN(anon_sym_is_unsigned);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1358:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      END_STATE();
    case 1359:
      ACCEPT_TOKEN(anon_sym_are_compatible);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1360:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 1361:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 1362:
      ACCEPT_TOKEN(anon_sym_DeriveCap);
      END_STATE();
    case 1363:
      ACCEPT_TOKEN(aux_sym_pure_memop_op_token1);
      if (lookahead == ':' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1363);
      END_STATE();
    case 1364:
      ACCEPT_TOKEN(anon_sym_CapAssignValue);
      END_STATE();
    case 1365:
      ACCEPT_TOKEN(anon_sym_Ptr_tIntValue);
      END_STATE();
    case 1366:
      ACCEPT_TOKEN(anon_sym_PtrEq);
      END_STATE();
    case 1367:
      ACCEPT_TOKEN(anon_sym_PtrNe);
      END_STATE();
    case 1368:
      ACCEPT_TOKEN(anon_sym_PtrLt);
      END_STATE();
    case 1369:
      ACCEPT_TOKEN(anon_sym_PtrGt);
      END_STATE();
    case 1370:
      ACCEPT_TOKEN(anon_sym_PtrLe);
      END_STATE();
    case 1371:
      ACCEPT_TOKEN(anon_sym_PtrGe);
      END_STATE();
    case 1372:
      ACCEPT_TOKEN(anon_sym_Ptrdiff);
      END_STATE();
    case 1373:
      ACCEPT_TOKEN(anon_sym_IntFromPtr);
      END_STATE();
    case 1374:
      ACCEPT_TOKEN(anon_sym_PtrFromInt);
      END_STATE();
    case 1375:
      ACCEPT_TOKEN(anon_sym_PtrValidForDeref);
      END_STATE();
    case 1376:
      ACCEPT_TOKEN(anon_sym_PtrWellAligned);
      END_STATE();
    case 1377:
      ACCEPT_TOKEN(anon_sym_PtrArrayShift);
      END_STATE();
    case 1378:
      ACCEPT_TOKEN(aux_sym_memop_op_token1);
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1378);
      END_STATE();
    case 1379:
      ACCEPT_TOKEN(anon_sym_PtrMemberShift);
      END_STATE();
    case 1380:
      ACCEPT_TOKEN(anon_sym__);
      if (lookahead == 'A') ADVANCE(762);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(827);
      END_STATE();
    case 1381:
      ACCEPT_TOKEN(anon_sym__);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1382:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 1383:
      ACCEPT_TOKEN(anon_sym_unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1384:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 1385:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1386:
      ACCEPT_TOKEN(anon_sym_ctype);
      END_STATE();
    case 1387:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (lookahead == '_') ADVANCE(497);
      END_STATE();
    case 1388:
      ACCEPT_TOKEN(anon_sym_ctype);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1389:
      ACCEPT_TOKEN(anon_sym_loaded);
      END_STATE();
    case 1390:
      ACCEPT_TOKEN(anon_sym_loaded);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1391:
      ACCEPT_TOKEN(anon_sym_storable);
      END_STATE();
    case 1392:
      ACCEPT_TOKEN(anon_sym_storable);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1393:
      ACCEPT_TOKEN(anon_sym_integer);
      END_STATE();
    case 1394:
      ACCEPT_TOKEN(anon_sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1395:
      ACCEPT_TOKEN(anon_sym_floating);
      END_STATE();
    case 1396:
      ACCEPT_TOKEN(anon_sym_floating);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1397:
      ACCEPT_TOKEN(anon_sym_pointer);
      END_STATE();
    case 1398:
      ACCEPT_TOKEN(anon_sym_pointer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1399:
      ACCEPT_TOKEN(anon_sym_array);
      END_STATE();
    case 1400:
      ACCEPT_TOKEN(anon_sym_array);
      if (lookahead == '_') ADVANCE(685);
      END_STATE();
    case 1401:
      ACCEPT_TOKEN(anon_sym_array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1402:
      ACCEPT_TOKEN(sym_memory_order);
      END_STATE();
    case 1403:
      ACCEPT_TOKEN(anon_sym_create_readonly);
      END_STATE();
    case 1404:
      ACCEPT_TOKEN(anon_sym_create);
      if (lookahead == '_') ADVANCE(678);
      END_STATE();
    case 1405:
      ACCEPT_TOKEN(anon_sym_alloc);
      END_STATE();
    case 1406:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 1407:
      ACCEPT_TOKEN(anon_sym_kill);
      END_STATE();
    case 1408:
      ACCEPT_TOKEN(anon_sym_store);
      if (lookahead == '_') ADVANCE(460);
      END_STATE();
    case 1409:
      ACCEPT_TOKEN(anon_sym_store_lock);
      END_STATE();
    case 1410:
      ACCEPT_TOKEN(anon_sym_load);
      END_STATE();
    case 1411:
      ACCEPT_TOKEN(anon_sym_load);
      if (lookahead == 'e') ADVANCE(197);
      END_STATE();
    case 1412:
      ACCEPT_TOKEN(anon_sym_seq_rmw);
      if (lookahead == '_') ADVANCE(785);
      END_STATE();
    case 1413:
      ACCEPT_TOKEN(anon_sym_seq_rmw_with_forward);
      END_STATE();
    case 1414:
      ACCEPT_TOKEN(anon_sym_rmw);
      END_STATE();
    case 1415:
      ACCEPT_TOKEN(anon_sym_fence);
      END_STATE();
    case 1416:
      ACCEPT_TOKEN(anon_sym_neg);
      END_STATE();
    case 1417:
      ACCEPT_TOKEN(sym_ub);
      if (lookahead == '>') ADVANCE(1417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(28);
      END_STATE();
    case 1418:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 1419:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 1420:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1421:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      END_STATE();
    case 1422:
      ACCEPT_TOKEN(anon_sym_Ivmax);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1423:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      END_STATE();
    case 1424:
      ACCEPT_TOKEN(anon_sym_Ivmin);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1425:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      END_STATE();
    case 1426:
      ACCEPT_TOKEN(anon_sym_Ivsizeof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1427:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      END_STATE();
    case 1428:
      ACCEPT_TOKEN(anon_sym_Ivalignof);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1429:
      ACCEPT_TOKEN(anon_sym_Specified);
      END_STATE();
    case 1430:
      ACCEPT_TOKEN(anon_sym_Specified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1431:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      END_STATE();
    case 1432:
      ACCEPT_TOKEN(anon_sym_Unspecified);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1433:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      END_STATE();
    case 1434:
      ACCEPT_TOKEN(anon_sym_Fvfromint);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1435:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      END_STATE();
    case 1436:
      ACCEPT_TOKEN(anon_sym_Ivfromfloat);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1437:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      END_STATE();
    case 1438:
      ACCEPT_TOKEN(anon_sym_IvCOMPL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1439:
      ACCEPT_TOKEN(anon_sym_IvAND);
      END_STATE();
    case 1440:
      ACCEPT_TOKEN(anon_sym_IvAND);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1441:
      ACCEPT_TOKEN(anon_sym_IvOR);
      END_STATE();
    case 1442:
      ACCEPT_TOKEN(anon_sym_IvOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1443:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      END_STATE();
    case 1444:
      ACCEPT_TOKEN(anon_sym_IvXOR);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1445:
      ACCEPT_TOKEN(sym_binary_operator);
      END_STATE();
    case 1446:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '-') ADVANCE(1);
      END_STATE();
    case 1447:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '<') ADVANCE(810);
      if (lookahead == '=') ADVANCE(1445);
      END_STATE();
    case 1448:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '=') ADVANCE(1445);
      END_STATE();
    case 1449:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '>') ADVANCE(1312);
      END_STATE();
    case 1450:
      ACCEPT_TOKEN(sym_binary_operator);
      if (lookahead == '\\') ADVANCE(1445);
      END_STATE();
    case 1451:
      ACCEPT_TOKEN(sym_bool_literal);
      END_STATE();
    case 1452:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      END_STATE();
    case 1453:
      ACCEPT_TOKEN(anon_sym_IvMaxAlignment);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1454:
      ACCEPT_TOKEN(anon_sym_NULL);
      END_STATE();
    case 1455:
      ACCEPT_TOKEN(anon_sym_NULL);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1456:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      END_STATE();
    case 1457:
      ACCEPT_TOKEN(anon_sym_Cfunction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1458:
      ACCEPT_TOKEN(anon_sym_Unit);
      END_STATE();
    case 1459:
      ACCEPT_TOKEN(anon_sym_Unit);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    case 1460:
      ACCEPT_TOKEN(sym_impl);
      END_STATE();
    case 1461:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1461);
      END_STATE();
    case 1462:
      ACCEPT_TOKEN(sym_impl);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1462);
      END_STATE();
    case 1463:
      ACCEPT_TOKEN(anon_sym_ailname);
      END_STATE();
    case 1464:
      ACCEPT_TOKEN(anon_sym_proc);
      END_STATE();
    case 1465:
      ACCEPT_TOKEN(anon_sym_proc);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(1268);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 6},
  [10] = {.lex_state = 6},
  [11] = {.lex_state = 6},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 6},
  [72] = {.lex_state = 812},
  [73] = {.lex_state = 812},
  [74] = {.lex_state = 812},
  [75] = {.lex_state = 812},
  [76] = {.lex_state = 812},
  [77] = {.lex_state = 812},
  [78] = {.lex_state = 812},
  [79] = {.lex_state = 812},
  [80] = {.lex_state = 812},
  [81] = {.lex_state = 812},
  [82] = {.lex_state = 812},
  [83] = {.lex_state = 812},
  [84] = {.lex_state = 812},
  [85] = {.lex_state = 812},
  [86] = {.lex_state = 812},
  [87] = {.lex_state = 812},
  [88] = {.lex_state = 812},
  [89] = {.lex_state = 812},
  [90] = {.lex_state = 812},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 7},
  [93] = {.lex_state = 7},
  [94] = {.lex_state = 7},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 7},
  [97] = {.lex_state = 7},
  [98] = {.lex_state = 7},
  [99] = {.lex_state = 7},
  [100] = {.lex_state = 7},
  [101] = {.lex_state = 7},
  [102] = {.lex_state = 7},
  [103] = {.lex_state = 7},
  [104] = {.lex_state = 7},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 813},
  [107] = {.lex_state = 813},
  [108] = {.lex_state = 813},
  [109] = {.lex_state = 813},
  [110] = {.lex_state = 813},
  [111] = {.lex_state = 813},
  [112] = {.lex_state = 813},
  [113] = {.lex_state = 813},
  [114] = {.lex_state = 813},
  [115] = {.lex_state = 813},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 813},
  [118] = {.lex_state = 813},
  [119] = {.lex_state = 813},
  [120] = {.lex_state = 813},
  [121] = {.lex_state = 813},
  [122] = {.lex_state = 813},
  [123] = {.lex_state = 813},
  [124] = {.lex_state = 813},
  [125] = {.lex_state = 813},
  [126] = {.lex_state = 813},
  [127] = {.lex_state = 813},
  [128] = {.lex_state = 813},
  [129] = {.lex_state = 813},
  [130] = {.lex_state = 813},
  [131] = {.lex_state = 813},
  [132] = {.lex_state = 813},
  [133] = {.lex_state = 813},
  [134] = {.lex_state = 813},
  [135] = {.lex_state = 813},
  [136] = {.lex_state = 813},
  [137] = {.lex_state = 813},
  [138] = {.lex_state = 9},
  [139] = {.lex_state = 813},
  [140] = {.lex_state = 813},
  [141] = {.lex_state = 9},
  [142] = {.lex_state = 812},
  [143] = {.lex_state = 9},
  [144] = {.lex_state = 812},
  [145] = {.lex_state = 9},
  [146] = {.lex_state = 9},
  [147] = {.lex_state = 9},
  [148] = {.lex_state = 814},
  [149] = {.lex_state = 9},
  [150] = {.lex_state = 813},
  [151] = {.lex_state = 813},
  [152] = {.lex_state = 9},
  [153] = {.lex_state = 813},
  [154] = {.lex_state = 9},
  [155] = {.lex_state = 813},
  [156] = {.lex_state = 9},
  [157] = {.lex_state = 814},
  [158] = {.lex_state = 813},
  [159] = {.lex_state = 813},
  [160] = {.lex_state = 813},
  [161] = {.lex_state = 9},
  [162] = {.lex_state = 814},
  [163] = {.lex_state = 814},
  [164] = {.lex_state = 814},
  [165] = {.lex_state = 814},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 814},
  [168] = {.lex_state = 814},
  [169] = {.lex_state = 814},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 814},
  [172] = {.lex_state = 814},
  [173] = {.lex_state = 814},
  [174] = {.lex_state = 814},
  [175] = {.lex_state = 814},
  [176] = {.lex_state = 814},
  [177] = {.lex_state = 814},
  [178] = {.lex_state = 814},
  [179] = {.lex_state = 814},
  [180] = {.lex_state = 814},
  [181] = {.lex_state = 814},
  [182] = {.lex_state = 814},
  [183] = {.lex_state = 814},
  [184] = {.lex_state = 814},
  [185] = {.lex_state = 814},
  [186] = {.lex_state = 814},
  [187] = {.lex_state = 814},
  [188] = {.lex_state = 814},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 3},
  [209] = {.lex_state = 4},
  [210] = {.lex_state = 4},
  [211] = {.lex_state = 815},
  [212] = {.lex_state = 814},
  [213] = {.lex_state = 811},
  [214] = {.lex_state = 815},
  [215] = {.lex_state = 812},
  [216] = {.lex_state = 3},
  [217] = {.lex_state = 3},
  [218] = {.lex_state = 3},
  [219] = {.lex_state = 812},
  [220] = {.lex_state = 812},
  [221] = {.lex_state = 3},
  [222] = {.lex_state = 3},
  [223] = {.lex_state = 3},
  [224] = {.lex_state = 812},
  [225] = {.lex_state = 812},
  [226] = {.lex_state = 814},
  [227] = {.lex_state = 3},
  [228] = {.lex_state = 3},
  [229] = {.lex_state = 812},
  [230] = {.lex_state = 814},
  [231] = {.lex_state = 814},
  [232] = {.lex_state = 814},
  [233] = {.lex_state = 814},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 814},
  [236] = {.lex_state = 814},
  [237] = {.lex_state = 814},
  [238] = {.lex_state = 5},
  [239] = {.lex_state = 814},
  [240] = {.lex_state = 5},
  [241] = {.lex_state = 814},
  [242] = {.lex_state = 3},
  [243] = {.lex_state = 814},
  [244] = {.lex_state = 5},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 814},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 814},
  [250] = {.lex_state = 5},
  [251] = {.lex_state = 5},
  [252] = {.lex_state = 814},
  [253] = {.lex_state = 814},
  [254] = {.lex_state = 814},
  [255] = {.lex_state = 5},
  [256] = {.lex_state = 814},
  [257] = {.lex_state = 814},
  [258] = {.lex_state = 814},
  [259] = {.lex_state = 814},
  [260] = {.lex_state = 814},
  [261] = {.lex_state = 814},
  [262] = {.lex_state = 814},
  [263] = {.lex_state = 814},
  [264] = {.lex_state = 814},
  [265] = {.lex_state = 3},
  [266] = {.lex_state = 814},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 814},
  [269] = {.lex_state = 3},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 3},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 3},
  [274] = {.lex_state = 814},
  [275] = {.lex_state = 814},
  [276] = {.lex_state = 814},
  [277] = {.lex_state = 814},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 814},
  [280] = {.lex_state = 814},
  [281] = {.lex_state = 811},
  [282] = {.lex_state = 814},
  [283] = {.lex_state = 815},
  [284] = {.lex_state = 3},
  [285] = {.lex_state = 3},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 815},
  [290] = {.lex_state = 814},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 814},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 3},
  [300] = {.lex_state = 5},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 5},
  [303] = {.lex_state = 4},
  [304] = {.lex_state = 814},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 4},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 814},
  [309] = {.lex_state = 5},
  [310] = {.lex_state = 4},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 814},
  [313] = {.lex_state = 4},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 814},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 814},
  [318] = {.lex_state = 814},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 814},
  [321] = {.lex_state = 814},
  [322] = {.lex_state = 814},
  [323] = {.lex_state = 814},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 812},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 814},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 814},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 812},
  [334] = {.lex_state = 814},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 814},
  [338] = {.lex_state = 814},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 814},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 814},
  [343] = {.lex_state = 814},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 814},
  [346] = {.lex_state = 814},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 814},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 814},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 4},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 814},
  [360] = {.lex_state = 814},
  [361] = {.lex_state = 814},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 814},
  [365] = {.lex_state = 814},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 814},
  [368] = {.lex_state = 814},
  [369] = {.lex_state = 814},
  [370] = {.lex_state = 814},
  [371] = {.lex_state = 814},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 814},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 4},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 814},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 812},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 4},
  [396] = {.lex_state = 814},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 814},
  [401] = {.lex_state = 4},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 814},
  [404] = {.lex_state = 814},
  [405] = {.lex_state = 814},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 814},
  [408] = {.lex_state = 814},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 4},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 814},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 814},
  [419] = {.lex_state = 6},
  [420] = {.lex_state = 4},
  [421] = {.lex_state = 4},
  [422] = {.lex_state = 6},
  [423] = {.lex_state = 812},
  [424] = {.lex_state = 6},
  [425] = {.lex_state = 6},
  [426] = {.lex_state = 8},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 6},
  [430] = {.lex_state = 6},
  [431] = {.lex_state = 4},
  [432] = {.lex_state = 4},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 6},
  [438] = {.lex_state = 812},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 5},
  [443] = {.lex_state = 6},
  [444] = {.lex_state = 4},
  [445] = {.lex_state = 4},
  [446] = {.lex_state = 4},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 812},
  [451] = {.lex_state = 812},
  [452] = {.lex_state = 6},
  [453] = {.lex_state = 6},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 4},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 4},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 6},
  [461] = {.lex_state = 4},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 4},
  [464] = {.lex_state = 4},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 4},
  [470] = {.lex_state = 812},
  [471] = {.lex_state = 8},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 4},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 6},
  [476] = {.lex_state = 4},
  [477] = {.lex_state = 812},
  [478] = {.lex_state = 4},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 4},
  [481] = {.lex_state = 4},
  [482] = {.lex_state = 4},
  [483] = {.lex_state = 4},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 7},
  [489] = {.lex_state = 5},
  [490] = {.lex_state = 6},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 5},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 5},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 5},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 8},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 7},
  [510] = {.lex_state = 812},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 5},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
  [520] = {.lex_state = 0},
  [521] = {.lex_state = 0},
  [522] = {.lex_state = 7},
  [523] = {.lex_state = 0},
  [524] = {.lex_state = 7},
  [525] = {.lex_state = 0},
  [526] = {.lex_state = 0},
  [527] = {.lex_state = 0},
  [528] = {.lex_state = 0},
  [529] = {.lex_state = 0},
  [530] = {.lex_state = 0},
  [531] = {.lex_state = 812},
  [532] = {.lex_state = 0},
  [533] = {.lex_state = 5},
  [534] = {.lex_state = 0},
  [535] = {.lex_state = 7},
  [536] = {.lex_state = 15},
  [537] = {.lex_state = 0},
  [538] = {.lex_state = 0},
  [539] = {.lex_state = 0},
  [540] = {.lex_state = 0},
  [541] = {.lex_state = 5},
  [542] = {.lex_state = 7},
  [543] = {.lex_state = 7},
  [544] = {.lex_state = 0},
  [545] = {.lex_state = 0},
  [546] = {.lex_state = 0},
  [547] = {.lex_state = 7},
  [548] = {.lex_state = 0},
  [549] = {.lex_state = 0},
  [550] = {.lex_state = 0},
  [551] = {.lex_state = 0},
  [552] = {.lex_state = 0},
  [553] = {.lex_state = 7},
  [554] = {.lex_state = 0},
  [555] = {.lex_state = 0},
  [556] = {.lex_state = 0},
  [557] = {.lex_state = 7},
  [558] = {.lex_state = 7},
  [559] = {.lex_state = 7},
  [560] = {.lex_state = 0},
  [561] = {.lex_state = 0},
  [562] = {.lex_state = 7},
  [563] = {.lex_state = 812},
  [564] = {.lex_state = 0},
  [565] = {.lex_state = 0},
  [566] = {.lex_state = 0},
  [567] = {.lex_state = 7},
  [568] = {.lex_state = 0},
  [569] = {.lex_state = 5},
  [570] = {.lex_state = 0},
  [571] = {.lex_state = 0},
  [572] = {.lex_state = 7},
  [573] = {.lex_state = 0},
  [574] = {.lex_state = 0},
  [575] = {.lex_state = 0},
  [576] = {.lex_state = 0},
  [577] = {.lex_state = 0},
  [578] = {.lex_state = 0},
  [579] = {.lex_state = 0},
  [580] = {.lex_state = 7},
  [581] = {.lex_state = 0},
  [582] = {.lex_state = 0},
  [583] = {.lex_state = 0},
  [584] = {.lex_state = 0},
  [585] = {.lex_state = 0},
  [586] = {.lex_state = 0},
  [587] = {.lex_state = 0},
  [588] = {.lex_state = 0},
  [589] = {.lex_state = 0},
  [590] = {.lex_state = 0},
  [591] = {.lex_state = 5},
  [592] = {.lex_state = 0},
  [593] = {.lex_state = 0},
  [594] = {.lex_state = 7},
  [595] = {.lex_state = 7},
  [596] = {.lex_state = 0},
  [597] = {.lex_state = 0},
  [598] = {.lex_state = 6},
  [599] = {.lex_state = 0},
  [600] = {.lex_state = 0},
  [601] = {.lex_state = 0},
  [602] = {.lex_state = 5},
  [603] = {.lex_state = 0},
  [604] = {.lex_state = 0},
  [605] = {.lex_state = 7},
  [606] = {.lex_state = 0},
  [607] = {.lex_state = 0},
  [608] = {.lex_state = 0},
  [609] = {.lex_state = 0},
  [610] = {.lex_state = 0},
  [611] = {.lex_state = 0},
  [612] = {.lex_state = 0},
  [613] = {.lex_state = 0},
  [614] = {.lex_state = 0},
  [615] = {.lex_state = 0},
  [616] = {.lex_state = 0},
  [617] = {.lex_state = 0},
  [618] = {.lex_state = 7},
  [619] = {.lex_state = 7},
  [620] = {.lex_state = 0},
  [621] = {.lex_state = 0},
  [622] = {.lex_state = 4},
  [623] = {.lex_state = 0},
  [624] = {.lex_state = 0},
  [625] = {.lex_state = 0},
  [626] = {.lex_state = 0},
  [627] = {.lex_state = 5},
  [628] = {.lex_state = 0},
  [629] = {.lex_state = 812},
  [630] = {.lex_state = 0},
  [631] = {.lex_state = 0},
  [632] = {.lex_state = 0},
  [633] = {.lex_state = 0},
  [634] = {.lex_state = 0},
  [635] = {.lex_state = 0},
  [636] = {.lex_state = 812},
  [637] = {.lex_state = 0},
  [638] = {.lex_state = 0},
  [639] = {.lex_state = 7},
  [640] = {.lex_state = 7},
  [641] = {.lex_state = 4},
  [642] = {.lex_state = 812},
  [643] = {.lex_state = 5},
  [644] = {.lex_state = 0},
  [645] = {.lex_state = 0},
  [646] = {.lex_state = 0},
  [647] = {.lex_state = 0},
  [648] = {.lex_state = 0},
  [649] = {.lex_state = 0},
  [650] = {.lex_state = 0},
  [651] = {.lex_state = 6},
  [652] = {.lex_state = 4},
  [653] = {.lex_state = 5},
  [654] = {.lex_state = 0},
  [655] = {.lex_state = 7},
  [656] = {.lex_state = 0},
  [657] = {.lex_state = 7},
  [658] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_union] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_int_const] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_volatile] = ACTIONS(1),
    [anon_sym__Atomic] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_LPAREN_STAR_RPAREN] = ACTIONS(1),
    [anon_sym_restrict] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [sym_floating_type] = ACTIONS(1),
    [anon_sym_ail_ctype] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_glob] = ACTIONS(1),
    [anon_sym_pure] = ACTIONS(1),
    [anon_sym_memop] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_then] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_case] = ACTIONS(1),
    [anon_sym_of] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_pcall] = ACTIONS(1),
    [anon_sym_ccall] = ACTIONS(1),
    [anon_sym_unseq] = ACTIONS(1),
    [anon_sym_weak] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_strong] = ACTIONS(1),
    [anon_sym_bound] = ACTIONS(1),
    [anon_sym_save] = ACTIONS(1),
    [anon_sym_run] = ACTIONS(1),
    [anon_sym_nd] = ACTIONS(1),
    [anon_sym_par] = ACTIONS(1),
    [anon_sym_eff] = ACTIONS(1),
    [anon_sym_undef] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_CivNULLcap] = ACTIONS(1),
    [anon_sym_signed] = ACTIONS(1),
    [anon_sym_unsigned] = ACTIONS(1),
    [anon_sym_array_shift] = ACTIONS(1),
    [anon_sym_member_shift] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_cfunction] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_is_scalar] = ACTIONS(1),
    [anon_sym_is_integer] = ACTIONS(1),
    [anon_sym_is_signed] = ACTIONS(1),
    [anon_sym_is_unsigned] = ACTIONS(1),
    [anon_sym_are_compatible] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_DeriveCap] = ACTIONS(1),
    [anon_sym_CapAssignValue] = ACTIONS(1),
    [anon_sym_Ptr_tIntValue] = ACTIONS(1),
    [anon_sym_PtrEq] = ACTIONS(1),
    [anon_sym_PtrNe] = ACTIONS(1),
    [anon_sym_PtrLt] = ACTIONS(1),
    [anon_sym_PtrGt] = ACTIONS(1),
    [anon_sym_PtrLe] = ACTIONS(1),
    [anon_sym_PtrGe] = ACTIONS(1),
    [anon_sym_Ptrdiff] = ACTIONS(1),
    [anon_sym_IntFromPtr] = ACTIONS(1),
    [anon_sym_PtrFromInt] = ACTIONS(1),
    [anon_sym_PtrValidForDeref] = ACTIONS(1),
    [anon_sym_PtrWellAligned] = ACTIONS(1),
    [anon_sym_PtrArrayShift] = ACTIONS(1),
    [aux_sym_memop_op_token1] = ACTIONS(1),
    [anon_sym_PtrMemberShift] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_ctype] = ACTIONS(1),
    [anon_sym_loaded] = ACTIONS(1),
    [anon_sym_storable] = ACTIONS(1),
    [anon_sym_floating] = ACTIONS(1),
    [anon_sym_pointer] = ACTIONS(1),
    [anon_sym_array] = ACTIONS(1),
    [sym_memory_order] = ACTIONS(1),
    [anon_sym_create_readonly] = ACTIONS(1),
    [anon_sym_create] = ACTIONS(1),
    [anon_sym_alloc] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_kill] = ACTIONS(1),
    [anon_sym_store] = ACTIONS(1),
    [anon_sym_store_lock] = ACTIONS(1),
    [anon_sym_load] = ACTIONS(1),
    [anon_sym_seq_rmw] = ACTIONS(1),
    [anon_sym_seq_rmw_with_forward] = ACTIONS(1),
    [anon_sym_rmw] = ACTIONS(1),
    [anon_sym_fence] = ACTIONS(1),
    [anon_sym_neg] = ACTIONS(1),
    [sym_ub] = ACTIONS(1),
    [aux_sym_string_token1] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [anon_sym_Ivmax] = ACTIONS(1),
    [anon_sym_Ivmin] = ACTIONS(1),
    [anon_sym_Ivsizeof] = ACTIONS(1),
    [anon_sym_Ivalignof] = ACTIONS(1),
    [anon_sym_Specified] = ACTIONS(1),
    [anon_sym_Unspecified] = ACTIONS(1),
    [anon_sym_Fvfromint] = ACTIONS(1),
    [anon_sym_Ivfromfloat] = ACTIONS(1),
    [anon_sym_IvCOMPL] = ACTIONS(1),
    [anon_sym_IvAND] = ACTIONS(1),
    [anon_sym_IvOR] = ACTIONS(1),
    [anon_sym_IvXOR] = ACTIONS(1),
    [sym_binary_operator] = ACTIONS(1),
    [sym_bool_literal] = ACTIONS(1),
    [anon_sym_IvMaxAlignment] = ACTIONS(1),
    [anon_sym_NULL] = ACTIONS(1),
    [anon_sym_Cfunction] = ACTIONS(1),
    [anon_sym_Unit] = ACTIONS(1),
    [sym_impl] = ACTIONS(1),
    [anon_sym_ailname] = ACTIONS(1),
    [anon_sym_proc] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(589),
    [sym_declaration] = STATE(166),
    [sym_def_aggregate_declaration] = STATE(291),
    [sym_glob_declaration] = STATE(291),
    [sym_proc_declaration] = STATE(291),
    [sym_proc_full_declaration] = STATE(295),
    [sym_proc_forward_declaration] = STATE(295),
    [sym_def_declaration] = STATE(291),
    [aux_sym_source_file_repeat1] = STATE(166),
    [sym_comment] = ACTIONS(3),
    [anon_sym_def] = ACTIONS(5),
    [anon_sym_glob] = ACTIONS(7),
    [anon_sym_proc] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_union,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(282), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [114] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(59), 1,
      anon_sym_struct,
    ACTIONS(61), 1,
      anon_sym_union,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(275), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [228] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(263), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [339] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(260), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [450] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(261), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [561] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(69), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(279), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [672] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(259), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [783] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(262), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [894] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(274), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1005] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(277), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1116] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(308), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1224] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(312), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1332] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(176), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1440] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(327), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1548] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(408), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1656] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(187), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1764] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(368), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1872] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(407), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [1980] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(315), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2088] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(405), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2196] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(404), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2304] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(384), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2412] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(403), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2520] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(400), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2628] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(297), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2736] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(361), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2844] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(317), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [2952] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(318), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3060] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(320), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3168] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(418), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3276] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(321), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3384] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(263), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3492] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(268), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3600] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(322), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3708] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(304), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3816] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(264), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [3924] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(323), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4032] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(266), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4140] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(370), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4248] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(364), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4356] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(226), 1,
      sym_sym,
    STATE(237), 1,
      sym_pexpr,
    STATE(247), 1,
      sym_core_ctype,
    STATE(256), 2,
      sym_list_pexpr,
      sym_value,
    STATE(600), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4464] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(276), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4572] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(365), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4680] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(343), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4788] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(334), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [4896] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(280), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5004] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(359), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5112] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(360), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5220] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(329), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5328] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(342), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5436] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(173), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5544] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(351), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5652] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(346), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5760] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(348), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5868] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(226), 1,
      sym_sym,
    STATE(231), 1,
      sym_pexpr,
    STATE(247), 1,
      sym_core_ctype,
    STATE(256), 2,
      sym_list_pexpr,
      sym_value,
    STATE(600), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [5976] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(338), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6084] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(340), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6192] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(396), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6300] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(369), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6408] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(182), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6516] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(226), 1,
      sym_sym,
    STATE(247), 1,
      sym_core_ctype,
    STATE(258), 1,
      sym_pexpr,
    STATE(256), 2,
      sym_list_pexpr,
      sym_value,
    STATE(600), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6624] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(367), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6732] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(371), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6840] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(290), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [6948] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(337), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7056] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(345), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7164] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(416), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7272] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_sym_token1,
    ACTIONS(19), 1,
      anon_sym_SQUOTE,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_memop,
    ACTIONS(27), 1,
      anon_sym_let,
    ACTIONS(29), 1,
      anon_sym_if,
    ACTIONS(31), 1,
      anon_sym_case,
    ACTIONS(33), 1,
      anon_sym_undef,
    ACTIONS(35), 1,
      anon_sym_error,
    ACTIONS(37), 1,
      anon_sym_CivNULLcap,
    ACTIONS(39), 1,
      anon_sym_array_shift,
    ACTIONS(41), 1,
      anon_sym_member_shift,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 1,
      anon_sym_are_compatible,
    ACTIONS(49), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(53), 1,
      anon_sym_NULL,
    ACTIONS(55), 1,
      anon_sym_Cfunction,
    ACTIONS(57), 1,
      sym_impl,
    STATE(157), 1,
      sym_sym,
    STATE(171), 1,
      sym_core_ctype,
    STATE(374), 1,
      sym_pexpr,
    STATE(167), 2,
      sym_list_pexpr,
      sym_value,
    STATE(599), 2,
      sym_name,
      sym_ctor,
    ACTIONS(15), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(43), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7380] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(226), 1,
      sym_sym,
    STATE(233), 1,
      sym_pexpr,
    STATE(247), 1,
      sym_core_ctype,
    STATE(256), 2,
      sym_list_pexpr,
      sym_value,
    STATE(600), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7488] = 28,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      anon_sym_LBRACK,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_memop,
    ACTIONS(91), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      anon_sym_case,
    ACTIONS(97), 1,
      anon_sym_undef,
    ACTIONS(99), 1,
      anon_sym_error,
    ACTIONS(101), 1,
      anon_sym_CivNULLcap,
    ACTIONS(103), 1,
      anon_sym_array_shift,
    ACTIONS(105), 1,
      anon_sym_member_shift,
    ACTIONS(109), 1,
      anon_sym_DASH,
    ACTIONS(111), 1,
      anon_sym_are_compatible,
    ACTIONS(113), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(115), 1,
      anon_sym_NULL,
    ACTIONS(117), 1,
      anon_sym_Cfunction,
    ACTIONS(119), 1,
      sym_impl,
    STATE(226), 1,
      sym_sym,
    STATE(232), 1,
      sym_pexpr,
    STATE(247), 1,
      sym_core_ctype,
    STATE(256), 2,
      sym_list_pexpr,
      sym_value,
    STATE(600), 2,
      sym_name,
      sym_ctor,
    ACTIONS(79), 5,
      sym_int_const,
      sym_floating_const,
      sym_bool_literal,
      anon_sym_IvMaxAlignment,
      anon_sym_Unit,
    ACTIONS(107), 6,
      anon_sym_not,
      anon_sym_cfunction,
      anon_sym_is_scalar,
      anon_sym_is_integer,
      anon_sym_is_signed,
      anon_sym_is_unsigned,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [7596] = 30,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(301), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7689] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(199), 1,
      sym_expr,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7779] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(197), 1,
      sym_expr,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7869] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(196), 1,
      sym_expr,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [7959] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(287), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8049] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(272), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8139] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(267), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8229] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(189), 1,
      sym_expr,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8319] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(200), 1,
      sym_expr,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8409] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(462), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8499] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(270), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8589] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(458), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8679] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(454), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8769] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(278), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8859] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(193), 1,
      sym_expr,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [8949] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(286), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9039] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(399), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9129] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(428), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9219] = 29,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_pure,
    ACTIONS(127), 1,
      anon_sym_memop,
    ACTIONS(129), 1,
      anon_sym_let,
    ACTIONS(131), 1,
      anon_sym_if,
    ACTIONS(133), 1,
      anon_sym_case,
    ACTIONS(135), 1,
      anon_sym_pcall,
    ACTIONS(137), 1,
      anon_sym_ccall,
    ACTIONS(141), 1,
      anon_sym_bound,
    ACTIONS(143), 1,
      anon_sym_save,
    ACTIONS(145), 1,
      anon_sym_run,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    ACTIONS(171), 1,
      anon_sym_neg,
    STATE(206), 1,
      sym_paction,
    STATE(207), 1,
      sym_action,
    STATE(375), 1,
      sym_expr,
    ACTIONS(139), 3,
      anon_sym_unseq,
      anon_sym_nd,
      anon_sym_par,
  [9309] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(452), 1,
      sym_pattern,
    STATE(592), 1,
      sym_ctor,
    STATE(594), 1,
      sym_sym,
    ACTIONS(177), 2,
      anon_sym_weak,
      anon_sym_strong,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9359] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(302), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9408] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    ACTIONS(191), 1,
      anon_sym_RPAREN,
    STATE(238), 1,
      sym_list_pattern,
    STATE(293), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9457] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    ACTIONS(193), 1,
      anon_sym_RBRACK,
    STATE(238), 1,
      sym_list_pattern,
    STATE(300), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9506] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(471), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9552] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(244), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9598] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(426), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9644] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(314), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9690] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(442), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9736] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(443), 1,
      sym_pattern,
    STATE(592), 1,
      sym_ctor,
    STATE(594), 1,
      sym_sym,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9782] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(183), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(189), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(309), 1,
      sym_pattern,
    STATE(558), 1,
      sym_sym,
    STATE(592), 1,
      sym_ctor,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9828] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(244), 1,
      sym_pattern,
    STATE(592), 1,
      sym_ctor,
    STATE(594), 1,
      sym_sym,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9874] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(475), 1,
      sym_pattern,
    STATE(592), 1,
      sym_ctor,
    STATE(594), 1,
      sym_sym,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9920] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LPAREN,
    ACTIONS(179), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(181), 1,
      anon_sym__,
    STATE(238), 1,
      sym_list_pattern,
    STATE(419), 1,
      sym_pattern,
    STATE(592), 1,
      sym_ctor,
    STATE(594), 1,
      sym_sym,
    ACTIONS(51), 13,
      anon_sym_Array,
      anon_sym_Ivmax,
      anon_sym_Ivmin,
      anon_sym_Ivsizeof,
      anon_sym_Ivalignof,
      anon_sym_Specified,
      anon_sym_Unspecified,
      anon_sym_Fvfromint,
      anon_sym_Ivfromfloat,
      anon_sym_IvCOMPL,
      anon_sym_IvAND,
      anon_sym_IvOR,
      anon_sym_IvXOR,
  [9966] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
    ACTIONS(205), 1,
      anon_sym_loaded,
    ACTIONS(209), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(349), 1,
      sym_core_base_type,
    STATE(640), 1,
      sym_sym,
    ACTIONS(195), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(207), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(203), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10012] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(213), 1,
      anon_sym_eff,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(470), 1,
      sym_core_type,
    STATE(642), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10055] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_core_object_type,
    STATE(366), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10095] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    ACTIONS(225), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_core_object_type,
    STATE(350), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10135] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      sym_core_object_type,
    STATE(363), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10175] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(496), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10212] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(494), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10249] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(245), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10286] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(548), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10323] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(234), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10360] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(643), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10397] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_PtrArrayShift,
    ACTIONS(233), 1,
      aux_sym_memop_op_token1,
    STATE(512), 1,
      sym_memop_op,
    ACTIONS(229), 12,
      anon_sym_PtrEq,
      anon_sym_PtrNe,
      anon_sym_PtrLt,
      anon_sym_PtrGt,
      anon_sym_PtrLe,
      anon_sym_PtrGe,
      anon_sym_Ptrdiff,
      anon_sym_IntFromPtr,
      anon_sym_PtrFromInt,
      anon_sym_PtrValidForDeref,
      anon_sym_PtrWellAligned,
      anon_sym_PtrMemberShift,
  [10424] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(489), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10461] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(517), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10498] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(380), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10535] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(246), 1,
      sym_core_base_type,
    STATE(430), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10572] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(449), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10609] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_LBRACK,
    ACTIONS(253), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_loaded,
    ACTIONS(261), 1,
      anon_sym_array,
    STATE(178), 1,
      sym_core_base_type,
    STATE(185), 1,
      sym_core_object_type,
    ACTIONS(249), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(259), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(255), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10646] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(248), 1,
      sym_core_base_type,
    STATE(430), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10683] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(251), 1,
      sym_core_base_type,
    STATE(430), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10720] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(633), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10757] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(569), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10794] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(251), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10831] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(541), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10868] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(389), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10905] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(434), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10942] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(629), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [10979] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(245), 1,
      sym_core_base_type,
    STATE(430), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11016] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(248), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11053] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(246), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11090] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(590), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11127] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(518), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11164] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(237), 1,
      anon_sym_LBRACK,
    ACTIONS(239), 1,
      anon_sym_LPAREN,
    ACTIONS(243), 1,
      anon_sym_loaded,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(234), 1,
      sym_core_base_type,
    STATE(430), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(241), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11201] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(269), 1,
      anon_sym_RPAREN,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(227), 1,
      sym_ctype,
    STATE(539), 1,
      sym_params,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11244] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(492), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11281] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_LBRACK,
    ACTIONS(199), 1,
      anon_sym_LPAREN,
    ACTIONS(217), 1,
      anon_sym_loaded,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(153), 1,
      sym_core_object_type,
    STATE(257), 1,
      sym_core_base_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
    ACTIONS(215), 4,
      anon_sym_unit,
      anon_sym_boolean,
      anon_sym_ctype,
      anon_sym_storable,
  [11318] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    ACTIONS(277), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(242), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11358] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 2,
      anon_sym_COLON,
      sym_binary_operator,
    ACTIONS(279), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11380] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    ACTIONS(283), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(242), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11420] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_create_readonly,
    ACTIONS(149), 1,
      anon_sym_create,
    ACTIONS(151), 1,
      anon_sym_alloc,
    ACTIONS(153), 1,
      anon_sym_free,
    ACTIONS(155), 1,
      anon_sym_kill,
    ACTIONS(157), 1,
      anon_sym_store,
    ACTIONS(159), 1,
      anon_sym_store_lock,
    ACTIONS(161), 1,
      anon_sym_load,
    ACTIONS(163), 1,
      anon_sym_seq_rmw,
    ACTIONS(165), 1,
      anon_sym_seq_rmw_with_forward,
    ACTIONS(167), 1,
      anon_sym_rmw,
    ACTIONS(169), 1,
      anon_sym_fence,
    STATE(526), 1,
      sym_action,
  [11463] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(242), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11500] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(284), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11537] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(271), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11574] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      sym_binary_operator,
    ACTIONS(279), 12,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11595] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(265), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11632] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_binary_operator,
    ACTIONS(285), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11653] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_binary_operator,
    ACTIONS(289), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11674] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(273), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11711] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_binary_operator,
    ACTIONS(293), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11732] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(269), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(297), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11790] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(285), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
    STATE(218), 2,
      sym_ctype_star,
      sym_basic_type,
  [11827] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym_binary_operator,
    ACTIONS(301), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11850] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_binary_operator,
    ACTIONS(307), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11871] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_binary_operator,
    ACTIONS(311), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_binary_operator,
    ACTIONS(315), 12,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_COLON_EQ,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [11913] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(265), 1,
      aux_sym_sym_token1,
    ACTIONS(267), 1,
      anon_sym_void,
    ACTIONS(273), 1,
      anon_sym__Atomic,
    ACTIONS(275), 1,
      sym_floating_type,
    STATE(210), 1,
      aux_sym_integer_type_repeat1,
    STATE(217), 1,
      sym_integer_type,
    STATE(218), 1,
      sym_basic_type,
    STATE(222), 1,
      sym_ctype_star,
    STATE(299), 1,
      sym_ctype,
    ACTIONS(263), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(271), 2,
      anon_sym_const,
      anon_sym_volatile,
  [11952] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_binary_operator,
    ACTIONS(319), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11972] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(299), 1,
      sym_binary_operator,
    ACTIONS(297), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [11992] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(309), 1,
      sym_binary_operator,
    ACTIONS(307), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12012] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_binary_operator,
    ACTIONS(323), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12032] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_def,
    ACTIONS(7), 1,
      anon_sym_glob,
    ACTIONS(9), 1,
      anon_sym_proc,
    ACTIONS(327), 1,
      ts_builtin_sym_end,
    STATE(170), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(295), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(291), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [12062] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_binary_operator,
    ACTIONS(301), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12082] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_binary_operator,
    ACTIONS(329), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_binary_operator,
    ACTIONS(333), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12122] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(337), 1,
      ts_builtin_sym_end,
    ACTIONS(339), 1,
      anon_sym_def,
    ACTIONS(342), 1,
      anon_sym_glob,
    ACTIONS(345), 1,
      anon_sym_proc,
    STATE(170), 2,
      sym_declaration,
      aux_sym_source_file_repeat1,
    STATE(295), 2,
      sym_proc_full_declaration,
      sym_proc_forward_declaration,
    STATE(291), 4,
      sym_def_aggregate_declaration,
      sym_glob_declaration,
      sym_proc_declaration,
      sym_def_declaration,
  [12152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_binary_operator,
    ACTIONS(348), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(313), 1,
      sym_binary_operator,
    ACTIONS(311), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_binary_operator,
    ACTIONS(329), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12212] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_binary_operator,
    ACTIONS(352), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(317), 1,
      sym_binary_operator,
    ACTIONS(315), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12252] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_binary_operator,
    ACTIONS(356), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12272] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_binary_operator,
    ACTIONS(364), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12312] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_binary_operator,
    ACTIONS(285), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12332] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_binary_operator,
    ACTIONS(368), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12352] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_binary_operator,
    ACTIONS(372), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12372] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_binary_operator,
    ACTIONS(376), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_binary_operator,
    ACTIONS(380), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(291), 1,
      sym_binary_operator,
    ACTIONS(289), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(295), 1,
      sym_binary_operator,
    ACTIONS(293), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_binary_operator,
    ACTIONS(384), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12472] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_binary_operator,
    ACTIONS(364), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_binary_operator,
    ACTIONS(376), 11,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_in,
      anon_sym_then,
      anon_sym_else,
      anon_sym_of,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_RBRACE,
      anon_sym_COLON_COLON,
  [12512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(388), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12546] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12580] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12614] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12631] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12665] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(406), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12733] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(402), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12767] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12784] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12818] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 11,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_in,
      anon_sym_else,
      anon_sym_PIPE,
      anon_sym_end,
      anon_sym_SEMI,
      anon_sym_proc,
  [12835] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(281), 1,
      anon_sym_LPAREN,
    ACTIONS(279), 8,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [12852] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      aux_sym_sym_token1,
    ACTIONS(425), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(423), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(427), 1,
      aux_sym_sym_token1,
    ACTIONS(431), 1,
      anon_sym_LPAREN,
    STATE(209), 1,
      aux_sym_integer_type_repeat1,
    ACTIONS(429), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12894] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(433), 1,
      ts_builtin_sym_end,
    ACTIONS(437), 1,
      aux_sym_sym_token1,
    STATE(639), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(435), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12916] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_binary_operator,
    ACTIONS(372), 7,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [12932] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      anon_sym_LPAREN,
    ACTIONS(444), 1,
      anon_sym_restrict,
    ACTIONS(440), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [12950] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(446), 1,
      ts_builtin_sym_end,
    STATE(639), 1,
      sym_sym,
    STATE(211), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
    ACTIONS(448), 3,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [12972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(247), 1,
      anon_sym_array,
    STATE(424), 1,
      sym_core_object_type,
    ACTIONS(235), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(245), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [12991] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LPAREN,
    ACTIONS(450), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      anon_sym_LPAREN,
    ACTIONS(454), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13021] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_LPAREN,
    ACTIONS(458), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13036] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(261), 1,
      anon_sym_array,
    STATE(163), 1,
      sym_core_object_type,
    ACTIONS(249), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(259), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13055] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(551), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13089] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      anon_sym_LPAREN,
    ACTIONS(462), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LPAREN,
    ACTIONS(466), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13119] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(593), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13138] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(155), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13157] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 1,
      anon_sym_LPAREN,
    ACTIONS(305), 1,
      sym_binary_operator,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(474), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      anon_sym_COMMA,
    STATE(332), 1,
      aux_sym_params_repeat1,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13197] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_LPAREN,
    ACTIONS(480), 6,
      anon_sym_SQUOTE,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
      anon_sym_COMMA,
  [13212] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_array,
    STATE(617), 1,
      sym_core_object_type,
    ACTIONS(211), 2,
      anon_sym_struct,
      anon_sym_union,
    ACTIONS(219), 3,
      anon_sym_integer,
      anon_sym_floating,
      anon_sym_pointer,
  [13231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(321), 1,
      sym_binary_operator,
    ACTIONS(319), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_COLON_COLON,
    ACTIONS(488), 1,
      sym_binary_operator,
    ACTIONS(484), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13261] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_binary_operator,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_binary_operator,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13289] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_EQ,
    ACTIONS(490), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(382), 1,
      sym_binary_operator,
    ACTIONS(380), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13317] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(325), 1,
      sym_binary_operator,
    ACTIONS(323), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13331] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_binary_operator,
    ACTIONS(356), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13345] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_EQ,
    ACTIONS(494), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(386), 1,
      sym_binary_operator,
    ACTIONS(384), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_EQ,
    ACTIONS(498), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13387] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 1,
      sym_binary_operator,
    ACTIONS(368), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13401] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
    ACTIONS(502), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13419] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_binary_operator,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13433] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_EQ,
    ACTIONS(504), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13447] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_EQ,
    ACTIONS(508), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13461] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(514), 1,
      anon_sym_EQ,
    ACTIONS(512), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13475] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      sym_binary_operator,
    ACTIONS(348), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13489] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_EQ,
    ACTIONS(504), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13503] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      sym_binary_operator,
    ACTIONS(376), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_EQ,
    ACTIONS(516), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13531] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      anon_sym_EQ,
    ACTIONS(520), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_binary_operator,
    ACTIONS(352), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13559] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(335), 1,
      sym_binary_operator,
    ACTIONS(333), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13573] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_binary_operator,
    ACTIONS(360), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13587] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_EQ,
    ACTIONS(524), 5,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_COLON_COLON,
  [13601] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(305), 1,
      sym_binary_operator,
    ACTIONS(301), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 1,
      sym_binary_operator,
    ACTIONS(364), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(331), 1,
      sym_binary_operator,
    ACTIONS(329), 5,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_COLON_COLON,
      anon_sym_proc,
  [13643] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    STATE(324), 1,
      aux_sym_expr_repeat1,
  [13662] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    STATE(402), 1,
      aux_sym_expr_repeat1,
  [13681] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(382), 1,
      aux_sym_expr_repeat1,
  [13700] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(331), 1,
      aux_sym_expr_repeat1,
  [13719] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(410), 1,
      aux_sym_expr_repeat1,
  [13738] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(542), 1,
      anon_sym_RBRACK,
    STATE(412), 1,
      aux_sym_expr_repeat1,
  [13757] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13774] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(546), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [13789] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(548), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13802] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    STATE(335), 1,
      aux_sym_expr_repeat1,
  [13821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(552), 1,
      anon_sym_SQUOTE,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13838] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(554), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13851] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(558), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [13898] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(372), 1,
      aux_sym_expr_repeat1,
  [13917] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(409), 1,
      aux_sym_expr_repeat1,
  [13936] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    STATE(326), 1,
      aux_sym_expr_repeat1,
  [13955] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(414), 1,
      aux_sym_expr_repeat1,
  [13974] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(568), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [13987] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(391), 1,
      aux_sym_expr_repeat1,
  [14006] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(572), 1,
      anon_sym_RPAREN,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    STATE(352), 1,
      aux_sym_expr_repeat4,
  [14025] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_COLON,
    ACTIONS(576), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14038] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(580), 1,
      anon_sym_COMMA,
    STATE(392), 1,
      aux_sym_expr_repeat1,
  [14057] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 4,
      anon_sym_def,
      aux_sym_sym_token1,
      anon_sym_glob,
      anon_sym_proc,
  [14070] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14087] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(588), 1,
      anon_sym_SQUOTE,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(590), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(592), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14130] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(294), 1,
      sym_def_fields,
    STATE(639), 1,
      sym_sym,
    STATE(214), 2,
      sym_def_field,
      aux_sym_def_fields_repeat1,
  [14147] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 4,
      anon_sym_def,
      aux_sym_sym_token1,
      anon_sym_glob,
      anon_sym_proc,
  [14160] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
    ACTIONS(598), 1,
      anon_sym_COMMA,
  [14176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DeriveCap,
    STATE(607), 1,
      sym_pure_memop_op,
    ACTIONS(604), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14200] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      anon_sym_RPAREN,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    STATE(339), 1,
      aux_sym_pattern_repeat1,
  [14216] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(612), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(614), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14236] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(616), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(618), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [14260] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_DeriveCap,
    STATE(560), 1,
      sym_pure_memop_op,
    ACTIONS(604), 2,
      anon_sym_CapAssignValue,
      anon_sym_Ptr_tIntValue,
  [14274] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      anon_sym_LPAREN,
    ACTIONS(476), 2,
      anon_sym_STAR,
      anon_sym_LPAREN_STAR_RPAREN,
  [14288] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(620), 1,
      anon_sym_RBRACK,
    STATE(411), 1,
      aux_sym_pattern_repeat1,
  [14304] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(357), 1,
      aux_sym_expr_repeat3,
  [14320] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
    STATE(385), 1,
      aux_sym_pattern_repeat1,
  [14336] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    STATE(482), 1,
      sym_attribute,
    STATE(654), 1,
      sym_sym,
  [14352] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(628), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_expr_repeat1,
    ACTIONS(546), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14380] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(633), 1,
      sym_impl,
    STATE(456), 1,
      sym_name,
    STATE(459), 1,
      sym_sym,
  [14396] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(637), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_pattern_repeat1,
    ACTIONS(635), 2,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
  [14410] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
    ACTIONS(642), 1,
      anon_sym_COMMA,
  [14426] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(386), 1,
      aux_sym_pattern_repeat1,
  [14442] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(633), 1,
      sym_impl,
    STATE(459), 1,
      sym_sym,
    STATE(568), 1,
      sym_name,
  [14458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 4,
      ts_builtin_sym_end,
      anon_sym_def,
      anon_sym_glob,
      anon_sym_proc,
  [14468] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(648), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [14482] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      aux_sym_sym_token1,
    ACTIONS(633), 1,
      sym_impl,
    STATE(459), 1,
      sym_sym,
    STATE(550), 1,
      sym_name,
  [14498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(635), 3,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [14510] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_else,
  [14523] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(652), 1,
      anon_sym_RPAREN,
    ACTIONS(654), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_expr_repeat3,
  [14536] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [14549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [14562] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_end,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    STATE(341), 1,
      aux_sym_pexpr_repeat1,
  [14575] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(663), 1,
      anon_sym_COMMA,
  [14588] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(665), 1,
      anon_sym_COMMA,
  [14601] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(667), 1,
      anon_sym_COMMA,
  [14614] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(669), 1,
      anon_sym_COMMA,
  [14627] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [14640] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(330), 1,
      sym_member,
  [14653] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [14666] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(673), 1,
      anon_sym_COMMA,
  [14679] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_RBRACK,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    STATE(344), 1,
      aux_sym_attribute_repeat1,
  [14692] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [14705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
    STATE(336), 1,
      aux_sym_pexpr_repeat2,
  [14718] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(681), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [14731] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_RPAREN,
    ACTIONS(685), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_params_repeat1,
  [14744] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(379), 1,
      sym_member,
  [14757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(687), 1,
      anon_sym_COMMA,
  [14770] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [14783] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    STATE(387), 1,
      aux_sym_pexpr_repeat2,
  [14796] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
  [14809] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(691), 1,
      anon_sym_COMMA,
  [14822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_pattern_repeat1,
  [14835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [14848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_PIPE,
    ACTIONS(696), 1,
      anon_sym_end,
    STATE(341), 1,
      aux_sym_pexpr_repeat1,
  [14861] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [14874] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(698), 1,
      anon_sym_else,
  [14887] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(700), 1,
      anon_sym_RBRACK,
    STATE(388), 1,
      aux_sym_attribute_repeat1,
  [14900] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(702), 1,
      anon_sym_COMMA,
  [14913] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(704), 1,
      anon_sym_of,
  [14926] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(706), 1,
      anon_sym_RPAREN,
    ACTIONS(708), 1,
      anon_sym_COMMA,
    STATE(347), 1,
      aux_sym_expr_repeat4,
  [14939] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(711), 1,
      anon_sym_then,
  [14952] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      anon_sym_RPAREN,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    STATE(394), 1,
      aux_sym_core_base_type_repeat1,
  [14965] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(717), 1,
      anon_sym_RPAREN,
    STATE(358), 1,
      aux_sym_core_base_type_repeat1,
  [14978] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(719), 1,
      anon_sym_in,
  [14991] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      anon_sym_COMMA,
    ACTIONS(721), 1,
      anon_sym_RPAREN,
    STATE(347), 1,
      aux_sym_expr_repeat4,
  [15004] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    ACTIONS(723), 1,
      anon_sym_RPAREN,
    STATE(618), 1,
      sym_sym,
  [15017] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_end,
    ACTIONS(725), 1,
      anon_sym_PIPE,
    STATE(398), 1,
      aux_sym_expr_repeat2,
  [15030] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(727), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_core_base_type_repeat1,
  [15043] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      anon_sym_RBRACK,
    ACTIONS(731), 1,
      anon_sym_ailname,
    STATE(328), 1,
      sym_attribute_pair,
  [15056] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(63), 1,
      anon_sym_RPAREN,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    STATE(316), 1,
      aux_sym_expr_repeat3,
  [15069] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(733), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_core_base_type_repeat1,
  [15082] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(735), 1,
      anon_sym_COMMA,
  [15095] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [15108] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(739), 1,
      anon_sym_COMMA,
  [15121] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_end,
    ACTIONS(725), 1,
      anon_sym_PIPE,
    STATE(354), 1,
      aux_sym_expr_repeat2,
  [15134] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(355), 1,
      aux_sym_core_base_type_repeat1,
  [15147] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(743), 1,
      anon_sym_then,
  [15160] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(698), 1,
      anon_sym_in,
  [15173] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(745), 1,
      anon_sym_RPAREN,
    STATE(397), 1,
      aux_sym_core_base_type_repeat1,
  [15186] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(747), 1,
      anon_sym_then,
  [15199] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
  [15212] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(749), 1,
      anon_sym_of,
  [15225] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
  [15238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(751), 1,
      anon_sym_COMMA,
  [15251] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15264] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_end,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    STATE(383), 1,
      aux_sym_pexpr_repeat1,
  [15277] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [15290] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(753), 2,
      anon_sym_PIPE,
      anon_sym_end,
  [15301] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(376), 1,
      aux_sym_params_repeat1,
  [15314] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      aux_sym_sym_token1,
    STATE(422), 1,
      sym_sym,
    STATE(490), 1,
      sym_cabs_id,
  [15327] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15340] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
    STATE(415), 1,
      aux_sym_pexpr_repeat2,
  [15353] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(760), 1,
      anon_sym_RPAREN,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(393), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15366] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 1,
      anon_sym_RPAREN,
    ACTIONS(768), 1,
      anon_sym_COMMA,
    STATE(381), 1,
      aux_sym_core_base_type_repeat1,
  [15379] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(764), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15392] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 1,
      anon_sym_end,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    STATE(341), 1,
      aux_sym_pexpr_repeat1,
  [15405] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(650), 1,
      anon_sym_in,
  [15418] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(771), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_pattern_repeat1,
  [15431] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(773), 1,
      anon_sym_RPAREN,
    STATE(307), 1,
      aux_sym_pattern_repeat1,
  [15444] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(775), 1,
      anon_sym_COMMA,
    ACTIONS(778), 1,
      anon_sym_RBRACE,
    STATE(387), 1,
      aux_sym_pexpr_repeat2,
  [15457] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 1,
      anon_sym_RBRACK,
    ACTIONS(782), 1,
      anon_sym_COMMA,
    STATE(388), 1,
      aux_sym_attribute_repeat1,
  [15470] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(785), 1,
      anon_sym_RPAREN,
    STATE(378), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15483] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(789), 1,
      sym_impl,
    ACTIONS(787), 2,
      anon_sym_struct,
      anon_sym_union,
  [15494] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(791), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15507] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15520] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    ACTIONS(793), 1,
      anon_sym_RPAREN,
    STATE(406), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_core_base_type_repeat1,
  [15546] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(422), 1,
      sym_sym,
    STATE(588), 1,
      sym_cabs_id,
  [15559] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(797), 1,
      anon_sym_of,
  [15572] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_RPAREN,
    STATE(381), 1,
      aux_sym_core_base_type_repeat1,
  [15585] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_PIPE,
    ACTIONS(804), 1,
      anon_sym_end,
    STATE(398), 1,
      aux_sym_expr_repeat2,
  [15598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(652), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [15609] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(806), 1,
      anon_sym_COMMA,
  [15622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    ACTIONS(808), 1,
      anon_sym_RPAREN,
    STATE(488), 1,
      sym_sym,
  [15635] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15648] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(810), 1,
      anon_sym_COMMA,
  [15661] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(640), 1,
      anon_sym_RPAREN,
  [15674] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(812), 1,
      anon_sym_COMMA,
  [15687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(814), 1,
      anon_sym_RPAREN,
    ACTIONS(816), 1,
      anon_sym_COMMA,
    STATE(406), 1,
      aux_sym_proc_full_declaration_repeat1,
  [15700] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(819), 1,
      anon_sym_COMMA,
  [15713] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(821), 1,
      anon_sym_COMMA,
  [15726] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15739] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(823), 1,
      anon_sym_RPAREN,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15752] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COMMA,
    ACTIONS(825), 1,
      anon_sym_RBRACK,
    STATE(307), 1,
      aux_sym_pattern_repeat1,
  [15765] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(827), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(422), 1,
      sym_sym,
    STATE(502), 1,
      sym_cabs_id,
  [15791] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      anon_sym_COMMA,
    ACTIONS(829), 1,
      anon_sym_RBRACK,
    STATE(305), 1,
      aux_sym_expr_repeat1,
  [15804] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(679), 1,
      anon_sym_COMMA,
    ACTIONS(831), 1,
      anon_sym_RBRACE,
    STATE(387), 1,
      aux_sym_pexpr_repeat2,
  [15817] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(833), 1,
      anon_sym_COMMA,
  [15830] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_end,
    ACTIONS(661), 1,
      anon_sym_PIPE,
    STATE(319), 1,
      aux_sym_pexpr_repeat1,
  [15843] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      anon_sym_COLON_COLON,
    ACTIONS(534), 1,
      sym_binary_operator,
    ACTIONS(831), 1,
      anon_sym_RPAREN,
  [15856] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 1,
      anon_sym_EQ,
    ACTIONS(837), 1,
      anon_sym_COLON_COLON,
  [15866] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(566), 1,
      sym_sym,
  [15876] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(505), 1,
      sym_sym,
  [15886] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 2,
      anon_sym_RPAREN,
      anon_sym_EQ,
  [15894] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(584), 1,
      sym_member,
  [15904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(297), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(285), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15920] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(841), 1,
      anon_sym_EQ_GT,
  [15930] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_SQUOTE,
    STATE(283), 1,
      sym_core_ctype,
  [15940] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(845), 1,
      anon_sym_in,
  [15950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(289), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [15966] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(500), 1,
      sym_sym,
  [15976] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      aux_sym_sym_token1,
    STATE(425), 1,
      sym_sym,
  [15986] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(528), 1,
      sym_core_ctype,
  [15996] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(766), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(780), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16012] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(778), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [16020] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(315), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16028] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(269), 1,
      anon_sym_RBRACK,
    ACTIONS(847), 1,
      sym_int_const,
  [16038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [16054] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(520), 1,
      sym_core_ctype,
  [16064] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(853), 1,
      anon_sym_COMMA,
  [16074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON_COLON,
    ACTIONS(855), 1,
      anon_sym_EQ,
  [16084] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(519), 1,
      sym_sym,
  [16094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(758), 1,
      aux_sym_sym_token1,
    STATE(221), 1,
      sym_sym,
  [16104] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(543), 1,
      sym_sym,
  [16114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(549), 1,
      sym_core_ctype,
  [16124] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(529), 1,
      sym_core_ctype,
  [16134] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16142] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LBRACK,
    ACTIONS(861), 1,
      anon_sym_COMMA,
  [16152] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(436), 1,
      sym_member,
  [16162] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON_COLON,
    ACTIONS(863), 1,
      anon_sym_EQ,
  [16172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(307), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16180] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [16190] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(564), 1,
      sym_sym,
  [16200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(865), 1,
      anon_sym_COMMA,
  [16210] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(653), 1,
      sym_sym,
  [16220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(550), 1,
      anon_sym_SEMI,
  [16230] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(303), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [16238] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(311), 2,
      anon_sym_EQ,
      anon_sym_COLON_COLON,
  [16246] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(509), 1,
      sym_sym,
  [16256] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(550), 1,
      anon_sym_SEMI,
    ACTIONS(719), 1,
      anon_sym_else,
  [16266] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(655), 1,
      sym_sym,
  [16276] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(511), 1,
      sym_sym,
  [16286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_string_token1,
    STATE(554), 1,
      sym_string,
  [16296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [16304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 1,
      anon_sym_ailname,
    STATE(435), 1,
      sym_attribute_pair,
  [16314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      aux_sym_string_token1,
    STATE(439), 1,
      sym_cstring,
  [16324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(630), 1,
      sym_sym,
  [16334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_LBRACK,
    STATE(627), 1,
      sym_glob_ctype_attribute,
  [16344] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(610), 1,
      anon_sym_COLON_COLON,
    ACTIONS(875), 1,
      anon_sym_EQ_GT,
  [16354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      aux_sym_string_token1,
    STATE(631), 1,
      sym_string,
  [16364] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      aux_sym_sym_token1,
    STATE(179), 1,
      sym_sym,
  [16374] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 2,
      anon_sym_signed,
      anon_sym_unsigned,
  [16382] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 1,
      anon_sym_COLON_COLON,
    ACTIONS(881), 1,
      anon_sym_EQ,
  [16392] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(150), 1,
      sym_sym,
  [16402] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_DOT,
    STATE(514), 1,
      sym_member,
  [16412] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(547), 1,
      sym_sym,
  [16422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_SQUOTE,
    STATE(635), 1,
      sym_core_ctype,
  [16432] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(645), 1,
      sym_sym,
  [16442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(546), 1,
      sym_sym,
  [16452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(646), 1,
      sym_sym,
  [16462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      aux_sym_sym_token1,
    STATE(647), 1,
      sym_sym,
  [16472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_LPAREN,
  [16479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_in,
  [16486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_COMMA,
  [16493] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      sym_memory_order,
  [16500] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_COLON,
  [16507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_COLON_EQ,
  [16514] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_EQ,
  [16521] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_RPAREN,
  [16528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_COLON_EQ,
  [16535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      sym_memory_order,
  [16542] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_COLON_EQ,
  [16549] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_COMMA,
  [16556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_COLON_EQ,
  [16563] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      sym_memory_order,
  [16570] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      anon_sym_RPAREN,
  [16577] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_RPAREN,
  [16584] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_EQ_GT,
  [16591] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_RPAREN,
  [16598] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_RPAREN,
  [16605] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      sym_memory_order,
  [16612] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_in,
  [16619] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(921), 1,
      anon_sym_RBRACK,
  [16626] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(923), 1,
      anon_sym_COMMA,
  [16633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(925), 1,
      anon_sym_COMMA,
  [16640] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(927), 1,
      anon_sym_in,
  [16647] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(929), 1,
      anon_sym_COLON,
  [16654] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(931), 1,
      anon_sym_DOT,
  [16661] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(933), 1,
      anon_sym_COMMA,
  [16668] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(935), 1,
      anon_sym_COMMA,
  [16675] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(937), 1,
      anon_sym_COMMA,
  [16682] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(764), 1,
      anon_sym_RBRACE,
  [16689] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(939), 1,
      anon_sym_RPAREN,
  [16696] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(941), 1,
      anon_sym_eff,
  [16703] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(943), 1,
      anon_sym_COLON_EQ,
  [16710] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(945), 1,
      anon_sym_LPAREN,
  [16717] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(947), 1,
      anon_sym_COMMA,
  [16724] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(949), 1,
      anon_sym_COMMA,
  [16731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      anon_sym_RPAREN,
  [16738] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(951), 1,
      anon_sym_COLON,
  [16745] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(953), 1,
      anon_sym_RBRACK,
  [16752] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(955), 1,
      anon_sym_COLON,
  [16759] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(957), 1,
      anon_sym_eff,
  [16766] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [16773] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
  [16780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(657), 1,
      anon_sym_COMMA,
  [16787] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_COMMA,
  [16794] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(961), 1,
      anon_sym_LBRACE,
  [16801] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(963), 1,
      anon_sym_LBRACK,
  [16808] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_COMMA,
  [16815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(965), 1,
      anon_sym_COLON_EQ,
  [16822] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(967), 1,
      anon_sym_LPAREN,
  [16829] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(969), 1,
      anon_sym_COLON,
  [16836] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(971), 1,
      aux_sym_pure_memop_op_token1,
  [16843] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(973), 1,
      anon_sym_LBRACE,
  [16850] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(975), 1,
      anon_sym_LPAREN,
  [16857] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RPAREN,
  [16864] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      anon_sym_RBRACK,
  [16871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(977), 1,
      anon_sym_COLON_EQ,
  [16878] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(979), 1,
      anon_sym_COLON,
  [16885] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(981), 1,
      anon_sym_COLON,
  [16892] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(983), 1,
      anon_sym_eff,
  [16899] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(985), 1,
      sym_memory_order,
  [16906] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(987), 1,
      anon_sym_LPAREN,
  [16913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(989), 1,
      anon_sym_COLON,
  [16920] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      anon_sym_RBRACK,
  [16927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(991), 1,
      anon_sym_RBRACK,
  [16934] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_RPAREN,
  [16941] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(993), 1,
      anon_sym_RPAREN,
  [16948] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(995), 1,
      anon_sym_RPAREN,
  [16955] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(997), 1,
      anon_sym_COLON,
  [16962] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(702), 1,
      anon_sym_COMMA,
  [16969] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(999), 1,
      anon_sym_COMMA,
  [16976] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(562), 1,
      anon_sym_RPAREN,
  [16983] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1001), 1,
      anon_sym_COLON,
  [16990] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1003), 1,
      anon_sym_COLON,
  [16997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1005), 1,
      anon_sym_COLON,
  [17004] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1007), 1,
      anon_sym_COMMA,
  [17011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1009), 1,
      anon_sym_COMMA,
  [17018] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1011), 1,
      anon_sym_COLON,
  [17025] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1013), 1,
      anon_sym_LBRACK,
  [17032] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1015), 1,
      anon_sym_RPAREN,
  [17039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      anon_sym_RPAREN,
  [17046] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1017), 1,
      anon_sym_RPAREN,
  [17053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1019), 1,
      anon_sym_COLON,
  [17060] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RPAREN,
  [17067] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1021), 1,
      anon_sym_COLON_EQ,
  [17074] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1023), 1,
      anon_sym_LPAREN,
  [17081] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1025), 1,
      anon_sym_LPAREN,
  [17088] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1027), 1,
      anon_sym_COLON,
  [17095] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1029), 1,
      anon_sym_LPAREN,
  [17102] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1031), 1,
      anon_sym_LPAREN,
  [17109] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1033), 1,
      anon_sym_LPAREN,
  [17116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1035), 1,
      anon_sym_LPAREN,
  [17123] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1037), 1,
      anon_sym_LPAREN,
  [17130] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1039), 1,
      anon_sym_LPAREN,
  [17137] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1041), 1,
      anon_sym_LPAREN,
  [17144] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1043), 1,
      anon_sym_COLON,
  [17151] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1045), 1,
      anon_sym_LPAREN,
  [17158] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(538), 1,
      anon_sym_RPAREN,
  [17165] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1047), 1,
      anon_sym_LPAREN,
  [17172] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(681), 1,
      anon_sym_RBRACE,
  [17179] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1049), 1,
      anon_sym_LPAREN,
  [17186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1051), 1,
      anon_sym_LPAREN,
  [17193] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1053), 1,
      anon_sym_LPAREN,
  [17200] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1055), 1,
      anon_sym_RPAREN,
  [17207] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1057), 1,
      ts_builtin_sym_end,
  [17214] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      anon_sym_RBRACK,
  [17221] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1059), 1,
      sym_ub,
  [17228] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1061), 1,
      anon_sym_LPAREN,
  [17235] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1063), 1,
      anon_sym_RPAREN,
  [17242] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1065), 1,
      anon_sym_COLON,
  [17249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1067), 1,
      anon_sym_COLON,
  [17256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1069), 1,
      anon_sym_LPAREN,
  [17263] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1071), 1,
      anon_sym_eff,
  [17270] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1073), 1,
      anon_sym_EQ,
  [17277] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1075), 1,
      anon_sym_LPAREN,
  [17284] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1077), 1,
      anon_sym_LPAREN,
  [17291] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1079), 1,
      anon_sym_LPAREN,
  [17298] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1081), 1,
      sym_ub,
  [17305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1083), 1,
      anon_sym_LPAREN,
  [17312] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1085), 1,
      anon_sym_LPAREN,
  [17319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1087), 1,
      anon_sym_COLON,
  [17326] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1089), 1,
      anon_sym_LPAREN,
  [17333] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1091), 1,
      anon_sym_COMMA,
  [17340] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1093), 1,
      anon_sym_LPAREN,
  [17347] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1095), 1,
      anon_sym_LPAREN,
  [17354] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1097), 1,
      anon_sym_LPAREN,
  [17361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1099), 1,
      anon_sym_LBRACE,
  [17368] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1101), 1,
      anon_sym_LPAREN,
  [17375] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1103), 1,
      anon_sym_LPAREN,
  [17382] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1105), 1,
      anon_sym_LPAREN,
  [17389] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1107), 1,
      anon_sym_LPAREN,
  [17396] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1109), 1,
      anon_sym_LPAREN,
  [17403] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1111), 1,
      anon_sym_RPAREN,
  [17410] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1113), 1,
      anon_sym_COLON,
  [17417] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1115), 1,
      anon_sym_COLON,
  [17424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1117), 1,
      anon_sym_eff,
  [17431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1119), 1,
      anon_sym_LPAREN,
  [17438] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1121), 1,
      aux_sym_sym_token1,
  [17445] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1123), 1,
      anon_sym_LPAREN,
  [17452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1125), 1,
      anon_sym_LPAREN,
  [17459] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1127), 1,
      anon_sym_LPAREN,
  [17466] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1129), 1,
      anon_sym_LPAREN,
  [17473] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1131), 1,
      anon_sym_COLON_EQ,
  [17480] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1133), 1,
      anon_sym_ail_ctype,
  [17487] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1135), 1,
      anon_sym_LBRACK,
  [17494] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1137), 1,
      anon_sym_RPAREN,
  [17501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      anon_sym_COMMA,
  [17508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1139), 1,
      anon_sym_RPAREN,
  [17515] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_RBRACK,
  [17522] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1141), 1,
      anon_sym_LBRACE,
  [17529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1143), 1,
      anon_sym_COMMA,
  [17536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1145), 1,
      anon_sym_DOT,
  [17543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1147), 1,
      anon_sym_LPAREN,
  [17550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1149), 1,
      anon_sym_LPAREN,
  [17557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1151), 1,
      anon_sym_COLON,
  [17564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1153), 1,
      anon_sym_COLON,
  [17571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1155), 1,
      aux_sym_sym_token1,
  [17578] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1157), 1,
      anon_sym_LBRACK,
  [17585] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1159), 1,
      anon_sym_COLON_EQ,
  [17592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1161), 1,
      anon_sym_LPAREN,
  [17599] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1163), 1,
      anon_sym_RPAREN,
  [17606] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1165), 1,
      anon_sym_LPAREN,
  [17613] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1167), 1,
      anon_sym_COMMA,
  [17620] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1169), 1,
      anon_sym_LPAREN,
  [17627] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1171), 1,
      anon_sym_LPAREN,
  [17634] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1173), 1,
      anon_sym_LPAREN,
  [17641] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1175), 1,
      anon_sym_EQ,
  [17648] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1177), 1,
      aux_sym_sym_token1,
  [17655] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1179), 1,
      anon_sym_COLON_EQ,
  [17662] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1181), 1,
      anon_sym_LPAREN,
  [17669] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1183), 1,
      anon_sym_COLON,
  [17676] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1185), 1,
      anon_sym_LPAREN,
  [17683] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1187), 1,
      anon_sym_COLON,
  [17690] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(1189), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 114,
  [SMALL_STATE(4)] = 228,
  [SMALL_STATE(5)] = 339,
  [SMALL_STATE(6)] = 450,
  [SMALL_STATE(7)] = 561,
  [SMALL_STATE(8)] = 672,
  [SMALL_STATE(9)] = 783,
  [SMALL_STATE(10)] = 894,
  [SMALL_STATE(11)] = 1005,
  [SMALL_STATE(12)] = 1116,
  [SMALL_STATE(13)] = 1224,
  [SMALL_STATE(14)] = 1332,
  [SMALL_STATE(15)] = 1440,
  [SMALL_STATE(16)] = 1548,
  [SMALL_STATE(17)] = 1656,
  [SMALL_STATE(18)] = 1764,
  [SMALL_STATE(19)] = 1872,
  [SMALL_STATE(20)] = 1980,
  [SMALL_STATE(21)] = 2088,
  [SMALL_STATE(22)] = 2196,
  [SMALL_STATE(23)] = 2304,
  [SMALL_STATE(24)] = 2412,
  [SMALL_STATE(25)] = 2520,
  [SMALL_STATE(26)] = 2628,
  [SMALL_STATE(27)] = 2736,
  [SMALL_STATE(28)] = 2844,
  [SMALL_STATE(29)] = 2952,
  [SMALL_STATE(30)] = 3060,
  [SMALL_STATE(31)] = 3168,
  [SMALL_STATE(32)] = 3276,
  [SMALL_STATE(33)] = 3384,
  [SMALL_STATE(34)] = 3492,
  [SMALL_STATE(35)] = 3600,
  [SMALL_STATE(36)] = 3708,
  [SMALL_STATE(37)] = 3816,
  [SMALL_STATE(38)] = 3924,
  [SMALL_STATE(39)] = 4032,
  [SMALL_STATE(40)] = 4140,
  [SMALL_STATE(41)] = 4248,
  [SMALL_STATE(42)] = 4356,
  [SMALL_STATE(43)] = 4464,
  [SMALL_STATE(44)] = 4572,
  [SMALL_STATE(45)] = 4680,
  [SMALL_STATE(46)] = 4788,
  [SMALL_STATE(47)] = 4896,
  [SMALL_STATE(48)] = 5004,
  [SMALL_STATE(49)] = 5112,
  [SMALL_STATE(50)] = 5220,
  [SMALL_STATE(51)] = 5328,
  [SMALL_STATE(52)] = 5436,
  [SMALL_STATE(53)] = 5544,
  [SMALL_STATE(54)] = 5652,
  [SMALL_STATE(55)] = 5760,
  [SMALL_STATE(56)] = 5868,
  [SMALL_STATE(57)] = 5976,
  [SMALL_STATE(58)] = 6084,
  [SMALL_STATE(59)] = 6192,
  [SMALL_STATE(60)] = 6300,
  [SMALL_STATE(61)] = 6408,
  [SMALL_STATE(62)] = 6516,
  [SMALL_STATE(63)] = 6624,
  [SMALL_STATE(64)] = 6732,
  [SMALL_STATE(65)] = 6840,
  [SMALL_STATE(66)] = 6948,
  [SMALL_STATE(67)] = 7056,
  [SMALL_STATE(68)] = 7164,
  [SMALL_STATE(69)] = 7272,
  [SMALL_STATE(70)] = 7380,
  [SMALL_STATE(71)] = 7488,
  [SMALL_STATE(72)] = 7596,
  [SMALL_STATE(73)] = 7689,
  [SMALL_STATE(74)] = 7779,
  [SMALL_STATE(75)] = 7869,
  [SMALL_STATE(76)] = 7959,
  [SMALL_STATE(77)] = 8049,
  [SMALL_STATE(78)] = 8139,
  [SMALL_STATE(79)] = 8229,
  [SMALL_STATE(80)] = 8319,
  [SMALL_STATE(81)] = 8409,
  [SMALL_STATE(82)] = 8499,
  [SMALL_STATE(83)] = 8589,
  [SMALL_STATE(84)] = 8679,
  [SMALL_STATE(85)] = 8769,
  [SMALL_STATE(86)] = 8859,
  [SMALL_STATE(87)] = 8949,
  [SMALL_STATE(88)] = 9039,
  [SMALL_STATE(89)] = 9129,
  [SMALL_STATE(90)] = 9219,
  [SMALL_STATE(91)] = 9309,
  [SMALL_STATE(92)] = 9359,
  [SMALL_STATE(93)] = 9408,
  [SMALL_STATE(94)] = 9457,
  [SMALL_STATE(95)] = 9506,
  [SMALL_STATE(96)] = 9552,
  [SMALL_STATE(97)] = 9598,
  [SMALL_STATE(98)] = 9644,
  [SMALL_STATE(99)] = 9690,
  [SMALL_STATE(100)] = 9736,
  [SMALL_STATE(101)] = 9782,
  [SMALL_STATE(102)] = 9828,
  [SMALL_STATE(103)] = 9874,
  [SMALL_STATE(104)] = 9920,
  [SMALL_STATE(105)] = 9966,
  [SMALL_STATE(106)] = 10012,
  [SMALL_STATE(107)] = 10055,
  [SMALL_STATE(108)] = 10095,
  [SMALL_STATE(109)] = 10135,
  [SMALL_STATE(110)] = 10175,
  [SMALL_STATE(111)] = 10212,
  [SMALL_STATE(112)] = 10249,
  [SMALL_STATE(113)] = 10286,
  [SMALL_STATE(114)] = 10323,
  [SMALL_STATE(115)] = 10360,
  [SMALL_STATE(116)] = 10397,
  [SMALL_STATE(117)] = 10424,
  [SMALL_STATE(118)] = 10461,
  [SMALL_STATE(119)] = 10498,
  [SMALL_STATE(120)] = 10535,
  [SMALL_STATE(121)] = 10572,
  [SMALL_STATE(122)] = 10609,
  [SMALL_STATE(123)] = 10646,
  [SMALL_STATE(124)] = 10683,
  [SMALL_STATE(125)] = 10720,
  [SMALL_STATE(126)] = 10757,
  [SMALL_STATE(127)] = 10794,
  [SMALL_STATE(128)] = 10831,
  [SMALL_STATE(129)] = 10868,
  [SMALL_STATE(130)] = 10905,
  [SMALL_STATE(131)] = 10942,
  [SMALL_STATE(132)] = 10979,
  [SMALL_STATE(133)] = 11016,
  [SMALL_STATE(134)] = 11053,
  [SMALL_STATE(135)] = 11090,
  [SMALL_STATE(136)] = 11127,
  [SMALL_STATE(137)] = 11164,
  [SMALL_STATE(138)] = 11201,
  [SMALL_STATE(139)] = 11244,
  [SMALL_STATE(140)] = 11281,
  [SMALL_STATE(141)] = 11318,
  [SMALL_STATE(142)] = 11358,
  [SMALL_STATE(143)] = 11380,
  [SMALL_STATE(144)] = 11420,
  [SMALL_STATE(145)] = 11463,
  [SMALL_STATE(146)] = 11500,
  [SMALL_STATE(147)] = 11537,
  [SMALL_STATE(148)] = 11574,
  [SMALL_STATE(149)] = 11595,
  [SMALL_STATE(150)] = 11632,
  [SMALL_STATE(151)] = 11653,
  [SMALL_STATE(152)] = 11674,
  [SMALL_STATE(153)] = 11711,
  [SMALL_STATE(154)] = 11732,
  [SMALL_STATE(155)] = 11769,
  [SMALL_STATE(156)] = 11790,
  [SMALL_STATE(157)] = 11827,
  [SMALL_STATE(158)] = 11850,
  [SMALL_STATE(159)] = 11871,
  [SMALL_STATE(160)] = 11892,
  [SMALL_STATE(161)] = 11913,
  [SMALL_STATE(162)] = 11952,
  [SMALL_STATE(163)] = 11972,
  [SMALL_STATE(164)] = 11992,
  [SMALL_STATE(165)] = 12012,
  [SMALL_STATE(166)] = 12032,
  [SMALL_STATE(167)] = 12062,
  [SMALL_STATE(168)] = 12082,
  [SMALL_STATE(169)] = 12102,
  [SMALL_STATE(170)] = 12122,
  [SMALL_STATE(171)] = 12152,
  [SMALL_STATE(172)] = 12172,
  [SMALL_STATE(173)] = 12192,
  [SMALL_STATE(174)] = 12212,
  [SMALL_STATE(175)] = 12232,
  [SMALL_STATE(176)] = 12252,
  [SMALL_STATE(177)] = 12272,
  [SMALL_STATE(178)] = 12292,
  [SMALL_STATE(179)] = 12312,
  [SMALL_STATE(180)] = 12332,
  [SMALL_STATE(181)] = 12352,
  [SMALL_STATE(182)] = 12372,
  [SMALL_STATE(183)] = 12392,
  [SMALL_STATE(184)] = 12412,
  [SMALL_STATE(185)] = 12432,
  [SMALL_STATE(186)] = 12452,
  [SMALL_STATE(187)] = 12472,
  [SMALL_STATE(188)] = 12492,
  [SMALL_STATE(189)] = 12512,
  [SMALL_STATE(190)] = 12529,
  [SMALL_STATE(191)] = 12546,
  [SMALL_STATE(192)] = 12563,
  [SMALL_STATE(193)] = 12580,
  [SMALL_STATE(194)] = 12597,
  [SMALL_STATE(195)] = 12614,
  [SMALL_STATE(196)] = 12631,
  [SMALL_STATE(197)] = 12648,
  [SMALL_STATE(198)] = 12665,
  [SMALL_STATE(199)] = 12682,
  [SMALL_STATE(200)] = 12699,
  [SMALL_STATE(201)] = 12716,
  [SMALL_STATE(202)] = 12733,
  [SMALL_STATE(203)] = 12750,
  [SMALL_STATE(204)] = 12767,
  [SMALL_STATE(205)] = 12784,
  [SMALL_STATE(206)] = 12801,
  [SMALL_STATE(207)] = 12818,
  [SMALL_STATE(208)] = 12835,
  [SMALL_STATE(209)] = 12852,
  [SMALL_STATE(210)] = 12873,
  [SMALL_STATE(211)] = 12894,
  [SMALL_STATE(212)] = 12916,
  [SMALL_STATE(213)] = 12932,
  [SMALL_STATE(214)] = 12950,
  [SMALL_STATE(215)] = 12972,
  [SMALL_STATE(216)] = 12991,
  [SMALL_STATE(217)] = 13006,
  [SMALL_STATE(218)] = 13021,
  [SMALL_STATE(219)] = 13036,
  [SMALL_STATE(220)] = 13055,
  [SMALL_STATE(221)] = 13074,
  [SMALL_STATE(222)] = 13089,
  [SMALL_STATE(223)] = 13104,
  [SMALL_STATE(224)] = 13119,
  [SMALL_STATE(225)] = 13138,
  [SMALL_STATE(226)] = 13157,
  [SMALL_STATE(227)] = 13174,
  [SMALL_STATE(228)] = 13197,
  [SMALL_STATE(229)] = 13212,
  [SMALL_STATE(230)] = 13231,
  [SMALL_STATE(231)] = 13245,
  [SMALL_STATE(232)] = 13261,
  [SMALL_STATE(233)] = 13275,
  [SMALL_STATE(234)] = 13289,
  [SMALL_STATE(235)] = 13303,
  [SMALL_STATE(236)] = 13317,
  [SMALL_STATE(237)] = 13331,
  [SMALL_STATE(238)] = 13345,
  [SMALL_STATE(239)] = 13359,
  [SMALL_STATE(240)] = 13373,
  [SMALL_STATE(241)] = 13387,
  [SMALL_STATE(242)] = 13401,
  [SMALL_STATE(243)] = 13419,
  [SMALL_STATE(244)] = 13433,
  [SMALL_STATE(245)] = 13447,
  [SMALL_STATE(246)] = 13461,
  [SMALL_STATE(247)] = 13475,
  [SMALL_STATE(248)] = 13489,
  [SMALL_STATE(249)] = 13503,
  [SMALL_STATE(250)] = 13517,
  [SMALL_STATE(251)] = 13531,
  [SMALL_STATE(252)] = 13545,
  [SMALL_STATE(253)] = 13559,
  [SMALL_STATE(254)] = 13573,
  [SMALL_STATE(255)] = 13587,
  [SMALL_STATE(256)] = 13601,
  [SMALL_STATE(257)] = 13615,
  [SMALL_STATE(258)] = 13629,
  [SMALL_STATE(259)] = 13643,
  [SMALL_STATE(260)] = 13662,
  [SMALL_STATE(261)] = 13681,
  [SMALL_STATE(262)] = 13700,
  [SMALL_STATE(263)] = 13719,
  [SMALL_STATE(264)] = 13738,
  [SMALL_STATE(265)] = 13757,
  [SMALL_STATE(266)] = 13774,
  [SMALL_STATE(267)] = 13789,
  [SMALL_STATE(268)] = 13802,
  [SMALL_STATE(269)] = 13821,
  [SMALL_STATE(270)] = 13838,
  [SMALL_STATE(271)] = 13851,
  [SMALL_STATE(272)] = 13868,
  [SMALL_STATE(273)] = 13881,
  [SMALL_STATE(274)] = 13898,
  [SMALL_STATE(275)] = 13917,
  [SMALL_STATE(276)] = 13936,
  [SMALL_STATE(277)] = 13955,
  [SMALL_STATE(278)] = 13974,
  [SMALL_STATE(279)] = 13987,
  [SMALL_STATE(280)] = 14006,
  [SMALL_STATE(281)] = 14025,
  [SMALL_STATE(282)] = 14038,
  [SMALL_STATE(283)] = 14057,
  [SMALL_STATE(284)] = 14070,
  [SMALL_STATE(285)] = 14087,
  [SMALL_STATE(286)] = 14104,
  [SMALL_STATE(287)] = 14117,
  [SMALL_STATE(288)] = 14130,
  [SMALL_STATE(289)] = 14147,
  [SMALL_STATE(290)] = 14160,
  [SMALL_STATE(291)] = 14176,
  [SMALL_STATE(292)] = 14186,
  [SMALL_STATE(293)] = 14200,
  [SMALL_STATE(294)] = 14216,
  [SMALL_STATE(295)] = 14226,
  [SMALL_STATE(296)] = 14236,
  [SMALL_STATE(297)] = 14246,
  [SMALL_STATE(298)] = 14260,
  [SMALL_STATE(299)] = 14274,
  [SMALL_STATE(300)] = 14288,
  [SMALL_STATE(301)] = 14304,
  [SMALL_STATE(302)] = 14320,
  [SMALL_STATE(303)] = 14336,
  [SMALL_STATE(304)] = 14352,
  [SMALL_STATE(305)] = 14366,
  [SMALL_STATE(306)] = 14380,
  [SMALL_STATE(307)] = 14396,
  [SMALL_STATE(308)] = 14410,
  [SMALL_STATE(309)] = 14426,
  [SMALL_STATE(310)] = 14442,
  [SMALL_STATE(311)] = 14458,
  [SMALL_STATE(312)] = 14468,
  [SMALL_STATE(313)] = 14482,
  [SMALL_STATE(314)] = 14498,
  [SMALL_STATE(315)] = 14510,
  [SMALL_STATE(316)] = 14523,
  [SMALL_STATE(317)] = 14536,
  [SMALL_STATE(318)] = 14549,
  [SMALL_STATE(319)] = 14562,
  [SMALL_STATE(320)] = 14575,
  [SMALL_STATE(321)] = 14588,
  [SMALL_STATE(322)] = 14601,
  [SMALL_STATE(323)] = 14614,
  [SMALL_STATE(324)] = 14627,
  [SMALL_STATE(325)] = 14640,
  [SMALL_STATE(326)] = 14653,
  [SMALL_STATE(327)] = 14666,
  [SMALL_STATE(328)] = 14679,
  [SMALL_STATE(329)] = 14692,
  [SMALL_STATE(330)] = 14705,
  [SMALL_STATE(331)] = 14718,
  [SMALL_STATE(332)] = 14731,
  [SMALL_STATE(333)] = 14744,
  [SMALL_STATE(334)] = 14757,
  [SMALL_STATE(335)] = 14770,
  [SMALL_STATE(336)] = 14783,
  [SMALL_STATE(337)] = 14796,
  [SMALL_STATE(338)] = 14809,
  [SMALL_STATE(339)] = 14822,
  [SMALL_STATE(340)] = 14835,
  [SMALL_STATE(341)] = 14848,
  [SMALL_STATE(342)] = 14861,
  [SMALL_STATE(343)] = 14874,
  [SMALL_STATE(344)] = 14887,
  [SMALL_STATE(345)] = 14900,
  [SMALL_STATE(346)] = 14913,
  [SMALL_STATE(347)] = 14926,
  [SMALL_STATE(348)] = 14939,
  [SMALL_STATE(349)] = 14952,
  [SMALL_STATE(350)] = 14965,
  [SMALL_STATE(351)] = 14978,
  [SMALL_STATE(352)] = 14991,
  [SMALL_STATE(353)] = 15004,
  [SMALL_STATE(354)] = 15017,
  [SMALL_STATE(355)] = 15030,
  [SMALL_STATE(356)] = 15043,
  [SMALL_STATE(357)] = 15056,
  [SMALL_STATE(358)] = 15069,
  [SMALL_STATE(359)] = 15082,
  [SMALL_STATE(360)] = 15095,
  [SMALL_STATE(361)] = 15108,
  [SMALL_STATE(362)] = 15121,
  [SMALL_STATE(363)] = 15134,
  [SMALL_STATE(364)] = 15147,
  [SMALL_STATE(365)] = 15160,
  [SMALL_STATE(366)] = 15173,
  [SMALL_STATE(367)] = 15186,
  [SMALL_STATE(368)] = 15199,
  [SMALL_STATE(369)] = 15212,
  [SMALL_STATE(370)] = 15225,
  [SMALL_STATE(371)] = 15238,
  [SMALL_STATE(372)] = 15251,
  [SMALL_STATE(373)] = 15264,
  [SMALL_STATE(374)] = 15277,
  [SMALL_STATE(375)] = 15290,
  [SMALL_STATE(376)] = 15301,
  [SMALL_STATE(377)] = 15314,
  [SMALL_STATE(378)] = 15327,
  [SMALL_STATE(379)] = 15340,
  [SMALL_STATE(380)] = 15353,
  [SMALL_STATE(381)] = 15366,
  [SMALL_STATE(382)] = 15379,
  [SMALL_STATE(383)] = 15392,
  [SMALL_STATE(384)] = 15405,
  [SMALL_STATE(385)] = 15418,
  [SMALL_STATE(386)] = 15431,
  [SMALL_STATE(387)] = 15444,
  [SMALL_STATE(388)] = 15457,
  [SMALL_STATE(389)] = 15470,
  [SMALL_STATE(390)] = 15483,
  [SMALL_STATE(391)] = 15494,
  [SMALL_STATE(392)] = 15507,
  [SMALL_STATE(393)] = 15520,
  [SMALL_STATE(394)] = 15533,
  [SMALL_STATE(395)] = 15546,
  [SMALL_STATE(396)] = 15559,
  [SMALL_STATE(397)] = 15572,
  [SMALL_STATE(398)] = 15585,
  [SMALL_STATE(399)] = 15598,
  [SMALL_STATE(400)] = 15609,
  [SMALL_STATE(401)] = 15622,
  [SMALL_STATE(402)] = 15635,
  [SMALL_STATE(403)] = 15648,
  [SMALL_STATE(404)] = 15661,
  [SMALL_STATE(405)] = 15674,
  [SMALL_STATE(406)] = 15687,
  [SMALL_STATE(407)] = 15700,
  [SMALL_STATE(408)] = 15713,
  [SMALL_STATE(409)] = 15726,
  [SMALL_STATE(410)] = 15739,
  [SMALL_STATE(411)] = 15752,
  [SMALL_STATE(412)] = 15765,
  [SMALL_STATE(413)] = 15778,
  [SMALL_STATE(414)] = 15791,
  [SMALL_STATE(415)] = 15804,
  [SMALL_STATE(416)] = 15817,
  [SMALL_STATE(417)] = 15830,
  [SMALL_STATE(418)] = 15843,
  [SMALL_STATE(419)] = 15856,
  [SMALL_STATE(420)] = 15866,
  [SMALL_STATE(421)] = 15876,
  [SMALL_STATE(422)] = 15886,
  [SMALL_STATE(423)] = 15894,
  [SMALL_STATE(424)] = 15904,
  [SMALL_STATE(425)] = 15912,
  [SMALL_STATE(426)] = 15920,
  [SMALL_STATE(427)] = 15930,
  [SMALL_STATE(428)] = 15940,
  [SMALL_STATE(429)] = 15950,
  [SMALL_STATE(430)] = 15958,
  [SMALL_STATE(431)] = 15966,
  [SMALL_STATE(432)] = 15976,
  [SMALL_STATE(433)] = 15986,
  [SMALL_STATE(434)] = 15996,
  [SMALL_STATE(435)] = 16004,
  [SMALL_STATE(436)] = 16012,
  [SMALL_STATE(437)] = 16020,
  [SMALL_STATE(438)] = 16028,
  [SMALL_STATE(439)] = 16038,
  [SMALL_STATE(440)] = 16046,
  [SMALL_STATE(441)] = 16054,
  [SMALL_STATE(442)] = 16064,
  [SMALL_STATE(443)] = 16074,
  [SMALL_STATE(444)] = 16084,
  [SMALL_STATE(445)] = 16094,
  [SMALL_STATE(446)] = 16104,
  [SMALL_STATE(447)] = 16114,
  [SMALL_STATE(448)] = 16124,
  [SMALL_STATE(449)] = 16134,
  [SMALL_STATE(450)] = 16142,
  [SMALL_STATE(451)] = 16152,
  [SMALL_STATE(452)] = 16162,
  [SMALL_STATE(453)] = 16172,
  [SMALL_STATE(454)] = 16180,
  [SMALL_STATE(455)] = 16190,
  [SMALL_STATE(456)] = 16200,
  [SMALL_STATE(457)] = 16210,
  [SMALL_STATE(458)] = 16220,
  [SMALL_STATE(459)] = 16230,
  [SMALL_STATE(460)] = 16238,
  [SMALL_STATE(461)] = 16246,
  [SMALL_STATE(462)] = 16256,
  [SMALL_STATE(463)] = 16266,
  [SMALL_STATE(464)] = 16276,
  [SMALL_STATE(465)] = 16286,
  [SMALL_STATE(466)] = 16296,
  [SMALL_STATE(467)] = 16304,
  [SMALL_STATE(468)] = 16314,
  [SMALL_STATE(469)] = 16324,
  [SMALL_STATE(470)] = 16334,
  [SMALL_STATE(471)] = 16344,
  [SMALL_STATE(472)] = 16354,
  [SMALL_STATE(473)] = 16364,
  [SMALL_STATE(474)] = 16374,
  [SMALL_STATE(475)] = 16382,
  [SMALL_STATE(476)] = 16392,
  [SMALL_STATE(477)] = 16402,
  [SMALL_STATE(478)] = 16412,
  [SMALL_STATE(479)] = 16422,
  [SMALL_STATE(480)] = 16432,
  [SMALL_STATE(481)] = 16442,
  [SMALL_STATE(482)] = 16452,
  [SMALL_STATE(483)] = 16462,
  [SMALL_STATE(484)] = 16472,
  [SMALL_STATE(485)] = 16479,
  [SMALL_STATE(486)] = 16486,
  [SMALL_STATE(487)] = 16493,
  [SMALL_STATE(488)] = 16500,
  [SMALL_STATE(489)] = 16507,
  [SMALL_STATE(490)] = 16514,
  [SMALL_STATE(491)] = 16521,
  [SMALL_STATE(492)] = 16528,
  [SMALL_STATE(493)] = 16535,
  [SMALL_STATE(494)] = 16542,
  [SMALL_STATE(495)] = 16549,
  [SMALL_STATE(496)] = 16556,
  [SMALL_STATE(497)] = 16563,
  [SMALL_STATE(498)] = 16570,
  [SMALL_STATE(499)] = 16577,
  [SMALL_STATE(500)] = 16584,
  [SMALL_STATE(501)] = 16591,
  [SMALL_STATE(502)] = 16598,
  [SMALL_STATE(503)] = 16605,
  [SMALL_STATE(504)] = 16612,
  [SMALL_STATE(505)] = 16619,
  [SMALL_STATE(506)] = 16626,
  [SMALL_STATE(507)] = 16633,
  [SMALL_STATE(508)] = 16640,
  [SMALL_STATE(509)] = 16647,
  [SMALL_STATE(510)] = 16654,
  [SMALL_STATE(511)] = 16661,
  [SMALL_STATE(512)] = 16668,
  [SMALL_STATE(513)] = 16675,
  [SMALL_STATE(514)] = 16682,
  [SMALL_STATE(515)] = 16689,
  [SMALL_STATE(516)] = 16696,
  [SMALL_STATE(517)] = 16703,
  [SMALL_STATE(518)] = 16710,
  [SMALL_STATE(519)] = 16717,
  [SMALL_STATE(520)] = 16724,
  [SMALL_STATE(521)] = 16731,
  [SMALL_STATE(522)] = 16738,
  [SMALL_STATE(523)] = 16745,
  [SMALL_STATE(524)] = 16752,
  [SMALL_STATE(525)] = 16759,
  [SMALL_STATE(526)] = 16766,
  [SMALL_STATE(527)] = 16773,
  [SMALL_STATE(528)] = 16780,
  [SMALL_STATE(529)] = 16787,
  [SMALL_STATE(530)] = 16794,
  [SMALL_STATE(531)] = 16801,
  [SMALL_STATE(532)] = 16808,
  [SMALL_STATE(533)] = 16815,
  [SMALL_STATE(534)] = 16822,
  [SMALL_STATE(535)] = 16829,
  [SMALL_STATE(536)] = 16836,
  [SMALL_STATE(537)] = 16843,
  [SMALL_STATE(538)] = 16850,
  [SMALL_STATE(539)] = 16857,
  [SMALL_STATE(540)] = 16864,
  [SMALL_STATE(541)] = 16871,
  [SMALL_STATE(542)] = 16878,
  [SMALL_STATE(543)] = 16885,
  [SMALL_STATE(544)] = 16892,
  [SMALL_STATE(545)] = 16899,
  [SMALL_STATE(546)] = 16906,
  [SMALL_STATE(547)] = 16913,
  [SMALL_STATE(548)] = 16920,
  [SMALL_STATE(549)] = 16927,
  [SMALL_STATE(550)] = 16934,
  [SMALL_STATE(551)] = 16941,
  [SMALL_STATE(552)] = 16948,
  [SMALL_STATE(553)] = 16955,
  [SMALL_STATE(554)] = 16962,
  [SMALL_STATE(555)] = 16969,
  [SMALL_STATE(556)] = 16976,
  [SMALL_STATE(557)] = 16983,
  [SMALL_STATE(558)] = 16990,
  [SMALL_STATE(559)] = 16997,
  [SMALL_STATE(560)] = 17004,
  [SMALL_STATE(561)] = 17011,
  [SMALL_STATE(562)] = 17018,
  [SMALL_STATE(563)] = 17025,
  [SMALL_STATE(564)] = 17032,
  [SMALL_STATE(565)] = 17039,
  [SMALL_STATE(566)] = 17046,
  [SMALL_STATE(567)] = 17053,
  [SMALL_STATE(568)] = 17060,
  [SMALL_STATE(569)] = 17067,
  [SMALL_STATE(570)] = 17074,
  [SMALL_STATE(571)] = 17081,
  [SMALL_STATE(572)] = 17088,
  [SMALL_STATE(573)] = 17095,
  [SMALL_STATE(574)] = 17102,
  [SMALL_STATE(575)] = 17109,
  [SMALL_STATE(576)] = 17116,
  [SMALL_STATE(577)] = 17123,
  [SMALL_STATE(578)] = 17130,
  [SMALL_STATE(579)] = 17137,
  [SMALL_STATE(580)] = 17144,
  [SMALL_STATE(581)] = 17151,
  [SMALL_STATE(582)] = 17158,
  [SMALL_STATE(583)] = 17165,
  [SMALL_STATE(584)] = 17172,
  [SMALL_STATE(585)] = 17179,
  [SMALL_STATE(586)] = 17186,
  [SMALL_STATE(587)] = 17193,
  [SMALL_STATE(588)] = 17200,
  [SMALL_STATE(589)] = 17207,
  [SMALL_STATE(590)] = 17214,
  [SMALL_STATE(591)] = 17221,
  [SMALL_STATE(592)] = 17228,
  [SMALL_STATE(593)] = 17235,
  [SMALL_STATE(594)] = 17242,
  [SMALL_STATE(595)] = 17249,
  [SMALL_STATE(596)] = 17256,
  [SMALL_STATE(597)] = 17263,
  [SMALL_STATE(598)] = 17270,
  [SMALL_STATE(599)] = 17277,
  [SMALL_STATE(600)] = 17284,
  [SMALL_STATE(601)] = 17291,
  [SMALL_STATE(602)] = 17298,
  [SMALL_STATE(603)] = 17305,
  [SMALL_STATE(604)] = 17312,
  [SMALL_STATE(605)] = 17319,
  [SMALL_STATE(606)] = 17326,
  [SMALL_STATE(607)] = 17333,
  [SMALL_STATE(608)] = 17340,
  [SMALL_STATE(609)] = 17347,
  [SMALL_STATE(610)] = 17354,
  [SMALL_STATE(611)] = 17361,
  [SMALL_STATE(612)] = 17368,
  [SMALL_STATE(613)] = 17375,
  [SMALL_STATE(614)] = 17382,
  [SMALL_STATE(615)] = 17389,
  [SMALL_STATE(616)] = 17396,
  [SMALL_STATE(617)] = 17403,
  [SMALL_STATE(618)] = 17410,
  [SMALL_STATE(619)] = 17417,
  [SMALL_STATE(620)] = 17424,
  [SMALL_STATE(621)] = 17431,
  [SMALL_STATE(622)] = 17438,
  [SMALL_STATE(623)] = 17445,
  [SMALL_STATE(624)] = 17452,
  [SMALL_STATE(625)] = 17459,
  [SMALL_STATE(626)] = 17466,
  [SMALL_STATE(627)] = 17473,
  [SMALL_STATE(628)] = 17480,
  [SMALL_STATE(629)] = 17487,
  [SMALL_STATE(630)] = 17494,
  [SMALL_STATE(631)] = 17501,
  [SMALL_STATE(632)] = 17508,
  [SMALL_STATE(633)] = 17515,
  [SMALL_STATE(634)] = 17522,
  [SMALL_STATE(635)] = 17529,
  [SMALL_STATE(636)] = 17536,
  [SMALL_STATE(637)] = 17543,
  [SMALL_STATE(638)] = 17550,
  [SMALL_STATE(639)] = 17557,
  [SMALL_STATE(640)] = 17564,
  [SMALL_STATE(641)] = 17571,
  [SMALL_STATE(642)] = 17578,
  [SMALL_STATE(643)] = 17585,
  [SMALL_STATE(644)] = 17592,
  [SMALL_STATE(645)] = 17599,
  [SMALL_STATE(646)] = 17606,
  [SMALL_STATE(647)] = 17613,
  [SMALL_STATE(648)] = 17620,
  [SMALL_STATE(649)] = 17627,
  [SMALL_STATE(650)] = 17634,
  [SMALL_STATE(651)] = 17641,
  [SMALL_STATE(652)] = 17648,
  [SMALL_STATE(653)] = 17655,
  [SMALL_STATE(654)] = 17662,
  [SMALL_STATE(655)] = 17669,
  [SMALL_STATE(656)] = 17676,
  [SMALL_STATE(657)] = 17683,
  [SMALL_STATE(658)] = 17690,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(469),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(480),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(171),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(638),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(623),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(648),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(649),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(656),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(658),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(624),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(650),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(553),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(604),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(625),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(626),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(455),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(616),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(615),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(613),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(612),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(610),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(609),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(608),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(606),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(605),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(603),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(601),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(538),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(587),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(586),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(585),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(583),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(581),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(579),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(578),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(578),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(577),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(576),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(575),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(575),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(574),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(574),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(573),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(571),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(570),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(595),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(594),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(559),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(557),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(558),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(562),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(476),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(644),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(644),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(532),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(531),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(637),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(621),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(445),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(596),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sym, 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sym, 1),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 2),
  [287] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 2),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 1),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 1),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 1),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 2),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 2),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 1),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 4),
  [309] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 4),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_base_type, 3),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_base_type, 3),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_object_type, 4),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_object_type, 4),
  [319] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 4),
  [321] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 4),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 5),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 5),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 6),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(390),
  [342] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(463),
  [345] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(303),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value, 1),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 7),
  [354] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 7),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 2),
  [358] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 2),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 3),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 3),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 8),
  [370] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 8),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_ctype, 3),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_core_ctype, 3),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 3),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 3),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pexpr, 9),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pexpr, 9),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pexpr, 2),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pexpr, 2),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 8),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 6),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 14),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 5),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 13),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 6),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 7),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 14),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 10),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action, 8),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 4),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [418] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paction, 1),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2), SHIFT_REPEAT(209),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_integer_type_repeat1, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer_type, 1),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer_type, 1),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_def_fields_repeat1, 2), SHIFT_REPEAT(142),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 2),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_fields, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_fields, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 4),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 4),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_type, 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 1),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 2),
  [464] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 2),
  [466] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype, 3),
  [468] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype, 3),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [474] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 1),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [480] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctype_star, 3),
  [482] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_ctype_star, 3),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_declaration, 6),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [488] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [490] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 4),
  [492] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 4),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1),
  [496] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 4),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 4),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [504] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 3),
  [506] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 3),
  [508] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 5),
  [510] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 5),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 3),
  [514] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 3),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 6),
  [518] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 6),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_pattern, 6),
  [522] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_pattern, 6),
  [524] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 5),
  [526] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 5),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 9),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 14),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 13),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_declaration, 7),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 4),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(620),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_field, 3),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_def_field, 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 12),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_full_declaration, 10),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(563),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(561),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_aggregate_declaration, 5),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_declaration, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 5),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 4),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(572),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(535),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 6),
  [630] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat1, 2), SHIFT_REPEAT(39),
  [633] = {.entry = {.count = 1, .reusable = false}}, SHIFT(459),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2),
  [637] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_repeat1, 2), SHIFT_REPEAT(98),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_proc_forward_declaration, 6),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_member, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2),
  [654] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat3, 2), SHIFT_REPEAT(88),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(641),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [693] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2), SHIFT_REPEAT(95),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat1, 2),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(622),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [706] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat4, 2), SHIFT_REPEAT(461),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(619),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(652),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(651),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [753] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 4),
  [755] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(145),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(542),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_core_base_type_repeat1, 2), SHIFT_REPEAT(130),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(522),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2), SHIFT_REPEAT(451),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pexpr_repeat2, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2),
  [782] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_repeat1, 2), SHIFT_REPEAT(467),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(567),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(657),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(524),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2), SHIFT_REPEAT(97),
  [804] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expr_repeat2, 2),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2),
  [816] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 2), SHIFT_REPEAT(446),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(580),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cabs_id, 1),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(540),
  [849] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_pair, 3),
  [851] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cstring, 1),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [857] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_proc_full_declaration_repeat1, 4),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 1),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(555),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(552),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(628),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(632),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [887] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 6),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [905] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 4),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [913] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [923] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memop_op, 5),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [937] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 4),
  [939] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [961] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [965] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_glob_ctype_attribute, 5),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(521),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [971] = {.entry = {.count = 1, .reusable = true}}, SHIFT(523),
  [973] = {.entry = {.count = 1, .reusable = false}}, SHIFT(477),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [977] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(525),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(527),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(533),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(534),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [999] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [1009] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pure_memop_op, 1),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(536),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(537),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(530),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(544),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(545),
  [1027] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [1043] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1045] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1047] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [1049] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1051] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1053] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [1055] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [1057] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1059] = {.entry = {.count = 1, .reusable = true}}, SHIFT(556),
  [1061] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [1063] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1065] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [1067] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [1069] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [1071] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [1073] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1075] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [1077] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1079] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1081] = {.entry = {.count = 1, .reusable = true}}, SHIFT(565),
  [1083] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1085] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ctor, 1),
  [1087] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [1089] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [1091] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [1093] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1095] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1097] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1099] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [1101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(582),
  [1107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(591),
  [1109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [1113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(597),
  [1117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4),
  [1123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(602),
  [1125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [1127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [1133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(598),
  [1135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 2),
  [1137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(611),
  [1139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(614),
  [1141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [1143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [1145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [1149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [1151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [1155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3),
  [1157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_core_type, 1),
  [1159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [1161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(634),
  [1165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(636),
  [1169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [1175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 2),
  [1179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [1183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [1185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [1187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_core(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
