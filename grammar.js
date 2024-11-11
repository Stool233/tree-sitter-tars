module.exports = grammar({
  name: 'tars',

  trace: true,

  extras: $ => [
    /\s|\\\r?\n/,
    $.comment
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.module,
      $.struct,
      $.interface,
      $.enum,
      $.const,
      $.include,
      $.key
    ),

    // 模块定义
    module: $ => seq(
      'module',
      field('name', $.identifier),
      '{',
      repeat($._definition),
      '}',
      ';'
    ),

    // 结构体定义
    struct: $ => seq(
      optional($.struct_modifier),
      'struct',
      field('name', $.identifier),
      '{',
      repeat($.struct_member),
      '}',
      ';'
    ),

    struct_modifier: $ => choice(
      'static', 
      'global'
    ),

    struct_member: $ => seq(
      field('order', $.number),
      field('tag_modifier', $.tag_modifier),
      field('type', $._type),
      field('name', $.identifier),
      optional(seq('=', field('default', $._value))),
      ';'
    ),

    tag_modifier: $ => choice(
      'require',
      'optional'
    ),

    // 接口定义
    interface: $ => seq(
      'interface',
      field('name', $.identifier),
      '{',
      repeat($.function),
      '}',
      ';'
    ),

    function: $ => seq(
      field('return_type', $._type),
      field('name', $.identifier),
      '(',
      optional($.parameter_list),
      ')',
      ';'
    ),

    parameter_list: $ => seq(
      $.parameter,
      repeat(seq(',', $.parameter))
    ),

    parameter: $ => seq(
      optional($.param_modifier),
      field('type', $._type),
      field('name', $.identifier)
    ),

    param_modifier: $ => choice(
      'out',
      'routekey'
    ),

    // 枚举定义
    enum: $ => seq(
      'enum',
      field('name', $.identifier),
      '{',
      repeat($.enum_member),
      '}',
      ';'
    ),

    enum_member: $ => seq(
      field('name', $.identifier),
      optional(seq('=', field('value', $.number))),
      optional(',')
    ),

    // 常量定义
    const: $ => seq(
      'const',
      field('type', $._type),
      field('name', $.identifier),
      '=',
      field('value', $._value),
      ';'
    ),

    // key定义
    key: $ => seq(
      'key',
      '[',
      commaSep1($.identifier),
      ']',
      ';'
    ),

    // 包含指令
    include: $ => seq(
      '#include',
      field('path', $.string),
      ';'
    ),

    // 类型
    _type: $ => choice(
      $.basic_type,
      $.vector_type,
      $.map_type,
      $.custom_type
    ),

    // 基础类型规则
    basic_type: $ => choice(
      'void',
      'bool',
      'byte',
      'short',
      'int',
      'long',
      'float',
      'double',
      'string'
    ),

    custom_type: $ => seq(
      field('type_name', $.identifier),
      optional(seq('::', field('nested_type', $.identifier)))
    ),

    vector_type: $ => seq(
      'vector',
      '<',
      field('element_type', $._type),
      '>'
    ),

    map_type: $ => seq(
      'map',
      '<',
      field('key_type', $._type),
      ',',
      field('value_type', $._type),
      '>'
    ),

    // 基础值
    _value: $ => choice(
      $.number,
      $.string,
      $.boolean,
      $.identifier
    ),

    boolean: $ => choice(
      'true',
      'false'
    ),

    number: $ => choice(
      $._integer,
      $._float
    ),

    _integer: $ => /[-+]?[0-9]+/,

    _float: $ => choice(
      /[-+]?[0-9]+\.[0-9]*/,
      /[-+]?[0-9]*\.[0-9]+/,
      /[-+]?[0-9]+[eE][-+]?[0-9]+/,
      /[-+]?[0-9]+\.[0-9]*[eE][-+]?[0-9]+/,
      /[-+]?[0-9]*\.[0-9]+[eE][-+]?[0-9]+/
    ),

    string: $ => seq(
      '"',
      repeat(choice(
        token.immediate(/[^"\\]+/),
        $.escape_sequence
      )),
      '"'
    ),

    escape_sequence: $ => token.immediate(
      seq(
        '\\',
        choice(
          /[^xu0-7]/,
          /[0-7]{1,3}/,
          /x[0-9a-fA-F]{2}/,
          /u[0-9a-fA-F]{4}/
        )
      )
    ),

    identifier: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    comment: $ => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)))
}

function commaSep(rule) {
  return optional(commaSep1(rule))
}