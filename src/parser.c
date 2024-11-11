#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 125
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 84
#define ALIAS_COUNT 0
#define TOKEN_COUNT 50
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 16

enum ts_symbol_identifiers {
  anon_sym_module = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_SEMI = 4,
  anon_sym_struct = 5,
  anon_sym_static = 6,
  anon_sym_global = 7,
  anon_sym_EQ = 8,
  anon_sym_require = 9,
  anon_sym_optional = 10,
  anon_sym_interface = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_out = 15,
  anon_sym_routekey = 16,
  anon_sym_enum = 17,
  anon_sym_const = 18,
  anon_sym_key = 19,
  anon_sym_LBRACK = 20,
  anon_sym_RBRACK = 21,
  anon_sym_POUNDinclude = 22,
  anon_sym_void = 23,
  anon_sym_bool = 24,
  anon_sym_byte = 25,
  anon_sym_short = 26,
  anon_sym_int = 27,
  anon_sym_long = 28,
  anon_sym_float = 29,
  anon_sym_double = 30,
  anon_sym_string = 31,
  anon_sym_COLON_COLON = 32,
  anon_sym_vector = 33,
  anon_sym_LT = 34,
  anon_sym_GT = 35,
  anon_sym_map = 36,
  anon_sym_true = 37,
  anon_sym_false = 38,
  sym__integer = 39,
  aux_sym__float_token1 = 40,
  aux_sym__float_token2 = 41,
  aux_sym__float_token3 = 42,
  aux_sym__float_token4 = 43,
  aux_sym__float_token5 = 44,
  anon_sym_DQUOTE = 45,
  aux_sym_string_token1 = 46,
  sym_escape_sequence = 47,
  sym_identifier = 48,
  sym_comment = 49,
  sym_source_file = 50,
  sym__definition = 51,
  sym_module = 52,
  sym_struct = 53,
  sym_struct_modifier = 54,
  sym_struct_member = 55,
  sym_tag_modifier = 56,
  sym_interface = 57,
  sym_function = 58,
  sym_parameter_list = 59,
  sym_parameter = 60,
  sym_param_modifier = 61,
  sym_enum = 62,
  sym_enum_member = 63,
  sym_const = 64,
  sym_key = 65,
  sym_include = 66,
  sym__type = 67,
  sym_basic_type = 68,
  sym_custom_type = 69,
  sym_vector_type = 70,
  sym_map_type = 71,
  sym__value = 72,
  sym_boolean = 73,
  sym_number = 74,
  sym__float = 75,
  sym_string = 76,
  aux_sym_source_file_repeat1 = 77,
  aux_sym_struct_repeat1 = 78,
  aux_sym_interface_repeat1 = 79,
  aux_sym_parameter_list_repeat1 = 80,
  aux_sym_enum_repeat1 = 81,
  aux_sym_key_repeat1 = 82,
  aux_sym_string_repeat1 = 83,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_module] = "module",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SEMI] = ";",
  [anon_sym_struct] = "struct",
  [anon_sym_static] = "static",
  [anon_sym_global] = "global",
  [anon_sym_EQ] = "=",
  [anon_sym_require] = "require",
  [anon_sym_optional] = "optional",
  [anon_sym_interface] = "interface",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [anon_sym_out] = "out",
  [anon_sym_routekey] = "routekey",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_key] = "key",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POUNDinclude] = "#include",
  [anon_sym_void] = "void",
  [anon_sym_bool] = "bool",
  [anon_sym_byte] = "byte",
  [anon_sym_short] = "short",
  [anon_sym_int] = "int",
  [anon_sym_long] = "long",
  [anon_sym_float] = "float",
  [anon_sym_double] = "double",
  [anon_sym_string] = "string",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_vector] = "vector",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_map] = "map",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym__integer] = "_integer",
  [aux_sym__float_token1] = "_float_token1",
  [aux_sym__float_token2] = "_float_token2",
  [aux_sym__float_token3] = "_float_token3",
  [aux_sym__float_token4] = "_float_token4",
  [aux_sym__float_token5] = "_float_token5",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_module] = "module",
  [sym_struct] = "struct",
  [sym_struct_modifier] = "struct_modifier",
  [sym_struct_member] = "struct_member",
  [sym_tag_modifier] = "tag_modifier",
  [sym_interface] = "interface",
  [sym_function] = "function",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_param_modifier] = "param_modifier",
  [sym_enum] = "enum",
  [sym_enum_member] = "enum_member",
  [sym_const] = "const",
  [sym_key] = "key",
  [sym_include] = "include",
  [sym__type] = "_type",
  [sym_basic_type] = "basic_type",
  [sym_custom_type] = "custom_type",
  [sym_vector_type] = "vector_type",
  [sym_map_type] = "map_type",
  [sym__value] = "_value",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym__float] = "_float",
  [sym_string] = "string",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_struct_repeat1] = "struct_repeat1",
  [aux_sym_interface_repeat1] = "interface_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_enum_repeat1] = "enum_repeat1",
  [aux_sym_key_repeat1] = "key_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_struct] = anon_sym_struct,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_global] = anon_sym_global,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_require] = anon_sym_require,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_out] = anon_sym_out,
  [anon_sym_routekey] = anon_sym_routekey,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_key] = anon_sym_key,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POUNDinclude] = anon_sym_POUNDinclude,
  [anon_sym_void] = anon_sym_void,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_byte] = anon_sym_byte,
  [anon_sym_short] = anon_sym_short,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_long] = anon_sym_long,
  [anon_sym_float] = anon_sym_float,
  [anon_sym_double] = anon_sym_double,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_map] = anon_sym_map,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym__integer] = sym__integer,
  [aux_sym__float_token1] = aux_sym__float_token1,
  [aux_sym__float_token2] = aux_sym__float_token2,
  [aux_sym__float_token3] = aux_sym__float_token3,
  [aux_sym__float_token4] = aux_sym__float_token4,
  [aux_sym__float_token5] = aux_sym__float_token5,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_module] = sym_module,
  [sym_struct] = sym_struct,
  [sym_struct_modifier] = sym_struct_modifier,
  [sym_struct_member] = sym_struct_member,
  [sym_tag_modifier] = sym_tag_modifier,
  [sym_interface] = sym_interface,
  [sym_function] = sym_function,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_param_modifier] = sym_param_modifier,
  [sym_enum] = sym_enum,
  [sym_enum_member] = sym_enum_member,
  [sym_const] = sym_const,
  [sym_key] = sym_key,
  [sym_include] = sym_include,
  [sym__type] = sym__type,
  [sym_basic_type] = sym_basic_type,
  [sym_custom_type] = sym_custom_type,
  [sym_vector_type] = sym_vector_type,
  [sym_map_type] = sym_map_type,
  [sym__value] = sym__value,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym__float] = sym__float,
  [sym_string] = sym_string,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_struct_repeat1] = aux_sym_struct_repeat1,
  [aux_sym_interface_repeat1] = aux_sym_interface_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_enum_repeat1] = aux_sym_enum_repeat1,
  [aux_sym_key_repeat1] = aux_sym_key_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_module] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_struct] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_global] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_require] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_out] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_routekey] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_key] = {
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
  [anon_sym_POUNDinclude] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_void] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_byte] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_short] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_long] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_double] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_map] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym__integer] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__float_token5] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_struct] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_struct_member] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_interface] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_param_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_enum] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_member] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_basic_type] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_type] = {
    .visible = true,
    .named = true,
  },
  [sym_vector_type] = {
    .visible = true,
    .named = true,
  },
  [sym_map_type] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__float] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_struct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_default = 1,
  field_element_type = 2,
  field_key_type = 3,
  field_name = 4,
  field_nested_type = 5,
  field_order = 6,
  field_path = 7,
  field_return_type = 8,
  field_tag_modifier = 9,
  field_type = 10,
  field_type_name = 11,
  field_value = 12,
  field_value_type = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_default] = "default",
  [field_element_type] = "element_type",
  [field_key_type] = "key_type",
  [field_name] = "name",
  [field_nested_type] = "nested_type",
  [field_order] = "order",
  [field_path] = "path",
  [field_return_type] = "return_type",
  [field_tag_modifier] = "tag_modifier",
  [field_type] = "type",
  [field_type_name] = "type_name",
  [field_value] = "value",
  [field_value_type] = "value_type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 3},
  [9] = {.index = 12, .length = 1},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 4},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 2},
  [15] = {.index = 25, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_name, 0},
  [1] =
    {field_path, 1},
  [2] =
    {field_name, 0},
  [3] =
    {field_nested_type, 2},
    {field_type_name, 0},
  [5] =
    {field_name, 1},
  [6] =
    {field_element_type, 2},
  [7] =
    {field_name, 0},
    {field_value, 2},
  [9] =
    {field_name, 2},
    {field_type, 1},
    {field_value, 4},
  [12] =
    {field_name, 2},
  [13] =
    {field_key_type, 2},
    {field_value_type, 4},
  [15] =
    {field_name, 3},
    {field_order, 0},
    {field_tag_modifier, 1},
    {field_type, 2},
  [19] =
    {field_name, 1},
    {field_return_type, 0},
  [21] =
    {field_name, 1},
    {field_type, 0},
  [23] =
    {field_name, 2},
    {field_type, 1},
  [25] =
    {field_default, 5},
    {field_name, 3},
    {field_order, 0},
    {field_tag_modifier, 1},
    {field_type, 2},
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
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
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
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 53,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
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
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(140);
      ADVANCE_MAP(
        '"', 200,
        '#', 57,
        '(', 152,
        ')', 153,
        ',', 154,
        '.', 127,
        '/', 13,
        ':', 19,
        ';', 144,
        '<', 186,
        '=', 148,
        '>', 187,
        '[', 162,
      );
      if (lookahead == '\\') SKIP(136);
      if (lookahead == ']') ADVANCE(163);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'd') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(74);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'l') ADVANCE(89);
      if (lookahead == 'm') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead == 't') ADVANCE(96);
      if (lookahead == 'v') ADVANCE(40);
      if (lookahead == '{') ADVANCE(142);
      if (lookahead == '}') ADVANCE(143);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12);
      if (lookahead == '\r') SKIP(1);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(18);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18);
      if (lookahead == '\r') SKIP(3);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(10);
      if (lookahead == '\r') SKIP(5);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(207);
      if (lookahead == '\r') ADVANCE(207);
      if (lookahead == 'u') ADVANCE(134);
      if (lookahead == 'x') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(209);
      if (lookahead != 0) ADVANCE(207);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(16);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(16);
      if (lookahead == '\r') SKIP(8);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(6);
      if (lookahead == 'f') ADVANCE(211);
      if (lookahead == 't') ADVANCE(247);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(17);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '/') ADVANCE(202);
      if (lookahead == '\\') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0) ADVANCE(206);
      END_STATE();
    case 12:
      if (lookahead == ')') ADVANCE(153);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(2);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 'o') ADVANCE(258);
      if (lookahead == 'r') ADVANCE(243);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(216);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(264);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == ',') ADVANCE(154);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(148);
      if (lookahead == '>') ADVANCE(187);
      if (lookahead == '\\') SKIP(9);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(4);
      if (lookahead == 'b') ADVANCE(241);
      if (lookahead == 'd') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(232);
      if (lookahead == 'i') ADVANCE(234);
      if (lookahead == 'l') ADVANCE(237);
      if (lookahead == 'm') ADVANCE(210);
      if (lookahead == 's') ADVANCE(225);
      if (lookahead == 'v') ADVANCE(216);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(183);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(91);
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(66);
      if (lookahead == 'l') ADVANCE(82);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(104);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'b') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'c') ADVANCE(112);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(106);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(121);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(48);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'o') ADVANCE(119);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(169);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(192);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 51:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 52:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'g') ADVANCE(175);
      END_STATE();
    case 54:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 55:
      if (lookahead == 'h') ADVANCE(83);
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 57:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'i') ADVANCE(97);
      END_STATE();
    case 59:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 61:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 62:
      if (lookahead == 'k') ADVANCE(50);
      END_STATE();
    case 63:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 64:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 66:
      if (lookahead == 'l') ADVANCE(99);
      END_STATE();
    case 67:
      if (lookahead == 'l') ADVANCE(84);
      END_STATE();
    case 68:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 69:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 70:
      if (lookahead == 'l') ADVANCE(117);
      END_STATE();
    case 71:
      if (lookahead == 'm') ADVANCE(159);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 73:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 76:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 'n') ADVANCE(54);
      END_STATE();
    case 78:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 79:
      if (lookahead == 'n') ADVANCE(113);
      END_STATE();
    case 80:
      if (lookahead == 'o') ADVANCE(114);
      END_STATE();
    case 81:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 82:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 83:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 84:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 85:
      if (lookahead == 'o') ADVANCE(86);
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 86:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 87:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(94);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(78);
      END_STATE();
    case 91:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 92:
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'u') ADVANCE(102);
      END_STATE();
    case 93:
      if (lookahead == 'q') ADVANCE(118);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(184);
      END_STATE();
    case 95:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 96:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 97:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 98:
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 99:
      if (lookahead == 's') ADVANCE(43);
      END_STATE();
    case 100:
      if (lookahead == 's') ADVANCE(103);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(155);
      END_STATE();
    case 103:
      if (lookahead == 't') ADVANCE(160);
      END_STATE();
    case 104:
      if (lookahead == 't') ADVANCE(177);
      END_STATE();
    case 105:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 106:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 107:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 108:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 109:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 110:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 111:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 112:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 113:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 115:
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 116:
      if (lookahead == 'u') ADVANCE(42);
      END_STATE();
    case 117:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 118:
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 119:
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 120:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 121:
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 122:
      if (lookahead == 'y') ADVANCE(161);
      END_STATE();
    case 123:
      if (lookahead == 'y') ADVANCE(157);
      END_STATE();
    case 124:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 125:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 126:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 127:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 128:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 129:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 130:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 131:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 132:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 133:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 134:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 135:
      if (eof) ADVANCE(140);
      if (lookahead == '\n') SKIP(0);
      END_STATE();
    case 136:
      if (eof) ADVANCE(140);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '\r') SKIP(135);
      END_STATE();
    case 137:
      if (eof) ADVANCE(140);
      if (lookahead == '\n') SKIP(139);
      END_STATE();
    case 138:
      if (eof) ADVANCE(140);
      if (lookahead == '\n') SKIP(139);
      if (lookahead == '\r') SKIP(137);
      END_STATE();
    case 139:
      if (eof) ADVANCE(140);
      if (lookahead == '#') ADVANCE(57);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == '\\') SKIP(138);
      if (lookahead == 'c') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == 'k') ADVANCE(38);
      if (lookahead == 'm') ADVANCE(81);
      if (lookahead == 's') ADVANCE(108);
      if (lookahead == '}') ADVANCE(143);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_struct);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_global);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_require);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_out);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_out);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_routekey);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_routekey);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_key);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_POUNDinclude);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_void);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_void);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_bool);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_byte);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_short);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_short);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_long);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_long);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_float);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_float);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_double);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_double);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(anon_sym_string);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_vector);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_map);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_map);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__integer);
      if (lookahead == '.') ADVANCE(195);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(124);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym__float_token1);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym__float_token2);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym__float_token3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym__float_token4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym__float_token5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(206);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(264);
      if (lookahead != 0) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(204);
      if (lookahead == '/') ADVANCE(201);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '/') ADVANCE(206);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '*') ADVANCE(203);
      if (lookahead == '"' ||
          lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(204);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(202);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(206);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(207);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(208);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(244);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'b') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(256);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(166);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'o') ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(261);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(193);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'g') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(240);
      if (lookahead == 't') ADVANCE(246);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(215);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'k') ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(223);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(257);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(248);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(236);
      if (lookahead == 'y') ADVANCE(250);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(245);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(260);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'p') ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(227);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(259);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(254);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(218);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(252);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(221);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(255);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(158);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(264);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 139},
  [2] = {.lex_state = 12},
  [3] = {.lex_state = 139},
  [4] = {.lex_state = 12},
  [5] = {.lex_state = 139},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 139},
  [8] = {.lex_state = 139},
  [9] = {.lex_state = 18},
  [10] = {.lex_state = 18},
  [11] = {.lex_state = 18},
  [12] = {.lex_state = 18},
  [13] = {.lex_state = 18},
  [14] = {.lex_state = 18},
  [15] = {.lex_state = 18},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 139},
  [27] = {.lex_state = 139},
  [28] = {.lex_state = 139},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 139},
  [31] = {.lex_state = 139},
  [32] = {.lex_state = 139},
  [33] = {.lex_state = 139},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 139},
  [36] = {.lex_state = 139},
  [37] = {.lex_state = 139},
  [38] = {.lex_state = 139},
  [39] = {.lex_state = 139},
  [40] = {.lex_state = 139},
  [41] = {.lex_state = 139},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 16},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 16},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 16},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 16},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 16},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 16},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 16},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 16},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 16},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 16},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_struct] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_global] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_require] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_out] = ACTIONS(1),
    [anon_sym_routekey] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_key] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POUNDinclude] = ACTIONS(1),
    [anon_sym_void] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_byte] = ACTIONS(1),
    [anon_sym_short] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_long] = ACTIONS(1),
    [anon_sym_float] = ACTIONS(1),
    [anon_sym_double] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_map] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym__integer] = ACTIONS(1),
    [aux_sym__float_token1] = ACTIONS(1),
    [aux_sym__float_token2] = ACTIONS(1),
    [aux_sym__float_token3] = ACTIONS(1),
    [aux_sym__float_token4] = ACTIONS(1),
    [aux_sym__float_token5] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__definition] = STATE(5),
    [sym_module] = STATE(5),
    [sym_struct] = STATE(5),
    [sym_struct_modifier] = STATE(91),
    [sym_interface] = STATE(5),
    [sym_enum] = STATE(5),
    [sym_const] = STATE(5),
    [sym_key] = STATE(5),
    [sym_include] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_module] = ACTIONS(7),
    [anon_sym_struct] = ACTIONS(9),
    [anon_sym_static] = ACTIONS(11),
    [anon_sym_global] = ACTIONS(11),
    [anon_sym_interface] = ACTIONS(13),
    [anon_sym_enum] = ACTIONS(15),
    [anon_sym_const] = ACTIONS(17),
    [anon_sym_key] = ACTIONS(19),
    [anon_sym_POUNDinclude] = ACTIONS(21),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(23), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_param_modifier,
    STATE(57), 1,
      sym_parameter,
    STATE(102), 1,
      sym_parameter_list,
    ACTIONS(25), 2,
      anon_sym_out,
      anon_sym_routekey,
    STATE(105), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [47] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_module,
    ACTIONS(40), 1,
      anon_sym_struct,
    ACTIONS(46), 1,
      anon_sym_interface,
    ACTIONS(49), 1,
      anon_sym_enum,
    ACTIONS(52), 1,
      anon_sym_const,
    ACTIONS(55), 1,
      anon_sym_key,
    ACTIONS(58), 1,
      anon_sym_POUNDinclude,
    STATE(91), 1,
      sym_struct_modifier,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(43), 2,
      anon_sym_static,
      anon_sym_global,
    STATE(3), 9,
      sym__definition,
      sym_module,
      sym_struct,
      sym_interface,
      sym_enum,
      sym_const,
      sym_key,
      sym_include,
      aux_sym_source_file_repeat1,
  [94] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(14), 1,
      sym_param_modifier,
    STATE(72), 1,
      sym_parameter,
    ACTIONS(25), 2,
      anon_sym_out,
      anon_sym_routekey,
    STATE(105), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [135] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_key,
    ACTIONS(21), 1,
      anon_sym_POUNDinclude,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(91), 1,
      sym_struct_modifier,
    ACTIONS(11), 2,
      anon_sym_static,
      anon_sym_global,
    STATE(3), 9,
      sym__definition,
      sym_module,
      sym_struct,
      sym_interface,
      sym_enum,
      sym_const,
      sym_key,
      sym_include,
      aux_sym_source_file_repeat1,
  [181] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    STATE(9), 2,
      sym_function,
      aux_sym_interface_repeat1,
    STATE(76), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [219] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_key,
    ACTIONS(21), 1,
      anon_sym_POUNDinclude,
    ACTIONS(65), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_struct_modifier,
    ACTIONS(11), 2,
      anon_sym_static,
      anon_sym_global,
    STATE(8), 9,
      sym__definition,
      sym_module,
      sym_struct,
      sym_interface,
      sym_enum,
      sym_const,
      sym_key,
      sym_include,
      aux_sym_source_file_repeat1,
  [265] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_module,
    ACTIONS(9), 1,
      anon_sym_struct,
    ACTIONS(13), 1,
      anon_sym_interface,
    ACTIONS(15), 1,
      anon_sym_enum,
    ACTIONS(17), 1,
      anon_sym_const,
    ACTIONS(19), 1,
      anon_sym_key,
    ACTIONS(21), 1,
      anon_sym_POUNDinclude,
    ACTIONS(67), 1,
      anon_sym_RBRACE,
    STATE(91), 1,
      sym_struct_modifier,
    ACTIONS(11), 2,
      anon_sym_static,
      anon_sym_global,
    STATE(3), 9,
      sym__definition,
      sym_module,
      sym_struct,
      sym_interface,
      sym_enum,
      sym_const,
      sym_key,
      sym_include,
      aux_sym_source_file_repeat1,
  [311] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(10), 2,
      sym_function,
      aux_sym_interface_repeat1,
    STATE(76), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [349] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    ACTIONS(76), 1,
      anon_sym_vector,
    ACTIONS(79), 1,
      anon_sym_map,
    ACTIONS(82), 1,
      sym_identifier,
    STATE(10), 2,
      sym_function,
      aux_sym_interface_repeat1,
    STATE(76), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(73), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [387] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(99), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(86), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [449] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(87), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [480] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(115), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [511] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(88), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [542] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_vector,
    ACTIONS(31), 1,
      anon_sym_map,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(94), 5,
      sym__type,
      sym_basic_type,
      sym_custom_type,
      sym_vector_type,
      sym_map_type,
    ACTIONS(27), 9,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
  [573] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      sym_identifier,
    STATE(56), 1,
      sym__float,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    ACTIONS(87), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
    STATE(80), 4,
      sym__value,
      sym_boolean,
      sym_number,
      sym_string,
  [606] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      sym_identifier,
    STATE(56), 1,
      sym__float,
    ACTIONS(85), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(89), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    ACTIONS(87), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
    STATE(117), 4,
      sym__value,
      sym_boolean,
      sym_number,
      sym_string,
  [639] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_RBRACE,
    ACTIONS(99), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_vector,
      anon_sym_map,
      sym_identifier,
  [660] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_RBRACE,
    ACTIONS(103), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_vector,
      anon_sym_map,
      sym_identifier,
  [681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(105), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_vector,
      anon_sym_map,
      sym_identifier,
  [699] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(107), 12,
      anon_sym_void,
      anon_sym_bool,
      anon_sym_byte,
      anon_sym_short,
      anon_sym_int,
      anon_sym_long,
      anon_sym_float,
      anon_sym_double,
      anon_sym_string,
      anon_sym_vector,
      anon_sym_map,
      sym_identifier,
  [717] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__float,
    STATE(62), 1,
      sym_number,
    ACTIONS(89), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    STATE(24), 2,
      sym_struct_member,
      aux_sym_struct_repeat1,
    ACTIONS(87), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [744] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__float,
    STATE(62), 1,
      sym_number,
    ACTIONS(89), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    STATE(29), 2,
      sym_struct_member,
      aux_sym_struct_repeat1,
    ACTIONS(87), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [771] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__float,
    STATE(62), 1,
      sym_number,
    ACTIONS(89), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    STATE(34), 2,
      sym_struct_member,
      aux_sym_struct_repeat1,
    ACTIONS(87), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [798] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [815] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [832] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__float,
    STATE(62), 1,
      sym_number,
    ACTIONS(126), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    STATE(29), 2,
      sym_struct_member,
      aux_sym_struct_repeat1,
    ACTIONS(123), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(129), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [893] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [910] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [927] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [944] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym__float,
    STATE(62), 1,
      sym_number,
    ACTIONS(89), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    STATE(29), 2,
      sym_struct_member,
      aux_sym_struct_repeat1,
    ACTIONS(87), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(139), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(141), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [1005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [1022] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [1039] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [1056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [1073] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 11,
      ts_builtin_sym_end,
      anon_sym_module,
      anon_sym_RBRACE,
      anon_sym_struct,
      anon_sym_static,
      anon_sym_global,
      anon_sym_interface,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_key,
      anon_sym_POUNDinclude,
  [1090] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(53), 1,
      sym__float,
    STATE(55), 1,
      sym_number,
    ACTIONS(155), 2,
      aux_sym__float_token3,
      aux_sym__float_token4,
    ACTIONS(153), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [1110] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 3,
      anon_sym_RBRACE,
      aux_sym__float_token3,
      aux_sym__float_token4,
    ACTIONS(159), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [1125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 3,
      anon_sym_RBRACE,
      aux_sym__float_token3,
      aux_sym__float_token4,
    ACTIONS(163), 4,
      sym__integer,
      aux_sym__float_token1,
      aux_sym__float_token2,
      aux_sym__float_token5,
  [1140] = 5,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    ACTIONS(167), 1,
      aux_sym_string_token1,
    ACTIONS(169), 1,
      sym_escape_sequence,
    ACTIONS(171), 1,
      sym_comment,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [1156] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_COLON_COLON,
    ACTIONS(173), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1168] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 1,
      sym_identifier,
    STATE(47), 2,
      sym_enum_member,
      aux_sym_enum_repeat1,
  [1182] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_EQ,
    ACTIONS(186), 1,
      anon_sym_COMMA,
    ACTIONS(182), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_RBRACE,
    ACTIONS(190), 1,
      sym_identifier,
    STATE(47), 2,
      sym_enum_member,
      aux_sym_enum_repeat1,
  [1210] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_DQUOTE,
    ACTIONS(194), 1,
      aux_sym_string_token1,
    ACTIONS(197), 1,
      sym_escape_sequence,
    STATE(50), 1,
      aux_sym_string_repeat1,
  [1226] = 5,
    ACTIONS(171), 1,
      sym_comment,
    ACTIONS(200), 1,
      anon_sym_DQUOTE,
    ACTIONS(202), 1,
      aux_sym_string_token1,
    ACTIONS(204), 1,
      sym_escape_sequence,
    STATE(45), 1,
      aux_sym_string_repeat1,
  [1242] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      sym_identifier,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(49), 2,
      sym_enum_member,
      aux_sym_enum_repeat1,
  [1256] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      sym_identifier,
  [1265] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      anon_sym_COMMA,
    ACTIONS(212), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1285] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      anon_sym_SEMI,
      anon_sym_require,
      anon_sym_optional,
  [1294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
  [1307] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1316] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_key_repeat1,
  [1329] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1338] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      aux_sym_key_repeat1,
  [1351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    STATE(15), 1,
      sym_tag_modifier,
    ACTIONS(233), 2,
      anon_sym_require,
      anon_sym_optional,
  [1362] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      anon_sym_GT,
      sym_identifier,
  [1371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
  [1384] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      anon_sym_COMMA,
    ACTIONS(239), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      aux_sym_key_repeat1,
  [1397] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_RPAREN,
    ACTIONS(243), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_parameter_list_repeat1,
  [1410] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      anon_sym_EQ,
  [1420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [1428] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1452] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1460] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(256), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [1468] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    STATE(121), 1,
      sym_string,
  [1478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_SEMI,
  [1485] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_identifier,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 1,
      ts_builtin_sym_end,
  [1499] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_LBRACE,
  [1506] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 1,
      anon_sym_SEMI,
  [1513] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      anon_sym_SEMI,
  [1520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_SEMI,
  [1527] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LBRACK,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_SEMI,
  [1541] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym_identifier,
  [1548] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(278), 1,
      anon_sym_SEMI,
  [1555] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 1,
      anon_sym_GT,
  [1562] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      anon_sym_COMMA,
  [1569] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(284), 1,
      sym_identifier,
  [1576] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(286), 1,
      anon_sym_EQ,
  [1583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(288), 1,
      anon_sym_LBRACE,
  [1590] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 1,
      anon_sym_struct,
  [1597] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      sym_identifier,
  [1604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      anon_sym_SEMI,
  [1611] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_GT,
  [1618] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      sym_identifier,
  [1625] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_SEMI,
  [1632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_SEMI,
  [1639] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_SEMI,
  [1646] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 1,
      sym_identifier,
  [1653] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_SEMI,
  [1660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_identifier,
  [1667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 1,
      anon_sym_RPAREN,
  [1674] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_SEMI,
  [1681] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_LBRACE,
  [1688] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 1,
      sym_identifier,
  [1695] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(320), 1,
      anon_sym_LBRACE,
  [1702] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      anon_sym_SEMI,
  [1709] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_identifier,
  [1716] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      anon_sym_SEMI,
  [1723] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_identifier,
  [1730] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 1,
      anon_sym_LT,
  [1737] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      anon_sym_SEMI,
  [1744] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(334), 1,
      anon_sym_LT,
  [1751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(336), 1,
      anon_sym_SEMI,
  [1758] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(338), 1,
      sym_identifier,
  [1765] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      anon_sym_LPAREN,
  [1772] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      anon_sym_SEMI,
  [1779] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_SEMI,
  [1786] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(346), 1,
      anon_sym_LBRACE,
  [1793] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(348), 1,
      sym_identifier,
  [1800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(350), 1,
      anon_sym_SEMI,
  [1807] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_identifier,
  [1814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      anon_sym_SEMI,
  [1821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(356), 1,
      anon_sym_struct,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 47,
  [SMALL_STATE(4)] = 94,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 181,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 265,
  [SMALL_STATE(9)] = 311,
  [SMALL_STATE(10)] = 349,
  [SMALL_STATE(11)] = 387,
  [SMALL_STATE(12)] = 418,
  [SMALL_STATE(13)] = 449,
  [SMALL_STATE(14)] = 480,
  [SMALL_STATE(15)] = 511,
  [SMALL_STATE(16)] = 542,
  [SMALL_STATE(17)] = 573,
  [SMALL_STATE(18)] = 606,
  [SMALL_STATE(19)] = 639,
  [SMALL_STATE(20)] = 660,
  [SMALL_STATE(21)] = 681,
  [SMALL_STATE(22)] = 699,
  [SMALL_STATE(23)] = 717,
  [SMALL_STATE(24)] = 744,
  [SMALL_STATE(25)] = 771,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 815,
  [SMALL_STATE(28)] = 832,
  [SMALL_STATE(29)] = 849,
  [SMALL_STATE(30)] = 876,
  [SMALL_STATE(31)] = 893,
  [SMALL_STATE(32)] = 910,
  [SMALL_STATE(33)] = 927,
  [SMALL_STATE(34)] = 944,
  [SMALL_STATE(35)] = 971,
  [SMALL_STATE(36)] = 988,
  [SMALL_STATE(37)] = 1005,
  [SMALL_STATE(38)] = 1022,
  [SMALL_STATE(39)] = 1039,
  [SMALL_STATE(40)] = 1056,
  [SMALL_STATE(41)] = 1073,
  [SMALL_STATE(42)] = 1090,
  [SMALL_STATE(43)] = 1110,
  [SMALL_STATE(44)] = 1125,
  [SMALL_STATE(45)] = 1140,
  [SMALL_STATE(46)] = 1156,
  [SMALL_STATE(47)] = 1168,
  [SMALL_STATE(48)] = 1182,
  [SMALL_STATE(49)] = 1196,
  [SMALL_STATE(50)] = 1210,
  [SMALL_STATE(51)] = 1226,
  [SMALL_STATE(52)] = 1242,
  [SMALL_STATE(53)] = 1256,
  [SMALL_STATE(54)] = 1265,
  [SMALL_STATE(55)] = 1274,
  [SMALL_STATE(56)] = 1285,
  [SMALL_STATE(57)] = 1294,
  [SMALL_STATE(58)] = 1307,
  [SMALL_STATE(59)] = 1316,
  [SMALL_STATE(60)] = 1329,
  [SMALL_STATE(61)] = 1338,
  [SMALL_STATE(62)] = 1351,
  [SMALL_STATE(63)] = 1362,
  [SMALL_STATE(64)] = 1371,
  [SMALL_STATE(65)] = 1384,
  [SMALL_STATE(66)] = 1397,
  [SMALL_STATE(67)] = 1410,
  [SMALL_STATE(68)] = 1420,
  [SMALL_STATE(69)] = 1428,
  [SMALL_STATE(70)] = 1436,
  [SMALL_STATE(71)] = 1444,
  [SMALL_STATE(72)] = 1452,
  [SMALL_STATE(73)] = 1460,
  [SMALL_STATE(74)] = 1468,
  [SMALL_STATE(75)] = 1478,
  [SMALL_STATE(76)] = 1485,
  [SMALL_STATE(77)] = 1492,
  [SMALL_STATE(78)] = 1499,
  [SMALL_STATE(79)] = 1506,
  [SMALL_STATE(80)] = 1513,
  [SMALL_STATE(81)] = 1520,
  [SMALL_STATE(82)] = 1527,
  [SMALL_STATE(83)] = 1534,
  [SMALL_STATE(84)] = 1541,
  [SMALL_STATE(85)] = 1548,
  [SMALL_STATE(86)] = 1555,
  [SMALL_STATE(87)] = 1562,
  [SMALL_STATE(88)] = 1569,
  [SMALL_STATE(89)] = 1576,
  [SMALL_STATE(90)] = 1583,
  [SMALL_STATE(91)] = 1590,
  [SMALL_STATE(92)] = 1597,
  [SMALL_STATE(93)] = 1604,
  [SMALL_STATE(94)] = 1611,
  [SMALL_STATE(95)] = 1618,
  [SMALL_STATE(96)] = 1625,
  [SMALL_STATE(97)] = 1632,
  [SMALL_STATE(98)] = 1639,
  [SMALL_STATE(99)] = 1646,
  [SMALL_STATE(100)] = 1653,
  [SMALL_STATE(101)] = 1660,
  [SMALL_STATE(102)] = 1667,
  [SMALL_STATE(103)] = 1674,
  [SMALL_STATE(104)] = 1681,
  [SMALL_STATE(105)] = 1688,
  [SMALL_STATE(106)] = 1695,
  [SMALL_STATE(107)] = 1702,
  [SMALL_STATE(108)] = 1709,
  [SMALL_STATE(109)] = 1716,
  [SMALL_STATE(110)] = 1723,
  [SMALL_STATE(111)] = 1730,
  [SMALL_STATE(112)] = 1737,
  [SMALL_STATE(113)] = 1744,
  [SMALL_STATE(114)] = 1751,
  [SMALL_STATE(115)] = 1758,
  [SMALL_STATE(116)] = 1765,
  [SMALL_STATE(117)] = 1772,
  [SMALL_STATE(118)] = 1779,
  [SMALL_STATE(119)] = 1786,
  [SMALL_STATE(120)] = 1793,
  [SMALL_STATE(121)] = 1800,
  [SMALL_STATE(122)] = 1807,
  [SMALL_STATE(123)] = 1814,
  [SMALL_STATE(124)] = 1821,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(122),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(108),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(124),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(101),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(120),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(74),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interface_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2, 0, 0), SHIFT_REPEAT(111),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2, 0, 0), SHIFT_REPEAT(113),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_interface_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 12),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 12),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, 0, 12),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, 0, 12),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_modifier, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_param_modifier, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 3, 0, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, 0, 5),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 5, 0, 5),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_struct_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 5, 0, 5),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 5, 0, 5),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 5, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 6, 0, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interface, 6, 0, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const, 6, 0, 8),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 6, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 6, 0, 9),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum, 6, 0, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct, 7, 0, 9),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 5, 0, 11),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_member, 5, 0, 11),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_member, 7, 0, 15),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_struct_member, 7, 0, 15),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 1, 0, 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0),
  [179] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_enum_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 1, 0, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [194] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_type, 3, 0, 4),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 3, 0, 7),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector_type, 4, 0, 6),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_map_type, 6, 0, 10),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0), SHIFT_REPEAT(92),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_repeat1, 2, 0, 0),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_type, 1, 0, 0),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 2, 0, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_enum_member, 4, 0, 7),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 2, 0, 13),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, 0, 14),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [262] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_struct_modifier, 1, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tars(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
