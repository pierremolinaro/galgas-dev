#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-25.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category method '@lexiqueComponentAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1897)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1900)) ;
  }
  cEnumerator_externRoutineListAST enumerator_81812 (object->mAttribute_mExternRoutineList, kEnumeration_up) ;
  while (enumerator_81812.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1903)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_81951 (enumerator_81812.current_mLexicalRoutineFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_81951.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_81951.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1906)) ;
      var_lexicalRoutineFormalArgumentList.addAssign_operation (enumerator_81951.current_mPassingMode (HERE), var_lexicalFormalArgumentType, enumerator_81951.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1907))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1907)) ;
      enumerator_81951.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap.modifier_insertKey (enumerator_81812.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList, enumerator_81812.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1909)) ;
    }
    enumerator_81812.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1913)) ;
  }
  cEnumerator_externFunctionListAST enumerator_82570 (object->mAttribute_mExternFunctionList, kEnumeration_up) ;
  while (enumerator_82570.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1916)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_82712 (enumerator_82570.current_mLexicalFunctionFormalArgumentList (HERE), kEnumeration_up) ;
    while (enumerator_82712.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType ;
      var_lexicalTypeMap.method_searchKey (enumerator_82712.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1919)) ;
      var_lexicalFunctionFormalArgumentList.addAssign_operation (var_lexicalFormalArgumentType, enumerator_82712.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1920))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1920)) ;
      enumerator_82712.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType ;
    var_lexicalTypeMap.method_searchKey (enumerator_82570.current_mReturnedTypeName (HERE), var_returnedArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1923)) ;
    {
    var_lexicalFunctionMap.modifier_insertKey (enumerator_82570.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList, var_returnedArgumentType, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1924)) ;
    }
    enumerator_82570.gotoNextObject () ;
  }
  GALGAS_stringset temp_0 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1939)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToLower")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1928)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1929)) ;
  temp_0.addAssign_operation (GALGAS_string ("unicodeToUpper")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1930)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeLetter")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1931)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeMark")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1932)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeNumber")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1933)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeDecimalDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1934)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeASCIIHexDigit")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1935)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSeparator")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1936)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeCommand")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1937)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodePunctuation")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1938)) ;
  temp_0.addAssign_operation (GALGAS_string ("isUnicodeSymbol")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1939)) ;
  GALGAS_stringset var_externUnicodeTestFunctions = temp_0 ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext = GALGAS_lexiqueAnalysisContext::constructor_new (object->mAttribute_mLexiqueComponentName.mAttribute_string, var_lexicalRoutineMap, var_lexicalFunctionMap, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1946)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1947)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1948)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1949)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1950)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1951)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1952)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1953)), var_externUnicodeTestFunctions  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1942)) ;
  GALGAS_uint var_styleIndex = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_84190 (object->mAttribute_mLexicalStyleList, kEnumeration_up) ;
  while (enumerator_84190.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mStyleMap.modifier_insertKey (enumerator_84190.current_mName (HERE), enumerator_84190.current_mComment (HERE), var_styleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1959)) ;
    }
    var_styleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1960)) ;
    enumerator_84190.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap, object->mAttribute_mLexicalAttributeList, var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1963)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_84590 (object->mAttribute_mTerminalDeclarationList, kEnumeration_up) ;
  while (enumerator_84590.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_84590.current_mStyle (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1971)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 1971)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_lstring joker_84729 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 1972)).method_searchKey (enumerator_84590.current_mStyle (HERE), joker_84729, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1972)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1974)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_84852 (enumerator_84590.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_84852.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_84852.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1977)) ;
      var_argumentTypeList.addAssign_operation (enumerator_84852.current_mFormalSelector (HERE), enumerator_84852.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1978)) ;
      enumerator_84852.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_84590.current_mName (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1980)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_85271 (enumerator_84590.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_85271.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_85271.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1984)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        const enumGalgasBool test_3 = var_atomicSelection.boolEnum () ;
        if (kBoolTrue == test_3) {
          var_atomicSelection = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_3) {
          GALGAS_location location_4 (enumerator_85271.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_4, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1988)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_85271.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 1990)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_location location_6 (enumerator_85271.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_6, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1991)) ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_7 = var_isEndOfTemplateMark.boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_location location_8 (enumerator_85271.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_8, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1993)) ;
          }else if (kBoolFalse == test_7) {
            var_isEndOfTemplateMark = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_85271.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_84590.current_mName (HERE), var_argumentTypeList, enumerator_84590.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2001)), var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1998)) ;
    enumerator_84590.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_86056 (object->mAttribute_mLexicalListDeclarationList, kEnumeration_up) ;
  while (enumerator_86056.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, enumerator_86056.current_mStyle (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2008)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2008)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_lstring joker_86195 ; // Joker input parameter
      var_lexiqueAnalysisContext.reader_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 2009)).method_searchKey (enumerator_86056.current_mStyle (HERE), joker_86195, var_terminalStyleIndex, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2009)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2011)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_86318 (enumerator_86056.current_mSentAttributeList (HERE), kEnumeration_up) ;
    while (enumerator_86318.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType ;
      var_lexiqueAnalysisContext.mAttribute_mLexicalAttributeMap.method_searchKey (enumerator_86318.current_mAttributeName (HERE), var_attributeLexicalType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2014)) ;
      var_argumentTypeList.addAssign_operation (enumerator_86318.current_mFormalSelector (HERE), enumerator_86318.current_mAttributeName (HERE).mAttribute_string, var_attributeLexicalType  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2015)) ;
      enumerator_86318.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2017)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2018)) ;
    cEnumerator_lexicalListEntryListAST enumerator_86715 (enumerator_86056.current_mEntryList (HERE), kEnumeration_up) ;
    while (enumerator_86715.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage = enumerator_86056.current_mSyntaxErrorMessage (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2020)).reader_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_86715.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2020)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2020)) ;
      GALGAS_bool var_isEndOfTemplateMark = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_86954 (enumerator_86715.current_mFeatureList (HERE), kEnumeration_up) ;
      while (enumerator_86954.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_86954.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2024)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_atomicSelection.boolEnum () ;
          if (kBoolTrue == test_11) {
            var_atomicSelection = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_11) {
            GALGAS_location location_12 (enumerator_86954.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_12, GALGAS_string ("the 'nonAtomicSelection' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2028)) ;
          }
        }else if (kBoolFalse == test_10) {
          const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, enumerator_86954.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2030)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_13) {
            GALGAS_location location_14 (enumerator_86954.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_14, GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' features are allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2031)) ;
          }else if (kBoolFalse == test_13) {
            const enumGalgasBool test_15 = var_isEndOfTemplateMark.boolEnum () ;
            if (kBoolTrue == test_15) {
              GALGAS_location location_16 (enumerator_86954.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
              inCompiler->emitSemanticError (location_16, GALGAS_string ("the 'templateEndMark' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2033)) ;
            }else if (kBoolFalse == test_15) {
              var_isEndOfTemplateMark = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_86954.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext.mAttribute_mTerminalList.addAssign_operation (enumerator_86715.current_mTerminalSpelling (HERE), var_argumentTypeList, var_syntaxErrorMessage, var_isEndOfTemplateMark, var_atomicSelection, var_terminalStyleIndex  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2038)) ;
      {
      var_lexiqueAnalysisContext.mAttribute_mTerminalMap.modifier_insertKey (enumerator_86715.current_mTerminalSpelling (HERE), var_argumentTypeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2045)) ;
      }
      {
      var_lexicalTokenListMap.modifier_insertKey (enumerator_86715.current_mEntrySpelling (HERE), enumerator_86715.current_mTerminalSpelling (HERE), enumerator_86715.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2046)) ;
      }
      var_tokenSortedlist.addAssign_operation (enumerator_86715.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2047)).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2047)), enumerator_86715.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2047)), enumerator_86715.current_mTerminalSpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2047))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2047)) ;
      var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_86715.current_mEntrySpelling (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2048))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2048)) ;
      enumerator_86715.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalTokenListMap.modifier_insertKey (enumerator_86056.current_mName (HERE), var_lexicalTokenListMap, var_tokenSortedlist, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2050)) ;
    }
    enumerator_86056.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_88343 (object->mAttribute_mLexicalMessageDeclarationList, kEnumeration_up) ;
  while (enumerator_88343.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext.mAttribute_mLexicalMessageMap.modifier_insertKey (enumerator_88343.current_mMessageName (HERE), enumerator_88343.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2054)) ;
    }
    enumerator_88343.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_88530 (object->mAttribute_mLexicalRuleList, kEnumeration_up) ;
  while (enumerator_88530.hasCurrentObject ()) {
    callCategoryMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_88530.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2058)) ;
    enumerator_88530.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_88722 (var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2061)), kEnumeration_up) ;
  while (enumerator_88722.hasCurrentObject ()) {
    const enumGalgasBool test_17 = enumerator_88722.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2062)).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_location location_18 (enumerator_88722.current_lkey (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_18, GALGAS_string ("unused message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2063)) ;
    }
    enumerator_88722.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_88902 (object->mAttribute_mTemplateDelimitorList, kEnumeration_up) ;
  while (enumerator_88902.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_88902.current_mStartString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2068))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2068)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_88902.current_mEndString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2069))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2069)) ;
    GALGAS_bool var_preservesStartDelimiter = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_89123 (enumerator_88902.current_mOptionList (HERE), kEnumeration_up) ;
    while (enumerator_89123.hasCurrentObject ()) {
      const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, enumerator_89123.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2072)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_19) {
        GALGAS_location location_20 (enumerator_89123.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_20, GALGAS_string ("only the 'preserved' feature is allowed here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2073)) ;
      }else if (kBoolFalse == test_19) {
        const enumGalgasBool test_21 = var_preservesStartDelimiter.boolEnum () ;
        if (kBoolTrue == test_21) {
          GALGAS_location location_22 (enumerator_89123.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_22, GALGAS_string ("the 'preserved' feature is already set")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2075)) ;
        }else if (kBoolFalse == test_21) {
          var_preservesStartDelimiter = GALGAS_bool (true) ;
        }
      }
      enumerator_89123.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext.mAttribute_mTemplateDelimitorList.addAssign_operation (enumerator_88902.current_mStartString (HERE), enumerator_88902.current_mEndString (HERE), var_preservesStartDelimiter  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2080)) ;
    enumerator_88902.gotoNextObject () ;
  }
  const enumGalgasBool test_23 = object->mAttribute_mIndexingDirectory.mAttribute_location.reader_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 2083)).boolEnum () ;
  if (kBoolTrue == test_23) {
    cEnumerator_indexingListAST enumerator_89654 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
    while (enumerator_89654.hasCurrentObject ()) {
      GALGAS_location location_24 (enumerator_89654.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_24, GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2085)) ;
      enumerator_89654.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 2088)) ;
  cEnumerator_indexingListAST enumerator_89839 (object->mAttribute_mIndexingListAST, kEnumeration_up) ;
  while (enumerator_89839.hasCurrentObject ()) {
    const enumGalgasBool test_25 = var_indexNameSet.reader_hasKey (enumerator_89839.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2090)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2090)).boolEnum () ;
    if (kBoolTrue == test_25) {
      GALGAS_location location_26 (enumerator_89839.current_mIndexName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_26, GALGAS_string ("the '").add_operation (enumerator_89839.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2091)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2091)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2091))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2091)) ;
    }
    var_indexNameSet.addAssign_operation (enumerator_89839.current_mIndexName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2093))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2093)) ;
    enumerator_89839.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_90130 (object->mAttribute_mTemplateReplacementList, kEnumeration_up) ;
  while (enumerator_90130.hasCurrentObject ()) {
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90130.current_mMatchString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2097))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2097)) ;
    var_lexiqueAnalysisContext.mAttribute_mUnicodeStringToGenerate.addAssign_operation (enumerator_90130.current_mReplacementString (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2098))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2098)) ;
    enumerator_90130.gotoNextObject () ;
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2102)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    GALGAS_string var_lexiqueClassName = object->mAttribute_mLexiqueComponentName.mAttribute_string ;
    GALGAS_string var_headerContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2106)), var_lexiqueAnalysisContext, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2105))) ;
    var_headerContents.dotAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2111)), object->mAttribute_mLexicalListDeclarationList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2110)))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2110)) ;
    GALGAS_string var_cppContents = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2118)), var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2119)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2120)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2121)), var_lexiqueAnalysisContext.reader_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 2122)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2123)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mTemplateDelimitorList, var_lexiqueClassName, object->mAttribute_mTemplateReplacementList, object->mAttribute_mLexicalStyleList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2117))) ;
    GALGAS_string var_cocoaHeader = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2133))) ;
    var_cocoaHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName, var_lexiqueAnalysisContext COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2137)))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2137)) ;
    GALGAS_string var_cocoaImplementation = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2143)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2143)), var_lexiqueClassName, var_lexiqueAnalysisContext.reader_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 2145)), var_lexiqueAnalysisContext.reader_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 2146)), var_lexiqueAnalysisContext.reader_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 2147)), var_lexiqueAnalysisContext.reader_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 2148)), object->mAttribute_mLexicalRuleList, var_lexiqueAnalysisContext, object->mAttribute_mTemplateReplacementList, object->mAttribute_mIndexingDirectory.mAttribute_string, object->mAttribute_mIndexingListAST, object->mAttribute_mLexicalStyleList, object->mAttribute_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2142))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2162)), var_lexiqueClassName, var_headerContents, var_cppContents, var_cocoaHeader, var_cocoaImplementation  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2160)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2158)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                        categoryMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineCategoryMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                            const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                            const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                            const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                            const GALGAS_string /* constinArgument_inComponentName */,
                                                                            const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2429)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                categoryMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineCategoryMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@nonterminalCallInstruction analyzeSyntaxInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                                const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                                const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                const GALGAS_string /* constinArgument_inComponentName */,
                                                                                const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                                GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_nonterminalLabelMap var_labelMap ;
  constinArgument_inNonterminalMap.method_searchKey (object->mAttribute_mNonterminalName, var_labelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2450)) ;
  GALGAS_formalParameterSignature var_signature ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2452)).objectCompare (GALGAS_string ("parse"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2453)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_formalParameterListForGeneration joker_107419 ; // Joker input parameter
    GALGAS_location joker_107433 ; // Joker input parameter
    var_labelMap.method_searchKey (object->mAttribute_mLabelName, joker_107419, var_signature, joker_107433, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2455)) ;
  }
  GALGAS_actualParameterListForGeneration var_actualParameterListForGeneration ;
  {
  routine_analyzeRoutineArguments (constinArgument_inAnalysisContext, object->mAttribute_mNonterminalName, GALGAS_string ("'<").add_operation (object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2461)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2461)).add_operation (GALGAS_string (">' nonterminal declaration"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2461)), var_signature, object->mAttribute_mActualParameterList, ioArgument_ioVariableMap, ioArgument_ioInstructionListForGeneration, var_actualParameterListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2458)) ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2469)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2477)), object->mAttribute_mLabelName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2478)), var_actualParameterListForGeneration, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2475))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2475)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                                categoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_analyzeSyntaxInstruction (defineCategoryMethod_nonterminalCallInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@nonterminalInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2492)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2493)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2494)) ;
  cEnumerator_actualParameterListForGeneration enumerator_108855 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_108855.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_108855.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2496)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2505)) ;
    enumerator_108855.gotoNextObject () ;
  }
  GALGAS_string var_sdtResultVarName = GALGAS_string ("syntaxDirectedTranslationResult_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2508)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2508)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("C_String ").add_operation (var_sdtResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2510)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("nt_").add_operation (object->mAttribute_mNonterminalName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2512)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)).add_operation (object->mAttribute_mLabelName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2512)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2512)) ;
  cEnumerator_stringlist enumerator_109581 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_109581.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_109581.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2514))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2514)) ;
    enumerator_109581.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (var_sdtResultVarName.add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2517))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2517)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2519)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2520)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2520))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2520)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationResult.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, var_sdtResultVarName, ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2521)) ;
  cEnumerator_stringlist enumerator_110115 (var_jokerParametersToReleaseList, kEnumeration_up) ;
  while (enumerator_110115.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_110115.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release temporary input variables (joker in source)\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2529))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2529)) ;
    enumerator_110115.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                           categoryMethod_nonterminalInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_generateInstruction (defineCategoryMethod_nonterminalInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                  const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                  const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                  const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                  GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                             categoryMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineCategoryMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@inputParameterVariable analyzeInputParameter'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                         const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                         const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                         GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  GALGAS_string var_cppName ;
  {
  GALGAS_string joker_111763 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, var_cppName, joker_111763, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2564)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2578)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2578)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2578)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2578)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2578)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2578)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2579)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2579)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2579))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2577)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2581)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                             categoryMethod_inputParameterVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineCategoryMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterDeclaredVariable analyzeInputParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                 const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                 GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2609)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2612)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2612)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2612)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2612)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2612)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2612)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2613)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2613)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2613))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2611)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2617)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2617)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2618)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2620)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2619)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                             categoryMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineCategoryMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@inputParameterDeclaredConstant analyzeInputParameter'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                 const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                 GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLStringType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLCharType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLUInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSIntType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLSInt_36__34_Type ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLDoubleType ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mLBigIntType ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualParameterTypeName.mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2647)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_location location_2 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2650)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2650)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2650)).add_operation (var_type.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2650)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2650)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2650)).add_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2651)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2651)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2651))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2649)) ;
    }
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2655)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2655)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_expectedType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2656)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2659)), var_cppName, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2658)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterCategoryMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                             categoryMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineCategoryMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                             const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                             const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                             GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2685)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2686)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2696)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2697)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type ;
  {
  GALGAS_string joker_118612 ; // Joker input parameter
  GALGAS_string joker_118615 ; // Joker input parameter
  ioArgument_ioVariableMap.modifier_searchForWriteAccess (object->mAttribute_mActualParameterName, var_type, joker_118612, joker_118615, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2699)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2703)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2703)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2703)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2703)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2703)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2703)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2704)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2704)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2704))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2702)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//       Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                      const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2714)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2715)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2717)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2717)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2718)) ;
  {
  ioArgument_ioVariableMap.modifier_insertDefinedLocalVariable (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2719)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2723)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2723)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2723)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2723)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2723)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2723)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2724)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2724)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2724))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2722)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                        const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2734)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2735)) ;
  }
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2737)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2737)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, object->mAttribute_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2738)) ;
  {
  ioArgument_ioVariableMap.modifier_insertLocalConstant (object->mAttribute_mActualParameterName, var_type, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2739)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType.objectCompare (var_type)).boolEnum () ;
  if (kBoolTrue == test_2) {
    GALGAS_location location_3 (object->mAttribute_mActualParameterName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (object->mAttribute_mActualParameterName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2743)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2743)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2743)).add_operation (var_type.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2743)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2743)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2743)).add_operation (var_expectedType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2744)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2744)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2744))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2742)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterCategoryMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                  categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                               const GALGAS_string constinArgument_inAccessMethodName,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2764)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2764)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2764)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2764))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2764)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2765)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2765)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                               C_Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationDropResult_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2785)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2785)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_cppName.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2786)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2786)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2786))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2786)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//      Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                        const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                        const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                        GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2796)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2796)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2797)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//     Overriding category method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                          const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                          const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                          C_Compiler * inCompiler
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  GALGAS_string var_cppName = GALGAS_string ("var_").add_operation (object->mAttribute_mActualParameterName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2807)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2807)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2808)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (void) {
  enterCategoryMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                    categoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode (defineCategoryMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_generateCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@terminalCheckInstruction analyzeSyntaxInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                              const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                              const GALGAS_string constinArgument_inLexiqueName,
                                                                              const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                              const GALGAS_string /* constinArgument_inComponentName */,
                                                                              const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                              GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_lexicalSentValueList var_sentAttributeList ;
  constinArgument_inTerminalMap.method_searchKey (object->mAttribute_mTerminalName, var_sentAttributeList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2824)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2826)).objectCompare (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2826)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2829)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2832)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_location location_5 (object->mAttribute_mTerminalName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_5, GALGAS_string ("naming the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2828)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2828)).add_operation (GALGAS_string ("$' terminal requires "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2828)).add_operation (var_sentAttributeList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2828)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2828)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2828)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2828)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2829)).add_operation (GALGAS_string (", but this instruction names "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2829)).add_operation (object->mAttribute_mActualInputParameterList.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 2831)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2831)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2830)).add_operation (GALGAS_string (" input parameter"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2831)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2831))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2827)) ;
  }
  GALGAS_terminalCheckAssignementList var_terminalCheckAssignementList = GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2835)) ;
  cEnumerator_actualInputParameterListAST enumerator_125466 (object->mAttribute_mActualInputParameterList, kEnumeration_up) ;
  cEnumerator_lexicalSentValueList enumerator_125491 (var_sentAttributeList, kEnumeration_up) ;
  while (enumerator_125466.hasCurrentObject () && enumerator_125491.hasCurrentObject ()) {
    callCategoryMethod_analyzeInputParameter ((const cPtr_abstractInputParameter *) enumerator_125466.current_mInputParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_125491.current_mLexicalType (HERE), enumerator_125491.current_mLexicalAttributeName (HERE), var_terminalCheckAssignementList, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2837)) ;
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_125491.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_125466.current_mActualSelector (HERE).mAttribute_string)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_string temp_7 ;
      const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_125491.current_mLexicalFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_8) {
        temp_7 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_8) {
        temp_7 = GALGAS_string::makeEmptyString () ;
      }
      GALGAS_location location_9 (enumerator_125466.current_mActualSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_9, GALGAS_string ("the actual selector should be '\?").add_operation (enumerator_125491.current_mLexicalFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2845)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2845)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2845)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2845))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2845)) ;
      GALGAS_location location_10 (enumerator_125491.current_mLexicalFormalSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticWarning (location_10, GALGAS_string ("the formal selector is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2846)) ;
    }
    enumerator_125466.gotoNextObject () ;
    enumerator_125491.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_126028 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_126028.hasCurrentObject ()) {
    const enumGalgasBool test_11 = constinArgument_inIndexNameSet.reader_hasKey (enumerator_126028.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2851)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2851)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 2851)).boolEnum () ;
    if (kBoolTrue == test_11) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_126137 (constinArgument_inIndexNameSet, kEnumeration_up) ;
      while (enumerator_126137.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_126137.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2854)) ;
        enumerator_126137.gotoNextObject () ;
      }
      GALGAS_location location_12 (enumerator_126028.current_mValue_30_ (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_126028.current_mValue_30_ (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2856)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856)).add_operation (GALGAS_string ("' indexing name is not declared by the lexique; available names are:"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2856)) ;
    }
    enumerator_126028.gotoNextObject () ;
  }
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2860)) ;
  callCategoryMethod_analyzeSDT ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2865)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, constinArgument_inLexiqueName, var_terminalCheckAssignementList, object->mAttribute_mIndexingKeyList, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor, object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2871))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2871)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                                categoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_analyzeSyntaxInstruction (defineCategoryMethod_terminalCheckInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@terminalCheckInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  cEnumerator_terminalCheckAssignementList enumerator_127471 (object->mAttribute_mTerminalCheckAssignementList, kEnumeration_up) ;
  while (enumerator_127471.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_127471.current_mTypeName (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_127471.current_mTypeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2892)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2892)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2892))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2892)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_127471.current_mTargetVarCppName (HERE).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2895)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2895)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2895)).add_operation (GALGAS_string ("->synthetizedAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2895)).add_operation (enumerator_127471.current_mSourceLexicalAttributeName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2896)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2895)).add_operation (GALGAS_string (" () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2896))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2895)) ;
    enumerator_127471.gotoNextObject () ;
  }
  cEnumerator__32_lstringlist enumerator_127855 (object->mAttribute_mIndexingKeyList, kEnumeration_up) ;
  while (enumerator_127855.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)).add_operation (GALGAS_string ("->enterIndexing (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2902)).add_operation (GALGAS_string ("::kIndexing_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2902)).add_operation (enumerator_127855.current_mValue_30_ (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2902)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2902)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2902)).add_operation (enumerator_127855.current_mValue_31_ (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticAnalysis.galgas", 2903)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2903)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2903))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2901)) ;
    enumerator_127855.gotoNextObject () ;
  }
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationPreceedingDelimitor.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->preceedingSeparatorString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2906)) ;
  callCategoryMethod_generateCode ((const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult *) object->mAttribute_mGrammarInstructionSyntaxDirectedTranslationToken.ptr (), constinArgument_inGenerateSyntaxDirectedTranslationString, GALGAS_string ("inCompiler->tokenString ()"), ioArgument_ioUnusedVariableCppNameSet, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2912)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2919)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)).add_operation (GALGAS_string ("->acceptTerminal (ACCEPT_TERMINAL (C_Lexique_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)).add_operation (object->mAttribute_mLexiqueIdentifier, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)).add_operation (GALGAS_string ("::kToken_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2921)).add_operation (object->mAttribute_mTerminalName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 2921)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2921)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2921)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2922)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2922))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2920)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                           categoryMethod_terminalCheckInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_generateInstruction (defineCategoryMethod_terminalCheckInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@repeatInstruction analyzeSyntaxInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                       const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                       const GALGAS_string constinArgument_inLexiqueName,
                                                                       const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GALGAS_string constinArgument_inComponentName,
                                                                       const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_choiceIndex = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2976)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2978)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mRepeatedInstructionList, object->mAttribute_mEndOf_5F_repeated_5F_instructions_5F_branch, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_repeated_5F_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2981)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2996)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_131423 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_131423.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_131423.current_mSyntaxInstructionList (HERE), enumerator_131423.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2999)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_131423.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3013)) ;
    enumerator_131423.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_repeat_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3016)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOf_5F_repeat_5F_instruction, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3018))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3018)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                                categoryMethod_repeatInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_analyzeSyntaxInstruction (defineCategoryMethod_repeatInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@repeatInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_string var_repeatFlagCppName = GALGAS_string ("repeatFlag_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3036)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3036)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3037)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3037))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3037)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3038)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3038))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3038)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_repeated_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3039)) ;
  }
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3047)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3048)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_133410 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_133360 ((uint32_t) 0) ;
  while (enumerator_133410.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_133360.add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3050)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3050)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3050)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3050))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3050)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_133410.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3051)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3059)) ;
    enumerator_133410.gotoNextObject () ;
    index_133360.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3049)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3061)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_repeatFlagCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062)).add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3062)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3063)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3064)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3065)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3066)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                           categoryMethod_repeatInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_generateInstruction (defineCategoryMethod_repeatInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@selectInstruction analyzeSyntaxInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                       const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                       const GALGAS_string constinArgument_inLexiqueName,
                                                                       const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                       const GALGAS_string constinArgument_inComponentName,
                                                                       const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                       GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_choiceIndex = ioArgument_ioSelectMethodCount ;
  ioArgument_ioSelectMethodCount.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3083)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForSelectBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3085)) ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3087)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_134825 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_134825.hasCurrentObject ()) {
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    {
    routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, enumerator_134825.current_mSyntaxInstructionList (HERE), enumerator_134825.current_mEndOf_5F_instructions (HERE), constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3090)) ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_134825.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3104)) ;
    enumerator_134825.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOf_5F_select_5F_instruction, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3107)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, constinArgument_inComponentName, var_choiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3108))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3108)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                                categoryMethod_selectInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_analyzeSyntaxInstruction (defineCategoryMethod_selectInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@selectInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3124)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3124)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (select_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (object->mAttribute_mChoiceIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)).add_operation (GALGAS_string (")) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3125)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_136313 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  GALGAS_uint index_136263 ((uint32_t) 0) ;
  while (enumerator_136313.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case ").add_operation (index_136263.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3127)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3127)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3127)).add_operation (GALGAS_string (": {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3127))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3127)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_136313.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3128)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("} break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3136)) ;
    enumerator_136313.gotoNextObject () ;
    index_136263.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3126)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("default:\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3138)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3139)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                           categoryMethod_selectInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_generateInstruction (defineCategoryMethod_selectInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@parseRewindInstruction analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                            const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                            const GALGAS_string constinArgument_inLexiqueName,
                                                                            const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                            const GALGAS_string constinArgument_inComponentName,
                                                                            const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                            GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3157)) ;
  GALGAS_uint var_referenceSelectMethodCount = ioArgument_ioSelectMethodCount ;
  cEnumerator_listOfSyntaxInstructionList enumerator_137538 (object->mAttribute_mParseRewindBranchList, kEnumeration_up) ;
  while (enumerator_137538.hasCurrentObject ()) {
    ioArgument_ioSelectMethodCount = var_referenceSelectMethodCount ;
    GALGAS_semanticInstructionListForGeneration var_instructionList = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3161)) ;
    cEnumerator_syntaxInstructionList enumerator_137706 (enumerator_137538.current_mSyntaxInstructionList (HERE), kEnumeration_up) ;
    while (enumerator_137706.hasCurrentObject ()) {
      callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_137706.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, var_instructionList, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3163)) ;
      enumerator_137706.gotoNextObject () ;
    }
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (var_instructionList, enumerator_137538.current_mEndOf_5F_instructions (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3176)) ;
    enumerator_137538.gotoNextObject () ;
  }
  GALGAS_listOfSemanticInstructionListForGeneration var_tempListOfBranches = var_listOfSemanticInstructionListForGeneration ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  GALGAS_location joker_138381 ; // Joker input parameter
  var_tempListOfBranches.modifier_popFirst (var_instructionList, joker_138381, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3181)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_referenceSignature = function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3182)) ;
  GALGAS_bool var_ok = GALGAS_bool (true) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_138558 (var_tempListOfBranches, kEnumeration_up) ;
  bool bool_0 = var_ok.isValidAndTrue () ;
  if (enumerator_138558.hasCurrentObject () && bool_0) {
    while (enumerator_138558.hasCurrentObject () && bool_0) {
      var_ok = function_compareSyntaxSignature (var_referenceSignature, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), enumerator_138558.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3187)), enumerator_138558.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3185)) ;
      enumerator_138558.gotoNextObject () ;
      if (enumerator_138558.hasCurrentObject ()) {
        bool_0 = var_ok.isValidAndTrue () ;
      }
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseRewindInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3192))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3192)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                                categoryMethod_parseRewindInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseRewindInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseRewindInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3206)) ;
  }
  GALGAS_string var_parsingContextVar = GALGAS_string ("parsingContext_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3207)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3207)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3207)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext ").add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3208)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3208)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3208)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3208)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3208))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3208)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_139746 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_139746.hasCurrentObject ()) {
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_139746.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3211)) ;
    }
    if (enumerator_139746.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220)).add_operation (GALGAS_string ("->setParsingContext ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220)).add_operation (var_parsingContextVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220)).add_operation (GALGAS_string (") ; // rewind\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3220)) ;
    }
    enumerator_139746.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseRewindInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3222)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                           categoryMethod_parseRewindInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_generateInstruction (defineCategoryMethod_parseRewindInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@parseLoopInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                          const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                          const GALGAS_string constinArgument_inLexiqueName,
                                                                          const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                          const GALGAS_string constinArgument_inComponentName,
                                                                          const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  GALGAS_semanticExpressionForGeneration var_variant_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mVariantExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3241)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_variant_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3240)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3246)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfVariantExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3248)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3248)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3248)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3248)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mUIntType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3249)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3249))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3247)) ;
  }
  GALGAS_semanticExpressionForGeneration var_while_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhileExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3254)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_while_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3253)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_while_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3259)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mEndOfWhileExpression, GALGAS_string ("the variant expression type is '@").add_operation (var_variant_5F_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3261)).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3261)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3261)).add_operation (GALGAS_string ("', but it should be '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3261)).add_operation (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3262)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3262)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3262))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3260)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3266)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mDoInstructionList, object->mAttribute_mEndOfInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_instructionList, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3269)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3284)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseLoopInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_variant_5F_expression, var_while_5F_expression, var_instructionList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3286))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3286)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                                categoryMethod_parseLoopInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseLoopInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@parseLoopInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3301)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3301)) ;
  }
  GALGAS_string var_variantVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3305)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3307)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3308)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3309)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3309)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3309)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)).add_operation (var_variantVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3310)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3312)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3312)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3313)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3313))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3313)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3314)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3315)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = false ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3316))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3316)) ;
  GALGAS_string var_whileVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3318)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_whileVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3319)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3320)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3321)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_variantVar.add_operation (GALGAS_string (" -- ; // Decrement variant\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3322))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3322)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const C_parsingContext parsingContext = ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3323)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3323)).add_operation (GALGAS_string ("->parsingContext () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3323))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3323)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3324)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332)).add_operation (GALGAS_string ("->setParsingContext (parsingContext) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3332)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3333)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3334)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3335)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3336)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3337)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3338)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//--- 'parse'\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3340)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3343)), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3341)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3349)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3349))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3349)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("//-------- END OF @parseLoopInstructionForGeneration\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3350)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                           categoryMethod_parseLoopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_generateInstruction (defineCategoryMethod_parseLoopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@parseWhenInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                          const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                                          const GALGAS_string constinArgument_inLexiqueName,
                                                                          const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                                                          const GALGAS_string constinArgument_inComponentName,
                                                                          const GALGAS_stringset constinArgument_inIndexNameSet,
                                                                          GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_uint & ioArgument_ioSelectMethodCount,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  GALGAS_semanticExpressionForGeneration var_when_5F_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mWhenExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3369)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_when_5F_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3368)) ;
  {
  ioArgument_ioVariableMap.modifier_openOverrideForRepeatBlock (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3375)) ;
  }
  GALGAS_uint var_localSelectMethodCount = ioArgument_ioSelectMethodCount ;
  GALGAS_semanticInstructionListForGeneration var_when_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mWhenInstructionList, object->mAttribute_mEndOfWhenInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, var_localSelectMethodCount, var_when_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3379)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_else_5F_instructionListForGeneration ;
  {
  routine_analyzeSyntaxInstructionList (constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, object->mAttribute_mElseInstructionList, object->mAttribute_mEndOfElseInstructionList, constinArgument_inIndexNameSet, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, var_else_5F_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3395)) ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeOverride (object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3410)) ;
  }
  GALGAS_bool var_ok = function_compareSyntaxSignature (function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_when_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3413)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_else_5F_instructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3414)), object->mAttribute_mEndOfElseInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3412)) ;
  const enumGalgasBool test_0 = var_ok.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_parseWhenInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_when_5F_expression, var_when_5F_instructionListForGeneration, var_else_5F_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3419))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3419)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                                categoryMethod_parseWhenInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_analyzeSyntaxInstruction (defineCategoryMethod_parseWhenInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@parseWhenInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3437)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3438)).add_operation (GALGAS_string (".isValidAndTrue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3438))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3438)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3439)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3447)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3448)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3456)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                           categoryMethod_parseWhenInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_generateInstruction (defineCategoryMethod_parseWhenInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@syntaxSendInstruction analyzeSyntaxInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                           const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                           const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                           const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                           const GALGAS_string /* constinArgument_inComponentName */,
                                                                           const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstruction * object = (const cPtr_syntaxSendInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstruction) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 3472)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' instruction is only allowed when syntax componant has 'translate' feature")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3473)) ;
  }
  GALGAS_semanticExpressionForGeneration var_expression ;
  callCategoryMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mAttribute_mExpression.ptr (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3477)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3476)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expression.reader_mResultType (SOURCE_FILE ("semanticAnalysis.galgas", 3483)).objectCompare (constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mStringType)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("'send' expresion should be an @string expression")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3484)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_syntaxSendInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, var_expression  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3487))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3487)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction (void) {
  enterCategoryMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                                categoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_analyzeSyntaxInstruction (defineCategoryMethod_syntaxSendInstruction_analyzeSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@syntaxSendInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxSendInstructionForGeneration * object = (const cPtr_syntaxSendInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxSendInstructionForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3500)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3502)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3503)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3503)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3503)).add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3504)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3504)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3504)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3504)).add_operation (GALGAS_string (".stringValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3504)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3504))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3503)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_syntaxSendInstructionForGeneration.mSlotID,
                                           categoryMethod_syntaxSendInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstructionForGeneration_generateInstruction (defineCategoryMethod_syntaxSendInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category reader '@trueExpressionForGeneration isTrueExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_trueExpressionForGeneration_isTrueExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (true) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_trueExpressionForGeneration_isTrueExpression (void) {
  enterCategoryReader_isTrueExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                        categoryReader_trueExpressionForGeneration_isTrueExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_trueExpressionForGeneration_isTrueExpression (defineCategoryReader_trueExpressionForGeneration_isTrueExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selfCopyInExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfCopyInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfCopyInExpressionForGeneration * object = (const cPtr_selfCopyInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfCopyInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 46)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 47)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 48)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfCopyInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_selfCopyInExpressionForGeneration.mSlotID,
                                          categoryMethod_selfCopyInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfCopyInExpressionForGeneration_generateExpression (defineCategoryMethod_selfCopyInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@hereExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_hereExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 59)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 59)) ;
  }
  outArgument_outCppExpression = function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)).add_operation (GALGAS_string ("->here ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_hereExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_hereExpressionForGeneration.mSlotID,
                                          categoryMethod_hereExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_hereExpressionForGeneration_generateExpression (defineCategoryMethod_hereExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@trueExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_trueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                           GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                           GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                           GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                           C_Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (true)") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_trueExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_trueExpressionForGeneration.mSlotID,
                                          categoryMethod_trueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_trueExpressionForGeneration_generateExpression (defineCategoryMethod_trueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@falseExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_falseExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * /* inObject */,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (false)") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_falseExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_falseExpressionForGeneration.mSlotID,
                                          categoryMethod_falseExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_falseExpressionForGeneration_generateExpression (defineCategoryMethod_falseExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalCharExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalCharExpressionForGeneration * object = (const cPtr_literalCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalCharExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (TO_UNICODE (").add_operation (object->mAttribute_mCharacter.reader_uint (SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)).reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 93)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalCharExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalCharExpressionForGeneration.mSlotID,
                                          categoryMethod_literalCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalCharExpressionForGeneration_generateExpression (defineCategoryMethod_literalCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalStringExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalStringExpressionForGeneration * object = (const cPtr_literalStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mString.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string::makeEmptyString ()") ;
  }else if (kBoolFalse == test_0) {
    outArgument_outCppExpression = GALGAS_string ("GALGAS_string (").add_operation (object->mAttribute_mString.reader_utf_38_Representation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 107)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 107)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalStringExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalStringExpressionForGeneration.mSlotID,
                                          categoryMethod_literalStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalStringExpressionForGeneration_generateExpression (defineCategoryMethod_literalStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalDoubleExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalDoubleExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalDoubleExpressionForGeneration * object = (const cPtr_literalDoubleExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalDoubleExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_double (").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 119)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 119)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalDoubleExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalDoubleExpressionForGeneration.mSlotID,
                                          categoryMethod_literalDoubleExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalDoubleExpressionForGeneration_generateExpression (defineCategoryMethod_literalDoubleExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalUIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUIntExpressionForGeneration * object = (const cPtr_literalUIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint ((uint32_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 130)).add_operation (GALGAS_string ("U)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalUIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalUIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalUInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalUInt_36__34_ExpressionForGeneration * object = (const cPtr_literalUInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalUInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_uint_36__34_ ((uint64_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)).add_operation (GALGAS_string ("ULL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 141)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalUInt_36__34_ExpressionForGeneration.mSlotID,
                                          categoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression (defineCategoryMethod_literalUInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@literalSIntExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSIntExpressionForGeneration * object = (const cPtr_literalSIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint ((int32_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)).add_operation (GALGAS_string ("L)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 152)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalSIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalSIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalSIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalBigIntExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalBigIntExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalBigIntExpressionForGeneration * object = (const cPtr_literalBigIntExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalBigIntExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bigint (\"").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 164)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 165)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 166))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 166)) ;
  outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 167)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalBigIntExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration.mSlotID,
                                          categoryMethod_literalBigIntExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalBigIntExpressionForGeneration_generateExpression (defineCategoryMethod_literalBigIntExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalSInt64ExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                          GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                          GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                          GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalSInt_36__34_ExpressionForGeneration * object = (const cPtr_literalSInt_36__34_ExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalSInt_36__34_ExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_sint_36__34_ ((int64_t) ").add_operation (object->mAttribute_mValue.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)).add_operation (GALGAS_string ("LL)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 178)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalSInt_36__34_ExpressionForGeneration.mSlotID,
                                          categoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression (defineCategoryMethod_literalSInt_36__34_ExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@defaultConstructorExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_defaultConstructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                         GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_defaultConstructorExpressionForGeneration * object = (const cPtr_defaultConstructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_defaultConstructorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 190)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 192)).add_operation (object->mAttribute_mResultType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 193)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 194)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 195)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 195)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_defaultConstructorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_defaultConstructorExpressionForGeneration.mSlotID,
                                          categoryMethod_defaultConstructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_defaultConstructorExpressionForGeneration_generateExpression (defineCategoryMethod_defaultConstructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@constructorExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_constructorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionForGeneration * object = (const cPtr_constructorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 206)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 207)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_10338 (object->mAttribute_mEffectiveParameterList, kEnumeration_up) ;
  while (enumerator_10338.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_10338.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 210)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 211)) ;
    enumerator_10338.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mConstructorType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 213)).add_operation (object->mAttribute_mConstructorName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 214)) ;
  cEnumerator_stringlist enumerator_10756 (var_parameterList, kEnumeration_up) ;
  while (enumerator_10756.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_10756.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 217)) ;
    if (enumerator_10756.hasNextObject ()) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 218)) ;
    }
    enumerator_10756.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.reader_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 223)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 225)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 225)) ;
    }
    outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 226))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 226)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 230)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outCppExpression.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 232)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 232))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 232)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_constructorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_constructorExpressionForGeneration.mSlotID,
                                          categoryMethod_constructorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_constructorExpressionForGeneration_generateExpression (defineCategoryMethod_constructorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionValueExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionValueExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                  GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionValueExpressionForGeneration * object = (const cPtr_optionValueExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionValueExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 248)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 249)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (GALGAS_string (" (gOption_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 251)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 252)).add_operation (GALGAS_string (".reader_value ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 252)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionValueExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionValueExpressionForGeneration.mSlotID,
                                          categoryMethod_optionValueExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionValueExpressionForGeneration_generateExpression (defineCategoryMethod_optionValueExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@optionCharExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionCharExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCharExpressionForGeneration * object = (const cPtr_optionCharExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCharExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 263)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 264))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 264)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_char (gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 266)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 266)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 267)).add_operation (GALGAS_string (".reader_char ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 267)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionCharExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionCharExpressionForGeneration.mSlotID,
                                          categoryMethod_optionCharExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCharExpressionForGeneration_generateExpression (defineCategoryMethod_optionCharExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@optionStringExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionStringExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionStringExpressionForGeneration * object = (const cPtr_optionStringExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionStringExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 278)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 279)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 281)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 281)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 282)).add_operation (GALGAS_string (".reader_string ())"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 282)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionStringExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionStringExpressionForGeneration.mSlotID,
                                          categoryMethod_optionStringExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionStringExpressionForGeneration_generateExpression (defineCategoryMethod_optionStringExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@optionCommentExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionCommentExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionCommentExpressionForGeneration * object = (const cPtr_optionCommentExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionCommentExpressionForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mOptionComponentIsPredefined.operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 293)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 294))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 294)) ;
  }
  outArgument_outCppExpression = GALGAS_string ("gOption_").add_operation (object->mAttribute_mOptionComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 296)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 296)).add_operation (object->mAttribute_mOptionEntryName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 297)).add_operation (GALGAS_string (".reader_comment ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 297)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionCommentExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_optionCommentExpressionForGeneration.mSlotID,
                                          categoryMethod_optionCommentExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionCommentExpressionForGeneration_generateExpression (defineCategoryMethod_optionCommentExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@concatExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatExpressionForGeneration * object = (const cPtr_concatExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_concatExpressionForGeneration) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 310)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 313)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_concat ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 315)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 316)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_concatExpressionForGeneration.mSlotID,
                                          categoryMethod_concatExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatExpressionForGeneration_generateExpression (defineCategoryMethod_concatExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@orExpressionForGeneration generateExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionForGeneration * object = (const cPtr_orExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 327)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 327)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 330)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 333)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_or ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 335)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 335)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 336)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_orExpressionForGeneration.mSlotID,
                                          categoryMethod_orExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orExpressionForGeneration_generateExpression (defineCategoryMethod_orExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@orShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_orShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionForGeneration * object = (const cPtr_orShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 347)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 349)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 357)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 358)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue != ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 359)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 361)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 362)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 369)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 370)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 371)) ;
  outArgument_outCppExpression = var_testVar ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_orShortExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_orShortExpressionForGeneration.mSlotID,
                                          categoryMethod_orShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_orShortExpressionForGeneration_generateExpression (defineCategoryMethod_orShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@xorExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_xorExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionForGeneration * object = (const cPtr_xorExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 384)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 384)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 386)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 394)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_xor ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 402)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 402)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 403)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_xorExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_xorExpressionForGeneration.mSlotID,
                                          categoryMethod_xorExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_xorExpressionForGeneration_generateExpression (defineCategoryMethod_xorExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@closedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_closedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionForGeneration * object = (const cPtr_closedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 414)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 414)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 416)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 424)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 433)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string (").add_operation (GALGAS_uint (1), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 434)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_closedSliceExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_closedSliceExpressionForGeneration.mSlotID,
                                          categoryMethod_closedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_closedSliceExpressionForGeneration_generateExpression (defineCategoryMethod_closedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@openedSliceExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_openedSliceExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionForGeneration * object = (const cPtr_openedSliceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 445)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 447)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 455)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_range (").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 464)).add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 465)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_openedSliceExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_openedSliceExpressionForGeneration.mSlotID,
                                          categoryMethod_openedSliceExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_openedSliceExpressionForGeneration_generateExpression (defineCategoryMethod_openedSliceExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@andExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionForGeneration * object = (const cPtr_andExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 476)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 476)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 478)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 486)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".operator_and ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 494)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 495)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_andExpressionForGeneration.mSlotID,
                                          categoryMethod_andExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andExpressionForGeneration_generateExpression (defineCategoryMethod_andExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@andShortExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_andShortExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionForGeneration * object = (const cPtr_andShortExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 506)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 506)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 508)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 516)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_bool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)).add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 517)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)).add_operation (GALGAS_string (".boolEnum ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 518)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 520)) ;
  }
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 521)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_testVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 528)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 529)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 530)) ;
  outArgument_outCppExpression = var_testVar ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_andShortExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_andShortExpressionForGeneration.mSlotID,
                                          categoryMethod_andShortExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_andShortExpressionForGeneration_generateExpression (defineCategoryMethod_andShortExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@equalExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_equalExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionForGeneration * object = (const cPtr_equalExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 542)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 545)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 548)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 550)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_equalExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_equalExpressionForGeneration.mSlotID,
                                          categoryMethod_equalExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_equalExpressionForGeneration_generateExpression (defineCategoryMethod_equalExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@notEqualExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionForGeneration * object = (const cPtr_notEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 561)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 561)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 564)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 567)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsNotEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 569)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notEqualExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_notEqualExpressionForGeneration.mSlotID,
                                          categoryMethod_notEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notEqualExpressionForGeneration_generateExpression (defineCategoryMethod_notEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@lowerOrEqualExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lowerOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionForGeneration * object = (const cPtr_lowerOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 580)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 580)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 583)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 586)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsInfOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 588)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lowerOrEqualExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionForGeneration.mSlotID,
                                          categoryMethod_lowerOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionForGeneration_generateExpression (defineCategoryMethod_lowerOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@greaterOrEqualExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_greaterOrEqualExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionForGeneration * object = (const cPtr_greaterOrEqualExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 599)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 599)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 602)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 605)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsSupOrEqual, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 607)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_greaterOrEqualExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionForGeneration.mSlotID,
                                          categoryMethod_greaterOrEqualExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionForGeneration_generateExpression (defineCategoryMethod_greaterOrEqualExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@strictGreaterExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictGreaterExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionForGeneration * object = (const cPtr_strictGreaterExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 618)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 618)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 621)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 624)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictSup, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 626)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictGreaterExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionForGeneration.mSlotID,
                                          categoryMethod_strictGreaterExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictGreaterExpressionForGeneration_generateExpression (defineCategoryMethod_strictGreaterExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@strictLowerExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_strictLowerExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                  GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                  GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                  GALGAS_string & outArgument_outCppExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionForGeneration * object = (const cPtr_strictLowerExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 637)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 640)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 643)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (kIsStrictInf, ").add_operation (var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)).add_operation (GALGAS_string (".objectCompare ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 645)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_strictLowerExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_strictLowerExpressionForGeneration.mSlotID,
                                          categoryMethod_strictLowerExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_strictLowerExpressionForGeneration_generateExpression (defineCategoryMethod_strictLowerExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@rightShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_rightShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionForGeneration * object = (const cPtr_rightShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 656)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 656)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 659)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 662)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".right_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 664)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 665)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_rightShiftExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_rightShiftExpressionForGeneration.mSlotID,
                                          categoryMethod_rightShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_rightShiftExpressionForGeneration_generateExpression (defineCategoryMethod_rightShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@leftShiftExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_leftShiftExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                GALGAS_string & outArgument_outCppExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionForGeneration * object = (const cPtr_leftShiftExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 676)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 679)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 682)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".left_shift_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 684)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 684)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 685)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_leftShiftExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_leftShiftExpressionForGeneration.mSlotID,
                                          categoryMethod_leftShiftExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_leftShiftExpressionForGeneration_generateExpression (defineCategoryMethod_leftShiftExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@addExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionForGeneration * object = (const cPtr_addExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 697)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 699)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 707)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 715)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 715)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 716)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 717)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 717)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionForGeneration.mSlotID,
                                          categoryMethod_addExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionForGeneration_generateExpression (defineCategoryMethod_addExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@addExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_addExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowForGeneration * object = (const cPtr_addExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 729)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 729)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 731)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 739)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".add_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 747)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_addExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_addExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_addExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_addExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@subExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionForGeneration * object = (const cPtr_subExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 758)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 761)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 764)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 766)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 767)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 768)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 768)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionForGeneration.mSlotID,
                                          categoryMethod_subExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionForGeneration_generateExpression (defineCategoryMethod_subExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@subExpressionNoOverflowForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_subExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowForGeneration * object = (const cPtr_subExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 779)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 779)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 782)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 785)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".substract_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 787)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_subExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_subExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_subExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_subExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@multiplicationExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     GALGAS_string & outArgument_outCppExpression,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionForGeneration * object = (const cPtr_multiplicationExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 798)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 798)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 801)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 804)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".multiply_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 806)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 806)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 807)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 808)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 808)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionForGeneration.mSlotID,
                                          categoryMethod_multiplicationExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionForGeneration_generateExpression (defineCategoryMethod_multiplicationExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@multiplicationExpressionNoOverflowForGeneration generateExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowForGeneration * object = (const cPtr_multiplicationExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 819)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 819)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 822)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 825)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".multiply_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 827)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 827)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 827)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_multiplicationExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@divisionExpressionForGeneration generateExpression'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               GALGAS_string & outArgument_outCppExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionForGeneration * object = (const cPtr_divisionExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 838)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 841)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 844)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".divide_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 846)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 846)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 847)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 848)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 848)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionForGeneration.mSlotID,
                                          categoryMethod_divisionExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionForGeneration_generateExpression (defineCategoryMethod_divisionExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@divisionExpressionNoOverflowForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowForGeneration * object = (const cPtr_divisionExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 859)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 859)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 862)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 865)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".divide_operation_no_ovf ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 867)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_divisionExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@moduloExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_moduloExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionForGeneration * object = (const cPtr_moduloExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mLeftExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 878)) ;
  GALGAS_string var_leftTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLeftExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_leftTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 881)) ;
  GALGAS_string var_rightTemporaryOperand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mRightExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 884)) ;
  outArgument_outCppExpression = var_leftTemporaryOperand.add_operation (GALGAS_string (".modulo_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 886)).add_operation (var_rightTemporaryOperand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 886)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 887)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 888)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 888)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_moduloExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_moduloExpressionForGeneration.mSlotID,
                                          categoryMethod_moduloExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_moduloExpressionForGeneration_generateExpression (defineCategoryMethod_moduloExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@unaryMinusExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionForGeneration * object = (const cPtr_unaryMinusExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 899)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 899)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 902)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_unary_minus ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 904)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 904)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 905)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 906)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 906)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionForGeneration.mSlotID,
                                          categoryMethod_unaryMinusExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionForGeneration_generateExpression (defineCategoryMethod_unaryMinusExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@unaryMinusExpressionNoOverflowForGeneration generateExpression'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                           GALGAS_string & outArgument_outCppExpression,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionNoOverflowForGeneration * object = (const cPtr_unaryMinusExpressionNoOverflowForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionNoOverflowForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 917)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 919)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_unary_minus_no_ovf ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 927)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionNoOverflowForGeneration.mSlotID,
                                          categoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression (defineCategoryMethod_unaryMinusExpressionNoOverflowForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@notExpressionForGeneration generateExpression'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_notExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                          GALGAS_string & ioArgument_ioGeneratedCode,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                          GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                          GALGAS_string & outArgument_outCppExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionForGeneration * object = (const cPtr_notExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 938)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 938)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 941)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_not ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 943)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_notExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_notExpressionForGeneration.mSlotID,
                                          categoryMethod_notExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_notExpressionForGeneration_generateExpression (defineCategoryMethod_notExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@structFieldAccessExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structFieldAccessExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                        GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                        GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                        GALGAS_string & outArgument_outCppExpression,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionForGeneration * object = (const cPtr_structFieldAccessExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 954)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 956)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)).add_operation (object->mAttribute_mStructFieldName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 958)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structFieldAccessExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionForGeneration.mSlotID,
                                          categoryMethod_structFieldAccessExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structFieldAccessExpressionForGeneration_generateExpression (defineCategoryMethod_structFieldAccessExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@tildeExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_tildeExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_tildeExpressionForGeneration * object = (const cPtr_tildeExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_tildeExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 969)) ;
  GALGAS_string var_operand ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_operand, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 972)) ;
  outArgument_outCppExpression = var_operand.add_operation (GALGAS_string (".operator_tilde ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 974)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_tildeExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_tildeExpressionForGeneration.mSlotID,
                                          categoryMethod_tildeExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_tildeExpressionForGeneration_generateExpression (defineCategoryMethod_tildeExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ifExpressionForGeneration generateExpression'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionForGeneration * object = (const cPtr_ifExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionForGeneration) ;
  GALGAS_string var_ifExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIfExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_ifExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 987)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 989)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mThenExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 990)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 991)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (var_ifExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 992)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 993)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 993))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 993)) ;
  GALGAS_string var_thenExpression ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 996)) ;
  }
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mThenExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_thenExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 997)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)).add_operation (var_thenExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 998)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 999)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1001)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1002)) ;
  }
  GALGAS_string var_elseExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mElseExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_elseExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1004)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (outArgument_outCppExpression.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)).add_operation (var_elseExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1005)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1006)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1007)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_ifExpressionForGeneration.mSlotID,
                                          categoryMethod_ifExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifExpressionForGeneration_generateExpression (defineCategoryMethod_ifExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@literalTypeInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_literalTypeInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionForGeneration * object = (const cPtr_literalTypeInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_type (& kTypeDescriptor_GALGAS_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1018)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1019)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_literalTypeInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionForGeneration.mSlotID,
                                          categoryMethod_literalTypeInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_literalTypeInExpressionForGeneration_generateExpression (defineCategoryMethod_literalTypeInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@extractObjectInExpressionForGeneration generateExpression'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_extractObjectInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extractObjectInExpressionForGeneration * object = (const cPtr_extractObjectInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extractObjectInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1030)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1030)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1030)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1032)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1040)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1040)).add_operation (GALGAS_string ("::extractObject ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1040)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1041)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1041)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1042)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1042)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1043)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1042)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1043)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1044)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1044)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_extractObjectInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_extractObjectInExpressionForGeneration.mSlotID,
                                          categoryMethod_extractObjectInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_extractObjectInExpressionForGeneration_generateExpression (defineCategoryMethod_extractObjectInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@testDynamicClassInExpressionForGeneration generateExpression'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_testDynamicClassInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         GALGAS_string & outArgument_outCppExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionForGeneration * object = (const cPtr_testDynamicClassInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionForGeneration) ;
  GALGAS_string var_typeNameRepresentation = object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1055)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1055)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1057)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mCastType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1065)) ;
  switch (object->mAttribute_mTypeComparisonKind.enumValue ()) {
  case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (").add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1068)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1068)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1069)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1070)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool (NULL != dynamic_cast <const cPtr_").add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1072)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1073)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1074)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1074)) ;
    }
    break ;
  case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
    {
      outArgument_outCppExpression = GALGAS_string ("GALGAS_bool ((").add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1076)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1077)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1078)).add_operation (var_typeNameRepresentation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1078)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1079)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1080)).add_operation (GALGAS_string (".ptr ())))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1080)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_testDynamicClassInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionForGeneration.mSlotID,
                                          categoryMethod_testDynamicClassInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionForGeneration_generateExpression (defineCategoryMethod_testDynamicClassInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@castInExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_castInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionForGeneration * object = (const cPtr_castInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionForGeneration) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1092)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1093)) ;
  GALGAS_string var_receiverExpression ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1095)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1104)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1105)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1105))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1103)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1106)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1109)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1110)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1111)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (GALGAS_string (" = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1112)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113)).add_operation (GALGAS_string ("}else{\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1113))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1108)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1115)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1117)).add_operation (GALGAS_string ("->castError (\""), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1117)).add_operation (object->mAttribute_mTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1118)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1117)).add_operation (GALGAS_string ("\", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1118)).add_operation (var_receiverExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1119)).add_operation (GALGAS_string (".ptr ()->classDescriptor ()"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1119)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1120)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1119)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1120))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1116)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1121)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1122)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1122)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1123)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1124)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1125)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_castInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_castInExpressionForGeneration.mSlotID,
                                          categoryMethod_castInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_castInExpressionForGeneration_generateExpression (defineCategoryMethod_castInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@varInExpressionForGeneration generateExpression'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_varInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                            GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionForGeneration * object = (const cPtr_varInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1136)) ;
  outArgument_outCppExpression = object->mAttribute_mCppVarName ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1138)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_varInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_varInExpressionForGeneration.mSlotID,
                                          categoryMethod_varInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_varInExpressionForGeneration_generateExpression (defineCategoryMethod_varInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@readerCallExpressionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readerCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readerCallExpressionForGeneration * object = (const cPtr_readerCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readerCallExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1152)) ;
  GALGAS_string var_receiverCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1154)) ;
  GALGAS_stringlist var_readerArgumentCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1156)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_51460 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_51460.hasCurrentObject ()) {
    GALGAS_string var_argumentCppName ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_51460.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1159)) ;
    var_readerArgumentCppNameList.addAssign_operation (var_argumentCppName  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1160)) ;
    enumerator_51460.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      categoryMethod_addHeaderFileName (categoryReader_baseType (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1165)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1165)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1165)) ;
      GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1166)) ;
      GALGAS_bool var_searching = GALGAS_bool (true) ;
      if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1168)).isValid ()) {
        uint32_t variant_51952 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1168)).uintValue () ;
        bool loop_51952 = true ;
        while (loop_51952) {
          loop_51952 = var_searching.isValid () ;
          if (loop_51952) {
            loop_51952 = var_searching.boolValue () ;
          }
          if (loop_51952 && (0 == variant_51952)) {
            loop_51952 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1168)) ;
          }
          if (loop_51952) {
            variant_51952 -- ;
            const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)).reader_isNull (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)).operator_not (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1169)).boolEnum () ;
            if (kBoolTrue == test_0) {
              const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)).reader_hasKey (object->mAttribute_mReaderName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1170)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1171)) ;
              }else if (kBoolFalse == test_1) {
                var_searching = GALGAS_bool (false) ;
              }
            }else if (kBoolFalse == test_0) {
              var_searching = GALGAS_bool (false) ;
            }
          }
        }
      }
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)).add_operation (object->mAttribute_mReaderName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1179)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1180)) ;
      }
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1181)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outCppExpression = GALGAS_string ("callCategoryReader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1182)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1182)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1182)).add_operation (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1183)) ;
      }else if (kBoolFalse == test_2) {
        categoryMethod_addHeaderFileName (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1185)) ;
        outArgument_outCppExpression = GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1186)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName ;
      cEnumerator_stringlist enumerator_53000 (object->mAttribute_mFieldList, kEnumeration_up) ;
      while (enumerator_53000.hasCurrentObject ()) {
        outArgument_outCppExpression.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_53000.current_mValue (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1191))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1191)) ;
        enumerator_53000.gotoNextObject () ;
      }
      categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1193)) ;
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (".reader_").add_operation (object->mAttribute_mReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1194)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_53269 (var_readerArgumentCppNameList, kEnumeration_up) ;
  while (enumerator_53269.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_53269.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1197)) ;
    if (enumerator_53269.hasNextObject ()) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1198)) ;
    }
    enumerator_53269.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_readerArgumentCppNameList.reader_length (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1200)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1202)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1202)) ;
      }
      outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1203)) ;
    }
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1206)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1206)) ;
      }
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207)).add_operation (GALGAS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1207)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1209)) ;
    }
  }
  outArgument_outCppExpression.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1211)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readerCallExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_readerCallExpressionForGeneration.mSlotID,
                                          categoryMethod_readerCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readerCallExpressionForGeneration_generateExpression (defineCategoryMethod_readerCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@functionCallExpressionForGeneration generateExpression'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionCallExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionForGeneration * object = (const cPtr_functionCallExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1223)) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1225))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1225)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1227)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_54406 (object->mAttribute_mExpressions, kEnumeration_up) ;
  while (enumerator_54406.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_54406.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1230)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1231)) ;
    enumerator_54406.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1233)) ;
  cEnumerator_stringlist enumerator_54719 (var_parameterList, kEnumeration_up) ;
  while (enumerator_54719.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (enumerator_54719.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1235))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1235)) ;
    enumerator_54719.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1237)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1237)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1238))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1238)) ;
  outArgument_outCppExpression.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1239)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1239))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1239)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionCallExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_functionCallExpressionForGeneration.mSlotID,
                                          categoryMethod_functionCallExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionCallExpressionForGeneration_generateExpression (defineCategoryMethod_functionCallExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@filewrapperInExpressionForGeneration generateExpression'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                    GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                    GALGAS_string & outArgument_outCppExpression,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionForGeneration * object = (const cPtr_filewrapperInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1252))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1252)) ;
  outArgument_outCppExpression = GALGAS_string ("GALGAS_filewrapper (gWrapperDirectory_0_").add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1253)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1253)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1253)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionForGeneration.mSlotID,
                                          categoryMethod_filewrapperInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperInExpressionForGeneration_generateExpression (defineCategoryMethod_filewrapperInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@filewrapperTemplateInExpressionForGeneration generateExpression'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppExpression,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionForGeneration * object = (const cPtr_filewrapperTemplateInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1265)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1266)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_56132 (object->mAttribute_mActualOutputParameterList, kEnumeration_up) ;
  while (enumerator_56132.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_56132.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1269)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1276)) ;
    enumerator_56132.gotoNextObject () ;
  }
  outArgument_outCppExpression = GALGAS_string ("GALGAS_string (filewrapperTemplate_").add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (object->mAttribute_mFilewrapperTemplateName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1278)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1279)) ;
  cEnumerator_stringlist enumerator_56608 (var_parameterList, kEnumeration_up) ;
  while (enumerator_56608.hasCurrentObject ()) {
    outArgument_outCppExpression.dotAssign_operation (GALGAS_string (", ").add_operation (enumerator_56608.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1281))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1281)) ;
    enumerator_56608.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1283)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1283)) ;
  }
  outArgument_outCppExpression.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1284)).add_operation (GALGAS_string ("))"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1284))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1284)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionForGeneration.mSlotID,
                                          categoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionForGeneration_generateExpression (defineCategoryMethod_filewrapperTemplateInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@filewrapperStaticPathInExpressionForGeneration generateExpression'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                              GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                              GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                              GALGAS_string & outArgument_outCppExpression,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperStaticPathInExpressionForGeneration * object = (const cPtr_filewrapperStaticPathInExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperStaticPathInExpressionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1296)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsTextFile.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string ("GALGAS_string") ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_string ("GALGAS_data") ;
  }
  outArgument_outCppExpression = temp_0 ;
  outArgument_outCppExpression.dotAssign_operation (GALGAS_string (" (gWrapperFileContent_").add_operation (object->mAttribute_mFilewrapperFileIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)).add_operation (object->mAttribute_mFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1298)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_filewrapperStaticPathInExpressionForGeneration.mSlotID,
                                          categoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression (defineCategoryMethod_filewrapperStaticPathInExpressionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@lexiqueIntrospectionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueIntrospectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionForGeneration * object = (const cPtr_lexiqueIntrospectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1312))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1312)) ;
  outArgument_outCppExpression = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)).add_operation (GALGAS_string ("::"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)).add_operation (object->mAttribute_mLexiqueReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1314)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1313)).add_operation (GALGAS_string ("("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1314)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1315)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1315)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1315)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueIntrospectionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionForGeneration.mSlotID,
                                          categoryMethod_lexiqueIntrospectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueIntrospectionForGeneration_generateExpression (defineCategoryMethod_lexiqueIntrospectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@expressionCollectionValueForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inTargetType */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                 const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValueForGeneration * object = (const cPtr_expressionCollectionValueForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValueForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1339)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (constinArgument_inCppTargetVar  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1346)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".dotAssign_operation (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1347)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (void) {
  enterCategoryMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionCollectionValueForGeneration.mSlotID,
                                                     categoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionValueForGeneration_generateCollectionElementCode (defineCategoryMethod_expressionCollectionValueForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@expressionListCollectionForGeneration generateCollectionElementCode'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode (const cPtr_abstractCollectionValueElementForGeneration * inObject,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inTargetType,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                const GALGAS_string constinArgument_inCppTargetVar,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionForGeneration * object = (const cPtr_expressionListCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionForGeneration) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1360)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_60027 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_60027.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_60027.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1362)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1369)) ;
    enumerator_60027.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (constinArgument_inCppTargetVar  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1372)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".addAssign_operation (")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1374)) ;
  cEnumerator_stringlist enumerator_60413 (var_parameterList, kEnumeration_up) ;
  while (enumerator_60413.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_60413.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1376)) ;
    if (enumerator_60413.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1377)) ;
    }
    enumerator_60413.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTargetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1379)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1380)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)) COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1381)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mExpressionLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1383)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode (void) {
  enterCategoryMethod_generateCollectionElementCode (kTypeDescriptor_GALGAS_expressionListCollectionForGeneration.mSlotID,
                                                     categoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionListCollectionForGeneration_generateCollectionElementCode (defineCategoryMethod_expressionListCollectionForGeneration_generateCollectionElementCode, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@expressionCollectionForGeneration generateExpression'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_expressionCollectionForGeneration_generateExpression (const cPtr_semanticExpressionForGeneration * inObject,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 GALGAS_string & outArgument_outCppExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionForGeneration * object = (const cPtr_expressionCollectionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1395)) ;
  outArgument_outCppExpression = GALGAS_string ("temp_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1397)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1397)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1397)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)).add_operation (object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (object->mAttribute_mResultType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).reader_identifierRepresentation (SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (categoryReader_sourceFile (object->mAttribute_mLocation, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1400))  COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1399)) ;
  cEnumerator_collectionValueElementListForGeneration enumerator_61721 (object->mAttribute_mElementList, kEnumeration_up) ;
  while (enumerator_61721.hasCurrentObject ()) {
    callCategoryMethod_generateCollectionElementCode ((const cPtr_abstractCollectionValueElementForGeneration *) enumerator_61721.current_mElement (HERE).ptr (), object->mAttribute_mResultType, ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionGeneration.galgas", 1403)) ;
    enumerator_61721.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_expressionCollectionForGeneration_generateExpression (void) {
  enterCategoryMethod_generateExpression (kTypeDescriptor_GALGAS_expressionCollectionForGeneration.mSlotID,
                                          categoryMethod_expressionCollectionForGeneration_generateExpression) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_expressionCollectionForGeneration_generateExpression (defineCategoryMethod_expressionCollectionForGeneration_generateExpression, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@outputActualParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_string & ioArgument_ioImplementation,
                                                                                       GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                       GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       GALGAS_string & outArgument_outCppName,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterForGeneration * object = (const cPtr_outputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 26)) ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mOutputActualParameterExpression.ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputActualParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputActualParameterForGeneration.mSlotID,
                                               categoryMethod_outputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputActualParameterForGeneration_generateActualParameter (defineCategoryMethod_outputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@outputInputActualParameterForGeneration generateActualParameter'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_outputInputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                            GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                            GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                            GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                            GALGAS_string & outArgument_outCppName,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterForGeneration * object = (const cPtr_outputInputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterForGeneration) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_2989 (object->mAttribute_mTypeList, kEnumeration_up) ;
  while (enumerator_2989.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_2989.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 41)) ;
    enumerator_2989.gotoNextObject () ;
  }
  outArgument_outCppName = object->mAttribute_mOutputInputVariableCppName ;
  cEnumerator_lstringlist enumerator_3117 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_3117.hasCurrentObject ()) {
    outArgument_outCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_3117.current_mValue (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 45)) ;
    enumerator_3117.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mOutputInputVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 47)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_outputInputActualParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_outputInputActualParameterForGeneration.mSlotID,
                                               categoryMethod_outputInputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_outputInputActualParameterForGeneration_generateActualParameter (defineCategoryMethod_outputInputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@inputActualParameterForGeneration generateActualParameter'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputActualParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                      GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                      GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & outArgument_outCppName,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualParameterForGeneration * object = (const cPtr_inputActualParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualParameterForGeneration) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 61)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputActualParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputActualParameterForGeneration.mSlotID,
                                               categoryMethod_inputActualParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputActualParameterForGeneration_generateActualParameter (defineCategoryMethod_inputActualParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@inputJokerParameterForGeneration generateActualParameter'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_inputJokerParameterForGeneration_generateActualParameter (const cPtr_actualParameterForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                     GALGAS_string & ioArgument_ioImplementation,
                                                                                     GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                                     GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                                     GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                     GALGAS_string & outArgument_outCppName,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerParameterForGeneration * object = (const cPtr_inputJokerParameterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerParameterForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mFormalArgumentType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 75)) ;
  outArgument_outCppName = object->mAttribute_mInputActualCppName ;
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mFormalArgumentType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 77)) ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  ioArgument_ioOutputVariableList.addAssign_operation (object->mAttribute_mInputActualCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_inputJokerParameterForGeneration_generateActualParameter (void) {
  enterCategoryMethod_generateActualParameter (kTypeDescriptor_GALGAS_inputJokerParameterForGeneration.mSlotID,
                                               categoryMethod_inputJokerParameterForGeneration_generateActualParameter) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_inputJokerParameterForGeneration_generateActualParameter (defineCategoryMethod_inputJokerParameterForGeneration_generateActualParameter, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@semanticBlockInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticBlockInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticBlockInstructionForGeneration * object = (const cPtr_semanticBlockInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticBlockInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 90)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 99)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticBlockInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_semanticBlockInstructionForGeneration.mSlotID,
                                           categoryMethod_semanticBlockInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticBlockInstructionForGeneration_generateInstruction (defineCategoryMethod_semanticBlockInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithSourceExpressionForGeneration generateInstruction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                    C_Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithSourceExpressionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 110)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 111)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 118)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration.mSlotID,
                                           categoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithSourceExpressionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@localVariableDeclarationForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableDeclarationForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableDeclarationForGeneration * object = (const cPtr_localVariableDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableDeclarationForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mVariableType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 129)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mVariableType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (object->mAttribute_mCppVariableName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 130)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableDeclarationForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableDeclarationForGeneration.mSlotID,
                                           categoryMethod_localVariableDeclarationForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableDeclarationForGeneration_generateInstruction (defineCategoryMethod_localVariableDeclarationForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithDefaultConstructorForGeneration generateInstruction'*
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                      GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                                      const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                      C_Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 141)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)).add_operation (object->mAttribute_mTargetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 143)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 143)).add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 144)).add_operation (object->mAttribute_mTargetType.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 145)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 146)).add_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 147))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 142)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration.mSlotID,
                                           categoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithDefaultConstructorForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//Overriding category method '@localVariableOrConstantDeclarationWithConstructorCallForGeneration generateInstruction' *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration * object = (const cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_localVariableOrConstantDeclarationWithConstructorCallForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 158)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 159)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_8125 (object->mAttribute_mConstructorArguments, kEnumeration_up) ;
  while (enumerator_8125.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_8125.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 162)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 163)) ;
    enumerator_8125.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)).add_operation (object->mAttribute_mTargetVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 166)).add_operation (GALGAS_string (" = GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 166)).add_operation (object->mAttribute_mTargetType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 167)).add_operation (GALGAS_string ("::constructor_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 167)).add_operation (object->mAttribute_mConstructorName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 168)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 168))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 165)) ;
  cEnumerator_stringlist enumerator_8663 (var_parameterList, kEnumeration_up) ;
  while (enumerator_8663.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_8663.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 171)) ;
    if (enumerator_8663.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 172)) ;
    }
    enumerator_8663.gotoNextObject () ;
  }
  GALGAS_bool var_needsComma = GALGAS_bool (kIsStrictSup, var_parameterList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 174)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = var_needsComma.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 177)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 179)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 179)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 180))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 180)) ;
    var_needsComma = GALGAS_bool (true) ;
  }
  const enumGalgasBool test_2 = var_needsComma.boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 184)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 184))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 184)) ;
  }else if (kBoolFalse == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 186)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_localVariableOrConstantDeclarationWithConstructorCallForGeneration.mSlotID,
                                           categoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction (defineCategoryMethod_localVariableOrConstantDeclarationWithConstructorCallForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@assignmentInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_assignmentInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_assignmentInstructionForGeneration * object = (const cPtr_assignmentInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_assignmentInstructionForGeneration) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 199)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 200)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mTargetCppName ;
  cEnumerator_lstringlist enumerator_9907 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_9907.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_9907.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 204)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 204))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 204)) ;
    enumerator_9907.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)).add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 206)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mTargetCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 207)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_assignmentInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_assignmentInstructionForGeneration.mSlotID,
                                           categoryMethod_assignmentInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_assignmentInstructionForGeneration_generateInstruction (defineCategoryMethod_assignmentInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@dropInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_dropInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                             const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dropInstructionForGeneration * object = (const cPtr_dropInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dropInstructionForGeneration) ;
  cEnumerator_unifiedTypeMapProxyList enumerator_10555 (object->mAttribute_mDropTypeList, kEnumeration_up) ;
  while (enumerator_10555.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_10555.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 219)) ;
    enumerator_10555.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_10629 (object->mAttribute_mDropList, kEnumeration_up) ;
  while (enumerator_10629.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_10629.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222)).add_operation (object->mAttribute_mComment, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 222)) ;
    enumerator_10629.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_dropInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_dropInstructionForGeneration.mSlotID,
                                           categoryMethod_dropInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_dropInstructionForGeneration_generateInstruction (defineCategoryMethod_dropInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@concatInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_concatInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_concatInstructionForGeneration * object = (const cPtr_concatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_concatInstructionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 234)) ;
  GALGAS_string var_sourceVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSourceExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 235)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 242)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mTargetVariableCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 243)) ;
  cEnumerator_lstringlist enumerator_11484 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_11484.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_11484.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 245))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 245)) ;
    enumerator_11484.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".dotAssign_operation (").add_operation (var_sourceVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 247)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mTargetVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 248)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_concatInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_concatInstructionForGeneration.mSlotID,
                                           categoryMethod_concatInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_concatInstructionForGeneration_generateInstruction (defineCategoryMethod_concatInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ifInstructionForGeneration generateInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ifInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                           GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                           const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                           GALGAS_string & ioArgument_ioGeneratedCode,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifInstructionForGeneration * object = (const cPtr_ifInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_ifInstructionForGeneration) ;
  GALGAS_string var_cppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mIFexpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 261)) ;
  GALGAS_string var_testVar = GALGAS_string ("test_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 262)) ;
  ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 262)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const enumGalgasBool ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 263)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 263)).add_operation (var_cppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 263)).add_operation (GALGAS_string (".boolEnum () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 263))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 263)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (kBoolTrue == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 265)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 265))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 265)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_then_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 266)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_m_5F_else_5F_instructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 274)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else if (kBoolFalse == ").add_operation (var_testVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 275)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 275))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 275)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_m_5F_else_5F_instructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 276)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 285)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ifInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_ifInstructionForGeneration.mSlotID,
                                           categoryMethod_ifInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ifInstructionForGeneration_generateInstruction (defineCategoryMethod_ifInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@errorInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_errorInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_errorInstructionForGeneration * object = (const cPtr_errorInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_errorInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 298)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mErrorExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 301)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 304)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 304)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 305)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 309)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 309)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)).add_operation (GALGAS_string ("->emitSemanticError ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 311)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 311))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 310)) ;
  cEnumerator_stringlist enumerator_14726 (object->mAttribute_mBuiltVariableCppNameList, kEnumeration_up) ;
  while (enumerator_14726.hasCurrentObject ()) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (enumerator_14726.current_mValue (HERE) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 314)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_14726.current_mValue (HERE).add_operation (GALGAS_string (".drop () ; // Release error dropped variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 315))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 315)) ;
    enumerator_14726.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_errorInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_errorInstructionForGeneration.mSlotID,
                                           categoryMethod_errorInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_errorInstructionForGeneration_generateInstruction (defineCategoryMethod_errorInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@warningInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_warningInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_warningInstructionForGeneration * object = (const cPtr_warningInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_warningInstructionForGeneration) ;
  GALGAS_string var_receiverCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 329)) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWarningExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 332)) ;
  const enumGalgasBool test_0 = object->mAttribute_mUseLocationReader.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_locationVar = GALGAS_string ("location_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 335)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 335)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_location ").add_operation (var_locationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336)).add_operation (GALGAS_string (".reader_location (HERE)) ; // Implicit use of 'location' reader\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 336)) ;
    var_receiverCppVarName = var_locationVar ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 340)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 340)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)).add_operation (GALGAS_string ("->emitSemanticWarning ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)).add_operation (var_receiverCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 342))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 341)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_warningInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_warningInstructionForGeneration.mSlotID,
                                           categoryMethod_warningInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_warningInstructionForGeneration_generateInstruction (defineCategoryMethod_warningInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@methodCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_methodCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_methodCallInstructionForGeneration * object = (const cPtr_methodCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_methodCallInstructionForGeneration) ;
  GALGAS_string var_receiverCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 358)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (var_receiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 359)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 361)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 362)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 363)) ;
  cEnumerator_actualParameterListForGeneration enumerator_17297 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_17297.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_17297.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 366)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 367)) ;
    enumerator_17297.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 372)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 372)).add_operation (object->mAttribute_mMethodName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 372))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 372)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 373)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 373)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryMethod_").add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)).add_operation (GALGAS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)).add_operation (object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375)).add_operation (GALGAS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 375))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 374)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 377)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".method_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 380)).add_operation (object->mAttribute_mMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 380)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 380))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 380)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_18333 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_18333.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_18333.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 383)) ;
    if (enumerator_18333.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 384)) ;
    }
    enumerator_18333.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 386)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 388)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 388)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 389))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 389)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 390)) ;
    }
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 393)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 393)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 394))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 394)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 395)) ;
    }else if (kBoolFalse == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 397)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 399)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 399))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 399)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_methodCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_methodCallInstructionForGeneration.mSlotID,
                                           categoryMethod_methodCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_methodCallInstructionForGeneration_generateInstruction (defineCategoryMethod_methodCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@routineCallInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineCallInstructionForGeneration * object = (const cPtr_routineCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineCallInstructionForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 410))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 410)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 411)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 413)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 414)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 415)) ;
  cEnumerator_actualParameterListForGeneration enumerator_19610 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_19610.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_19610.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 417)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 426)) ;
    enumerator_19610.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 429)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 429)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 429)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 429))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 429)) ;
  cEnumerator_stringlist enumerator_20072 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_20072.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_20072.current_mValue (HERE).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 431))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 431)) ;
    enumerator_20072.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 433)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 433)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 434)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 434)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mRoutineName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 434)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 434)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 434))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 434)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 435)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_routineCallInstructionForGeneration.mSlotID,
                                           categoryMethod_routineCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineCallInstructionForGeneration_generateInstruction (defineCategoryMethod_routineCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@setterCallInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_setterCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_setterCallInstructionForGeneration * object = (const cPtr_setterCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_setterCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 447)) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_20811 (object->mAttribute_mReceiverStructAttributes, kEnumeration_up) ;
  while (enumerator_20811.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_20811.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 450)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 450))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 450)) ;
    enumerator_20811.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverBaseName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 452)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 454)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 455)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 456)) ;
  cEnumerator_actualParameterListForGeneration enumerator_21139 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_21139.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_21139.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 458)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 467)) ;
    enumerator_21139.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mMethodBaseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 472)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 472)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 472))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 472)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 473)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 473)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mReceiverType.reader_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 474)).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 474)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (object->mAttribute_mReceiverType.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 474)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 474)).boolEnum () ;
        if (kBoolTrue == test_1) {
          ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".insulate (HERE) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 475))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 475)) ;
        }
        GALGAS_string var_pointerUniqueName = GALGAS_string ("ptr_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 477)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 477)) ;
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cPtr_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 478)) ;
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" = (cPtr_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)).add_operation (GALGAS_string (".ptr () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 479)) ;
        const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 480)).objectCompare (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 480)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("class-").add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 481)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if ((NULL != ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 482)).add_operation (GALGAS_string (") && (dynamic_cast <cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 482)).add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 483)).add_operation (GALGAS_string (") == NULL)) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 484))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 482)) ;
          {
          ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 485)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 485)) ;
          }
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (GALGAS_string ("->onTheFlyRunTimeError (\"cannot cast to '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (object->mAttribute_mCastType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)).add_operation (GALGAS_string ("'\""), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 487))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 486)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 488)).add_operation (GALGAS_string (" = NULL ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 488))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 488)) ;
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 489)) ;
        }
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 491)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 491)).add_operation (object->mAttribute_mCastType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)).add_operation (var_pointerUniqueName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 492))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 491)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 494)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 497)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 498)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 498)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 498)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 498)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 498))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 498)) ;
    }
    break ;
  }
  cEnumerator_stringlist enumerator_23459 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_23459.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_23459.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 501)) ;
    if (enumerator_23459.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 502)) ;
    }
    enumerator_23459.gotoNextObject () ;
  }
  const enumGalgasBool test_3 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 505)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 506)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 508)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 508)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 509))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 509)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 510)) ;
  }else if (kBoolFalse == test_3) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 511)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 512)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 514)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 514)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 514))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 514)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 515)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_setterCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_setterCallInstructionForGeneration.mSlotID,
                                           categoryMethod_setterCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_setterCallInstructionForGeneration_generateInstruction (defineCategoryMethod_setterCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@selfModifierCallInstructionForGeneration generateInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selfModifierCallInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                         GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                         const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                         GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selfModifierCallInstructionForGeneration * object = (const cPtr_selfModifierCallInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selfModifierCallInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 526)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mSelfCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 527)) ;
  }
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 529)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 530)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 531)) ;
  cEnumerator_actualParameterListForGeneration enumerator_24671 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_24671.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_24671.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 533)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 541)) ;
    enumerator_24671.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_methodKind::kNotBuilt:
    break ;
  case GALGAS_methodKind::kEnum_definedAsCategory:
    {
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 546)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 546)).add_operation (object->mAttribute_mModifierName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 546))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 546)) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 547)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 547)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("callCategoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 548)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 548)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 548)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 548))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 548)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 550)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 550)).add_operation (object->mAttribute_mSelfCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 550)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 550))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 550)) ;
      }
    }
    break ;
  case GALGAS_methodKind::kEnum_definedAsMember:
    {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, object->mAttribute_mReceiverType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 553)).objectCompare (GALGAS_typeKindEnum::constructor_classType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 553)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string ("->modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 554))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 554)) ;
      }else if (kBoolFalse == test_1) {
        ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mSelfCppName.add_operation (GALGAS_string (".modifier_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)).add_operation (object->mAttribute_mModifierName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 556)) ;
      }
    }
    break ;
  }
  cEnumerator_stringlist enumerator_25816 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_25816.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_25816.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 560)) ;
    if (enumerator_25816.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 561)) ;
    }
    enumerator_25816.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_2) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 564)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 565)) ;
    }
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 567)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 567)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 568))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 568)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 569)) ;
  }else if (kBoolFalse == test_2) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 570)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 571)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mModifierName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 573)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 573))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 573)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 574)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selfModifierCallInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_selfModifierCallInstructionForGeneration.mSlotID,
                                           categoryMethod_selfModifierCallInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selfModifierCallInstructionForGeneration_generateInstruction (defineCategoryMethod_selfModifierCallInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@typeMethodInstructionForGeneration generateInstruction'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_typeMethodInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                   GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_typeMethodInstructionForGeneration * object = (const cPtr_typeMethodInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_typeMethodInstructionForGeneration) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 585)) ;
  GALGAS_stringlist var_parameterCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 587)) ;
  GALGAS_stringlist var_jokerParametersToReleaseList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 588)) ;
  GALGAS_stringlist var_inputVariableList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 589)) ;
  cEnumerator_actualParameterListForGeneration enumerator_26965 (object->mAttribute_mActualParameterList, kEnumeration_up) ;
  while (enumerator_26965.hasCurrentObject ()) {
    GALGAS_string var_parameterCppName ;
    callCategoryMethod_generateActualParameter ((const cPtr_actualParameterForGeneration *) enumerator_26965.current_mActualParameter (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioGeneratedCode, var_jokerParametersToReleaseList, var_inputVariableList, ioArgument_ioUnusedVariableCppNameSet, var_parameterCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 591)) ;
    var_parameterCppNameList.addAssign_operation (var_parameterCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 599)) ;
    enumerator_26965.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 602)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 602)).add_operation (GALGAS_string ("::class_method_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 602)).add_operation (object->mAttribute_mMethodName.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 603)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 603)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 603))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 602)) ;
  cEnumerator_stringlist enumerator_27514 (var_parameterCppNameList, kEnumeration_up) ;
  while (enumerator_27514.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_27514.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 605)) ;
    if (enumerator_27514.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 606)) ;
    }
    enumerator_27514.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mHasCompilerArgument.boolEnum () ;
  if (kBoolTrue == test_0) {
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 609)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 609)) ;
    }
    const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 610)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 611)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 613))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 613)) ;
  }
  const enumGalgasBool test_2 = object->mAttribute_mHasCompilerArgument.operator_or (GALGAS_bool (kIsStrictSup, var_parameterCppNameList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 615)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 615)).boolEnum () ;
  if (kBoolTrue == test_2) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" COMMA_")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 616)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (categoryReader_sourceFile (object->mAttribute_mMethodName.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 618)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 618))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 618)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 619)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_typeMethodInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_typeMethodInstructionForGeneration.mSlotID,
                                           categoryMethod_typeMethodInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_typeMethodInstructionForGeneration_generateInstruction (defineCategoryMethod_typeMethodInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@structuredCastInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structuredCastInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                       GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                       const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structuredCastInstructionForGeneration * object = (const cPtr_structuredCastInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structuredCastInstructionForGeneration) ;
  GALGAS_string var_castCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 633)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 641)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 642)) ;
  }
  cEnumerator_castInstructionBranchListForGeneration enumerator_28879 (object->mAttribute_mCastBranchList, kEnumeration_up) ;
  while (enumerator_28879.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_28879.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 644)) ;
    switch (enumerator_28879.current_mTypeComparisonKind (HERE).enumValue ()) {
    case GALGAS_dynamicTypeComparisonKind::kNotBuilt:
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_equal:
      {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)).add_operation (GALGAS_string (".dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)).add_operation (enumerator_28879.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 648)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 649))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 647)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_inherited:
      {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != dynamic_cast <const cPtr_").add_operation (enumerator_28879.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 651)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 652)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 653)).add_operation (GALGAS_string (".ptr ())) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 653))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 651)) ;
      }
      break ;
    case GALGAS_dynamicTypeComparisonKind::kEnum_strictlyInherited:
      {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if ((").add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 655)).add_operation (GALGAS_string (".dynamicTypeDescriptor () != & kTypeDescriptor_GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 655)).add_operation (enumerator_28879.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 656)).add_operation (GALGAS_string (") && (NULL != dynamic_cast <const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 657)).add_operation (enumerator_28879.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 658)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 657)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 658)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 659)).add_operation (GALGAS_string (".ptr ()))) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 659))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 655)) ;
      }
      break ;
    }
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_28879.current_mCastedVarCppName (HERE).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 661)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  GALGAS_").add_operation (enumerator_28879.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 663)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 663)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 663)).add_operation (enumerator_28879.current_mCastedVarCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)).add_operation (GALGAS_string (" ((cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)).add_operation (enumerator_28879.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 664)).add_operation (var_castCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 665)).add_operation (GALGAS_string (".ptr ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 665))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 662)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_28879.current_mInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 667)) ;
    }
    if (enumerator_28879.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 675)) ;
    }
    enumerator_28879.gotoNextObject () ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 678)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 679)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 680)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 690)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 691)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 692)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structuredCastInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_structuredCastInstructionForGeneration.mSlotID,
                                           categoryMethod_structuredCastInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structuredCastInstructionForGeneration_generateInstruction (defineCategoryMethod_structuredCastInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@plusEqualnstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_plusEqualnstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                 GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                 const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_plusEqualnstructionForGeneration * object = (const cPtr_plusEqualnstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_plusEqualnstructionForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTargetType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 704)) ;
  GALGAS_stringlist var_parameterList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 705)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_31143 (object->mAttribute_mExpressionList, kEnumeration_up) ;
  while (enumerator_31143.hasCurrentObject ()) {
    GALGAS_string var_parameter ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_31143.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_parameter, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 707)) ;
    var_parameterList.addAssign_operation (var_parameter  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 714)) ;
    enumerator_31143.gotoNextObject () ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mNameForCheckingFormalParameterUsing COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 717)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (object->mAttribute_mReceiverCppName  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 718)) ;
  cEnumerator_lstringlist enumerator_31538 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_31538.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_31538.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 720)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 720))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 720)) ;
    enumerator_31538.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (".addAssign_operation (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 723)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 724)) ;
  }
  cEnumerator_stringlist enumerator_31798 (var_parameterList, kEnumeration_up) ;
  while (enumerator_31798.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_31798.current_mValue (HERE)  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 726)) ;
    if (enumerator_31798.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 727)) ;
    }
    enumerator_31798.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mAttribute_mTargetType.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 729)).operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 729)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 729)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 730)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 730))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 730)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 731)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 731)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 733)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 733))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 733)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_plusEqualnstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_plusEqualnstructionForGeneration.mSlotID,
                                           categoryMethod_plusEqualnstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_plusEqualnstructionForGeneration_generateInstruction (defineCategoryMethod_plusEqualnstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@incDecInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecInstructionForGeneration * object = (const cPtr_incDecInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_incDecInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 746)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_32734 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_32734.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_32734.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 749)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 749)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 749))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 749)) ;
    enumerator_32734.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 755))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 754)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 756)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 756)) ;
      }
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".decrement_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 759)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 759))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 758)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 760)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 760)) ;
      }
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecInstructionForGeneration.mSlotID,
                                           categoryMethod_incDecInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecInstructionForGeneration_generateInstruction (defineCategoryMethod_incDecInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@incDecNoOVFInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                    GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                    GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                    const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                    GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_incDecNoOVFInstructionForGeneration * object = (const cPtr_incDecNoOVFInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_incDecNoOVFInstructionForGeneration) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 774)) ;
  }
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverCppName ;
  cEnumerator_lstringlist enumerator_33934 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_33934.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_33934.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 777)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 777)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 777))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 777)) ;
    enumerator_33934.gotoNextObject () ;
  }
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_incDecKind::kNotBuilt:
    break ;
  case GALGAS_incDecKind::kEnum_increment:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".increment_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 782))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 782)) ;
    }
    break ;
  case GALGAS_incDecKind::kEnum_decrement:
    {
      ioArgument_ioGeneratedCode.dotAssign_operation (var_receiverCppName.add_operation (GALGAS_string (".decrement_operation_no_overflow () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 784))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 784)) ;
    }
    break ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_incDecNoOVFInstructionForGeneration.mSlotID,
                                           categoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_incDecNoOVFInstructionForGeneration_generateInstruction (defineCategoryMethod_incDecNoOVFInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@messageInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_messageInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_messageInstructionForGeneration * object = (const cPtr_messageInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_messageInstructionForGeneration) ;
  GALGAS_string var_messageCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 798)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 806)).add_operation (GALGAS_string ("->printMessage ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 806)).add_operation (var_messageCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 806))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 806)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 807)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 807)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 807))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 807)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 808)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 808)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_messageInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_messageInstructionForGeneration.mSlotID,
                                           categoryMethod_messageInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_messageInstructionForGeneration_generateInstruction (defineCategoryMethod_messageInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@loopInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_loopInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_loopInstructionForGeneration * object = (const cPtr_loopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_loopInstructionForGeneration) ;
  GALGAS_string var_variantCppVarName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mVariantExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 821)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 828)).add_operation (GALGAS_string (".isValid ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 828))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 828)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 829)) ;
  }
  GALGAS_string var_variantVar = GALGAS_string ("variant_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 830)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 830)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("uint32_t ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 831)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 831)).add_operation (var_variantCppVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 831)).add_operation (GALGAS_string (".uintValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 831))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 831)) ;
  GALGAS_string var_loopVar = GALGAS_string ("loop_").add_operation (object->mAttribute_mInstructionLocation.reader_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 832)).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 832)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 832)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 833)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 833)).add_operation (GALGAS_string ("while ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 833)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 834)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 834))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 833)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 835)) ;
  }
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mFirstInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 836)) ;
  }
  GALGAS_string var_loopExpressionVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLoopExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 845)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_loopVar.add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 846)).add_operation (var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 846)).add_operation (GALGAS_string (".isValid () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 846)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 846)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 847)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 847)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 847)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 848)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 848)).add_operation (var_loopExpressionVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 848)).add_operation (GALGAS_string (".boolValue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 848)).add_operation (GALGAS_string ("}\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 848))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 846)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 850)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 850)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (").add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 851)).add_operation (GALGAS_string (" && (0 == "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 851)).add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 851)).add_operation (GALGAS_string (")) {\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 851)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 852)).add_operation (GALGAS_string (" = false ;\n"
    "  "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 852)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 853)).add_operation (GALGAS_string ("->loopRunTimeVariantError ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 853)).add_operation (categoryReader_sourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 853)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 853)).add_operation (GALGAS_string (") ;\n"
    "}\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 853)).add_operation (GALGAS_string ("if ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 854)).add_operation (var_loopVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 855)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 855))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 851)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_variantVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 856)).add_operation (GALGAS_string (" -- ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 856))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 856)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mSecondInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 857)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 865)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 866)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 867)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 868)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 869)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_loopInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_loopInstructionForGeneration.mSlotID,
                                           categoryMethod_loopInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_loopInstructionForGeneration_generateInstruction (defineCategoryMethod_loopInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@readOnlyWithInstructionForGeneration generateInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readOnlyWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                     GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                     const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                     GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readOnlyWithInstructionForGeneration * object = (const cPtr_readOnlyWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readOnlyWithInstructionForGeneration) ;
  GALGAS_string var_receiverVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mReceiverExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 883)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType = object->mAttribute_mReceiverExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 884)) ;
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 886)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const cMapElement_").add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 888)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 888)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 889)).add_operation (GALGAS_string (" = (const cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 889)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 889)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 889)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 889)).add_operation (var_receiverVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 890)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 890))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 888)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readAccessForWithInstruction (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 892)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 892))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 892)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("performSearch (").add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 894)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 894)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 895)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 895)).add_operation (GALGAS_string (", kSearchErrorMessage_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 895)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 896)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 897))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 894)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 898)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 898)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (NULL != ").add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 900)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 900)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 900)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 901)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 901)).add_operation (var_receiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 901)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 901)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 901))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 900)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 902)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 910)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 911)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 912)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 921)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readOnlyWithInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_readOnlyWithInstructionForGeneration.mSlotID,
                                           categoryMethod_readOnlyWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readOnlyWithInstructionForGeneration_generateInstruction (defineCategoryMethod_readOnlyWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@readWriteWithInstructionForGeneration generateInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_readWriteWithInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_readWriteWithInstructionForGeneration * object = (const cPtr_readWriteWithInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_readWriteWithInstructionForGeneration) ;
  GALGAS_string var_receiverCppName = object->mAttribute_mReceiverVariableCppName ;
  cEnumerator_lstringlist enumerator_40671 (object->mAttribute_mStructAttributeList, kEnumeration_up) ;
  while (enumerator_40671.hasCurrentObject ()) {
    var_receiverCppName.dotAssign_operation (GALGAS_string (".mAttribute_").add_operation (enumerator_40671.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 934)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 934)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 934))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 934)) ;
    enumerator_40671.gotoNextObject () ;
  }
  GALGAS_string var_keyVarCppName ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mKeyExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 937)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 939)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 939)) ;
  }
  {
  ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (object->mAttribute_mReceiverVariableCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 940)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cMapElement_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 941)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 941)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 941)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 942)).add_operation (GALGAS_string (" = (cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 942)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 942)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 942)).add_operation (GALGAS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 942)).add_operation (var_receiverCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 943)).add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 943))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 941)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSearchMethodNameForErrorSignaling.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstruction (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 945)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 945)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 945)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 945))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 945)) ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("readWriteAccessForWithInstructionWithErrorMessage (").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 947)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 947)).add_operation (var_keyVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 947))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 947)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (", kSearchErrorMessage_").add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 948)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 948)).add_operation (object->mAttribute_mSearchMethodNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 948))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 948)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" ").add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 950)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 950)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 950)).add_operation (GALGAS_string ("if (NULL != "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 950)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 951)).add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 951)).add_operation (GALGAS_string ("    macroValidSharedObject ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 951)).add_operation (object->mAttribute_mObjectArrayCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (GALGAS_string (", cMapElement_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (object->mAttribute_mReceiverType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 952))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 950)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 953)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, object->mAttribute_mElseBranchInstructions.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 961)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 962)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseBranchInstructions, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 963)) ;
    }
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 972)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_readWriteWithInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_readWriteWithInstructionForGeneration.mSlotID,
                                           categoryMethod_readWriteWithInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_readWriteWithInstructionForGeneration_generateInstruction (defineCategoryMethod_readWriteWithInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@foreachInstructionForGeneration generateInstruction'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_foreachInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_foreachInstructionForGeneration * object = (const cPtr_foreachInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_foreachInstructionForGeneration) ;
  GALGAS_stringlist var_enumerationVarCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 985)) ;
  cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_43202 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  while (enumerator_43202.hasCurrentObject ()) {
    GALGAS_string var_enumerationVar ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_43202.current_mEnumeratedExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_enumerationVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 988)) ;
    var_enumerationVarCppNameList.addAssign_operation (var_enumerationVar  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 989)) ;
    enumerator_43202.gotoNextObject () ;
  }
  cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_43475 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
  cEnumerator_stringlist enumerator_43508 (var_enumerationVarCppNameList, kEnumeration_up) ;
  while (enumerator_43475.hasCurrentObject () && enumerator_43508.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("cEnumerator_").add_operation (enumerator_43475.current_mEnumeratedExpression (HERE).reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).add_operation (enumerator_43475.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).add_operation (enumerator_43508.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).add_operation (GALGAS_string (", kEnumeration_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)).add_operation (enumerator_43475.current_mEnumerationOrder (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 993)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 993))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 992)) ;
    enumerator_43475.gotoNextObject () ;
    enumerator_43508.gotoNextObject () ;
  }
  GALGAS_bool var_whileExpressionIsAllwaysTrue = callCategoryReader_isTrueExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 996)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBeforeInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)).add_operation (object->mAttribute_mAfterInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_or (var_whileExpressionIsAllwaysTrue.operator_not (SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 998)).boolEnum () ;
  if (kBoolTrue == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1001)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1001))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1001)) ;
    }
    GALGAS_string var_boolVarCppName = GALGAS_string ("bool_").add_operation (ioArgument_ioTemporaryVariableIndex.reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003)) ;
    ioArgument_ioTemporaryVariableIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1003)) ;
    const enumGalgasBool test_2 = var_whileExpressionIsAllwaysTrue.boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("const bool ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1005)).add_operation (GALGAS_string (" = true ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1005))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1005)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_whileVar ;
      callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1008)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("bool ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009)).add_operation (var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1009)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1011)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_44758 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_44758.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_44758.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1013)) ;
      enumerator_44758.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1015))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1015)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBeforeInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1016)) ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1024)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1025)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_45231 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_45231.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_45231.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1027))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1027)) ;
      enumerator_45231.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1029))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1029)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1031)) ;
    }
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_45682 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_45682.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_45682.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1041)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1041))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1041)) ;
      enumerator_45682.gotoNextObject () ;
    }
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1044)).add_operation (GALGAS_string (".increment () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1044))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1044)) ;
    }
    const enumGalgasBool test_4 = var_whileExpressionIsAllwaysTrue.operator_not (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1047)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1048)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_46046 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_46046.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_46046.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1050))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1050)) ;
        if (enumerator_46046.hasNextObject ()) {
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1051)) ;
        }
        enumerator_46046.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1053)) ;
      GALGAS_string var_whileVar ;
      callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mWhileExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1055)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("    ").add_operation (var_boolVarCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)).add_operation (var_whileVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)).add_operation (GALGAS_string (".isValidAndTrue () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1056)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  }\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1057)) ;
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1060)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1061)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1062)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_46707 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_46707.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_46707.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject () && "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1064)) ;
        enumerator_46707.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (var_boolVarCppName.add_operation (GALGAS_string (") {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1066))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1066)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1067)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1075)) ;
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1076)) ;
      }
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1079)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1081)) ;
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mAfterInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1082)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1090)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_6) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_uint ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1093)).add_operation (GALGAS_string (" ((uint32_t) 0) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1093))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1093)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("while (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1095)) ;
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_47857 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_47857.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_47857.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasCurrentObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1097))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1097)) ;
      if (enumerator_47857.hasNextObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1098)) ;
      }
      enumerator_47857.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1100)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mDoInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1102)) ;
    }
    const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, object->mAttribute_mBetweenInstructionList.reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1111)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1112)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1113)) ;
      cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_48468 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
      while (enumerator_48468.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_48468.current_mEnumeratorCppName (HERE).add_operation (GALGAS_string (".hasNextObject ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1115)) ;
        if (enumerator_48468.hasNextObject ()) {
          ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1116)) ;
        }
        enumerator_48468.gotoNextObject () ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1118)) ;
      {
      routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mBetweenInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1119)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1127)) ;
      {
      ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1128)) ;
      }
    }
    cEnumerator_foreachInstructionEnumeratedObjectListForGeneration enumerator_49024 (object->mAttribute_mEnumeratedObjectList, kEnumeration_up) ;
    while (enumerator_49024.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_49024.current_mEnumeratorCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1132)).add_operation (GALGAS_string (".gotoNextObject () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1132))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1132)) ;
      enumerator_49024.gotoNextObject () ;
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, object->mAttribute_mIndexVariableCppName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      {
      ioArgument_ioUnusedVariableCppNameSet.modifier_removeKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1135)) COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1135)) ;
      }
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (object->mAttribute_mIndexVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1136)).add_operation (GALGAS_string (".increment_operation ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1136)).add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1136)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1136)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mInstructionLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1137)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1137))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1136)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1139)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_foreachInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_foreachInstructionForGeneration.mSlotID,
                                           categoryMethod_foreachInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_foreachInstructionForGeneration_generateInstruction (defineCategoryMethod_foreachInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@logInstructionForGeneration generateInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_logInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                            GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                            const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                            GALGAS_string & ioArgument_ioGeneratedCode,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_logInstructionForGeneration * object = (const cPtr_logInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_logInstructionForGeneration) ;
  GALGAS_string var_logVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mLogExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_logVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1153)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (var_logVar.add_operation (GALGAS_string (".log ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1154)).add_operation (object->mAttribute_mLogMessage.mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1154)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1154)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1154)).add_operation (categoryReader_commaSourceFile (object->mAttribute_mLogMessage.reader_location (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1155)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1155)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1155))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1154)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_logInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_logInstructionForGeneration.mSlotID,
                                           categoryMethod_logInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_logInstructionForGeneration_generateInstruction (defineCategoryMethod_logInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@switchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_switchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                               GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                               const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_switchInstructionForGeneration * object = (const cPtr_switchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_switchInstructionForGeneration) ;
  GALGAS_string var_switchVar ;
  callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) object->mAttribute_mSwitchExpression.ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1169)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("switch (").add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1176)).add_operation (GALGAS_string (".enumValue ()) {\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1176))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1176)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1177)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1177)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1177)).add_operation (GALGAS_string ("::kNotBuilt:\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1177))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1177)) ;
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  break ;\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1178)) ;
  cEnumerator_switchBranchesForGeneration enumerator_51186 (object->mAttribute_mBranches, kEnumeration_up) ;
  while (enumerator_51186.hasCurrentObject ()) {
    cEnumerator_lstringlist enumerator_51223 (enumerator_51186.current_mSwitchConstantList (HERE), kEnumeration_up) ;
    while (enumerator_51223.hasCurrentObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("case GALGAS_").add_operation (object->mAttribute_mSwitchExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)).add_operation (enumerator_51223.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1181)) ;
      enumerator_51223.gotoNextObject () ;
    }
    {
    ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1183)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1184)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_51186.current_mExtractedAssociatedValuesForGeneration (HERE).reader_length (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1185)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_type = GALGAS_string ("const cEnumAssociatedValues_").add_operation (object->mAttribute_mEnumType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1186)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1186)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1186)).add_operation (enumerator_51186.current_mSwitchConstantList (HERE).reader_mValueAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1187)).mAttribute_string, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1187)).add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1187)) ;
      GALGAS_string var_varPtr = GALGAS_string ("extractPtr_").add_operation (enumerator_51186.current_mLocationIndex (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1188)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1188)) ;
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (GALGAS_string (" = ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (var_type, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (GALGAS_string (") ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (var_switchVar, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)).add_operation (GALGAS_string (".unsafePointer ()) ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1189)) ;
      cEnumerator_extractedAssociatedValuesForGeneration enumerator_51913 (enumerator_51186.current_mExtractedAssociatedValuesForGeneration (HERE), kEnumeration_up) ;
      while (enumerator_51913.hasCurrentObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("  const GALGAS_").add_operation (enumerator_51913.current_mType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1191)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1191)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1191)).add_operation (enumerator_51913.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1191)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1191)).add_operation (var_varPtr, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1192)).add_operation (GALGAS_string ("->mAssociatedValue"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1192)).add_operation (enumerator_51913.current_mIndex (HERE).reader_string (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1192)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1192)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1192))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1191)) ;
        enumerator_51913.gotoNextObject () ;
      }
    }
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_51186.current_mInstructions (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1195)) ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1203)) ;
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("break ;\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1204)) ;
    {
    ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1205)) ;
    }
    enumerator_51186.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1207)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_switchInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_switchInstructionForGeneration.mSlotID,
                                           categoryMethod_switchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_switchInstructionForGeneration_generateInstruction (defineCategoryMethod_switchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@matchInstructionForGeneration generateInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_matchInstructionForGeneration_generateInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                              GALGAS_string & ioArgument_ioGeneratedCode,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_matchInstructionForGeneration * object = (const cPtr_matchInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_matchInstructionForGeneration) ;
  GALGAS_stringlist var_receiverList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1220)) ;
  cEnumerator_semanticExpressionListForGeneration enumerator_53052 (object->mAttribute_mMatchedExpressionList, kEnumeration_up) ;
  while (enumerator_53052.hasCurrentObject ()) {
    GALGAS_string var_variable ;
    callCategoryMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) enumerator_53052.current_mExpression (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_variable, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1222)) ;
    var_receiverList.addAssign_operation (var_variable  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1223)) ;
    enumerator_53052.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1225)) ;
  cEnumerator_stringlist enumerator_53294 (var_receiverList, kEnumeration_up) ;
  while (enumerator_53294.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (enumerator_53294.current_mValue (HERE).add_operation (GALGAS_string (".isValid ()"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1227))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1227)) ;
    if (enumerator_53294.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1228)) ;
    }
    enumerator_53294.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1230)) ;
  {
  ioArgument_ioGeneratedCode.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1231)) ;
  }
  cEnumerator_matchInstructionBranchListForGeneration enumerator_53496 (object->mAttribute_mMatchInstructionBranchList, kEnumeration_up) ;
  while (enumerator_53496.hasCurrentObject ()) {
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("if (")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1233)) ;
    cEnumerator_matchListForGeneration enumerator_53567 (enumerator_53496.current_mMatchListForGeneration (HERE), kEnumeration_up) ;
    cEnumerator_stringlist enumerator_53587 (var_receiverList, kEnumeration_up) ;
    while (enumerator_53567.hasCurrentObject () && enumerator_53587.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_53567.current_mIsType (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("(NULL != dynamic_cast <const cPtr_").add_operation (enumerator_53567.current_mTypeNameOrEnumerationConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236)).add_operation (GALGAS_string (" *> ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236)).add_operation (enumerator_53587.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1237)).add_operation (GALGAS_string (".ptr ()))"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1237))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1236)) ;
      }else if (kBoolFalse == test_0) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("(").add_operation (enumerator_53587.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)).add_operation (GALGAS_string (".enumValue () == GALGAS_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)).add_operation (enumerator_53567.current_mLocalConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1240)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)).add_operation (GALGAS_string ("::kEnum_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1240)).add_operation (enumerator_53567.current_mTypeNameOrEnumerationConstantName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 1241)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1241)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1241))  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1239)) ;
      }
      if (enumerator_53567.hasNextObject () && enumerator_53587.hasNextObject ()) {
        ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (" && ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1243)) ;
      }
      enumerator_53567.gotoNextObject () ;
      enumerator_53587.gotoNextObject () ;
    }
    ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1245)) ;
    {
    routine_generateInstructionList (ioArgument_ioInclusionSet, enumerator_53496.current_mMatchBranchInstructionList (HERE), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1246)) ;
    }
    if (enumerator_53496.hasNextObject ()) {
      ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else ")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1254)) ;
    }
    enumerator_53496.gotoNextObject () ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}else{\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1256)) ;
  {
  routine_generateInstructionList (ioArgument_ioInclusionSet, object->mAttribute_mElseInstructionList, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1257)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1265)) ;
  {
  ioArgument_ioGeneratedCode.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1266)) ;
  }
  ioArgument_ioGeneratedCode.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 1267)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_matchInstructionForGeneration_generateInstruction (void) {
  enterCategoryMethod_generateInstruction (kTypeDescriptor_GALGAS_matchInstructionForGeneration.mSlotID,
                                           categoryMethod_matchInstructionForGeneration_generateInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_matchInstructionForGeneration_generateInstruction (defineCategoryMethod_matchInstructionForGeneration_generateInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@grammarForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  cEnumerator_lstringlist enumerator_2208 (object->mAttribute_mSyntaxComponents, kEnumeration_up) ;
  while (enumerator_2208.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_2208.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_2208.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), object->mAttribute_mNonTerminalMapForGrammarAnalysis, object->mAttribute_mNonTerminalToAddList, object->mAttribute_mHasIndexing, object->mAttribute_mStartSymbolName, object->mAttribute_mHasTranslateFeature, object->mAttribute_mGrammarName, object->mAttribute_mSyntaxComponents COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                             categoryMethod_grammarForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendDeclaration_31_ (defineCategoryMethod_grammarForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@grammarForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_grammarForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 44)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2942 (object->mAttribute_mNonTerminalMapForGrammarAnalysis, kEnumeration_up) ;
  while (enumerator_2942.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_2991 (enumerator_2942.current_mNonterminalSymbolParametersMap (HERE), kEnumeration_up) ;
    while (enumerator_2991.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_3032 (enumerator_2991.current_mFormalParametersList (HERE), kEnumeration_up) ;
      while (enumerator_3032.hasCurrentObject ()) {
        switch (enumerator_3032.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inUnifiedTypeMap, enumerator_3032.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 50)) ;
            categoryMethod_addHeaderFileName (var_t, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_3032.gotoNextObject () ;
      }
      enumerator_2991.gotoNextObject () ;
    }
    enumerator_2942.gotoNextObject () ;
  }
  outArgument_outImplementation = object->mAttribute_mCppFileContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_grammarForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                    categoryMethod_grammarForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_grammarForGeneration_appendSpecificImplementation (defineCategoryMethod_grammarForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@grammarForGeneration implementationCppFileName'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_grammarForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_grammarForGeneration * object = (const cPtr_grammarForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_grammarForGeneration) ;
  result_outName = GALGAS_string ("grammar-").add_operation (object->mAttribute_mGrammarName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 76)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                                 categoryReader_grammarForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_implementationCppFileName (defineCategoryReader_grammarForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding category reader '@grammarForGeneration hasCppHeaderFile'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_grammarForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                        categoryReader_grammarForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_hasCppHeaderFile (defineCategoryReader_grammarForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Overriding category reader '@grammarForGeneration headerKind'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_grammarForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 88)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                  categoryReader_grammarForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_headerKind (defineCategoryReader_grammarForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Overriding category reader '@grammarForGeneration isPredefined'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_grammarForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_grammarForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_grammarForGeneration.mSlotID,
                                    categoryReader_grammarForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_grammarForGeneration_isPredefined (defineCategoryReader_grammarForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@syntaxDeclarationForGeneration implementationCppFileName'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_syntaxDeclarationForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  result_outName = GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 102)) ;
//---
  return result_outName ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_implementationCppFileName (void) {
  enterCategoryReader_implementationCppFileName (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                 categoryReader_syntaxDeclarationForGeneration_implementationCppFileName) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_implementationCppFileName (defineCategoryReader_syntaxDeclarationForGeneration_implementationCppFileName, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@syntaxDeclarationForGeneration hasCppHeaderFile'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outHasHeader ; // Returned variable
  result_outHasHeader = GALGAS_bool (false) ;
//---
  return result_outHasHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile (void) {
  enterCategoryReader_hasCppHeaderFile (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                        categoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_hasCppHeaderFile (defineCategoryReader_syntaxDeclarationForGeneration_hasCppHeaderFile, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@syntaxDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_syntaxDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outHeaderKind ; // Returned variable
  result_outHeaderKind = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 114)) ;
//---
  return result_outHeaderKind ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                  categoryReader_syntaxDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_headerKind (defineCategoryReader_syntaxDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@syntaxDeclarationForGeneration isPredefined'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_syntaxDeclarationForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_syntaxDeclarationForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                    categoryReader_syntaxDeclarationForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_syntaxDeclarationForGeneration_isPredefined (defineCategoryReader_syntaxDeclarationForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@syntaxDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 128))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 128)) ;
  GALGAS_uintlist var_selectMethodList = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 129)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 131)).isValid ()) {
    uint32_t variant_6388 = object->mAttribute_mSelectMethodCount.add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 131)).uintValue () ;
    bool loop_6388 = true ;
    while (loop_6388) {
      loop_6388 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).isValid () ;
      if (loop_6388) {
        loop_6388 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mSelectMethodCount)).boolValue () ;
      }
      if (loop_6388 && (0 == variant_6388)) {
        loop_6388 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 131)) ;
      }
      if (loop_6388) {
        variant_6388 -- ;
        var_selectMethodList.addAssign_operation (var_idx  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 133)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 134)) ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, object->mAttribute_mSyntaxComponentName, object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 138)), object->mAttribute_mNonterminalDeclarationMap, object->mAttribute_mRuleDeclarationList, var_selectMethodList, object->mAttribute_mHasIndexing, object->mAttribute_mHasTranslateFeature COMMA_SOURCE_FILE ("semanticGeneration.galgas", 136))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                             categoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_syntaxDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@syntaxDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_syntaxDeclarationForGeneration * object = (const cPtr_syntaxDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_syntaxDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (object->mAttribute_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 155)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154))) ;
  GALGAS_string var_lexiqueCppName = GALGAS_string ("C_Lexique_").add_operation (object->mAttribute_mLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 158)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 158)) ;
  cEnumerator_ruleDeclarationList enumerator_7363 (object->mAttribute_mRuleDeclarationList, kEnumeration_up) ;
  while (enumerator_7363.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_7447 (enumerator_7363.current_mLabelImplementationList (HERE), kEnumeration_up) ;
    while (enumerator_7447.hasCurrentObject ()) {
      GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 162)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 162)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 163)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 163)).add_operation (enumerator_7363.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 163)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 164)).add_operation (enumerator_7363.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 165)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 165)).add_operation (enumerator_7447.current_mLabelName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 165)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 165)) ;
      outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 166)) ;
      GALGAS_string var_code ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, enumerator_7447.current_mSignatureForGeneration (HERE), enumerator_7447.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (false), object->mAttribute_mHasTranslateFeature, var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 167)) ;
      }
      outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 180)) ;
      enumerator_7447.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_instructionList ;
    GALGAS_lstring joker_8445 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_8448 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_8451 ; // Joker input parameter
    GALGAS_location joker_8454 ; // Joker input parameter
    enumerator_7363.current_mLabelImplementationList (HERE).method_first (joker_8445, joker_8448, joker_8451, joker_8454, var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 184)) ;
    GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 185)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 185)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 185)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 186)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)).add_operation (enumerator_7363.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 186)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 187)).add_operation (enumerator_7363.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 188)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 188)) ;
    outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 189)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 194)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (true), object->mAttribute_mHasTranslateFeature, var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 190)) ;
    }
    outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 203)) ;
    const enumGalgasBool test_0 = object->mAttribute_mHasIndexing.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_semanticInstructionListForGeneration var_instructionList ;
      GALGAS_lstring joker_9454 ; // Joker input parameter
      GALGAS_formalParameterListForGeneration joker_9457 ; // Joker input parameter
      GALGAS_formalParameterSignature joker_9460 ; // Joker input parameter
      GALGAS_location joker_9463 ; // Joker input parameter
      enumerator_7363.current_mLabelImplementationList (HERE).method_first (joker_9454, joker_9457, joker_9460, joker_9463, var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 207)) ;
      GALGAS_string var_ruleName = GALGAS_string ("cParser_").add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 208)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 208)).add_operation (object->mAttribute_mSyntaxComponentName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)).add_operation (enumerator_7363.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 209)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 210)).add_operation (enumerator_7363.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 211)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 211)) ;
      outArgument_outImplementation.dotAssign_operation (GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 212)) ;
      GALGAS_string var_code ;
      {
      routine_generateProcedure (GALGAS_bool (false), var_ruleName, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 217)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 218)), GALGAS_bool (false), var_lexiqueCppName, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 213)) ;
      }
      outArgument_outImplementation.dotAssign_operation (var_code  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 226)) ;
    }
    enumerator_7363.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_syntaxDeclarationForGeneration.mSlotID,
                                                    categoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_syntaxDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@routinePrototypeDeclarationForGeneration headerKind'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_routinePrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1096)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_routinePrototypeDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                  categoryReader_routinePrototypeDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_routinePrototypeDeclarationForGeneration_headerKind (defineCategoryReader_routinePrototypeDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@routinePrototypeDeclarationForGeneration appendDeclaration1'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                           GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                           GALGAS_string & outArgument_outHeader,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routinePrototypeDeclarationForGeneration * object = (const cPtr_routinePrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routinePrototypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, object->mAttribute_mRoutineName, object->mAttribute_mFormalArgumentList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1104))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_routinePrototypeDeclarationForGeneration.mSlotID,
                                             categoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_routinePrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category reader '@functionPrototypeDeclarationForGeneration headerKind'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_functionPrototypeDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1115)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_functionPrototypeDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                  categoryReader_functionPrototypeDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_functionPrototypeDeclarationForGeneration_headerKind (defineCategoryReader_functionPrototypeDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@functionPrototypeDeclarationForGeneration appendDeclaration1'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                            GALGAS_string & outArgument_outHeader,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionPrototypeDeclarationForGeneration * object = (const cPtr_functionPrototypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionPrototypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1126)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1123))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_functionPrototypeDeclarationForGeneration.mSlotID,
                                             categoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_functionPrototypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@onceFunctionDeclarationForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_onceFunctionDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1133)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_onceFunctionDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                  categoryReader_onceFunctionDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_onceFunctionDeclarationForGeneration_headerKind (defineCategoryReader_onceFunctionDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@onceFunctionDeclarationForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                       GALGAS_string & outArgument_outHeader,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1143)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1144)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1141))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                             categoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_onceFunctionDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                     GALGAS_string & outArgument_outHeader,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1156)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1157)), object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1155))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1162)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1163)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1164)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1165)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1166)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1167)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1168)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1169)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1170)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1171)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1172)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1173)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1161)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1161)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                             categoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@semanticTypeForGeneration appendTypeGenericImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_semanticTypeForGeneration_appendTypeGenericImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outImplementation ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1183)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1184)), object->mAttribute_mTypeProxy.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1185)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1186)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1182))) ;
//---
  return result_outImplementation ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_semanticTypeForGeneration_appendTypeGenericImplementation (void) {
  enterCategoryReader_appendTypeGenericImplementation (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                       categoryReader_semanticTypeForGeneration_appendTypeGenericImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_semanticTypeForGeneration_appendTypeGenericImplementation (defineCategoryReader_semanticTypeForGeneration_appendTypeGenericImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@arrayTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1198)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1199)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1200)), object->mAttribute_mDimension COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1197))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1204)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1205)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1206)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1207)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1208)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1209)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1210)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1211)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1212)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1213)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1214)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1215)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1203)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1203)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                             categoryMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

