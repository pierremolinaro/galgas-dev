#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-21.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalSelectInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalSelectInstructionAST * object = (const cPtr_lexicalSelectInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalSelectInstructionAST) ;
  cEnumerator_lexicalSelectBranchListAST enumerator_26365 (object->mProperty_mLexicalSelectBranchList, kENUMERATION_UP) ;
  while (enumerator_26365.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) enumerator_26365.current_mSelectExpression (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 560)) ;
    GALGAS_lexicalTagMap var_tagMap_26457 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 561)) ;
    cEnumerator_lexicalInstructionListAST enumerator_26542 (enumerator_26365.current_mSelectInstructionList (HERE), kENUMERATION_UP) ;
    while (enumerator_26542.hasCurrentObject ()) {
      callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26542.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26457, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 563)) ;
      enumerator_26542.gotoNextObject () ;
    }
    enumerator_26365.gotoNextObject () ;
  }
  GALGAS_lexicalTagMap var_tagMap_26653 = GALGAS_lexicalTagMap::constructor_mapWithMapToOverride (ioArgument_ioTagMap  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 566)) ;
  cEnumerator_lexicalInstructionListAST enumerator_26737 (object->mProperty_mDefaultInstructionList, kENUMERATION_UP) ;
  while (enumerator_26737.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_26737.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_26653, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 568)) ;
    enumerator_26737.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalSelectInstructionAST.mSlotID,
                                                extensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalSelectInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalSelectInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRoutineInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRoutineInstructionAST * object = (const cPtr_lexicalRoutineInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRoutineInstructionAST) ;
  GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_27179 ;
  GALGAS_stringlist var_routineErrorMessageList_27217 ;
  GALGAS_bool joker_27374 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexiqueCompilation.galgas", 579)).method_searchKey (object->mProperty_mRoutineName, var_lexicalRoutineFormalArgumentList_27179, var_routineErrorMessageList_27217, joker_27374, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 579)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_lexicalRoutineFormalArgumentList_27179.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 586)).objectCompare (object->mProperty_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 586)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 587)), GALGAS_string ("this lexical routine call names ").add_operation (object->mProperty_mActualArgumentList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 588)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)).add_operation (GALGAS_string (" actual argument(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 588)).add_operation (var_lexicalRoutineFormalArgumentList_27179.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 590)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 589)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 589)).add_operation (GALGAS_string (" actual argument(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 590)), fixItArray1  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 587)) ;
    }
  }
  cEnumerator_lexicalRoutineFormalArgumentList enumerator_27848 (var_lexicalRoutineFormalArgumentList_27179, kENUMERATION_UP) ;
  cEnumerator_lexicalRoutineCallActualArgumentListAST enumerator_27875 (object->mProperty_mActualArgumentList, kENUMERATION_UP) ;
  while (enumerator_27848.hasCurrentObject () && enumerator_27875.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRoutineCallArgument ((const cPtr_abstractLexicalRoutineActualArgumentAST *) enumerator_27875.current_mLexicalRoutineActualArgument (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, enumerator_27848.current_mLexicalFormalArgumentMode (HERE), enumerator_27848.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 594)) ;
    enumerator_27848.gotoNextObject () ;
    enumerator_27875.gotoNextObject () ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsNotEqual, var_routineErrorMessageList_27217.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 601)).objectCompare (object->mProperty_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 601)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mRoutineName.getter_location (SOURCE_FILE ("lexiqueCompilation.galgas", 602)), GALGAS_string ("this lexical routine call names ").add_operation (object->mProperty_mErrorMessageList.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 603)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 603)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)).add_operation (GALGAS_string (" error message(s), but the lexical routine prototype requires "), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 603)).add_operation (var_routineErrorMessageList_27217.getter_length (SOURCE_FILE ("lexiqueCompilation.galgas", 605)).getter_string (SOURCE_FILE ("lexiqueCompilation.galgas", 605)), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 604)).add_operation (GALGAS_string (" error message(s)"), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 605)), fixItArray3  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 602)) ;
    }
  }
  cEnumerator_lstringlist enumerator_28487 (object->mProperty_mErrorMessageList, kENUMERATION_UP) ;
  while (enumerator_28487.hasCurrentObject ()) {
    cMapElement_lexicalMessageMap * objectArray_28499 = (cMapElement_lexicalMessageMap *) ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.readWriteAccessForWithInstructionWithErrorMessage (inCompiler, enumerator_28487.current_mValue (HERE), kSearchErrorMessage_lexicalMessageMap_searchKey  COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 609)) ;
    if (NULL != objectArray_28499) {
      macroValidSharedObject (objectArray_28499, cMapElement_lexicalMessageMap) ;
      objectArray_28499->mProperty_mMessageIsUsed = GALGAS_bool (true) ;
    }
    enumerator_28487.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRoutineInstructionAST.mSlotID,
                                                extensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRoutineInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRoutineInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalLogInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * /* inObject */,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalLogInstructionAST.mSlotID,
                                                extensionMethod_lexicalLogInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalLogInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalLogInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalRewindInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                 GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                 GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalRewindInstructionAST * object = (const cPtr_lexicalRewindInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalRewindInstructionAST) ;
  ioArgument_ioTagMap.method_searchKey (object->mProperty_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 627)) ;
  GALGAS_lexicalSentValueList joker_29300 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 628)).method_searchKey (object->mProperty_mTerminalName, joker_29300, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 628)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalRewindInstructionAST.mSlotID,
                                                extensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalRewindInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalRewindInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalDropInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                               GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                               GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalDropInstructionAST * object = (const cPtr_lexicalDropInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalDropInstructionAST) ;
  GALGAS_lexicalSentValueList joker_29655 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mTerminalMap (SOURCE_FILE ("lexiqueCompilation.galgas", 636)).method_searchKey (object->mProperty_mTerminalName, joker_29655, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 636)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalDropInstructionAST.mSlotID,
                                                extensionMethod_lexicalDropInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalDropInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalDropInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalTagInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                              GALGAS_lexiqueAnalysisContext & /* ioArgument_ioLexiqueAnalysisContext */,
                                                                              GALGAS_lexicalTagMap & ioArgument_ioTagMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalTagInstructionAST * object = (const cPtr_lexicalTagInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalTagInstructionAST) ;
  {
  ioArgument_ioTagMap.setter_insertKey (object->mProperty_mLexicalTagName, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 644)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalTagInstructionAST.mSlotID,
                                                extensionMethod_lexicalTagInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalTagInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalTagInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalErrorInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalErrorInstructionAST * object = (const cPtr_lexicalErrorInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalErrorInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mProperty_mErrorMessageName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 653)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalErrorInstructionAST.mSlotID,
                                                extensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalErrorInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalErrorInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalWarningInstructionAST checkLexicalInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (const cPtr_lexicalInstructionAST * inObject,
                                                                                  GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                                  GALGAS_lexicalTagMap & /* ioArgument_ioTagMap */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalWarningInstructionAST * object = (const cPtr_lexicalWarningInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalWarningInstructionAST) ;
  {
  ioArgument_ioLexiqueAnalysisContext.mProperty_mLexicalMessageMap.setter_setMMessageIsUsedForKey (GALGAS_bool (true), object->mProperty_mWarningMessageName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 661)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction (void) {
  enterExtensionMethod_checkLexicalInstruction (kTypeDescriptor_GALGAS_lexicalWarningInstructionAST.mSlotID,
                                                extensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalWarningInstructionAST_checkLexicalInstruction (defineExtensionMethod_lexicalWarningInstructionAST_checkLexicalInstruction, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalImplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalImplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalImplicitRuleAST * object = (const cPtr_lexicalImplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalImplicitRuleAST) ;
  GALGAS_lexicalExplicitTokenListMap joker_31548 ; // Joker input parameter
  GALGAS_tokenSortedlist joker_31551 ; // Joker input parameter
  GALGAS_bool joker_31554 ; // Joker input parameter
  ioArgument_ioLexiqueAnalysisContext.getter_mLexicalTokenListMap (SOURCE_FILE ("lexiqueCompilation.galgas", 675)).method_searchKey (object->mProperty_mListName, joker_31548, joker_31551, joker_31554, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 675)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalImplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalImplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalImplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalImplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexicalExplicitRuleAST checkLexicalRule'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexicalExplicitRuleAST_checkLexicalRule (const cPtr_abstractLexicalRuleAST * inObject,
                                                                     GALGAS_lexiqueAnalysisContext & ioArgument_ioLexiqueAnalysisContext,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexicalExplicitRuleAST * object = (const cPtr_lexicalExplicitRuleAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexicalExplicitRuleAST) ;
  callExtensionMethod_checkLexicalExpression ((const cPtr_lexicalExpressionAST *) object->mProperty_mLexicalRuleExpression.ptr (), ioArgument_ioLexiqueAnalysisContext, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 682)) ;
  GALGAS_lexicalTagMap var_tagMap_31894 = GALGAS_lexicalTagMap::constructor_emptyMap (SOURCE_FILE ("lexiqueCompilation.galgas", 683)) ;
  cEnumerator_lexicalInstructionListAST enumerator_31928 (object->mProperty_mInstructionList, kENUMERATION_UP) ;
  while (enumerator_31928.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalInstruction ((const cPtr_lexicalInstructionAST *) enumerator_31928.current_mInstruction (HERE).ptr (), ioArgument_ioLexiqueAnalysisContext, var_tagMap_31894, inCompiler COMMA_SOURCE_FILE ("lexiqueCompilation.galgas", 685)) ;
    enumerator_31928.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule (void) {
  enterExtensionMethod_checkLexicalRule (kTypeDescriptor_GALGAS_lexicalExplicitRuleAST.mSlotID,
                                         extensionMethod_lexicalExplicitRuleAST_checkLexicalRule) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexicalExplicitRuleAST_checkLexicalRule (defineExtensionMethod_lexicalExplicitRuleAST_checkLexicalRule, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'lexiqueGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_lexiqueGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_lexiqueGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_lexiqueGenerationTemplates_0,
  0,
  gWrapperAllDirectories_lexiqueGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("LEXIQUE ").add_operation (in_LEXIQUE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"galgas2/C_Lexique.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    R O U T I N E S                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_726_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 13)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_726 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 13)), kENUMERATION_UP) ;
    while (enumerator_726.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_726.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_routine_" ;
        result << enumerator_726.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 15)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_872_ (0) ;
        if (enumerator_726.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_872 (enumerator_726.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_872.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_872.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 17)).stringValue () ;
            result << extensionGetter_cppTypeName (enumerator_872.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 18)).stringValue () ;
            result << extensionGetter_cppReferenceInFormalArgument (enumerator_872.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 19)).stringValue () ;
            result << " " ;
            result << enumerator_872.current_mArgumentNameForComment (HERE).stringValue () ;
            index_872_.increment () ;
            enumerator_872.gotoNextObject () ;
          }
        }
        GALGAS_uint index_1219_ (0) ;
        if (enumerator_726.current_mErrorMessageList (HERE).isValid ()) {
          cEnumerator_stringlist enumerator_1219 (enumerator_726.current_mErrorMessageList (HERE), kENUMERATION_UP) ;
          while (enumerator_1219.hasCurrentObject ()) {
            result << ",\n"
              "                const char * " ;
            result << enumerator_1219.current_mValue (HERE).stringValue () ;
            index_1219_.increment () ;
            enumerator_1219.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_726_.increment () ;
      enumerator_726.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1713_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 33)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1713 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 33)), kENUMERATION_UP) ;
    while (enumerator_1713.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1713.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1713.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " scanner_function_" ;
        result << enumerator_1713.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 35)).stringValue () ;
        result << " (C_Lexique & inLexique" ;
        GALGAS_uint index_1876_ (0) ;
        if (enumerator_1713.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1876 (enumerator_1713.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1876.hasCurrentObject ()) {
            result << ",\n"
              "                const " ;
            result << extensionGetter_cppTypeName (enumerator_1876.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 37)).stringValue () ;
            result << " " ;
            result << enumerator_1876.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1876_.increment () ;
            enumerator_1876.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1713_.increment () ;
      enumerator_1713.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                       T O K E N    C L A S S                                                  \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public cToken {\n" ;
  GALGAS_uint index_2468_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 49)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2468 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 49)), kENUMERATION_UP) ;
    while (enumerator_2468.hasCurrentObject ()) {
      result << "  public : " ;
      result << extensionGetter_cppTypeName (enumerator_2468.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_2468.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 50)).stringValue () ;
      result << " ;\n" ;
      index_2468_.increment () ;
      enumerator_2468.gotoNextObject () ;
    }
  }
  result << "\n"
    "  public : cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                     S C A N N E R    C L A S S                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_Lexique {\n"
    "//--- Constructors\n"
    "  public : C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceFileName\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public : C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCallerCompiler,\n"
    "                       const C_String & inSourceString,\n"
    "                       const C_String & inStringForError\n"
    "                       COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Instrospection\n"
    "  public : static GALGAS_stringlist symbols (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Declaring a protected virtual destructor enables the compiler to raise\n"
    "//    an error if a direct delete is performed; only the static method\n"
    "//    C_SharedObject::detachPointer may invoke delete.\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected : virtual ~ C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {}\n"
    "  #endif\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_header_template_zone_2.new.h.galgasTemplate", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "\n"
      "//--- Scanner mode for template scanner\n"
      "  private : int32_t mMatchedTemplateDelimiterIndex ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                const GALGAS_lexicalListDeclarationListAST & in_DELIMITOR_5F_LIST_5F_LIST,
                                                                                const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//--- Terminal symbols enumeration\n"
    "  public : enum {kToken_" ;
  GALGAS_uint index_118_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)).isValid ()) {
    cEnumerator_terminalList enumerator_118 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 4)), kENUMERATION_UP) ;
    while (enumerator_118.hasCurrentObject ()) {
      result << ",\n"
        "   kToken_" ;
      result << enumerator_118.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 5)).stringValue () ;
      index_118_.increment () ;
      enumerator_118.gotoNextObject () ;
    }
  }
  result << "} ;\n" ;
  GALGAS_uint index_243_ (0) ;
  if (in_DELIMITOR_5F_LIST_5F_LIST.isValid ()) {
    cEnumerator_lexicalListDeclarationListAST enumerator_243 (in_DELIMITOR_5F_LIST_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_243.hasCurrentObject ()) {
      result << "\n"
        "//--- Key words table '" ;
      result << enumerator_243.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 10)).stringValue () ;
      result << "'\n"
        "  public : static int16_t search_into_" ;
      result << enumerator_243.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 11)).stringValue () ;
      result << " (const C_String & inSearchedString) ;\n" ;
      index_243_.increment () ;
      enumerator_243.gotoNextObject () ;
    }
  }
  result << "  \n"
    "\n"
    "//--- Assign from attribute\n" ;
  GALGAS_uint index_501_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_501 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 17)), kENUMERATION_UP) ;
    while (enumerator_501.hasCurrentObject ()) {
      result << "  public : GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_501.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " synthetizedAttribute_" ;
      result << enumerator_501.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 18)).stringValue () ;
      result << " (void) const ;\n" ;
      index_501_.increment () ;
      enumerator_501.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Attribute access\n" ;
  GALGAS_uint index_761_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_761 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 24)), kENUMERATION_UP) ;
    while (enumerator_761.hasCurrentObject ()) {
      result << "  public : " ;
      result << extensionGetter_cppTypeName (enumerator_761.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " attributeValue_" ;
      result << enumerator_761.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 25)).stringValue () ;
      result << " (void) const ;\n" ;
      index_761_.increment () ;
      enumerator_761.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Indexing keys\n" ;
  GALGAS_uint index_966_ (0) ;
  if (in_INDEXING_5F_LIST.isValid ()) {
    cEnumerator_indexingListAST enumerator_966 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_966 = enumerator_966.hasCurrentObject () ;
    if (nonEmpty_enumerator_966) {
      result << "  public : enum {" ;
    }
    while (enumerator_966.hasCurrentObject ()) {
      result << "\n"
        "    kIndexing_" ;
      result << enumerator_966.current_mIndexName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 33)).stringValue () ;
      if (enumerator_966.hasNextObject ()) {
        result << "," ;
      }
      index_966_.increment () ;
      enumerator_966.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_966) {
      result << "\n"
        "  } ;\n" ;
    }
  }
  result << "\n"
    "//--- Unicode test functions\n" ;
  GALGAS_uint index_1136_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_1136 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_1136.hasCurrentObject ()) {
      result << "  public : static bool " ;
      result << enumerator_1136.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 41)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n" ;
      index_1136_.increment () ;
      enumerator_1136.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Indexing directory\n"
    "  protected : virtual C_String indexingDirectory (void) const ;\n"
    "\n"
    "//--- Parse lexical token\n"
    "  protected : virtual bool parseLexicalToken (void) ;\n"
    "\n"
    "//--- Get terminal message\n"
    "  protected : virtual C_String getMessageForTerminal (const int16_t inTerminalSymbol) const ;\n"
    "\n"
    "//--- Get terminal count\n"
    "  public : virtual int16_t terminalVocabularyCount (void) const { return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_length (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).getter_string (SOURCE_FILE ("lexique_header_template_zone_3.new.h.galgasTemplate", 54)).stringValue () ;
  result << " ; }\n"
    "\n"
    "//--- Get Token String\n"
    "  public : virtual C_String getCurrentTokenString (const cToken * inTokenPtr) const ;\n"
    "\n"
    "//--- Enter Token\n"
    "  protected : void enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) ;\n"
    "\n"
    "//--- Style name for Latex\n"
    "  protected : virtual C_String styleNameForIndex (const uint32_t inStyleIndex) const ;\n"
    "  protected : virtual uint32_t styleIndexForTerminal (const int32_t inTerminalIndex) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates newImplementationZone2Galgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_IDENTIFIER,
                                                                                                  const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                                  const GALGAS_lexicalMessageMap & in_LEXICAL_5F_MESSAGE_5F_MAP,
                                                                                                  const GALGAS_terminalList & in_TERMINAL_5F_LIST,
                                                                                                  const GALGAS_lexicalExplicitTokenListMapMap & in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP,
                                                                                                  const GALGAS_stringset & in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES,
                                                                                                  const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                                  const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                                  const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                                  const GALGAS_string & in_LEXIQUE_5F_COMPONENT_5F_NAME,
                                                                                                  const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                                  const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                                  const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//     L E X I Q U E                                                                             \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#include \"strings/unicode_character_cpp.h\"\n"
    "#include \"galgas2/scanner_actions.h\"\n"
    "#include \"galgas2/cLexiqueIntrospection.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (void)" ;
  GALGAS_uint index_719_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_719 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_719 = enumerator_719.hasCurrentObject () ;
    if (nonEmpty_enumerator_719) {
      result << " :\n" ;
    }
    while (enumerator_719.hasCurrentObject ()) {
      result << "mLexicalAttribute_" ;
      result << enumerator_719.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 16)).stringValue () ;
      result << " ()" ;
      if (enumerator_719.hasNextObject ()) {
        result << ",\n" ;
      }
      index_719_.increment () ;
      enumerator_719.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceFileName\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceFileName COMMA_THERE)" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 28)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_0) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCallerCompiler,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inSourceString,\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const C_String & inStringForError\n"
    "                " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_Lexique (inCallerCompiler, inSourceString, inStringForError COMMA_THERE)" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 41)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << ",\n"
      "mMatchedTemplateDelimiterIndex (-1)" ;
  }else if (kBoolFalse == test_1) {
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                          \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::indexingDirectory (void) const {\n"
    "  return " ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                        Lexical error message list                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_2695_ (0) ;
  if (in_LEXICAL_5F_MESSAGE_5F_MAP.isValid ()) {
    cEnumerator_lexicalMessageMap enumerator_2695 (in_LEXICAL_5F_MESSAGE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2695.hasCurrentObject ()) {
      result << "\n"
        "static const char * gLexicalMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_2695.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " = " ;
      result << enumerator_2695.current_mLexicalMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 60)).stringValue () ;
      result << " ;\n" ;
      index_2695_.increment () ;
      enumerator_2695.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//          Syntax error messages, for every terminal symbol                                     \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_3203_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_3203 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3203.hasCurrentObject ()) {
      result << "\n"
        "//--- Syntax error message for terminal '$" ;
      result << enumerator_3203.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 68)).stringValue () ;
      result << "$' :\n"
        "static const char * gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3203.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " = " ;
      result << enumerator_3203.current_mSyntaxErrorMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 69)).stringValue () ;
      result << " ;\n" ;
      index_3203_.increment () ;
      enumerator_3203.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                getMessageForTerminal                                                          \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getMessageForTerminal (const int16_t inTerminalIndex) const {\n"
    "  C_String result = \"<unknown>\" ;\n"
    "  if ((inTerminalIndex >= 0) && (inTerminalIndex < " ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 78)).stringValue () ;
  result << ")) {\n"
    "    static const char * syntaxErrorMessageArray [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 79)).stringValue () ;
  result << "] = {kEndOfSourceLexicalErrorMessage" ;
  GALGAS_uint index_4189_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_4189 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4189.hasCurrentObject ()) {
      result << ",\n"
        "        gSyntaxErrorMessage_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4189.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 81)).stringValue () ;
      index_4189_.increment () ;
      enumerator_4189.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = syntaxErrorMessageArray [inTerminalIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                      U N I C O D E    S T R I N G S                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_4780_ (0) ;
  if (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES.isValid ()) {
    cEnumerator_stringset enumerator_4780 (in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES, kENUMERATION_UP) ;
    while (enumerator_4780.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, enumerator_4780.current_key (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 94)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "\n"
          "//--- Unicode string for '$" ;
        result << enumerator_4780.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 95)).stringValue () ;
        result << "$'\n"
          "static const utf32 kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_4780.current_key (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " [] = " ;
        result << enumerator_4780.current_key (HERE).getter_utf_33__32_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 96)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_4780_.increment () ;
      enumerator_4780.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_5082_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5082 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_5082.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "//             Key words table '" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 103)).stringValue () ;
      result << "'      \n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "static const int32_t ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
      result << " = " ;
      result << enumerator_5082.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 105)).stringValue () ;
      result << " ;\n"
        "\n"
        "static const C_unicode_lexique_table_entry ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 106)).stringValue () ;
      result << " [ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 106)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_5794_ (0) ;
      if (enumerator_5082.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_5794 (enumerator_5082.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_5794.hasCurrentObject ()) {
          result << "  C_unicode_lexique_table_entry (kUnicodeString_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_5794.current_mName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", " ;
          result << enumerator_5794.current_mLength (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ", C_Lexique_" ;
          result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
          result << "::kToken_" ;
          result << enumerator_5794.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 108)).stringValue () ;
          result << ")" ;
          if (enumerator_5794.hasNextObject ()) {
            result << ",\n" ;
          }
          index_5794_.increment () ;
          enumerator_5794.gotoNextObject () ;
        }
      }
      result << "\n"
        "} ;\n"
        "\n"
        "int16_t C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::search_into_" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 112)).stringValue () ;
      result << " (const C_String & inSearchedString) {\n"
        "  return searchInList (inSearchedString, ktable_for_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 113)).stringValue () ;
      result << ", ktable_size_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5082.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 113)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_5082_.increment () ;
      enumerator_5082.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                          getCurrentTokenString                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::getCurrentTokenString (const cToken * inTokenPtr) const {\n"
    "  const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = (const cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " *) inTokenPtr ;\n"
    "  C_String s ;\n"
    "  if (ptr == NULL) {\n"
    "    s.appendCString(\"$$\") ;\n"
    "  }else{\n"
    "    switch (ptr->mTokenCode) {\n"
    "    case kToken_:\n"
    "      s.appendCString(\"$$\") ;\n"
    "      break ;\n" ;
  GALGAS_uint index_7113_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_7113 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7113.hasCurrentObject ()) {
      result << "    case kToken_" ;
      result << enumerator_7113.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 132)).stringValue () ;
      result << ":\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n"
        "      s.appendCString (" ;
      result << enumerator_7113.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 134)).stringValue () ;
      result << ") ;\n"
        "      s.appendUnicodeCharacter (TO_UNICODE ('$') COMMA_HERE) ;\n" ;
      GALGAS_uint index_7445_ (0) ;
      if (enumerator_7113.current_mSentAttributeList (HERE).isValid ()) {
        cEnumerator_lexicalSentValueList enumerator_7445 (enumerator_7113.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
        while (enumerator_7445.hasCurrentObject ()) {
          result << "      s.appendUnicodeCharacter (TO_UNICODE (' ') COMMA_HERE) ;\n"
            "      s." ;
          result << extensionGetter_appendMethodName (enumerator_7445.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << " (ptr->mLexicalAttribute_" ;
          result << enumerator_7445.current_mLexicalAttributeName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << extensionGetter_appendArgumentOfMethod (enumerator_7445.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 138)).stringValue () ;
          result << ") ;\n" ;
          index_7445_.increment () ;
          enumerator_7445.gotoNextObject () ;
        }
      }
      result << "      break ;\n" ;
      index_7113_.increment () ;
      enumerator_7113.gotoNextObject () ;
    }
  }
  result << "    default:\n"
    "      break ;\n"
    "    }\n"
    "  }\n"
    "  return s ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Delimiters                                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_8328_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 153)).isValid ()) {
    cEnumerator_templateDelimitorList enumerator_8328 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 153)), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8328 = enumerator_8328.hasCurrentObject () ;
    if (nonEmpty_enumerator_8328) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateDefinitionArray [" ;
      result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 154)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_8328.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_8328.current_mStartString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      result << enumerator_8328.current_mStartString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 155)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_8328.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 156)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "NULL, 0," ;
      }else if (kBoolFalse == test_3) {
        result << "kUnicodeString_" ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_8328.current_mEndString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << ", " ;
        result << enumerator_8328.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 159)).stringValue () ;
        result << "," ;
      }
      result << " NULL, " ;
      result << enumerator_8328.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 162)).stringValue () ;
      result << ")" ;
      if (enumerator_8328.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8328_.increment () ;
      enumerator_8328.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8328) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                           Template Replacements                                               \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_9322_ (0) ;
  if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
    cEnumerator_templateReplacementListAST enumerator_9322 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_9322 = enumerator_9322.hasCurrentObject () ;
    if (nonEmpty_enumerator_9322) {
      result << "static const cTemplateDelimiter " ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_kTemplateReplacementArray [" ;
      result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 173)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_9322.hasCurrentObject ()) {
      result << "  cTemplateDelimiter (kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9322.current_mMatchString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", " ;
      result << enumerator_9322.current_mMatchString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 175)).stringValue () ;
      result << ", kUnicodeString_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9322.current_mReplacementString (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      result << enumerator_9322.current_mReplacementString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 176)).stringValue () ;
      result << ", " ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_9322.current_mReplacementFunction (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 177)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "NULL" ;
      }else if (kBoolFalse == test_4) {
        result << "scanner_routine_" ;
        result << enumerator_9322.current_mReplacementFunction (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 180)).stringValue () ;
      }
      result << ", true)" ;
      if (enumerator_9322.hasNextObject ()) {
        result << ",\n" ;
      }
      index_9322_.increment () ;
      enumerator_9322.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_9322) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 191)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    GALGAS_uint index_10415_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 192)).isValid ()) {
      cEnumerator_terminalList enumerator_10415 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 192)), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_10415 = enumerator_10415.hasCurrentObject () ;
      if (nonEmpty_enumerator_10415) {
        result << "static const bool " ;
        result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
        result << "_kEndOfScriptInTemplateArray [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 193)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_10415.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_10415.current_mIsEndOfTemplateMark (HERE).getter_cString (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 194)).stringValue () ;
        result << " /* " ;
        result << enumerator_10415.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 194)).stringValue () ;
        result << " */" ;
        if (enumerator_10415.hasNextObject ()) {
          result << ",\n" ;
        }
        index_10415_.increment () ;
        enumerator_10415.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10415) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_5) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Unicode test functions                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    " \n" ;
  GALGAS_uint index_10925_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_10925 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_10925.hasCurrentObject ()) {
      result << "bool C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      result << enumerator_10925.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 206)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_10925.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 207)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_10925_.increment () ;
      enumerator_10925.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               P A R S E    L E X I C A L    T O K E N                                         \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::parseLexicalToken (void) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " token ;\n"
    "  mLoop = true ;\n"
    "  token.mTokenCode = -1 ;\n"
    "  while ((token.mTokenCode < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 220)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0)\n"
      "     && (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength > 0)\n"
      "     && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      const bool foundEndDelimitor = testForInputUTF32String (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndString,\n"
      "                                                              " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray [mMatchedTemplateDelimiterIndex].mEndStringLength,\n"
      "                                                              true) ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n"
      "      int32_t replacementIndex = 0 ;\n"
      "      while (replacementIndex >= 0) {\n"
      "        replacementIndex = findTemplateDelimiterIndex (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray, " ;
    result << in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 234)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 234)).stringValue () ;
    result << ") ;\n"
      "        if (replacementIndex >= 0) {\n"
      "          if (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mReplacementFunction == NULL) {\n"
      "            token.mTemplateStringBeforeToken << " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndString ;\n"
      "          }else{\n"
      "            C_String s ;\n"
      "            while (notTestForInputUTF32String (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndString,\n"
      "                                               " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mEndStringLength,\n"
      "                                               kEndOfSourceLexicalErrorMessage\n"
      "                                               COMMA_HERE)) {\n"
      "              s.appendUnicodeCharacter (previousChar () COMMA_HERE) ;\n"
      "            }\n"
      "            " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateReplacementArray [replacementIndex].mReplacementFunction (*this, s, token.mTemplateStringBeforeToken) ;\n"
      "          }\n"
      "        }\n"
      "      }\n"
      "      mMatchedTemplateDelimiterIndex = findTemplateDelimiterIndex (" ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kTemplateDefinitionArray, " ;
    result << in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 250)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 250)).stringValue () ;
    result << ") ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        token.mTemplateStringBeforeToken.appendUnicodeCharacter (mCurrentChar COMMA_HERE) ;\n"
      "        advance () ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (UNICODE_VALUE (mCurrentChar) != '\\0')) {\n" ;
    GALGAS_uint index_14213_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_14213 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_14213.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_14213.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << extensionGetter_initialization (enumerator_14213.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 258)).stringValue () ;
        result << " ;\n" ;
        index_14213_.increment () ;
        enumerator_14213.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_14428_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_14428 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_14428.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_14428.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 265)).stringValue () ;
        index_14428_.increment () ;
        enumerator_14428.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "      token.mTokenCode = kToken_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }\n"
      "    }\n"
      "    if ((token.mTokenCode > 0) && " ;
    result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
    result << "_kEndOfScriptInTemplateArray [token.mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  " ;
  }else if (kBoolFalse == test_6) {
    GALGAS_uint index_15218_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_15218 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_15218.hasCurrentObject ()) {
        result << "    token.mLexicalAttribute_" ;
        result << enumerator_15218.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << extensionGetter_initialization (enumerator_15218.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 285)).stringValue () ;
        result << " ;\n" ;
        index_15218_.increment () ;
        enumerator_15218.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n"
      "    try{\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_15433_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_15433 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_15433.hasCurrentObject ()) {
        result << callExtensionGetter_generateCode ((const cPtr_abstractLexicalRuleAST *) enumerator_15433.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_IDENTIFIER, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 292)).stringValue () ;
        index_15433_.increment () ;
        enumerator_15433.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if (testForInputUTF32Char (TO_UNICODE ('\\0'))) { // End of source text \? \n"
      "        token.mTokenCode = kToken_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        unknownCharacterLexicalError (LINE_AND_SOURCE_FILE) ;\n"
      "        token.mTokenCode = -1 ; // No token\n"
      "        advance () ; // ... go throught unknown character\n"
      "      }\n"
      "    }catch (const C_lexicalErrorException &) {\n"
      "      token.mTokenCode = -1 ; // No token\n"
      "      advance () ; // ... go throught unknown character\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "  if (UNICODE_VALUE (mCurrentChar) == '\\0') {\n"
    "    token.mTokenCode = 0 ;\n"
    "    enterToken (token) ;\n"
    "  }\n"
    "  return token.mTokenCode > 0 ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                         E N T E R    T O K E N                                                \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::enterToken (cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " & ioToken) {\n"
    "  cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = NULL ;\n"
    "  macroMyNew (ptr, cTokenFor_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " ()) ;\n"
    "  ptr->mTokenCode = ioToken.mTokenCode ;\n"
    "  // ptr->mIsOptional = ioToken.mIsOptional ;\n"
    "  ptr->mStartLocation = mTokenStartLocation ;\n"
    "  ptr->mEndLocation = mTokenEndLocation ;\n"
    "  ptr->mTemplateStringBeforeToken = ioToken.mTemplateStringBeforeToken ;\n"
    "  ioToken.mTemplateStringBeforeToken = \"\" ;\n" ;
  GALGAS_uint index_17043_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17043 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17043.hasCurrentObject ()) {
      result << "  ptr->mLexicalAttribute_" ;
      result << enumerator_17043.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " = ioToken.mLexicalAttribute_" ;
      result << enumerator_17043.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 329)).stringValue () ;
      result << " ;\n" ;
      index_17043_.increment () ;
      enumerator_17043.gotoNextObject () ;
    }
  }
  result << "  enterTokenFromPointer (ptr) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//               A T T R I B U T E   A C C E S S                                                 \n" ;
  GALGAS_uint index_17476_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_17476 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_17476.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      result << extensionGetter_cppTypeName (enumerator_17476.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::attributeValue_" ;
      result << enumerator_17476.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 339)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  return ptr->mLexicalAttribute_" ;
      result << enumerator_17476.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 341)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_17476_.increment () ;
      enumerator_17476.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//         A S S I G N    F R O M    A T T R I B U T E                                           \n" ;
  GALGAS_uint index_18206_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_18206 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_18206.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18206.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " C_Lexique_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << "::synthetizedAttribute_" ;
      result << enumerator_18206.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 349)).stringValue () ;
      result << " (void) const {\n"
        "  cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " * ptr = (cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentTokenPtr (HERE) ;\n"
        "  macroValidSharedObject (ptr, cTokenFor_" ;
      result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  GALGAS_location currentLocation (ptr->mStartLocation, ptr->mEndLocation, sourceText ()) ;\n"
        "  GALGAS_" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18206.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << " value (ptr->mLexicalAttribute_" ;
      result << enumerator_18206.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 353)).stringValue () ;
      result << ") ;\n"
        "  GALGAS_l" ;
      result << extensionGetter_lexicalTypeBaseName (enumerator_18206.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 354)).stringValue () ;
      result << " result (value, currentLocation) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_18206_.increment () ;
      enumerator_18206.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//                         I N T R O S P E C T I O N                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_stringlist C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::symbols (LOCATION_ARGS) {\n"
    "  GALGAS_stringlist result = GALGAS_stringlist::constructor_emptyList (THERE) ;\n" ;
  GALGAS_uint index_19674_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 364)).isValid ()) {
    cEnumerator_terminalList enumerator_19674 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 364)), kENUMERATION_UP) ;
    while (enumerator_19674.hasCurrentObject ()) {
      result << "  result.addAssign_operation (GALGAS_string (" ;
      result << enumerator_19674.current_mTerminalName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 365)).stringValue () ;
      result << ") COMMA_THERE) ;\n" ;
      index_19674_.increment () ;
      enumerator_19674.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 373)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_7) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_20128_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_20128 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_20128.hasCurrentObject ()) {
      result << "  ioList.appendObject (" ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).add_operation (enumerator_20128.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 377)).stringValue () ;
      result << ") ;\n" ;
      index_20128_.increment () ;
      enumerator_20128.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const C_String & " ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 383)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "/* inIdentifier */" ;
  }else if (kBoolFalse == test_8) {
    result << "inIdentifier" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "bool & " ;
  const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 384)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "/* ioFound */" ;
  }else if (kBoolFalse == test_9) {
    result << "ioFound" ;
  }
  result << ",\n"
    "     " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "TC_UniqueArray <C_String> & " ;
  const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.getter_count (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 385)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "/* ioList */" ;
  }else if (kBoolFalse == test_10) {
    result << "ioList" ;
  }
  result << ") {\n" ;
  GALGAS_uint index_20779_ (0) ;
  if (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP.isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_20779 (in_LEXICAL_5F_TOKEN_5F_LIST_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_20779.hasCurrentObject ()) {
      result << "  if (inIdentifier == " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).add_operation (enumerator_20779.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 389)).stringValue () ;
      result << ") {\n"
        "    ioFound = true ;\n" ;
      GALGAS_uint index_20929_ (0) ;
      if (enumerator_20779.current_mTokenSortedList (HERE).isValid ()) {
        cEnumerator_tokenSortedlist enumerator_20929 (enumerator_20779.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
        while (enumerator_20929.hasCurrentObject ()) {
          result << "    ioList.appendObject (" ;
          result << enumerator_20929.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 392)).stringValue () ;
          result << ") ;\n" ;
          index_20929_.increment () ;
          enumerator_20929.gotoNextObject () ;
        }
      }
      result << "    ioList.sortArrayUsingCompareMethod() ;\n"
        "  }\n" ;
      index_20779_.increment () ;
      enumerator_20779.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static cLexiqueIntrospection lexiqueIntrospection_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "\n"
    "__attribute__ ((used))\n"
    "__attribute__ ((unused)) (getKeywordLists_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ", getKeywordsForIdentifier_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "uint32_t C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleIndexForTerminal (const int32_t inTerminalIndex) const {\n"
    "  static const uint32_t kTerminalSymbolStyles [" ;
  result << in_TERMINAL_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 410)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_21966_ (0) ;
  if (in_TERMINAL_5F_LIST.isValid ()) {
    cEnumerator_terminalList enumerator_21966 (in_TERMINAL_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21966.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_21966.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_21966.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).getter_identifierRepresentation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 412)).stringValue () ;
      result << " */" ;
      index_21966_.increment () ;
      enumerator_21966.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return (inTerminalIndex >= 0) \? kTerminalSymbolStyles [inTerminalIndex] : 0 ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   S T Y L E   N A M E    F O R    S T Y L E    I N D E X                                      \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "C_String C_Lexique_" ;
  result << in_LEXIQUE_5F_IDENTIFIER.stringValue () ;
  result << "::styleNameForIndex (const uint32_t inStyleIndex) const {\n"
    "  C_String result ;\n"
    "  if (inStyleIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 423)).stringValue () ;
  result << ") {\n"
    "    static const char * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).getter_string (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 424)).stringValue () ;
  result << "] = {\n"
    "      \"\"" ;
  GALGAS_uint index_22838_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_22838 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22838.hasCurrentObject ()) {
      result << ",\n"
        "      " ;
      result << enumerator_22838.current_mName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_implementation-galgas3.cpp.galgasTemplate", 427)).stringValue () ;
      index_22838_.increment () ;
      enumerator_22838.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inStyleIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                  const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                  const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "#import \"OC_Lexique.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    R O U T I N E S                                             \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_439_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)).isValid ()) {
    cEnumerator_lexicalRoutineMap enumerator_439 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalRoutineMessageMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 10)), kENUMERATION_UP) ;
    while (enumerator_439.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_439.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "\n"
          "void scanner_cocoa_routine_" ;
        result << enumerator_439.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 12)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_593_ (0) ;
        if (enumerator_439.current_mLexicalRoutineFormalArgumentList (HERE).isValid ()) {
          cEnumerator_lexicalRoutineFormalArgumentList enumerator_593 (enumerator_439.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
          while (enumerator_593.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << extensionGetter_cppConstInFormalArgument (enumerator_593.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 14)).stringValue () ;
            result << extensionGetter_cocoaTypeName (enumerator_593.current_mLexicalFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 15)).stringValue () ;
            result << extensionGetter_cocoaPointerInFormalArgument (enumerator_593.current_mLexicalFormalArgumentMode (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 16)).stringValue () ;
            result << " " ;
            result << enumerator_593.current_mArgumentNameForComment (HERE).stringValue () ;
            index_593_.increment () ;
            enumerator_593.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_439_.increment () ;
      enumerator_439.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                    E X T E R N    F U N C T I O N S                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  GALGAS_uint index_1347_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)).isValid ()) {
    cEnumerator_lexicalFunctionMap enumerator_1347 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalFunctionMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 29)), kENUMERATION_UP) ;
    while (enumerator_1347.hasCurrentObject ()) {
      const enumGalgasBool test_1 = enumerator_1347.current_mIsExtern (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "\n" ;
        result << extensionGetter_cppTypeName (enumerator_1347.current_mReturnedLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " scanner_cocoa_function_" ;
        result << enumerator_1347.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 31)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "BOOL * ioScanningOk" ;
        GALGAS_uint index_1518_ (0) ;
        if (enumerator_1347.current_mLexicalTypeList (HERE).isValid ()) {
          cEnumerator_lexicalFunctionFormalArgumentList enumerator_1518 (enumerator_1347.current_mLexicalTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1518.hasCurrentObject ()) {
            result << ",\n"
              "                " ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "const " ;
            result << extensionGetter_cppTypeName (enumerator_1518.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 33)).stringValue () ;
            result << " " ;
            result << enumerator_1518.current_mArgumentNameForComment (HERE).stringValue () ;
            index_1518_.increment () ;
            enumerator_1518.gotoNextObject () ;
          }
        }
        result << ") ;\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_1347_.increment () ;
      enumerator_1347.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         T E R M I N A L    S Y M B O L    E N U M E R A T I O N                               \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "enum {" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "_1_" ;
  GALGAS_uint index_2090_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)).isValid ()) {
    cEnumerator_terminalList enumerator_2090 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 47)), kENUMERATION_UP) ;
    while (enumerator_2090.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_2090.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 48)).stringValue () ;
      index_2090_.increment () ;
      enumerator_2090.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//        U N I C O D E    T E S T    F U N C T I O N S                                          \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2587_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_2587 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_2587.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_2587.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 60)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) ;\n"
        "\n" ;
      index_2587_.increment () ;
      enumerator_2587.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                     S C A N N E R    C L A S S                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@interface OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << " : OC_Lexique {\n"
    "//--- Attributes\n" ;
  GALGAS_uint index_3172_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 71)).isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_3172 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalAttributeMap (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 71)), kENUMERATION_UP) ;
    while (enumerator_3172.hasCurrentObject ()) {
      result << "  @private " ;
      result << extensionGetter_cocoaTypeName (enumerator_3172.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " mLexicalAttribute_" ;
      result << enumerator_3172.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_header_template_zone_2.h.galgasTemplate", 72)).stringValue () ;
      result << " ;\n" ;
      index_3172_.increment () ;
      enumerator_3172.gotoNextObject () ;
    }
  }
  result << "\n"
    "}\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & /* in_LEXIQUE_5F_CLASS_5F_NAME */,
                                                                                  const GALGAS_lexiqueAnalysisContext & /* in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "- (NSUInteger) terminalVocabularyCount ;\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal ;\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring ;\n"
    "\n"
    "- (NSUInteger) styleCount ;\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex ;\n"
    "\n"
    "- (NSString *) indexingDirectory ;\n"
    "\n"
    "- (NSArray *) indexingTitles ; // Array of NSString\n"
    "\n"
    "- (BOOL) isTemplateLexique ;\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex ;\n"
    "\n"
    "@end\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'lexiqueGenerationTemplates cocoaImplementationZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME,
                                                                                          const GALGAS_string & in_LEXIQUE_5F_CLASS_5F_NAME,
                                                                                          const GALGAS_lexicalAttributeMap & in_LEXICAL_5F_ATTRIBUTE_5F_MAP,
                                                                                          const GALGAS_lexicalMessageMap & /* in_LEXICAL_5F_MESSAGE_5F_MAP */,
                                                                                          const GALGAS_terminalList & /* in_TERMINAL_5F_LIST */,
                                                                                          const GALGAS_stringset & /* in_STRINGS_5F_IN_5F_EXPLICIT_5F_RULES */,
                                                                                          const GALGAS_lexicalRuleListAST & in_LEXICAL_5F_RULE_5F_LIST,
                                                                                          const GALGAS_lexiqueAnalysisContext & in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT,
                                                                                          const GALGAS_templateReplacementListAST & in_TEMPLATE_5F_REPLACEMENT_5F_LIST,
                                                                                          const GALGAS_string & in_INDEXING_5F_DIRECTORY,
                                                                                          const GALGAS_indexingListAST & in_INDEXING_5F_LIST,
                                                                                          const GALGAS_lexicalStyleListAST & in_LEXICAL_5F_STYLE_5F_LIST,
                                                                                          const GALGAS_metamodelTemplateDelimitorListAST & in_TEMPLATE_5F_DELIMITOR_5F_LIST,
                                                                                          const GALGAS_lexicalFunctionListAST & in_UNICODE_5F_TEST_5F_FUNCTIONS
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"" ;
  result << in_LEXIQUE_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"PMDebug.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//            Unicode test functions                                                             \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    " \n" ;
  GALGAS_uint index_440_ (0) ;
  if (in_UNICODE_5F_TEST_5F_FUNCTIONS.isValid ()) {
    cEnumerator_lexicalFunctionListAST enumerator_440 (in_UNICODE_5F_TEST_5F_FUNCTIONS, kENUMERATION_UP) ;
    while (enumerator_440.hasCurrentObject ()) {
      result << "bool " ;
      result << enumerator_440.current_mFunctionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 10)).stringValue () ;
      result << " (const utf32 inUnicodeCharacter) {\n"
        "  return " ;
      result << callExtensionGetter_generateForUnicodeTestFunctions ((const cPtr_lexicalFunctionExpressionAST *) enumerator_440.current_mLexicalExpression (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 11)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_440_.increment () ;
      enumerator_440.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@implementation OC_Lexique_" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                           Template Replacements                                               \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 24)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static NSArray * kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 25)).stringValue () ;
    result << " ; // Of NSString \n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                           Template Delimiters                                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "static NSArray * kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 35)).stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (instancetype) init {\n"
    "  self = [super init] ;\n"
    "  if (self) {\n"
    "    noteObjectAllocation (self) ;\n" ;
  GALGAS_uint index_2091_ (0) ;
  if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
    cEnumerator_lexicalAttributeMap enumerator_2091 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2091.hasCurrentObject ()) {
      result << "    mLexicalAttribute_" ;
      result << enumerator_2091.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " = " ;
      result << extensionGetter_cocoaInitializationCode (enumerator_2091.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 45)).stringValue () ;
      result << " ;\n" ;
      index_2091_.increment () ;
      enumerator_2091.gotoNextObject () ;
    }
  }
  result << "  }\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  if (nil == kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 49)).stringValue () ;
    result << ") {\n"
      "    kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 50)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_2540_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 51)).isValid ()) {
      cEnumerator_templateDelimitorList enumerator_2540 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTemplateDelimitorList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 51)), kENUMERATION_UP) ;
      while (enumerator_2540.hasCurrentObject ()) {
        result << "      [[OC_GGS_TemplateDelimiter alloc] initWithStartString:@" ;
        result << enumerator_2540.current_mStartString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 52)).stringValue () ;
        result << " endString:" ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2540.current_mEndString (HERE).getter_string (HERE).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_3) {
          result << "nil" ;
        }else if (kBoolFalse == test_3) {
          result << "@" ;
          result << enumerator_2540.current_mEndString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 56)).stringValue () ;
        }
        result << " discardStartString:" ;
        result << enumerator_2540.current_mPreservesStartDelimiter (HERE).operator_not (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 59)).stringValue () ;
        result << "],\n" ;
        index_2540_.increment () ;
        enumerator_2540.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_2) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "  if (nil == kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 67)).stringValue () ;
    result << ") {\n"
      "\n"
      "    kTemplateReplacementArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 68)).stringValue () ;
    result << " = [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_3215_ (0) ;
    if (in_TEMPLATE_5F_REPLACEMENT_5F_LIST.isValid ()) {
      cEnumerator_templateReplacementListAST enumerator_3215 (in_TEMPLATE_5F_REPLACEMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_3215.hasCurrentObject ()) {
        result << "      @" ;
        result << enumerator_3215.current_mMatchString (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_3215_.increment () ;
        enumerator_3215.gotoNextObject () ;
      }
    }
    result << "      nil\n"
      "    ] ;\n"
      "  }\n" ;
  }else if (kBoolFalse == test_4) {
  }
  result << "  return self ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (void) dealloc {\n"
    "  noteObjectDeallocation (self) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                 I N D E X I N G    D I R E C T O R Y                                          \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) indexingDirectory {\n"
    "  return @" ;
  result << in_INDEXING_5F_DIRECTORY.getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 92)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                 I N D E X I N G    T I T L E S                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSArray *) indexingTitles { // Array of NSString\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, in_INDEXING_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 103)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_4461_ (0) ;
    if (in_INDEXING_5F_LIST.isValid ()) {
      cEnumerator_indexingListAST enumerator_4461 (in_INDEXING_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4461.hasCurrentObject ()) {
        result << "    @" ;
        result << enumerator_4461.current_mIndexComment (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 107)).stringValue () ;
        result << ",\n" ;
        index_4461_.increment () ;
        enumerator_4461.gotoNextObject () ;
      }
    }
    result << "    NULL\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_5) {
    result << "\n"
      "  return [NSArray array] ;\n" ;
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//            Terminal Symbols as end of script in template mark                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 124)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_uint index_5217_ (0) ;
    if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)).isValid ()) {
      cEnumerator_terminalList enumerator_5217 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 125)), kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_5217 = enumerator_5217.hasCurrentObject () ;
      if (nonEmpty_enumerator_5217) {
        result << "static const BOOL kEndOfScriptInTemplateArray_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << " [" ;
        result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 126)).stringValue () ;
        result << "] = {\n" ;
      }
      while (enumerator_5217.hasCurrentObject ()) {
        result << "  " ;
        result << enumerator_5217.current_mIsEndOfTemplateMark (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << " /* " ;
        result << enumerator_5217.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 127)).stringValue () ;
        result << " */" ;
        if (enumerator_5217.hasNextObject ()) {
          result << ",\n" ;
        }
        index_5217_.increment () ;
        enumerator_5217.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_5217) {
        result << "\n"
          "} ;\n" ;
      }
    }
  }else if (kBoolFalse == test_6) {
  }
  result << "\n"
    "\n" ;
  GALGAS_uint index_5425_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 135)).isValid ()) {
    cEnumerator_lexicalExplicitTokenListMapMap enumerator_5425 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mLexicalTokenListMap (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 135)), kENUMERATION_UP) ;
    while (enumerator_5425.hasCurrentObject ()) {
      const enumGalgasBool test_7 = enumerator_5425.current_mShouldBeGenerated (HERE).boolEnum () ;
      if (kBoolTrue == test_7) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "//\n"
          "//             Key words table '" ;
        result << enumerator_5425.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 139)).stringValue () ;
        result << "'      \n"
          "//\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "static const C_cocoa_lexique_table_entry ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "_" ;
        result << enumerator_5425.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << " [" ;
        result << enumerator_5425.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 142)).stringValue () ;
        result << "] = {\n" ;
        GALGAS_uint index_6084_ (0) ;
        if (enumerator_5425.current_mTokenSortedList (HERE).isValid ()) {
          cEnumerator_tokenSortedlist enumerator_6084 (enumerator_5425.current_mTokenSortedList (HERE), kENUMERATION_UP) ;
          while (enumerator_6084.hasCurrentObject ()) {
            result << "  {" ;
            result << enumerator_6084.current_mName (HERE).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << ", " ;
            result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
            result << "_1_" ;
            result << enumerator_6084.current_mTerminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 144)).stringValue () ;
            result << "}" ;
            if (enumerator_6084.hasNextObject ()) {
              result << ",\n" ;
            }
            index_6084_.increment () ;
            enumerator_6084.gotoNextObject () ;
          }
        }
        result << "\n"
          "} ;\n"
          "\n"
          "static NSInteger search_into_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).stringValue () ;
        result << "_" ;
        result << enumerator_5425.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 148)).stringValue () ;
        result << " (NSString * inSearchedString) {\n"
          "  return searchStringInTable (inSearchedString, ktable_for_" ;
        result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << "_" ;
        result << enumerator_5425.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << ", " ;
        result << enumerator_5425.current_mExplicitTokenListMap (HERE).getter_count (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 149)).stringValue () ;
        result << ") ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_7) {
      }
      index_5425_.increment () ;
      enumerator_5425.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//               P A R S E    L E X I C A L    T O K E N                                         \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (void) parseLexicalTokenForLexicalColoring {\n"
    "  mLoop = YES ;\n"
    "  BOOL scanningOk = YES ;\n"
    "  mTokenCode = 0 ;\n"
    "  while ((mTokenCode == 0) && (mCurrentChar != '\\0')) {\n"
    "    mTokenStartLocation = mCurrentLocation ;\n" ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 167)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "    if ((mMatchedTemplateDelimiterIndex >= 0) && ([[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 168)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] startString].length > 0)) {\n"
      "      const BOOL foundEndDelimitor = [self testForInputString:[[kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 169)).stringValue () ;
    result << " objectAtIndex:(NSUInteger) mMatchedTemplateDelimiterIndex] endString] advance:YES] ;\n"
      "      if (foundEndDelimitor) {\n"
      "        mMatchedTemplateDelimiterIndex = -1 ;\n"
      "      }\n"
      "    }\n"
      "    while ((mMatchedTemplateDelimiterIndex < 0) && (mCurrentChar != '\\0')) {\n"
      "      " ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_REPLACEMENT_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      result << "\n"
        "      [self searchForReplacementPattern:kTemplateReplacementArray_" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 176)).stringValue () ;
      result << "] ;\n"
        "      " ;
    }else if (kBoolFalse == test_9) {
    }
    result << "\n"
      "      mMatchedTemplateDelimiterIndex = [self findTemplateDelimiterIndex:kTemplateDefinitionArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 178)).stringValue () ;
    result << "] ;\n"
      "      if (mMatchedTemplateDelimiterIndex < 0) {\n"
      "        [self advance] ;\n"
      "        mTokenCode = -2 ;\n"
      "      }\n"
      "    }\n"
      "    if ((mMatchedTemplateDelimiterIndex >= 0) && (mTokenCode == 0) && (mCurrentChar != '\\0') && scanningOk) {\n" ;
    GALGAS_uint index_8424_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_8424 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_8424.hasCurrentObject ()) {
        result << "      " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_8424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_8424.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_8424.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 186)).stringValue () ;
        result << " ;\n" ;
        index_8424_.increment () ;
        enumerator_8424.gotoNextObject () ;
      }
    }
    result << "      mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ()) ;
    }
    GALGAS_uint index_8640_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_8640 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_8640.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_8640.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 192)).stringValue () ;
        index_8640_.increment () ;
        enumerator_8640.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 6U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 6U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "        mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "      }else{ // Unknown input character\n"
      "        scanningOk = NO ;\n"
      "      }\n"
      "    }\n"
      "    if ((mTokenCode > 0) && kEndOfScriptInTemplateArray_" ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 201)).stringValue () ;
    result << " [mTokenCode - 1]) {\n"
      "      mMatchedTemplateDelimiterIndex = -1 ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "      [self advance] ;\n"
      "    }" ;
  }else if (kBoolFalse == test_8) {
    GALGAS_uint index_9261_ (0) ;
    if (in_LEXICAL_5F_ATTRIBUTE_5F_MAP.isValid ()) {
      cEnumerator_lexicalAttributeMap enumerator_9261 (in_LEXICAL_5F_ATTRIBUTE_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_9261.hasCurrentObject ()) {
        result << "    " ;
        result << extensionGetter_cocoaResetPrefix (enumerator_9261.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << "mLexicalAttribute_" ;
        result << enumerator_9261.current_lkey (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << extensionGetter_cocoaReset (enumerator_9261.current_mLexicalType (HERE), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 210)).stringValue () ;
        result << " ;\n" ;
        index_9261_.increment () ;
        enumerator_9261.gotoNextObject () ;
      }
    }
    result << "    mTokenStartLocation = mCurrentLocation ;\n" ;
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ()) ;
    }
    GALGAS_uint index_9473_ (0) ;
    if (in_LEXICAL_5F_RULE_5F_LIST.isValid ()) {
      cEnumerator_lexicalRuleListAST enumerator_9473 (in_LEXICAL_5F_RULE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_9473.hasCurrentObject ()) {
        result << callExtensionGetter_generateCocoaCode ((const cPtr_abstractLexicalRuleAST *) enumerator_9473.current_mLexicalRule (HERE).ptr (), in_LEXIQUE_5F_CLASS_5F_NAME, in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT, inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 216)).stringValue () ;
        index_9473_.increment () ;
        enumerator_9473.gotoNextObject () ;
      }
    }
    if (GALGAS_uint ((uint32_t) 4U).isValid ()) {
      result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 4U).uintValue ())) ;
    }
    result << "if ([self testForInputChar:'\\0']) { // End of source text \? \n"
      "      mTokenCode = " ;
    result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
    result << "_1_ ; // Empty string code\n"
      "    }else{ // Unknown input character\n"
      "      scanningOk = NO ;\n"
      "      [self advance] ;\n"
      "    }\n"
      "  //--- Error \?\n"
      "    if (! scanningOk) {\n"
      "      mTokenCode = -1 ;\n"
      "    }" ;
  }
  result << "\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                   T E R M I N A L    C O U N T                                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) terminalVocabularyCount {\n"
    "  return " ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 239)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                     S T Y L E   C O U N T                                                     \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) styleCount {\n"
    "  return " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 249)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                I S    T E M P L A T E    L E X I Q U E                                        \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (BOOL) isTemplateLexique {\n"
    "  return " ;
  result << GALGAS_bool (kIsStrictSup, in_TEMPLATE_5F_DELIMITOR_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).objectCompare (GALGAS_uint ((uint32_t) 0U))).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 259)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//   S T Y L E   I N D E X    F O R    T E R M I N A L                                           \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSUInteger) styleIndexForTerminal: (NSInteger) inTerminal {\n"
    "  static const NSUInteger kTerminalSymbolStyles [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 269)).stringValue () ;
  result << "] = {0" ;
  GALGAS_uint index_11799_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)).isValid ()) {
    cEnumerator_terminalList enumerator_11799 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 270)), kENUMERATION_UP) ;
    while (enumerator_11799.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_11799.current_mStyleIndex (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_11799.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 271)).stringValue () ;
      result << " */" ;
      index_11799_.increment () ;
      enumerator_11799.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalSymbolStyles [inTerminal] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//    A T O M I C    S E L E C T I O N   F O R    T E R M I N A L                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (BOOL) atomicSelectionForToken: (NSUInteger) inTokenIndex {\n"
    "  static const BOOL kTerminalAtomicSelection [" ;
  result << in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 283)).stringValue () ;
  result << "] = {NO" ;
  GALGAS_uint index_12561_ (0) ;
  if (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 284)).isValid ()) {
    cEnumerator_terminalList enumerator_12561 (in_LEXIQUE_5F_ANALYSIS_5F_CONTEXT.getter_mTerminalList (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 284)), kENUMERATION_UP) ;
    while (enumerator_12561.hasCurrentObject ()) {
      result << ",\n"
        "    " ;
      result << enumerator_12561.current_mAtomicSelection (HERE).getter_ocString (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " /* " ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "_1_" ;
      result << enumerator_12561.current_mTerminalName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).getter_identifierRepresentation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 285)).stringValue () ;
      result << " */" ;
      index_12561_.increment () ;
      enumerator_12561.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } ;\n"
    "  return kTerminalAtomicSelection [inTokenIndex] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//             S T Y L E   N A M E    F O R    I N D E X                                         \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) styleNameForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 298)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 299)).stringValue () ;
  result << "] = {\n"
    "      @\"Default Style\"" ;
  GALGAS_uint index_13404_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_13404 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13404.hasCurrentObject ()) {
      result << ",\n"
        "      @" ;
      result << enumerator_13404.current_mComment (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 302)).getter_utf_38_Representation (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 302)).stringValue () ;
      index_13404_.increment () ;
      enumerator_13404.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         S T Y L E   I D E N T I F I E R    F O R    I N D E X                                 \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) styleIdentifierForStyleIndex: (NSInteger) inIndex {\n"
    "  NSString * result = nil ;\n"
    "  if ((inIndex >= 0) && (inIndex < " ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 317)).stringValue () ;
  result << ")) {\n"
    "    NSString * kStyleArray [" ;
  result << in_LEXICAL_5F_STYLE_5F_LIST.getter_length (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 318)).stringValue () ;
  result << "] = {\n"
    "      @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\"" ;
  GALGAS_uint index_14200_ (0) ;
  if (in_LEXICAL_5F_STYLE_5F_LIST.isValid ()) {
    cEnumerator_lexicalStyleListAST enumerator_14200 (in_LEXICAL_5F_STYLE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14200.hasCurrentObject ()) {
      result << ",\n"
        "      @\"" ;
      result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
      result << "-" ;
      result << enumerator_14200.current_mName (HERE).getter_string (SOURCE_FILE ("lexique_cocoa_implementation.m.galgasTemplate", 321)).stringValue () ;
      result << "\"" ;
      index_14200_.increment () ;
      enumerator_14200.gotoNextObject () ;
    }
  }
  result << "\n"
    "    } ;\n"
    "    result = kStyleArray [inIndex] ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//         L E X I Q U E   I D E N T I F I E R                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "- (NSString *) lexiqueIdentifier {\n"
    "  return @\"" ;
  result << in_LEXIQUE_5F_CLASS_5F_NAME.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "@end\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 104)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                                extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_commandLineOptionMap var_boolOptionMap_4676 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_4719 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_4764 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_4813 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 120)) ;
  GALGAS_stringset var_optionNameSet_4838 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  cEnumerator_commandLineOptionListAST enumerator_4881 (object->mProperty_mOptions, kENUMERATION_UP) ;
  while (enumerator_4881.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_optionNameSet_4838.getter_hasKey (enumerator_4881.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 123)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_4881.current_mOptionInternalName (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 124)), GALGAS_string ("the '").add_operation (enumerator_4881.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)), fixItArray1  COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 125)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          var_boolOptionMap_4676.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 128)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 129)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 130)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
          }
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsNotEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 133)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              TC_Array <C_FixItDescription> fixItArray4 ;
              inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 134)), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray4  COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_2) {
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 136)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_5) {
            {
            GALGAS_string temp_6 ;
            const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 142)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_7) {
              temp_6 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_7) {
              temp_6 = enumerator_4881.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 142)) ;
            }
            var_uintOptionMap_4719.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 139)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 140)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 141)), temp_6, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 137)) ;
            }
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 144)))).boolEnum () ;
              if (kBoolTrue == test_8) {
                TC_Array <C_FixItDescription> fixItArray9 ;
                inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 145)), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray9  COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_5) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 147)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              var_stringOptionMap_4764.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 150)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 151)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 152)), enumerator_4881.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 148)) ;
              }
              enumGalgasBool test_11 = kBoolTrue ;
              if (kBoolTrue == test_11) {
                test_11 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 155)))).boolEnum () ;
                if (kBoolTrue == test_11) {
                  TC_Array <C_FixItDescription> fixItArray12 ;
                  inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 156)), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray12  COMMA_SOURCE_FILE ("optionCompilation.galgas", 156)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 158)).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_13) {
                {
                var_stringListOptionMap_4813.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 161)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 162)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 163)), enumerator_4881.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 159)) ;
                }
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = GALGAS_bool (kIsNotEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 166)))).boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 167)), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray15  COMMA_SOURCE_FILE ("optionCompilation.galgas", 167)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_4881.current_mOptionTypeName (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 170)), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 170)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_4838.addAssign_operation (enumerator_4881.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 172))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 172)) ;
    enumerator_4881.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (object->mProperty_mOptionComponentName, object->mProperty_mIsPredefined, var_boolOptionMap_4676, var_uintOptionMap_4719, var_stringOptionMap_4764, var_stringListOptionMap_4813, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 175)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               extensionMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_8062 = function_optionNameForUsefulEntitiesGraph (object->mProperty_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8062, var_nameForUsefulness_8062, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 199)) ;
  }
  GALGAS_bool var_isPredefined_8324 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_8369 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_8414 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_8461 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_8512 ;
  constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mOptionComponentName, var_isPredefined_8324, var_boolOptionMap_8369, var_uintOptionMap_8414, var_stringOptionMap_8461, var_stringListOptionMap_8512, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 201)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("optionCompilation.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 214)), var_isPredefined_8324, object->mProperty_mOptionComponentName.getter_string (HERE), var_boolOptionMap_8369, var_uintOptionMap_8414, var_stringOptionMap_8461, var_stringListOptionMap_8512  COMMA_SOURCE_FILE ("optionCompilation.galgas", 212))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 210)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_optionComponentForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  result_result = object->mProperty_mIsPredefined ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                     extensionGetter_optionComponentForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentForGeneration_isPredefined (defineExtensionGetter_optionComponentForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                   extensionGetter_optionComponentForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentForGeneration_headerKind (defineExtensionGetter_optionComponentForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsPredefined.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mProperty_mOptionComponentName, object->mProperty_mBoolOptionMap, object->mProperty_mUIntOptionMap, object->mProperty_mStringOptionMap, object->mProperty_mStringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 258))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                              extensionMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mIsPredefined.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 278))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 278)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mProperty_mOptionComponentName, object->mProperty_mBoolOptionMap, object->mProperty_mUIntOptionMap, object->mProperty_mStringOptionMap, object->mProperty_mStringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 279))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                     extensionMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@optionComponentForGeneration appendSpecificFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inProductDirectory,
                                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                              GALGAS_stringlist & ioArgument_ioCocoaProductFileList,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 297)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      test_1 = object->mProperty_mIsPredefined.operator_not (SOURCE_FILE ("optionCompilation.galgas", 297)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mProperty_mOptionComponentName COMMA_SOURCE_FILE ("optionCompilation.galgas", 305))), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mProperty_mOptionComponentName COMMA_SOURCE_FILE ("optionCompilation.galgas", 309))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 299)) ;
      }
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)) ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)), object->mProperty_mOptionComponentName, object->mProperty_mBoolOptionMap, object->mProperty_mUIntOptionMap, object->mProperty_mStringOptionMap, object->mProperty_mStringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 323))), GALGAS_string ("\n"
        "\n"), GALGAS_string ("\n"
        "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 317)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                            extensionMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'optionGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_optionGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_optionGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_optionGenerationTemplates_0,
  0,
  gWrapperAllDirectories_optionGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               Bool options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_376_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_376 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_376.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_376.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_376_.increment () ;
      enumerator_376.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_894_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_894 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_894.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_894.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_894_.increment () ;
      enumerator_894.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1414_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1414 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1414.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_1414.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1414_.increment () ;
      enumerator_1414.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1941_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1941 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1941.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_1941.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1941_.increment () ;
      enumerator_1941.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               Bool options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_375_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_375 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_375.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_375.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_375.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_375.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_375_.increment () ;
      enumerator_375.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1238_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1238 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1238.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1238.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1238.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1238.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1238_.increment () ;
      enumerator_1238.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2168_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2168 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2168.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2168.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2168.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2168.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2168_.increment () ;
      enumerator_2168.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_3126_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_3126 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3126.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_3126.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_3126.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3126.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_3126_.increment () ;
      enumerator_3126.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "#define " ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
  result << "_FOR_COCOA_DEFINED\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NSMutableArray * ioBoolOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioUIntOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringOptionArray,\n"
    "          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringListOptionArray) ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#import \"" ;
  result << in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NSMutableArray * ioBoolOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioUIntOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringOptionArray,\n"
    "           " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "NSMutableArray * ioStringListOptionArray) {\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  OC_GGS_CommandLineOption * option ;\n" ;
  }else if (kBoolFalse == test_0) {
  }
  GALGAS_uint index_799_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_799 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_799.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_799.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_799.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_799.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_799.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_799_.increment () ;
      enumerator_799.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1264_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1264 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1264.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1264.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1264.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1264.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1264.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1264.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1264_.increment () ;
      enumerator_1264.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1766_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1766 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1766.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1766.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1766.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1766.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1766.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1766.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1766_.increment () ;
      enumerator_1766.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2275_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2275 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2275.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2275.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2275.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2275.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2275.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2275.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2275_.increment () ;
      enumerator_2275.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'compileAllGuiComponentFromASTGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 243)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_7967 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_7967.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_7967.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 245)) ;
    }
    enumerator_7967.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'guiComponentSemanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_guiComponentSemanticAnalysis (const GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                           GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 261)), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 261)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_8629 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 264)) ;
  cEnumerator_lstringlist enumerator_8729 (constinArgument_inGUIComponentAST.getter_mImportedOptionList (HERE), kENUMERATION_UP) ;
  while (enumerator_8729.hasCurrentObject ()) {
    GALGAS_bool joker_8826_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8826_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_8729.current_mValue (HERE), joker_8826_5, joker_8826_4, joker_8826_3, joker_8826_2, joker_8826_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
    var_context_8629.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_8729.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    enumerator_8729.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_8948 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_9013 (constinArgument_inGUIComponentAST.getter_mGlobalSimpleAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_9013.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9013.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_8948.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9013.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 278)), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 278)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_9013.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_9013.current_mValue (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 280)), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_8629.mProperty_mBuildRunOption = enumerator_9013.current_mValue (HERE).getter_string (HERE) ;
            var_runOptionDefined_8948 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_9013.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_9447 (enumerator_9013.current_mValue (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 286)), kENUMERATION_UP) ;
          while (enumerator_9447.hasCurrentObject ()) {
            var_context_8629.mProperty_mNibAndClassList.addAssign_operation (enumerator_9447.current (HERE).getter_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 287)) ;
            enumerator_9447.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_9013.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 290)), GALGAS_string ("the '").add_operation (enumerator_9013.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)) ;
      }
    }
    enumerator_9013.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_9696 (constinArgument_inGUIComponentAST.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
  GALGAS_uint index_9655 ((uint32_t) 0) ;
  while (enumerator_9696.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_9859 ;
    GALGAS_indexingListAST joker_9867_2 ; // Joker input parameter
    GALGAS_lstring joker_9867_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_9696.current_mLexiqueFileName (HERE), var_terminalMap_9859, joker_9867_2, joker_9867_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 296)) ;
    GALGAS_stringset var_terminalSymbolSet_9934 = var_terminalMap_9859.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 302)) ;
    cEnumerator_guiLabelListAST enumerator_9999 (enumerator_9696.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_9999.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_10032 (enumerator_9999.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_10032.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_9934.getter_hasKey (enumerator_10032.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 306)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_10032.current_mTerminal (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 307)), GALGAS_string ("the '$").add_operation (enumerator_10032.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)).add_operation (enumerator_9696.current_mLexiqueFileName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          }
        }
        enumerator_10032.gotoNextObject () ;
      }
      enumerator_9999.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_10369 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 316)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_10408 (enumerator_9696.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10408.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_10408.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 318)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_10408.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 319)), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_10369.addAssign_operation (enumerator_10408.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 321)), enumerator_10408.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 321))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      }
      enumerator_10408.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_10690 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_10724 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_10758 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_10791 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_10821 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_10858 (enumerator_9696.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10858.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 331)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_8629.mProperty_mExtensionMap.setter_insertKey (enumerator_10858.current_mValue (HERE), enumerator_9696.current_mLexiqueFileName (HERE).getter_string (HERE), index_9655, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
          }
          var_hasAssociatedExtension_10690 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 334)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_10724.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_10858.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 336)), GALGAS_string ("the '").add_operation (enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)) ;
              }
            }
            var_hasTabViewTitle_10724 = GALGAS_bool (true) ;
            var_tabViewTitle_10791 = enumerator_10858.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 339)) ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 340)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_10758.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_10858.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 342)), GALGAS_string ("the '").add_operation (enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
                }
              }
              var_hasBlockComment_10758 = GALGAS_bool (true) ;
              var_blockComment_10821 = enumerator_10858.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 345)) ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_10858.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 347)), GALGAS_string ("the '").add_operation (enumerator_10858.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
          }
        }
      }
      enumerator_10858.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_10690.operator_not (SOURCE_FILE ("guiCompilation.galgas", 351)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_9696.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 352)), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 352)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_10724.operator_not (SOURCE_FILE ("guiCompilation.galgas", 355)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_9696.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 356)), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 356)) ;
      }
    }
    var_context_8629.mProperty_mWithLexiqueList.addAssign_operation (enumerator_9696.current_mLexiqueFileName (HERE).getter_string (HERE), index_9655, var_blockComment_10821, var_tabViewTitle_10791, var_textMacroList_10369, enumerator_9696.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 359)) ;
    enumerator_9696.gotoNextObject () ;
    index_9655.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE), var_context_8629, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 368)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateAllGuiComponentsGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_12826 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_12826.hasCurrentObject ()) {
    GALGAS_string var_fileName_12846 = GALGAS_string ("gui-").add_operation (enumerator_12826.current_lkey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_12846  COMMA_SOURCE_FILE ("guiCompilation.galgas", 387)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_12846  COMMA_SOURCE_FILE ("guiCompilation.galgas", 388)) ;
    GALGAS_string var_s_12956 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_12826.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_12826.current_mGuiComponentContext (HERE).getter_mBuildRunOption (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 389))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_12846, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_12956, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 394)) ;
    }
    enumerator_12826.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'guiGenerationTemplates'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_guiGenerationTemplates_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_guiGenerationTemplates (
  "",
  0,
  gWrapperAllFiles_guiGenerationTemplates_0,
  0,
  gWrapperAllDirectories_guiGenerationTemplates_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'guiGenerationTemplates gui_implementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (C_Compiler * inCompiler,
                                                                                const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT,
                                                                                const GALGAS_string & in_BUILD_5F_RUN_5F_OPTION
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"OC_Token.h\"\n"
    "#import \"F_CocoaWrapperForGalgas.h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n" ;
  GALGAS_uint index_138_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 5)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_138 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 5)), kENUMERATION_UP) ;
    while (enumerator_138.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_138.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_138_.increment () ;
      enumerator_138.gotoNextObject () ;
    }
  }
  GALGAS_uint index_264_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 8)).isValid ()) {
    cEnumerator_stringlist enumerator_264 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 8)), kENUMERATION_UP) ;
    while (enumerator_264.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_264.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_264_.increment () ;
      enumerator_264.gotoNextObject () ;
    }
  }
  result << "\n"
    "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
    "  #import \"user_default_colors.h\"\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma mark Nibs\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1104_ (0) ;
    if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 34)).isValid ()) {
      cEnumerator_stringlist enumerator_1104 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 34)), kENUMERATION_UP) ;
      while (enumerator_1104.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1104.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1104.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1104_.increment () ;
        enumerator_1104.gotoNextObject () ;
      }
    }
    result << "    nil\n"
      "  ] ;\n"
      "}\n" ;
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#pragma mark Command Line Options\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                       Command Line Options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1770_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)).isValid ()) {
    cEnumerator_stringlist enumerator_1770 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)), kENUMERATION_UP) ;
    while (enumerator_1770.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_1770.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 55)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_1770_.increment () ;
      enumerator_1770.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2252_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)).isValid ()) {
    cEnumerator_stringlist enumerator_2252 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)), kENUMERATION_UP) ;
    while (enumerator_2252.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2252.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 66)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2252_.increment () ;
      enumerator_2252.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"verbose_output\"\n"
      "    commandChar:'v'\n"
      "    commandString:@\"verbose\"\n"
      "    comment:@\"Verbose output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }else if (kBoolFalse == test_1) {
    result << "  OC_GGS_CommandLineOption * option = [[OC_GGS_CommandLineOption alloc]\n"
      "    initWithDomainName:@\"galgas_cli_options\"\n"
      "    identifier:@\"quiet_output\"\n"
      "    commandChar:'q'\n"
      "    commandString:@\"quiet\"\n"
      "    comment:@\"Quiet output\"\n"
      "    defaultValue:@\"\"\n"
      "  ] ;\n" ;
  }
  result << "  [ioBoolOptionArray addObject:option] ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_3106_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 91)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3106 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 91)), kENUMERATION_UP) ;
    while (enumerator_3106.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                     P O P    U P    L I S T    D A T A                                        \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      GALGAS_uint index_3686_ (0) ;
      if (enumerator_3106.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3686 (enumerator_3106.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3686.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3686.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_3686.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_3686.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 101)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4003_ (0) ;
          if (enumerator_3686.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4003 (enumerator_3686.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4003.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4003.current_mTerminal (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ", " ;
              result << enumerator_4003.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ",\n" ;
              index_4003_.increment () ;
              enumerator_4003.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_3686_.increment () ;
          enumerator_3686.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << " [" ;
      result << enumerator_3106.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4322_ (0) ;
      if (enumerator_3106.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4322 (enumerator_3106.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4322.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_4322.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << ",\n" ;
          index_4322_.increment () ;
          enumerator_4322.gotoNextObject () ;
        }
      }
      result << "  NULL\n"
        "} ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                            Lexique interface                                                  \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@interface OC_Tokenizer_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << " {\n"
        "\n"
        "}\n"
        "\n"
        "- (NSString *) blockComment ;\n"
        "\n"
        "- (const UInt16 * *) popupListData ;\n"
        "\n"
        "- (NSUInteger) textMacroCount ;\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex ;\n"
        "\n"
        "- (NSString *) tabItemTitle ;\n"
        "\n"
        "@end\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@implementation OC_Tokenizer_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 129)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3106.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 132)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3106.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << "_" ;
      result << enumerator_3106.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3106.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3106.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 144)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3106.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_6782_ (0) ;
      if (enumerator_3106.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_6782 (enumerator_3106.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_6782.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_6782.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 150)).stringValue () ;
          result << ",\n" ;
          index_6782_.increment () ;
          enumerator_6782.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroTitle [inIndex] ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroContent [" ;
      result << enumerator_3106.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7231_ (0) ;
      if (enumerator_3106.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7231 (enumerator_3106.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7231.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7231.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 160)).stringValue () ;
          result << ",\n" ;
          index_7231_.increment () ;
          enumerator_7231.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroContent [inIndex] ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "@end\n"
        "\n" ;
      index_3106_.increment () ;
      enumerator_3106.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_7798_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 175)).isValid ()) {
    cEnumerator_extensionMap enumerator_7798 (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 175)), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7798 = enumerator_7798.hasCurrentObject () ;
    if (nonEmpty_enumerator_7798) {
      result << "  if" ;
    }
    while (enumerator_7798.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_7798.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_7798.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 178)).stringValue () ;
      result << "_" ;
      result << enumerator_7798.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_7798.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_7798_.increment () ;
      enumerator_7798.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7798) {
      result << "  }\n" ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "NSArray * tokenizers (void) {\n"
    "  return [NSArray arrayWithObjects:\n" ;
  GALGAS_uint index_8243_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 189)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_8243 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 189)), kENUMERATION_UP) ;
    while (enumerator_8243.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_8243.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 190)).stringValue () ;
      result << "_" ;
      result << enumerator_8243.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_8243_.increment () ;
      enumerator_8243.gotoNextObject () ;
    }
  }
  result << "    nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "NSString * buildRunOption (void) {\n"
    "  return @\"" ;
  result << in_BUILD_5F_RUN_5F_OPTION.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_key_2228 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 46)), object->mProperty_mArrayTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 46))  COMMA_SOURCE_FILE ("type-array.galgas", 46)) ;
  {
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2228, temp_0, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2228, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mElementTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 48)), object->mProperty_mElementTypeName.getter_location (SOURCE_FILE ("type-array.galgas", 48))  COMMA_SOURCE_FILE ("type-array.galgas", 48)) COMMA_SOURCE_FILE ("type-array.galgas", 48)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                                extensionMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mDimension.getter_location (SOURCE_FILE ("type-array.galgas", 62)), GALGAS_string ("the dimension of an array should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_arrayTypeIndex_3432 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mArrayTypeName, var_arrayTypeIndex_3432 COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeIndex_3555 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mElementTypeName, var_elementTypeIndex_3555 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
  }
  GALGAS_constructorMap var_constructorMap_3594 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 69)) ;
  GALGAS_getterMap var_getterMap_3685 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_3685, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 70)) ;
  }
  GALGAS_setterMap var_setterMap_3710 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 71)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3753 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_3860 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("bool"), var_boolType_3860 COMMA_SOURCE_FILE ("type-array.galgas", 74)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_3963 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_3963 COMMA_SOURCE_FILE ("type-array.galgas", 76)) ;
  }
  GALGAS_functionSignature var_uintArgs_3999 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 78)) ;
  GALGAS_uint var_idx_4016 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 80)).isValid ()) {
    uint32_t variant_4027 = object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 80)).uintValue () ;
    bool loop_4027 = true ;
    while (loop_4027) {
      loop_4027 = GALGAS_bool (kIsStrictInf, var_idx_4016.objectCompare (object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 80)))).isValid () ;
      if (loop_4027) {
        loop_4027 = GALGAS_bool (kIsStrictInf, var_idx_4016.objectCompare (object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 80)))).boolValue () ;
      }
      if (loop_4027 && (0 == variant_4027)) {
        loop_4027 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 80)) ;
      }
      if (loop_4027) {
        variant_4027 -- ;
        var_uintArgs_3999.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 81)), var_uintType_3963, GALGAS_string ("inSize").add_operation (var_idx_4016.getter_string (SOURCE_FILE ("type-array.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 81))  COMMA_SOURCE_FILE ("type-array.galgas", 81)) ;
        var_idx_4016.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 82)) ;
      }
    }
  }
  {
  var_constructorMap_3594.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 86))  COMMA_SOURCE_FILE ("type-array.galgas", 86)), var_uintArgs_3999, GALGAS_bool (false), var_arrayTypeIndex_3432, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 85)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_3685, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 92)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3685, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3685, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 106)) ;
  }
  {
  var_getterMap_3685.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 116))  COMMA_SOURCE_FILE ("type-array.galgas", 116)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 117)), var_uintArgs_3999, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 119)), GALGAS_bool (true), var_boolType_3860, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 122)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 115)) ;
  }
  {
  var_getterMap_3685.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 126))  COMMA_SOURCE_FILE ("type-array.galgas", 126)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 127)), var_uintArgs_3999, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 129)), GALGAS_bool (true), var_elementTypeIndex_3555, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 132)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5393 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 136)) ;
  var_setterFormalArgumentList_5393.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 137)), var_elementTypeIndex_3555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 137)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
  var_idx_4016 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 139)).isValid ()) {
    uint32_t variant_5563 = object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 139)).uintValue () ;
    bool loop_5563 = true ;
    while (loop_5563) {
      loop_5563 = GALGAS_bool (kIsStrictInf, var_idx_4016.objectCompare (object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 139)))).isValid () ;
      if (loop_5563) {
        loop_5563 = GALGAS_bool (kIsStrictInf, var_idx_4016.objectCompare (object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 139)))).boolValue () ;
      }
      if (loop_5563 && (0 == variant_5563)) {
        loop_5563 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 139)) ;
      }
      if (loop_5563) {
        variant_5563 -- ;
        var_setterFormalArgumentList_5393.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 140)), var_uintType_3963, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 140)), GALGAS_string ("inIndex").add_operation (var_idx_4016.getter_string (SOURCE_FILE ("type-array.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 140))  COMMA_SOURCE_FILE ("type-array.galgas", 140)) ;
        var_idx_4016.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 141)) ;
      }
    }
  }
  {
  var_setterMap_3710.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 145)), var_setterFormalArgumentList_5393, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 148)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 143)) ;
  }
  {
  var_setterMap_3710.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 153)), var_setterFormalArgumentList_5393, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 156)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 151)) ;
  }
  {
  GALGAS_lstring joker_6155_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_6155_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_6155_2 ; // Joker input parameter
  GALGAS_string joker_6155_1 ; // Joker input parameter
  var_setterFormalArgumentList_5393.setter_popFirst (joker_6155_4, joker_6155_3, joker_6155_2, joker_6155_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 159)) ;
  }
  {
  var_setterMap_3710.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 162)), var_setterFormalArgumentList_5393, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 165)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 160)) ;
  }
  {
  var_setterMap_3710.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 169)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 170)), var_setterFormalArgumentList_5393, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 168)) ;
  }
  var_setterFormalArgumentList_5393 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 176)) ;
  var_setterFormalArgumentList_5393.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 177)), var_uintType_3963, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 177)) ;
  var_setterFormalArgumentList_5393.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 178)), var_uintType_3963, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 178)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 178)) ;
  {
  var_setterMap_3710.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 181)), var_setterFormalArgumentList_5393, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 179)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mArrayTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 195)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 197)), var_constructorMap_3594, var_getterMap_3685, var_setterMap_3710, var_instanceMethodMap_3753, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 202)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 203)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-array.galgas", 205)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 206)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 207)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 209)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 210)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 212)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mProperty_mArrayTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 214)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 188)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               extensionMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_8674 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8674, var_nameForUsefulness_8674, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 233)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_8834 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 234)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8674, var_elementTypeNameForUsefulness_8834 COMMA_SOURCE_FILE ("type-array.galgas", 235)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 238)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 240)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 241)), object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 242))  COMMA_SOURCE_FILE ("type-array.galgas", 239))  COMMA_SOURCE_FILE ("type-array.galgas", 237)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 261)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 262)), object->mProperty_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 263)), object->mProperty_mDimension COMMA_SOURCE_FILE ("type-array.galgas", 260))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 267)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 268)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 271)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 273)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 277)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 278)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 279)) COMMA_SOURCE_FILE ("type-array.galgas", 266))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 266)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 289)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 290)) ;
  GALGAS_stringlist var_suffixList_11191 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 292)) ;
  GALGAS_uint var_idx_11219 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mProperty_mDimension.isValid ()) {
    uint32_t variant_11230 = object->mProperty_mDimension.uintValue () ;
    bool loop_11230 = true ;
    while (loop_11230) {
      loop_11230 = GALGAS_bool (kIsStrictInf, var_idx_11219.objectCompare (object->mProperty_mDimension)).isValid () ;
      if (loop_11230) {
        loop_11230 = GALGAS_bool (kIsStrictInf, var_idx_11219.objectCompare (object->mProperty_mDimension)).boolValue () ;
      }
      if (loop_11230 && (0 == variant_11230)) {
        loop_11230 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 294)) ;
      }
      if (loop_11230) {
        variant_11230 -- ;
        var_suffixList_11191.addAssign_operation (var_idx_11219.getter_string (SOURCE_FILE ("type-array.galgas", 295))  COMMA_SOURCE_FILE ("type-array.galgas", 295)) ;
        var_idx_11219.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 296)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 300)), object->mProperty_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 301)), object->mProperty_mDimension, var_suffixList_11191 COMMA_SOURCE_FILE ("type-array.galgas", 298))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  GALGAS_lstring var_key_2171 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mBoolsetTypeName.getter_string (SOURCE_FILE ("type-boolset.galgas", 48)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 48)), object->mProperty_mBoolsetTypeName.getter_location (SOURCE_FILE ("type-boolset.galgas", 48))  COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2171, temp_0, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                                extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolsetDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_boolsetDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  result_result = GALGAS_string ("boolset @").add_operation (object->mProperty_mBoolsetTypeName.getter_string (SOURCE_FILE ("type-boolset.galgas", 57)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolsetDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                          extensionGetter_boolsetDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolsetDeclarationAST_keyRepresentation (defineExtensionGetter_boolsetDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForBoolset'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForBoolset (C_Compiler * /* inCompiler */
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 65)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 66)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 67)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 68)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 69)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 70)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForBoolset (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (NULL,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  GALGAS_stringset var_slotNameSet_3868 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 82)) ;
  cEnumerator_lstringlist enumerator_3903 (object->mProperty_mFlagList, kENUMERATION_UP) ;
  while (enumerator_3903.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).getter_hasKey (enumerator_3903.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_m_3987 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4057 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 86)), kENUMERATION_UP) ;
        while (enumerator_4057.hasCurrentObject ()) {
          var_m_3987.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4057.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 87)) ;
          enumerator_4057.gotoNextObject () ;
        }
        var_m_3987.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 89)) ;
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_3903.current_mValue (HERE).getter_location (SOURCE_FILE ("type-boolset.galgas", 90)), var_m_3987, fixItArray1  COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_slotNameSet_3868.getter_hasKey (enumerator_3903.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 91)) COMMA_SOURCE_FILE ("type-boolset.galgas", 91)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_3903.current_mValue (HERE).getter_location (SOURCE_FILE ("type-boolset.galgas", 92)), GALGAS_string ("duplicated slot name"), fixItArray3  COMMA_SOURCE_FILE ("type-boolset.galgas", 92)) ;
        }
      }
    }
    var_slotNameSet_3868.addAssign_operation (enumerator_3903.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 94))  COMMA_SOURCE_FILE ("type-boolset.galgas", 94)) ;
    enumerator_3903.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_boolsetTypeIndex_4421 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mBoolsetTypeName, var_boolsetTypeIndex_4421 COMMA_SOURCE_FILE ("type-boolset.galgas", 97)) ;
  }
  GALGAS_getterMap var_getterMap_4539 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4539, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  }
  GALGAS_constructorMap var_constructorMap_4573 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 100)) ;
  {
  var_constructorMap_4573.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_bool (false), var_boolsetTypeIndex_4421, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  }
  {
  var_constructorMap_4573.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_bool (false), var_boolsetTypeIndex_4421, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4539, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4539, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 110)) ;
  }
  cEnumerator_lstringlist enumerator_5118 (object->mProperty_mFlagList, kENUMERATION_UP) ;
  while (enumerator_5118.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_constructorMap_4573.getter_hasKey (enumerator_5118.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 118)) COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).operator_not (SOURCE_FILE ("type-boolset.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        var_constructorMap_4573.setter_insertKey (enumerator_5118.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 119)), GALGAS_bool (false), var_boolsetTypeIndex_4421, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4539, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5118.current_mValue (HERE).getter_string (HERE), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
        }
      }
    }
    enumerator_5118.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_5510 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 130)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5576 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 132)) ;
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mBoolsetTypeName, var_getterMap_4539, var_setterMap_5510, var_instanceMethodMap_5576, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  GALGAS_operators var_operators_5888 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 145)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 145)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 145)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 145)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)) ;
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mBoolsetTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 155)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 157)), var_constructorMap_4573, var_getterMap_4539, var_setterMap_5510, var_instanceMethodMap_5576, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 162)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 163)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 164)), var_operators_5888, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 166)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 167)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 168)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 169)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 170)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-boolset.galgas", 172)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (object->mProperty_mBoolsetTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 174)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 148)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                               extensionMethod_boolsetDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterInSemanticContext (defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetDeclarationAST * object = (const cPtr_boolsetDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetDeclarationAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 193)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_s_7490 = object->mProperty_mFlagList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 194)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_s_7490.getter_location (SOURCE_FILE ("type-boolset.galgas", 195)), GALGAS_string ("max flags count is 64 (here: ").add_operation (object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 195)).getter_string (SOURCE_FILE ("type-boolset.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 195)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 195)), fixItArray1  COMMA_SOURCE_FILE ("type-boolset.galgas", 195)) ;
    }
  }
  GALGAS_lstring var_boolsetNameForUsefulness_7659 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mBoolsetTypeName, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_7659, var_boolsetNameForUsefulness_7659, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 199)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (object->mProperty_mBoolsetTypeName.getter_string (SOURCE_FILE ("type-boolset.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 201)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mBoolsetTypeName, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 203)), object->mProperty_mFlagList  COMMA_SOURCE_FILE ("type-boolset.galgas", 202))  COMMA_SOURCE_FILE ("type-boolset.galgas", 200)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                         extensionMethod_boolsetDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetDeclarationAST_semanticAnalysis (defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'structGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_structGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_structGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_structGenerationTemplate_0,
  0,
  gWrapperAllDirectories_structGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Properties\n"
    "  private : uint64_t mFlags ;\n"
    "  private : bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG bool isValid (void) const ;\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Private constructor\n"
    "  private : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_root (),\n"
    "mFlags (0),\n"
    "mIsValid (false) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const uint64_t inFlags) :\n"
    "AC_GALGAS_root (),\n"
    "mFlags (inFlags),\n"
    "mIsValid (true) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_none (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (0) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_all (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 26)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_1083_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1083 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1083.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1083.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n"
        "  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1083_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_1083_idx.increment () ;
      enumerator_1083.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "   typeComparisonResult result = kOperandNotValid ;\n"
    "   if (mIsValid && inOperand.mIsValid) {\n"
    "     result = kOperandEqual ;\n"
    "     if (mFlags < inOperand.mFlags) {\n"
    "       result = kFirstOperandLowerThanSecond ;\n"
    "     }else if (mFlags > inOperand.mFlags) {\n"
    "       result = kFirstOperandGreaterThanSecond ;\n"
    "     }\n"
    "   }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mIsValid ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  mIsValid = false ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_or (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags | inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_and (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_xor (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand\n"
    "                                      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags ^ inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::substract_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                 " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid && inOperand.mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mFlags & ~ inOperand.mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator_tilde (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (((uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 114)).stringValue () ;
  result << ") ^ mFlags) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n"
    "                              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n"
    "  ioString << \"<boolset @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ":\" ;\n"
    "  if (! isValid ()) {\n"
    "    ioString << \" not built\" ;\n"
    "  }else{\n" ;
  GALGAS_uint index_5160_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5160 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5160.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_5160_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue () ;
      result << ") != 0) {\n"
        "      ioString << \" " ;
      result << enumerator_5160.current_mValue (HERE).getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 130)).stringValue () ;
      result << "\" ;\n"
        "    }\n" ;
      index_5160_idx.increment () ;
      enumerator_5160.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_none (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_bool (mFlags == 0) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_all (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (mIsValid) {\n"
    "    result = GALGAS_bool (mFlags == (uint64_t) " ;
  result << in_FULL_5F_SET.getter_hexString (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 152)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_6010_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6010 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6010.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_6010.current_mValue (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  GALGAS_bool result ;\n"
        "  if (mIsValid) {\n"
        "    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_6010_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue () ;
      result << ") != 0) ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_6010_idx.increment () ;
      enumerator_6010.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 240)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)), object->mProperty_mFlagList COMMA_SOURCE_FILE ("type-boolset.galgas", 239))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 245)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 247)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 248)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 249)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 250)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 251)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 252)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 256)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 257)) COMMA_SOURCE_FILE ("type-boolset.galgas", 244))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 244)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                              extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 268)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 270)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)), object->mProperty_mFlagList, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 273)).left_shift_operation (object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 273)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 273)) COMMA_SOURCE_FILE ("type-boolset.galgas", 269))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                                     extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_key_3328 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 99)), object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 99))  COMMA_SOURCE_FILE ("type-class.galgas", 99)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3328, temp_0, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3328, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 102)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 102)) COMMA_SOURCE_FILE ("type-class.galgas", 102)) ;
      }
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_3636 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_3636.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3328, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3636.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 105)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 105)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 105)) COMMA_SOURCE_FILE ("type-class.galgas", 105)) ;
    }
    enumerator_3636.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_getterMap var_getterMap_4506 ;
  GALGAS_setterMap var_setterMap_4529 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4568 ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList_4617 ;
  GALGAS_propertyMap var_attributeMap_4645 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 123)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex_4714 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4751 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 127)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_4714 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 128)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4506, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 129)) ;
      }
      var_setterMap_4529 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 130)) ;
      var_instanceMethodMap_4568 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 131)) ;
      var_inheritedTypedAttributeList_4617 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 132)) ;
      var_attributeMap_4645 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 133)) ;
      var_generateHeaderInSeparateFile_4751 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_5093 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
      while (enumerator_5093.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_5093.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 136)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_generateHeaderInSeparateFile_4751 = GALGAS_bool (true) ;
          }
        }
        enumerator_5093.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mSuperClassName, var_superClassIndex_4714 COMMA_SOURCE_FILE ("type-class.galgas", 141)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_5356 ;
    GALGAS_getterMap var_inheritedGetterMap_5390 ;
    GALGAS_setterMap var_inheritedSetterMap_5424 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_5466 ;
    GALGAS_bool joker_5539_3 ; // Joker input parameter
    GALGAS_bool joker_5539_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5539_1 ; // Joker input parameter
    GALGAS_bool joker_5569 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5633_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5633_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5721_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_5721_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5721_7 ; // Joker input parameter
    GALGAS_operators joker_5721_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5721_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5721_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5721_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5721_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5721_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5767_4 ; // Joker input parameter
    GALGAS_string joker_5767_3 ; // Joker input parameter
    GALGAS_string joker_5767_2 ; // Joker input parameter
    GALGAS_headerKind joker_5767_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSuperClassName, joker_5539_3, joker_5539_2, joker_5539_1, var_typeKindEnum_5356, joker_5569, var_inheritedTypedAttributeList_4617, var_attributeMap_4645, joker_5633_2, joker_5633_1, var_inheritedGetterMap_5390, var_inheritedSetterMap_5424, var_inheritedMethodMap_5466, joker_5721_9, joker_5721_8, joker_5721_7, joker_5721_6, joker_5721_5, joker_5721_4, joker_5721_3, joker_5721_2, joker_5721_1, var_generateHeaderInSeparateFile_4751, joker_5767_4, joker_5767_3, joker_5767_2, joker_5767_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 146)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_typeKindEnum_5356.getter_isClassType (SOURCE_FILE ("type-class.galgas", 162)).operator_not (SOURCE_FILE ("type-class.galgas", 162)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mSuperClassName.getter_location (SOURCE_FILE ("type-class.galgas", 163)), GALGAS_string ("the @").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 163)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 163)), fixItArray3  COMMA_SOURCE_FILE ("type-class.galgas", 163)) ;
      }
    }
    var_setterMap_4529 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 166)) ;
    cEnumerator_setterMap enumerator_6006 (var_inheritedSetterMap_5424, kENUMERATION_UP) ;
    while (enumerator_6006.hasCurrentObject ()) {
      {
      var_setterMap_4529.setter_insertKey (enumerator_6006.current_lkey (HERE), enumerator_6006.current_mKind (HERE), enumerator_6006.current_mParameterList (HERE), enumerator_6006.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 168)) ;
      }
      enumerator_6006.gotoNextObject () ;
    }
    var_getterMap_4506 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 178)) ;
    cEnumerator_getterMap enumerator_6297 (var_inheritedGetterMap_5390, kENUMERATION_UP) ;
    while (enumerator_6297.hasCurrentObject ()) {
      {
      var_getterMap_4506.setter_insertKey (enumerator_6297.current_lkey (HERE), enumerator_6297.current_mKind (HERE), enumerator_6297.current_mArgumentTypeList (HERE), enumerator_6297.current_mDeclarationLocation (HERE), enumerator_6297.current_mHasCompilerArgument (HERE), enumerator_6297.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 187)), enumerator_6297.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 180)) ;
      }
      enumerator_6297.gotoNextObject () ;
    }
    var_instanceMethodMap_4568 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 192)) ;
    cEnumerator_instanceMethodMap enumerator_6627 (var_inheritedMethodMap_5466, kENUMERATION_UP) ;
    while (enumerator_6627.hasCurrentObject ()) {
      {
      var_instanceMethodMap_4568.setter_insertKey (enumerator_6627.current_lkey (HERE), enumerator_6627.current_mKind (HERE), enumerator_6627.current_mParameterList (HERE), enumerator_6627.current_mDeclarationLocation (HERE), enumerator_6627.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 200)), enumerator_6627.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 194)) ;
      }
      enumerator_6627.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_6953 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 206)) ;
  cEnumerator_typedPropertyList enumerator_6998 (var_inheritedTypedAttributeList_4617, kENUMERATION_UP) ;
  while (enumerator_6998.hasCurrentObject ()) {
    GALGAS_lstring temp_4 ;
    const enumGalgasBool test_5 = enumerator_6998.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = enumerator_6998.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 209)) ;
    }
    var_constructorAttributeTypeList_6953.addAssign_operation (temp_4, enumerator_6998.current_mPropertyTypeProxy (HERE), enumerator_6998.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 208)) ;
    enumerator_6998.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7187 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7187.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7299 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7187.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7299 COMMA_SOURCE_FILE ("type-class.galgas", 214)) ;
    }
    GALGAS_bool var_hasSelector_7320 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7366 (enumerator_7187.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7366.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_7366.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_hasSelector_7320.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              fixItArray8.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_7366.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 219)), GALGAS_string ("duplicated attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 219)) ;
            }
          }
          var_hasSelector_7320 = GALGAS_bool (true) ;
        }
      }
      enumerator_7366.gotoNextObject () ;
    }
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_hasSelector_7320.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_7187.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 225)) ;
    }
    var_constructorAttributeTypeList_6953.addAssign_operation (temp_9, var_attributeTypeIndex_7299, enumerator_7187.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 224)) ;
    {
    var_attributeMap_4645.setter_insertKey (enumerator_7187.current_mPropertyName (HERE), enumerator_7187.current_mIsPublic (HERE), var_attributeTypeIndex_7299, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 228)) ;
    }
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_getterMap_4506.getter_hasKey (enumerator_7187.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 233)) COMMA_SOURCE_FILE ("type-class.galgas", 233)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_7187.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 234)), GALGAS_string ("'").add_operation (enumerator_7187.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 234)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 234)), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 234)) ;
      }
    }
    enumerator_7187.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex_8154 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mClassTypeName, var_classIndex_8154 COMMA_SOURCE_FILE ("type-class.galgas", 238)) ;
  }
  GALGAS_constructorMap var_constructorMap_8209 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 244)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 245)).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      var_constructorMap_8209.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 247))  COMMA_SOURCE_FILE ("type-class.galgas", 247)), var_constructorAttributeTypeList_6953, GALGAS_bool (false), var_classIndex_8154, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 246)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList_8474 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 254)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_8522 = var_inheritedTypedAttributeList_4617 ;
  cEnumerator_propertyInCollectionListAST enumerator_8578 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8578.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_8690 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8578.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8690 COMMA_SOURCE_FILE ("type-class.galgas", 257)) ;
    }
    GALGAS_bool var_hasSetter_8709 = enumerator_8578.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_8739 = enumerator_8578.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_8771 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8808 (enumerator_8578.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8808.hasCurrentObject ()) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsEqual, enumerator_8808.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 262)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_8808.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 263)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 263)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_16 = kBoolTrue ;
        if (kBoolTrue == test_16) {
          test_16 = GALGAS_bool (kIsEqual, enumerator_8808.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 265)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_16) {
            TC_Array <C_FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticWarning (enumerator_8808.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 266)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 266)) ;
          }
        }
        if (kBoolFalse == test_16) {
          enumGalgasBool test_18 = kBoolTrue ;
          if (kBoolTrue == test_18) {
            test_18 = GALGAS_bool (kIsEqual, enumerator_8808.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 268)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_18) {
              var_hasSelector_8771 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_8808.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList_8474.addAssign_operation (var_attributeTypeIndex_8690, enumerator_8578.current_mPropertyName (HERE), var_hasSetter_8709, var_hasGetter_8739, var_hasSelector_8771  COMMA_SOURCE_FILE ("type-class.galgas", 272)) ;
    var_allTypedAttributeList_8522.addAssign_operation (var_attributeTypeIndex_8690, enumerator_8578.current_mPropertyName (HERE), var_hasSetter_8709, var_hasGetter_8739, var_hasSelector_8771  COMMA_SOURCE_FILE ("type-class.galgas", 273)) ;
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = var_hasGetter_8739.boolEnum () ;
      if (kBoolTrue == test_19) {
        {
        var_getterMap_4506.setter_insertKey (enumerator_8578.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 277)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 278)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 279)), GALGAS_bool (false), var_attributeTypeIndex_8690, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 282)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 275)) ;
        }
      }
    }
    enumerator_8578.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9843 (var_currentClassTypedAttributeList_8474, kENUMERATION_UP) ;
  while (enumerator_9843.hasCurrentObject ()) {
    enumGalgasBool test_20 = kBoolTrue ;
    if (kBoolTrue == test_20) {
      test_20 = enumerator_9843.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_20) {
        {
        GALGAS_formalParameterSignature temp_21 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 293)) ;
        temp_21.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 293)), enumerator_9843.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 293)), enumerator_9843.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
        var_setterMap_4529.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9843.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 291)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 291)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 291))  COMMA_SOURCE_FILE ("type-class.galgas", 291)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 292)), temp_21, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 295)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 290)) ;
        }
      }
    }
    enumerator_9843.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mClassTypeName, var_getterMap_4506, var_setterMap_4529, var_instanceMethodMap_4568, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 301)) ;
  }
  GALGAS_string var_defaultConstructorName_10629 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_superClassIndex_4714.getter_isNull (SOURCE_FILE ("type-class.galgas", 313)).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_defaultConstructorName_10629 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_22) {
    var_defaultConstructorName_10629 = var_superClassIndex_4714.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 316)) ;
  }
  cEnumerator_typedPropertyList enumerator_10830 (var_currentClassTypedAttributeList_8474, kENUMERATION_UP) ;
  bool bool_23 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10629.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10830.hasCurrentObject () && bool_23) {
    while (enumerator_10830.hasCurrentObject () && bool_23) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_10830.current_mPropertyTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 319)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10830.current_mPropertyTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 319)).operator_not (SOURCE_FILE ("type-class.galgas", 319)) COMMA_SOURCE_FILE ("type-class.galgas", 319)).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_defaultConstructorName_10629 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_10830.gotoNextObject () ;
      if (enumerator_10830.hasCurrentObject ()) {
        bool_23 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10629.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mClassTypeName, object->mProperty_mIsPredefined, object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 327)), var_superClassIndex_4714, GALGAS_typeKindEnum::constructor_classType (object->mProperty_mIsShared  COMMA_SOURCE_FILE ("type-class.galgas", 329)), GALGAS_bool (false), var_allTypedAttributeList_8522, var_attributeMap_4645, var_currentClassTypedAttributeList_8474, var_constructorMap_8209, var_getterMap_4506, var_setterMap_4529, var_instanceMethodMap_4568, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 338)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 339)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 340)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-class.galgas", 341)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 342)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 343)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 344)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 345)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 346)), var_generateHeaderInSeparateFile_4751, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 348)), var_defaultConstructorName_10629, GALGAS_string ("class-").add_operation (object->mProperty_mClassTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 350)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 324)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_lstring var_classTypeNameForUsefulness_12577 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mClassTypeName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 368)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_12577, var_classTypeNameForUsefulness_12577, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 369)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 370)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_superClassNameForUsefulness_12797 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mSuperClassName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 371)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12577, var_superClassNameForUsefulness_12797 COMMA_SOURCE_FILE ("type-class.galgas", 372)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_13005 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 375)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 378)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 379)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy_13129 = temp_1 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_superClassProxy_13129.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 384)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_bool var_superClassIsShared_13562 ;
      var_superClassProxy_13129.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 385)).method_classType (var_superClassIsShared_13562, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 385)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_superClassIsShared_13562.operator_and (object->mProperty_mIsShared.operator_not (SOURCE_FILE ("type-class.galgas", 386)) COMMA_SOURCE_FILE ("type-class.galgas", 386)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 387)), GALGAS_string ("this class should be declared with 'shared' qualifier, as its super class"), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 387)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_superClassIsShared_13562.operator_not (SOURCE_FILE ("type-class.galgas", 388)).operator_and (object->mProperty_mIsShared COMMA_SOURCE_FILE ("type-class.galgas", 388)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 389)), GALGAS_string ("this class should be declared with no 'shared' qualifier, as its super class"), fixItArray7  COMMA_SOURCE_FILE ("type-class.galgas", 389)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_14093 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, var_superClassProxy_13129.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 396)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_allAttributeList_14093 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 397)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_14195 = GALGAS_bool (false) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 399)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          cEnumerator_lstringlist enumerator_14280 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
          while (enumerator_14280.hasCurrentObject ()) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, enumerator_14280.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 401)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = var_generatedInSeparateFileFeature_14195.boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (enumerator_14280.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 403)), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 403)) ;
                  }
                }
                var_generatedInSeparateFileFeature_14195 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_14280.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 407)), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-class.galgas", 407)) ;
            }
            enumerator_14280.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_8) {
    var_allAttributeList_14093 = var_superClassProxy_13129.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 412)) ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_14) {
        cEnumerator_lstringlist enumerator_14806 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
        while (enumerator_14806.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (enumerator_14806.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 415)), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
          enumerator_14806.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_14980 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 420)) ;
  GALGAS_propertyIndexMap var_attributeMap_15018 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 421)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15049 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_15049.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15090 = function_typeNameForUsefulEntitiesGraph (enumerator_15049.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 423)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12577, var_propertyTypeNameForUsefulness_15090 COMMA_SOURCE_FILE ("type-class.galgas", 424)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_15251 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15049.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 425)) ;
    GALGAS_bool var_hasSetter_15352 = enumerator_15049.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_15382 = enumerator_15049.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_15414 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_15451 (enumerator_15049.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15451.hasCurrentObject ()) {
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, enumerator_15451.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 430)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_16) {
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticWarning (enumerator_15451.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 431)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 431)) ;
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, enumerator_15451.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 436)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            TC_Array <C_FixItDescription> fixItArray19 ;
            inCompiler->emitSemanticWarning (enumerator_15451.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 437)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 437)) ;
          }
        }
        if (kBoolFalse == test_18) {
          enumGalgasBool test_20 = kBoolTrue ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (kIsEqual, enumerator_15451.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 442)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_20) {
              enumGalgasBool test_21 = kBoolTrue ;
              if (kBoolTrue == test_21) {
                test_21 = var_hasSelector_15414.boolEnum () ;
                if (kBoolTrue == test_21) {
                  TC_Array <C_FixItDescription> fixItArray22 ;
                  inCompiler->emitSemanticError (enumerator_15451.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 444)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray22  COMMA_SOURCE_FILE ("type-class.galgas", 444)) ;
                }
              }
              var_hasSelector_15414 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_20) {
            TC_Array <C_FixItDescription> fixItArray23 ;
            GALGAS_stringlist temp_24 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 450)) ;
            temp_24.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-class.galgas", 450)) ;
            appendFixItActions (fixItArray23, kFixItReplace, temp_24) ;
            inCompiler->emitSemanticError (enumerator_15451.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 448)), GALGAS_string ("only '%selector' is allowed here"), fixItArray23  COMMA_SOURCE_FILE ("type-class.galgas", 448)) ;
          }
        }
      }
      enumerator_15451.gotoNextObject () ;
    }
    var_typedAttributeList_14980.addAssign_operation (var_t_15251, enumerator_15049.current_mPropertyName (HERE), var_hasSetter_15352, var_hasGetter_15382, var_hasSelector_15414  COMMA_SOURCE_FILE ("type-class.galgas", 454)) ;
    var_allAttributeList_14093.addAssign_operation (var_t_15251, enumerator_15049.current_mPropertyName (HERE), var_hasSetter_15352, var_hasGetter_15382, var_hasSelector_15414  COMMA_SOURCE_FILE ("type-class.galgas", 460)) ;
    {
    var_attributeMap_15018.setter_insertKey (enumerator_15049.current_mPropertyName (HERE), var_t_15251, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 466)) ;
    }
    enumerator_15049.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 470)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 470)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_13005, object->mProperty_mIsAbstract, object->mProperty_mIsShared, var_superClassProxy_13129, var_allAttributeList_14093, var_typedAttributeList_14980, var_selfType_13005.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 478))  COMMA_SOURCE_FILE ("type-class.galgas", 471))  COMMA_SOURCE_FILE ("type-class.galgas", 469)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 501)).operator_not (SOURCE_FILE ("type-class.galgas", 501)).boolEnum () ;
    if (kBoolTrue == test_0) {
      extensionMethod_addHeaderFileName (object->mProperty_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)) ;
    }
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 508)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 506)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)), temp_1, object->mProperty_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 505))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 513)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 514)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 518)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 520)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 522)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 523)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 524)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 525)) COMMA_SOURCE_FILE ("type-class.galgas", 512))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 512)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_19075 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_19075.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_19075.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)) ;
    enumerator_19075.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mGenerateHeaderInSeparateFile.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 544)).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_2) {
        temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)) ;
      }
      GALGAS_string var_part_31__19182 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 542)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 543)), temp_1, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 541))) ;
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 552)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_4) {
        temp_3 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 552)) ;
      }
      GALGAS_string var_part_32__19494 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 550)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)), temp_3, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 549))) ;
      GALGAS_string var_headerFileName_19815 = GALGAS_string ("separateHeaderFor_").add_operation (object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 557)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 559)), var_headerFileName_19815, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_part_31__19182, GALGAS_string ("\n"
        "\n"), var_part_32__19494, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 558)) ;
      }
      outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_19815, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 569)).add_operation (GALGAS_string ("\"\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 569)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 574)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 572)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)), temp_5, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 571))) ;
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 582)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 582)) ;
    }
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 580)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 581)), temp_7, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 579))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 579)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@classTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 597)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 601)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 600)), temp_0, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mAllTypedAttributeList.getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mProperty_mAllTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 604)).substract_operation (object->mProperty_mTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 604))  COMMA_SOURCE_FILE ("type-class.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 604)), object->mProperty_mIsAbstract, object->mProperty_mIsShared, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 607)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 598))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_key_2958 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 74)), object->mProperty_mEnumTypeName.getter_location (SOURCE_FILE ("type-enum.galgas", 74))  COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2958, temp_0, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  }
  GALGAS_bool var_circularReference_3192 = GALGAS_bool (true) ;
  cEnumerator_enumConstantList enumerator_3225 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_1 = var_circularReference_3192.isValidAndTrue () ;
  if (enumerator_3225.hasCurrentObject () && bool_1) {
    while (enumerator_3225.hasCurrentObject () && bool_1) {
      GALGAS_bool var_namesCurrentType_3277 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_3330 (enumerator_3225.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_2 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
      if (enumerator_3330.hasCurrentObject () && bool_2) {
        while (enumerator_3330.hasCurrentObject () && bool_2) {
          GALGAS_lstring var_propertyKey_3382 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3330.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 81)), enumerator_3330.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 81))  COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, var_propertyKey_3382.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_3) {
              var_namesCurrentType_3277 = GALGAS_bool (true) ;
            }
          }
          enumerator_3330.gotoNextObject () ;
          if (enumerator_3330.hasCurrentObject ()) {
            bool_2 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 86)).boolEnum () ;
        if (kBoolTrue == test_4) {
          var_circularReference_3192 = GALGAS_bool (false) ;
        }
      }
      enumerator_3225.gotoNextObject () ;
      if (enumerator_3225.hasCurrentObject ()) {
        bool_1 = var_circularReference_3192.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_circularReference_3192.boolEnum () ;
    if (kBoolTrue == test_5) {
      cEnumerator_enumConstantList enumerator_3732 (object->mProperty_mConstantList, kENUMERATION_UP) ;
      while (enumerator_3732.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_3782 (enumerator_3732.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_3782.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_3809 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3782.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_3782.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 94))  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsNotEqual, var_propertyKey_3809.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2958, var_propertyKey_3809 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
              }
            }
          }
          enumerator_3782.gotoNextObject () ;
        }
        enumerator_3732.gotoNextObject () ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap_4803 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_setterMap var_setterMap_4831 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4875 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_classMethodMap var_classMethodMap_4913 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 116)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_4957 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 117)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy_5088 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mEnumTypeName, var_enumTypeProxy_5088 COMMA_SOURCE_FILE ("type-enum.galgas", 119)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5139 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 121)) ;
  GALGAS_bool var_hasAssociatedValues_5172 = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_5206 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_5206.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_5257 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 124)) ;
    GALGAS_functionSignature var_argumentTypeList_5302 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 125)) ;
    cEnumerator__32_lstringlist enumerator_5373 (enumerator_5206.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5373.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_5479 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5373.current_mValue_30_ (HERE), var_associatedTypeProxy_5479 COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      }
      var_argumentTypeList_5302.addAssign_operation (enumerator_5373.current_mValue_31_ (HERE), var_associatedTypeProxy_5479, enumerator_5373.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
      var_associatedTypeList_5257.addAssign_operation (var_associatedTypeProxy_5479  COMMA_SOURCE_FILE ("type-enum.galgas", 129)) ;
      var_hasAssociatedValues_5172 = GALGAS_bool (true) ;
      enumerator_5373.gotoNextObject () ;
    }
    {
    var_constantMap_5139.setter_insertKey (enumerator_5206.current_mConstantName (HERE), var_constantMap_5139.getter_count (SOURCE_FILE ("type-enum.galgas", 132)), var_associatedTypeList_5257, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
    }
    {
    var_constructorMap_4803.setter_insertOrReplace (enumerator_5206.current_mConstantName (HERE), var_argumentTypeList_5302, GALGAS_bool (false), var_enumTypeProxy_5088 COMMA_SOURCE_FILE ("type-enum.galgas", 133)) ;
    }
    enumerator_5206.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_5902 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_5902.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_6066 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 144)) ;
    cEnumerator__32_lstringlist enumerator_6139 (enumerator_5902.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6139.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_6247 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6139.current_mValue_30_ (HERE), var_associatedTypeProxy_6247 COMMA_SOURCE_FILE ("type-enum.galgas", 146)) ;
      }
      var_argumentTypeList_6066.addAssign_operation (GALGAS_bool (false), enumerator_6139.current_mValue_31_ (HERE), var_associatedTypeProxy_6247, enumerator_6139.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 147)) ;
      enumerator_6139.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_4957.setter_insertKey (enumerator_5902.current_mConstantName (HERE), var_argumentTypeList_6066, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 151)) ;
    }
    enumerator_5902.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_6702 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_6702.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_6702.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 164)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList_6811 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 165)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_6865 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 166)) ;
        cEnumerator__32_lstringlist enumerator_6938 (enumerator_6702.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6938.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_7046 ;
          {
          GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6938.current_mValue_30_ (HERE), var_associatedTypeProxy_7046 COMMA_SOURCE_FILE ("type-enum.galgas", 168)) ;
          }
          var_argumentTypeList_6865.addAssign_operation (enumerator_6938.current_mValue_31_ (HERE), var_associatedTypeProxy_7046, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 169)), enumerator_6938.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 169)) ;
          var_associatedTypeList_6811.addAssign_operation (var_associatedTypeProxy_7046  COMMA_SOURCE_FILE ("type-enum.galgas", 170)) ;
          var_hasAssociatedValues_5172 = GALGAS_bool (true) ;
          enumerator_6938.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_4875.setter_insertKey (enumerator_6702.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 175)), var_argumentTypeList_6865, enumerator_6702.current_mConstantName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 179)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 173)) ;
        }
      }
    }
    enumerator_6702.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_7550 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7550, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 185)) ;
  }
  cEnumerator_enumConstantList enumerator_7577 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_7577.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_7550, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7577.current_mConstantName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 190)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 187)) ;
    }
    enumerator_7577.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mEnumTypeName, var_getterMap_7550, var_setterMap_4831, var_instanceMethodMap_4875, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 196)) ;
  }
  GALGAS_string var_defaultConstructorName_8134 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mDefaultConstantName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList_8283 ;
      GALGAS_uint joker_8258 ; // Joker input parameter
      var_constantMap_5139.method_searchKey (object->mProperty_mDefaultConstantName, joker_8258, var_associatedTypeList_8283, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 209)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_associatedTypeList_8283.getter_length (SOURCE_FILE ("type-enum.galgas", 210)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_defaultConstructorName_8134 = object->mProperty_mDefaultConstantName.getter_string (HERE) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDefaultConstantName.getter_location (SOURCE_FILE ("type-enum.galgas", 213)), GALGAS_string ("the default constant should have no associated values"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 213)) ;
      }
    }
  }
  {
  GALGAS_headerKind temp_4 ;
  const enumGalgasBool test_5 = var_hasAssociatedValues_5172.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 244)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 244)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mEnumTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 221)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 222)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 224)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 225)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 226)), var_constructorMap_4803, var_getterMap_7550, var_setterMap_4831, var_instanceMethodMap_4875, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 231)), var_optionalMethodMap_4957, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 233)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 234)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 234)) COMMA_SOURCE_FILE ("type-enum.galgas", 234)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 235)), var_constantMap_5139, object->mProperty_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 238)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 239)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 241)), var_defaultConstructorName_8134, GALGAS_string ("enum-").add_operation (object->mProperty_mEnumTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 243)), temp_4, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 217)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_10093 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mEnumTypeName, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 261)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10093, var_nameForUsefulness_10093, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 262)) ;
  }
  GALGAS_stringlist var_constantList_10255 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 264)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_10334 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 265)) ;
  GALGAS_constantIndexMap var_constantMap_10357 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 266)) ;
  cEnumerator_enumConstantList enumerator_10413 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_10413.hasCurrentObject ()) {
    var_constantList_10255.addAssign_operation (enumerator_10413.current_mConstantName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 268)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_10506 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 269)) ;
    GALGAS_stringset var_associatedValueNameSet_10549 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 270)) ;
    cEnumerator__32_lstringlist enumerator_10599 (enumerator_10413.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_10599.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_10642 = function_typeNameForUsefulEntitiesGraph (enumerator_10599.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 272)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_10093, var_propertyTypeNameForUsefulness_10642 COMMA_SOURCE_FILE ("type-enum.galgas", 273)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_10806 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_10599.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 274)) ;
      var_associatedTypeList_10506.addAssign_operation (var_associatedTypeProxy_10806  COMMA_SOURCE_FILE ("type-enum.galgas", 275)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_associatedValueNameSet_10549.getter_hasKey (enumerator_10599.current_mValue_31_ (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-enum.galgas", 276)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_10599.current_mValue_31_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 277)), GALGAS_string ("duplicated name"), fixItArray1  COMMA_SOURCE_FILE ("type-enum.galgas", 277)) ;
        }
      }
      var_associatedValueNameSet_10549.addAssign_operation (enumerator_10599.current_mValue_31_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 279)) ;
      enumerator_10599.gotoNextObject () ;
    }
    {
    var_constantMap_10357.setter_insertKey (enumerator_10413.current_mConstantName (HERE), var_constantMap_10357.getter_count (SOURCE_FILE ("type-enum.galgas", 281)), var_associatedTypeList_10506, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 281)) ;
    }
    var_enumConstantListForGeneration_10334.addAssign_operation (enumerator_10413.current_mConstantName (HERE).getter_string (HERE), var_associatedTypeList_10506  COMMA_SOURCE_FILE ("type-enum.galgas", 282)) ;
    enumerator_10413.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_11289 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 285)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mProperty_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 287)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 287)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_11289, var_enumConstantListForGeneration_10334  COMMA_SOURCE_FILE ("type-enum.galgas", 288))  COMMA_SOURCE_FILE ("type-enum.galgas", 286)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'enumGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_enumGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_enumGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_enumGenerationTemplate_0,
  0,
  gWrapperAllDirectories_enumGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Enumeration\n"
    "  public : typedef enum {\n"
    "    kNotBuilt" ;
  GALGAS_uint index_616_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_616 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_616.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_616.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_616_.increment () ;
      enumerator_616.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } enumeration ;\n"
    "  \n"
    "//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private : AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n"
      "  public : VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n"
      "    return mAssociatedValues.unsafePointer () ;\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private : enumeration mEnum ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n"
    "  public : inline enumeration enumValue (void) const { return mEnum ; }\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "//\n"
      "//" ;
    result << GALGAS_string (" Phase 2: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "\n"
      "//\n" ;
    GALGAS_uint index_252_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_252 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_252.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_252.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_588_idx (0) ;
          if (enumerator_252.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_588 (enumerator_252.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_588.hasCurrentObject ()) {
              result << "  public : const GALGAS_" ;
              result << enumerator_588.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_588_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_588_idx.increment () ;
              enumerator_588.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public : cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_870_idx (0) ;
          if (enumerator_252.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_870 (enumerator_252.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_870.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_870.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_870_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_870.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_870_idx.increment () ;
              enumerator_870.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n"
            "  public : virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n"
            "  public : virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n"
            "\n"
            "  public : virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_252.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_252_.increment () ;
        enumerator_252.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_NAME,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                                         const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  GALGAS_uint index_27_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_27 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_27.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_27.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_389_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_389 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_389.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_389.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_389_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_389.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_389_idx.increment () ;
            enumerator_389.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\n"
          "cEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_626_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_626 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_626.hasCurrentObject ()) {
            result << ",\n"
              "mAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_626_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_626_idx.increment () ;
            enumerator_626.gotoNextObject () ;
          }
        }
        result << " {\n"
          "} ;\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n"
          "  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1128_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_1128 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1128.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1128_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1128_idx.increment () ;
            enumerator_1128.gotoNextObject () ;
          }
        }
        result << "  ioString << \")\" ;\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "typeComparisonResult cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n"
          "  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_27.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n"
          "  macroValidPointer (ptr) ;\n"
          "  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1857_idx (0) ;
        if (enumerator_27.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_1857 (enumerator_27.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1857.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n"
              "    result = mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1857_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n"
              "  }\n" ;
            index_1857_idx.increment () ;
            enumerator_1857.gotoNextObject () ;
          }
        }
        result << "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "mAssociatedValues (),\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "mEnum (kNotBuilt) {\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2383_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2383 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2383.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2768_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_2768 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2768.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_2768.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2768_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2768.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2768_idx.increment () ;
            enumerator_2768.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS" ;
      }
      result << ") {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2383.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3173_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_3173 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3173.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3173_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3173.hasNextObject ()) {
              result << " && " ;
            }
            index_3173_idx.increment () ;
            enumerator_3173.gotoNextObject () ;
          }
        }
        result << ") {\n"
          "    result.mEnum = kEnum_" ;
        result << enumerator_2383.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n"
          "    cEnumAssociatedValues * ptr = NULL ;\n"
          "    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2383.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3529_idx (0) ;
        if (enumerator_2383.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_3529 (enumerator_2383.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3529.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3529_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3529.hasNextObject ()) {
              result << ", " ;
            }
            index_3529_idx.increment () ;
            enumerator_3529.gotoNextObject () ;
          }
        }
        result << " COMMA_THERE)) ;\n"
          "    result.mAssociatedValues.setPointer (ptr) ;\n"
          "    macroDetachSharedObject (ptr) ;\n"
          "  }\n" ;
      }
      result << "  return result ;\n"
        "}\n"
        "\n" ;
      index_2383_.increment () ;
      enumerator_2383.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3796_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3796 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3796.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3796.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4120_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4120 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4120.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << enumerator_4120.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4120_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4120_idx.increment () ;
            enumerator_4120.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  if (mEnum != kEnum_" ;
        result << enumerator_3796.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4421_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4421 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4421.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4421_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4421_idx.increment () ;
            enumerator_4421.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n"
          "    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n"
          "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
          "  }else{\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3796.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_4919_idx (0) ;
        if (enumerator_3796.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_4919 (enumerator_3796.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4919.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_4919_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_4919_idx.increment () ;
            enumerator_4919.gotoNextObject () ;
          }
        }
        result << "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3796_.increment () ;
      enumerator_3796.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5079_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5079 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5079.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5079.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5361_idx (0) ;
      if (enumerator_5079.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapProxyList enumerator_5361 (enumerator_5079.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5361.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_5361.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5361_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5361.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5361_idx.increment () ;
          enumerator_5361.gotoNextObject () ;
        }
      }
      result << ") const {\n"
        "  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5079.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5079.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5079.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5888_idx (0) ;
        if (enumerator_5079.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapProxyList enumerator_5888 (enumerator_5079.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5888.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5888_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5888_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 133)).stringValue () ;
            result << " ;\n" ;
            index_5888_idx.increment () ;
            enumerator_5888.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n"
        "}\n"
        "\n" ;
      index_5079_.increment () ;
      enumerator_5079.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 143)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_6328_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6328 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6328.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_6328.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 146)).stringValue () ;
      index_6328_.increment () ;
      enumerator_6328.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_6410_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6410 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6410.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6410.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 154)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6410.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_6410_.increment () ;
      enumerator_6410.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_6) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n"
    "  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_7) {
  }
  result << "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    if (mEnum < inOperand.mEnum) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mEnum > inOperand.mEnum) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n" ;
  const enumGalgasBool test_8 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_8) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_13332 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13366 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_13332.operator_not (SOURCE_FILE ("type-enum.galgas", 341)).isValidAndTrue () ;
  if (enumerator_13366.hasCurrentObject () && bool_0) {
    while (enumerator_13366.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_13332 = GALGAS_bool (kIsStrictSup, enumerator_13366.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 342)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13366.gotoNextObject () ;
      if (enumerator_13366.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_13332.operator_not (SOURCE_FILE ("type-enum.galgas", 341)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 345)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 346)), object->mProperty_mConstantList, var_hasAssociatedValues_13332 COMMA_SOURCE_FILE ("type-enum.galgas", 344))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 351)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 352)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 353)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 354)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 355)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 356)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 357)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 358)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 359)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 360)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 361)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 362)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 363)) COMMA_SOURCE_FILE ("type-enum.galgas", 350))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 350)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14498 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_14532 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_14498.operator_not (SOURCE_FILE ("type-enum.galgas", 375)).isValidAndTrue () ;
  if (enumerator_14532.hasCurrentObject () && bool_0) {
    while (enumerator_14532.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_14498 = GALGAS_bool (kIsStrictSup, enumerator_14532.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 376)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14532.gotoNextObject () ;
      if (enumerator_14532.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_14498.operator_not (SOURCE_FILE ("type-enum.galgas", 375)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_14661 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_14661.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_14703 (enumerator_14661.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14703.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_14703.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 380)) ;
      enumerator_14703.gotoNextObject () ;
    }
    enumerator_14661.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 384)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 385)), object->mProperty_mConstantList, var_hasAssociatedValues_14498 COMMA_SOURCE_FILE ("type-enum.galgas", 383))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_15272 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_15306 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_15272.operator_not (SOURCE_FILE ("type-enum.galgas", 399)).isValidAndTrue () ;
  if (enumerator_15306.hasCurrentObject () && bool_0) {
    while (enumerator_15306.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_15272 = GALGAS_bool (kIsStrictSup, enumerator_15306.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 400)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_15306.gotoNextObject () ;
      if (enumerator_15306.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_15272.operator_not (SOURCE_FILE ("type-enum.galgas", 399)).isValidAndTrue () ;
      }
    }
  }
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 402)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 404)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 405)), object->mProperty_mConstantList, var_hasAssociatedValues_15272 COMMA_SOURCE_FILE ("type-enum.galgas", 403))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                              GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                              GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                              GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_key_7483 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 190)), object->mProperty_mExternTypeName.getter_location (SOURCE_FILE ("type-extern.galgas", 190))  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7483, temp_0, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                             const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                             const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                             const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_getterMap var_getterMap_8443 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8443, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 204)) ;
  }
  GALGAS_constructorMap var_constructorMap_8478 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 205)) ;
  GALGAS_setterMap var_setterMap_8506 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 206)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8550 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 207)) ;
  GALGAS_classMethodMap var_classMethodMap_8588 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 208)) ;
  cEnumerator_externTypeConstructorList enumerator_8650 (object->mProperty_mExternTypeConstructorList, kENUMERATION_UP) ;
  while (enumerator_8650.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_8759 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8650.current_mResultTypeName (HERE), var_returnedTypeProxy_8759 COMMA_SOURCE_FILE ("type-extern.galgas", 211)) ;
    }
    GALGAS_functionSignature var_arguments_8800 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 213)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8834 (enumerator_8650.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_8834.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_8954 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8834.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_8954 COMMA_SOURCE_FILE ("type-extern.galgas", 215)) ;
      }
      var_arguments_8800.addAssign_operation (enumerator_8834.current_mFormalSelector (HERE), var_argumentTypeProxy_8954, enumerator_8834.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 216)) ;
      enumerator_8834.gotoNextObject () ;
    }
    {
    var_constructorMap_8478.setter_insertKey (enumerator_8650.current_mConstructorName (HERE), var_arguments_8800, GALGAS_bool (true), var_returnedTypeProxy_8759, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 219)) ;
    }
    enumerator_8650.gotoNextObject () ;
  }
  cEnumerator_externTypeGetterList enumerator_9257 (object->mProperty_mExternTypeGetterList, kENUMERATION_UP) ;
  while (enumerator_9257.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_9366 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9257.current_mResultTypeName (HERE), var_returnedTypeProxy_9366 COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }
    GALGAS_functionSignature var_arguments_9407 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 230)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_9441 (enumerator_9257.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_9441.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_9561 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9441.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_9561 COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      }
      var_arguments_9407.addAssign_operation (enumerator_9441.current_mFormalSelector (HERE), var_argumentTypeProxy_9561, enumerator_9441.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 233)) ;
      enumerator_9441.gotoNextObject () ;
    }
    {
    var_getterMap_8443.setter_insertKey (enumerator_9257.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 238)), var_arguments_9407, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_bool (true), var_returnedTypeProxy_9366, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
    }
    enumerator_9257.gotoNextObject () ;
  }
  cEnumerator_externTypeSetterList enumerator_9979 (object->mProperty_mExternTypeSetterList, kENUMERATION_UP) ;
  while (enumerator_9979.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10029 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 249)) ;
    cEnumerator_formalParameterListAST enumerator_10069 (enumerator_9979.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10069.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_10235 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10069.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10235 COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
      }
      var_routineSignature_10029.addAssign_operation (enumerator_10069.current_mFormalSelector (HERE), var_parameterTypeIndex_10235, enumerator_10069.current_mFormalArgumentPassingMode (HERE), enumerator_10069.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      enumerator_10069.gotoNextObject () ;
    }
    {
    var_setterMap_8506.setter_insertKey (enumerator_9979.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 261)), var_routineSignature_10029, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 264)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }
    enumerator_9979.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_10653 (object->mProperty_mExternTypeMethodList, kENUMERATION_UP) ;
  while (enumerator_10653.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10681 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 270)) ;
    cEnumerator_formalParameterListAST enumerator_10746 (enumerator_10653.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10746.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_10796 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10746.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10796 COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      }
      var_routineSignature_10681.addAssign_operation (enumerator_10746.current_mFormalSelector (HERE), var_parameterTypeIndex_10796, enumerator_10746.current_mFormalArgumentPassingMode (HERE), enumerator_10746.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      enumerator_10746.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_8550.setter_insertKey (enumerator_10653.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 283)), var_routineSignature_10681, enumerator_10653.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
    }
    enumerator_10653.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mExternTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 296)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 297)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 299)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 301)), var_constructorMap_8478, var_getterMap_8443, var_setterMap_8506, var_instanceMethodMap_8550, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 306)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 307)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 308)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 309)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 310)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 311)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 314)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 316)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mProperty_mExternTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 318)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                       const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_12856 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mExternTypeName, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 336)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12856, var_nameForUsefulness_12856, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mProperty_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 340)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 342)), object->mProperty_mExternTypeName.getter_string (HERE), object->mProperty_mCppPreDeclarationCode, object->mProperty_mCppClassCode  COMMA_SOURCE_FILE ("type-extern.galgas", 341))  COMMA_SOURCE_FILE ("type-extern.galgas", 339)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 365)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 366)), object->mProperty_mCppPreDeclarationCode, object->mProperty_mCppClassCode COMMA_SOURCE_FILE ("type-extern.galgas", 364))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 371)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 372)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 375)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 376)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 377)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 378)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 379)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 382)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 383)) COMMA_SOURCE_FILE ("type-extern.galgas", 370))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 370)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_key_2700 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), object->mProperty_mGraphTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 64))  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2700, temp_0, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2700, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 66))  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy_3827 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy_3827 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy_3996 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy_3996 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_4156 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mGraphTypeName, var_graphTypeProxy_4156 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_4344 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedListTypeName, var_associatedListTypeProxy_4344 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy_4526 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy_4526 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4620 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4620, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4655 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4683 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4727 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4765 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeProxy_4344, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeProxy_4526, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeProxy_4344, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeProxy_4526, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 146))  COMMA_SOURCE_FILE ("type-graph.galgas", 146)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 147)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 151)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 158)), var_associatedListTypeProxy_4344, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 160)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 157)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 163)), var_lstringListTypeProxy_4526, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 165)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 162)) ;
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 168))  COMMA_SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 169)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  }
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap_4727.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 186))  COMMA_SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 187)), var_formalParameterList_4856, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 189)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), object->mProperty_mGraphTypeName.getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 272)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mProperty_mGraphTypeName.getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4620, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  var_constructorMap_4655.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303))  COMMA_SOURCE_FILE ("type-graph.galgas", 303)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 304)), GALGAS_bool (false), var_graphTypeProxy_4156, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 302)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 311)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 313)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 310)) ;
  cEnumerator_functionSignature enumerator_10816 (var_associatedListTypeProxy_4344.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 315)), kENUMERATION_UP) ;
  while (enumerator_10816.hasCurrentObject ()) {
    var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 317)), enumerator_10816.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 319)), enumerator_10816.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 316)) ;
    enumerator_10816.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_11006 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_11006.hasCurrentObject ()) {
    {
    var_setterMap_4683.setter_insertOrReplace (enumerator_11006.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 325)), var_formalParameterList_4856, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 328)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 323)) ;
    }
    enumerator_11006.gotoNextObject () ;
  }
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 335))  COMMA_SOURCE_FILE ("type-graph.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 336)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 337)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 334)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 343)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 344)), var_stringTypeProxy_3827, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 346))  COMMA_SOURCE_FILE ("type-graph.galgas", 346)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 347)), var_formalParameterList_4856, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 350)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 345)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 355)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 356)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 357)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 357)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 357)) ;
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 359))  COMMA_SOURCE_FILE ("type-graph.galgas", 359)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 360)), var_formalParameterList_4856, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 363)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 358)) ;
  }
  var_formalParameterList_4856 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 368)) ;
  var_formalParameterList_4856.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), var_lstringTypeProxy_3996, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 369)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 369)) ;
  {
  var_setterMap_4683.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 371))  COMMA_SOURCE_FILE ("type-graph.galgas", 371)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 372)), var_formalParameterList_4856, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mGraphTypeName, var_getterMap_4620, var_setterMap_4683, var_instanceMethodMap_4727, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mGraphTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)), var_constructorMap_4655, var_getterMap_4620, var_setterMap_4683, var_instanceMethodMap_4727, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mProperty_mGraphTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 417)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 391)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_15010 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mGraphTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15010, var_nameForUsefulness_15010, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 436)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_15173 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15010, var_associatedTypeNameForUsefulness_15173 COMMA_SOURCE_FILE ("type-graph.galgas", 438)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_15347 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_15457 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy_15583 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mAssociatedListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)), object->mProperty_mAssociatedListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 444)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 442)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy_15457.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 445)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 446)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 446)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 446)), fixItArray1  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
    }
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 449)) ;
  temp_2.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  temp_2.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 449)) ;
  GALGAS_stringset var_reservedModifierNames_16009 = temp_2 ;
  cEnumerator_graphInsertModifierList enumerator_16068 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_16068.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_reservedModifierNames_16009.getter_hasKey (enumerator_16068.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 451)) COMMA_SOURCE_FILE ("type-graph.galgas", 451)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_16068.current_mInsertModifierName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 452)), GALGAS_string ("the '").add_operation (enumerator_16068.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)), fixItArray4  COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16068.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 454)) ;
    }
    enumerator_16068.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy_15347, var_associatedListTypeProxy_15457, var_associatedListElementTypeProxy_15583, object->mProperty_mInsertModifierList  COMMA_SOURCE_FILE ("type-graph.galgas", 459))  COMMA_SOURCE_FILE ("type-graph.galgas", 457)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 484)) COMMA_SOURCE_FILE ("type-graph.galgas", 482))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 488)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)) COMMA_SOURCE_FILE ("type-graph.galgas", 486))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 510)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 511)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 514)), object->mProperty_mAssociatedListTypeProxy, object->mProperty_mInsertModifierList COMMA_SOURCE_FILE ("type-graph.galgas", 512))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_key_2238 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 49))  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2238, temp_0, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2383 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_2383.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2383.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2383.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 52))  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2383.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3292 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3323 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_3323.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3435 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3323.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3435 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasSetter_3454 = enumerator_3323.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_3484 = enumerator_3323.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_3516 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3553 (enumerator_3323.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_3553.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_3553.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 74)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 75)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray1  COMMA_SOURCE_FILE ("type-list.galgas", 75)) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, enumerator_3553.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 80)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 81)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray3  COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, enumerator_3553.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 86)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_hasSelector_3516.boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 88)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 88)) ;
                }
              }
              var_hasSelector_3516 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 94)) ;
            temp_8.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 94)) ;
            appendFixItActions (fixItArray7, kFixItReplace, temp_8) ;
            inCompiler->emitSemanticError (enumerator_3553.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 92)), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
          }
        }
      }
      enumerator_3553.gotoNextObject () ;
    }
    var_typedAttributeList_3292.addAssign_operation (var_attributeTypeIndex_3435, enumerator_3323.current_mPropertyName (HERE), var_hasSetter_3454, var_hasGetter_3484, var_hasSelector_3516  COMMA_SOURCE_FILE ("type-list.galgas", 97)) ;
    enumerator_3323.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_4642 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4642 COMMA_SOURCE_FILE ("type-list.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_4762 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mListTypeName, var_listTypeIndex_4762 COMMA_SOURCE_FILE ("type-list.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_5000 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 106)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 106)), var_listElementTypeIndex_5000 COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5081 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 110)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5136 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 111)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5200 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 112)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5263 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 113)) ;
  cEnumerator_typedPropertyList enumerator_5299 (var_typedAttributeList_3292, kENUMERATION_UP) ;
  while (enumerator_5299.hasCurrentObject ()) {
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = enumerator_5299.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_5299.current_mPropertyName (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_5319 = temp_9 ;
    var_enumerationDescriptor_5081.addAssign_operation (enumerator_5299.current_mPropertyTypeProxy (HERE), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 116)) ;
    var_constructorAttributeTypeList_5136.addAssign_operation (var_selector_5319.getter_nowhere (SOURCE_FILE ("type-list.galgas", 118)), enumerator_5299.current_mPropertyTypeProxy (HERE), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
    var_setterOutputFormalArgumentList_5200.addAssign_operation (var_selector_5319.getter_nowhere (SOURCE_FILE ("type-list.galgas", 122)), enumerator_5299.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 124)), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 121)) ;
    var_setterInputFormalArgumentList_5263.addAssign_operation (var_selector_5319.getter_nowhere (SOURCE_FILE ("type-list.galgas", 127)), enumerator_5299.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 129)), enumerator_5299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 126)) ;
    enumerator_5299.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5901 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 133)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5901, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 138)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 134)) ;
  }
  {
  var_constructorMap_5901.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 142))  COMMA_SOURCE_FILE ("type-list.galgas", 142)), var_constructorAttributeTypeList_5136, GALGAS_bool (false), var_listTypeIndex_4762, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
  }
  GALGAS_getterMap var_getterMap_6341 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6341, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 148)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 149)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 156)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 167)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 163)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 174)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 170)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6341, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 181)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 177)) ;
  }
  cEnumerator_typedPropertyList enumerator_7338 (var_typedAttributeList_3292, kENUMERATION_UP) ;
  while (enumerator_7338.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = enumerator_7338.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_11) {
        {
        GALGAS_functionSignature temp_12 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 189)) ;
        temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 189)), var_uintType_4642, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 189)) ;
        var_getterMap_6341.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_7338.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 187)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 187)), enumerator_7338.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 187))  COMMA_SOURCE_FILE ("type-list.galgas", 187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 188)), temp_12, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 190)), GALGAS_bool (true), enumerator_7338.current_mPropertyTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 193)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 186)) ;
        }
      }
    }
    enumerator_7338.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7823 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 199)) ;
  {
  var_instanceMethodMap_7823.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 201))  COMMA_SOURCE_FILE ("type-list.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 202)), var_setterOutputFormalArgumentList_5200, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 204)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 200)) ;
  }
  {
  var_instanceMethodMap_7823.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 210))  COMMA_SOURCE_FILE ("type-list.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 211)), var_setterOutputFormalArgumentList_5200, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 213)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 209)) ;
  }
  GALGAS_setterMap var_setterMap_8341 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 219)) ;
  {
  GALGAS_formalParameterSignature temp_13 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 223)) ;
  temp_13.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 223)), var_listElementTypeIndex_5000, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 223)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 223)) ;
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 221))  COMMA_SOURCE_FILE ("type-list.galgas", 221)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 222)), temp_13, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 225)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 220)) ;
  }
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 229))  COMMA_SOURCE_FILE ("type-list.galgas", 229)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 230)), var_setterOutputFormalArgumentList_5200, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 233)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 228)) ;
  }
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 237))  COMMA_SOURCE_FILE ("type-list.galgas", 237)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 238)), var_setterOutputFormalArgumentList_5200, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 241)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 236)) ;
  }
  var_setterOutputFormalArgumentList_5200.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 244)), var_uintType_4642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 244)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 244)) ;
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 246))  COMMA_SOURCE_FILE ("type-list.galgas", 246)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 247)), var_setterOutputFormalArgumentList_5200, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 250)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 245)) ;
  }
  cEnumerator_typedPropertyList enumerator_9400 (var_typedAttributeList_3292, kENUMERATION_UP) ;
  while (enumerator_9400.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = enumerator_9400.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_14) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_9461 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 256)) ;
        var_setterFormalArgumentList_9461.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 257)), enumerator_9400.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 257)), enumerator_9400.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 257)) ;
        var_setterFormalArgumentList_9461.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 258)), var_uintType_4642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 258)), enumerator_9400.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 258)) ;
        {
        var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9400.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 260)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 260)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 260)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 260)), enumerator_9400.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 260))  COMMA_SOURCE_FILE ("type-list.galgas", 260)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 261)), var_setterFormalArgumentList_9461, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 264)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 259)) ;
        }
      }
    }
    enumerator_9400.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5263.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 270)), var_uintType_4642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 270)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 270)) ;
  {
  var_setterMap_8341.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 272))  COMMA_SOURCE_FILE ("type-list.galgas", 272)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 273)), var_setterInputFormalArgumentList_5263, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 276)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListTypeName, var_getterMap_6341, var_setterMap_8341, var_instanceMethodMap_7823, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 281)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-list.galgas", 296)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 297)), GALGAS_bool (true), var_typedAttributeList_3292, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 301)), var_constructorMap_5901, var_getterMap_6341, var_setterMap_8341, var_instanceMethodMap_7823, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 306)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 307)), var_enumerationDescriptor_5081, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 309)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 309)) COMMA_SOURCE_FILE ("type-list.galgas", 309)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 309)) COMMA_SOURCE_FILE ("type-list.galgas", 309)), var_constructorAttributeTypeList_5136, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 311)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 313)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 314)), GALGAS_bool (false), var_listElementTypeIndex_5000, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mProperty_mListTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 318)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 292)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_11957 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 328)) ;
  cEnumerator_propertyInCollectionListAST enumerator_11988 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_11988.hasCurrentObject ()) {
    var_structAttributeList_11957.addAssign_operation (enumerator_11988.current_mPropertyTypeName (HERE), enumerator_11988.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 334))  COMMA_SOURCE_FILE ("type-list.galgas", 330)) ;
    enumerator_11988.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 338)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 338)), var_structAttributeList_11957, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 336))  COMMA_SOURCE_FILE ("type-list.galgas", 336)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_13077 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListTypeName, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 358)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13077, var_nameForUsefulness_13077, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_13236 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 360)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 360))  COMMA_SOURCE_FILE ("type-list.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 360)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13077, var_elementTypeNameForUsefulness_13236 COMMA_SOURCE_FILE ("type-list.galgas", 361)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13458 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 363)) ;
  GALGAS_propertyIndexMap var_attributeMap_13496 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 364)) ;
  cEnumerator_propertyInCollectionListAST enumerator_13527 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_13527.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13568 = function_typeNameForUsefulEntitiesGraph (enumerator_13527.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 366)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13077, var_propertyTypeNameForUsefulness_13568 COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_13720 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13527.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 368)) ;
    GALGAS_bool var_hasSetter_13821 = enumerator_13527.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasGetter_13851 = enumerator_13527.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_13883 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13920 (enumerator_13527.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13920.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_13920.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 373)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticWarning (enumerator_13920.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 374)), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray1  COMMA_SOURCE_FILE ("type-list.galgas", 374)) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (kIsEqual, enumerator_13920.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 379)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticWarning (enumerator_13920.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 380)), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray3  COMMA_SOURCE_FILE ("type-list.galgas", 380)) ;
          }
        }
        if (kBoolFalse == test_2) {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsEqual, enumerator_13920.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 385)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_hasSelector_13883.boolEnum () ;
                if (kBoolTrue == test_5) {
                  TC_Array <C_FixItDescription> fixItArray6 ;
                  inCompiler->emitSemanticError (enumerator_13920.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 387)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
                }
              }
              var_hasSelector_13883 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_4) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            GALGAS_stringlist temp_8 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 393)) ;
            temp_8.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 393)) ;
            appendFixItActions (fixItArray7, kFixItReplace, temp_8) ;
            inCompiler->emitSemanticError (enumerator_13920.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 391)), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 391)) ;
          }
        }
      }
      enumerator_13920.gotoNextObject () ;
    }
    var_typedAttributeList_13458.addAssign_operation (var_t_13720, enumerator_13527.current_mPropertyName (HERE), var_hasSetter_13821, var_hasGetter_13851, var_hasSelector_13883  COMMA_SOURCE_FILE ("type-list.galgas", 396)) ;
    {
    var_attributeMap_13496.setter_insertKey (enumerator_13527.current_mPropertyName (HERE), var_t_13720, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)) ;
    }
    enumerator_13527.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_14973 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 405)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 407)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_14973, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 410)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 410)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 410)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 410)), var_typedAttributeList_13458  COMMA_SOURCE_FILE ("type-list.galgas", 408))  COMMA_SOURCE_FILE ("type-list.galgas", 406)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'listGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_listGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_listGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_listGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_listGenerationTemplate_0,
  0,
  gWrapperAllDirectories_listGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_list {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- List constructor used by listmap\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n"
    "\n"
    "//--------------------------------- Element constructor\n"
    "  public : static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_790_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_790 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_790.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_790.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_790.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_790_.increment () ;
      enumerator_790.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructors\n"
    "  public : cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_547_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_547 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_547.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_547.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_547.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_547.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_547_.increment () ;
      enumerator_547.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "  public : cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public : virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public : virtual cCollectionElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    "  public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1562_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1562 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1562.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1562.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1562.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1562.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1562_.increment () ;
      enumerator_1562.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1799_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1799 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1799.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1799.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1799.hasNextObject ()) {
        result << ", " ;
      }
      index_1799_.increment () ;
      enumerator_1799.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2217_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2217 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2217.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2217.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2217.hasNextObject ()) {
        result << ", " ;
      }
      index_2217_.increment () ;
      enumerator_2217.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2866_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2866 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2866.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2866.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_2866.hasNextObject ()) {
        result << ", " ;
      }
      index_2866_.increment () ;
      enumerator_2866.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3264_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3264 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3264.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3264.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3264.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3264_.increment () ;
      enumerator_3264.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  macroValidSharedObject (operand, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return mObject.objectCompare (operand->mObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (UNUSED_LOCATION_ARGS) {\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "  (capCollectionElementArray ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5031_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5031 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5031.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5031.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5031_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5031.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5031_IDX.increment () ;
      enumerator_5031.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5263_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5263 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5263.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5263_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5263.hasNextObject ()) {
        result << " && " ;
      }
      index_5263_IDX.increment () ;
      enumerator_5263.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (capCollectionElementArray ()) ;\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_5557_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5557 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5557.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5557_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5557_IDX.increment () ;
      enumerator_5557.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_5934_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5934 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5934.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_5934.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_5934.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_5934_.increment () ;
      enumerator_5934.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6236_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6236 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6236.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6236.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6236.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6236_.increment () ;
      enumerator_6236.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6618_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6618 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6618.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6618.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6618_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6618.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6618_IDX.increment () ;
      enumerator_6618.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_6823_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6823 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6823.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_6823_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 176)).stringValue () ;
      result << ".isValid ()" ;
      index_6823_IDX.increment () ;
      enumerator_6823.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7020_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7020 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7020.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7020_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 182)).stringValue () ;
      if (enumerator_7020.hasNextObject ()) {
        result << ", " ;
      }
      index_7020_IDX.increment () ;
      enumerator_7020.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "    capCollectionElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    appendObject (attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_append (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inElement,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inElement.isValid ()) {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n"
    "    capCollectionElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    appendObject (attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8051_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8051 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8051.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_8051.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << " inOperand" ;
      result << index_8051_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8051_IDX.increment () ;
      enumerator_8051.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inInsertionIndex.isValid ()" ;
  GALGAS_uint index_8351_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8351 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8351.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_8351_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 219)).stringValue () ;
      result << ".isValid ()" ;
      index_8351_IDX.increment () ;
      enumerator_8351.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8548_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8548 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8548.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_8548_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue () ;
      if (enumerator_8548.hasNextObject ()) {
        result << ", " ;
      }
      index_8548_IDX.increment () ;
      enumerator_8548.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "    capCollectionElement attributes ;\n"
    "    attributes.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9045_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9045 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9045.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9045.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << " & outOperand" ;
      result << index_9045_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9045_IDX.increment () ;
      enumerator_9045.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inRemoveIndex.isValid ()) {\n"
    "    capCollectionElement attributes ;\n"
    "    removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "    cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "    if (NULL == p) {\n" ;
  GALGAS_uint index_9597_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9597 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9597.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_9597_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 252)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9597_IDX.increment () ;
      enumerator_9597.gotoNextObject () ;
    }
  }
  result << "    }else{\n"
    "      macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9781_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9781 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9781.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_9781_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 258)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9781.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 258)).stringValue () ;
      result << " ;\n" ;
      index_9781_IDX.increment () ;
      enumerator_9781.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10128_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10128 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10128.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10128.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue () ;
      result << " & outOperand" ;
      result << index_10128_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10128_IDX.increment () ;
      enumerator_10128.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeFirstObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_10545_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10545 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10545.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10545_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 278)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10545_IDX.increment () ;
      enumerator_10545.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10723_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10723 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10723.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10723_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 284)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10723.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 284)).stringValue () ;
      result << " ;\n" ;
      index_10723_IDX.increment () ;
      enumerator_10723.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11061_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11061 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11061.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11061.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue () ;
      result << " & outOperand" ;
      result << index_11061_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11061_IDX.increment () ;
      enumerator_11061.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  capCollectionElement attributes ;\n"
    "  removeLastObject (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_11477_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11477 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11477.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11477_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 303)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11477_IDX.increment () ;
      enumerator_11477.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11655_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11655 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11655.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11655_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 309)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11655.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 309)).stringValue () ;
      result << " ;\n" ;
      index_11655_IDX.increment () ;
      enumerator_11655.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11991_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11991 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11991.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11991.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 318)).stringValue () ;
      result << " & outOperand" ;
      result << index_11991_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 318)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11991_IDX.increment () ;
      enumerator_11991.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readFirst (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_12406_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12406 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12406.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12406_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 328)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12406_IDX.increment () ;
      enumerator_12406.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12584_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12584 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12584.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12584_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12584.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue () ;
      result << " ;\n" ;
      index_12584_IDX.increment () ;
      enumerator_12584.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12919_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12919 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12919.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_12919.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 343)).stringValue () ;
      result << " & outOperand" ;
      result << index_12919_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 343)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12919_IDX.increment () ;
      enumerator_12919.gotoNextObject () ;
    }
  }
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElement attributes ;\n"
    "  readLast (attributes, inCompiler COMMA_THERE) ;\n"
    "  cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_13333_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13333 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13333.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13333_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 353)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13333_IDX.increment () ;
      enumerator_13333.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13511_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13511 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13511.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13511_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 359)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13511.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 359)).stringValue () ;
      result << " ;\n" ;
      index_13511_IDX.increment () ;
      enumerator_13511.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::add_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand,\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                                            " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    result = *this ;\n"
    "    result.appendList (inOperand) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListWithRange (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_range & inRange,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListWithRange (result, inRange, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListFromIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListFromIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subListToIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inIndex,\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result = GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyList (THERE) ;\n"
    "  subListToIndex (result, inIndex, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::plusAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inOperand,\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "                          " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  appendList (inOperand) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_16311_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16311 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16311.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_16311.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_16311.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_16311.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).stringValue () ;
        result << " inOperand,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_uint inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) uniquelyReferencedPointerAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    macroUniqueSharedObject (p) ;\n"
          "    p->mObject.mProperty_" ;
        result << enumerator_16311.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 427)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      const enumGalgasBool test_1 = enumerator_16311.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_16311.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 434)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_16311.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 434)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "const GALGAS_uint & inIndex,\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n"
          "                                              " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  capCollectionElement attributes = readObjectAtIndex (inIndex, inCompiler COMMA_THERE) ;\n"
          "  cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) attributes.ptr () ;\n"
          "  GALGAS_" ;
        result << enumerator_16311.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 439)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mObject.mProperty_" ;
        result << enumerator_16311.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_16311_IDX.increment () ;
      enumerator_16311.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const typeEnumerationOrder inOrder) :\n"
    "cGenericAbstractEnumerator (inOrder) {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mObject ;\n"
    "}\n"
    "\n"
    "\n" ;
  GALGAS_uint index_19278_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19278 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19278.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19278.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19278.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mObject.mProperty_" ;
      result << enumerator_19278.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 472)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19278_IDX.increment () ;
      enumerator_19278.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 448)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 449)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 447))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 453)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 455)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 456)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 457)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 458)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 459)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 460)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 461)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 462)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 463)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 464)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 465)) COMMA_SOURCE_FILE ("type-list.galgas", 452))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 452)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_17701 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_17701.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17701.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)) ;
    enumerator_17701.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mProperty_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 478)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 481)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 482)), object->mProperty_mTypedAttributeList, object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 484)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 484)) COMMA_SOURCE_FILE ("type-list.galgas", 480))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_1789 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1789.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 39)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 42))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  var_structAttributeList_1789.addAssign_operation (object->mProperty_mAssociatedListTypeName, GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 45)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), var_structAttributeList_1789, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                           GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                           GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_key_3067 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 67)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 67))  COMMA_SOURCE_FILE ("type-listmap.galgas", 67)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3067, temp_0, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 68)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3067, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_4202 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_4260 ;
  GALGAS_bool joker_4164_3 ; // Joker input parameter
  GALGAS_bool joker_4164_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4164_1 ; // Joker input parameter
  GALGAS_bool joker_4208 ; // Joker input parameter
  GALGAS_propertyMap joker_4266_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4266_19 ; // Joker input parameter
  GALGAS_constructorMap joker_4266_18 ; // Joker input parameter
  GALGAS_getterMap joker_4266_17 ; // Joker input parameter
  GALGAS_setterMap joker_4266_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4266_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_4266_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_4266_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4266_12 ; // Joker input parameter
  GALGAS_operators joker_4266_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4266_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4266_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4266_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4266_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4266_6 ; // Joker input parameter
  GALGAS_bool joker_4266_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4266_4 ; // Joker input parameter
  GALGAS_string joker_4266_3 ; // Joker input parameter
  GALGAS_string joker_4266_2 ; // Joker input parameter
  GALGAS_headerKind joker_4266_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_4164_3, joker_4164_2, joker_4164_1, var_typeKindEnum_4202, joker_4208, var_listTypedAttributeList_4260, joker_4266_20, joker_4266_19, joker_4266_18, joker_4266_17, joker_4266_16, joker_4266_15, joker_4266_14, joker_4266_13, joker_4266_12, joker_4266_11, joker_4266_10, joker_4266_9, joker_4266_8, joker_4266_7, joker_4266_6, joker_4266_5, joker_4266_4, joker_4266_3, joker_4266_2, joker_4266_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4202.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 91)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
      var_listTypedAttributeList_4260 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_4529 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 95)) ;
  GALGAS_getterMap var_getterMap_4619 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4619, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  GALGAS_setterMap var_setterMap_4644 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4688 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 98)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex_4842 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedListTypeName, var_associatedListTypeIndex_4842 COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_4976 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_4976 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4619, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 131)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_4529, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 139)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6012 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor_6012.addAssign_operation (var_stringTypeIndex_4976, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor_6012.addAssign_operation (var_associatedListTypeIndex_4842, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6225 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription_6225.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex_4976, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6357 (var_listTypedAttributeList_4260, kENUMERATION_UP) ;
  while (enumerator_6357.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6225.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6357.current_mPropertyTypeProxy (HERE), enumerator_6357.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6357.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListmapTypeName, var_getterMap_4619, var_setterMap_4644, var_instanceMethodMap_4688, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_6977 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), var_listElementTypeIndex_6977 COMMA_SOURCE_FILE ("type-listmap.galgas", 164)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListmapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-listmap.galgas", 174)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 175)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 178)), var_listTypedAttributeList_4260, var_constructorMap_4529, var_getterMap_4619, var_setterMap_4644, var_instanceMethodMap_4688, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 184)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 185)), var_enumeratorDescriptor_6012, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 187)), var_addAssignOperatorDescription_6225, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 189)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 190)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 192)), GALGAS_bool (false), var_listElementTypeIndex_6977, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mProperty_mListmapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 196)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                    GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_8631 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListmapTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8631, var_nameForUsefulness_8631, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 215)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_8796 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 216)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8631, var_associatedTypeNameForUsefulness_8796 COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_8979 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 218))  COMMA_SOURCE_FILE ("type-listmap.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8631, var_elementTypeNameForUsefulness_8979 COMMA_SOURCE_FILE ("type-listmap.galgas", 219)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9321 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9378 ;
  GALGAS_bool joker_9283_3 ; // Joker input parameter
  GALGAS_bool joker_9283_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9283_1 ; // Joker input parameter
  GALGAS_bool joker_9327 ; // Joker input parameter
  GALGAS_propertyMap joker_9384_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9384_19 ; // Joker input parameter
  GALGAS_constructorMap joker_9384_18 ; // Joker input parameter
  GALGAS_getterMap joker_9384_17 ; // Joker input parameter
  GALGAS_setterMap joker_9384_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9384_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_9384_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9384_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9384_12 ; // Joker input parameter
  GALGAS_operators joker_9384_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9384_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9384_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9384_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9384_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9384_6 ; // Joker input parameter
  GALGAS_bool joker_9384_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9384_4 ; // Joker input parameter
  GALGAS_string joker_9384_3 ; // Joker input parameter
  GALGAS_string joker_9384_2 ; // Joker input parameter
  GALGAS_headerKind joker_9384_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_9283_3, joker_9283_2, joker_9283_1, var_typeKindEnum_9321, joker_9327, var_listTypeAttributeList_9378, joker_9384_20, joker_9384_19, joker_9384_18, joker_9384_17, joker_9384_16, joker_9384_15, joker_9384_14, joker_9384_13, joker_9384_12, joker_9384_11, joker_9384_10, joker_9384_9, joker_9384_8, joker_9384_7, joker_9384_6, joker_9384_5, joker_9384_4, joker_9384_3, joker_9384_2, joker_9384_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9321.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 230)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 231)), GALGAS_string ("associated type should be a list type"), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 231)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 235)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 238)), var_listTypeAttributeList_9378, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 240))  COMMA_SOURCE_FILE ("type-listmap.galgas", 236))  COMMA_SOURCE_FILE ("type-listmap.galgas", 234)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10884 (object->mProperty_mAssociatedListTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_10884.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10884.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 261)) ;
    enumerator_10884.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 266)) COMMA_SOURCE_FILE ("type-listmap.galgas", 264))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 280)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 281)) COMMA_SOURCE_FILE ("type-listmap.galgas", 268))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 291)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 292)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)), object->mProperty_mAssociatedListTypeIndex.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 295)), object->mProperty_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("type-listmap.galgas", 293))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dictDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_dictDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  result_outString = GALGAS_string ("dict @").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 15)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_dictDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                          extensionGetter_dictDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_dictDeclarationAST_keyRepresentation (defineExtensionGetter_dictDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_2757 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 68)) ;
  var_structAttributeList_2757.addAssign_operation (object->mProperty_mKeyTypeName, GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 69)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 69))  COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  cEnumerator_propertyInCollectionListAST enumerator_2854 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_2854.hasCurrentObject ()) {
    var_structAttributeList_2757.addAssign_operation (enumerator_2854.current_mPropertyTypeName (HERE), enumerator_2854.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 71))  COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
    enumerator_2854.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 75)), var_structAttributeList_2757, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 73))  COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                             extensionMethod_dictDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_addAssociatedElement (defineExtensionMethod_dictDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_lstring var_dictionary_3982 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 92)), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 92))  COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_3982, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mKeyTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 94)), object->mProperty_mKeyTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 94))  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_4229 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4229.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4229.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 96)), enumerator_4229.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 96))  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
    }
    enumerator_4229.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                                extensionMethod_dictDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_keyTypeIndex_5190 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mKeyTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 110)), var_keyTypeIndex_5190 COMMA_SOURCE_FILE ("type-dict.galgas", 110)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5248 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5190, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_5369 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_5405 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_5405.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_5405.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_5405.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 118)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 118)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_5369 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_5405.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 122)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-dict.galgas", 122)) ;
    }
    enumerator_5405.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5681 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_5772 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5772, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_5797 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5841 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5681, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), object->mProperty_mDictTypeName.getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5772, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), object->mProperty_mKeyTypeName.getter_string (HERE), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5772, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6507 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 154)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6551 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_6629 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_6629.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 157)), var_keyTypeIndex_5190, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 157)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_6507.addAssign_operation (temp_4.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 159)), var_keyTypeIndex_5190, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 161)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_6978 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 163)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_6978.addAssign_operation (temp_6.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 165)), var_keyTypeIndex_5190, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 167)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 164)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7227 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_7227.addAssign_operation (GALGAS_bool (true), temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 172)), var_keyTypeIndex_5190, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_7414 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 175)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7477 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7477.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7589 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7477.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7589 COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
    }
    GALGAS_bool var_hasGetter_7608 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_7633 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7660 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_6629.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 181)), var_attributeTypeIndex_7589, enumerator_7477.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 181)) ;
    var_typedPropertyList_6551.addAssign_operation (var_attributeTypeIndex_7589, enumerator_7477.current_mPropertyName (HERE), var_hasSetter_7633, var_hasGetter_7608, var_hasSelector_7660  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
    var_typesToIncludeInHeaderCompilation_7414.addAssign_operation (var_attributeTypeIndex_7589  COMMA_SOURCE_FILE ("type-dict.galgas", 183)) ;
    var_enumerationDescriptor_5248.addAssign_operation (var_attributeTypeIndex_7589, enumerator_7477.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 184))  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_7477.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 186)) ;
    }
    var_insertMethodFormalArgumentList_6507.addAssign_operation (temp_10, var_attributeTypeIndex_7589, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 188)), enumerator_7477.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 185)) ;
    GALGAS_lstring temp_12 ;
    const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_5369.boolEnum () ;
    if (kBoolTrue == test_13) {
      temp_12 = enumerator_7477.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_13) {
      temp_12 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 191)) ;
    }
    var_removeMethodFormalArgumentList_6978.addAssign_operation (temp_12, var_attributeTypeIndex_7589, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 193)), enumerator_7477.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 190)) ;
    GALGAS_bool test_14 = var_usesSelectorsInInsertAndSearch_5369 ;
    if (kBoolTrue != test_14.boolEnum ()) {
      test_14 = var_hasSelector_7660 ;
    }
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = test_14.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_7477.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 197)) ;
    }
    var_optionalMethodSignature_7227.addAssign_operation (GALGAS_bool (false), temp_15, var_attributeTypeIndex_7589, enumerator_7477.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 195)) ;
    enumerator_7477.gotoNextObject () ;
  }
  {
  var_setterMap_5797.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 203)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 204)), var_removeMethodFormalArgumentList_6978, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 207)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 202)) ;
  }
  {
  var_instanceMethodMap_5841.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 212))  COMMA_SOURCE_FILE ("type-dict.galgas", 212)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 213)), var_removeMethodFormalArgumentList_6978, object->mProperty_mDictTypeName.getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 217)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 211)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_9265 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_9265.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9289 = GALGAS_lstring::constructor_new (enumerator_9265.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 222)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 222)), enumerator_9265.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 222))  COMMA_SOURCE_FILE ("type-dict.galgas", 222)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_9476 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9265.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9476 COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 227)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 227)), var_keyTypeIndex_5190, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    var_getterMap_5772.setter_insertOrReplace (var_accessorName_9289, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 226)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 228)), GALGAS_bool (true), var_attributeTypeIndex_9476, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    }
    enumerator_9265.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_9863 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_9863.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9887 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9863.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 238)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)), enumerator_9863.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 239))  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_10177 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9863.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10177 COMMA_SOURCE_FILE ("type-dict.galgas", 241)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_10218 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 246)) ;
    var_accessorFormalArgumentList_10218.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 247)), var_attributeTypeIndex_10177, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 247)), enumerator_9863.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 247)) ;
    var_accessorFormalArgumentList_10218.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 248)), var_keyTypeIndex_5190, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 248)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    {
    var_setterMap_5797.setter_insertOrReplace (var_accessorName_9887, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 251)), var_accessorFormalArgumentList_10218, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
    }
    enumerator_9863.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mDictTypeName, var_getterMap_5772, var_setterMap_5797, var_instanceMethodMap_5841, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 259)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_11162 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 272)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 272)), var_elementTypeProxy_11162 COMMA_SOURCE_FILE ("type-dict.galgas", 270)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_11215 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 276)) ;
  {
  var_optionalMethodMap_11215.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 277)), var_optionalMethodSignature_7227, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 277)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mDictTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dict.galgas", 283)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 286)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 287)), var_typedPropertyList_6551, var_constructorMap_5681, var_getterMap_5772, var_setterMap_5797, var_instanceMethodMap_5841, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 293)), var_optionalMethodMap_11215, var_enumerationDescriptor_5248, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 296)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 296)) COMMA_SOURCE_FILE ("type-dict.galgas", 296)), var_argumentTypeListForAddAssignWithFieldExpressionList_6629, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 298)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 299)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 300)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 301)), GALGAS_bool (false), var_elementTypeProxy_11162, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (object->mProperty_mDictTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 305)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 279)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                               extensionMethod_dictDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_enterInSemanticContext (defineExtensionMethod_dictDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12682 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 315)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 315)), kENUMERATION_UP) ;
  while (enumerator_12682.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12715 = enumerator_12682.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 316)) ;
    {
    GALGAS_string joker_12802 ; // Joker input parameter
    var_explodedArray_12715.setter_popFirst (joker_12802, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 317)) ;
    }
    cEnumerator_stringlist enumerator_12832 (var_explodedArray_12715, kENUMERATION_UP) ;
    while (enumerator_12832.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12832.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 319)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_12889 = enumerator_12832.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 320)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_12889.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 322)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 322)) ;
            }
          }
        }
      }
      enumerator_12832.gotoNextObject () ;
    }
    enumerator_12682.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'check_K_L_escapeCharacters'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_13380 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 332)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 332)), kENUMERATION_UP) ;
  while (enumerator_13380.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13413 = enumerator_13380.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 333)) ;
    {
    GALGAS_string joker_13500 ; // Joker input parameter
    var_explodedArray_13413.setter_popFirst (joker_13500, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 334)) ;
    }
    cEnumerator_stringlist enumerator_13530 (var_explodedArray_13413, kENUMERATION_UP) ;
    while (enumerator_13530.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13530.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 336)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13587 = enumerator_13530.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 337)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13587.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_13587.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 338)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 339)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 339)) ;
            }
          }
        }
      }
      enumerator_13530.gotoNextObject () ;
    }
    enumerator_13380.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'forbiddenKeysForMapAndDict'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 349)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 350)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 352)) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (NULL,
                                                                        releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_14600 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mDictTypeName, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 366)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14600, var_nameForUsefulness_14600, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 367)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_14759 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 368))  COMMA_SOURCE_FILE ("type-dict.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14600, var_elementTypeNameForUsefulness_14759 COMMA_SOURCE_FILE ("type-dict.galgas", 369)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15001 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 371)) ;
  GALGAS_propertyIndexMap var_attributeMap_15039 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 372)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15070 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_15070.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15111 = function_typeNameForUsefulEntitiesGraph (enumerator_15070.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 374)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14600, var_propertyTypeNameForUsefulness_15111 COMMA_SOURCE_FILE ("type-dict.galgas", 375)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_15281 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15070.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
    GALGAS_bool var_hasSetter_15360 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_15385 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_15412 = GALGAS_bool (false) ;
    var_typedAttributeList_15001.addAssign_operation (var_t_15281, enumerator_15070.current_mPropertyName (HERE), var_hasSetter_15360, var_hasGetter_15385, var_hasSelector_15412  COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)).getter_hasKey (enumerator_15070.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 386)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_m_15618 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_15695 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 388)), kENUMERATION_UP) ;
        while (enumerator_15695.hasCurrentObject ()) {
          var_m_15618.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_15695.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 389)) ;
          enumerator_15695.gotoNextObject () ;
        }
        var_m_15618.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 391)) ;
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_15070.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 392)), var_m_15618, fixItArray1  COMMA_SOURCE_FILE ("type-dict.galgas", 392)) ;
      }
    }
    {
    var_attributeMap_15039.setter_insertKey (enumerator_15070.current_mPropertyName (HERE), var_t_15281, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
    }
    enumerator_15070.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 398)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mDictTypeName, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 400)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 401)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 401)), object->mProperty_mDictTypeName, var_typedAttributeList_15001, object->mProperty_mKeyTypeName  COMMA_SOURCE_FILE ("type-dict.galgas", 399))  COMMA_SOURCE_FILE ("type-dict.galgas", 397)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                         extensionMethod_dictDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictDeclarationAST_semanticAnalysis (defineExtensionMethod_dictDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 427)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-dict.galgas", 425))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 435)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 436)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 437)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 438)), object->mProperty_mTypeProxy.getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 439)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 440)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 442)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)) COMMA_SOURCE_FILE ("type-dict.galgas", 430))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 430)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                              extensionMethod_dictTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_dictTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dictTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dictTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictTypeForGeneration * object = (const cPtr_dictTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_dictTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 454)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 456)), object->mProperty_mTypedAttributeList, object->mProperty_mKeyTypeName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 458)) COMMA_SOURCE_FILE ("type-dict.galgas", 455))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_dictTypeForGeneration.mSlotID,
                                                     extensionMethod_dictTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dictTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_dictTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  result_outString = GALGAS_string ("map @").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 49)) ;
