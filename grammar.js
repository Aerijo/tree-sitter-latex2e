// NOTE: investigate cause of module not self-registered error

module.exports = grammar({
  name: "latex",

  externals: $ => [
    $._start_env_name,
    $._end_env_name,
    $._erroneous_end_env_name,
    $._verb
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

    _text_mode: $ => choice(
      $.comment,
      $.control_sequence,
      $.text_group,
      $.text,
      $.environment,
      $.verbatim
    ),

    text_group: $ => seq($.begin_group, optional($._text_mode), $.end_group),

    control_sequence: $ => choice(
      $.control_symbol,
      $.control_word
    ),

    control_symbol: $ => seq($.escape_char, $.symbol), // trailing space is not removed in a control symbol.

    control_word:   $ => seq($.escape_char, $.letters, optional($.trailing_space)),

    symbol:  $ => /[^a-zA-Z@]/,
    letters: $ => /[a-zA-Z@]+/,
    trailing_space: $ => /[\s\t\n]+/,

    verbatim: $ => seq($.escape_char, "verb", optional($._whitespace), $._verb),

    text: $ => /[^\s\n\t\#\$\%\^\&\_\{\}\~\\][^\#\$\%\^\&\_\{\}\~\\]*/,

    environment: $ => seq($.open_env, optional($.env_body), $.close_env),

    env_body: $ => $._text_mode,

    open_env: $ => seq(
      $.begin_command,
      optional($._whitespace),
      $.begin_group,
      alias($._start_env_name, $.env_name),
      $.end_group,
      optional($._whitespace)
    ),

    begin_command: $ => seq($.escape_char, "begin"),

    close_env: $ => seq(
      $.end_command,
      optional($._whitespace),
      $.begin_group,
      alias($._end_env_name, $.env_name),
      $.end_group,
      optional($._whitespace)
    ),

    end_command: $ => seq($.escape_char, "end"),
  }
});
