module.exports = grammar({
  name: "latex",

  externals: $ => [
    $._start_env_name,
    $._end_env_name
  ],

  rules: {
    program: $ => repeat($._text_mode),

    comment: $ => seq($.comment_char, choice(
      $.magic_comment,
      optional($.comment_text)
    )),

    magic_comment: $ => seq(/\s*/, /!T[eE]X/, /\s+/, optional($.comment_text)),
    comment_text: $ => /.+\n/,

    // special characters associated with the 15 catcodes
    escape_char: $ => '\\',
    begin_group: $ => '{',
    end_group: $ => '}',
    math_shift: $ => '$',
    alignment_tab: $ => '&',
    _end_of_line: $ => '\n',
    parameter_token: $ => '#',
    superscript: $ => '^',
    subscript: $ => '_',
    active_char: $ => '~',
    comment_char: $ => '%',

    _whitespace: $ => /[\n\s\t]/,

    begin_inline_math: $ => '$',
    begin_display_math: $ => '$$',
    end_inline_math: $ => '$',
    end_display_math: $ => '$$',

    text_group: $ => seq($.begin_group, optional($._text_mode), $.end_group),

    _text_mode: $ => choice(
      $.comment,
      $.control_sequence,
      $.text_group,
      $.text,
      $.environment
    ),

    control_sequence: $ => choice(
      $.control_symbol,
      $.control_word
    ),

    control_symbol: $ => seq($.escape_char, $.symbol), // trailing space is not removed in a control symbol.
    control_word:   $ => seq($.escape_char, $.letters, optional($.trailing_space)),

    symbol:  $ => /[^a-zA-Z@]/,
    letters: $ => /[a-zA-Z@]+/,
    trailing_space: $ => /[\s\t\n]+/,

    text: $ => /[^\s\n\t\#\$\%\^\&\_\{\}\~\\][^\#\$\%\^\&\_\{\}\~\\]*/,

    environment: $ => seq($.open_env, $.env_body, $.close_env),

    env_body: $ => $._text_mode,

    open_env: $ => seq(
      $.escape_char,
      "begin",
      optional($._whitespace),
      $.begin_group,
      alias($._start_env_name, $.env_name),
      $.end_group
    ),

    close_env: $ => seq(
      $.escape_char,
      "end",
      optional($._whitespace),
      $.begin_group,
      alias($._end_env_name, $.env_name),
      $.end_group
    ),
  }
});