//---
  return result_outString ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                          extensionGetter_mapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapDeclarationAST_keyRepresentation (defineExtensionGetter_mapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST addAssociatedElement'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_6639 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 186)) ;
  var_structAttributeList_6639.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 188)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 189)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 191))  COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  cEnumerator_propertyInCollectionListAST enumerator_6788 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6788.hasCurrentObject ()) {
    var_structAttributeList_6639.addAssign_operation (enumerator_6788.current_mPropertyTypeName (HERE), enumerator_6788.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 197))  COMMA_SOURCE_FILE ("type-map.galgas", 193)) ;
    enumerator_6788.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 201)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 201)), var_structAttributeList_6639, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 199))  COMMA_SOURCE_FILE ("type-map.galgas", 199)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_lstring var_key_7937 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 217)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 217))  COMMA_SOURCE_FILE ("type-map.galgas", 217)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7937, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 218)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_8080 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8080.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_8080.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 220)), enumerator_8080.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 220))  COMMA_SOURCE_FILE ("type-map.galgas", 220)) COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
    }
    enumerator_8080.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                                extensionMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_9053 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_9053 COMMA_SOURCE_FILE ("type-map.galgas", 234)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_locationTypeProxy_9188 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy_9188 COMMA_SOURCE_FILE ("type-map.galgas", 236)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_9320 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9320 COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 240)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_9320, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 240)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9401 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9484 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_9517 = GALGAS_bool (true) ;
  cEnumerator_lstringlist enumerator_9552 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_9552.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, enumerator_9552.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
          if (kBoolTrue == test_2) {
            TC_Array <C_FixItDescription> fixItArray3 ;
            inCompiler->emitSemanticError (enumerator_9552.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 247)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_9484 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_9552.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_activateSuggestion_9517.operator_not (SOURCE_FILE ("type-map.galgas", 251)).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_9552.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 252)), GALGAS_string ("duplicated attribute"), fixItArray6  COMMA_SOURCE_FILE ("type-map.galgas", 252)) ;
            }
          }
          var_activateSuggestion_9517 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_4) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_9552.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 256)), GALGAS_string ("unknown attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 256)) ;
      }
    }
    enumerator_9552.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_9991 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 260)) ;
  GALGAS_getterMap var_getterMap_10082 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_10082, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 261)) ;
  }
  GALGAS_setterMap var_setterMap_10106 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 262)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10150 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 263)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_9991, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 269)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 265)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap_9991, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 276)), GALGAS_string ("inMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 278)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 272)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 282)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 289)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 300)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 307)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 314)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 323)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 336)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 332)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10082, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 339)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12290 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 347)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12345 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 348)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_12420 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 349)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_12420.addAssign_operation (GALGAS_bool (true), temp_8.getter_nowhere (SOURCE_FILE ("type-map.galgas", 352)), var_stringTypeIndex_9053, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12643 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 355)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12643.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 356)), var_lstringTypeIndex_9320, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 356)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12290.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-map.galgas", 358)), var_lstringTypeIndex_9320, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 360)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_13003 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 362)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_13003.addAssign_operation (temp_12.getter_nowhere (SOURCE_FILE ("type-map.galgas", 364)), var_lstringTypeIndex_9320, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 366)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 363)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_13268 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 368)) ;
  cEnumerator_propertyInCollectionListAST enumerator_13299 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_13299.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_13411 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13299.current_mPropertyTypeName (HERE), var_attributeTypeIndex_13411 COMMA_SOURCE_FILE ("type-map.galgas", 370)) ;
    }
    GALGAS_bool var_hasGetter_13430 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_13455 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_13482 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13528 (enumerator_13299.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13528.hasCurrentObject ()) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsEqual, enumerator_13528.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_14) {
          var_hasSelector_13482 = GALGAS_bool (true) ;
          enumGalgasBool test_15 = kBoolTrue ;
          if (kBoolTrue == test_15) {
            GALGAS_bool test_16 = var_hasSelector_13482 ;
            if (kBoolTrue == test_16.boolEnum ()) {
              test_16 = var_usesSelectorsInInsertAndSearch_9484 ;
            }
            test_15 = test_16.boolEnum () ;
            if (kBoolTrue == test_15) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticWarning (enumerator_13528.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 378)), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray17  COMMA_SOURCE_FILE ("type-map.galgas", 378)) ;
            }
          }
        }
      }
      enumerator_13528.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_12643.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 382)), var_attributeTypeIndex_13411, enumerator_13299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 382)) ;
    var_typedPropertyList_12345.addAssign_operation (var_attributeTypeIndex_13411, enumerator_13299.current_mPropertyName (HERE), var_hasSetter_13455, var_hasGetter_13430, var_hasSelector_13482  COMMA_SOURCE_FILE ("type-map.galgas", 383)) ;
    var_typesToIncludeInHeaderCompilation_13268.addAssign_operation (var_attributeTypeIndex_13411  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
    var_enumerationDescriptor_9401.addAssign_operation (var_attributeTypeIndex_13411, enumerator_13299.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 385))  COMMA_SOURCE_FILE ("type-map.galgas", 385)) ;
    GALGAS_bool test_18 = var_usesSelectorsInInsertAndSearch_9484 ;
    if (kBoolTrue != test_18.boolEnum ()) {
      test_18 = var_hasSelector_13482 ;
    }
    GALGAS_lstring temp_19 ;
    const enumGalgasBool test_20 = test_18.boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = enumerator_13299.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 387)) ;
    }
    var_insertMethodFormalArgumentList_12290.addAssign_operation (temp_19, var_attributeTypeIndex_13411, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 389)), enumerator_13299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 386)) ;
    GALGAS_bool test_21 = var_usesSelectorsInInsertAndSearch_9484 ;
    if (kBoolTrue != test_21.boolEnum ()) {
      test_21 = var_hasSelector_13482 ;
    }
    GALGAS_lstring temp_22 ;
    const enumGalgasBool test_23 = test_21.boolEnum () ;
    if (kBoolTrue == test_23) {
      temp_22 = enumerator_13299.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_23) {
      temp_22 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 392)) ;
    }
    var_removeMethodFormalArgumentList_13003.addAssign_operation (temp_22, var_attributeTypeIndex_13411, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 394)), enumerator_13299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 391)) ;
    GALGAS_bool test_24 = var_usesSelectorsInInsertAndSearch_9484 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = var_hasSelector_13482 ;
    }
    GALGAS_lstring temp_25 ;
    const enumGalgasBool test_26 = test_24.boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = enumerator_13299.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_26) {
      temp_25 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 398)) ;
    }
    var_optionalMethodSignature_12420.addAssign_operation (GALGAS_bool (false), temp_25, var_attributeTypeIndex_13411, enumerator_13299.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 396)) ;
    enumerator_13299.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_14803 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_14803.hasCurrentObject ()) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = var_setterMap_10106.getter_hasKey (enumerator_14803.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 404)) COMMA_SOURCE_FILE ("type-map.galgas", 404)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_14803.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 405)), GALGAS_string ("the '").add_operation (enumerator_14803.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 405)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 405)), fixItArray28  COMMA_SOURCE_FILE ("type-map.galgas", 405)) ;
      }
    }
    if (kBoolFalse == test_27) {
      {
      var_setterMap_10106.setter_insertOrReplace (enumerator_14803.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 409)), var_insertMethodFormalArgumentList_12290, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 412)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
      }
    }
    enumerator_14803.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_15250 (object->mProperty_mRemoveMethodList, kENUMERATION_UP) ;
  while (enumerator_15250.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = var_setterMap_10106.getter_hasKey (enumerator_15250.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 419)) COMMA_SOURCE_FILE ("type-map.galgas", 419)).boolEnum () ;
      if (kBoolTrue == test_29) {
        TC_Array <C_FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_15250.current_mMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 420)), GALGAS_string ("the '").add_operation (enumerator_15250.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 420)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 420)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 420)), fixItArray30  COMMA_SOURCE_FILE ("type-map.galgas", 420)) ;
      }
    }
    if (kBoolFalse == test_29) {
      {
      var_setterMap_10106.setter_insertOrReplace (enumerator_15250.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 424)), var_removeMethodFormalArgumentList_13003, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 427)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 422)) ;
      }
    }
    enumerator_15250.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_15746 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_15746.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_15788 = var_removeMethodFormalArgumentList_13003 ;
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = enumerator_15746.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_lstring temp_32 ;
        const enumGalgasBool test_33 = var_usesSelectorsInInsertAndSearch_9484.boolEnum () ;
        if (kBoolTrue == test_33) {
          temp_32 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 437)) ;
        }else if (kBoolFalse == test_33) {
          temp_32 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 437)) ;
        }
        var_searchMethodFormalArgumentList_15788.addAssign_operation (temp_32, var_locationTypeProxy_9188, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 439)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
      }
    }
    {
    var_instanceMethodMap_10150.setter_insertKey (enumerator_15746.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 444)), var_searchMethodFormalArgumentList_15788, enumerator_15746.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 448)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 442)) ;
    }
    enumerator_15746.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_16384 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_16384.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16408 = GALGAS_lstring::constructor_new (enumerator_16384.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 454)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 454)), enumerator_16384.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 454))  COMMA_SOURCE_FILE ("type-map.galgas", 454)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16595 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16384.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16595 COMMA_SOURCE_FILE ("type-map.galgas", 455)) ;
    }
    {
    GALGAS_functionSignature temp_34 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 459)) ;
    temp_34.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 459)), var_stringTypeIndex_9053, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
    var_getterMap_10082.setter_insertOrReplace (var_accessorName_16408, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 458)), temp_34, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 460)), GALGAS_bool (true), var_attributeTypeIndex_16595, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 463)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 456)) ;
    }
    enumerator_16384.gotoNextObject () ;
  }
  enumGalgasBool test_35 = kBoolTrue ;
  if (kBoolTrue == test_35) {
    test_35 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 468)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_35) {
      GALGAS_location var_insertOrReplaceLocation_17026 ;
      object->mProperty_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation_17026, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 470)) ;
      {
      var_setterMap_10106.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_17026  COMMA_SOURCE_FILE ("type-map.galgas", 472)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 473)), var_insertMethodFormalArgumentList_12290, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 476)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 471)) ;
      }
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_17456 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_17456.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_17480 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_17456.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 483)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 483)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 483)), enumerator_17456.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 484))  COMMA_SOURCE_FILE ("type-map.galgas", 482)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_17770 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17456.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17770 COMMA_SOURCE_FILE ("type-map.galgas", 486)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_17833 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 491)) ;
    var_accessorFormalArgumentList_17833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 492)), var_attributeTypeIndex_17770, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 492)), enumerator_17456.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 492)) ;
    var_accessorFormalArgumentList_17833.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 493)), var_stringTypeIndex_9053, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 493)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 493)) ;
    {
    var_setterMap_10106.setter_insertOrReplace (var_accessorName_17480, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 496)), var_accessorFormalArgumentList_17833, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 499)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 494)) ;
    }
    enumerator_17456.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_18298 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 504)) ;
  {
  var_optionalMethodMap_18298.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 505)), var_optionalMethodSignature_12420, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 505)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapTypeName, var_getterMap_10082, var_setterMap_10106, var_instanceMethodMap_10150, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 507)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_18907 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 520)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 520)), var_elementTypeProxy_18907 COMMA_SOURCE_FILE ("type-map.galgas", 518)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map.galgas", 528)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 529)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 531)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 532)), var_typedPropertyList_12345, var_constructorMap_9991, var_getterMap_10082, var_setterMap_10106, var_instanceMethodMap_10150, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 538)), var_optionalMethodMap_18298, var_enumerationDescriptor_9401, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 541)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 541)) COMMA_SOURCE_FILE ("type-map.galgas", 541)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 541)) COMMA_SOURCE_FILE ("type-map.galgas", 541)), var_argumentTypeListForAddAssignWithFieldExpressionList_12643, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 543)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 544)), object->mProperty_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 546)), GALGAS_bool (false), var_elementTypeProxy_18907, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mProperty_mMapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 550)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 524)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

