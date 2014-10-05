#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-Xcode_PBXFileReference_Application.h"
#include "class-Xcode_PBXFileReference_CompiledMachOExecutable.h"
#include "class-Xcode_PBXFileReference_cppSourceFile.h"
#include "class-abstractCategoryMethodForGeneration.h"
#include "class-abstractCategoryModifierForGeneration.h"
#include "class-abstractCategoryReaderForGeneration.h"
#include "class-arrayTypeForGeneration.h"
#include "class-categoryMethodForGeneration.h"
#include "class-categoryModifierForGeneration.h"
#include "class-categoryReaderForGeneration.h"
#include "class-classTypeForGeneration.h"
#include "class-enumTypeForGeneration.h"
#include "class-externTypeDeclarationForGeneration.h"
#include "class-filewrapperDeclarationForGeneration.h"
#include "class-functionImplementationForGeneration.h"
#include "class-functionPrototypeDeclarationForGeneration.h"
#include "class-grammarInstructionSyntaxDirectedTranslationResultNone.h"
#include "class-graphDeclarationForGeneration.h"
#include "class-lexiqueDeclarationForGeneration.h"
#include "class-listTypeForGeneration.h"
#include "class-listmapTypeForGeneration.h"
#include "class-mapProxyTypeForGeneration.h"
#include "class-mapTypeForGeneration.h"
#include "class-nonTerminalInstructionForGrammarAnalysis.h"
#include "class-nonterminalCallInstruction.h"
#include "class-nonterminalInstructionForGeneration.h"
#include "class-onceFunctionDeclarationForGeneration.h"
#include "class-optionComponentForGeneration.h"
#include "class-overrideCategoryReaderForGeneration.h"
#include "class-overridingCategoryMethodForGeneration.h"
#include "class-overridingCategoryModifierForGeneration.h"
#include "class-parseLoopInstruction.h"
#include "class-parseLoopInstructionForGeneration.h"
#include "class-parseRewindInstruction.h"
#include "class-parseRewindInstructionForGeneration.h"
#include "class-parseWhenInstruction.h"
#include "class-parseWhenInstructionForGeneration.h"
#include "class-primitiveTypeForGeneration.h"
#include "class-programComponentForGeneration.h"
#include "class-repeatInstruction.h"
#include "class-repeatInstructionForGeneration.h"
#include "class-repeatInstructionForGrammarAnalysis.h"
#include "class-routineImplementationForGeneration.h"
#include "class-routinePrototypeDeclarationForGeneration.h"
#include "class-selectInstruction.h"
#include "class-selectInstructionForGeneration.h"
#include "class-selectInstructionForGrammarAnalysis.h"
#include "class-semanticInstructionAST.h"
#include "class-semanticInstructionForGeneration.h"
#include "class-semanticTypeForGeneration.h"
#include "class-sortedListTypeForGeneration.h"
#include "class-structTypeForGeneration.h"
#include "class-syntaxInstructionForGeneration.h"
#include "class-syntaxSendInstruction.h"
#include "class-terminalCheckInstruction.h"
#include "class-terminalCheckInstructionForGeneration.h"
#include "class-terminalInstructionForGrammarAnalysis.h"
#include "class-uniqueMapTypeForGeneration.h"
#include "enum-formalArgumentPassingModeAST.h"
#include "enum-headerKind.h"
#include "enum-predefinedTypeKindEnum.h"
#include "filewrapper-optionGenerationTemplates.h"
#include "filewrapper-predefinedTypeGenerationTemplate.h"
#include "filewrapper-semanticComponentGenerationTemplate.h"
#include "filewrapper-typeGenerationTemplate.h"
#include "func-compareSyntaxSignature.h"
#include "func-compilerCppName.h"
#include "func-getPBXFileReferenceKey.h"
#include "func-syntaxSignatureOfInstructionList.h"
#include "getter-semanticDeclarationForGeneration-appendPrimitiveTypeDeclaration.h"
#include "getter-semanticDeclarationForGeneration-appendTypeGenericImplementation.h"
#include "getter-semanticDeclarationForGeneration-headerKind.h"
#include "getter-semanticDeclarationForGeneration-isPredefined.h"
#include "getter-semanticInstructionForGeneration-compareSyntaxInstruction.h"
#include "list-actualParameterListForGeneration.h"
#include "list-branchListForGrammarAnalysis.h"
#include "list-enumConstantListForGeneration.h"
#include "list-enumerationDescriptorList.h"
#include "list-filewrapperTemplateListForGeneration.h"
#include "list-formalInputParameterListForGeneration.h"
#include "list-formalParameterListForGeneration.h"
#include "list-functionSignature.h"
#include "list-graphInsertModifierList.h"
#include "list-insertMethodListAST.h"
#include "list-listOfSemanticInstructionListForGeneration.h"
#include "list-listOfSyntaxInstructionList.h"
#include "list-mapOverrideList.h"
#include "list-mapRemoveMethodListAST.h"
#include "list-mapSearchMethodListAST.h"
#include "list-semanticInstructionListForGeneration.h"
#include "list-sortDescriptorListForGeneration.h"
#include "list-syntaxInstructionList.h"
#include "list-syntaxInstructionListForGrammarAnalysis.h"
#include "list-templateInstructionListForGeneration.h"
#include "list-terminalCheckAssignementList.h"
#include "list-typedAttributeList.h"
#include "list-unifiedTypeMapProxyList.h"
#include "map-classMethodMap.h"
#include "map-commandLineOptionMap.h"
#include "map-constructorMap.h"
#include "map-instanceMethodMap.h"
#include "map-mapAutomatonActionMap.h"
#include "map-mapAutomatonStateMap.h"
#include "map-modifierMap.h"
#include "map-nonTerminalSymbolMapForGrammarAnalysis.h"
#include "map-nonterminalSymbolLabelMapForGrammarAnalysis.h"
#include "map-readerMap.h"
#include "map-terminalSymbolsMapForGrammarAnalysis.h"
#include "map-wrapperDirectoryMap.h"
#include "map-wrapperFileMap.h"
#include "mapproxy-unifiedTypeMapProxy.h"
#include "method-Xcode_PBXFileReference_abstract-buildXcodeProject.h"
#include "method-Xcode_productFileReference-productExtension.h"
#include "method-semanticDeclarationForGeneration-appendDeclaration1.h"
#include "method-semanticDeclarationForGeneration-appendDeclaration2.h"
#include "method-semanticDeclarationForGeneration-appendSpecificFiles.h"
#include "method-semanticDeclarationForGeneration-appendSpecificImplementation.h"
#include "method-semanticInstructionForGeneration-appendSyntaxSignature.h"
#include "method-syntaxInstructionAST-transformInstruction.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName.h"
#include "method-unifiedTypeMapProxy-addHeaderFileName1.h"
#include "proc-generateCategoryMethod.h"
#include "proc-generateCategoryModifier.h"
#include "proc-generateCategoryReader.h"
#include "proc-generateFunction.h"
#include "proc-generateProcedure.h"
#include "proc-generateWrapperContents.h"
#include "proc-recursivlyEnumerateRegularFile.h"
#include "proc-templateCodeGenerationForListInstruction.h"
#include "proc-transformInstructionList.h"
#include "sortedlist-keySortedList.h"
#include "sortedlist-mapStateSortedList.h"
#include "uniquemap-unifiedTypeMap.h"


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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (inCompiler, object->mAttribute_mRoutineName, object->mAttribute_mFormalArgumentList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1201))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1212)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1223)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1220))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 1230)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (inCompiler, object->mAttribute_mFunctionName, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1240)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1241)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1238))) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1253)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1254)), object->mAttribute_mCppPreDeclarationCode, object->mAttribute_mCppClassCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1252))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1259)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1260)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1261)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1262)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1263)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1264)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1265)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1266)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1267)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1268)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1269)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1271)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1258)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1258)) ;
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
  result_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1281)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1282)), object->mAttribute_mTypeProxy.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1283)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1284)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1280))) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1296)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1297)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1298)), object->mAttribute_mDimension COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1295))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1302)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1303)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1304)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1305)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1306)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1307)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1308)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1309)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1310)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1311)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1312)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1314)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1301)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                             categoryMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@arrayTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1324)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1325)) ;
  GALGAS_stringlist var_suffixList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 1327)) ;
  GALGAS_uint var_idx = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mAttribute_mDimension.isValid ()) {
    uint32_t variant_50258 = object->mAttribute_mDimension.uintValue () ;
    bool loop_50258 = true ;
    while (loop_50258) {
      loop_50258 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).isValid () ;
      if (loop_50258) {
        loop_50258 = GALGAS_bool (kIsStrictInf, var_idx.objectCompare (object->mAttribute_mDimension)).boolValue () ;
      }
      if (loop_50258 && (0 == variant_50258)) {
        loop_50258 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 1329)) ;
      }
      if (loop_50258) {
        variant_50258 -- ;
        var_suffixList.addAssign_operation (var_idx.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 1330))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1330)) ;
        var_idx.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1331)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1334)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1335)), object->mAttribute_mElementTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1336)), object->mAttribute_mDimension, var_suffixList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1333))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                    categoryMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                           GALGAS_string & outArgument_outHeader,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_50973 (object->mAttribute_mAssociatedListTypedAttributeList, kEnumeration_up) ;
  while (enumerator_50973.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_50973.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1351)) ;
    enumerator_50973.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1355)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1356)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1354))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1359)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1360)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1361)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1362)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1363)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1364)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1365)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1366)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1367)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1368)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1369)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1371)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1358)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                             categoryMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outImplementation,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1381)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1382)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1384)), object->mAttribute_mAssociatedListTypeIndex.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1385)), object->mAttribute_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1383))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                    categoryMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1403)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1404)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1402))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1409)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1410)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1411)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1412)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1413)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1414)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1415)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1416)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1417)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1418)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1419)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1421)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1408)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                             categoryMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                       const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                       const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                       GALGAS_string & outArgument_outHeader,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_53799 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_53799.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_53799.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1433)) ;
    enumerator_53799.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1437)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1438)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1436))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                             categoryMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_string & outArgument_outImplementation,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1449)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1450)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1452)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mRemoveMethodList, object->mAttribute_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1451))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                    categoryMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@uniqueMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_55037 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_55037.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_55037.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1471)) ;
    enumerator_55037.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1475)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1476)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1474))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1481)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1482)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1483)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1484)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1485)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1486)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1487)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1488)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1489)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1490)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1491)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1493)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1480)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                             categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@uniqueMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                             const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1505)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1506)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1504))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                             categoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_uniqueMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@uniqueMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_uniqueMapTypeForGeneration * object = (const cPtr_uniqueMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_uniqueMapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1517)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("semanticGeneration.galgas", 1518)) ;
  cEnumerator_mapAutomatonStateMap enumerator_56673 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_56673.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_56673.current_lkey (HERE).mAttribute_string, enumerator_56673.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1520)) ;
    enumerator_56673.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1523)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1522))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_uniqueMapTypeForGeneration.mSlotID,
                                                    categoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_uniqueMapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_uniqueMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sortedListTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_sortedlistTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1544)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1545)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1543))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1549)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1550)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1551)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1552)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1553)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1554)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1555)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1556)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1557)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1558)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1559)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1561)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1548)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1548)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                             categoryMethod_sortedListTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sortedListTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@sortedListTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sortedListTypeForGeneration * object = (const cPtr_sortedListTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_58392 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_58392.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_58392.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1572)) ;
    enumerator_58392.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1574)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1575)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_sortedlistTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1577)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSortDescriptorList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1576))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sortedListTypeForGeneration.mSlotID,
                                                    categoryMethod_sortedListTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sortedListTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sortedListTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_59096 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1591)).isValidAndTrue () ;
  if (enumerator_59096.hasCurrentObject () && bool_0) {
    while (enumerator_59096.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_59096.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1592)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_59096.gotoNextObject () ;
      if (enumerator_59096.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1591)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1595)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1596)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1594))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1601)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1602)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1603)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1604)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1605)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1606)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1607)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1608)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1609)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1610)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1611)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1612)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1600)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                             categoryMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@enumTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_60225 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1624)).isValidAndTrue () ;
  if (enumerator_60225.hasCurrentObject () && bool_0) {
    while (enumerator_60225.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_60225.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1625)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_60225.gotoNextObject () ;
      if (enumerator_60225.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1624)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_60354 (object->mAttribute_mConstantList, kEnumeration_up) ;
  while (enumerator_60354.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_60396 (enumerator_60354.current_mAssociatedValueTypeList (HERE), kEnumeration_up) ;
    while (enumerator_60396.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_60396.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1629)) ;
      enumerator_60396.gotoNextObject () ;
    }
    enumerator_60354.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1633)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1634)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1632))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                             categoryMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@enumTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_60955 (object->mAttribute_mConstantList, kEnumeration_up) ;
  bool bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1647)).isValidAndTrue () ;
  if (enumerator_60955.hasCurrentObject () && bool_0) {
    while (enumerator_60955.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues = GALGAS_bool (kIsStrictSup, enumerator_60955.current_mAssociatedValueTypeList (HERE).reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1648)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_60955.gotoNextObject () ;
      if (enumerator_60955.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1647)).isValidAndTrue () ;
      }
    }
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1650)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1652)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1653)), object->mAttribute_mConstantList, var_hasAssociatedValues COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1651))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                    categoryMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@mapProxyTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1671)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1672)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1670))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1675)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1676)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1677)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1678)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1679)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1680)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1681)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1682)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1683)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1684)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1685)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1686)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1674)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                             categoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@mapProxyTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1696)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1697)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1699)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1700)), object->mAttribute_mAssociatedMapTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1701)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1698))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                    categoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@structTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_63346 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_63346.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_63346.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1715)) ;
    enumerator_63346.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_structTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1719)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1720)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1722)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1718))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1725)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1726)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1727)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1728)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1729)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1730)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1731)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1732)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1733)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1734)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1735)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1737)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1724)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1724)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                             categoryMethod_structTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_structTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@structTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_structTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structTypeForGeneration * object = (const cPtr_structTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_structTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1747)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_structTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1749)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1750)), object->mAttribute_mTypedAttributeList, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1752)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1748))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_structTypeForGeneration.mSlotID,
                                                    categoryMethod_structTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_structTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_structTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@listTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1764)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1765)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1763))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1769)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1770)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1771)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1772)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1773)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1774)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1775)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1776)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1777)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1778)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1779)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1781)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1768)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1768)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                             categoryMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@listTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_65974 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_65974.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_65974.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1792)) ;
    enumerator_65974.gotoNextObject () ;
  }
  categoryMethod_addHeaderFileName (object->mAttribute_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1794)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1795)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1797)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1798)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1796))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                    categoryMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@graphDeclarationForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1811)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1812)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1810))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1815)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1816)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1817)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1818)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1819)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1820)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1821)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1822)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1823)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1824)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1825)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1827)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1814)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1814)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                             categoryMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@graphDeclarationForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1837)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1838)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1839)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1842)), object->mAttribute_mAssociatedListTypeProxy, object->mAttribute_mInsertModifierList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1840))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                    categoryMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1855)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 1855)).boolEnum () ;
  if (kBoolTrue == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1856)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1862)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1862)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1860)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1861)), temp_1, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1865)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1859))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1868)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1869)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1870)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1871)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1872)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1873)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1874)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1875)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1876)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1877)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1878)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1879)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1867)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1867)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                             categoryMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_bool constinArgument_inGenerateForGalgas_33_,
                                                                         const GALGAS_string constinArgument_inOutputDirectory,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedAttributeList enumerator_69451 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_69451.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_69451.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1891)) ;
    enumerator_69451.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mAttribute_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1898)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1898)) ;
    }
    GALGAS_string var_part_31_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1896)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1897)), temp_1, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1895))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1906)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1906)) ;
    }
    GALGAS_string var_part_32_ = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1904)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1905)), temp_3, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1903))) ;
    GALGAS_string var_headerFileName = GALGAS_string ("separateHeaderFor_").add_operation (object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1911)) ;
    {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = constinArgument_inGenerateForGalgas_33_.boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string ("/../user-headers") ;
    }else if (kBoolFalse == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1913)), var_headerFileName, GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), var_part_31_, GALGAS_string ("\n"
      "\n"), var_part_32_, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1912)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1921)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1921)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1926)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1926)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1924)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1925)), temp_7, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1923))) ;
    GALGAS_string temp_9 ;
    const enumGalgasBool test_10 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1934)).boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_10) {
      temp_9 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1934)) ;
    }
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1932)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1933)), temp_9, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mIsAbstract COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1931)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1931)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                             categoryMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1948)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mSuperClass.reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 1952)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mAttribute_mSuperClass.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1952)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1950)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1951)), temp_0, object->mAttribute_mTypedAttributeList, object->mAttribute_mAllTypedAttributeList, object->mAttribute_mAllTypedAttributeList.reader_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mAttribute_mAllTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1955)).substract_operation (object->mAttribute_mTypedAttributeList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 1955)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1955))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1955)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1955)), object->mAttribute_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mAttribute_mTypeProxy.reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1957)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1949))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                    categoryMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@routineImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_routineImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                            const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                            GALGAS_string & outArgument_outImplementation,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_routineImplementationForGeneration * object = (const cPtr_routineImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_routineImplementationForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mHasHeader.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("proc-").add_operation (object->mAttribute_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1970))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1970)) ;
  }
  GALGAS_string var_code ;
  {
  routine_generateProcedure (object->mAttribute_mGenerateStatic, GALGAS_string ("routine_").add_operation (object->mAttribute_mRoutineName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1974)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1974)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mRoutineInstructionList, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1972)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (inCompiler, object->mAttribute_mRoutineName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1985))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_routineImplementationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_routineImplementationForGeneration.mSlotID,
                                                    categoryMethod_routineImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_routineImplementationForGeneration_appendSpecificImplementation (defineCategoryMethod_routineImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@functionImplementationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_functionImplementationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionImplementationForGeneration * object = (const cPtr_functionImplementationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_functionImplementationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1997))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1997)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("function_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 1999)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1999)), ioArgument_ioInclusionSet, object->mAttribute_mFormalArgumentList, object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 1998)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, object->mAttribute_mFormalArgumentList, object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2013)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2009))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_functionImplementationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_functionImplementationForGeneration.mSlotID,
                                                    categoryMethod_functionImplementationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_functionImplementationForGeneration_appendSpecificImplementation (defineCategoryMethod_functionImplementationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@onceFunctionDeclarationForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                              const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                              GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                              GALGAS_string & outArgument_outImplementation,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationForGeneration * object = (const cPtr_onceFunctionDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("func-").add_operation (object->mAttribute_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2023))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2023)) ;
  GALGAS_string var_code ;
  {
  routine_generateFunction (GALGAS_string ("onceFunction_").add_operation (object->mAttribute_mFunctionName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2025)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2025)), ioArgument_ioInclusionSet, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2027)), object->mAttribute_mFunctionInstructionList, GALGAS_string ("C_Compiler"), object->mAttribute_mReturnType, object->mAttribute_mResultVariableCppName, GALGAS_bool (true), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2024)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (inCompiler, object->mAttribute_mFunctionName, var_code, GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2038)), object->mAttribute_mReturnType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2039)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2035))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_onceFunctionDeclarationForGeneration.mSlotID,
                                                    categoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_onceFunctionDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@abstractCategoryMethodForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodForGeneration * object = (const cPtr_abstractCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2053)), object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2052))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@abstractCategoryMethodForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2062)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                  categoryReader_abstractCategoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryMethodForGeneration_headerKind (defineCategoryReader_abstractCategoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@abstractCategoryMethodForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodForGeneration * object = (const cPtr_abstractCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)).add_operation (object->mAttribute_mAbstractCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2071)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2072)) ;
  cEnumerator_formalParameterListForGeneration enumerator_75807 (object->mAttribute_mAbstractCategoryMethodFormalParameterList, kEnumeration_up) ;
  while (enumerator_75807.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_75807.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2074)) ;
    enumerator_75807.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType, object->mAttribute_mAbstractCategoryMethodName, object->mAttribute_mAbstractCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2076))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryMethodForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@categoryMethodForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2086)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                  categoryReader_categoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryMethodForGeneration_headerKind (defineCategoryReader_categoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@categoryMethodForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodForGeneration * object = (const cPtr_categoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2096)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2095))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2102)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2101))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                             categoryMethod_categoryMethodForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryMethodForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@categoryMethodForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodForGeneration * object = (const cPtr_categoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_categoryMethodFormalParameterList = object->mAttribute_mCategoryMethodFormalParameterList ;
    {
    var_categoryMethodFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2118)), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticGeneration.galgas", 2119)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2121))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2121)), GALGAS_string ("inObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2125)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryMethod_").add_operation (object->mAttribute_mCategoryMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2128)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2128)), ioArgument_ioInclusionSet, var_categoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2126)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2140)), object->mAttribute_mCategoryMethodName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2139))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2145)) ;
    cEnumerator_formalParameterListForGeneration enumerator_78423 (object->mAttribute_mCategoryMethodFormalParameterList, kEnumeration_up) ;
    while (enumerator_78423.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_78423.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2147)) ;
      enumerator_78423.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2151)).isValid ()) {
      uint32_t variant_78583 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2151)).uintValue () ;
      bool loop_78583 = true ;
      while (loop_78583) {
        loop_78583 = var_searching.isValid () ;
        if (loop_78583) {
          loop_78583 = var_searching.boolValue () ;
        }
        if (loop_78583 && (0 == variant_78583)) {
          loop_78583 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2151)) ;
        }
        if (loop_78583) {
          variant_78583 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2152)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2152)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2152)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)).reader_hasKey (object->mAttribute_mCategoryMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2154)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)).add_operation (object->mAttribute_mCategoryMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)) ;
    GALGAS_string var_methodImplementation ;
    {
    routine_generateCategoryMethod (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2163)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2173)), object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2172))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryMethodForGeneration.mSlotID,
                                                    categoryMethod_categoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@overridingCategoryMethodForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overridingCategoryMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2184)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryMethodForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration.mSlotID,
                                  categoryReader_overridingCategoryMethodForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryMethodForGeneration_headerKind (defineCategoryReader_overridingCategoryMethodForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@overridingCategoryMethodForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodForGeneration * object = (const cPtr_overridingCategoryMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodForGeneration) ;
  GALGAS_string var_methodImplementation ;
  {
  routine_generateCategoryMethod (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryMethodName, object->mAttribute_mCategoryMethodFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2193)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2203)), object->mAttribute_mCategoryMethodName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2202))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingCategoryMethodForGeneration.mSlotID,
                                                    categoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation (defineCategoryMethod_overridingCategoryMethodForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@abstractCategoryModifierForGeneration headerKind'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2216)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                  categoryReader_abstractCategoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryModifierForGeneration_headerKind (defineCategoryReader_abstractCategoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@abstractCategoryModifierForGeneration appendDeclaration1'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                        GALGAS_string & outArgument_outHeader,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierForGeneration * object = (const cPtr_abstractCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2225)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2224))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryModifierForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Overriding category method '@abstractCategoryModifierForGeneration appendSpecificImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierForGeneration * object = (const cPtr_abstractCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)).add_operation (object->mAttribute_mAbstractCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2237)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2238)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2240)), object->mAttribute_mAbstractCategoryModifierName, object->mAttribute_mAbstractCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2239))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryModifierForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@categoryModifierForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2249)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                  categoryReader_categoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryModifierForGeneration_headerKind (defineCategoryReader_categoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@categoryModifierForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierForGeneration * object = (const cPtr_categoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2259)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2258))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2265)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2264))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                             categoryMethod_categoryModifierForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryModifierForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@categoryModifierForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierForGeneration * object = (const cPtr_categoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalParameterListForGeneration var_categoryModifierFormalParameterList = object->mAttribute_mCategoryModifierFormalParameterList ;
    {
    var_categoryModifierFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2281)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticGeneration.galgas", 2282)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2284))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2284)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2280)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2288)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mCategoryModifierName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2291)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2291)), ioArgument_ioInclusionSet, var_categoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2289)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2303)), object->mAttribute_mCategoryModifierName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2310)).isValid ()) {
      uint32_t variant_84078 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2310)).uintValue () ;
      bool loop_84078 = true ;
      while (loop_84078) {
        loop_84078 = var_searching.isValid () ;
        if (loop_84078) {
          loop_84078 = var_searching.boolValue () ;
        }
        if (loop_84078 && (0 == variant_84078)) {
          loop_84078 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2310)) ;
        }
        if (loop_84078) {
          variant_84078 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2311)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2311)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2311)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2312)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2312)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2312)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2313)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)) ;
    categoryMethod_addHeaderFileName (var_baseType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2322)) ;
    GALGAS_string var_modifierImplementation ;
    {
    routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2324)), GALGAS_string::makeEmptyString (), object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_modifierImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2323)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2333)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, var_modifierImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2332))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryModifierForGeneration.mSlotID,
                                                    categoryMethod_categoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@overridingCategoryModifierForGeneration headerKind'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overridingCategoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2344)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overridingCategoryModifierForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration.mSlotID,
                                  categoryReader_overridingCategoryModifierForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overridingCategoryModifierForGeneration_headerKind (defineCategoryReader_overridingCategoryModifierForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@overridingCategoryModifierForGeneration appendSpecificImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierForGeneration * object = (const cPtr_overridingCategoryModifierForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierForGeneration) ;
  GALGAS_string var_methodImplementation ;
  {
  routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2354)), object->mAttribute_mBaseTypeName, object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2353)) ;
  }
  GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2364)).isValid ()) {
    uint32_t variant_85838 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2364)).uintValue () ;
    bool loop_85838 = true ;
    while (loop_85838) {
      loop_85838 = var_searching.isValid () ;
      if (loop_85838) {
        loop_85838 = var_searching.boolValue () ;
      }
      if (loop_85838 && (0 == variant_85838)) {
        loop_85838 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2364)) ;
      }
      if (loop_85838) {
        variant_85838 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2365)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2365)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2365)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2366)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2367)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2375)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2376)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2378)), object->mAttribute_mCategoryModifierName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2377))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingCategoryModifierForGeneration.mSlotID,
                                                    categoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation (defineCategoryMethod_overridingCategoryModifierForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@abstractCategoryReaderForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_abstractCategoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2391)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_abstractCategoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                  categoryReader_abstractCategoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_abstractCategoryReaderForGeneration_headerKind (defineCategoryReader_abstractCategoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@abstractCategoryReaderForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderForGeneration * object = (const cPtr_abstractCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2400)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2399))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                             categoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_ (defineCategoryMethod_abstractCategoryReaderForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@abstractCategoryReaderForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderForGeneration * object = (const cPtr_abstractCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (object->mAttribute_mAbstractCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2414)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2415)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_87712 (object->mAttribute_mAbstractCategoryReaderFormalParameterList, kEnumeration_up) ;
  while (enumerator_87712.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_87712.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2417)) ;
    enumerator_87712.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2420)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2419))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_abstractCategoryReaderForGeneration.mSlotID,
                                                    categoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_abstractCategoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@categoryReaderForGeneration headerKind'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2430)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_categoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                  categoryReader_categoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_categoryReaderForGeneration_headerKind (defineCategoryReader_categoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@categoryReaderForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                              GALGAS_string & outArgument_outHeader,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderForGeneration * object = (const cPtr_categoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2440)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2443)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2447)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                             categoryMethod_categoryReaderForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderForGeneration_appendDeclaration_31_ (defineCategoryMethod_categoryReaderForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@categoryReaderForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                     const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                     GALGAS_string & outArgument_outImplementation,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderForGeneration * object = (const cPtr_categoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mImplementedAsFunction.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_formalInputParameterListForGeneration var_categoryReaderFormalParameterList = object->mAttribute_mCategoryReaderFormalParameterList ;
    {
    var_categoryReaderFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2464)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2467))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2467)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2463)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)) ;
    GALGAS_string var_code ;
    {
    routine_generateFunction (GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mCategoryReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2473)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2473)), ioArgument_ioInclusionSet, var_categoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2472)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2484)), object->mAttribute_mCategoryReaderName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2483))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2489)) ;
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2490)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_90294 (object->mAttribute_mCategoryReaderFormalParameterList, kEnumeration_up) ;
    while (enumerator_90294.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_90294.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2492)) ;
      enumerator_90294.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMapProxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2496)).isValid ()) {
      uint32_t variant_90454 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2496)).uintValue () ;
      bool loop_90454 = true ;
      while (loop_90454) {
        loop_90454 = var_searching.isValid () ;
        if (loop_90454) {
          loop_90454 = var_searching.boolValue () ;
        }
        if (loop_90454 && (0 == variant_90454)) {
          loop_90454 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2496)) ;
        }
        if (loop_90454) {
          variant_90454 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2497)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2497)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2497)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2498)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2498)).reader_hasKey (object->mAttribute_mCategoryReaderName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2498)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2499)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2507)) ;
    GALGAS_string var_categoryReaderCode ;
    {
    routine_generateCategoryReader (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2516)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2508)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2521)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2520))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_categoryReaderForGeneration.mSlotID,
                                                    categoryMethod_categoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_categoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@overrideCategoryReaderForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_overrideCategoryReaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2533)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_overrideCategoryReaderForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration.mSlotID,
                                  categoryReader_overrideCategoryReaderForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_overrideCategoryReaderForGeneration_headerKind (defineCategoryReader_overrideCategoryReaderForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@overrideCategoryReaderForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideCategoryReaderForGeneration * object = (const cPtr_overrideCategoryReaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideCategoryReaderForGeneration) ;
  GALGAS_string var_categoryReaderCode ;
  {
  routine_generateCategoryReader (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mOverridingCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2550)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2542)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2555)), object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2554))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideCategoryReaderForGeneration.mSlotID,
                                                    categoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation (defineCategoryMethod_overrideCategoryReaderForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@optionComponentForGeneration isPredefined'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_optionComponentForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  result_outResult = object->mAttribute_mIsPredefined ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_optionComponentForGeneration_isPredefined (void) {
  enterCategoryReader_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                    categoryReader_optionComponentForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_optionComponentForGeneration_isPredefined (defineCategoryReader_optionComponentForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category reader '@optionComponentForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2575)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2575)) ;
  }
  result_outResult = temp_0 ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_optionComponentForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                  categoryReader_optionComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_optionComponentForGeneration_headerKind (defineCategoryReader_optionComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@optionComponentForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                               GALGAS_string & outArgument_outHeader,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2586))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                             categoryMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineCategoryMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@optionComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                      GALGAS_string & outArgument_outImplementation,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mAttribute_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2604))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2604)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2605))) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                    categoryMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineCategoryMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@optionComponentForGeneration appendSpecificFiles'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_string constinArgument_inProductDirectory,
                                                                             GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 2620)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mAttribute_mIsPredefined.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2620)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2621)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2624)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2624)), GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2627))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2631))), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2622)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2636)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2639)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2639)), GALGAS_string ("//"), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2643)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2643)), object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2642))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2637)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                           categoryMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineCategoryMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category reader '@lexiqueDeclarationForGeneration headerKind'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_lexiqueDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2660)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_lexiqueDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                  categoryReader_lexiqueDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_lexiqueDeclarationForGeneration_headerKind (defineCategoryReader_lexiqueDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexiqueDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  outArgument_outHeader = object->mAttribute_mHeaderContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                             categoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_lexiqueDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@lexiqueDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outHeader,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2677))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2677)) ;
  outArgument_outHeader = object->mAttribute_mCppContents ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                                    categoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@lexiqueDeclarationForGeneration appendSpecificFiles'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_string constinArgument_inProductDirectory,
                                                                                GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueDeclarationForGeneration * object = (const cPtr_lexiqueDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueDeclarationForGeneration) ;
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2687)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2687))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2687)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2690)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2690)), GALGAS_string ("//"), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaHeader, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2688)) ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2699)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2699))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2699)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2702)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2702)), GALGAS_string ("//"), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaImplementation, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2700)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (void) {
  enterCategoryMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_lexiqueDeclarationForGeneration.mSlotID,
                                           categoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_lexiqueDeclarationForGeneration_appendSpecificFiles (defineCategoryMethod_lexiqueDeclarationForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@programComponentForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_programComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2716)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_programComponentForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                  categoryReader_programComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_programComponentForGeneration_headerKind (defineCategoryReader_programComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@programComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_programComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_programComponentForGeneration * object = (const cPtr_programComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_programComponentForGeneration) ;
  ioArgument_ioInclusionSet.dotAssign_operation (object->mAttribute_mInclusionSet  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2725)) ;
  outArgument_outImplementation = object->mAttribute_mImplementationString ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_programComponentForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_programComponentForGeneration.mSlotID,
                                                    categoryMethod_programComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_programComponentForGeneration_appendSpecificImplementation (defineCategoryMethod_programComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category reader '@filewrapperDeclarationForGeneration headerKind'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_filewrapperDeclarationForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2736)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_filewrapperDeclarationForGeneration_headerKind (void) {
  enterCategoryReader_headerKind (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                  categoryReader_filewrapperDeclarationForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_filewrapperDeclarationForGeneration_headerKind (defineCategoryReader_filewrapperDeclarationForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@filewrapperDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  GALGAS_stringlist var_regularFileIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2774)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2775)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2776)) ;
  GALGAS_stringlist var_directoryIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2777)) ;
  {
  routine_recursivlyEnumerateRegularFile (object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2778)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, object->mAttribute_mFilewrapperName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2786))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_100206 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_100206.hasCurrentObject ()) {
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, object->mAttribute_mFilewrapperName, enumerator_100206.current_mFilewrapperTemplateName (HERE), enumerator_100206.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2795)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2795)) ;
    enumerator_100206.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                             categoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_ (defineCategoryMethod_filewrapperDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@filewrapperDeclarationForGeneration appendSpecificImplementation'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                             const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                             GALGAS_string & outArgument_outImplementation,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationForGeneration * object = (const cPtr_filewrapperDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationForGeneration) ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2895))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2895)) ;
  GALGAS_string var_filewrapperImplementation = GALGAS_string::makeEmptyString () ;
  {
  routine_generateWrapperContents (object->mAttribute_mFilewrapperName, GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_filewrapperImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2897)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, object->mAttribute_mFilewrapperName, var_filewrapperImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2905))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_105576 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_105576.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2914)) ;
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2915))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2915)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_105879 (enumerator_105576.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_105879.hasCurrentObject ()) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_105879.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2917)) ;
      enumerator_105879.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_105576.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList, ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, var_useColumnMarker, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2920)) ;
    }
    outArgument_outImplementation.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, object->mAttribute_mFilewrapperName, enumerator_105576.current_mFilewrapperTemplateName (HERE), enumerator_105576.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet, var_useColumnMarker, var_generatedCodeForInstructionList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2929)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2929)) ;
    enumerator_105576.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_filewrapperDeclarationForGeneration.mSlotID,
                                                    categoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation (defineCategoryMethod_filewrapperDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@primitiveTypeForGeneration appendPrimitiveTypeDeclaration'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outHeader ; // Returned variable
  const cPtr_primitiveTypeForGeneration * object = (const cPtr_primitiveTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_primitiveTypeForGeneration) ;
  if (object->mAttribute_mKind.isValid ()) {
    switch (object->mAttribute_mKind.enumValue ()) {
    case GALGAS_predefinedTypeKindEnum::kNotBuilt:
      break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2997))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2999))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3001))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3003))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3005))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3007))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3009))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3011))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3013))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3015))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3017))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3019))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3021))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3023))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3025))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3027))) ;
      } break ;
    case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application: {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3029))) ;
      } break ;
    }
  }
  result_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3032)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3033)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3034)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3035)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3036)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3037)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3038)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3039)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3040)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3041)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3042)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3043)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3031)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 3031)) ;
