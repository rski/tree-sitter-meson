module.exports = grammar({
  name: 'meson',

  rules: {
      source_file: $ => repeat(
          $._statement,
      ),

      _statement: $ => seq(choice(
          $._expression,
          // $.selection,
          // $.iteration,
          // $.assignment
      ), '\n'),

      _expression: $ => choice(
          $.assignment,
          $._literal,

          $.multiplicative_expression,

          // TODO: other kinds of expressions
      ),

      assignment: $ => seq(
          // TODO: clearly not up to spec
          $.identifier,
          $.assignment_operator,
          $.expression
      ),


      expression: $ => choice(
          // TODO: more expressions
          $.identifier,
          $._literal,
      ),


      multiplicative_expression: $ => choice(
          $.unary_expression,
          seq($.multiplicative_expression, $.multiplicative_operator, $.unary_expression),
      ),


      unary_expression: $ => choice(
          // $.postfix_expression,
          seq($.unary_operator, $.unary_expression)
      ),


      // operators
      additive_operator: $ => choice("+", "-"),
      assignment_operator: $ => choice("=" , "*=" , "/=" , "%=" , "+=" , "-="),
      equality_operator: $ => choice("==", "!="),
      multiplicative_operator: $ => choice("*", "/", "%"),
      relational_operator: $ => choice(">", "<", ">=", "<=", "in", seq("not", "in")),
      unary_operator: $ => choice("not", "+", "-"),

      // literals
      boolean_literal: $ => choice("true", "false"),
      decimal_literal: $ => /[1-9][0-9]*/,
      hex_literal: $ => /0x[a-fA-F0-9]+/,
      octal_literal: $ => /0o[0-7]+/,

      _integer_literal: $ => choice($.decimal_literal, $.octal_literal, $.hex_literal),
      _literal: $ => choice($._integer_literal,
                            // $.string_literal,
                            $.boolean_literal,
                            // $.array_literal,
                            // $.dictionary_literal
                           ),

      identifier: $ =>/[a-zA-Z_][a-zA-Z_0-9]*/,
  }
});
