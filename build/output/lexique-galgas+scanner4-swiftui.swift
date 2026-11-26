//--- START OF USER ZONE 1


//--- END OF USER ZONE 1
//--------------------------------------------------------------------------------------------------
//   LEXIQUE galgasScanner4
//--------------------------------------------------------------------------------------------------

import SwiftUI

//--------------------------------------------------------------------------------------------------

class ScannerFor_galgasScanner4 : AbstractScanner {

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private let mDebug = false
  private let mVerboseDebug = false
  private var mTokenArray = [LexicalToken] ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func popUpDefinitionList () -> [[UInt16]] {
    return gPopUpData_galgasScanner4
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final override func lineComment () -> String? {
    return gLineComment_galgasScanner4
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func selectionRange (forProposedRange inProposedSelectionRange : NSRange,
                                granularity inGranularity : NSSelectionGranularity,
                                nsTextViewComputedRange inTextViewComputedRange : NSRange) -> NSRange {
    var result = inTextViewComputedRange
    switch inGranularity {
    case .selectByCharacter :
      ()
    case .selectByWord :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found, self.atomicSelectionFor (token: token.tokenCode) {
          result = tokenRange
        }
      }
    case .selectByParagraph :
      var found = false
      var idx = 0
      while idx < self.mTokenArray.count, !found {
        let token = self.mTokenArray [idx]
        idx += 1
        let tokenRange = token.range
        found = ((tokenRange.location + tokenRange.length) > inProposedSelectionRange.location)
           && (tokenRange.location <= inProposedSelectionRange.location)
        if found {
          result = tokenRange
        }
      }
    @unknown default:
      ()
    }
    return result
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Scanner
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  private var mLexicalAttribute_bigintValue : String = ""
  private var mLexicalAttribute_charValue : UInt32 = 0
  private var mLexicalAttribute_floatValue : Double = 0.0
  private var mLexicalAttribute_tokenString : String = ""
  private var mLexicalAttribute_uint32value : UInt32 = 0

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func lexiqueIdentifier () -> String {
    return galgasScanner4_lexiqueIdentifier ()
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func isTemplateLexique () -> Bool {
    return false
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func terminalVocabularyCount () -> Int {
    return 172
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func styleIndexFor (token inTokenIndex : UInt16) -> UInt8 {
    let kTerminalSymbolStyles : [UInt8] = [
      0, // Default
      0, // 1 : galgasScanner4_1_identifier
      7, // 2 : galgasScanner4_1_double_2E_xxx
      6, // 3 : galgasScanner4_1_literalInt
      8, // 4 : galgasScanner4_1__27_char_27_
      4, // 5 : galgasScanner4_1__24_terminal_24_
      12, // 6 : galgasScanner4_1_comment
      12, // 7 : galgasScanner4_1_commentMark
      10, // 8 : galgasScanner4_1__40_type
      3, // 9 : galgasScanner4_1__3F_selector_3A_
      2, // 10 : galgasScanner4_1__3F_
      3, // 11 : galgasScanner4_1__3F__21_selector_3A_
      2, // 12 : galgasScanner4_1__3F__21_
      3, // 13 : galgasScanner4_1__21_selector_3A_
      2, // 14 : galgasScanner4_1__21_
      3, // 15 : galgasScanner4_1__21__3F_selector_3A_
      2, // 16 : galgasScanner4_1__21__3F_
      2, // 17 : galgasScanner4_1__3C_
      2, // 18 : galgasScanner4_1__3C__3D_
      2, // 19 : galgasScanner4_1__3C__3C_
      5, // 20 : galgasScanner4_1__3C_non_5F_terminal_3E_
      9, // 21 : galgasScanner4_1__22_string_22_
      1, // 22 : galgasScanner4_1_abstract
      1, // 23 : galgasScanner4_1_after
      1, // 24 : galgasScanner4_1_as
      1, // 25 : galgasScanner4_1_before
      1, // 26 : galgasScanner4_1_between
      1, // 27 : galgasScanner4_1_block
      1, // 28 : galgasScanner4_1_optionset
      1, // 29 : galgasScanner4_1_case
      1, // 30 : galgasScanner4_1_class
      1, // 31 : galgasScanner4_1_default
      1, // 32 : galgasScanner4_1_do
      1, // 33 : galgasScanner4_1_drop
      1, // 34 : galgasScanner4_1_else
      1, // 35 : galgasScanner4_1_elsif
      1, // 36 : galgasScanner4_1_end
      1, // 37 : galgasScanner4_1_enum
      1, // 38 : galgasScanner4_1_error
      1, // 39 : galgasScanner4_1_extension
      1, // 40 : galgasScanner4_1_extern
      1, // 41 : galgasScanner4_1_false
      1, // 42 : galgasScanner4_1_fileprivate
      1, // 43 : galgasScanner4_1_filewrapper
      1, // 44 : galgasScanner4_1_final
      1, // 45 : galgasScanner4_1_for
      1, // 46 : galgasScanner4_1_fixit
      1, // 47 : galgasScanner4_1_func
      1, // 48 : galgasScanner4_1_grammar
      1, // 49 : galgasScanner4_1_graph
      1, // 50 : galgasScanner4_1_guard
      1, // 51 : galgasScanner4_1_gui
      1, // 52 : galgasScanner4_1_if
      1, // 53 : galgasScanner4_1_in
      1, // 54 : galgasScanner4_1_indexing
      1, // 55 : galgasScanner4_1_init
      1, // 56 : galgasScanner4_1_is
      1, // 57 : galgasScanner4_1_label
      1, // 58 : galgasScanner4_1_let
      1, // 59 : galgasScanner4_1_lexique
      1, // 60 : galgasScanner4_1_list
      1, // 61 : galgasScanner4_1_loop
      1, // 62 : galgasScanner4_1_map
      1, // 63 : galgasScanner4_1_mutating
      1, // 64 : galgasScanner4_1_nil
      1, // 65 : galgasScanner4_1_not
      1, // 66 : galgasScanner4_1_on
      1, // 67 : galgasScanner4_1_or
      1, // 68 : galgasScanner4_1_override
      1, // 69 : galgasScanner4_1_package
      1, // 70 : galgasScanner4_1_public
      1, // 71 : galgasScanner4_1_protected
      1, // 72 : galgasScanner4_1_private
      1, // 73 : galgasScanner4_1_proc
      1, // 74 : galgasScanner4_1_project
      1, // 75 : galgasScanner4_1_repeat
      1, // 76 : galgasScanner4_1_rewind
      1, // 77 : galgasScanner4_1_rule
      1, // 78 : galgasScanner4_1_select
      1, // 79 : galgasScanner4_1_self
      1, // 80 : galgasScanner4_1_send
      1, // 81 : galgasScanner4_1_sortedarray
      1, // 82 : galgasScanner4_1_spoil
      1, // 83 : galgasScanner4_1_super
      1, // 84 : galgasScanner4_1_struct
      1, // 85 : galgasScanner4_1_style
      1, // 86 : galgasScanner4_1_switch
      1, // 87 : galgasScanner4_1_syntax
      1, // 88 : galgasScanner4_1_tag
      1, // 89 : galgasScanner4_1_template
      1, // 90 : galgasScanner4_1_then
      1, // 91 : galgasScanner4_1_true
      1, // 92 : galgasScanner4_1_var
      1, // 93 : galgasScanner4_1_warning
      1, // 94 : galgasScanner4_1_while
      1, // 95 : galgasScanner4_1_with
      11, // 96 : galgasScanner4_1__23_binaryFileExtension
      11, // 97 : galgasScanner4_1__23_clonable
      11, // 98 : galgasScanner4_1__23_comparable
      11, // 99 : galgasScanner4_1__23_equatable
      11, // 100 : galgasScanner4_1__23_errorMessage
      11, // 101 : galgasScanner4_1__23_from
      11, // 102 : galgasScanner4_1__23_generatedInSeparateFile
      11, // 103 : galgasScanner4_1__23_initArgLabel
      11, // 104 : galgasScanner4_1__23_insertAfter
      11, // 105 : galgasScanner4_1__23_insertBefore
      11, // 106 : galgasScanner4_1__23_insertOrReplaceSetter
      11, // 107 : galgasScanner4_1__23_insertSetter
      11, // 108 : galgasScanner4_1__23_nonAtomicSelection
      11, // 109 : galgasScanner4_1__23_preserved
      11, // 110 : galgasScanner4_1__23_replaceBy
      11, // 111 : galgasScanner4_1__23_remove
      11, // 112 : galgasScanner4_1__23_removeSetter
      11, // 113 : galgasScanner4_1__23_replaceSetter
      11, // 114 : galgasScanner4_1__23_searchMethod
      11, // 115 : galgasScanner4_1__23_searchSubscript
      11, // 116 : galgasScanner4_1__23_searchString
      11, // 117 : galgasScanner4_1__23_template
      11, // 118 : galgasScanner4_1__23_templateDelimiter
      11, // 119 : galgasScanner4_1__23_templateEndMark
      11, // 120 : galgasScanner4_1__23_templateReplacement
      11, // 121 : galgasScanner4_1__23_textFileExtension
      11, // 122 : galgasScanner4_1__23_translatable
      11, // 123 : galgasScanner4_1__23_unused
      11, // 124 : galgasScanner4_1__23_usefull
      2, // 125 : galgasScanner4_1__2A_
      2, // 126 : galgasScanner4_1__2C_
      2, // 127 : galgasScanner4_1__2B_
      2, // 128 : galgasScanner4_1__26__2B_
      2, // 129 : galgasScanner4_1__26__2D_
      2, // 130 : galgasScanner4_1__26__2A_
      2, // 131 : galgasScanner4_1__26__2F_
      2, // 132 : galgasScanner4_1__3E_
      2, // 133 : galgasScanner4_1__3B_
      2, // 134 : galgasScanner4_1__3A_
      2, // 135 : galgasScanner4_1__3A__3E_
      2, // 136 : galgasScanner4_1__2D_
      2, // 137 : galgasScanner4_1__28_
      2, // 138 : galgasScanner4_1__29_
      2, // 139 : galgasScanner4_1__2D__3E_
      2, // 140 : galgasScanner4_1__3D__3D_
      2, // 141 : galgasScanner4_1__3D_
      2, // 142 : galgasScanner4_1__26__26_
      2, // 143 : galgasScanner4_1__25_
      2, // 144 : galgasScanner4_1__5B_
      2, // 145 : galgasScanner4_1__5D_
      2, // 146 : galgasScanner4_1__2B__2B__3D_
      2, // 147 : galgasScanner4_1__2E_
      2, // 148 : galgasScanner4_1__40__28_
      2, // 149 : galgasScanner4_1__2E__2E__2E_
      2, // 150 : galgasScanner4_1__2E__2E__3C_
      2, // 151 : galgasScanner4_1__2B__3D_
      2, // 152 : galgasScanner4_1__2D__3D_
      2, // 153 : galgasScanner4_1__2A__3D_
      2, // 154 : galgasScanner4_1__2F__3D_
      2, // 155 : galgasScanner4_1__26__3D_
      2, // 156 : galgasScanner4_1__7C__3D_
      2, // 157 : galgasScanner4_1__5E__3D_
      2, // 158 : galgasScanner4_1__2F_
      2, // 159 : galgasScanner4_1__21__3D_
      2, // 160 : galgasScanner4_1__3E__3D_
      2, // 161 : galgasScanner4_1__26_
      2, // 162 : galgasScanner4_1__7B_
      2, // 163 : galgasScanner4_1__7D_
      2, // 164 : galgasScanner4_1__7C__7C_
      2, // 165 : galgasScanner4_1__7C_
      2, // 166 : galgasScanner4_1__5E_
      2, // 167 : galgasScanner4_1__3E__3E_
      2, // 168 : galgasScanner4_1__7E_
      2, // 169 : galgasScanner4_1__3D__3D__3D_
      2, // 170 : galgasScanner4_1__21__3D__3D_
      2, // 171 : galgasScanner4_1__3F__5E_
      2, // 172 : galgasScanner4_1__21__5E_
      13, // 173 : galgasScanner4_2_ERROR
      14  // 174 : galgasScanner4_2_TEMPLATE
    ]
    return kTerminalSymbolStyles [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func atomicSelectionFor (token inTokenIndex : UInt16) -> Bool {
    let kTerminalAtomicSelection : [Bool] = [
      false, // Default
      true, // 1 : galgasScanner4_1_identifier
      true, // 2 : galgasScanner4_1_double_2E_xxx
      true, // 3 : galgasScanner4_1_literalInt
      true, // 4 : galgasScanner4_1__27_char_27_
      true, // 5 : galgasScanner4_1__24_terminal_24_
      false, // 6 : galgasScanner4_1_comment
      false, // 7 : galgasScanner4_1_commentMark
      true, // 8 : galgasScanner4_1__40_type
      true, // 9 : galgasScanner4_1__3F_selector_3A_
      true, // 10 : galgasScanner4_1__3F_
      true, // 11 : galgasScanner4_1__3F__21_selector_3A_
      true, // 12 : galgasScanner4_1__3F__21_
      true, // 13 : galgasScanner4_1__21_selector_3A_
      true, // 14 : galgasScanner4_1__21_
      true, // 15 : galgasScanner4_1__21__3F_selector_3A_
      true, // 16 : galgasScanner4_1__21__3F_
      true, // 17 : galgasScanner4_1__3C_
      true, // 18 : galgasScanner4_1__3C__3D_
      true, // 19 : galgasScanner4_1__3C__3C_
      true, // 20 : galgasScanner4_1__3C_non_5F_terminal_3E_
      false, // 21 : galgasScanner4_1__22_string_22_
      true, // 22 : galgasScanner4_1_abstract
      true, // 23 : galgasScanner4_1_after
      true, // 24 : galgasScanner4_1_as
      true, // 25 : galgasScanner4_1_before
      true, // 26 : galgasScanner4_1_between
      true, // 27 : galgasScanner4_1_block
      true, // 28 : galgasScanner4_1_optionset
      true, // 29 : galgasScanner4_1_case
      true, // 30 : galgasScanner4_1_class
      true, // 31 : galgasScanner4_1_default
      true, // 32 : galgasScanner4_1_do
      true, // 33 : galgasScanner4_1_drop
      true, // 34 : galgasScanner4_1_else
      true, // 35 : galgasScanner4_1_elsif
      true, // 36 : galgasScanner4_1_end
      true, // 37 : galgasScanner4_1_enum
      true, // 38 : galgasScanner4_1_error
      true, // 39 : galgasScanner4_1_extension
      true, // 40 : galgasScanner4_1_extern
      true, // 41 : galgasScanner4_1_false
      true, // 42 : galgasScanner4_1_fileprivate
      true, // 43 : galgasScanner4_1_filewrapper
      true, // 44 : galgasScanner4_1_final
      true, // 45 : galgasScanner4_1_for
      true, // 46 : galgasScanner4_1_fixit
      true, // 47 : galgasScanner4_1_func
      true, // 48 : galgasScanner4_1_grammar
      true, // 49 : galgasScanner4_1_graph
      true, // 50 : galgasScanner4_1_guard
      true, // 51 : galgasScanner4_1_gui
      true, // 52 : galgasScanner4_1_if
      true, // 53 : galgasScanner4_1_in
      true, // 54 : galgasScanner4_1_indexing
      true, // 55 : galgasScanner4_1_init
      true, // 56 : galgasScanner4_1_is
      true, // 57 : galgasScanner4_1_label
      true, // 58 : galgasScanner4_1_let
      true, // 59 : galgasScanner4_1_lexique
      true, // 60 : galgasScanner4_1_list
      true, // 61 : galgasScanner4_1_loop
      true, // 62 : galgasScanner4_1_map
      true, // 63 : galgasScanner4_1_mutating
      true, // 64 : galgasScanner4_1_nil
      true, // 65 : galgasScanner4_1_not
      true, // 66 : galgasScanner4_1_on
      true, // 67 : galgasScanner4_1_or
      true, // 68 : galgasScanner4_1_override
      true, // 69 : galgasScanner4_1_package
      true, // 70 : galgasScanner4_1_public
      true, // 71 : galgasScanner4_1_protected
      true, // 72 : galgasScanner4_1_private
      true, // 73 : galgasScanner4_1_proc
      true, // 74 : galgasScanner4_1_project
      true, // 75 : galgasScanner4_1_repeat
      true, // 76 : galgasScanner4_1_rewind
      true, // 77 : galgasScanner4_1_rule
      true, // 78 : galgasScanner4_1_select
      true, // 79 : galgasScanner4_1_self
      true, // 80 : galgasScanner4_1_send
      true, // 81 : galgasScanner4_1_sortedarray
      true, // 82 : galgasScanner4_1_spoil
      true, // 83 : galgasScanner4_1_super
      true, // 84 : galgasScanner4_1_struct
      true, // 85 : galgasScanner4_1_style
      true, // 86 : galgasScanner4_1_switch
      true, // 87 : galgasScanner4_1_syntax
      true, // 88 : galgasScanner4_1_tag
      true, // 89 : galgasScanner4_1_template
      true, // 90 : galgasScanner4_1_then
      true, // 91 : galgasScanner4_1_true
      true, // 92 : galgasScanner4_1_var
      true, // 93 : galgasScanner4_1_warning
      true, // 94 : galgasScanner4_1_while
      true, // 95 : galgasScanner4_1_with
      true, // 96 : galgasScanner4_1__23_binaryFileExtension
      true, // 97 : galgasScanner4_1__23_clonable
      true, // 98 : galgasScanner4_1__23_comparable
      true, // 99 : galgasScanner4_1__23_equatable
      true, // 100 : galgasScanner4_1__23_errorMessage
      true, // 101 : galgasScanner4_1__23_from
      true, // 102 : galgasScanner4_1__23_generatedInSeparateFile
      true, // 103 : galgasScanner4_1__23_initArgLabel
      true, // 104 : galgasScanner4_1__23_insertAfter
      true, // 105 : galgasScanner4_1__23_insertBefore
      true, // 106 : galgasScanner4_1__23_insertOrReplaceSetter
      true, // 107 : galgasScanner4_1__23_insertSetter
      true, // 108 : galgasScanner4_1__23_nonAtomicSelection
      true, // 109 : galgasScanner4_1__23_preserved
      true, // 110 : galgasScanner4_1__23_replaceBy
      true, // 111 : galgasScanner4_1__23_remove
      true, // 112 : galgasScanner4_1__23_removeSetter
      true, // 113 : galgasScanner4_1__23_replaceSetter
      true, // 114 : galgasScanner4_1__23_searchMethod
      true, // 115 : galgasScanner4_1__23_searchSubscript
      true, // 116 : galgasScanner4_1__23_searchString
      true, // 117 : galgasScanner4_1__23_template
      true, // 118 : galgasScanner4_1__23_templateDelimiter
      true, // 119 : galgasScanner4_1__23_templateEndMark
      true, // 120 : galgasScanner4_1__23_templateReplacement
      true, // 121 : galgasScanner4_1__23_textFileExtension
      true, // 122 : galgasScanner4_1__23_translatable
      true, // 123 : galgasScanner4_1__23_unused
      true, // 124 : galgasScanner4_1__23_usefull
      true, // 125 : galgasScanner4_1__2A_
      true, // 126 : galgasScanner4_1__2C_
      true, // 127 : galgasScanner4_1__2B_
      true, // 128 : galgasScanner4_1__26__2B_
      true, // 129 : galgasScanner4_1__26__2D_
      true, // 130 : galgasScanner4_1__26__2A_
      true, // 131 : galgasScanner4_1__26__2F_
      true, // 132 : galgasScanner4_1__3E_
      true, // 133 : galgasScanner4_1__3B_
      true, // 134 : galgasScanner4_1__3A_
      true, // 135 : galgasScanner4_1__3A__3E_
      true, // 136 : galgasScanner4_1__2D_
      true, // 137 : galgasScanner4_1__28_
      true, // 138 : galgasScanner4_1__29_
      true, // 139 : galgasScanner4_1__2D__3E_
      true, // 140 : galgasScanner4_1__3D__3D_
      true, // 141 : galgasScanner4_1__3D_
      true, // 142 : galgasScanner4_1__26__26_
      true, // 143 : galgasScanner4_1__25_
      true, // 144 : galgasScanner4_1__5B_
      true, // 145 : galgasScanner4_1__5D_
      true, // 146 : galgasScanner4_1__2B__2B__3D_
      true, // 147 : galgasScanner4_1__2E_
      true, // 148 : galgasScanner4_1__40__28_
      true, // 149 : galgasScanner4_1__2E__2E__2E_
      true, // 150 : galgasScanner4_1__2E__2E__3C_
      true, // 151 : galgasScanner4_1__2B__3D_
      true, // 152 : galgasScanner4_1__2D__3D_
      true, // 153 : galgasScanner4_1__2A__3D_
      true, // 154 : galgasScanner4_1__2F__3D_
      true, // 155 : galgasScanner4_1__26__3D_
      true, // 156 : galgasScanner4_1__7C__3D_
      true, // 157 : galgasScanner4_1__5E__3D_
      true, // 158 : galgasScanner4_1__2F_
      true, // 159 : galgasScanner4_1__21__3D_
      true, // 160 : galgasScanner4_1__3E__3D_
      true, // 161 : galgasScanner4_1__26_
      true, // 162 : galgasScanner4_1__7B_
      true, // 163 : galgasScanner4_1__7D_
      true, // 164 : galgasScanner4_1__7C__7C_
      true, // 165 : galgasScanner4_1__7C_
      true, // 166 : galgasScanner4_1__5E_
      true, // 167 : galgasScanner4_1__3E__3E_
      true, // 168 : galgasScanner4_1__7E_
      true, // 169 : galgasScanner4_1__3D__3D__3D_
      true, // 170 : galgasScanner4_1__21__3D__3D_
      true, // 171 : galgasScanner4_1__3F__5E_
      true, // 172 : galgasScanner4_1__21__5E_
      false, // 173 : galgasScanner4_2_ERROR
      false  // 174 : galgasScanner4_2_TEMPLATE
    ]
    return kTerminalAtomicSelection [Int (inTokenIndex)]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func indexingTitles () -> [String] {
    return [
      "Class Definition" /* classDefinition */,
      "Enum Definition" /* enumDefinition */,
      "Struct Definition" /* structDefinition */,
      "Map Definition" /* mapDefinition */,
      "Dictionary Definition" /* dictionaryDefinition */,
      "Extern Type Definition" /* externTypeDefinition */,
      "Filewrapper Definition" /* filewrapperDefinition */,
      "Filewrapper Reference" /* filewrapperReference */,
      "Graph Definition" /* graphDefinition */,
      "Class Reference as Superclass" /* classReferencedAsSuperClass */,
      "Type reference in Constructor" /* typeReferenceInConstructor */,
      "Type reference in Type Method" /* typeReferenceInTypeMethod */,
      "Routine Definition" /* routineDefinition */,
      "Routine Call" /* routineCall */,
      "Function Definition" /* functionDefinition */,
      "Function Call" /* functionCall */,
      "Terminal Declaration" /* terminalDeclaration */,
      "Terminal Reference" /* terminalReference */,
      "Rule Definition" /* ruleDefinition */,
      "Rule Reference" /* ruleReference */,
      "Abstract Extension Setter Definition" /* abstractExtensionSetterDefinition */,
      "Abstract Extension Setter Definition" /* typeReferenceAbstractExtensionSetter */,
      "Override Abstract Extension Setter Definition" /* overrideabstractExtensionSetterDefinition */,
      "Extension Setter Definition" /* extensionSetterDefinition */,
      "Extension Setter Definition" /* typeReferenceExtensionSetter */,
      "Override Extension Setter Definition" /* overrideExtensionSetterDefinition */,
      "Override Extension Setter Definition" /* typeReferenceOverrideExtensionSetterDefinition */,
      "Override Abstract Extension Setter Definition" /* typeReferenceOverrideAbstractExtensionSetter */,
      "Abstract Extension Method Definition" /* abstractExtensionMethodDefinition */,
      "Abstract Extension Method Definition" /* typeReferenceAbstractExtensionMethod */,
      "Override Abstract Extension Method Definition" /* overrideAbstractExtensionMethodDefinition */,
      "Extension Method Definition" /* extensionMethodDefinition */,
      "Extension Method Definition" /* typeReferenceExtensionMethod */,
      "Override Extension Method Definition" /* overrideExtensionMethodDefinition */,
      "Override Extension Method Definition" /* typeReferenceOverrideExtensionMethodDefinition */,
      "Override Abstract Extension Method Definition" /* typeReferenceOverrideAbstractExtensionMethod */,
      "Abstract Extension Getter Definition" /* abstractExtensionGetterDefinition */,
      "Abstract Extension Getter Definition" /* typeReferenceAbstractExtensionGetter */,
      "Override Abstract Extension Getter Definition" /* overrideAbstractExtensionGetterDefinition */,
      "Override Abstract Extension Getter Definition" /* typeReferenceOverrideAbstractExtensionGetter */,
      "Extension Getter Definition" /* extensionGetterDefinition */,
      "Extension Getter Definition" /* typeReferenceExtensionGetter */,
      "Override Extension Getter Definition" /* overrideExtensionGetterDefinition */,
      "Override Extension Getter Definition" /* typeReferenceOverrideExtensionGetter */,
      "Option Component Definition" /* optionComponentDefinition */,
      "Option Component Reference" /* optionComponentReference */,
      "Grammar Component Definition" /* grammarComponentDefinition */,
      "Grammar Component Reference" /* grammarComponentReference */,
      "Indexing Name Definition" /* indexingNameDefinition */,
      "Indexing Name Reference" /* indexingNameReference */
    ]
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  final var mLexicalStyleSnapShot = LexicalStyleSnapShot ()

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalColoringAfterUserDefaultChange (textStorage inTextStorage : NSTextStorage) {
    if self.mDebug { Swift.print ("performLexicalColoringAfterUserDefaultChange") }
    let start = Date ()
    if stylesDidChange (&self.mLexicalStyleSnapShot) {
      let nsString = inTextStorage.string as NSString
      let fullRange = NSRange (location: 0, length: nsString.length)
    //---- Apply default attributes
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mLexicalStyleSnapShot.mFont.nsFont
      inTextStorage.font = defaultFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLexicalStyleSnapShot.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mLexicalStyleSnapShot.mDefaultColor),
        .paragraphStyle : ps
      ]
      inTextStorage.setAttributes (defaultAttributes, range: fullRange)
    //--- Apply styles
      for token in self.mTokenArray {
        let idx = Int (self.styleIndexFor (token: token.tokenCode))
        if idx > 0, idx < (self.mLexicalStyleSnapShot.mAttributeArray.count - 1),
           let attributes = self.mLexicalStyleSnapShot.mAttributeArray [idx - 1] {
          inTextStorage.addAttributes (attributes, range: token.range)
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  done: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  override func performLexicalAnalysisAndColoring (textStorage inTextStorage : NSTextStorage,
                                                   editedRange inEditedRange : NSRange,
                                                   changeInLength inDelta : Int,
                                                   popMenuItems ioPopupMenuItems : inout [IdentifiableAttributedString]) {
    if self.mDebug { Swift.print ("performLexicalAnalysisAndColoring \(inEditedRange), delta \(inDelta)") }
    let nsString = inTextStorage.string as NSString
  //---
    var savedTokenCount = 0
    var found = false
    while savedTokenCount < self.mTokenArray.count, !found {
      if self.mTokenArray [savedTokenCount].range.upperBound < inEditedRange.location {
        savedTokenCount += 1
      }else{
        found = true
      }
    }
    if self.mDebug { Swift.print ("  savedTokenCount \(savedTokenCount), currently \(self.mTokenArray.count) tokens") }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end: \(self.mTokenArray.count) tokens") }
  //--- Translater les tokens suivants
    var i = savedTokenCount + 1
    while i < self.mTokenArray.count {
      let token = self.mTokenArray [i]
      let newToken = LexicalToken (
        range: NSRange (location: token.range.location + inDelta, length: token.range.length),
        tokenCode: token.tokenCode,
        templateDelimiterIndex: token.templateDelimiterIndex
      )
      self.mTokenArray [i] = newToken
      i += 1
    }
  //--- Eliminate tokens beyond end of source string
    while let lastToken = self.mTokenArray.last, lastToken.range.upperBound > nsString.length {
      if self.mVerboseDebug { Swift.print ("Remove last token \(lastToken.range), beyond end") }
      _ = self.mTokenArray.removeLast ()
    }
    if self.mDebug { Swift.print ("  Eliminate token beyond end, after delta correction: \(self.mTokenArray.count) tokens") }
  //--- Perform lexical analysis
    let start = Date ()
    if savedTokenCount == 0 {
      self.resetScannerLocation (withString: nsString)
    }else{
      self.resetScanner (
        withString: nsString,
        location: self.mTokenArray [savedTokenCount-1].range.upperBound,
        templateDelimiterIndex : self.mTokenArray [savedTokenCount-1].templateDelimiterIndex
      )
    }
    if self.mDebug { Swift.print ("  Scanning start location: \(self.currentLocation)") }
    var stop = false
    var insertionIndex = savedTokenCount
    while self.currentLocation < nsString.length, !stop {
      let token : LexicalToken = self.parseLexicalTokenForLexicalColoring ()
      if token.tokenCode > 0 { // For eliminating separators
        if self.mVerboseDebug { Swift.print ("  -> new token \(token.range) '\(nsString.substring (with: token.range))'") }
      //--- Eliminate previous tokens before new token location
        if insertionIndex < self.mTokenArray.count,
              self.mTokenArray [insertionIndex] == token,
              token.range.location > inEditedRange.upperBound {
          if self.mVerboseDebug { Swift.print ("    stop at \(insertionIndex)") }
          stop = true
        }else{
          while insertionIndex < self.mTokenArray.count,
                self.mTokenArray [insertionIndex].range.lowerBound <= token.range.location {
            if self.mVerboseDebug { Swift.print ("    remove token \(self.mTokenArray [insertionIndex].range) at \(insertionIndex)") }
            self.mTokenArray.remove (at: insertionIndex)
          }
          if insertionIndex == self.mTokenArray.count {
            if self.mVerboseDebug { Swift.print ("    append token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.append (token)
            insertionIndex += 1
          }else{
            if self.mVerboseDebug {  Swift.print ("    insert token \(token.range) at \(insertionIndex)") }
            self.mTokenArray.insert (token, at: insertionIndex)
            insertionIndex += 1
          }
        }
      }
    }
    if self.mDebug { Swift.print ("  Lexical analysis time: \(Int (Date ().timeIntervalSince (start) * 1000.0)) ms") }
  //---- Apply default attributes
    let modificationStart = min (inEditedRange.location, (savedTokenCount == 0)
      ? 0
      : self.mTokenArray [savedTokenCount - 1].range.upperBound)
    let modificationEnd = max (inEditedRange.upperBound, (insertionIndex == self.mTokenArray.count)
       ? nsString.length
       : self.mTokenArray [insertionIndex].range.upperBound
    )
    if self.mDebug { Swift.print ("  Attributes will change from char index \(modificationStart) to \(modificationEnd)") }
    let start2 = Date ()
    if modificationStart < modificationEnd {
      let modifiedRange = NSRange (location: modificationStart, length: modificationEnd - modificationStart)
      let tsDelegate : (any NSTextStorageDelegate)? = inTextStorage.delegate
      inTextStorage.delegate = nil // NSTextStorageDelegate
      inTextStorage.beginEditing ()
      let defaultFont = self.mLexicalStyleSnapShot.mFont.nsFont
      let ps = NSMutableParagraphStyle ()
      ps.lineHeightMultiple = CGFloat (self.mLexicalStyleSnapShot.mLineHeight) / 10.0
      let defaultAttributes : [NSAttributedString.Key : Any] = [
        .font: defaultFont,
        .foregroundColor: NSColor (self.mLexicalStyleSnapShot.mDefaultColor),
        .paragraphStyle : ps
      ]
      if self.mVerboseDebug { Swift.print ("Apply default attributes \(modifiedRange)") }
      inTextStorage.setAttributes (defaultAttributes, range: modifiedRange)
    //--- Apply styles
      var idx = 0
      stop = false
      while idx < self.mTokenArray.count, !stop { // Apply token styles
        let token = self.mTokenArray [idx]
        idx += 1
        if token.range.lowerBound >= modifiedRange.upperBound {
          stop = true
        }else if token.range.upperBound > modifiedRange.lowerBound {
          let styleIndex = Int (self.styleIndexFor (token: token.tokenCode))
          if styleIndex > 0, styleIndex < (self.mLexicalStyleSnapShot.mAttributeArray.count - 1),
             let attributes = self.mLexicalStyleSnapShot.mAttributeArray [styleIndex - 1] {
            inTextStorage.addAttributes (attributes, range: token.range)
          }
        }
      }
      inTextStorage.endEditing ()
      inTextStorage.delegate = tsDelegate // NSTextStorageDelegate
    }
    if self.mDebug { Swift.print ("  Adding attributes: \(Int (Date ().timeIntervalSince (start2) * 1000.0)) ms") }
    ioPopupMenuItems = self.updateEntryPopUpButtons (self.mTokenArray)
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
  //   Lexical analysis
  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

  func parseLexicalTokenForLexicalColoring () -> LexicalToken {
    var loop = true
    var scanningOk = true
    self.mLexicalAttribute_bigintValue = ""
    self.mLexicalAttribute_charValue = 0
    self.mLexicalAttribute_floatValue = 0.0
    self.mLexicalAttribute_tokenString = ""
    self.mLexicalAttribute_uint32value = 0
    var tokenCode : UInt16 = 0
    let startLocation = self.currentLocation
    if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (95)) {
      while (loop && scanningOk) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        }else{
          loop = false
        }
      }
      loop = true
      if (tokenCode == 0) {
        tokenCode = search_into_galgasScanner_34__galgasKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        tokenCode = galgasScanner4_1_identifier ;
      }
    }else if scanningOk && (self.testForInputString ("0x", advance: true)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        scanner_cocoa_routine_convertHexStringIntoBigInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_bigintValue)
        tokenCode = galgasScanner4_1_literalInt
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
      scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else if scanningOk && (self.testForInputChar (95)) {
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (46)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 46)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else if scanningOk && (self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        scanner_cocoa_routine_convertStringToDouble (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_floatValue)
        tokenCode = galgasScanner4_1_double_2E_xxx
      }else{
        scanner_cocoa_routine_convertDecimalStringIntoBigInt (&scanningOk, mLexicalAttribute_tokenString, &self.mLexicalAttribute_bigintValue)
        tokenCode = galgasScanner4_1_literalInt
      }
    }else if scanningOk && (self.testForInputChar (35)) {
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputChar (45) || self.testForInputFromChar (48, toChar:57)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      if (tokenCode == 0) {
        tokenCode = search_into_galgasScanner_34__attributeKeyWordList (mLexicalAttribute_tokenString) ;
      }
      if tokenCode == 0 {
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (39)) {
      if scanningOk && (self.testForInputChar (92)) {
        if scanningOk && (self.testForInputChar (102)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 12)
        }else if scanningOk && (self.testForInputChar (110)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 10)
        }else if scanningOk && (self.testForInputChar (114)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 13)
        }else if scanningOk && (self.testForInputChar (116)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 9)
        }else if scanningOk && (self.testForInputChar (118)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 11)
        }else if scanningOk && (self.testForInputChar (92)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 92)
        }else if scanningOk && (self.testForInputChar (48)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 0)
        }else if scanningOk && (self.testForInputChar (39)) {
          scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, 39)
        }else if scanningOk && (self.testForInputChar (117)) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else{
            scanningOk = false
          }
        }else if scanningOk && (self.testForInputChar (85)) {
          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
            scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                    if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                      scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                        scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                        if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                          scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                        }else{
                          scanningOk = false
                        }
                      }else{
                        scanningOk = false
                      }
                    }else{
                      scanningOk = false
                    }
                  }else{
                    scanningOk = false
                  }
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else{
            scanningOk = false
          }
        }else{
          scanningOk = false
        }
      }else if scanningOk && (self.testForInputFromChar (32, toChar:65533)) {
        scanner_cocoa_routine_enterCharacterIntoCharacter (&scanningOk, &self.mLexicalAttribute_charValue, self.previousChar)
      }else{
        scanningOk = false
      }
      if scanningOk && (self.testForInputChar (39)) {
        tokenCode = galgasScanner4_1__27_char_27_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputChar (36)) {
      if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
          }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else{
            loop = false
          }
        }
        loop = true
      }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
          }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else{
            loop = false
          }
        }
        loop = true
      }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
        scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputString ("\\\\", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputString ("\\$", advance: true)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 36)
          }else if scanningOk && (self.testForInputFromChar (33, toChar:35) || self.testForInputFromChar (37, toChar:65533)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      if scanningOk && (self.testForInputChar (36)) {
      }else{
        scanningOk = false
      }
      tokenCode = galgasScanner4_1__24_terminal_24_
    }else if scanningOk && (self.testForInputString ("//", advance: true)) {
      if scanningOk && (self.testForInputChar (33)) {
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:65533)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner4_1_commentMark
      }else{
        while (loop && scanningOk) {
          if scanningOk && (self.testForInputFromChar (1, toChar:9) || self.testForInputChar (11) || self.testForInputChar (12) || self.testForInputFromChar (14, toChar:1114111)) {
          }else{
            loop = false
          }
        }
        loop = true
        tokenCode = galgasScanner4_1_comment
      }
    }else if scanningOk && self.testForInputString ("===", advance: true) {
      tokenCode = galgasScanner4_1__3D__3D__3D_
    }else if scanningOk && self.testForInputString ("..<", advance: true) {
      tokenCode = galgasScanner4_1__2E__2E__3C_
    }else if scanningOk && self.testForInputString ("...", advance: true) {
      tokenCode = galgasScanner4_1__2E__2E__2E_
    }else if scanningOk && self.testForInputString ("++=", advance: true) {
      tokenCode = galgasScanner4_1__2B__2B__3D_
    }else if scanningOk && self.testForInputString ("!==", advance: true) {
      tokenCode = galgasScanner4_1__21__3D__3D_
    }else if scanningOk && self.testForInputString ("||", advance: true) {
      tokenCode = galgasScanner4_1__7C__7C_
    }else if scanningOk && self.testForInputString ("|=", advance: true) {
      tokenCode = galgasScanner4_1__7C__3D_
    }else if scanningOk && self.testForInputString ("^=", advance: true) {
      tokenCode = galgasScanner4_1__5E__3D_
    }else if scanningOk && self.testForInputString ("@(", advance: true) {
      tokenCode = galgasScanner4_1__40__28_
    }else if scanningOk && self.testForInputString ("?^", advance: true) {
      tokenCode = galgasScanner4_1__3F__5E_
    }else if scanningOk && self.testForInputString (">>", advance: true) {
      tokenCode = galgasScanner4_1__3E__3E_
    }else if scanningOk && self.testForInputString (">=", advance: true) {
      tokenCode = galgasScanner4_1__3E__3D_
    }else if scanningOk && self.testForInputString ("==", advance: true) {
      tokenCode = galgasScanner4_1__3D__3D_
    }else if scanningOk && self.testForInputString (":>", advance: true) {
      tokenCode = galgasScanner4_1__3A__3E_
    }else if scanningOk && self.testForInputString ("/=", advance: true) {
      tokenCode = galgasScanner4_1__2F__3D_
    }else if scanningOk && self.testForInputString ("->", advance: true) {
      tokenCode = galgasScanner4_1__2D__3E_
    }else if scanningOk && self.testForInputString ("-=", advance: true) {
      tokenCode = galgasScanner4_1__2D__3D_
    }else if scanningOk && self.testForInputString ("+=", advance: true) {
      tokenCode = galgasScanner4_1__2B__3D_
    }else if scanningOk && self.testForInputString ("*=", advance: true) {
      tokenCode = galgasScanner4_1__2A__3D_
    }else if scanningOk && self.testForInputString ("&=", advance: true) {
      tokenCode = galgasScanner4_1__26__3D_
    }else if scanningOk && self.testForInputString ("&/", advance: true) {
      tokenCode = galgasScanner4_1__26__2F_
    }else if scanningOk && self.testForInputString ("&-", advance: true) {
      tokenCode = galgasScanner4_1__26__2D_
    }else if scanningOk && self.testForInputString ("&+", advance: true) {
      tokenCode = galgasScanner4_1__26__2B_
    }else if scanningOk && self.testForInputString ("&*", advance: true) {
      tokenCode = galgasScanner4_1__26__2A_
    }else if scanningOk && self.testForInputString ("&&", advance: true) {
      tokenCode = galgasScanner4_1__26__26_
    }else if scanningOk && self.testForInputString ("!^", advance: true) {
      tokenCode = galgasScanner4_1__21__5E_
    }else if scanningOk && self.testForInputString ("!=", advance: true) {
      tokenCode = galgasScanner4_1__21__3D_
    }else if scanningOk && self.testForInputString ("~", advance: true) {
      tokenCode = galgasScanner4_1__7E_
    }else if scanningOk && self.testForInputString ("}", advance: true) {
      tokenCode = galgasScanner4_1__7D_
    }else if scanningOk && self.testForInputString ("|", advance: true) {
      tokenCode = galgasScanner4_1__7C_
    }else if scanningOk && self.testForInputString ("{", advance: true) {
      tokenCode = galgasScanner4_1__7B_
    }else if scanningOk && self.testForInputString ("^", advance: true) {
      tokenCode = galgasScanner4_1__5E_
    }else if scanningOk && self.testForInputString ("]", advance: true) {
      tokenCode = galgasScanner4_1__5D_
    }else if scanningOk && self.testForInputString ("[", advance: true) {
      tokenCode = galgasScanner4_1__5B_
    }else if scanningOk && self.testForInputString (">", advance: true) {
      tokenCode = galgasScanner4_1__3E_
    }else if scanningOk && self.testForInputString ("=", advance: true) {
      tokenCode = galgasScanner4_1__3D_
    }else if scanningOk && self.testForInputString (";", advance: true) {
      tokenCode = galgasScanner4_1__3B_
    }else if scanningOk && self.testForInputString (":", advance: true) {
      tokenCode = galgasScanner4_1__3A_
    }else if scanningOk && self.testForInputString ("/", advance: true) {
      tokenCode = galgasScanner4_1__2F_
    }else if scanningOk && self.testForInputString (".", advance: true) {
      tokenCode = galgasScanner4_1__2E_
    }else if scanningOk && self.testForInputString ("-", advance: true) {
      tokenCode = galgasScanner4_1__2D_
    }else if scanningOk && self.testForInputString (",", advance: true) {
      tokenCode = galgasScanner4_1__2C_
    }else if scanningOk && self.testForInputString ("+", advance: true) {
      tokenCode = galgasScanner4_1__2B_
    }else if scanningOk && self.testForInputString ("*", advance: true) {
      tokenCode = galgasScanner4_1__2A_
    }else if scanningOk && self.testForInputString (")", advance: true) {
      tokenCode = galgasScanner4_1__29_
    }else if scanningOk && self.testForInputString ("(", advance: true) {
      tokenCode = galgasScanner4_1__28_
    }else if scanningOk && self.testForInputString ("&", advance: true) {
      tokenCode = galgasScanner4_1__26_
    }else if scanningOk && self.testForInputString ("%", advance: true) {
      tokenCode = galgasScanner4_1__25_
    }else if scanningOk && (self.testForInputChar (64)) {
      if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForInputFromChar (97, toChar:122) || self.testForInputFromChar (65, toChar:90) || self.testForInputChar (95) || self.testForInputFromChar (48, toChar:57)) {
          }else{
            loop = false
          }
        }
        loop = true
      }else{
        scanningOk = false
      }
      tokenCode = galgasScanner4_1__40_type
    }else if scanningOk && (self.testForInputString ("?!", advance: true)) {
      let locationForTag_onlyInterrogationExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner4_1__3F__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationExclamationMark)
          tokenCode = galgasScanner4_1__3F__21_
        }
      }else{
        tokenCode = galgasScanner4_1__3F__21_
      }
    }else if scanningOk && (self.testForInputChar (63)) {
      let locationForTag_onlyInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner4_1__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyInterrogationMark)
          tokenCode = galgasScanner4_1__3F_
        }
      }else{
        tokenCode = galgasScanner4_1__3F_
      }
    }else if scanningOk && (self.testForInputString ("!?", advance: true)) {
      let locationForTag_onlyExclamationInterrogationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner4_1__21__3F_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationInterrogationMark)
          tokenCode = galgasScanner4_1__21__3F_
        }
      }else{
        tokenCode = galgasScanner4_1__21__3F_
      }
    }else if scanningOk && (self.testForInputChar (33)) {
      let locationForTag_onlyExclamationMark = self.savedScanningPoint ()
      if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (58)) {
          tokenCode = galgasScanner4_1__21_selector_3A_
        }else{
          scanner_cocoa_routine_resetString (&scanningOk, &self.mLexicalAttribute_tokenString)
          self.restoreScanningPoint (locationForTag_onlyExclamationMark)
          tokenCode = galgasScanner4_1__21_
        }
      }else{
        tokenCode = galgasScanner4_1__21_
      }
    }else if scanningOk && (self.testForInputChar (60)) {
      let locationForTag_onlyInfDelimiter = self.savedScanningPoint ()
      if scanningOk && (self.testForInputChar (61)) {
        tokenCode = galgasScanner4_1__3C__3D_
      }else if scanningOk && (self.testForInputChar (60)) {
        tokenCode = galgasScanner4_1__3C__3C_
      }else if scanningOk && (self.testForChar_isUnicodeLetter ()) {
        while (loop && scanningOk) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
          if scanningOk && (self.testForChar_isUnicodeLetter () || self.testForInputFromChar (48, toChar:57) || self.testForInputChar (95)) {
          }else{
            loop = false
          }
        }
        loop = true
        if scanningOk && (self.testForInputChar (62)) {
          tokenCode = galgasScanner4_1__3C_non_5F_terminal_3E_
        }else{
          self.restoreScanningPoint (locationForTag_onlyInfDelimiter)
          tokenCode = galgasScanner4_1__3C_
        }
      }else{
        tokenCode = galgasScanner4_1__3C_
      }
    }else if scanningOk && (self.testForInputChar (34)) {
      while (loop && scanningOk) {
        if scanningOk && (self.testForInputChar (92)) {
          if scanningOk && (self.testForInputChar (102)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 12)
          }else if scanningOk && (self.testForInputChar (110)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 10)
          }else if scanningOk && (self.testForInputChar (114)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 13)
          }else if scanningOk && (self.testForInputChar (116)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 9)
          }else if scanningOk && (self.testForInputChar (118)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 11)
          }else if scanningOk && (self.testForInputChar (92)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 92)
          }else if scanningOk && (self.testForInputChar (34)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 34)
          }else if scanningOk && (self.testForInputChar (39)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 39)
          }else if scanningOk && (self.testForInputChar (63)) {
            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, 63)
          }else if scanningOk && (self.testForInputChar (117)) {
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                    scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                    scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, mLexicalAttribute_charValue)
                  }else{
                    scanningOk = false
                  }
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else if scanningOk && (self.testForInputChar (85)) {
            if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
              scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
              if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                  scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                  if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                    scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                    if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                      scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                      if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                        scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                        if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                          scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                          if scanningOk && (self.testForInputFromChar (48, toChar:57) || self.testForInputFromChar (97, toChar:102) || self.testForInputFromChar (65, toChar:70)) {
                            scanner_cocoa_routine_enterHexDigitIntoUInt (&scanningOk, self.previousChar, &self.mLexicalAttribute_uint32value)
                            scanner_cocoa_routine_convertUnsignedNumberToUnicodeChar (&scanningOk, &self.mLexicalAttribute_uint32value, &self.mLexicalAttribute_charValue)
                            scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, mLexicalAttribute_charValue)
                          }else{
                            scanningOk = false
                          }
                        }else{
                          scanningOk = false
                        }
                      }else{
                        scanningOk = false
                      }
                    }else{
                      scanningOk = false
                    }
                  }else{
                    scanningOk = false
                  }
                }else{
                  scanningOk = false
                }
              }else{
                scanningOk = false
              }
            }else{
              scanningOk = false
            }
          }else{
            scanningOk = false
          }
        }else if scanningOk && (self.testForInputChar (32) || self.testForInputChar (33) || self.testForInputFromChar (35, toChar:65533)) {
          scanner_cocoa_routine_enterCharacterIntoString (&scanningOk, &self.mLexicalAttribute_tokenString, self.previousChar)
        }else{
          loop = false
        }
      }
      loop = true
      if scanningOk && (self.testForInputChar (34)) {
        tokenCode = galgasScanner4_1__22_string_22_
      }else{
        scanningOk = false
      }
    }else if scanningOk && (self.testForInputFromChar (1, toChar:32)) {
    }else if self.testForInputChar (0) { // End of source text ?
      tokenCode = galgasScanner4_1_ ; // Empty string code
    }else{ // Unknown input character
      tokenCode = galgasScanner4_2_TEMPLATE
      self.advance ()
    }
    return LexicalToken (
      range: NSRange (location: startLocation, length: self.currentLocation - startLocation),
      tokenCode: tokenCode,
      templateDelimiterIndex: self.mEndTemplateDelimiterIndex
    )
  }

  // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

}