//---
  return result_outHeader ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (void) {
  enterCategoryReader_appendPrimitiveTypeDeclaration (kTypeDescriptor_GALGAS_primitiveTypeForGeneration.mSlotID,
                                                      categoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration (defineCategoryReader_primitiveTypeForGeneration_appendPrimitiveTypeDeclaration, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@nonterminalInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 53)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 54))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 49))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 49)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                             categoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_nonterminalInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@terminalCheckInstructionForGeneration appendSyntaxSignature'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                        const GALGAS_string /* constinArgument_inPosfix */,
                                                                                        GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 66)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 68)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 69))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                             categoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_terminalCheckInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@repeatInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_repeated_5F_instructionList = function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_m_5F_repeated_5F_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 77)) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 78)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4046 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4046.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4046.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4046.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4046.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_repeatInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_repeated_5F_instructionList, object->mAttribute_mEndOfRepeatedInstructions, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 85)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                             categoryMethod_repeatInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_repeatInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@selectInstructionForGeneration appendSyntaxSignature'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                 const GALGAS_string constinArgument_inPosfix,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 99)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4880 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4880.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4880.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)), enumerator_4880.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 101)) ;
    enumerator_4880.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 105))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 105)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                             categoryMethod_selectInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_selectInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@parseRewindInstructionForGeneration appendSyntaxSignature'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                      const GALGAS_string constinArgument_inPosfix,
                                                                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstructionForGeneration * object = (const cPtr_parseRewindInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstructionForGeneration) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList ;
  GALGAS_location joker_5617_0 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_5617_0, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 118)) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseRewindInstructionForGeneration.mSlotID,
                                             categoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseRewindInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseLoopInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstructionForGeneration * object = (const cPtr_parseLoopInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 127))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 127)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseLoopInstructionForGeneration.mSlotID,
                                             categoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseLoopInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@parseWhenInstructionForGeneration appendSyntaxSignature'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                    const GALGAS_string constinArgument_inPosfix,
                                                                                    GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstructionForGeneration * object = (const cPtr_parseWhenInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstructionForGeneration) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 135))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 135)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (void) {
  enterCategoryMethod_appendSyntaxSignature (kTypeDescriptor_GALGAS_parseWhenInstructionForGeneration.mSlotID,
                                             categoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstructionForGeneration_appendSyntaxSignature (defineCategoryMethod_parseWhenInstructionForGeneration_appendSyntaxSignature, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category reader '@terminalCheckInstructionForGeneration compareSyntaxInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                  const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_terminalCheckInstructionForGeneration * object = (const cPtr_terminalCheckInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_terminalCheckInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_terminalCheckInstructionForGeneration cast_8904_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 191)).objectCompare (cast_8904_si.reader_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 191)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 191)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 192)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_8904_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 193)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 193)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_9203_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_9203_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 197)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 197)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 201)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 204)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 205)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_terminalCheckInstructionForGeneration.mSlotID,
                                                categoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_terminalCheckInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@nonterminalInstructionForGeneration compareSyntaxInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                                const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_nonterminalInstructionForGeneration * object = (const cPtr_nonterminalInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_nonterminalInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_nonterminalInstructionForGeneration cast_9877_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_9877_si.reader_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 217)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 218)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_9877_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 219)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 219)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10175_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10175_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 223)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 223)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 227)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 230)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 231)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_nonterminalInstructionForGeneration.mSlotID,
                                                categoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_nonterminalInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_nonterminalInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@repeatInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_repeatInstructionForGeneration * object = (const cPtr_repeatInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_repeatInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_repeatInstructionForGeneration cast_10850_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_10850_si.reader_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 243)), cast_10850_si.reader_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 243)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 244)).objectCompare (cast_10850_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 244)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 244)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10850_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 245)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 247)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (cast_10850_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 249)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 249)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11532 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_11595 (cast_10850_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 252)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_11532.hasCurrentObject () && enumerator_11595.hasCurrentObject () && bool_1) {
        while (enumerator_11532.hasCurrentObject () && enumerator_11595.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_11532.current_mInstructionList (HERE), enumerator_11595.current_mInstructionList (HERE), enumerator_11595.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 253)) ;
          enumerator_11532.gotoNextObject () ;
          enumerator_11595.gotoNextObject () ;
          if (enumerator_11532.hasCurrentObject () && enumerator_11595.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11779_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11779_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 256)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 256)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 260)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 263)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 264)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_repeatInstructionForGeneration.mSlotID,
                                                categoryReader_repeatInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_repeatInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_repeatInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@selectInstructionForGeneration compareSyntaxInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_selectInstructionForGeneration_compareSyntaxInstruction (const cPtr_semanticInstructionForGeneration * inObject,
                                                                                           const GALGAS_semanticInstructionForGeneration & constinArgument_inTestedInstruction,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outOk ; // Returned variable
  const cPtr_selectInstructionForGeneration * object = (const cPtr_selectInstructionForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstructionForGeneration) ;
  if (constinArgument_inTestedInstruction.isValid ()) {
    if (NULL != dynamic_cast <const cPtr_selectInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_selectInstructionForGeneration cast_12421_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 277)).objectCompare (cast_12421_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 277)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 277)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 277)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12421_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 278)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 280)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (cast_12421_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 282)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 282)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12989 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_13052 (cast_12421_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 285)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12989.hasCurrentObject () && enumerator_13052.hasCurrentObject () && bool_1) {
        while (enumerator_12989.hasCurrentObject () && enumerator_13052.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12989.current_mInstructionList (HERE), enumerator_13052.current_mInstructionList (HERE), enumerator_13052.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 286)) ;
          enumerator_12989.gotoNextObject () ;
          enumerator_13052.gotoNextObject () ;
          if (enumerator_12989.hasCurrentObject () && enumerator_13052.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13236_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13236_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 289)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 289)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 293)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 296)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 297)) ;
  }
