module.exports = grammar({
  name: 'meson',

  rules: {
      source_file: $ => repeat($._definition),

      _definition: $ => choice(
          $.variable_definition
          // TODO: other kinds of definitions
      ),

      variable_definition: $ => seq(
          // TODO: clearly not up to spec
          $.identifier,
          $.assignment_operator,
          $.expression
      ),

      identifier: $ => /[a-zA-Z_][a-zA-Z_0-9]*/,

      expression: $ => choice(
          // TODO: more expressions
          $.identifier,
          $.literal
      ),
      literal: $ => choice(
          $.boolean_literal,
      ),
      boolean_literal: $ => choice("true", "false"),

      assignment_operator: $ => choice(
          "=" , "*=" , "/=" , "%=" , "+=" , "-="
      )
  }
});