//--------------------------------------------------------------------------------------------------
//             Key words table 'attributeKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_galgasScanner_34__attributeKeyWordList : [String : UInt16] = [
  "from" : galgasScanner4_1__23_from,
  "remove" : galgasScanner4_1__23_remove,
  "unused" : galgasScanner4_1__23_unused,
  "usefull" : galgasScanner4_1__23_usefull,
  "clonable" : galgasScanner4_1__23_clonable,
  "template" : galgasScanner4_1__23_template,
  "equatable" : galgasScanner4_1__23_equatable,
  "preserved" : galgasScanner4_1__23_preserved,
  "replaceBy" : galgasScanner4_1__23_replaceBy,
  "comparable" : galgasScanner4_1__23_comparable,
  "insertAfter" : galgasScanner4_1__23_insertAfter,
  "errorMessage" : galgasScanner4_1__23_errorMessage,
  "initArgLabel" : galgasScanner4_1__23_initArgLabel,
  "insertBefore" : galgasScanner4_1__23_insertBefore,
  "insertSetter" : galgasScanner4_1__23_insertSetter,
  "removeSetter" : galgasScanner4_1__23_removeSetter,
  "searchMethod" : galgasScanner4_1__23_searchMethod,
  "searchString" : galgasScanner4_1__23_searchString,
  "translatable" : galgasScanner4_1__23_translatable,
  "replaceSetter" : galgasScanner4_1__23_replaceSetter,
  "searchSubscript" : galgasScanner4_1__23_searchSubscript,
  "templateEndMark" : galgasScanner4_1__23_templateEndMark,
  "templateDelimiter" : galgasScanner4_1__23_templateDelimiter,
  "textFileExtension" : galgasScanner4_1__23_textFileExtension,
  "nonAtomicSelection" : galgasScanner4_1__23_nonAtomicSelection,
  "binaryFileExtension" : galgasScanner4_1__23_binaryFileExtension,
  "templateReplacement" : galgasScanner4_1__23_templateReplacement,
  "insertOrReplaceSetter" : galgasScanner4_1__23_insertOrReplaceSetter,
  "generatedInSeparateFile" : galgasScanner4_1__23_generatedInSeparateFile
]

