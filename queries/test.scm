(
  ; 上方的注释（可选）
  (comment)* @above_comment ?
  
  ; 函数定义
  (function
    return_type: (_) @return_type
    name: (identifier) @function_name
    "(" 
    (parameter_list)? @params
    ")"
    ";"
  ) @function
  
  ; 同行的注释（可选）
  (comment)? @line_comment ?
)