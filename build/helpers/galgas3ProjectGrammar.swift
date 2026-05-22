//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

enum galgas3ProjectGrammar_terminal : Terminal_protocol {

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

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    switch self {
    case .t0 : return "$project$"
    case .t1 : return "$($"
    case .t2 : return "$literalInt$"
    case .t3 : return "$:$"
    case .t4 : return "$)$"
    case .t5 : return "$->$"
    case .t6 : return "$\"string\"$"
    case .t7 : return "${$"
    case .t8 : return "$%quietOutputByDefault$"
    case .t9 : return "$%MacSwiftApp$"
    case .t10 : return "$%makefile-macosx$"
    case .t11 : return "$%makefile-unix$"
    case .t12 : return "$%makefile-x86linux32-on-macosx$"
    case .t13 : return "$%makefile-x86linux64-on-macosx$"
    case .t14 : return "$%makefile-arm64-linux-on-macosx$"
    case .t15 : return "$%makefile-win32-on-macosx$"
    case .t16 : return "$%codeblocks-windows$"
    case .t17 : return "$%codeblocks-linux32$"
    case .t18 : return "$%codeblocks-linux64$"
    case .t19 : return "$%applicationBundleBase$"
    case .t20 : return "$%libpmAtPath$"
    case .t21 : return "$%macCodeSign$"
    case .t22 : return "$}$"
    case .t23 : return "$$"
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

enum galgas3ProjectGrammar_nonTerminal : NonTerminal_protocol {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  case nt0
  case nt1
  case nt2
  case nt3

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    switch self {
    case .nt0 : return "<project_header>"
    case .nt1 : return "<project_component_start_symbol>"
    case .nt2 : return "<select_galgas_33_ProjectSyntax_0>"
    case .nt3 : return "<>"
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

let galgas3ProjectGrammar_startSymbol : galgas3ProjectGrammar_nonTerminal = .nt3

//--------------------------------------------------------------------------------------------------

let galgas3ProjectGrammar_rules : [Grammar <galgas3ProjectGrammar_terminal, galgas3ProjectGrammar_nonTerminal>.Rule] = [
  .init (.nt0, [.terminal(.t0),.terminal(.t1),.terminal(.t2),.terminal(.t3),.terminal(.t2),.terminal(.t3),.terminal(.t2),.terminal(.t4),.terminal(.t5),.terminal(.t6)]),
  .init (.nt1, [.nonterminal(.nt0),.terminal(.t7),.nonterminal(.nt2),.terminal(.t22)]),
  .init (.nt2, []),
  .init (.nt2, [.terminal(.t8),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t9),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t10),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t11),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t12),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t13),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t14),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t15),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t16),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t17),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t18),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t19),.terminal(.t3),.terminal(.t6),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t20),.terminal(.t3),.terminal(.t6),.nonterminal(.nt2)]),
  .init (.nt2, [.terminal(.t21),.terminal(.t3),.terminal(.t6),.nonterminal(.nt2)]),
  .init (.nt3, [.nonterminal(.nt1),.terminal(.t23)]),
]

//--------------------------------------------------------------------------------------------------