fileprivate func search_into_galgasScanner_34__attributeKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_galgasScanner_34__attributeKeyWordList [inSearchedString, default: galgasScanner4_1_]
}

//--------------------------------------------------------------------------------------------------
//             Key words table 'galgasKeyWordList'      
//--------------------------------------------------------------------------------------------------

fileprivate let kDictionary_galgasScanner_34__galgasKeyWordList : [String : UInt16] = [
  "as" : galgasScanner4_1_as,
  "do" : galgasScanner4_1_do,
  "if" : galgasScanner4_1_if,
  "in" : galgasScanner4_1_in,
  "is" : galgasScanner4_1_is,
  "on" : galgasScanner4_1_on,
  "or" : galgasScanner4_1_or,
  "end" : galgasScanner4_1_end,
  "for" : galgasScanner4_1_for,
  "gui" : galgasScanner4_1_gui,
  "let" : galgasScanner4_1_let,
  "map" : galgasScanner4_1_map,
  "nil" : galgasScanner4_1_nil,
  "not" : galgasScanner4_1_not,
  "tag" : galgasScanner4_1_tag,
  "var" : galgasScanner4_1_var,
  "case" : galgasScanner4_1_case,
  "drop" : galgasScanner4_1_drop,
  "else" : galgasScanner4_1_else,
  "enum" : galgasScanner4_1_enum,
  "func" : galgasScanner4_1_func,
  "init" : galgasScanner4_1_init,
  "list" : galgasScanner4_1_list,
  "loop" : galgasScanner4_1_loop,
  "proc" : galgasScanner4_1_proc,
  "rule" : galgasScanner4_1_rule,
  "self" : galgasScanner4_1_self,
  "send" : galgasScanner4_1_send,
  "then" : galgasScanner4_1_then,
  "true" : galgasScanner4_1_true,
  "with" : galgasScanner4_1_with,
  "after" : galgasScanner4_1_after,
  "block" : galgasScanner4_1_block,
  "class" : galgasScanner4_1_class,
  "elsif" : galgasScanner4_1_elsif,
  "error" : galgasScanner4_1_error,
  "false" : galgasScanner4_1_false,
  "final" : galgasScanner4_1_final,
  "fixit" : galgasScanner4_1_fixit,
  "graph" : galgasScanner4_1_graph,
  "guard" : galgasScanner4_1_guard,
  "label" : galgasScanner4_1_label,
  "spoil" : galgasScanner4_1_spoil,
  "style" : galgasScanner4_1_style,
  "super" : galgasScanner4_1_super,
  "while" : galgasScanner4_1_while,
  "before" : galgasScanner4_1_before,
  "extern" : galgasScanner4_1_extern,
  "public" : galgasScanner4_1_public,
  "repeat" : galgasScanner4_1_repeat,
  "rewind" : galgasScanner4_1_rewind,
  "select" : galgasScanner4_1_select,
  "struct" : galgasScanner4_1_struct,
  "switch" : galgasScanner4_1_switch,
  "syntax" : galgasScanner4_1_syntax,
  "between" : galgasScanner4_1_between,
  "default" : galgasScanner4_1_default,
  "grammar" : galgasScanner4_1_grammar,
  "lexique" : galgasScanner4_1_lexique,
  "package" : galgasScanner4_1_package,
  "private" : galgasScanner4_1_private,
  "project" : galgasScanner4_1_project,
  "warning" : galgasScanner4_1_warning,
  "abstract" : galgasScanner4_1_abstract,
  "indexing" : galgasScanner4_1_indexing,
  "mutating" : galgasScanner4_1_mutating,
  "override" : galgasScanner4_1_override,
  "template" : galgasScanner4_1_template,
  "extension" : galgasScanner4_1_extension,
  "optionset" : galgasScanner4_1_optionset,
  "protected" : galgasScanner4_1_protected,
  "fileprivate" : galgasScanner4_1_fileprivate,
  "filewrapper" : galgasScanner4_1_filewrapper,
  "sortedarray" : galgasScanner4_1_sortedarray
]

