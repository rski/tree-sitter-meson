#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 27
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LF = 1,
  sym_identifier = 2,
  anon_sym_PLUS = 3,
  anon_sym_DASH = 4,
  anon_sym_EQ = 5,
  anon_sym_STAR_EQ = 6,
  anon_sym_SLASH_EQ = 7,
  anon_sym_PERCENT_EQ = 8,
  anon_sym_PLUS_EQ = 9,
  anon_sym_DASH_EQ = 10,
  anon_sym_EQ_EQ = 11,
  anon_sym_BANG_EQ = 12,
  anon_sym_STAR = 13,
  anon_sym_SLASH = 14,
  anon_sym_PERCENT = 15,
  anon_sym_GT = 16,
  anon_sym_LT = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_LT_EQ = 19,
  anon_sym_in = 20,
  anon_sym_not = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  sym_decimal_literal = 24,
  sym_hex_literal = 25,
  sym_octal_literal = 26,
  sym_source_file = 27,
  sym__statement = 28,
  sym__expression = 29,
  sym_assignment = 30,
  sym_expression = 31,
  sym_literal = 32,
  sym_multiplicative_expression = 33,
  sym_unary_expression = 34,
  sym_assignment_operator = 35,
  sym_multiplicative_operator = 36,
  sym_unary_operator = 37,
  sym_boolean_literal = 38,
  aux_sym_source_file_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [sym_identifier] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_EQ] = "=",
  [anon_sym_STAR_EQ] = "*=",
  [anon_sym_SLASH_EQ] = "/=",
  [anon_sym_PERCENT_EQ] = "%=",
  [anon_sym_PLUS_EQ] = "+=",
  [anon_sym_DASH_EQ] = "-=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_in] = "in",
  [anon_sym_not] = "not",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_decimal_literal] = "decimal_literal",
  [sym_hex_literal] = "hex_literal",
  [sym_octal_literal] = "octal_literal",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_assignment] = "assignment",
  [sym_expression] = "expression",
  [sym_literal] = "literal",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_assignment_operator] = "assignment_operator",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [sym_identifier] = sym_identifier,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_STAR_EQ] = anon_sym_STAR_EQ,
  [anon_sym_SLASH_EQ] = anon_sym_SLASH_EQ,
  [anon_sym_PERCENT_EQ] = anon_sym_PERCENT_EQ,
  [anon_sym_PLUS_EQ] = anon_sym_PLUS_EQ,
  [anon_sym_DASH_EQ] = anon_sym_DASH_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_decimal_literal] = sym_decimal_literal,
  [sym_hex_literal] = sym_hex_literal,
  [sym_octal_literal] = sym_octal_literal,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_assignment] = sym_assignment,
  [sym_expression] = sym_expression,
  [sym_literal] = sym_literal,
  [sym_multiplicative_expression] = sym_multiplicative_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_assignment_operator] = sym_assignment_operator,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
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
  [sym_decimal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '!') ADVANCE(4);
      if (lookahead == '%') ADVANCE(48);
      if (lookahead == '*') ADVANCE(44);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '0') ADVANCE(11);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '>') ADVANCE(49);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '%') ADVANCE(47);
      if (lookahead == '*') ADVANCE(43);
      if (lookahead == '/') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(5);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '/') ADVANCE(9);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 'x') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'n') ADVANCE(24);
      if (lookahead == 't') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_STAR_EQ);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_SLASH_EQ);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PERCENT_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_PLUS_EQ);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_EQ);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '=') ADVANCE(36);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '=') ADVANCE(37);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(52);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_in);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_not);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_decimal_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_hex_literal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_octal_literal);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(60);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_STAR_EQ] = ACTIONS(1),
    [anon_sym_SLASH_EQ] = ACTIONS(1),
    [anon_sym_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_PLUS_EQ] = ACTIONS(1),
    [anon_sym_DASH_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_decimal_literal] = ACTIONS(1),
    [sym_hex_literal] = ACTIONS(1),
    [sym_octal_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(17),
    [sym__statement] = STATE(3),
    [sym__expression] = STATE(16),
    [sym_assignment] = STATE(16),
    [sym_literal] = STATE(16),
    [sym_multiplicative_expression] = STATE(8),
    [sym_unary_expression] = STATE(12),
    [sym_unary_operator] = STATE(9),
    [sym_boolean_literal] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_PLUS] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(7),
    [anon_sym_not] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [sym_octal_literal] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_not,
    ACTIONS(29), 1,
      sym_octal_literal,
    STATE(8), 1,
      sym_multiplicative_expression,
    STATE(9), 1,
      sym_unary_operator,
    STATE(12), 1,
      sym_unary_expression,
    STATE(18), 1,
      sym_boolean_literal,
    ACTIONS(20), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(26), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(16), 3,
      sym__expression,
      sym_assignment,
      sym_literal,
  [42] = 12,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_not,
    ACTIONS(13), 1,
      sym_octal_literal,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_multiplicative_expression,
    STATE(9), 1,
      sym_unary_operator,
    STATE(12), 1,
      sym_unary_expression,
    STATE(18), 1,
      sym_boolean_literal,
    ACTIONS(7), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(2), 2,
      sym__statement,
      aux_sym_source_file_repeat1,
    STATE(16), 3,
      sym__expression,
      sym_assignment,
      sym_literal,
  [84] = 2,
    ACTIONS(34), 4,
      ts_builtin_sym_end,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_octal_literal,
    ACTIONS(36), 4,
      sym_identifier,
      anon_sym_not,
      anon_sym_true,
      anon_sym_false,
  [97] = 2,
    STATE(6), 1,
      sym_assignment_operator,
    ACTIONS(38), 6,
      anon_sym_EQ,
      anon_sym_STAR_EQ,
      anon_sym_SLASH_EQ,
      anon_sym_PERCENT_EQ,
      anon_sym_PLUS_EQ,
      anon_sym_DASH_EQ,
  [109] = 6,
    ACTIONS(13), 1,
      sym_octal_literal,
    ACTIONS(40), 1,
      sym_identifier,
    STATE(18), 1,
      sym_boolean_literal,
    STATE(19), 1,
      sym_literal,
    STATE(20), 1,
      sym_expression,
    ACTIONS(11), 2,
      anon_sym_true,
      anon_sym_false,
  [129] = 3,
    STATE(9), 1,
      sym_unary_operator,
    STATE(10), 1,
      sym_unary_expression,
    ACTIONS(7), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [141] = 3,
    ACTIONS(42), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym_multiplicative_operator,
    ACTIONS(44), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [153] = 3,
    STATE(9), 1,
      sym_unary_operator,
    STATE(11), 1,
      sym_unary_expression,
    ACTIONS(7), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [165] = 2,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(48), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [174] = 2,
    ACTIONS(50), 1,
      anon_sym_LF,
    ACTIONS(52), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [183] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    ACTIONS(56), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [192] = 2,
    ACTIONS(60), 1,
      sym_octal_literal,
    ACTIONS(58), 3,
      sym_identifier,
      anon_sym_true,
      anon_sym_false,
  [201] = 1,
    ACTIONS(62), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [207] = 1,
    ACTIONS(64), 3,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_not,
  [213] = 1,
    ACTIONS(66), 1,
      anon_sym_LF,
  [217] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [221] = 1,
    ACTIONS(70), 1,
      anon_sym_LF,
  [225] = 1,
    ACTIONS(72), 1,
      anon_sym_LF,
  [229] = 1,
    ACTIONS(74), 1,
      anon_sym_LF,
  [233] = 1,
    ACTIONS(76), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 97,
  [SMALL_STATE(6)] = 109,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 141,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 192,
  [SMALL_STATE(14)] = 201,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 213,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 221,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 229,
  [SMALL_STATE(21)] = 233,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expression, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expression, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_expression, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multiplicative_expression, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_operator, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_operator, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicative_operator, 1),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [68] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_meson(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
