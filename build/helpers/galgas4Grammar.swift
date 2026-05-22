//--------------------------------------------------------------------------------------------------

import Foundation

//--------------------------------------------------------------------------------------------------

enum galgas4Grammar_terminal : Terminal_protocol {

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
  case t57
  case t58
  case t59
  case t60
  case t61
  case t62
  case t63
  case t64
  case t65
  case t66
  case t67
  case t68
  case t69
  case t70
  case t71
  case t72
  case t73
  case t74
  case t75
  case t76
  case t77
  case t78
  case t79
  case t80
  case t81
  case t82
  case t83
  case t84
  case t85
  case t86
  case t87
  case t88
  case t89
  case t90
  case t91
  case t92
  case t93
  case t94
  case t95
  case t96
  case t97
  case t98
  case t99
  case t100
  case t101
  case t102
  case t103
  case t104
  case t105
  case t106
  case t107
  case t108
  case t109
  case t110
  case t111
  case t112
  case t113
  case t114
  case t115
  case t116
  case t117
  case t118
  case t119
  case t120
  case t121
  case t122
  case t123
  case t124
  case t125
  case t126
  case t127
  case t128
  case t129
  case t130
  case t131
  case t132
  case t133
  case t134
  case t135
  case t136
  case t137
  case t138
  case t139
  case t140
  case t141
  case t142
  case t143
  case t144
  case t145
  case t146
  case t147
  case t148
  case t149
  case t150
  case t151
  case t152
  case t153
  case t154
  case t155
  case t156
  case t157
  case t158
  case t159
  case t160
  case t161
  case t162
  case t163
  case t164
  case t165
  case t166
  case t167
  case t168

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    switch self {
    case .t0 : return "$($"
    case .t1 : return "$)$"
    case .t2 : return "$<<$"
    case .t3 : return "$>>$"
    case .t4 : return "$+$"
    case .t5 : return "$&+$"
    case .t6 : return "$-$"
    case .t7 : return "$&-$"
    case .t8 : return "$\"string\"$"
    case .t9 : return "$self$"
    case .t10 : return "$nil$"
    case .t11 : return "$~$"
    case .t12 : return "$|$"
    case .t13 : return "$||$"
    case .t14 : return "$^$"
    case .t15 : return "$...$"
    case .t16 : return "$..<$"
    case .t17 : return "$if$"
    case .t18 : return "$then$"
    case .t19 : return "$else$"
    case .t20 : return "$end$"
    case .t21 : return "$lexique$"
    case .t22 : return "$[$"
    case .t23 : return "$identifier$"
    case .t24 : return "$:$"
    case .t25 : return "$]$"
    case .t26 : return "$option$"
    case .t27 : return "$.$"
    case .t28 : return "$filewrapper$"
    case .t29 : return "$*$"
    case .t30 : return "$&*$"
    case .t31 : return "$/$"
    case .t32 : return "$&/$"
    case .t33 : return "$mod$"
    case .t34 : return "$&$"
    case .t35 : return "$&&$"
    case .t36 : return "$true$"
    case .t37 : return "$false$"
    case .t38 : return "$==$"
    case .t39 : return "$!=$"
    case .t40 : return "$<=$"
    case .t41 : return "$>=$"
    case .t42 : return "$>$"
    case .t43 : return "$<$"
    case .t44 : return "$===$"
    case .t45 : return "$!==$"
    case .t46 : return "$is$"
    case .t47 : return "$@type$"
    case .t48 : return "$as$"
    case .t49 : return "$!$"
    case .t50 : return "$literalInt$"
    case .t51 : return "$@($"
    case .t52 : return "$'char'$"
    case .t53 : return "$`$"
    case .t54 : return "$double.xxx$"
    case .t55 : return "$not$"
    case .t56 : return "$,$"
    case .t57 : return "$!selector:$"
    case .t58 : return "$?selector:$"
    case .t59 : return "$var$"
    case .t60 : return "$let$"
    case .t61 : return "$?$"
    case .t62 : return "$?!selector:$"
    case .t63 : return "$?!$"
    case .t64 : return "$unused$"
    case .t65 : return "$!?selector:$"
    case .t66 : return "$!?$"
    case .t67 : return "$%from$"
    case .t68 : return "$spoil$"
    case .t69 : return "$;$"
    case .t70 : return "$guard$"
    case .t71 : return "$func$"
    case .t72 : return "$%once$"
    case .t73 : return "$%usefull$"
    case .t74 : return "$->$"
    case .t75 : return "${$"
    case .t76 : return "$}$"
    case .t77 : return "$private$"
    case .t78 : return "$extern$"
    case .t79 : return "$drop$"
    case .t80 : return "$=$"
    case .t81 : return "$super$"
    case .t82 : return "$init$"
    case .t83 : return "$warning$"
    case .t84 : return "$log$"
    case .t85 : return "$elsif$"
    case .t86 : return "$switch$"
    case .t87 : return "$case$"
    case .t88 : return "$loop$"
    case .t89 : return "$while$"
    case .t90 : return "$do$"
    case .t91 : return "$fixit$"
    case .t92 : return "$%remove$"
    case .t93 : return "$%replaceBy$"
    case .t94 : return "$%insertAfter$"
    case .t95 : return "$%insertBefore$"
    case .t96 : return "$error$"
    case .t97 : return "$grammar$"
    case .t98 : return "$label$"
    case .t99 : return "$in$"
    case .t100 : return "$:>$"
    case .t101 : return "$on$"
    case .t102 : return "$for$"
    case .t103 : return "$before$"
    case .t104 : return "$between$"
    case .t105 : return "$after$"
    case .t106 : return "$-=$"
    case .t107 : return "$+=$"
    case .t108 : return "$++=$"
    case .t109 : return "$*=$"
    case .t110 : return "$&=$"
    case .t111 : return "$|=$"
    case .t112 : return "$^=$"
    case .t113 : return "$/=$"
    case .t114 : return "$proc$"
    case .t115 : return "$template$"
    case .t116 : return "$public$"
    case .t117 : return "$protected$"
    case .t118 : return "$fileprivate$"
    case .t119 : return "$extension$"
    case .t120 : return "$abstract$"
    case .t121 : return "$%equatable$"
    case .t122 : return "$%comparable$"
    case .t123 : return "$override$"
    case .t124 : return "$mutating$"
    case .t125 : return "$map$"
    case .t126 : return "$%searchMethod$"
    case .t127 : return "$%errorMessage$"
    case .t128 : return "$%searchSubscript$"
    case .t129 : return "$%removeSetter$"
    case .t130 : return "$%replaceSetter$"
    case .t131 : return "$%insertOrReplaceSetter$"
    case .t132 : return "$%insertSetter$"
    case .t133 : return "$%initArgLabel$"
    case .t134 : return "$weak$"
    case .t135 : return "$list$"
    case .t136 : return "$dict$"
    case .t137 : return "$boolset$"
    case .t138 : return "$final$"
    case .t139 : return "$%clonable$"
    case .t140 : return "$class$"
    case .t141 : return "$%generatedInSeparateFile$"
    case .t142 : return "$sortedlist$"
    case .t143 : return "$struct$"
    case .t144 : return "$graph$"
    case .t145 : return "$enum$"
    case .t146 : return "$indexing$"
    case .t147 : return "$rule$"
    case .t148 : return "$send$"
    case .t149 : return "$style$"
    case .t150 : return "$%templateEndMark$"
    case .t151 : return "$%nonAtomicSelection$"
    case .t152 : return "$$terminal$$"
    case .t153 : return "$rewind$"
    case .t154 : return "$tag$"
    case .t155 : return "$select$"
    case .t156 : return "$default$"
    case .t157 : return "$repeat$"
    case .t158 : return "$%searchString$"
    case .t159 : return "$%preserved$"
    case .t160 : return "$%templateReplacement$"
    case .t161 : return "$gui$"
    case .t162 : return "$project$"
    case .t163 : return "$with$"
    case .t164 : return "$syntax$"
    case .t165 : return "$%translate$"
    case .t166 : return "$<non_terminal>$"
    case .t167 : return "$or$"
    case .t168 : return "$$"
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

enum galgas4Grammar_nonTerminal : NonTerminal_protocol {

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
  case nt50
  case nt51
  case nt52
  case nt53
  case nt54
  case nt55
  case nt56
  case nt57
  case nt58
  case nt59
  case nt60
  case nt61
  case nt62
  case nt63
  case nt64
  case nt65
  case nt66
  case nt67
  case nt68
  case nt69
  case nt70
  case nt71
  case nt72
  case nt73
  case nt74
  case nt75
  case nt76
  case nt77
  case nt78
  case nt79
  case nt80
  case nt81
  case nt82
  case nt83
  case nt84
  case nt85
  case nt86
  case nt87
  case nt88
  case nt89
  case nt90
  case nt91
  case nt92
  case nt93
  case nt94
  case nt95
  case nt96
  case nt97
  case nt98
  case nt99
  case nt100
  case nt101
  case nt102
  case nt103
  case nt104
  case nt105
  case nt106
  case nt107
  case nt108
  case nt109
  case nt110
  case nt111
  case nt112
  case nt113
  case nt114
  case nt115
  case nt116
  case nt117
  case nt118
  case nt119
  case nt120
  case nt121
  case nt122
  case nt123
  case nt124
  case nt125
  case nt126
  case nt127
  case nt128
  case nt129
  case nt130
  case nt131
  case nt132
  case nt133
  case nt134
  case nt135
  case nt136
  case nt137
  case nt138
  case nt139
  case nt140
  case nt141
  case nt142
  case nt143
  case nt144
  case nt145
  case nt146
  case nt147
  case nt148
  case nt149
  case nt150
  case nt151
  case nt152
  case nt153
  case nt154
  case nt155
  case nt156
  case nt157
  case nt158
  case nt159
  case nt160
  case nt161
  case nt162
  case nt163
  case nt164
  case nt165
  case nt166
  case nt167
  case nt168
  case nt169
  case nt170
  case nt171
  case nt172
  case nt173
  case nt174
  case nt175
  case nt176
  case nt177
  case nt178
  case nt179
  case nt180
  case nt181
  case nt182
  case nt183
  case nt184
  case nt185
  case nt186
  case nt187
  case nt188
  case nt189
  case nt190
  case nt191
  case nt192
  case nt193
  case nt194
  case nt195
  case nt196
  case nt197
  case nt198
  case nt199
  case nt200
  case nt201
  case nt202
  case nt203
  case nt204
  case nt205
  case nt206
  case nt207
  case nt208
  case nt209
  case nt210
  case nt211
  case nt212
  case nt213
  case nt214
  case nt215
  case nt216
  case nt217
  case nt218
  case nt219
  case nt220
  case nt221
  case nt222
  case nt223
  case nt224
  case nt225
  case nt226
  case nt227
  case nt228
  case nt229
  case nt230
  case nt231
  case nt232
  case nt233
  case nt234
  case nt235
  case nt236
  case nt237
  case nt238
  case nt239
  case nt240
  case nt241
  case nt242
  case nt243
  case nt244
  case nt245
  case nt246
  case nt247
  case nt248
  case nt249
  case nt250
  case nt251
  case nt252
  case nt253
  case nt254
  case nt255
  case nt256
  case nt257
  case nt258
  case nt259
  case nt260
  case nt261
  case nt262
  case nt263
  case nt264
  case nt265
  case nt266
  case nt267
  case nt268
  case nt269
  case nt270
  case nt271
  case nt272
  case nt273
  case nt274
  case nt275
  case nt276
  case nt277
  case nt278
  case nt279
  case nt280
  case nt281
  case nt282
  case nt283
  case nt284
  case nt285
  case nt286
  case nt287
  case nt288
  case nt289
  case nt290
  case nt291
  case nt292
  case nt293
  case nt294
  case nt295
  case nt296
  case nt297
  case nt298
  case nt299
  case nt300
  case nt301
  case nt302
  case nt303
  case nt304
  case nt305
  case nt306
  case nt307
  case nt308
  case nt309
  case nt310
  case nt311
  case nt312
  case nt313
  case nt314
  case nt315
  case nt316
  case nt317
  case nt318
  case nt319
  case nt320
  case nt321
  case nt322
  case nt323
  case nt324
  case nt325
  case nt326
  case nt327
  case nt328
  case nt329
  case nt330
  case nt331
  case nt332
  case nt333
  case nt334
  case nt335
  case nt336
  case nt337
  case nt338
  case nt339
  case nt340
  case nt341
  case nt342

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  var description : String {
    switch self {
    case .nt0 : return "<type_definition>"
    case .nt1 : return "<simple_type_definition>"
    case .nt2 : return "<actual_parameter_list_within_parenthesis>"
    case .nt3 : return "<primary>"
    case .nt4 : return "<simple_expression>"
    case .nt5 : return "<factor>"
    case .nt6 : return "<expression_or>"
    case .nt7 : return "<primary_beginning_by_dot>"
    case .nt8 : return "<primary_beginning_by_type_dot_name>"
    case .nt9 : return "<term>"
    case .nt10 : return "<expression_and>"
    case .nt11 : return "<relation_factor>"
    case .nt12 : return "<expression>"
    case .nt13 : return "<simple_type_followed_by_dot_type>"
    case .nt14 : return "<primary_beginning_by_type>"
    case .nt15 : return "<output_expression_list>"
    case .nt16 : return "<non_empty_output_expression_list>"
    case .nt17 : return "<formal_parameter_list>"
    case .nt18 : return "<actual_parameter>"
    case .nt19 : return "<formal_input_parameter_list>"
    case .nt20 : return "<poisoned_var_list>"
    case .nt21 : return "<comma_separated_expression>"
    case .nt22 : return "<semantic_instruction_list>"
    case .nt23 : return "<declaration>"
    case .nt24 : return "<syntax_directed_translation_result>"
    case .nt25 : return "<actual_input_parameter_list>"
    case .nt26 : return "<semantic_instruction>"
    case .nt27 : return "<if_instruction_core>"
    case .nt28 : return "<switch_case>"
    case .nt29 : return "<issue_fixit>"
    case .nt30 : return "<grammar_instruction_core>"
    case .nt31 : return "<for_instruction_element>"
    case .nt32 : return "<for_instruction_enumerated_object>"
    case .nt33 : return "<semantic_instruction_beginning_with_identifier>"
    case .nt34 : return "<start_symbol>"
    case .nt35 : return "<filewrapper_text_files>"
    case .nt36 : return "<filewrapper_binary_files>"
    case .nt37 : return "<filewrapper_templates>"
    case .nt38 : return "<acces_control>"
    case .nt39 : return "<method_declaration>"
    case .nt40 : return "<search_method_declaration>"
    case .nt41 : return "<search_subscript_declaration>"
    case .nt42 : return "<remove_setter_declaration>"
    case .nt43 : return "<replace_setter_declaration>"
    case .nt44 : return "<insert_or_replace_declaration>"
    case .nt45 : return "<map_insert_setter_declaration>"
    case .nt46 : return "<property_declaration>"
    case .nt47 : return "<externtype_cpp_predeclaration>"
    case .nt48 : return "<externtype_cpp_classdeclaration>"
    case .nt49 : return "<externtype_constructor>"
    case .nt50 : return "<externtype_getter>"
    case .nt51 : return "<externtype_setter>"
    case .nt52 : return "<externtype_method>"
    case .nt53 : return "<sortedlist_sort_descriptor>"
    case .nt54 : return "<lexical_indexing_declaration>"
    case .nt55 : return "<lexical_message_declaration>"
    case .nt56 : return "<lexical_implicit_rule>"
    case .nt57 : return "<lexical_explicit_rule>"
    case .nt58 : return "<lexical_instruction>"
    case .nt59 : return "<repeat_while_branch>"
    case .nt60 : return "<lexical_output_effective_argument>"
    case .nt61 : return "<lexical_expression>"
    case .nt62 : return "<lexical_term>"
    case .nt63 : return "<lexical_factor>"
    case .nt64 : return "<lexical_list_declaration>"
    case .nt65 : return "<lexical_list_entry>"
    case .nt66 : return "<lexical_attribute_declaration>"
    case .nt67 : return "<terminal_declaration>"
    case .nt68 : return "<style_declaration>"
    case .nt69 : return "<lexical_send_instruction>"
    case .nt70 : return "<template_delimitor>"
    case .nt71 : return "<template_replacement>"
    case .nt72 : return "<option_declaration_ggs3>"
    case .nt73 : return "<gui_with_lexique_declaration>"
    case .nt74 : return "<gui_with_option_declaration>"
    case .nt75 : return "<gui_attributes>"
    case .nt76 : return "<nonterminal_declaration>"
    case .nt77 : return "<syntax_rule_label>"
    case .nt78 : return "<syntax_rule_declaration>"
    case .nt79 : return "<syntax_instruction_list>"
    case .nt80 : return "<syntax_instruction>"
    case .nt81 : return "<terminal_instruction_indexing>"
    case .nt82 : return "<grammar_start_symbol_label>"
    case .nt83 : return "<label_formal_parameter>"
    case .nt84 : return "<select_galgas_34_ExpressionSyntax_0>"
    case .nt85 : return "<select_galgas_34_ExpressionSyntax_1>"
    case .nt86 : return "<select_galgas_34_ExpressionSyntax_2>"
    case .nt87 : return "<select_galgas_34_ExpressionSyntax_3>"
    case .nt88 : return "<select_galgas_34_ExpressionSyntax_4>"
    case .nt89 : return "<select_galgas_34_ExpressionSyntax_5>"
    case .nt90 : return "<select_galgas_34_ExpressionSyntax_6>"
    case .nt91 : return "<select_galgas_34_ExpressionSyntax_7>"
    case .nt92 : return "<select_galgas_34_ExpressionSyntax_8>"
    case .nt93 : return "<select_galgas_34_ExpressionSyntax_9>"
    case .nt94 : return "<select_galgas_34_ExpressionSyntax_10>"
    case .nt95 : return "<select_galgas_34_ExpressionSyntax_11>"
    case .nt96 : return "<select_galgas_34_ExpressionSyntax_12>"
    case .nt97 : return "<select_galgas_34_ExpressionSyntax_13>"
    case .nt98 : return "<select_galgas_34_ExpressionSyntax_14>"
    case .nt99 : return "<select_galgas_34_ExpressionSyntax_15>"
    case .nt100 : return "<select_galgas_34_ExpressionSyntax_16>"
    case .nt101 : return "<select_galgas_34_ExpressionSyntax_17>"
    case .nt102 : return "<select_galgas_34_ExpressionSyntax_18>"
    case .nt103 : return "<select_galgas_34_ExpressionSyntax_19>"
    case .nt104 : return "<select_galgas_34_ExpressionSyntax_20>"
    case .nt105 : return "<select_galgas_34_ExpressionSyntax_21>"
    case .nt106 : return "<select_galgas_34_ExpressionSyntax_22>"
    case .nt107 : return "<select_galgas_34_ExpressionSyntax_23>"
    case .nt108 : return "<select_galgas_34_ExpressionSyntax_24>"
    case .nt109 : return "<select_galgas_34_ExpressionSyntax_25>"
    case .nt110 : return "<select_galgas_34_ParameterArgumentSyntax_0>"
    case .nt111 : return "<select_galgas_34_ParameterArgumentSyntax_1>"
    case .nt112 : return "<select_galgas_34_ParameterArgumentSyntax_2>"
    case .nt113 : return "<select_galgas_34_ParameterArgumentSyntax_3>"
    case .nt114 : return "<select_galgas_34_ParameterArgumentSyntax_4>"
    case .nt115 : return "<select_galgas_34_ParameterArgumentSyntax_5>"
    case .nt116 : return "<select_galgas_34_ParameterArgumentSyntax_6>"
    case .nt117 : return "<select_galgas_34_ParameterArgumentSyntax_7>"
    case .nt118 : return "<select_galgas_34_ParameterArgumentSyntax_8>"
    case .nt119 : return "<select_galgas_34_ParameterArgumentSyntax_9>"
    case .nt120 : return "<select_galgas_34_ParameterArgumentSyntax_10>"
    case .nt121 : return "<select_galgas_34_ParameterArgumentSyntax_11>"
    case .nt122 : return "<select_galgas_34_ParameterArgumentSyntax_12>"
    case .nt123 : return "<select_galgas_34_ParameterArgumentSyntax_13>"
    case .nt124 : return "<select_galgas_34_ParameterArgumentSyntax_14>"
    case .nt125 : return "<select_galgas_34_ParameterArgumentSyntax_15>"
    case .nt126 : return "<select_galgas_34_ParameterArgumentSyntax_16>"
    case .nt127 : return "<select_galgas_34_ParameterArgumentSyntax_17>"
    case .nt128 : return "<select_galgas_34_ParameterArgumentSyntax_18>"
    case .nt129 : return "<select_galgas_34_ParameterArgumentSyntax_19>"
    case .nt130 : return "<select_galgas_34_ParameterArgumentSyntax_20>"
    case .nt131 : return "<select_galgas_34_ParameterArgumentSyntax_21>"
    case .nt132 : return "<select_galgas_34_ParameterArgumentSyntax_22>"
    case .nt133 : return "<select_galgas_34_InstructionsSyntax_0>"
    case .nt134 : return "<select_galgas_34_InstructionsSyntax_1>"
    case .nt135 : return "<select_galgas_34_InstructionsSyntax_2>"
    case .nt136 : return "<select_galgas_34_InstructionsSyntax_3>"
    case .nt137 : return "<select_galgas_34_InstructionsSyntax_4>"
    case .nt138 : return "<select_galgas_34_InstructionsSyntax_5>"
    case .nt139 : return "<select_galgas_34_InstructionsSyntax_6>"
    case .nt140 : return "<select_galgas_34_InstructionsSyntax_7>"
    case .nt141 : return "<select_galgas_34_InstructionsSyntax_8>"
    case .nt142 : return "<select_galgas_34_InstructionsSyntax_9>"
    case .nt143 : return "<select_galgas_34_InstructionsSyntax_10>"
    case .nt144 : return "<select_galgas_34_InstructionsSyntax_11>"
    case .nt145 : return "<select_galgas_34_InstructionsSyntax_12>"
    case .nt146 : return "<select_galgas_34_InstructionsSyntax_13>"
    case .nt147 : return "<select_galgas_34_InstructionsSyntax_14>"
    case .nt148 : return "<select_galgas_34_InstructionsSyntax_15>"
    case .nt149 : return "<select_galgas_34_InstructionsSyntax_16>"
    case .nt150 : return "<select_galgas_34_InstructionsSyntax_17>"
    case .nt151 : return "<select_galgas_34_InstructionsSyntax_18>"
    case .nt152 : return "<select_galgas_34_InstructionsSyntax_19>"
    case .nt153 : return "<select_galgas_34_InstructionsSyntax_20>"
    case .nt154 : return "<select_galgas_34_InstructionsSyntax_21>"
    case .nt155 : return "<select_galgas_34_InstructionsSyntax_22>"
    case .nt156 : return "<select_galgas_34_InstructionsSyntax_23>"
    case .nt157 : return "<select_galgas_34_InstructionsSyntax_24>"
    case .nt158 : return "<select_galgas_34_InstructionsSyntax_25>"
    case .nt159 : return "<select_galgas_34_InstructionsSyntax_26>"
    case .nt160 : return "<select_galgas_34_InstructionsSyntax_27>"
    case .nt161 : return "<select_galgas_34_InstructionsSyntax_28>"
    case .nt162 : return "<select_galgas_34_InstructionsSyntax_29>"
    case .nt163 : return "<select_galgas_34_InstructionsSyntax_30>"
    case .nt164 : return "<select_galgas_34_InstructionsSyntax_31>"
    case .nt165 : return "<select_galgas_34_InstructionsSyntax_32>"
    case .nt166 : return "<select_galgas_34_InstructionsSyntax_33>"
    case .nt167 : return "<select_galgas_34_InstructionsSyntax_34>"
    case .nt168 : return "<select_galgas_34_InstructionsSyntax_35>"
    case .nt169 : return "<select_galgas_34_InstructionsSyntax_36>"
    case .nt170 : return "<select_galgas_34_InstructionsSyntax_37>"
    case .nt171 : return "<select_galgas_34_InstructionsSyntax_38>"
    case .nt172 : return "<select_galgas_34_InstructionsSyntax_39>"
    case .nt173 : return "<select_galgas_34_InstructionsSyntax_40>"
    case .nt174 : return "<select_galgas_34_InstructionsSyntax_41>"
    case .nt175 : return "<select_galgas_34_InstructionsSyntax_42>"
    case .nt176 : return "<select_galgas_34_InstructionsSyntax_43>"
    case .nt177 : return "<select_galgas_34_InstructionsSyntax_44>"
    case .nt178 : return "<select_galgas_34_InstructionsSyntax_45>"
    case .nt179 : return "<select_galgas_34_InstructionsSyntax_46>"
    case .nt180 : return "<select_galgas_34_InstructionsSyntax_47>"
    case .nt181 : return "<select_galgas_34_InstructionsSyntax_48>"
    case .nt182 : return "<select_galgas_34_InstructionsSyntax_49>"
    case .nt183 : return "<select_galgas_34_InstructionsSyntax_50>"
    case .nt184 : return "<select_galgas_34_InstructionsSyntax_51>"
    case .nt185 : return "<select_galgas_34_InstructionsSyntax_52>"
    case .nt186 : return "<select_galgas_34_InstructionsSyntax_53>"
    case .nt187 : return "<select_galgas_34_InstructionsSyntax_54>"
    case .nt188 : return "<select_galgas_34_InstructionsSyntax_55>"
    case .nt189 : return "<select_galgas_34_InstructionsSyntax_56>"
    case .nt190 : return "<select_galgas_34_InstructionsSyntax_57>"
    case .nt191 : return "<select_galgas_34_InstructionsSyntax_58>"
    case .nt192 : return "<select_galgas_34_InstructionsSyntax_59>"
    case .nt193 : return "<select_galgas_34_InstructionsSyntax_60>"
    case .nt194 : return "<select_galgas_34_InstructionsSyntax_61>"
    case .nt195 : return "<select_galgas_34_InstructionsSyntax_62>"
    case .nt196 : return "<select_galgas_34_InstructionsSyntax_63>"
    case .nt197 : return "<select_galgas_34_InstructionsSyntax_64>"
    case .nt198 : return "<select_galgas_34_InstructionsSyntax_65>"
    case .nt199 : return "<select_galgas_34_DeclarationsSyntax_0>"
    case .nt200 : return "<select_galgas_34_DeclarationsSyntax_1>"
    case .nt201 : return "<select_galgas_34_DeclarationsSyntax_2>"
    case .nt202 : return "<select_galgas_34_DeclarationsSyntax_3>"
    case .nt203 : return "<select_galgas_34_DeclarationsSyntax_4>"
    case .nt204 : return "<select_galgas_34_DeclarationsSyntax_5>"
    case .nt205 : return "<select_galgas_34_DeclarationsSyntax_6>"
    case .nt206 : return "<select_galgas_34_DeclarationsSyntax_7>"
    case .nt207 : return "<select_galgas_34_DeclarationsSyntax_8>"
    case .nt208 : return "<select_galgas_34_DeclarationsSyntax_9>"
    case .nt209 : return "<select_galgas_34_DeclarationsSyntax_10>"
    case .nt210 : return "<select_galgas_34_DeclarationsSyntax_11>"
    case .nt211 : return "<select_galgas_34_DeclarationsSyntax_12>"
    case .nt212 : return "<select_galgas_34_DeclarationsSyntax_13>"
    case .nt213 : return "<select_galgas_34_DeclarationsSyntax_14>"
    case .nt214 : return "<select_galgas_34_DeclarationsSyntax_15>"
    case .nt215 : return "<select_galgas_34_DeclarationsSyntax_16>"
    case .nt216 : return "<select_galgas_34_DeclarationsSyntax_17>"
    case .nt217 : return "<select_galgas_34_DeclarationsSyntax_18>"
    case .nt218 : return "<select_galgas_34_DeclarationsSyntax_19>"
    case .nt219 : return "<select_galgas_34_DeclarationsSyntax_20>"
    case .nt220 : return "<select_galgas_34_DeclarationsSyntax_21>"
    case .nt221 : return "<select_galgas_34_DeclarationsSyntax_22>"
    case .nt222 : return "<select_galgas_34_DeclarationsSyntax_23>"
    case .nt223 : return "<select_galgas_34_DeclarationsSyntax_24>"
    case .nt224 : return "<select_galgas_34_DeclarationsSyntax_25>"
    case .nt225 : return "<select_galgas_34_DeclarationsSyntax_26>"
    case .nt226 : return "<select_galgas_34_DeclarationsSyntax_27>"
    case .nt227 : return "<select_galgas_34_DeclarationsSyntax_28>"
    case .nt228 : return "<select_galgas_34_DeclarationsSyntax_29>"
    case .nt229 : return "<select_galgas_34_DeclarationsSyntax_30>"
    case .nt230 : return "<select_galgas_34_DeclarationsSyntax_31>"
    case .nt231 : return "<select_galgas_34_DeclarationsSyntax_32>"
    case .nt232 : return "<select_galgas_34_DeclarationsSyntax_33>"
    case .nt233 : return "<select_galgas_34_DeclarationsSyntax_34>"
    case .nt234 : return "<select_galgas_34_DeclarationsSyntax_35>"
    case .nt235 : return "<select_galgas_34_DeclarationsSyntax_36>"
    case .nt236 : return "<select_galgas_34_DeclarationsSyntax_37>"
    case .nt237 : return "<select_galgas_34_DeclarationsSyntax_38>"
    case .nt238 : return "<select_galgas_34_DeclarationsSyntax_39>"
    case .nt239 : return "<select_galgas_34_DeclarationsSyntax_40>"
    case .nt240 : return "<select_galgas_34_DeclarationsSyntax_41>"
    case .nt241 : return "<select_galgas_34_DeclarationsSyntax_42>"
    case .nt242 : return "<select_galgas_34_DeclarationsSyntax_43>"
    case .nt243 : return "<select_galgas_34_DeclarationsSyntax_44>"
    case .nt244 : return "<select_galgas_34_DeclarationsSyntax_45>"
    case .nt245 : return "<select_galgas_34_DeclarationsSyntax_46>"
    case .nt246 : return "<select_galgas_34_DeclarationsSyntax_47>"
    case .nt247 : return "<select_galgas_34_DeclarationsSyntax_48>"
    case .nt248 : return "<select_galgas_34_DeclarationsSyntax_49>"
    case .nt249 : return "<select_galgas_34_DeclarationsSyntax_50>"
    case .nt250 : return "<select_galgas_34_DeclarationsSyntax_51>"
    case .nt251 : return "<select_galgas_34_DeclarationsSyntax_52>"
    case .nt252 : return "<select_galgas_34_DeclarationsSyntax_53>"
    case .nt253 : return "<select_galgas_34_DeclarationsSyntax_54>"
    case .nt254 : return "<select_galgas_34_DeclarationsSyntax_55>"
    case .nt255 : return "<select_galgas_34_DeclarationsSyntax_56>"
    case .nt256 : return "<select_galgas_34_DeclarationsSyntax_57>"
    case .nt257 : return "<select_galgas_34_DeclarationsSyntax_58>"
    case .nt258 : return "<select_galgas_34_DeclarationsSyntax_59>"
    case .nt259 : return "<select_galgas_34_DeclarationsSyntax_60>"
    case .nt260 : return "<select_galgas_34_DeclarationsSyntax_61>"
    case .nt261 : return "<select_galgas_34_DeclarationsSyntax_62>"
    case .nt262 : return "<select_galgas_34_DeclarationsSyntax_63>"
    case .nt263 : return "<select_galgas_34_DeclarationsSyntax_64>"
    case .nt264 : return "<select_galgas_34_DeclarationsSyntax_65>"
    case .nt265 : return "<select_galgas_34_DeclarationsSyntax_66>"
    case .nt266 : return "<select_galgas_34_DeclarationsSyntax_67>"
    case .nt267 : return "<select_galgas_34_DeclarationsSyntax_68>"
    case .nt268 : return "<select_galgas_34_DeclarationsSyntax_69>"
    case .nt269 : return "<select_galgas_34_DeclarationsSyntax_70>"
    case .nt270 : return "<select_galgas_34_DeclarationsSyntax_71>"
    case .nt271 : return "<select_galgas_34_DeclarationsSyntax_72>"
    case .nt272 : return "<select_galgas_34_LexiqueComponentSyntax_0>"
    case .nt273 : return "<select_galgas_34_LexiqueComponentSyntax_1>"
    case .nt274 : return "<select_galgas_34_LexiqueComponentSyntax_2>"
    case .nt275 : return "<select_galgas_34_LexiqueComponentSyntax_3>"
    case .nt276 : return "<select_galgas_34_LexiqueComponentSyntax_4>"
    case .nt277 : return "<select_galgas_34_LexiqueComponentSyntax_5>"
    case .nt278 : return "<select_galgas_34_LexiqueComponentSyntax_6>"
    case .nt279 : return "<select_galgas_34_LexiqueComponentSyntax_7>"
    case .nt280 : return "<select_galgas_34_LexiqueComponentSyntax_8>"
    case .nt281 : return "<select_galgas_34_LexiqueComponentSyntax_9>"
    case .nt282 : return "<select_galgas_34_LexiqueComponentSyntax_10>"
    case .nt283 : return "<select_galgas_34_LexiqueComponentSyntax_11>"
    case .nt284 : return "<select_galgas_34_LexiqueComponentSyntax_12>"
    case .nt285 : return "<select_galgas_34_LexiqueComponentSyntax_13>"
    case .nt286 : return "<select_galgas_34_LexiqueComponentSyntax_14>"
    case .nt287 : return "<select_galgas_34_LexiqueComponentSyntax_15>"
    case .nt288 : return "<select_galgas_34_LexiqueComponentSyntax_16>"
    case .nt289 : return "<select_galgas_34_LexiqueComponentSyntax_17>"
    case .nt290 : return "<select_galgas_34_LexiqueComponentSyntax_18>"
    case .nt291 : return "<select_galgas_34_LexiqueComponentSyntax_19>"
    case .nt292 : return "<select_galgas_34_LexiqueComponentSyntax_20>"
    case .nt293 : return "<select_galgas_34_LexiqueComponentSyntax_21>"
    case .nt294 : return "<select_galgas_34_LexiqueComponentSyntax_22>"
    case .nt295 : return "<select_galgas_34_LexiqueComponentSyntax_23>"
    case .nt296 : return "<select_galgas_34_LexiqueComponentSyntax_24>"
    case .nt297 : return "<select_galgas_34_LexiqueComponentSyntax_25>"
    case .nt298 : return "<select_galgas_34_LexiqueComponentSyntax_26>"
    case .nt299 : return "<select_galgas_34_OptionComponentSyntax_0>"
    case .nt300 : return "<select_galgas_34_OptionComponentSyntax_1>"
    case .nt301 : return "<select_galgas_34_OptionComponentSyntax_2>"
    case .nt302 : return "<select_galgas_34_GuiComponentSyntax_0>"
    case .nt303 : return "<select_galgas_34_GuiComponentSyntax_1>"
    case .nt304 : return "<select_galgas_34_GuiComponentSyntax_2>"
    case .nt305 : return "<select_galgas_34_GuiComponentSyntax_3>"
    case .nt306 : return "<select_galgas_34_GuiComponentSyntax_4>"
    case .nt307 : return "<select_galgas_34_GuiComponentSyntax_5>"
    case .nt308 : return "<select_galgas_34_GuiComponentSyntax_6>"
    case .nt309 : return "<select_galgas_34_SyntaxComponentSyntax_0>"
    case .nt310 : return "<select_galgas_34_SyntaxComponentSyntax_1>"
    case .nt311 : return "<select_galgas_34_SyntaxComponentSyntax_2>"
    case .nt312 : return "<select_galgas_34_SyntaxComponentSyntax_3>"
    case .nt313 : return "<select_galgas_34_SyntaxComponentSyntax_4>"
    case .nt314 : return "<select_galgas_34_SyntaxComponentSyntax_5>"
    case .nt315 : return "<select_galgas_34_SyntaxComponentSyntax_6>"
    case .nt316 : return "<select_galgas_34_SyntaxComponentSyntax_7>"
    case .nt317 : return "<select_galgas_34_SyntaxComponentSyntax_8>"
    case .nt318 : return "<select_galgas_34_SyntaxComponentSyntax_9>"
    case .nt319 : return "<select_galgas_34_SyntaxComponentSyntax_10>"
    case .nt320 : return "<select_galgas_34_SyntaxComponentSyntax_11>"
    case .nt321 : return "<select_galgas_34_SyntaxComponentSyntax_12>"
    case .nt322 : return "<select_galgas_34_SyntaxComponentSyntax_13>"
    case .nt323 : return "<select_galgas_34_SyntaxComponentSyntax_14>"
    case .nt324 : return "<select_galgas_34_SyntaxComponentSyntax_15>"
    case .nt325 : return "<select_galgas_34_SyntaxComponentSyntax_16>"
    case .nt326 : return "<select_galgas_34_GrammarComponentSyntax_0>"
    case .nt327 : return "<select_galgas_34_GrammarComponentSyntax_1>"
    case .nt328 : return "<select_galgas_34_GrammarComponentSyntax_2>"
    case .nt329 : return "<select_galgas_34_GrammarComponentSyntax_3>"
    case .nt330 : return "<select_galgas_34_GrammarComponentSyntax_4>"
    case .nt331 : return "<select_galgas_34_GrammarComponentSyntax_5>"
    case .nt332 : return "<select_galgas_34_GrammarComponentSyntax_6>"
    case .nt333 : return "<select_galgas_34_GrammarComponentSyntax_7>"
    case .nt334 : return "<select_galgas_34_GrammarComponentSyntax_8>"
    case .nt335 : return "<select_galgas_34_GrammarComponentSyntax_9>"
    case .nt336 : return "<select_galgas_34_GrammarComponentSyntax_10>"
    case .nt337 : return "<select_galgas_34_GrammarComponentSyntax_11>"
    case .nt338 : return "<select_galgas_34_GrammarComponentSyntax_12>"
    case .nt339 : return "<select_galgas_34_ProgramDeclarations_0>"
    case .nt340 : return "<select_galgas_34_ProgramDeclarations_1>"
    case .nt341 : return "<select_galgas_34_ProgramDeclarations_2>"
    case .nt342 : return "<>"
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

let galgas4Grammar_startSymbol : galgas4Grammar_nonTerminal = .nt342

//--------------------------------------------------------------------------------------------------

let galgas4Grammar_rules : [Grammar <galgas4Grammar_terminal, galgas4Grammar_nonTerminal>.Rule] = [
  .init (.nt3, [.terminal(.t0),.nonterminal(.nt12),.terminal(.t1)]),
  .init (.nt4, [.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt5, [.terminal(.t6),.nonterminal(.nt5)]),
  .init (.nt3, [.terminal(.t8),.nonterminal(.nt85)]),
  .init (.nt3, [.terminal(.t9)]),
  .init (.nt3, [.terminal(.t10)]),
  .init (.nt5, [.terminal(.t11),.nonterminal(.nt5)]),
  .init (.nt6, [.nonterminal(.nt10),.nonterminal(.nt86)]),
  .init (.nt3, [.terminal(.t17),.nonterminal(.nt12),.terminal(.t18),.nonterminal(.nt12),.terminal(.t19),.nonterminal(.nt12),.terminal(.t20)]),
  .init (.nt3, [.terminal(.t21),.terminal(.t22),.terminal(.t23),.terminal(.t24),.terminal(.t23),.terminal(.t25)]),
  .init (.nt3, [.terminal(.t23),.terminal(.t0),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt7, [.terminal(.t23),.nonterminal(.nt87)]),
  .init (.nt8, [.nonterminal(.nt88)]),
  .init (.nt3, [.terminal(.t23)]),
  .init (.nt3, [.terminal(.t26),.terminal(.t23),.terminal(.t22),.terminal(.t23),.terminal(.t27),.terminal(.t23),.terminal(.t25)]),
  .init (.nt3, [.terminal(.t26),.terminal(.t22),.terminal(.t23),.terminal(.t27),.terminal(.t23),.terminal(.t25)]),
  .init (.nt3, [.terminal(.t28),.terminal(.t22),.terminal(.t23),.nonterminal(.nt89),.terminal(.t25)]),
  .init (.nt9, [.nonterminal(.nt5),.nonterminal(.nt91)]),
  .init (.nt10, [.nonterminal(.nt11),.nonterminal(.nt92)]),
  .init (.nt3, [.terminal(.t36)]),
  .init (.nt3, [.terminal(.t37)]),
  .init (.nt11, [.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt12, [.nonterminal(.nt6),.nonterminal(.nt94)]),
  .init (.nt3, [.nonterminal(.nt3),.terminal(.t49)]),
  .init (.nt3, [.terminal(.t50)]),
  .init (.nt3, [.nonterminal(.nt1),.nonterminal(.nt95)]),
  .init (.nt13, [.nonterminal(.nt1),.nonterminal(.nt97)]),
  .init (.nt3, [.terminal(.t51),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt3, [.terminal(.t27),.nonterminal(.nt7)]),
  .init (.nt14, [.terminal(.t0),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt3, [.terminal(.t0),.terminal(.t1)]),
  .init (.nt3, [.terminal(.t52)]),
  .init (.nt3, [.terminal(.t53),.terminal(.t47)]),
  .init (.nt5, [.nonterminal(.nt3),.nonterminal(.nt99)]),
  .init (.nt3, [.terminal(.t54)]),
  .init (.nt5, [.terminal(.t55),.nonterminal(.nt5)]),
  .init (.nt5, [.terminal(.t4),.nonterminal(.nt5)]),
  .init (.nt3, [.terminal(.t22),.nonterminal(.nt101),.terminal(.t25)]),
  .init (.nt14, [.terminal(.t22),.nonterminal(.nt103),.terminal(.t25)]),
  .init (.nt5, [.terminal(.t7),.nonterminal(.nt5)]),
  .init (.nt15, [.nonterminal(.nt105)]),
  .init (.nt16, [.nonterminal(.nt109),.nonterminal(.nt12),.nonterminal(.nt108)]),
  .init (.nt17, [.terminal(.t0),.nonterminal(.nt110),.terminal(.t1)]),
  .init (.nt2, [.terminal(.t0),.nonterminal(.nt116),.terminal(.t1)]),
  .init (.nt18, [.nonterminal(.nt118),.nonterminal(.nt119)]),
  .init (.nt18, [.nonterminal(.nt123),.nonterminal(.nt124)]),
  .init (.nt18, [.nonterminal(.nt126),.nonterminal(.nt12)]),
  .init (.nt18, [.nonterminal(.nt12)]),
  .init (.nt19, [.terminal(.t0),.nonterminal(.nt127),.terminal(.t1)]),
  .init (.nt20, []),
  .init (.nt20, [.terminal(.t68),.terminal(.t0),.terminal(.t23),.nonterminal(.nt132),.terminal(.t1)]),
  .init (.nt22, [.nonterminal(.nt133),.nonterminal(.nt136)]),
  .init (.nt23, [.terminal(.t71),.nonterminal(.nt137),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0),.nonterminal(.nt138),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t77),.terminal(.t71),.nonterminal(.nt139),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0),.nonterminal(.nt140),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t78),.terminal(.t71),.nonterminal(.nt141),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0)]),
  .init (.nt24, [.terminal(.t0),.terminal(.t61),.nonterminal(.nt142),.terminal(.t1)]),
  .init (.nt25, [.nonterminal(.nt143)]),
  .init (.nt26, [.terminal(.t79),.terminal(.t23),.nonterminal(.nt150)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t81),.terminal(.t27),.terminal(.t82),.terminal(.t0),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt26, [.terminal(.t83),.nonterminal(.nt12),.terminal(.t24),.nonterminal(.nt12),.nonterminal(.nt29)]),
  .init (.nt26, [.terminal(.t84),.nonterminal(.nt152),.nonterminal(.nt151)]),
  .init (.nt27, [.nonterminal(.nt21),.terminal(.t18),.nonterminal(.nt22),.nonterminal(.nt153)]),
  .init (.nt26, [.terminal(.t17),.nonterminal(.nt27),.terminal(.t20)]),
  .init (.nt26, [.terminal(.t23),.nonterminal(.nt154),.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t27),.terminal(.t23),.nonterminal(.nt155),.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t86),.nonterminal(.nt12),.terminal(.t87),.nonterminal(.nt28),.terminal(.t24),.nonterminal(.nt22),.nonterminal(.nt156),.terminal(.t20)]),
  .init (.nt28, [.terminal(.t23),.nonterminal(.nt157),.nonterminal(.nt158)]),
  .init (.nt26, [.terminal(.t81),.terminal(.t27),.terminal(.t23),.nonterminal(.nt2)]),
  .init (.nt26, [.terminal(.t88),.nonterminal(.nt22),.terminal(.t89),.nonterminal(.nt21),.terminal(.t90),.nonterminal(.nt22),.terminal(.t20)]),
  .init (.nt26, [.terminal(.t47),.terminal(.t27),.terminal(.t23),.nonterminal(.nt2)]),
  .init (.nt29, [.nonterminal(.nt163)]),
  .init (.nt26, [.terminal(.t96),.terminal(.t0),.nonterminal(.nt12),.terminal(.t24),.nonterminal(.nt12),.nonterminal(.nt166),.nonterminal(.nt29),.terminal(.t1)]),
  .init (.nt26, [.terminal(.t59),.terminal(.t23),.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t59),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt168)]),
  .init (.nt21, [.nonterminal(.nt170),.nonterminal(.nt169)]),
  .init (.nt26, [.terminal(.t88),.terminal(.t0),.nonterminal(.nt12),.terminal(.t1),.nonterminal(.nt22),.terminal(.t89),.nonterminal(.nt12),.terminal(.t90),.nonterminal(.nt22),.terminal(.t20)]),
  .init (.nt26, [.terminal(.t60),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt174)]),
  .init (.nt26, [.terminal(.t60),.terminal(.t23),.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t97),.terminal(.t23),.nonterminal(.nt175),.nonterminal(.nt2),.nonterminal(.nt30)]),
  .init (.nt30, [.terminal(.t99),.nonterminal(.nt12),.nonterminal(.nt176)]),
  .init (.nt30, [.terminal(.t101),.nonterminal(.nt12),.terminal(.t24),.nonterminal(.nt12),.nonterminal(.nt177)]),
  .init (.nt31, [.terminal(.t50),.terminal(.t29)]),
  .init (.nt31, [.nonterminal(.nt178),.nonterminal(.nt179)]),
  .init (.nt32, [.terminal(.t0),.nonterminal(.nt31),.nonterminal(.nt181),.terminal(.t1),.terminal(.t99),.nonterminal(.nt12)]),
  .init (.nt32, [.nonterminal(.nt182),.nonterminal(.nt183),.terminal(.t99),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t102),.nonterminal(.nt185),.nonterminal(.nt32),.nonterminal(.nt184),.nonterminal(.nt186),.nonterminal(.nt187),.terminal(.t90),.nonterminal(.nt188),.nonterminal(.nt22),.nonterminal(.nt189),.nonterminal(.nt190),.terminal(.t20)]),
  .init (.nt26, [.terminal(.t66),.nonterminal(.nt191),.terminal(.t23),.nonterminal(.nt192)]),
  .init (.nt26, [.nonterminal(.nt33)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t27),.nonterminal(.nt33)]),
  .init (.nt33, [.terminal(.t23),.nonterminal(.nt194),.nonterminal(.nt195)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t107),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t106),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t109),.nonterminal(.nt12)]),
  .init (.nt26, [.terminal(.t9),.terminal(.t113),.nonterminal(.nt12)]),
  .init (.nt23, [.terminal(.t114),.nonterminal(.nt196),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t77),.terminal(.t114),.nonterminal(.nt197),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t78),.terminal(.t114),.nonterminal(.nt198),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt34, [.nonterminal(.nt199)]),
  .init (.nt23, [.terminal(.t28),.terminal(.t23),.terminal(.t99),.terminal(.t8),.nonterminal(.nt35),.nonterminal(.nt36),.nonterminal(.nt37)]),
  .init (.nt23, [.terminal(.t77),.terminal(.t28),.terminal(.t23),.terminal(.t99),.terminal(.t8),.nonterminal(.nt35),.nonterminal(.nt36),.nonterminal(.nt37)]),
  .init (.nt35, [.terminal(.t75),.nonterminal(.nt200),.terminal(.t76)]),
  .init (.nt36, [.terminal(.t75),.nonterminal(.nt202),.terminal(.t76)]),
  .init (.nt37, [.terminal(.t75),.nonterminal(.nt204),.terminal(.t76)]),
  .init (.nt38, [.nonterminal(.nt209)]),
  .init (.nt23, [.terminal(.t114),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt213),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt39, [.terminal(.t114),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t119),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt214),.terminal(.t82),.nonterminal(.nt19),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt39, [.terminal(.t82),.nonterminal(.nt19),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t120),.terminal(.t71),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt215),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0)]),
  .init (.nt39, [.terminal(.t120),.terminal(.t71),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0)]),
  .init (.nt23, [.terminal(.t119),.nonterminal(.nt1),.terminal(.t24),.nonterminal(.nt216)]),
  .init (.nt23, [.terminal(.t123),.terminal(.t71),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt217),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0),.nonterminal(.nt218),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt39, [.terminal(.t123),.terminal(.t71),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0),.nonterminal(.nt219),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t124),.terminal(.t114),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt220),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt39, [.terminal(.t124),.terminal(.t114),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t123),.terminal(.t120),.terminal(.t114),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt221),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt39, [.terminal(.t123),.terminal(.t120),.terminal(.t114),.nonterminal(.nt222),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt23, [.terminal(.t120),.terminal(.t114),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt223),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt39, [.terminal(.t120),.terminal(.t114),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt23, [.terminal(.t71),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt224),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0),.nonterminal(.nt225),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt39, [.terminal(.t71),.nonterminal(.nt226),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t123),.terminal(.t114),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt227),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt39, [.terminal(.t123),.terminal(.t114),.terminal(.t23),.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t123),.terminal(.t120),.terminal(.t71),.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt228),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0)]),
  .init (.nt39, [.terminal(.t123),.terminal(.t120),.terminal(.t71),.terminal(.t23),.nonterminal(.nt19),.terminal(.t74),.nonterminal(.nt0)]),
  .init (.nt23, [.terminal(.t125),.terminal(.t47),.nonterminal(.nt229),.terminal(.t75),.nonterminal(.nt230),.terminal(.t76)]),
  .init (.nt40, [.terminal(.t126),.terminal(.t23),.terminal(.t127),.terminal(.t8)]),
  .init (.nt41, [.terminal(.t128),.terminal(.t23),.terminal(.t127),.terminal(.t8)]),
  .init (.nt42, [.terminal(.t129),.terminal(.t23),.terminal(.t127),.terminal(.t8)]),
  .init (.nt43, [.terminal(.t130),.terminal(.t23),.terminal(.t127),.terminal(.t8)]),
  .init (.nt44, [.terminal(.t131)]),
  .init (.nt45, [.terminal(.t132),.terminal(.t23),.terminal(.t127),.terminal(.t8),.nonterminal(.nt231)]),
  .init (.nt46, [.nonterminal(.nt38),.nonterminal(.nt232),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt233),.nonterminal(.nt234)]),
  .init (.nt46, [.nonterminal(.nt38),.terminal(.t134),.nonterminal(.nt235),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt236),.nonterminal(.nt237)]),
  .init (.nt23, [.terminal(.t135),.terminal(.t47),.nonterminal(.nt238),.terminal(.t75),.nonterminal(.nt239),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t136),.terminal(.t47),.nonterminal(.nt240),.terminal(.t24),.nonterminal(.nt0),.terminal(.t75),.nonterminal(.nt241),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t78),.terminal(.t47),.nonterminal(.nt47),.nonterminal(.nt48),.terminal(.t75),.nonterminal(.nt242),.terminal(.t76)]),
  .init (.nt47, [.terminal(.t75),.nonterminal(.nt243),.terminal(.t76)]),
  .init (.nt48, [.terminal(.t75),.nonterminal(.nt244),.terminal(.t76)]),
  .init (.nt49, [.terminal(.t82),.terminal(.t0),.nonterminal(.nt245),.terminal(.t1)]),
  .init (.nt50, [.terminal(.t71),.terminal(.t23),.nonterminal(.nt248),.terminal(.t74),.nonterminal(.nt0)]),
  .init (.nt51, [.terminal(.t124),.terminal(.t114),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt52, [.terminal(.t114),.terminal(.t23),.nonterminal(.nt17)]),
  .init (.nt23, [.terminal(.t137),.terminal(.t47),.nonterminal(.nt249),.terminal(.t75),.nonterminal(.nt250),.terminal(.t76)]),
  .init (.nt23, [.nonterminal(.nt251),.terminal(.t140),.terminal(.t47),.nonterminal(.nt252),.nonterminal(.nt253),.terminal(.t75),.nonterminal(.nt254),.terminal(.t76)]),
  .init (.nt0, [.nonterminal(.nt1),.nonterminal(.nt255),.nonterminal(.nt257)]),
  .init (.nt1, [.terminal(.t47)]),
  .init (.nt1, [.terminal(.t22),.nonterminal(.nt0),.nonterminal(.nt258),.terminal(.t25)]),
  .init (.nt1, [.terminal(.t0),.nonterminal(.nt0),.nonterminal(.nt259),.terminal(.t1)]),
  .init (.nt23, [.terminal(.t142),.terminal(.t47),.nonterminal(.nt260),.terminal(.t75),.nonterminal(.nt261),.terminal(.t76),.terminal(.t75),.nonterminal(.nt53),.nonterminal(.nt262),.terminal(.t76)]),
  .init (.nt53, [.terminal(.t23),.nonterminal(.nt263)]),
  .init (.nt23, [.terminal(.t143),.terminal(.t47),.nonterminal(.nt264),.terminal(.t75),.nonterminal(.nt265),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t144),.terminal(.t47),.terminal(.t0),.nonterminal(.nt0),.terminal(.t1),.terminal(.t75),.nonterminal(.nt266),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t145),.terminal(.t47),.nonterminal(.nt267),.terminal(.t75),.nonterminal(.nt268),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t21),.terminal(.t23),.terminal(.t75),.nonterminal(.nt272),.terminal(.t76)]),
  .init (.nt54, [.terminal(.t146),.terminal(.t23),.terminal(.t24),.terminal(.t8)]),
  .init (.nt55, [.terminal(.t127),.terminal(.t23),.terminal(.t24),.terminal(.t8)]),
  .init (.nt56, [.terminal(.t147),.terminal(.t135),.terminal(.t23)]),
  .init (.nt57, [.terminal(.t147),.nonterminal(.nt61),.terminal(.t75),.nonterminal(.nt273),.terminal(.t76)]),
  .init (.nt58, [.terminal(.t148),.nonterminal(.nt69)]),
  .init (.nt59, [.terminal(.t89),.nonterminal(.nt61),.terminal(.t24),.nonterminal(.nt274)]),
  .init (.nt60, [.terminal(.t52)]),
  .init (.nt60, [.terminal(.t50)]),
  .init (.nt60, [.terminal(.t29)]),
  .init (.nt60, [.terminal(.t23),.nonterminal(.nt275)]),
  .init (.nt61, [.nonterminal(.nt62)]),
  .init (.nt62, [.nonterminal(.nt63),.nonterminal(.nt277)]),
  .init (.nt63, [.terminal(.t8)]),
  .init (.nt63, [.terminal(.t11),.terminal(.t8),.terminal(.t96),.terminal(.t23)]),
  .init (.nt63, [.terminal(.t52),.nonterminal(.nt278)]),
  .init (.nt63, [.terminal(.t23)]),
  .init (.nt64, [.terminal(.t135),.terminal(.t23),.nonterminal(.nt279),.nonterminal(.nt280),.terminal(.t127),.terminal(.t8),.terminal(.t75),.nonterminal(.nt65),.nonterminal(.nt281),.terminal(.t76)]),
  .init (.nt65, [.terminal(.t8),.nonterminal(.nt282),.nonterminal(.nt283)]),
  .init (.nt66, [.terminal(.t47),.terminal(.t23)]),
  .init (.nt67, [.terminal(.t152),.nonterminal(.nt284),.nonterminal(.nt285),.terminal(.t127),.terminal(.t8)]),
  .init (.nt68, [.terminal(.t149),.terminal(.t23),.terminal(.t74),.terminal(.t8)]),
  .init (.nt58, [.terminal(.t153),.terminal(.t23),.terminal(.t148),.terminal(.t152)]),
  .init (.nt58, [.terminal(.t154),.terminal(.t23)]),
  .init (.nt58, [.terminal(.t83),.terminal(.t23)]),
  .init (.nt58, [.terminal(.t23),.terminal(.t0),.nonterminal(.nt286),.nonterminal(.nt287),.terminal(.t1)]),
  .init (.nt58, [.terminal(.t79),.terminal(.t152)]),
  .init (.nt58, [.terminal(.t155),.terminal(.t87),.nonterminal(.nt61),.terminal(.t24),.nonterminal(.nt290),.nonterminal(.nt289),.terminal(.t156),.nonterminal(.nt291),.terminal(.t20)]),
  .init (.nt58, [.terminal(.t96),.terminal(.t23)]),
  .init (.nt58, [.terminal(.t157),.nonterminal(.nt292),.nonterminal(.nt59),.nonterminal(.nt293),.terminal(.t20)]),
  .init (.nt69, [.terminal(.t158),.terminal(.t23),.terminal(.t99),.terminal(.t23),.terminal(.t156),.nonterminal(.nt294),.nonterminal(.nt295)]),
  .init (.nt58, [.terminal(.t84)]),
  .init (.nt69, [.terminal(.t152)]),
  .init (.nt23, [.terminal(.t115),.terminal(.t21),.terminal(.t23),.terminal(.t24),.terminal(.t23),.terminal(.t75),.nonterminal(.nt296),.terminal(.t76)]),
  .init (.nt70, [.terminal(.t115),.terminal(.t8),.nonterminal(.nt297),.terminal(.t15),.terminal(.t8)]),
  .init (.nt71, [.terminal(.t160),.terminal(.t8),.nonterminal(.nt298)]),
  .init (.nt23, [.terminal(.t26),.terminal(.t23),.terminal(.t75),.nonterminal(.nt299),.terminal(.t76)]),
  .init (.nt72, [.terminal(.t47),.terminal(.t23),.terminal(.t24),.terminal(.t52),.terminal(.t56),.terminal(.t8),.terminal(.t74),.terminal(.t8),.nonterminal(.nt300)]),
  .init (.nt23, [.terminal(.t161),.terminal(.t23),.terminal(.t75),.nonterminal(.nt302),.terminal(.t76)]),
  .init (.nt73, [.terminal(.t163),.terminal(.t21),.terminal(.t23),.terminal(.t75),.nonterminal(.nt303),.terminal(.t76)]),
  .init (.nt74, [.terminal(.t163),.terminal(.t26),.terminal(.t23)]),
  .init (.nt75, [.terminal(.t23),.terminal(.t24),.terminal(.t8),.nonterminal(.nt308)]),
  .init (.nt23, [.terminal(.t164),.terminal(.t23),.nonterminal(.nt309),.nonterminal(.nt310),.terminal(.t75),.nonterminal(.nt311),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t164),.terminal(.t119),.terminal(.t23),.terminal(.t75),.nonterminal(.nt312),.terminal(.t76)]),
  .init (.nt76, [.terminal(.t147),.terminal(.t166),.nonterminal(.nt17),.nonterminal(.nt313)]),
  .init (.nt77, [.nonterminal(.nt17),.terminal(.t75),.nonterminal(.nt79),.terminal(.t76)]),
  .init (.nt78, [.terminal(.t147),.terminal(.t166),.nonterminal(.nt77),.nonterminal(.nt314)]),
  .init (.nt79, [.nonterminal(.nt315)]),
  .init (.nt80, [.terminal(.t148),.nonterminal(.nt12)]),
  .init (.nt80, [.terminal(.t157),.nonterminal(.nt79),.terminal(.t89),.nonterminal(.nt79),.nonterminal(.nt319),.terminal(.t20)]),
  .init (.nt80, [.terminal(.t155),.nonterminal(.nt79),.terminal(.t167),.nonterminal(.nt79),.nonterminal(.nt320),.terminal(.t20)]),
  .init (.nt80, [.terminal(.t152),.nonterminal(.nt25),.nonterminal(.nt81),.nonterminal(.nt321)]),
  .init (.nt81, [.nonterminal(.nt322)]),
  .init (.nt80, [.terminal(.t166),.nonterminal(.nt2),.nonterminal(.nt325)]),
  .init (.nt23, [.nonterminal(.nt326),.terminal(.t97),.terminal(.t23),.terminal(.t8),.nonterminal(.nt327),.terminal(.t75),.terminal(.t164),.terminal(.t23),.nonterminal(.nt328),.terminal(.t166),.nonterminal(.nt82),.nonterminal(.nt329),.nonterminal(.nt330),.terminal(.t76)]),
  .init (.nt82, [.terminal(.t0),.nonterminal(.nt331),.terminal(.t1)]),
  .init (.nt83, [.terminal(.t58),.terminal(.t59),.nonterminal(.nt0),.nonterminal(.nt333),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t61),.nonterminal(.nt0),.nonterminal(.nt334),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t58),.terminal(.t60),.nonterminal(.nt0),.nonterminal(.nt335),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t61),.terminal(.t60),.nonterminal(.nt0),.nonterminal(.nt336),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t62),.nonterminal(.nt0),.nonterminal(.nt337),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t63),.nonterminal(.nt0),.nonterminal(.nt338),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t57),.nonterminal(.nt0),.terminal(.t23)]),
  .init (.nt83, [.terminal(.t49),.nonterminal(.nt0),.terminal(.t23)]),
  .init (.nt23, [.terminal(.t103),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t105),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt23, [.terminal(.t87),.terminal(.t27),.terminal(.t8),.terminal(.t127),.terminal(.t8),.nonterminal(.nt339),.terminal(.t58),.nonterminal(.nt340),.nonterminal(.nt341),.terminal(.t23),.terminal(.t75),.nonterminal(.nt22),.terminal(.t76)]),
  .init (.nt84, []),
  .init (.nt84, [.terminal(.t2),.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt84, [.terminal(.t3),.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt84, [.terminal(.t4),.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt84, [.terminal(.t5),.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt84, [.terminal(.t6),.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt84, [.terminal(.t7),.nonterminal(.nt9),.nonterminal(.nt84)]),
  .init (.nt85, []),
  .init (.nt85, [.terminal(.t8),.nonterminal(.nt85)]),
  .init (.nt86, []),
  .init (.nt86, [.terminal(.t12),.nonterminal(.nt10),.nonterminal(.nt86)]),
  .init (.nt86, [.terminal(.t13),.nonterminal(.nt10),.nonterminal(.nt86)]),
  .init (.nt86, [.terminal(.t14),.nonterminal(.nt10),.nonterminal(.nt86)]),
  .init (.nt86, [.terminal(.t15),.nonterminal(.nt10),.nonterminal(.nt86)]),
  .init (.nt86, [.terminal(.t16),.nonterminal(.nt10),.nonterminal(.nt86)]),
  .init (.nt87, []),
  .init (.nt87, [.terminal(.t0),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt88, []),
  .init (.nt88, [.terminal(.t0),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt89, []),
  .init (.nt89, [.terminal(.t27),.nonterminal(.nt90)]),
  .init (.nt90, [.terminal(.t8)]),
  .init (.nt90, [.terminal(.t23),.terminal(.t24),.nonterminal(.nt15)]),
  .init (.nt91, []),
  .init (.nt91, [.terminal(.t29),.nonterminal(.nt5),.nonterminal(.nt91)]),
  .init (.nt91, [.terminal(.t30),.nonterminal(.nt5),.nonterminal(.nt91)]),
  .init (.nt91, [.terminal(.t31),.nonterminal(.nt5),.nonterminal(.nt91)]),
  .init (.nt91, [.terminal(.t32),.nonterminal(.nt5),.nonterminal(.nt91)]),
  .init (.nt91, [.terminal(.t33),.nonterminal(.nt5),.nonterminal(.nt91)]),
  .init (.nt92, []),
  .init (.nt92, [.terminal(.t34),.nonterminal(.nt11),.nonterminal(.nt92)]),
  .init (.nt92, [.terminal(.t35),.nonterminal(.nt11),.nonterminal(.nt92)]),
  .init (.nt93, []),
  .init (.nt93, [.terminal(.t38),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t39),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t40),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t41),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t42),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t43),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t44),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt93, [.terminal(.t45),.nonterminal(.nt4),.nonterminal(.nt93)]),
  .init (.nt94, []),
  .init (.nt94, [.terminal(.t46),.terminal(.t47)]),
  .init (.nt94, [.terminal(.t48),.terminal(.t47)]),
  .init (.nt95, [.nonterminal(.nt14)]),
  .init (.nt95, [.terminal(.t27),.nonterminal(.nt96)]),
  .init (.nt96, [.terminal(.t23),.nonterminal(.nt8)]),
  .init (.nt96, [.nonterminal(.nt13)]),
  .init (.nt97, [.nonterminal(.nt14)]),
  .init (.nt97, [.terminal(.t27),.nonterminal(.nt98)]),
  .init (.nt98, [.terminal(.t23),.nonterminal(.nt8)]),
  .init (.nt98, [.nonterminal(.nt13)]),
  .init (.nt99, []),
  .init (.nt99, [.terminal(.t22),.nonterminal(.nt16),.terminal(.t25),.nonterminal(.nt99)]),
  .init (.nt99, [.terminal(.t27),.terminal(.t23),.nonterminal(.nt100),.nonterminal(.nt99)]),
  .init (.nt100, []),
  .init (.nt100, [.terminal(.t0),.nonterminal(.nt15),.terminal(.t1)]),
  .init (.nt101, []),
  .init (.nt101, [.nonterminal(.nt12),.nonterminal(.nt102)]),
  .init (.nt102, []),
  .init (.nt102, [.terminal(.t56),.nonterminal(.nt12),.nonterminal(.nt102)]),
  .init (.nt103, []),
  .init (.nt103, [.nonterminal(.nt12),.nonterminal(.nt104)]),
  .init (.nt104, []),
  .init (.nt104, [.terminal(.t56),.nonterminal(.nt12),.nonterminal(.nt104)]),
  .init (.nt105, [.nonterminal(.nt107),.nonterminal(.nt12),.nonterminal(.nt106)]),
  .init (.nt105, []),
  .init (.nt106, []),
  .init (.nt106, [.terminal(.t56),.nonterminal(.nt107),.nonterminal(.nt12),.nonterminal(.nt106)]),
  .init (.nt107, [.terminal(.t57)]),
  .init (.nt107, [.terminal(.t49)]),
  .init (.nt107, []),
  .init (.nt108, []),
  .init (.nt108, [.terminal(.t56),.nonterminal(.nt109),.nonterminal(.nt12),.nonterminal(.nt108)]),
  .init (.nt109, [.terminal(.t57)]),
  .init (.nt109, [.terminal(.t49)]),
  .init (.nt109, []),
  .init (.nt110, []),
  .init (.nt110, [.nonterminal(.nt112),.nonterminal(.nt0),.nonterminal(.nt115),.terminal(.t23),.nonterminal(.nt111)]),
  .init (.nt111, []),
  .init (.nt111, [.terminal(.t56),.nonterminal(.nt112),.nonterminal(.nt0),.nonterminal(.nt115),.terminal(.t23),.nonterminal(.nt111)]),
  .init (.nt112, [.terminal(.t58),.nonterminal(.nt113)]),
  .init (.nt112, [.terminal(.t61),.nonterminal(.nt114)]),
  .init (.nt112, [.terminal(.t60)]),
  .init (.nt112, [.terminal(.t59)]),
  .init (.nt112, []),
  .init (.nt112, [.terminal(.t62)]),
  .init (.nt112, [.terminal(.t63)]),
  .init (.nt112, [.terminal(.t57)]),
  .init (.nt112, [.terminal(.t49)]),
  .init (.nt113, []),
  .init (.nt113, [.terminal(.t59)]),
  .init (.nt113, [.terminal(.t60)]),
  .init (.nt114, []),
  .init (.nt114, [.terminal(.t59)]),
  .init (.nt114, [.terminal(.t60)]),
  .init (.nt115, []),
  .init (.nt115, [.terminal(.t64)]),
  .init (.nt116, []),
  .init (.nt116, [.nonterminal(.nt18),.nonterminal(.nt117)]),
  .init (.nt117, []),
  .init (.nt117, [.terminal(.t56),.nonterminal(.nt18),.nonterminal(.nt117)]),
  .init (.nt118, [.terminal(.t58)]),
  .init (.nt118, [.terminal(.t61)]),
  .init (.nt119, [.terminal(.t29),.nonterminal(.nt20)]),
  .init (.nt119, [.terminal(.t50),.terminal(.t29)]),
  .init (.nt119, [.terminal(.t23),.nonterminal(.nt20)]),
  .init (.nt119, [.terminal(.t9),.terminal(.t27),.terminal(.t23),.nonterminal(.nt20)]),
  .init (.nt119, [.terminal(.t9),.nonterminal(.nt20)]),
  .init (.nt119, [.terminal(.t59),.nonterminal(.nt120),.terminal(.t23),.nonterminal(.nt20)]),
  .init (.nt119, [.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt20)]),
  .init (.nt119, [.terminal(.t60),.nonterminal(.nt121),.nonterminal(.nt122),.terminal(.t23),.nonterminal(.nt20)]),
  .init (.nt120, []),
  .init (.nt120, [.nonterminal(.nt0)]),
  .init (.nt121, []),
  .init (.nt121, [.nonterminal(.nt0)]),
  .init (.nt122, []),
  .init (.nt122, [.terminal(.t64)]),
  .init (.nt123, [.terminal(.t65)]),
  .init (.nt123, [.terminal(.t66)]),
  .init (.nt124, [.terminal(.t23),.nonterminal(.nt125)]),
  .init (.nt124, [.terminal(.t67),.nonterminal(.nt12)]),
  .init (.nt124, [.terminal(.t9)]),
  .init (.nt125, []),
  .init (.nt125, [.terminal(.t27),.terminal(.t23),.nonterminal(.nt125)]),
  .init (.nt126, [.terminal(.t57)]),
  .init (.nt126, [.terminal(.t49)]),
  .init (.nt127, []),
  .init (.nt127, [.nonterminal(.nt129),.nonterminal(.nt130),.nonterminal(.nt0),.nonterminal(.nt131),.terminal(.t23),.nonterminal(.nt128)]),
  .init (.nt128, []),
  .init (.nt128, [.terminal(.t56),.nonterminal(.nt129),.nonterminal(.nt130),.nonterminal(.nt0),.nonterminal(.nt131),.terminal(.t23),.nonterminal(.nt128)]),
  .init (.nt129, [.terminal(.t58)]),
  .init (.nt129, [.terminal(.t61)]),
  .init (.nt129, []),
  .init (.nt130, [.terminal(.t59)]),
  .init (.nt130, [.terminal(.t60)]),
  .init (.nt130, []),
  .init (.nt131, []),
  .init (.nt131, [.terminal(.t64)]),
  .init (.nt132, []),
  .init (.nt132, [.terminal(.t56),.terminal(.t23),.nonterminal(.nt132)]),
  .init (.nt133, []),
  .init (.nt133, [.nonterminal(.nt26),.nonterminal(.nt134)]),
  .init (.nt134, []),
  .init (.nt134, [.nonterminal(.nt135),.nonterminal(.nt26),.nonterminal(.nt134)]),
  .init (.nt135, [.terminal(.t69)]),
  .init (.nt135, []),
  .init (.nt136, []),
  .init (.nt136, [.terminal(.t70),.nonterminal(.nt21),.terminal(.t19),.nonterminal(.nt22),.terminal(.t20),.nonterminal(.nt22)]),
  .init (.nt137, []),
  .init (.nt137, [.terminal(.t72),.nonterminal(.nt137)]),
  .init (.nt137, [.terminal(.t73),.nonterminal(.nt137)]),
  .init (.nt138, [.terminal(.t23)]),
  .init (.nt138, []),
  .init (.nt139, []),
  .init (.nt139, [.terminal(.t72),.nonterminal(.nt139)]),
  .init (.nt139, [.terminal(.t73),.nonterminal(.nt139)]),
  .init (.nt140, [.terminal(.t23)]),
  .init (.nt140, []),
  .init (.nt141, []),
  .init (.nt141, [.terminal(.t73),.nonterminal(.nt141)]),
  .init (.nt142, [.terminal(.t29)]),
  .init (.nt142, [.nonterminal(.nt0),.terminal(.t23)]),
  .init (.nt142, [.terminal(.t60),.nonterminal(.nt0),.terminal(.t23)]),
  .init (.nt142, [.terminal(.t23)]),
  .init (.nt143, []),
  .init (.nt143, [.terminal(.t0),.nonterminal(.nt145),.nonterminal(.nt144),.terminal(.t1)]),
  .init (.nt144, []),
  .init (.nt144, [.terminal(.t56),.nonterminal(.nt145),.nonterminal(.nt144)]),
  .init (.nt145, [.terminal(.t61),.terminal(.t29)]),
  .init (.nt145, [.terminal(.t58),.terminal(.t29)]),
  .init (.nt145, [.terminal(.t58),.terminal(.t59),.nonterminal(.nt146),.terminal(.t23)]),
  .init (.nt145, [.terminal(.t61),.terminal(.t59),.nonterminal(.nt147),.terminal(.t23)]),
  .init (.nt145, [.terminal(.t58),.terminal(.t60),.nonterminal(.nt148),.terminal(.t23)]),
  .init (.nt145, [.terminal(.t61),.terminal(.t60),.nonterminal(.nt149),.terminal(.t23)]),
  .init (.nt145, [.terminal(.t58),.terminal(.t23)]),
  .init (.nt145, [.terminal(.t61),.terminal(.t23)]),
  .init (.nt146, []),
  .init (.nt146, [.nonterminal(.nt0)]),
  .init (.nt147, []),
  .init (.nt147, [.nonterminal(.nt0)]),
  .init (.nt148, []),
  .init (.nt148, [.nonterminal(.nt0)]),
  .init (.nt149, []),
  .init (.nt149, [.nonterminal(.nt0)]),
  .init (.nt150, []),
  .init (.nt150, [.terminal(.t56),.terminal(.t23),.nonterminal(.nt150)]),
  .init (.nt151, []),
  .init (.nt151, [.terminal(.t56),.nonterminal(.nt152),.nonterminal(.nt151)]),
  .init (.nt152, [.terminal(.t23)]),
  .init (.nt152, [.terminal(.t9),.terminal(.t27),.terminal(.t23)]),
  .init (.nt152, [.terminal(.t8),.terminal(.t24),.nonterminal(.nt12)]),
  .init (.nt153, []),
  .init (.nt153, [.terminal(.t19),.nonterminal(.nt22)]),
  .init (.nt153, [.terminal(.t85),.nonterminal(.nt27)]),
  .init (.nt154, []),
  .init (.nt154, [.terminal(.t22),.nonterminal(.nt16),.terminal(.t25)]),
  .init (.nt154, [.terminal(.t27),.terminal(.t23)]),
  .init (.nt155, []),
  .init (.nt155, [.terminal(.t22),.nonterminal(.nt16),.terminal(.t25)]),
  .init (.nt155, [.terminal(.t27),.terminal(.t23)]),
  .init (.nt156, []),
  .init (.nt156, [.terminal(.t87),.nonterminal(.nt28),.terminal(.t24),.nonterminal(.nt22),.nonterminal(.nt156)]),
  .init (.nt157, []),
  .init (.nt157, [.terminal(.t56),.terminal(.t23),.nonterminal(.nt157)]),
  .init (.nt158, []),
  .init (.nt158, [.terminal(.t0),.nonterminal(.nt160),.nonterminal(.nt159),.terminal(.t1)]),
  .init (.nt159, []),
  .init (.nt159, [.terminal(.t56),.nonterminal(.nt160),.nonterminal(.nt159)]),
  .init (.nt160, [.terminal(.t50),.terminal(.t29)]),
  .init (.nt160, [.terminal(.t29)]),
  .init (.nt160, [.nonterminal(.nt161),.nonterminal(.nt162),.terminal(.t23)]),
  .init (.nt161, [.nonterminal(.nt0)]),
  .init (.nt161, []),
  .init (.nt162, []),
  .init (.nt162, [.terminal(.t64)]),
  .init (.nt163, []),
  .init (.nt163, [.terminal(.t91),.nonterminal(.nt165),.nonterminal(.nt164)]),
  .init (.nt164, []),
  .init (.nt164, [.terminal(.t56),.nonterminal(.nt165),.nonterminal(.nt164)]),
  .init (.nt165, [.terminal(.t92)]),
  .init (.nt165, [.terminal(.t93),.nonterminal(.nt12)]),
  .init (.nt165, [.terminal(.t94),.nonterminal(.nt12)]),
  .init (.nt165, [.terminal(.t95),.nonterminal(.nt12)]),
  .init (.nt166, []),
  .init (.nt166, [.terminal(.t68),.terminal(.t23),.nonterminal(.nt167)]),
  .init (.nt167, []),
  .init (.nt167, [.terminal(.t56),.terminal(.t23),.nonterminal(.nt167)]),
  .init (.nt168, []),
  .init (.nt168, [.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt169, []),
  .init (.nt169, [.terminal(.t56),.nonterminal(.nt170),.nonterminal(.nt169)]),
  .init (.nt170, [.nonterminal(.nt171),.terminal(.t80),.nonterminal(.nt6),.nonterminal(.nt173)]),
  .init (.nt170, [.nonterminal(.nt12)]),
  .init (.nt171, [.terminal(.t59),.terminal(.t23)]),
  .init (.nt171, [.terminal(.t60),.nonterminal(.nt172)]),
  .init (.nt172, [.terminal(.t23)]),
  .init (.nt172, [.terminal(.t29)]),
  .init (.nt173, []),
  .init (.nt173, [.terminal(.t48),.nonterminal(.nt0)]),
  .init (.nt174, []),
  .init (.nt174, [.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt175, []),
  .init (.nt175, [.terminal(.t98),.terminal(.t23)]),
  .init (.nt176, []),
  .init (.nt176, [.terminal(.t100),.nonterminal(.nt24)]),
  .init (.nt177, []),
  .init (.nt177, [.terminal(.t100),.nonterminal(.nt24)]),
  .init (.nt178, []),
  .init (.nt178, [.nonterminal(.nt0)]),
  .init (.nt179, [.terminal(.t29)]),
  .init (.nt179, [.nonterminal(.nt180),.terminal(.t23)]),
  .init (.nt180, []),
  .init (.nt180, [.terminal(.t64)]),
  .init (.nt181, []),
  .init (.nt181, [.terminal(.t56),.nonterminal(.nt31),.nonterminal(.nt181)]),
  .init (.nt182, []),
  .init (.nt182, [.nonterminal(.nt0)]),
  .init (.nt183, [.terminal(.t29)]),
  .init (.nt183, [.terminal(.t23)]),
  .init (.nt184, []),
  .init (.nt184, [.terminal(.t56),.nonterminal(.nt185),.nonterminal(.nt32),.nonterminal(.nt184)]),
  .init (.nt185, []),
  .init (.nt185, [.terminal(.t42)]),
  .init (.nt186, []),
  .init (.nt186, [.terminal(.t89),.nonterminal(.nt12)]),
  .init (.nt187, []),
  .init (.nt187, [.terminal(.t103),.nonterminal(.nt22)]),
  .init (.nt188, []),
  .init (.nt188, [.terminal(.t0),.terminal(.t23),.terminal(.t1)]),
  .init (.nt189, []),
  .init (.nt189, [.terminal(.t104),.nonterminal(.nt22)]),
  .init (.nt190, []),
  .init (.nt190, [.terminal(.t105),.nonterminal(.nt22)]),
  .init (.nt191, []),
  .init (.nt191, [.terminal(.t9),.terminal(.t27)]),
  .init (.nt192, [.nonterminal(.nt2)]),
  .init (.nt192, [.terminal(.t27),.terminal(.t23),.nonterminal(.nt193),.nonterminal(.nt2)]),
  .init (.nt193, []),
  .init (.nt193, [.terminal(.t27),.terminal(.t23),.nonterminal(.nt193)]),
  .init (.nt194, []),
  .init (.nt194, [.terminal(.t27),.terminal(.t23),.nonterminal(.nt194)]),
  .init (.nt195, [.terminal(.t106),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t107),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t108),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t109),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t110),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t111),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t112),.nonterminal(.nt12)]),
  .init (.nt195, [.terminal(.t113),.nonterminal(.nt12)]),
  .init (.nt195, [.nonterminal(.nt2)]),
  .init (.nt196, []),
  .init (.nt196, [.terminal(.t73),.nonterminal(.nt196)]),
  .init (.nt197, []),
  .init (.nt197, [.terminal(.t73),.nonterminal(.nt197)]),
  .init (.nt198, []),
  .init (.nt198, [.terminal(.t73),.nonterminal(.nt198)]),
  .init (.nt199, []),
  .init (.nt199, [.nonterminal(.nt23),.nonterminal(.nt199)]),
  .init (.nt200, []),
  .init (.nt200, [.terminal(.t8),.nonterminal(.nt201)]),
  .init (.nt201, []),
  .init (.nt201, [.terminal(.t56),.terminal(.t8),.nonterminal(.nt201)]),
  .init (.nt202, []),
  .init (.nt202, [.terminal(.t8),.nonterminal(.nt203)]),
  .init (.nt203, []),
  .init (.nt203, [.terminal(.t56),.terminal(.t8),.nonterminal(.nt203)]),
  .init (.nt204, []),
  .init (.nt204, [.terminal(.t115),.terminal(.t23),.terminal(.t24),.terminal(.t8),.terminal(.t0),.nonterminal(.nt205),.terminal(.t1),.nonterminal(.nt204)]),
  .init (.nt205, []),
  .init (.nt205, [.nonterminal(.nt207),.nonterminal(.nt0),.nonterminal(.nt208),.terminal(.t23),.nonterminal(.nt206)]),
  .init (.nt206, []),
  .init (.nt206, [.terminal(.t56),.nonterminal(.nt207),.nonterminal(.nt0),.nonterminal(.nt208),.terminal(.t23),.nonterminal(.nt206)]),
  .init (.nt207, []),
  .init (.nt207, [.terminal(.t61)]),
  .init (.nt207, [.terminal(.t58)]),
  .init (.nt208, []),
  .init (.nt208, [.terminal(.t64)]),
  .init (.nt209, []),
  .init (.nt209, [.terminal(.t116)]),
  .init (.nt209, [.terminal(.t117),.nonterminal(.nt210)]),
  .init (.nt209, [.terminal(.t77),.nonterminal(.nt211)]),
  .init (.nt209, [.terminal(.t118),.nonterminal(.nt212)]),
  .init (.nt210, []),
  .init (.nt210, [.terminal(.t0),.terminal(.t23),.terminal(.t1)]),
  .init (.nt211, []),
  .init (.nt211, [.terminal(.t0),.terminal(.t23),.terminal(.t1)]),
  .init (.nt212, []),
  .init (.nt212, [.terminal(.t0),.terminal(.t23),.terminal(.t1)]),
  .init (.nt213, []),
  .init (.nt213, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt213)]),
  .init (.nt214, []),
  .init (.nt214, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt214)]),
  .init (.nt215, []),
  .init (.nt215, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt215)]),
  .init (.nt216, [.terminal(.t121)]),
  .init (.nt216, [.terminal(.t122)]),
  .init (.nt217, []),
  .init (.nt217, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt217)]),
  .init (.nt218, [.terminal(.t23)]),
  .init (.nt218, []),
  .init (.nt219, [.terminal(.t23)]),
  .init (.nt219, []),
  .init (.nt220, []),
  .init (.nt220, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt220)]),
  .init (.nt221, []),
  .init (.nt221, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt221)]),
  .init (.nt222, []),
  .init (.nt222, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt222)]),
  .init (.nt223, []),
  .init (.nt223, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt223)]),
  .init (.nt224, []),
  .init (.nt224, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt224)]),
  .init (.nt225, [.terminal(.t23)]),
  .init (.nt225, []),
  .init (.nt226, []),
  .init (.nt226, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt226)]),
  .init (.nt227, []),
  .init (.nt227, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt227)]),
  .init (.nt228, []),
  .init (.nt228, [.nonterminal(.nt1),.terminal(.t27),.nonterminal(.nt228)]),
  .init (.nt229, []),
  .init (.nt229, [.terminal(.t121)]),
  .init (.nt230, []),
  .init (.nt230, [.nonterminal(.nt46),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt45),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt40),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt41),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt42),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt43),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt44),.nonterminal(.nt230)]),
  .init (.nt230, [.nonterminal(.nt39),.nonterminal(.nt230)]),
  .init (.nt231, []),
  .init (.nt231, [.terminal(.t56),.terminal(.t8)]),
  .init (.nt232, [.terminal(.t59)]),
  .init (.nt232, [.terminal(.t60)]),
  .init (.nt233, []),
  .init (.nt233, [.terminal(.t133),.nonterminal(.nt233)]),
  .init (.nt234, []),
  .init (.nt234, [.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt235, [.terminal(.t59)]),
  .init (.nt235, [.terminal(.t60)]),
  .init (.nt236, []),
  .init (.nt236, [.terminal(.t133),.nonterminal(.nt236)]),
  .init (.nt237, []),
  .init (.nt237, [.terminal(.t80),.nonterminal(.nt12)]),
  .init (.nt238, []),
  .init (.nt238, [.terminal(.t121),.nonterminal(.nt238)]),
  .init (.nt238, [.terminal(.t73),.nonterminal(.nt238)]),
  .init (.nt239, []),
  .init (.nt239, [.nonterminal(.nt46),.nonterminal(.nt239)]),
  .init (.nt239, [.nonterminal(.nt39),.nonterminal(.nt239)]),
  .init (.nt240, []),
  .init (.nt240, [.terminal(.t121)]),
  .init (.nt241, []),
  .init (.nt241, [.nonterminal(.nt46),.nonterminal(.nt241)]),
  .init (.nt241, [.nonterminal(.nt39),.nonterminal(.nt241)]),
  .init (.nt242, []),
  .init (.nt242, [.nonterminal(.nt49),.nonterminal(.nt242)]),
  .init (.nt242, [.nonterminal(.nt50),.nonterminal(.nt242)]),
  .init (.nt242, [.nonterminal(.nt51),.nonterminal(.nt242)]),
  .init (.nt242, [.nonterminal(.nt52),.nonterminal(.nt242)]),
  .init (.nt243, []),
  .init (.nt243, [.terminal(.t8),.nonterminal(.nt243)]),
  .init (.nt244, []),
  .init (.nt244, [.terminal(.t8),.nonterminal(.nt244)]),
  .init (.nt245, []),
  .init (.nt245, [.nonterminal(.nt247),.nonterminal(.nt246)]),
  .init (.nt246, []),
  .init (.nt246, [.terminal(.t56),.nonterminal(.nt247),.nonterminal(.nt246)]),
  .init (.nt247, [.terminal(.t58),.nonterminal(.nt0),.terminal(.t23)]),
  .init (.nt247, [.terminal(.t61),.nonterminal(.nt0),.terminal(.t23)]),
  .init (.nt248, []),
  .init (.nt248, [.terminal(.t58),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt248)]),
  .init (.nt248, [.terminal(.t61),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt248)]),
  .init (.nt249, []),
  .init (.nt249, [.terminal(.t121)]),
  .init (.nt250, []),
  .init (.nt250, [.terminal(.t87),.terminal(.t23),.nonterminal(.nt250)]),
  .init (.nt250, [.nonterminal(.nt39),.nonterminal(.nt250)]),
  .init (.nt251, []),
  .init (.nt251, [.terminal(.t120)]),
  .init (.nt251, [.terminal(.t138)]),
  .init (.nt251, [.terminal(.t139)]),
  .init (.nt252, []),
  .init (.nt252, [.terminal(.t24),.terminal(.t47)]),
  .init (.nt253, []),
  .init (.nt253, [.terminal(.t141)]),
  .init (.nt254, []),
  .init (.nt254, [.nonterminal(.nt46),.nonterminal(.nt254)]),
  .init (.nt254, [.nonterminal(.nt39),.nonterminal(.nt254)]),
  .init (.nt255, []),
  .init (.nt255, [.terminal(.t27),.nonterminal(.nt1),.nonterminal(.nt255)]),
  .init (.nt255, [.terminal(.t43),.nonterminal(.nt0),.nonterminal(.nt256),.terminal(.t42),.nonterminal(.nt255)]),
  .init (.nt256, []),
  .init (.nt256, [.terminal(.t56),.nonterminal(.nt0),.nonterminal(.nt256)]),
  .init (.nt257, []),
  .init (.nt257, [.terminal(.t61)]),
  .init (.nt258, []),
  .init (.nt258, [.terminal(.t24),.nonterminal(.nt0)]),
  .init (.nt259, []),
  .init (.nt259, [.terminal(.t56),.nonterminal(.nt0),.nonterminal(.nt259)]),
  .init (.nt260, []),
  .init (.nt260, [.terminal(.t121)]),
  .init (.nt261, []),
  .init (.nt261, [.nonterminal(.nt46),.nonterminal(.nt261)]),
  .init (.nt262, []),
  .init (.nt262, [.terminal(.t56),.nonterminal(.nt53),.nonterminal(.nt262)]),
  .init (.nt263, [.terminal(.t43)]),
  .init (.nt263, [.terminal(.t42)]),
  .init (.nt264, []),
  .init (.nt264, [.terminal(.t122)]),
  .init (.nt264, [.terminal(.t121)]),
  .init (.nt265, []),
  .init (.nt265, [.nonterminal(.nt46),.nonterminal(.nt265)]),
  .init (.nt265, [.nonterminal(.nt39),.nonterminal(.nt265)]),
  .init (.nt266, []),
  .init (.nt266, [.terminal(.t132),.terminal(.t23),.terminal(.t127),.terminal(.t8),.nonterminal(.nt266)]),
  .init (.nt267, []),
  .init (.nt267, [.terminal(.t122),.nonterminal(.nt267)]),
  .init (.nt267, [.terminal(.t121),.nonterminal(.nt267)]),
  .init (.nt268, []),
  .init (.nt268, [.terminal(.t87),.terminal(.t23),.nonterminal(.nt269),.nonterminal(.nt268)]),
  .init (.nt268, [.nonterminal(.nt39),.nonterminal(.nt268)]),
  .init (.nt269, []),
  .init (.nt269, [.terminal(.t0),.nonterminal(.nt271),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt270),.terminal(.t1)]),
  .init (.nt270, []),
  .init (.nt270, [.terminal(.t56),.nonterminal(.nt271),.nonterminal(.nt0),.terminal(.t23),.nonterminal(.nt270)]),
  .init (.nt271, []),
  .init (.nt271, [.terminal(.t134)]),
  .init (.nt272, []),
  .init (.nt272, [.nonterminal(.nt70),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt71),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt66),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt68),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt67),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt64),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt57),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt56),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt55),.nonterminal(.nt272)]),
  .init (.nt272, [.nonterminal(.nt54),.nonterminal(.nt272)]),
  .init (.nt273, []),
  .init (.nt273, [.nonterminal(.nt58),.nonterminal(.nt273)]),
  .init (.nt274, []),
  .init (.nt274, [.nonterminal(.nt58),.nonterminal(.nt274)]),
  .init (.nt275, []),
  .init (.nt275, [.terminal(.t0),.nonterminal(.nt276),.terminal(.t1)]),
  .init (.nt276, []),
  .init (.nt276, [.terminal(.t49),.nonterminal(.nt60),.nonterminal(.nt276)]),
  .init (.nt277, []),
  .init (.nt277, [.terminal(.t12),.nonterminal(.nt63),.nonterminal(.nt277)]),
  .init (.nt278, []),
  .init (.nt278, [.terminal(.t74),.terminal(.t52)]),
  .init (.nt279, []),
  .init (.nt279, [.terminal(.t57),.terminal(.t23),.nonterminal(.nt279)]),
  .init (.nt279, [.terminal(.t49),.terminal(.t23),.nonterminal(.nt279)]),
  .init (.nt280, [.terminal(.t149),.terminal(.t23)]),
  .init (.nt280, []),
  .init (.nt281, []),
  .init (.nt281, [.terminal(.t56),.nonterminal(.nt65),.nonterminal(.nt281)]),
  .init (.nt282, []),
  .init (.nt282, [.terminal(.t150),.nonterminal(.nt282)]),
  .init (.nt282, [.terminal(.t151),.nonterminal(.nt282)]),
  .init (.nt283, [.terminal(.t74),.terminal(.t152)]),
  .init (.nt283, []),
  .init (.nt284, []),
  .init (.nt284, [.terminal(.t57),.terminal(.t23),.nonterminal(.nt284)]),
  .init (.nt284, [.terminal(.t49),.terminal(.t23),.nonterminal(.nt284)]),
  .init (.nt285, []),
  .init (.nt285, [.terminal(.t149),.terminal(.t23),.nonterminal(.nt285)]),
  .init (.nt285, [.terminal(.t151),.nonterminal(.nt285)]),
  .init (.nt285, [.terminal(.t150),.nonterminal(.nt285)]),
  .init (.nt286, []),
  .init (.nt286, [.terminal(.t49),.nonterminal(.nt60),.nonterminal(.nt286)]),
  .init (.nt286, [.terminal(.t66),.terminal(.t23),.nonterminal(.nt286)]),
  .init (.nt287, []),
  .init (.nt287, [.terminal(.t96),.terminal(.t23),.nonterminal(.nt288)]),
  .init (.nt288, []),
  .init (.nt288, [.terminal(.t56),.terminal(.t23),.nonterminal(.nt288)]),
  .init (.nt289, []),
  .init (.nt289, [.terminal(.t87),.nonterminal(.nt61),.terminal(.t24),.nonterminal(.nt290),.nonterminal(.nt289)]),
  .init (.nt290, []),
  .init (.nt290, [.nonterminal(.nt58),.nonterminal(.nt290)]),
  .init (.nt291, []),
  .init (.nt291, [.nonterminal(.nt58),.nonterminal(.nt291)]),
  .init (.nt292, []),
  .init (.nt292, [.nonterminal(.nt58),.nonterminal(.nt292)]),
  .init (.nt293, []),
  .init (.nt293, [.nonterminal(.nt59),.nonterminal(.nt293)]),
  .init (.nt294, []),
  .init (.nt294, [.terminal(.t158),.terminal(.t23),.terminal(.t99),.terminal(.t23),.terminal(.t156),.nonterminal(.nt294)]),
  .init (.nt295, [.terminal(.t152)]),
  .init (.nt295, [.terminal(.t96),.terminal(.t23)]),
  .init (.nt296, []),
  .init (.nt296, [.nonterminal(.nt70),.nonterminal(.nt296)]),
  .init (.nt296, [.nonterminal(.nt71),.nonterminal(.nt296)]),
  .init (.nt297, []),
  .init (.nt297, [.terminal(.t151),.nonterminal(.nt297)]),
  .init (.nt297, [.terminal(.t150),.nonterminal(.nt297)]),
  .init (.nt297, [.terminal(.t159),.nonterminal(.nt297)]),
  .init (.nt298, [.terminal(.t15),.terminal(.t8),.terminal(.t24),.terminal(.t23)]),
  .init (.nt298, [.terminal(.t74),.terminal(.t8)]),
  .init (.nt299, []),
  .init (.nt299, [.nonterminal(.nt72),.nonterminal(.nt299)]),
  .init (.nt300, []),
  .init (.nt300, [.terminal(.t156),.nonterminal(.nt301)]),
  .init (.nt301, [.terminal(.t8)]),
  .init (.nt301, [.terminal(.t50)]),
  .init (.nt302, []),
  .init (.nt302, [.terminal(.t162),.terminal(.t8),.terminal(.t146),.terminal(.t99),.terminal(.t8),.nonterminal(.nt302)]),
  .init (.nt302, [.nonterminal(.nt75),.nonterminal(.nt302)]),
  .init (.nt302, [.nonterminal(.nt74),.nonterminal(.nt302)]),
  .init (.nt302, [.nonterminal(.nt73),.nonterminal(.nt302)]),
  .init (.nt303, []),
  .init (.nt303, [.terminal(.t98),.nonterminal(.nt304),.terminal(.t152),.nonterminal(.nt306),.nonterminal(.nt305),.nonterminal(.nt303)]),
  .init (.nt303, [.terminal(.t23),.terminal(.t8),.terminal(.t24),.terminal(.t8),.nonterminal(.nt307),.nonterminal(.nt303)]),
  .init (.nt303, [.terminal(.t23),.terminal(.t24),.terminal(.t8),.nonterminal(.nt303)]),
  .init (.nt304, []),
  .init (.nt304, [.terminal(.t29)]),
  .init (.nt305, []),
  .init (.nt305, [.terminal(.t56),.terminal(.t152),.nonterminal(.nt306),.nonterminal(.nt305)]),
  .init (.nt306, []),
  .init (.nt306, [.terminal(.t6)]),
  .init (.nt306, [.terminal(.t0),.terminal(.t50),.terminal(.t56),.terminal(.t50),.terminal(.t1)]),
  .init (.nt307, []),
  .init (.nt307, [.terminal(.t8),.nonterminal(.nt307)]),
  .init (.nt308, []),
  .init (.nt308, [.terminal(.t8),.nonterminal(.nt308)]),
  .init (.nt309, []),
  .init (.nt309, [.terminal(.t0),.terminal(.t23),.terminal(.t1)]),
  .init (.nt310, []),
  .init (.nt310, [.terminal(.t165)]),
  .init (.nt311, []),
  .init (.nt311, [.nonterminal(.nt76),.nonterminal(.nt311)]),
  .init (.nt311, [.nonterminal(.nt78),.nonterminal(.nt311)]),
  .init (.nt312, []),
  .init (.nt312, [.nonterminal(.nt76),.nonterminal(.nt312)]),
  .init (.nt312, [.nonterminal(.nt78),.nonterminal(.nt312)]),
  .init (.nt313, []),
  .init (.nt313, [.terminal(.t98),.terminal(.t23),.nonterminal(.nt17),.nonterminal(.nt313)]),
  .init (.nt314, []),
  .init (.nt314, [.terminal(.t98),.terminal(.t23),.nonterminal(.nt77),.nonterminal(.nt314)]),
  .init (.nt315, []),
  .init (.nt315, [.nonterminal(.nt317),.nonterminal(.nt316)]),
  .init (.nt316, []),
  .init (.nt316, [.nonterminal(.nt318),.nonterminal(.nt317),.nonterminal(.nt316)]),
  .init (.nt317, [.nonterminal(.nt26)]),
  .init (.nt317, [.nonterminal(.nt80)]),
  .init (.nt318, [.terminal(.t69)]),
  .init (.nt318, []),
  .init (.nt319, []),
  .init (.nt319, [.terminal(.t89),.nonterminal(.nt79),.nonterminal(.nt319)]),
  .init (.nt320, []),
  .init (.nt320, [.terminal(.t167),.nonterminal(.nt79),.nonterminal(.nt320)]),
  .init (.nt321, []),
  .init (.nt321, [.terminal(.t100),.nonterminal(.nt24),.nonterminal(.nt24)]),
  .init (.nt322, []),
  .init (.nt322, [.terminal(.t146),.terminal(.t0),.terminal(.t23),.nonterminal(.nt324),.nonterminal(.nt323),.terminal(.t1)]),
  .init (.nt323, []),
  .init (.nt323, [.terminal(.t56),.terminal(.t23),.nonterminal(.nt324),.nonterminal(.nt323)]),
  .init (.nt324, []),
  .init (.nt324, [.terminal(.t8)]),
  .init (.nt325, []),
  .init (.nt325, [.terminal(.t100),.nonterminal(.nt24)]),
  .init (.nt326, []),
  .init (.nt326, [.terminal(.t146)]),
  .init (.nt327, []),
  .init (.nt327, [.terminal(.t165)]),
  .init (.nt328, []),
  .init (.nt328, [.terminal(.t164),.terminal(.t23),.nonterminal(.nt328)]),
  .init (.nt329, []),
  .init (.nt329, [.terminal(.t98),.terminal(.t23),.nonterminal(.nt82),.nonterminal(.nt329)]),
  .init (.nt330, []),
  .init (.nt330, [.terminal(.t64),.terminal(.t166),.nonterminal(.nt330)]),
  .init (.nt331, []),
  .init (.nt331, [.nonterminal(.nt83),.nonterminal(.nt332)]),
  .init (.nt332, []),
  .init (.nt332, [.terminal(.t56),.nonterminal(.nt83),.nonterminal(.nt332)]),
  .init (.nt333, []),
  .init (.nt333, [.terminal(.t64)]),
  .init (.nt334, []),
  .init (.nt334, [.terminal(.t64)]),
  .init (.nt335, []),
  .init (.nt335, [.terminal(.t64)]),
  .init (.nt336, []),
  .init (.nt336, [.terminal(.t64)]),
  .init (.nt337, []),
  .init (.nt337, [.terminal(.t64)]),
  .init (.nt338, []),
  .init (.nt338, [.terminal(.t64)]),
  .init (.nt339, []),
  .init (.nt339, [.terminal(.t97),.terminal(.t23)]),
  .init (.nt340, []),
  .init (.nt340, [.terminal(.t47)]),
  .init (.nt341, []),
  .init (.nt341, [.terminal(.t64)]),
  .init (.nt342, [.nonterminal(.nt34),.terminal(.t168)]),
]

//--------------------------------------------------------------------------------------------------