fileprivate func search_into_galgasScanner_34__galgasKeyWordList (_ inSearchedString : String) -> UInt16 {
  return kDictionary_galgasScanner_34__galgasKeyWordList [inSearchedString, default: galgasScanner4_1_]
}



//--------------------------------------------------------------------------------------------------

func galgasScanner4_lexiqueIdentifier () -> String {
  return "galgasScanner4"
}

//--------------------------------------------------------------------------------------------------

func galgasScanner4_styleNameFor (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
    "", // 0 (default style is denoted by an empty string)
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------

func galgasScanner4_styleIdentifierForEx (styleIndex inIndex : UInt8) -> String {
  let kStyleArray : [String] = [
  ]
  return kStyleArray [Int (inIndex)]
}

//--------------------------------------------------------------------------------------------------
//                           Template Replacements
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//                           Template Delimiters
//--------------------------------------------------------------------------------------------------



//--------------------------------------------------------------------------------------------------
//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N
//--------------------------------------------------------------------------------------------------

let galgasScanner4_1_ : UInt16 = 0
let galgasScanner4_1_identifier : UInt16 = 1
let galgasScanner4_1_double_2E_xxx : UInt16 = 2
let galgasScanner4_1_literalInt : UInt16 = 3
let galgasScanner4_1__27_char_27_ : UInt16 = 4
let galgasScanner4_1__24_terminal_24_ : UInt16 = 5
let galgasScanner4_1_comment : UInt16 = 6
let galgasScanner4_1_commentMark : UInt16 = 7
let galgasScanner4_1__40_type : UInt16 = 8
let galgasScanner4_1__3F_selector_3A_ : UInt16 = 9
let galgasScanner4_1__3F_ : UInt16 = 10
let galgasScanner4_1__3F__21_selector_3A_ : UInt16 = 11
let galgasScanner4_1__3F__21_ : UInt16 = 12
let galgasScanner4_1__21_selector_3A_ : UInt16 = 13
let galgasScanner4_1__21_ : UInt16 = 14
let galgasScanner4_1__21__3F_selector_3A_ : UInt16 = 15
let galgasScanner4_1__21__3F_ : UInt16 = 16
let galgasScanner4_1__3C_ : UInt16 = 17
let galgasScanner4_1__3C__3D_ : UInt16 = 18
let galgasScanner4_1__3C__3C_ : UInt16 = 19
let galgasScanner4_1__3C_non_5F_terminal_3E_ : UInt16 = 20
let galgasScanner4_1__22_string_22_ : UInt16 = 21
let galgasScanner4_1_abstract : UInt16 = 22
let galgasScanner4_1_after : UInt16 = 23
let galgasScanner4_1_as : UInt16 = 24
let galgasScanner4_1_before : UInt16 = 25
let galgasScanner4_1_between : UInt16 = 26
let galgasScanner4_1_block : UInt16 = 27
let galgasScanner4_1_optionset : UInt16 = 28
let galgasScanner4_1_case : UInt16 = 29
let galgasScanner4_1_class : UInt16 = 30
let galgasScanner4_1_default : UInt16 = 31
let galgasScanner4_1_do : UInt16 = 32
let galgasScanner4_1_drop : UInt16 = 33
let galgasScanner4_1_else : UInt16 = 34
let galgasScanner4_1_elsif : UInt16 = 35
let galgasScanner4_1_end : UInt16 = 36
let galgasScanner4_1_enum : UInt16 = 37
let galgasScanner4_1_error : UInt16 = 38
let galgasScanner4_1_extension : UInt16 = 39
let galgasScanner4_1_extern : UInt16 = 40
let galgasScanner4_1_false : UInt16 = 41
let galgasScanner4_1_fileprivate : UInt16 = 42
let galgasScanner4_1_filewrapper : UInt16 = 43
let galgasScanner4_1_final : UInt16 = 44
let galgasScanner4_1_for : UInt16 = 45
let galgasScanner4_1_fixit : UInt16 = 46
let galgasScanner4_1_func : UInt16 = 47
let galgasScanner4_1_grammar : UInt16 = 48
let galgasScanner4_1_graph : UInt16 = 49
let galgasScanner4_1_guard : UInt16 = 50
let galgasScanner4_1_gui : UInt16 = 51
let galgasScanner4_1_if : UInt16 = 52
let galgasScanner4_1_in : UInt16 = 53
let galgasScanner4_1_indexing : UInt16 = 54
let galgasScanner4_1_init : UInt16 = 55
let galgasScanner4_1_is : UInt16 = 56
let galgasScanner4_1_label : UInt16 = 57
let galgasScanner4_1_let : UInt16 = 58
let galgasScanner4_1_lexique : UInt16 = 59
let galgasScanner4_1_list : UInt16 = 60
let galgasScanner4_1_loop : UInt16 = 61
let galgasScanner4_1_map : UInt16 = 62
let galgasScanner4_1_mutating : UInt16 = 63
let galgasScanner4_1_nil : UInt16 = 64
let galgasScanner4_1_not : UInt16 = 65
let galgasScanner4_1_on : UInt16 = 66
let galgasScanner4_1_or : UInt16 = 67
let galgasScanner4_1_override : UInt16 = 68
let galgasScanner4_1_package : UInt16 = 69
let galgasScanner4_1_public : UInt16 = 70
let galgasScanner4_1_protected : UInt16 = 71
let galgasScanner4_1_private : UInt16 = 72
let galgasScanner4_1_proc : UInt16 = 73
let galgasScanner4_1_project : UInt16 = 74
let galgasScanner4_1_repeat : UInt16 = 75
let galgasScanner4_1_rewind : UInt16 = 76
let galgasScanner4_1_rule : UInt16 = 77
let galgasScanner4_1_select : UInt16 = 78
let galgasScanner4_1_self : UInt16 = 79
let galgasScanner4_1_send : UInt16 = 80
let galgasScanner4_1_sortedarray : UInt16 = 81
let galgasScanner4_1_spoil : UInt16 = 82
let galgasScanner4_1_super : UInt16 = 83
let galgasScanner4_1_struct : UInt16 = 84
let galgasScanner4_1_style : UInt16 = 85
let galgasScanner4_1_switch : UInt16 = 86
let galgasScanner4_1_syntax : UInt16 = 87
let galgasScanner4_1_tag : UInt16 = 88
let galgasScanner4_1_template : UInt16 = 89
let galgasScanner4_1_then : UInt16 = 90
let galgasScanner4_1_true : UInt16 = 91
let galgasScanner4_1_var : UInt16 = 92
let galgasScanner4_1_warning : UInt16 = 93
let galgasScanner4_1_while : UInt16 = 94
let galgasScanner4_1_with : UInt16 = 95
let galgasScanner4_1__23_binaryFileExtension : UInt16 = 96
let galgasScanner4_1__23_clonable : UInt16 = 97
let galgasScanner4_1__23_comparable : UInt16 = 98
let galgasScanner4_1__23_equatable : UInt16 = 99
let galgasScanner4_1__23_errorMessage : UInt16 = 100
let galgasScanner4_1__23_from : UInt16 = 101
let galgasScanner4_1__23_generatedInSeparateFile : UInt16 = 102
let galgasScanner4_1__23_initArgLabel : UInt16 = 103
let galgasScanner4_1__23_insertAfter : UInt16 = 104
let galgasScanner4_1__23_insertBefore : UInt16 = 105
let galgasScanner4_1__23_insertOrReplaceSetter : UInt16 = 106
let galgasScanner4_1__23_insertSetter : UInt16 = 107
let galgasScanner4_1__23_nonAtomicSelection : UInt16 = 108
let galgasScanner4_1__23_preserved : UInt16 = 109
let galgasScanner4_1__23_replaceBy : UInt16 = 110
let galgasScanner4_1__23_remove : UInt16 = 111
let galgasScanner4_1__23_removeSetter : UInt16 = 112
let galgasScanner4_1__23_replaceSetter : UInt16 = 113
let galgasScanner4_1__23_searchMethod : UInt16 = 114
let galgasScanner4_1__23_searchSubscript : UInt16 = 115
let galgasScanner4_1__23_searchString : UInt16 = 116
let galgasScanner4_1__23_template : UInt16 = 117
let galgasScanner4_1__23_templateDelimiter : UInt16 = 118
let galgasScanner4_1__23_templateEndMark : UInt16 = 119
let galgasScanner4_1__23_templateReplacement : UInt16 = 120
let galgasScanner4_1__23_textFileExtension : UInt16 = 121
let galgasScanner4_1__23_translatable : UInt16 = 122
let galgasScanner4_1__23_unused : UInt16 = 123
let galgasScanner4_1__23_usefull : UInt16 = 124
let galgasScanner4_1__2A_ : UInt16 = 125
let galgasScanner4_1__2C_ : UInt16 = 126
let galgasScanner4_1__2B_ : UInt16 = 127
let galgasScanner4_1__26__2B_ : UInt16 = 128
let galgasScanner4_1__26__2D_ : UInt16 = 129
let galgasScanner4_1__26__2A_ : UInt16 = 130
let galgasScanner4_1__26__2F_ : UInt16 = 131
let galgasScanner4_1__3E_ : UInt16 = 132
let galgasScanner4_1__3B_ : UInt16 = 133
let galgasScanner4_1__3A_ : UInt16 = 134
let galgasScanner4_1__3A__3E_ : UInt16 = 135
let galgasScanner4_1__2D_ : UInt16 = 136
let galgasScanner4_1__28_ : UInt16 = 137
let galgasScanner4_1__29_ : UInt16 = 138
let galgasScanner4_1__2D__3E_ : UInt16 = 139
let galgasScanner4_1__3D__3D_ : UInt16 = 140
let galgasScanner4_1__3D_ : UInt16 = 141
let galgasScanner4_1__26__26_ : UInt16 = 142
let galgasScanner4_1__25_ : UInt16 = 143
let galgasScanner4_1__5B_ : UInt16 = 144
let galgasScanner4_1__5D_ : UInt16 = 145
let galgasScanner4_1__2B__2B__3D_ : UInt16 = 146
let galgasScanner4_1__2E_ : UInt16 = 147
let galgasScanner4_1__40__28_ : UInt16 = 148
let galgasScanner4_1__2E__2E__2E_ : UInt16 = 149
let galgasScanner4_1__2E__2E__3C_ : UInt16 = 150
let galgasScanner4_1__2B__3D_ : UInt16 = 151
let galgasScanner4_1__2D__3D_ : UInt16 = 152
let galgasScanner4_1__2A__3D_ : UInt16 = 153
let galgasScanner4_1__2F__3D_ : UInt16 = 154
let galgasScanner4_1__26__3D_ : UInt16 = 155
let galgasScanner4_1__7C__3D_ : UInt16 = 156
let galgasScanner4_1__5E__3D_ : UInt16 = 157
let galgasScanner4_1__2F_ : UInt16 = 158
let galgasScanner4_1__21__3D_ : UInt16 = 159
let galgasScanner4_1__3E__3D_ : UInt16 = 160
let galgasScanner4_1__26_ : UInt16 = 161
let galgasScanner4_1__7B_ : UInt16 = 162
let galgasScanner4_1__7D_ : UInt16 = 163
let galgasScanner4_1__7C__7C_ : UInt16 = 164
let galgasScanner4_1__7C_ : UInt16 = 165
let galgasScanner4_1__5E_ : UInt16 = 166
let galgasScanner4_1__3E__3E_ : UInt16 = 167
let galgasScanner4_1__7E_ : UInt16 = 168
let galgasScanner4_1__3D__3D__3D_ : UInt16 = 169
let galgasScanner4_1__21__3D__3D_ : UInt16 = 170
let galgasScanner4_1__3F__5E_ : UInt16 = 171
let galgasScanner4_1__21__5E_ : UInt16 = 172
let galgasScanner4_2_ERROR : UInt16 = 173
let galgasScanner4_2_TEMPLATE : UInt16 = 174

//--------------------------------------------------------------------------------------------------

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2


