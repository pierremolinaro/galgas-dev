//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

enum templateGrammar_terminal : Terminal_protocol {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  case t0
  case t1
  case t2
  case t3
  case t4
  case t5
  case t6
  case t7
  case t8
  case t9
  case t10
  case t11
  case t12
  case t13
  case t14
  case t15
  case t16
  case t17
  case t18
  case t19
  case t20
  case t21
  case t22
  case t23
  case t24
  case t25
  case t26
  case t27
  case t28
  case t29
  case t30
  case t31
  case t32
  case t33
  case t34
  case t35
  case t36
  case t37
  case t38
  case t39
  case t40
  case t41
  case t42
  case t43
  case t44
  case t45
  case t46
  case t47
  case t48
  case t49
  case t50
  case t51
  case t52
  case t53
  case t54
  case t55
  case t56

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    switch self {
    case .t0 : return "$|$"
    case .t1 : return "$^$"
    case .t2 : return "$&$"
    case .t3 : return "$==$"
    case .t4 : return "$!=$"
    case .t5 : return "$<=$"
    case .t6 : return "$>=$"
    case .t7 : return "$>$"
    case .t8 : return "$<$"
    case .t9 : return "$<<$"
    case .t10 : return "$>>$"
    case .t11 : return "$+$"
    case .t12 : return "$-$"
    case .t13 : return "$*$"
    case .t14 : return "$/$"
    case .t15 : return "$mod$"
    case .t16 : return "$.$"
    case .t17 : return "$identifier$"
    case .t18 : return "$not$"
    case .t19 : return "$~$"
    case .t20 : return "$($"
    case .t21 : return "$)$"
    case .t22 : return "$true$"
    case .t23 : return "$false$"
    case .t24 : return "$literalInt$"
    case .t25 : return "$double.xxx$"
    case .t26 : return "$'char'$"
    case .t27 : return "$\"string\"$"
    case .t28 : return "$[$"
    case .t29 : return "$template$"
    case .t30 : return "$]$"
    case .t31 : return "$@type$"
    case .t32 : return "$filewrapper$"
    case .t33 : return "$option$"
    case .t34 : return "$is$"
    case .t35 : return "$!selector:$"
    case .t36 : return "$!$"
    case .t37 : return "$?^$"
    case .t38 : return "$!^$"
    case .t39 : return "$block$"
    case .t40 : return "$:$"
    case .t41 : return "$end$"
    case .t42 : return "$if$"
    case .t43 : return "$then$"
    case .t44 : return "$elsif$"
    case .t45 : return "$else$"
    case .t46 : return "$in$"
    case .t47 : return "$for$"
    case .t48 : return "$before$"
    case .t49 : return "$do$"
    case .t50 : return "$between$"
    case .t51 : return "$after$"
    case .t52 : return "$switch$"
    case .t53 : return "$case$"
    case .t54 : return "$,$"
    case .t55 : return "$unused$"
    case .t56 : return "$$"
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var typstRawCode : String {
    let s = self.description.replacingOccurrences (of: "\"", with: "\\\"")
    return "#raw(\"\(s)\")"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  // func isEOF () -> Bool { self == .`##` }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

enum templateGrammar_nonTerminal : NonTerminal_protocol {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  case nt0
  case nt1
  case nt2
  case nt3
  case nt4
  case nt5
  case nt6
  case nt7
  case nt8
  case nt9
  case nt10
  case nt11
  case nt12
  case nt13
  case nt14
  case nt15
  case nt16
  case nt17
  case nt18
  case nt19
  case nt20
  case nt21
  case nt22
  case nt23
  case nt24
  case nt25
  case nt26
  case nt27
  case nt28
  case nt29
  case nt30
  case nt31
  case nt32
  case nt33
  case nt34
  case nt35
  case nt36
  case nt37
  case nt38
  case nt39
  case nt40
  case nt41
  case nt42
  case nt43
  case nt44
  case nt45
  case nt46
  case nt47
  case nt48
  case nt49

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    switch self {
    case .nt0 : return "<expression_tpl>"
    case .nt1 : return "<relation_term_tpl>"
    case .nt2 : return "<relation_factor_tpl>"
    case .nt3 : return "<simple_expression_tpl>"
    case .nt4 : return "<term_tpl>"
    case .nt5 : return "<factor_tpl>"
    case .nt6 : return "<primary_tpl>"
    case .nt7 : return "<output_expression_list_tpl>"
    case .nt8 : return "<template_instruction>"
    case .nt9 : return "<template_parser_start_symbol>"
    case .nt10 : return "<for_instruction_element>"
    case .nt11 : return "<for_instruction_enumerated_object>"
    case .nt12 : return "<switch_case>"
    case .nt13 : return "<select_templateSyntax_0>"
    case .nt14 : return "<select_templateSyntax_1>"
    case .nt15 : return "<select_templateSyntax_2>"
    case .nt16 : return "<select_templateSyntax_3>"
    case .nt17 : return "<select_templateSyntax_4>"
    case .nt18 : return "<select_templateSyntax_5>"
    case .nt19 : return "<select_templateSyntax_6>"
    case .nt20 : return "<select_templateSyntax_7>"
    case .nt21 : return "<select_templateSyntax_8>"
    case .nt22 : return "<select_templateSyntax_9>"
    case .nt23 : return "<select_templateSyntax_10>"
    case .nt24 : return "<select_templateSyntax_11>"
    case .nt25 : return "<select_templateSyntax_12>"
    case .nt26 : return "<select_templateSyntax_13>"
    case .nt27 : return "<select_templateSyntax_14>"
    case .nt28 : return "<select_templateSyntax_15>"
    case .nt29 : return "<select_templateSyntax_16>"
    case .nt30 : return "<select_templateSyntax_17>"
    case .nt31 : return "<select_templateSyntax_18>"
    case .nt32 : return "<select_templateSyntax_19>"
    case .nt33 : return "<select_templateSyntax_20>"
    case .nt34 : return "<select_templateSyntax_21>"
    case .nt35 : return "<select_templateSyntax_22>"
    case .nt36 : return "<select_templateSyntax_23>"
    case .nt37 : return "<select_templateSyntax_24>"
    case .nt38 : return "<select_templateSyntax_25>"
    case .nt39 : return "<select_templateSyntax_26>"
    case .nt40 : return "<select_templateSyntax_27>"
    case .nt41 : return "<select_templateSyntax_28>"
    case .nt42 : return "<select_templateSyntax_29>"
    case .nt43 : return "<select_templateSyntax_30>"
    case .nt44 : return "<select_templateSyntax_31>"
    case .nt45 : return "<select_templateSyntax_32>"
    case .nt46 : return "<select_templateSyntax_33>"
    case .nt47 : return "<select_templateSyntax_34>"
    case .nt48 : return "<select_templateSyntax_35>"
    case .nt49 : return "<>"
    }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var typstRawCode : String {
    let s = self.description.replacingOccurrences (of: "\"", with: "\\\"")
    return "#raw(\"\(s)\")"
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------

let templateGrammar_startSymbol : templateGrammar_nonTerminal = .nt49

//--------------------------------------------------------------------------------------------------

let templateGrammar_rules : [Grammar <templateGrammar_terminal, templateGrammar_nonTerminal>.Rule] = [
  .init (.nt0, [.nonterminal(.nt1),.nonterminal(.nt13)]),
  .init (.nt1, [.nonterminal(.nt2),.nonterminal(.nt14)]),
  .init (.nt2, [.nonterminal(.nt3),.nonterminal(.nt15)]),
  .init (.nt3, [.nonterminal(.nt4),.nonterminal(.nt16)]),
  .init (.nt4, [.nonterminal(.nt5),.nonterminal(.nt17)]),
  .init (.nt5, [.nonterminal(.nt6),.nonterminal(.nt18)]),
  .init (.nt5, [.terminal(.t12),.nonterminal(.nt5)]),
  .init (.nt5, [.terminal(.t18),.nonterminal(.nt5)]),
  .init (.nt5, [.terminal(.t19),.nonterminal(.nt5)]),
  .init (.nt6, [.terminal(.t17)]),
  .init (.nt6, [.terminal(.t20),.nonterminal(.nt0),.terminal(.t21)]),
  .init (.nt6, [.terminal(.t22)]),
  .init (.nt6, [.terminal(.t23)]),
  .init (.nt6, [.terminal(.t24)]),
  .init (.nt6, [.terminal(.t25)]),
  .init (.nt6, [.terminal(.t26)]),
  .init (.nt6, [.terminal(.t27),.nonterminal(.nt19)]),
  .init (.nt6, [.terminal(.t28),.nonterminal(.nt20)]),
  .init (.nt6, [.terminal(.t17),.terminal(.t20),.nonterminal(.nt7),.terminal(.t21)]),
  .init (.nt6, [.nonterminal(.nt6),.terminal(.t34),.nonterminal(.nt22),.terminal(.t31)]),
  .init (.nt7, [.nonterminal(.nt23)]),
  .init (.nt8, [.terminal(.t36),.nonterminal(.nt0)]),
  .init (.nt8, [.terminal(.t37)]),
  .init (.nt8, [.terminal(.t38)]),
  .init (.nt8, [.terminal(.t39),.nonterminal(.nt0),.terminal(.t40),.nonterminal(.nt24),.terminal(.t41)]),
  .init (.nt8, [.terminal(.t42),.nonterminal(.nt0),.terminal(.t43),.nonterminal(.nt26),.nonterminal(.nt25),.nonterminal(.nt27),.terminal(.t41)]),
  .init (.nt9, [.nonterminal(.nt29)]),
  .init (.nt10, [.terminal(.t24),.terminal(.t13)]),
  .init (.nt10, [.terminal(.t13)]),
  .init (.nt10, [.terminal(.t17)]),
  .init (.nt11, [.terminal(.t20),.nonterminal(.nt10),.nonterminal(.nt30),.terminal(.t21),.terminal(.t46),.nonterminal(.nt0),.nonterminal(.nt31)]),
  .init (.nt8, [.terminal(.t47),.nonterminal(.nt32),.nonterminal(.nt11),.nonterminal(.nt33),.terminal(.t49),.nonterminal(.nt35),.nonterminal(.nt36),.nonterminal(.nt37),.nonterminal(.nt39),.terminal(.t41)]),
  .init (.nt8, [.terminal(.t52),.nonterminal(.nt0),.nonterminal(.nt41),.terminal(.t41)]),
  .init (.nt12, [.terminal(.t17),.nonterminal(.nt43),.nonterminal(.nt44)]),
  .init (.nt13, []),
  .init (.nt13, [.terminal(.t0),.nonterminal(.nt1),.nonterminal(.nt13)]),
  .init (.nt13, [.terminal(.t1),.nonterminal(.nt1),.nonterminal(.nt13)]),
  .init (.nt14, []),
  .init (.nt14, [.terminal(.t2),.nonterminal(.nt2),.nonterminal(.nt14)]),
  .init (.nt15, []),
  .init (.nt15, [.terminal(.t3),.nonterminal(.nt3)]),
  .init (.nt15, [.terminal(.t4),.nonterminal(.nt3)]),
  .init (.nt15, [.terminal(.t5),.nonterminal(.nt3)]),
  .init (.nt15, [.terminal(.t6),.nonterminal(.nt3)]),
  .init (.nt15, [.terminal(.t7),.nonterminal(.nt3)]),
  .init (.nt15, [.terminal(.t8),.nonterminal(.nt3)]),
  .init (.nt16, []),
  .init (.nt16, [.terminal(.t9),.nonterminal(.nt4),.nonterminal(.nt16)]),
  .init (.nt16, [.terminal(.t10),.nonterminal(.nt4),.nonterminal(.nt16)]),
  .init (.nt16, [.terminal(.t11),.nonterminal(.nt4),.nonterminal(.nt16)]),
  .init (.nt16, [.terminal(.t12),.nonterminal(.nt4),.nonterminal(.nt16)]),
  .init (.nt17, []),
  .init (.nt17, [.terminal(.t13),.nonterminal(.nt5),.nonterminal(.nt17)]),
  .init (.nt17, [.terminal(.t14),.nonterminal(.nt5),.nonterminal(.nt17)]),
  .init (.nt17, [.terminal(.t15),.nonterminal(.nt5),.nonterminal(.nt17)]),
  .init (.nt18, []),
  .init (.nt18, [.terminal(.t16),.terminal(.t17),.nonterminal(.nt18)]),
  .init (.nt19, []),
  .init (.nt19, [.terminal(.t27),.nonterminal(.nt19)]),
  .init (.nt20, [.terminal(.t29),.nonterminal(.nt0),.terminal(.t17),.nonterminal(.nt7),.terminal(.t30)]),
  .init (.nt20, [.terminal(.t31),.terminal(.t17),.nonterminal(.nt7),.terminal(.t30)]),
  .init (.nt20, [.terminal(.t32),.terminal(.t17),.terminal(.t16),.terminal(.t17),.nonterminal(.nt7),.terminal(.t30)]),
  .init (.nt20, [.nonterminal(.nt0),.terminal(.t17),.nonterminal(.nt7),.terminal(.t30)]),
  .init (.nt20, [.terminal(.t33),.nonterminal(.nt21),.terminal(.t30)]),
  .init (.nt21, [.terminal(.t16),.terminal(.t17),.terminal(.t17)]),
  .init (.nt21, [.terminal(.t17),.terminal(.t16),.terminal(.t17),.terminal(.t17)]),
  .init (.nt22, [.terminal(.t3)]),
  .init (.nt22, [.terminal(.t6)]),
  .init (.nt22, [.terminal(.t7)]),
  .init (.nt23, []),
  .init (.nt23, [.terminal(.t35),.nonterminal(.nt0),.nonterminal(.nt23)]),
  .init (.nt23, [.terminal(.t36),.nonterminal(.nt0),.nonterminal(.nt23)]),
  .init (.nt24, []),
  .init (.nt24, [.nonterminal(.nt8),.nonterminal(.nt24)]),
  .init (.nt25, []),
  .init (.nt25, [.terminal(.t44),.nonterminal(.nt0),.terminal(.t43),.nonterminal(.nt26),.nonterminal(.nt25)]),
  .init (.nt26, []),
  .init (.nt26, [.nonterminal(.nt8),.nonterminal(.nt26)]),
  .init (.nt27, []),
  .init (.nt27, [.terminal(.t45),.nonterminal(.nt28)]),
  .init (.nt28, []),
  .init (.nt28, [.nonterminal(.nt8),.nonterminal(.nt28)]),
  .init (.nt29, []),
  .init (.nt29, [.nonterminal(.nt8),.nonterminal(.nt29)]),
  .init (.nt30, []),
  .init (.nt30, [.nonterminal(.nt10),.nonterminal(.nt30)]),
  .init (.nt31, []),
  .init (.nt31, [.terminal(.t40),.terminal(.t17)]),
  .init (.nt32, []),
  .init (.nt32, [.terminal(.t8)]),
  .init (.nt32, [.terminal(.t7)]),
  .init (.nt33, []),
  .init (.nt33, [.terminal(.t48),.nonterminal(.nt34)]),
  .init (.nt34, []),
  .init (.nt34, [.nonterminal(.nt8),.nonterminal(.nt34)]),
  .init (.nt35, []),
  .init (.nt35, [.terminal(.t20),.terminal(.t17),.terminal(.t21)]),
  .init (.nt36, []),
  .init (.nt36, [.nonterminal(.nt8),.nonterminal(.nt36)]),
  .init (.nt37, []),
  .init (.nt37, [.terminal(.t50),.nonterminal(.nt38)]),
  .init (.nt38, []),
  .init (.nt38, [.nonterminal(.nt8),.nonterminal(.nt38)]),
  .init (.nt39, []),
  .init (.nt39, [.terminal(.t51),.nonterminal(.nt40)]),
  .init (.nt40, []),
  .init (.nt40, [.nonterminal(.nt8),.nonterminal(.nt40)]),
  .init (.nt41, []),
  .init (.nt41, [.terminal(.t53),.nonterminal(.nt12),.terminal(.t40),.nonterminal(.nt42),.nonterminal(.nt41)]),
  .init (.nt42, []),
  .init (.nt42, [.nonterminal(.nt8),.nonterminal(.nt42)]),
  .init (.nt43, []),
  .init (.nt43, [.terminal(.t54),.terminal(.t17),.nonterminal(.nt43)]),
  .init (.nt44, []),
  .init (.nt44, [.terminal(.t20),.nonterminal(.nt46),.nonterminal(.nt45),.terminal(.t21)]),
  .init (.nt45, []),
  .init (.nt45, [.nonterminal(.nt46),.nonterminal(.nt45)]),
  .init (.nt46, [.terminal(.t24),.terminal(.t13)]),
  .init (.nt46, [.terminal(.t13)]),
  .init (.nt46, [.nonterminal(.nt47),.nonterminal(.nt48),.terminal(.t17)]),
  .init (.nt47, [.terminal(.t31)]),
  .init (.nt47, []),
  .init (.nt48, []),
  .init (.nt48, [.terminal(.t55)]),
  .init (.nt49, [.nonterminal(.nt9),.terminal(.t56)]),
]

//--------------------------------------------------------------------------------------------------