//---
  return result_outOk ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction (void) {
  enterCategoryReader_compareSyntaxInstruction (kTypeDescriptor_GALGAS_selectInstructionForGeneration.mSlotID,
                                                categoryReader_selectInstructionForGeneration_compareSyntaxInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_selectInstructionForGeneration_compareSyntaxInstruction (defineCategoryReader_selectInstructionForGeneration_compareSyntaxInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@semanticInstructionAST transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_semanticInstructionAST_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                        GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_semanticInstructionAST_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                            categoryMethod_semanticInstructionAST_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_semanticInstructionAST_transformInstruction (defineCategoryMethod_semanticInstructionAST_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@syntaxSendInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_syntaxSendInstruction_transformInstruction (const cPtr_syntaxInstructionAST * /* inObject */,
                                                                       GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                       const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                       GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                       GALGAS_syntaxInstructionListForGrammarAnalysis & /* ioArgument_ioSyntaxInstructionList */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_syntaxSendInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_syntaxSendInstruction.mSlotID,
                                            categoryMethod_syntaxSendInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_syntaxSendInstruction_transformInstruction (defineCategoryMethod_syntaxSendInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@terminalCheckInstruction transformInstruction'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_terminalCheckInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                          GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                          const GALGAS_nonTerminalSymbolMapForGrammarAnalysis /* constinArgument_inNonTerminalSymbolMap */,
                                                                          GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                          GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_terminalCheckInstruction * object = (const cPtr_terminalCheckInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_terminalCheckInstruction) ;
  GALGAS_uint var_terminalSymbolIndex ;
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_9245 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("grammarCompilation.galgas", 200))) ;
  if (NULL != objectArray_9245) {
      macroValidSharedObject (objectArray_9245, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_9245->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.reader_count (SOURCE_FILE ("grammarCompilation.galgas", 203)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.modifier_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 204)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 206))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 206)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_terminalCheckInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_terminalCheckInstruction.mSlotID,
                                            categoryMethod_terminalCheckInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_terminalCheckInstruction_transformInstruction (defineCategoryMethod_terminalCheckInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@nonterminalCallInstruction transformInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_nonterminalCallInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                            GALGAS_terminalSymbolsMapForGrammarAnalysis & /* ioArgument_ioActuallyUsedTerminalSymbolMap */,
                                                                            const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                            GALGAS_uint & /* ioArgument_ioAddedNonTerminalIndex */,
                                                                            GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_nonterminalCallInstruction * object = (const cPtr_nonterminalCallInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_nonterminalCallInstruction) ;
  GALGAS_uint var_nonTerminalSymbolIndex ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_10238_0 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex, joker_10238_0, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 220)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 221))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 221)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_nonterminalCallInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_nonterminalCallInstruction.mSlotID,
                                            categoryMethod_nonterminalCallInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_nonterminalCallInstruction_transformInstruction (defineCategoryMethod_nonterminalCallInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@repeatInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_repeatInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_repeatInstruction * object = (const cPtr_repeatInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_repeatInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 235)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 237)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 238)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 245)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_11385 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_11385.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 248)) ;
    {
    routine_transformInstructionList (enumerator_11385.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 249)) ;
    }
    var_repeatBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 256)) ;
    enumerator_11385.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 259))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 259)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_repeatInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_repeatInstruction.mSlotID,
                                            categoryMethod_repeatInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_repeatInstruction_transformInstruction (defineCategoryMethod_repeatInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@selectInstruction transformInstruction'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_selectInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                   GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                   const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                   GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                   GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_selectInstruction * object = (const cPtr_selectInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_selectInstruction) ;
  GALGAS_uint var_addedNonTerminalIndex = ioArgument_ioAddedNonTerminalIndex ;
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 273)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 275)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_12561 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_12561.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 277)) ;
    {
    routine_transformInstructionList (enumerator_12561.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 278)) ;
    }
    var_selectBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 285)) ;
    enumerator_12561.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 288))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 288)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_selectInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_selectInstruction.mSlotID,
                                            categoryMethod_selectInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_selectInstruction_transformInstruction (defineCategoryMethod_selectInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding category method '@parseRewindInstruction transformInstruction'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseRewindInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                        GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                        const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                        GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                        GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseRewindInstruction * object = (const cPtr_parseRewindInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseRewindInstruction) ;
  GALGAS_syntaxInstructionList var_syntaxInstructionList ;
  GALGAS_location joker_13659_0 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList, joker_13659_0, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 302)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 304)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseRewindInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseRewindInstruction.mSlotID,
                                            categoryMethod_parseRewindInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseRewindInstruction_transformInstruction (defineCategoryMethod_parseRewindInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseWhenInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseWhenInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseWhenInstruction * object = (const cPtr_parseWhenInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseWhenInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 320)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseWhenInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseWhenInstruction.mSlotID,
                                            categoryMethod_parseWhenInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseWhenInstruction_transformInstruction (defineCategoryMethod_parseWhenInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@parseLoopInstruction transformInstruction'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_parseLoopInstruction_transformInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                      GALGAS_terminalSymbolsMapForGrammarAnalysis & ioArgument_ioActuallyUsedTerminalSymbolMap,
                                                                      const GALGAS_nonTerminalSymbolMapForGrammarAnalysis constinArgument_inNonTerminalSymbolMap,
                                                                      GALGAS_uint & ioArgument_ioAddedNonTerminalIndex,
                                                                      GALGAS_syntaxInstructionListForGrammarAnalysis & ioArgument_ioSyntaxInstructionList,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_parseLoopInstruction * object = (const cPtr_parseLoopInstruction *) inObject ;
  macroValidSharedObject (object, cPtr_parseLoopInstruction) ;
  {
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 336)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_parseLoopInstruction_transformInstruction (void) {
  enterCategoryMethod_transformInstruction (kTypeDescriptor_GALGAS_parseLoopInstruction.mSlotID,
                                            categoryMethod_parseLoopInstruction_transformInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_parseLoopInstruction_transformInstruction (defineCategoryMethod_parseLoopInstruction_transformInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@Xcode_PBXFileReference_CompiledMachOExecutable productExtension'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (const cPtr_Xcode_5F_productFileReference * /* inObject */,
                                                                                                  GALGAS_string & outArgument_outProductExtension,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductExtension = GALGAS_string ("tool") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (void) {
  enterCategoryMethod_productExtension (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable.mSlotID,
                                        categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_productExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@Xcode_PBXFileReference_CompiledMachOExecutable buildXcodeProject'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                                   GALGAS_string & ioArgument_outString,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable * object = (const cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.mach-o.executable\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 63)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 62)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_CompiledMachOExecutable_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@Xcode_PBXFileReference_Application productExtension'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (const cPtr_Xcode_5F_productFileReference * /* inObject */,
                                                                                      GALGAS_string & outArgument_outProductExtension,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outProductExtension = GALGAS_string ("application") ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (void) {
  enterCategoryMethod_productExtension (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application.mSlotID,
                                        categoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_productExtension, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_Application buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_Application * object = (const cPtr_Xcode_5F_PBXFileReference_5F_Application *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_Application) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.wrapper.application\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 82)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 81)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_Application.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_Application_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_cppSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_cppSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.cpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 95)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 94)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject, NULL) ;

