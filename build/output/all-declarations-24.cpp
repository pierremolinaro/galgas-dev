#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_binarysetPredefinedTypeAST::method_getClassMethodMap (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 216)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 217)) ;
  }
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 225)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_compilerCppName (C_Compiler *
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outCompilerCppName ; // Returned variable
  result_outCompilerCppName = GALGAS_string ("inCompiler") ;
//---
  return result_outCompilerCppName ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_compilerCppName = false ;
static GALGAS_string gOnceFunctionResult_compilerCppName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_compilerCppName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_compilerCppName) {
    gOnceFunctionResult_compilerCppName = onceFunction_compilerCppName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_compilerCppName = true ;
  }
  return gOnceFunctionResult_compilerCppName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_compilerCppName (void) {
  gOnceFunctionResult_compilerCppName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_compilerCppName (NULL,
                                                             releaseOnceFunctionResult_compilerCppName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_compilerCppName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_compilerCppName (C_Compiler * inCompiler,
                                                                const cObjectArray & /* inEffectiveParameterArray */,
                                                                const GALGAS_location & /* inErrorLocation */
                                                                COMMA_LOCATION_ARGS) {
  return function_compilerCppName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_compilerCppName ("compilerCppName",
                                                                 functionWithGenericHeader_compilerCppName,
                                                                 & kTypeDescriptor_GALGAS_string,
                                                                 0,
                                                                 functionArgs_compilerCppName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'syntaxDirectedTranslationResultVarName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_syntaxDirectedTranslationResultVarName (C_Compiler *
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outName ; // Returned variable
  result_outName = GALGAS_string ("ioSyntaxDirectedTranslationResult") ;
//---
  return result_outName ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = false ;
static GALGAS_string gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_syntaxDirectedTranslationResultVarName (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName) {
    gOnceFunctionResult_syntaxDirectedTranslationResultVarName = onceFunction_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_syntaxDirectedTranslationResultVarName = true ;
  }
  return gOnceFunctionResult_syntaxDirectedTranslationResultVarName ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName (void) {
  gOnceFunctionResult_syntaxDirectedTranslationResultVarName.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_syntaxDirectedTranslationResultVarName (NULL,
                                                                                    releaseOnceFunctionResult_syntaxDirectedTranslationResultVarName) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_syntaxDirectedTranslationResultVarName [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_syntaxDirectedTranslationResultVarName (C_Compiler * inCompiler,
                                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                                       const GALGAS_location & /* inErrorLocation */
                                                                                       COMMA_LOCATION_ARGS) {
  return function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_syntaxDirectedTranslationResultVarName ("syntaxDirectedTranslationResultVarName",
                                                                                        functionWithGenericHeader_syntaxDirectedTranslationResultVarName,
                                                                                        & kTypeDescriptor_GALGAS_string,
                                                                                        0,
                                                                                        functionArgs_syntaxDirectedTranslationResultVarName) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3GrammarComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_galgas_33_GrammarComponentAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  result_result = GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 292)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_galgas_33_SyntaxComponentAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  result_result = GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 299)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_lexiqueComponentAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 306)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_predefinedTypeAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_predefinedTypeAST temp_0 = this ;
  result_result = GALGAS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 313)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_enumDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_enumDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("enum @").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 320)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_sortedListDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_sortedListDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 327)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_listDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_listDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 334)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_arrayDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_arrayDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("array @").add_operation (temp_0.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 341)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listmapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_listmapDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_listmapDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("listmap @").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 348)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_filewrapperDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 355)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_optionComponentDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_optionComponentDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 362)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_graphDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_graphDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 369)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externTypeDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externTypeDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 376)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_onceFunctionDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 383)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externFunctionDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 390)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externRoutineDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_externRoutineDeclarationAST::getter_keyRepresentation (C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_externRoutineDeclarationAST temp_0 = this ;
  result_result = GALGAS_string ("extern routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 396)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'addExtensions'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_addExtensions (const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                            const GALGAS_lstring constinArgument_inTypeName,
                            const GALGAS_bool constinArgument_inIsClass,
                            GALGAS_getterMap & ioArgument_ioGetterMap,
                            GALGAS_setterMap & ioArgument_ioSetterMap,
                            GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                            const GALGAS_bool constinArgument_inAcceptSetters,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 416)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_extensionGetterMapForType var_extensionGetterMapForType_19064 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_19064, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 417)) ;
      cEnumerator_extensionGetterMapForType enumerator_19131 (var_extensionGetterMapForType_19064, kENUMERATION_UP) ;
      while (enumerator_19131.hasCurrentObject ()) {
        GALGAS_functionSignature var_formalArgumentList_19212 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 419)) ;
        cEnumerator_formalInputParameterListAST enumerator_19292 (enumerator_19131.current_mInputFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_19292.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_19413 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_19292.current_mFormalArgumentTypeName (HERE), var_typeIndex_19413, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 421)) ;
          }
          var_formalArgumentList_19212.addAssign_operation (enumerator_19292.current_mFormalSelector (HERE), var_typeIndex_19413, enumerator_19292.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 422)) ;
          enumerator_19292.gotoNextObject () ;
        }
        GALGAS_unifiedTypeMapEntry var_returnedType_19591 ;
        {
        extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_19131.current_mResultTypeName (HERE), var_returnedType_19591, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 424)) ;
        }
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_19131.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 425)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = ioArgument_ioGetterMap.getter_hasKey (enumerator_19131.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 426)).boolEnum () ;
              if (kBoolTrue == test_2) {
                {
                ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::constructor_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 427)), enumerator_19131.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 427)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_1) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = GALGAS_bool (kIsEqual, enumerator_19131.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 429)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = ioArgument_ioGetterMap.getter_hasKey (enumerator_19131.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 430)).boolEnum () ;
                if (kBoolTrue == test_4) {
                  {
                  ioArgument_ioGetterMap.setter_setMQualifierForKey (GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 431)), enumerator_19131.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 431)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_3) {
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = constinArgument_inIsClass.operator_and (GALGAS_bool (kIsEqual, enumerator_19131.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 433)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 433)).boolEnum () ;
              if (kBoolTrue == test_5) {
                {
                ioArgument_ioGetterMap.setter_insertKey (enumerator_19131.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 436)), var_formalArgumentList_19212, enumerator_19131.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_19591, GALGAS_methodQualifier::constructor_isVirtual (SOURCE_FILE ("semanticContext.galgas", 441)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 434)) ;
                }
              }
            }
            if (kBoolFalse == test_5) {
              {
              ioArgument_ioGetterMap.setter_insertKey (enumerator_19131.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 447)), var_formalArgumentList_19212, enumerator_19131.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_19591, enumerator_19131.current_mQualifier (HERE), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 445)) ;
              }
            }
          }
        }
        enumerator_19131.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 459)).boolEnum () ;
    if (kBoolTrue == test_6) {
      GALGAS_extensionMethodMapForType var_extensionMethodMapForType_20751 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_20751, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 460)) ;
      cEnumerator_extensionMethodMapForType enumerator_20797 (var_extensionMethodMapForType_20751, kENUMERATION_UP) ;
      while (enumerator_20797.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_20859 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 462)) ;
        cEnumerator_formalParameterListAST enumerator_20990 (enumerator_20797.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_20990.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_21161 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_20990.current_mFormalArgumentTypeName (HERE), var_typeIndex_21161, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 465)) ;
          }
          var_formalArgumentList_20859.addAssign_operation (enumerator_20990.current_mFormalSelector (HERE), var_typeIndex_21161, enumerator_20990.current_mFormalArgumentPassingMode (HERE), enumerator_20990.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 469)) ;
          enumerator_20990.gotoNextObject () ;
        }
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          test_7 = GALGAS_bool (kIsEqual, enumerator_20797.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 471)))).boolEnum () ;
          if (kBoolTrue == test_7) {
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_20797.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 472)).boolEnum () ;
              if (kBoolTrue == test_8) {
                {
                ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::constructor_isVirtualOverriding (SOURCE_FILE ("semanticContext.galgas", 473)), enumerator_20797.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 473)) ;
                }
              }
            }
          }
        }
        if (kBoolFalse == test_7) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (kIsEqual, enumerator_20797.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 475)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              enumGalgasBool test_10 = kBoolTrue ;
              if (kBoolTrue == test_10) {
                test_10 = ioArgument_ioInstanceMethodMap.getter_hasKey (enumerator_20797.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 476)).boolEnum () ;
                if (kBoolTrue == test_10) {
                  {
                  ioArgument_ioInstanceMethodMap.setter_setMQualifierForKey (GALGAS_methodQualifier::constructor_isVirtualOverridingAbstract (SOURCE_FILE ("semanticContext.galgas", 477)), enumerator_20797.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 477)) ;
                  }
                }
              }
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = constinArgument_inIsClass.operator_and (GALGAS_bool (kIsEqual, enumerator_20797.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 479)))) COMMA_SOURCE_FILE ("semanticContext.galgas", 479)).boolEnum () ;
              if (kBoolTrue == test_11) {
                {
                ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_20797.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 482)), var_formalArgumentList_20859, enumerator_20797.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isVirtual (SOURCE_FILE ("semanticContext.galgas", 486)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticContext.galgas", 487)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 480)) ;
                }
              }
            }
            if (kBoolFalse == test_11) {
              {
              ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_20797.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 493)), var_formalArgumentList_20859, enumerator_20797.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), enumerator_20797.current_mQualifier (HERE), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticContext.galgas", 498)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 491)) ;
              }
            }
          }
        }
        enumerator_20797.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 505)).boolEnum () ;
    if (kBoolTrue == test_12) {
      GALGAS_extensionSetterMapForType var_extensionSetterMapForType_22519 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_22519, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 506)) ;
      cEnumerator_extensionSetterMapForType enumerator_22555 (var_extensionSetterMapForType_22519, kENUMERATION_UP) ;
      while (enumerator_22555.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_22643 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 508)) ;
        cEnumerator_formalParameterListAST enumerator_22748 (enumerator_22555.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_22748.hasCurrentObject ()) {
          GALGAS_unifiedTypeMapEntry var_typeIndex_22865 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22748.current_mFormalArgumentTypeName (HERE), var_typeIndex_22865, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 510)) ;
          }
          var_formalArgumentList_22643.addAssign_operation (enumerator_22748.current_mFormalSelector (HERE), var_typeIndex_22865, enumerator_22748.current_mFormalArgumentPassingMode (HERE), enumerator_22748.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 511)) ;
          enumerator_22748.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_22555.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 515)), var_formalArgumentList_22643, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 518)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 513)) ;
        }
        {
        ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_22555.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 523)), var_formalArgumentList_22643, enumerator_22555.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 527)), GALGAS_instanceMethodMutability::constructor_mutatingMethod (SOURCE_FILE ("semanticContext.galgas", 528)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 521)) ;
        }
        enumGalgasBool test_13 = kBoolTrue ;
        if (kBoolTrue == test_13) {
          test_13 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 531)).boolEnum () ;
          if (kBoolTrue == test_13) {
            TC_Array <C_FixItDescription> fixItArray14 ;
            inCompiler->emitSemanticError (enumerator_22555.current_lkey (HERE).readProperty_location (), GALGAS_string ("a refclass does not accept any setter; use method instead"), fixItArray14  COMMA_SOURCE_FILE ("semanticContext.galgas", 532)) ;
          }
        }
        enumerator_22555.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'elementTypeNameSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_elementTypeNameSuffix (C_Compiler *
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-element") ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_elementTypeNameSuffix = false ;
static GALGAS_string gOnceFunctionResult_elementTypeNameSuffix ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_elementTypeNameSuffix (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_elementTypeNameSuffix) {
    gOnceFunctionResult_elementTypeNameSuffix = onceFunction_elementTypeNameSuffix (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_elementTypeNameSuffix = true ;
  }
  return gOnceFunctionResult_elementTypeNameSuffix ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_elementTypeNameSuffix (void) {
  gOnceFunctionResult_elementTypeNameSuffix.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_elementTypeNameSuffix (NULL,
                                                                   releaseOnceFunctionResult_elementTypeNameSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_elementTypeNameSuffix [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_elementTypeNameSuffix (C_Compiler * inCompiler,
                                                                      const cObjectArray & /* inEffectiveParameterArray */,
                                                                      const GALGAS_location & /* inErrorLocation */
                                                                      COMMA_LOCATION_ARGS) {
  return function_elementTypeNameSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_elementTypeNameSuffix ("elementTypeNameSuffix",
                                                                       functionWithGenericHeader_elementTypeNameSuffix,
                                                                       & kTypeDescriptor_GALGAS_string,
                                                                       0,
                                                                       functionArgs_elementTypeNameSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'recursivelyEnumerateDirectories'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_recursivelyEnumerateDirectories (const GALGAS_string constinArgument_inAbsoluteSourcePath,
                                              const GALGAS_string constinArgument_inPathInWrapper,
                                              const GALGAS_wrapperExtensionMap constinArgument_inTextFileExtensionMap,
                                              const GALGAS_wrapperExtensionMap constinArgument_inBinaryFileExtensionMap,
                                              GALGAS_wrapperFileMap & outArgument_outWrapperFileMap,
                                              GALGAS_wrapperDirectoryMap & outArgument_outWrapperDirectoryMap,
                                              GALGAS_uint & ioArgument_ioWrapperFileIndex,
                                              GALGAS_uint & ioArgument_ioWrapperDirectoryIndex,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outWrapperFileMap.drop () ; // Release 'out' argument
  outArgument_outWrapperDirectoryMap.drop () ; // Release 'out' argument
  GALGAS_uint var_currentDirectoryIndex_26085 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 597)) ;
  GALGAS_stringlist var_files_26196 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 599)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 600)) ;
  cEnumerator_stringlist enumerator_26280 (var_files_26196, kENUMERATION_UP) ;
  while (enumerator_26280.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_26280.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 602)) COMMA_SOURCE_FILE ("semanticContext.galgas", 602)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteFilePath_26396 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 603)).add_operation (enumerator_26280.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 603)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_26280.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 605))  COMMA_SOURCE_FILE ("semanticContext.galgas", 605)), var_absoluteFilePath_26396, GALGAS_bool (true), var_currentDirectoryIndex_26085, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 604)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 611)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_26280.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 612)) COMMA_SOURCE_FILE ("semanticContext.galgas", 612)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteFilePath_26776 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 613)).add_operation (enumerator_26280.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 613)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_26280.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 615))  COMMA_SOURCE_FILE ("semanticContext.galgas", 615)), var_absoluteFilePath_26776, GALGAS_bool (false), var_currentDirectoryIndex_26085, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 614)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 621)) ;
        }
      }
    }
    enumerator_26280.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_27131 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 625)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 626)) ;
  cEnumerator_stringlist enumerator_27219 (var_directories_27131, kENUMERATION_UP) ;
  while (enumerator_27219.hasCurrentObject ()) {
    GALGAS_uint var_theDirectoryIndex_27270 = ioArgument_ioWrapperDirectoryIndex ;
    GALGAS_wrapperFileMap var_internalWrapperFileMap_27511 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_27550 ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 630)).add_operation (enumerator_27219.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 630)), constinArgument_inPathInWrapper.add_operation (enumerator_27219.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 631)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 631)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_27511, var_internalWrapperDirectoryMap_27550, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 629)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_27219.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 640))  COMMA_SOURCE_FILE ("semanticContext.galgas", 640)), var_internalWrapperFileMap_27511, var_internalWrapperDirectoryMap_27550, var_theDirectoryIndex_27270, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 639)) ;
    }
    enumerator_27219.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_28387 = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 657)) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  cEnumerator_filewrapperTemplateListAST enumerator_28491 (temp_0.readProperty_mFilewrapperTemplateList (), kENUMERATION_UP) ;
  while (enumerator_28491.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_28573 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 659)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_28657 (enumerator_28491.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_28657.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_28802 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_28657.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_28802, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 661)) ;
      }
      var_templateSignature_28573.addAssign_operation (enumerator_28657.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_28802, enumerator_28657.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 662)) ;
      enumerator_28657.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_28387.setter_insertKey (enumerator_28491.current_mFilewrapperTemplateName (HERE), var_templateSignature_28573, enumerator_28491.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 664)) ;
    }
    enumerator_28491.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_29131 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 671)) ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  cEnumerator_lstringlist enumerator_29150 (temp_1.readProperty_mFilewrapperTextFileExtensionList (), kENUMERATION_UP) ;
  while (enumerator_29150.hasCurrentObject ()) {
    {
    var_textExtensionMap_29131.setter_insertKey (enumerator_29150.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 673)) ;
    }
    enumerator_29150.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_29332 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 676)) ;
  const GALGAS_filewrapperDeclarationAST temp_2 = this ;
  cEnumerator_lstringlist enumerator_29351 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList (), kENUMERATION_UP) ;
  while (enumerator_29351.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_textExtensionMap_29131.getter_hasKey (enumerator_29351.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 678)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_29351.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_29351.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 679)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 679)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 679)) ;
      }
    }
    if (kBoolFalse == test_3) {
      {
      var_binaryFileExtensionMap_29332.setter_insertKey (enumerator_29351.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 681)) ;
      }
    }
    enumerator_29351.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_29681 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_29728 ;
  GALGAS_string var_absoluteSourcePath_29761 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 688)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperDeclarationAST temp_7 = this ;
      var_absoluteSourcePath_29761 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_8 = this ;
    const GALGAS_filewrapperDeclarationAST temp_9 = this ;
    var_absoluteSourcePath_29761 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 691)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 691)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 691)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_absoluteSourcePath_29761.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 693)).operator_not (SOURCE_FILE ("semanticContext.galgas", 693)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_29761, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 694)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 694)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 694)) ;
      var_regularRootFileMap_29681.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_29728.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_uint var_wrapperFileIndex_30276 = GALGAS_uint (uint32_t (0U)) ;
    GALGAS_uint var_wrapperDirectoryIndex_30316 = GALGAS_uint (uint32_t (0U)) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath_29761, GALGAS_string ("/"), var_textExtensionMap_29131, var_binaryFileExtensionMap_29332, var_regularRootFileMap_29681, var_wrapperDirectoryMap_29728, var_wrapperFileIndex_30276, var_wrapperDirectoryIndex_30316, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 700)) ;
    }
  }
  {
  const GALGAS_filewrapperDeclarationAST temp_13 = this ;
  const GALGAS_filewrapperDeclarationAST temp_14 = this ;
  const GALGAS_filewrapperDeclarationAST temp_15 = this ;
  const GALGAS_filewrapperDeclarationAST temp_16 = this ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_29681, var_wrapperDirectoryMap_29728, var_filewrapperTemplateMap_28387, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 712)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature var_routineSignature_31396 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 731)) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_31523 (temp_0.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_31523.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_31649 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_31523.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_31649, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 733)) ;
    }
    var_routineSignature_31396.addAssign_operation (enumerator_31523.current_mFormalSelector (HERE), var_parameterTypeIndex_31649, enumerator_31523.current_mFormalArgumentPassingMode (HERE), enumerator_31523.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 734)) ;
    enumerator_31523.gotoNextObject () ;
  }
  {
  const GALGAS_externRoutineDeclarationAST temp_1 = this ;
  const GALGAS_externRoutineDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (temp_1.readProperty_mRoutineName (), var_routineSignature_31396, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 737)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_formalParameterSignature var_routineSignature_32476 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 752)) ;
  const GALGAS_procDeclarationAST temp_0 = this ;
  cEnumerator_formalParameterListAST enumerator_32603 (temp_0.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_32603.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_32729 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_32603.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_32729, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 754)) ;
    }
    var_routineSignature_32476.addAssign_operation (enumerator_32603.current_mFormalSelector (HERE), var_parameterTypeIndex_32729, enumerator_32603.current_mFormalArgumentPassingMode (HERE), enumerator_32603.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 755)) ;
    enumerator_32603.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = this ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioSemanticContext.mProperty_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 758)) ;
  {
  const GALGAS_procDeclarationAST temp_2 = this ;
  const GALGAS_procDeclarationAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (temp_2.readProperty_mRoutineName (), var_routineSignature_32476, temp_3.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 760)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_functionSignature var_functionSignature_33741 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 775)) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  cEnumerator_formalInputParameterListAST enumerator_33818 (temp_0.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_33818.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterTypeIndex_33944 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_33818.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_33944, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 777)) ;
    }
    var_functionSignature_33741.addAssign_operation (enumerator_33818.current_mFormalSelector (HERE), var_parameterTypeIndex_33944, enumerator_33818.current_mFormalArgumentTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 778)) ;
    enumerator_33818.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_34148 ;
  {
  const GALGAS_externFunctionDeclarationAST temp_1 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_34148, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 781)) ;
  }
  {
  const GALGAS_externFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_33741, var_resultTypeIndex_34148, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 783)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_resultTypeIndex_34972 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_34972, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 799)) ;
  }
  {
  const GALGAS_onceFunctionDeclarationAST temp_1 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 801)), var_resultTypeIndex_34972, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 801)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 812)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                   const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                   const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_grammarLabelMap var_grammarLabelMap_36438 = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 830)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  cEnumerator_nonTerminalLabelListAST enumerator_36483 (temp_0.readProperty_mStartSymbolLabelList (), kENUMERATION_UP) ;
  while (enumerator_36483.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_36595 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 833)) ;
    cEnumerator_formalParameterListAST enumerator_36698 (enumerator_36483.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_36698.hasCurrentObject ()) {
      GALGAS_unifiedTypeMapEntry var_argumentType_36815 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_36698.current_mFormalArgumentTypeName (HERE), var_argumentType_36815, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 835)) ;
      }
      var_formalArgumentList_36595.addAssign_operation (enumerator_36698.current_mFormalSelector (HERE), var_argumentType_36815, enumerator_36698.current_mFormalArgumentPassingMode (HERE), enumerator_36698.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 836)) ;
      enumerator_36698.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_36438.setter_insertKey (enumerator_36483.current_mLabelName (HERE), var_formalArgumentList_36595, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 842)) ;
    }
    enumerator_36483.gotoNextObject () ;
  }
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_36438, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 848)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInSemanticContext (const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_lexicalTypeMap var_lexicalTypeMap_37876 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 864)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_37948 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 865)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_37876, temp_0.readProperty_mLexicalAttributeList (), var_lexicalAttributeMap_37948, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 866)) ;
  }
  GALGAS_terminalMap var_terminalMap_38134 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 872)) ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_38177 (temp_1.readProperty_mTerminalDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_38177.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_38239 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 874)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_38306 (enumerator_38177.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_38306.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_38411 ;
      var_lexicalAttributeMap_37948.method_searchKey (enumerator_38306.current_mAttributeName (HERE), var_attributeLexicalType_38411, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 876)) ;
      var_argumentTypeList_38239.addAssign_operation (enumerator_38306.current_mFormalSelector (HERE), enumerator_38306.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_38411  COMMA_SOURCE_FILE ("semanticContext.galgas", 877)) ;
      enumerator_38306.gotoNextObject () ;
    }
    {
    var_terminalMap_38134.setter_insertKey (enumerator_38177.current_mName (HERE), var_argumentTypeList_38239, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 879)) ;
    }
    enumerator_38177.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_38617 (temp_2.readProperty_mLexicalListDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_38617.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_38682 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 883)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_38749 (enumerator_38617.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_38749.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_38854 ;
      var_lexicalAttributeMap_37948.method_searchKey (enumerator_38749.current_mAttributeName (HERE), var_attributeLexicalType_38854, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 885)) ;
      var_argumentTypeList_38682.addAssign_operation (enumerator_38749.current_mFormalSelector (HERE), enumerator_38749.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_38854  COMMA_SOURCE_FILE ("semanticContext.galgas", 886)) ;
      enumerator_38749.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_38982 (enumerator_38617.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_38982.hasCurrentObject ()) {
      {
      var_terminalMap_38134.setter_insertKey (enumerator_38982.current_mTerminalSpelling (HERE), var_argumentTypeList_38682, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 889)) ;
      }
      enumerator_38982.gotoNextObject () ;
    }
    enumerator_38617.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  const GALGAS_lexiqueComponentAST temp_5 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), var_terminalMap_38134, temp_4.readProperty_mIndexingListAST (), temp_5.readProperty_mIndexingDirectory (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 893)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
  GALGAS_lstring var_key_41176 = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 932)), temp_1.readProperty_mGrammarComponentName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 932)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_41176, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 933)) ;
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_41335 (temp_3.readProperty_mSyntaxComponents (), kENUMERATION_UP) ;
  while (enumerator_41335.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_41176, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_41335.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 935)), enumerator_41335.current_mValue (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 935)) COMMA_SOURCE_FILE ("semanticContext.galgas", 935)) ;
    }
    enumerator_41335.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GALGAS_lstring var_key_42069 = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 947)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 947)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_42069, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 948)) ;
  }
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_42069, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 949)), temp_4.readProperty_mLexiqueName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 949)) COMMA_SOURCE_FILE ("semanticContext.galgas", 949)) ;
  }
  const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
  cEnumerator_syntaxRuleListAST enumerator_42361 (temp_5.readProperty_mRuleList (), kENUMERATION_UP) ;
  while (enumerator_42361.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_42417 (enumerator_42361.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_42417.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_42503 (enumerator_42417.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_42503.hasCurrentObject ()) {
        switch (enumerator_42503.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_42069, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_42503.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 954)), enumerator_42503.current_mFormalArgumentTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 954)) COMMA_SOURCE_FILE ("semanticContext.galgas", 954)) ;
            }
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
          }
          break ;
        }
        enumerator_42503.gotoNextObject () ;
      }
      enumerator_42417.gotoNextObject () ;
    }
    enumerator_42361.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                               GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  GALGAS_lstring var_key_43425 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 970)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 970)) ;
  {
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_43425, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 971)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                        GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                        GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                        GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                        C_Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 982)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                      GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                      GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                      GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                      GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 993)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                       GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                       GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                       GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externRoutineDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1004)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_enterDeclarationInGraph (GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                     GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                     GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                     GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                     C_Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 1015)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateInstructionList (GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                      const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 28)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_1632 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1632.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_1632.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 30)) ;
    enumerator_1632.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 38)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticTypeForGeneration::getter_implementationCppFileName (C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 248)).readProperty_mHeaderFileName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (C_Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 260)).readProperty_mIsPredefined () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  const GALGAS_semanticTypeForGeneration temp_0 = this ;
  result_result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 266)).readProperty_mHeaderKind () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_implementationCppFileName (C_Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mImplementationCppFileName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (C_Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result_result = temp_0.readProperty_mHasHeader () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 295)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (C_Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                             const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                             const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                             const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                             const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                             const GALGAS_location constinArgument_inEndOfBranchLocation,
                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                             GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 61)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inLocalConstantList, constinArgument_inLocalInitializedVariableList, constinArgument_inLocalInitializedVariableListNoWarns, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 63)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 75)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSemanticInstructionListWithoutBranch'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSemanticInstructionListWithoutBranch (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                          const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                                          const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                                          const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableListNoWarns,
                                                          const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                                          GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                          GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                                          C_Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 91)) ;
  cEnumerator_localConstantList enumerator_4495 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_4495.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_4495.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4495.current_mName (HERE), enumerator_4495.current_mType (HERE), enumerator_4495.current_mCppName (HERE), enumerator_4495.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 95)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4495.current_mName (HERE), enumerator_4495.current_mType (HERE), enumerator_4495.current_mCppName (HERE), enumerator_4495.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 97)) ;
      }
    }
    enumerator_4495.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4804 (constinArgument_inLocalInitializedVariableList, kENUMERATION_UP) ;
  while (enumerator_4804.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_4804.current_mName (HERE), GALGAS_bool (true), enumerator_4804.current_mType (HERE), enumerator_4804.current_mCppName (HERE), enumerator_4804.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 102)) ;
    }
    enumerator_4804.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4988 (constinArgument_inLocalInitializedVariableListNoWarns, kENUMERATION_UP) ;
  while (enumerator_4988.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_4988.current_mName (HERE), GALGAS_bool (false), enumerator_4988.current_mType (HERE), enumerator_4988.current_mCppName (HERE), enumerator_4988.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 105)) ;
    }
    enumerator_4988.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_5194 (constinArgument_inSemanticInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_5194.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_5194.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 109)) ;
    enumerator_5194.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       const GALGAS_lstring constinArgument_inFormalSelector,
                                                                       const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                       const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                       GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                       GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                       GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 159)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 158)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputActualParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 163)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 163)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 166)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_7752 = GALGAS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 166)) ;
        const GALGAS_outputActualParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7752) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7752, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8217 ;
    const GALGAS_outputActualParameterAST temp_9 = this ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_8217, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = this ;
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_8217.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8217, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 178)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_8217  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                            const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                            const GALGAS_lstring constinArgument_inFormalSelector,
                                                                            const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                            const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                            GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                            GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                            GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                            GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_9995 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205)) ;
        const GALGAS_outputInputActualParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_9995) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9995, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_10345 ;
  GALGAS_string var_variableCppName_10370 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = this ;
  GALGAS_string joker_10376 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_10345, var_variableCppName_10370, joker_10376, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 209)) ;
  }
  GALGAS_unifiedTypeMapEntryList var_typeList_10396 = GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (var_parameterType_10345  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 215)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = this ;
  cEnumerator_lstringlist enumerator_10468 (temp_10.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10468.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10521 = extensionGetter_definition (var_parameterType_10345, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 217)).readProperty_mPropertyMap () ;
    GALGAS_bool var_isPublic_10624 ;
    GALGAS_bool var_isConstant_10646 ;
    var_propertyMap_10521.method_searchKey (enumerator_10468.current_mValue (HERE), var_isPublic_10624, var_isConstant_10646, var_parameterType_10345, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 218)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isPublic_10624.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10468.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)) ;
      }
    }
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_isConstant_10646.boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_10468.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 228)) ;
      }
    }
    var_typeList_10396.addAssign_operation (var_parameterType_10345  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)) ;
    enumerator_10468.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_10345)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_outputInputActualParameterAST temp_16 = this ;
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_10345, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 235)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 235)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 235)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)), fixItArray17  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 234)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_outputInputActualParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 240)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_outputInputActualParameterAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 244)) ;
  const GALGAS_outputInputActualParameterAST temp_23 = this ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_10345, var_variableCppName_10370, temp_23.readProperty_mStructAttributeList (), var_typeList_10396  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 268)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSingleJokerParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_12963 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
        const GALGAS_outputInputSingleJokerParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_12963) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12963, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)) ;
      }
    }
  }
  GALGAS_string var_defaultConstructorName_13321 = extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 276)).readProperty_mDefaultConstructorName () ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_defaultConstructorName_13321.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_outputInputSingleJokerParameterAST temp_10 = this ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the formal parameter type @").add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)) ;
    }
  }
  const GALGAS_outputInputSingleJokerParameterAST temp_12 = this ;
  GALGAS_string var_cppVarName_13634 = GALGAS_string ("joker_").add_operation (temp_12.readProperty_mActualSelector ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)) ;
  const GALGAS_outputInputSingleJokerParameterAST temp_13 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_13634, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, temp_13.readProperty_mActualSelector ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 286))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_13634, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 290)), GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 291))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 287)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lstring constinArgument_inFormalSelector,
                                                                          const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                          const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                          GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                          GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                          GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                          GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSelfParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 310)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 312)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 309)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSelfParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_15574 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)) ;
        const GALGAS_outputInputSelfParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_15574) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_15574, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_16152 ;
    GALGAS_bool var_selfIsMutable_16180 ;
    GALGAS_bool var_unused_0_16201 ;
    const bool optionalResult16132 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_16152, var_selfIsMutable_16180, var_unused_0_16201) ;
    if (!optionalResult16132) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_selfIsMutable_16180.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 325)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_outputInputSelfParameterAST temp_11 = this ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 326)) ;
        }
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_selfType_16152)).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_outputInputSelfParameterAST temp_14 = this ;
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_14.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_selfType_16152, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 331)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 331)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 331)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 333)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 332)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 333)), fixItArray15  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 330)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_string ("ioObject"), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 338)), GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 335))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 335)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_outputInputSelfParameterAST temp_16 = this ;
    TC_Array <C_FixItDescription> fixItArray17 ;
    inCompiler->emitSemanticError (temp_16.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray17  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 342)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 359)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 362)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_18495 = extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 364)).readProperty_mDefaultConstructorName () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_defaultConstructorName_18495.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputJokerParameterAST temp_4 = this ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mQualifierLocation (), GALGAS_string ("the formal parameter type @").add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)) ;
    }
  }
  const GALGAS_outputInputJokerParameterAST temp_6 = this ;
  const GALGAS_outputInputJokerParameterAST temp_7 = this ;
  GALGAS_string var_cppVarName_18811 = GALGAS_string ("joker_").add_operation (temp_6.readProperty_mQualifierLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)).add_operation (temp_7.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 369)) ;
  const GALGAS_outputInputJokerParameterAST temp_8 = this ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_18811, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, temp_8.readProperty_mQualifierLocation ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 374))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 370))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 370)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_18811, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 378)), GALGAS_unifiedTypeMapEntryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 379))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 375))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 375)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 397)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 398)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 398)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 398)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualExistingVariableParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_20551 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)) ;
        const GALGAS_inputActualExistingVariableParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_20551) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_20551, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 401)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 401)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 401)) ;
      }
    }
  }
  GALGAS_unifiedTypeMapEntry var_parameterType_20978 ;
  GALGAS_string var_targetVariableCppName_21009 ;
  {
  const GALGAS_inputActualExistingVariableParameterAST temp_9 = this ;
  GALGAS_string joker_21015 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_20978, var_targetVariableCppName_21009, joker_21015, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 404)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_20978)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_inputActualExistingVariableParameterAST temp_11 = this ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_20978, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 413)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 414)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 414)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 414)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 412)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_inputActualExistingVariableParameterAST temp_14 = this ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_inputActualExistingVariableParameterAST temp_15 = this ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 418)) ;
    }
  }
  const GALGAS_inputActualExistingVariableParameterAST temp_17 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 421)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_20978, var_targetVariableCppName_21009  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                  GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                  const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                  const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                  GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                  GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                  GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 443)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 445)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 445)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 444)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_22964 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 448)) ;
        const GALGAS_inputActualSelfPropertyParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_22964) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_22964, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 449)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 449)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 449)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMapEntry var_selfType_23218 ;
    GALGAS_bool var_selfIsMutable_23246 ;
    GALGAS_bool var_unused_0_23268 ;
    const bool optionalResult23198 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_23218, var_selfIsMutable_23246, var_unused_0_23268) ;
    if (!optionalResult23198) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_selfIsMutable_23246.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 453)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_11 = this ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 454)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_23417 = extensionGetter_definition (var_selfType_23218, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 456)).readProperty_mPropertyMap () ;
      GALGAS_unifiedTypeMapEntry var_parameterType_23539 ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_13 = this ;
      GALGAS_bool joker_23518_2 ; // Joker input parameter
      GALGAS_bool joker_23518_1 ; // Joker input parameter
      var_propertyMap_23417.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_23518_2, joker_23518_1, var_parameterType_23539, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 457)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_14 = this ;
      GALGAS_string var_targetVariableCppName_23570 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 458)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 459)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_23539)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_16 = this ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_23539, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 463)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 463)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 463)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)), fixItArray17  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 462)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_23539, var_targetVariableCppName_23570  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 467))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 467)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfPropertyParameterAST temp_18 = this ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 494)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 494)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 494)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 495)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 495)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 493)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewVariableParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 497)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_25510 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 497)) ;
        const GALGAS_inputActualNewVariableParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_25510) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_25510, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 498)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 498)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 498)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewVariableParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewVariableParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_25945 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 504)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_25945)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewVariableParameterAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_25945, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 507)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 507)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 507)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 508)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 508)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 508)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 506)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_15 = this ;
  const GALGAS_inputActualNewVariableParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_26423 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 512)) ;
  {
  const GALGAS_inputActualNewVariableParameterAST temp_17 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GALGAS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_26423, var_targetVariableCppName_26423, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 513)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_26423  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 521))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 521)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_inputActualNewVariableParameterAST temp_19 = this ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 525)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_inputActualNewVariableParameterAST temp_20 = this ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 526)) ;
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_22 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 529)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_26423  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                 GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 551)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 554)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 552)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewConstantParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_28583 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 556)) ;
        const GALGAS_inputActualNewConstantParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_28583) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_28583, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 557)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 557)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 557)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = this ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = this ;
      GALGAS_unifiedTypeMapEntry var_parameterType_29017 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_29017)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = this ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_definition (var_parameterType_29017, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 565)).add_operation (extensionGetter_definition (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 566)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 564)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = this ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = this ;
  GALGAS_string var_targetVariableCppName_29495 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 570)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = this ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = this ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_29495, var_targetVariableCppName_29495, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 572)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = this ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_29495, var_targetVariableCppName_29495, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_29495  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 587))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 587)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = this ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = this ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 593)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = this ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 596)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_29495  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 598))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 598)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                 GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                 const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 619)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 620)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 620)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 620)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_4 = this ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 622)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_31867 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 622)) ;
        const GALGAS_inputSingleJokerActualParameterAST temp_7 = this ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_31867) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_31867, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 623)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 623)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 623)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = this ;
      GALGAS_string var_cppVarName_32215 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 626)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_32215  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 628)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_checkAgainstFormalArgument (const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                           const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                           const GALGAS_unifiedTypeMapEntry constinArgument_inFormalArgumentType,
                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 647)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 650)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 648)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = this ;
    const GALGAS_inputJokerActualParameterAST temp_4 = this ;
    GALGAS_string var_cppVarName_33564 = GALGAS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 652)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 652)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 652)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 652)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 652)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_33564  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 654))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 654)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualExistingVariableParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualSelfPropertyParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewConstantParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualNewVariableParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputJokerActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputSingleJokerActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_outputActualParameterAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) temp_0.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 698)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputSingleJokerParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSelfParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputSelfParameterAST::method_enterParameterInSemanticContext (GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineArguments (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_string constinArgument_inInvokedEntityName,
                                      const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                      const GALGAS_actualParameterListAST constinArgument_inActualParameterList,
                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                      GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)).objectCompare (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 733)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inRoutineName.readProperty_location (), GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)).add_operation (constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)).add_operation (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 737)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 734)) ;
      outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 740)) ;
    GALGAS_stringset var_exclusiveVariableSet_38158 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 741)) ;
    cEnumerator_formalParameterSignature enumerator_38237 (constinArgument_inRoutineSignature, kENUMERATION_UP) ;
    cEnumerator_actualParameterListAST enumerator_38279 (constinArgument_inActualParameterList, kENUMERATION_UP) ;
    while (enumerator_38237.hasCurrentObject () && enumerator_38279.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_38279.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_38237.current_mFormalSelector (HERE), enumerator_38237.current_mFormalArgumentType (HERE), enumerator_38237.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_38158, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)) ;
      enumerator_38237.gotoNextObject () ;
      enumerator_38279.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkExpressionIsBoolean'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMapEntry var_expressionType_39066 = constinArgument_inExpression.readProperty_mResultType () ;
  GALGAS_unifiedTypeMapEntry var_boolType_39126 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mBoolType () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, var_expressionType_39066.objectCompare (var_boolType_39126)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outExpression = constinArgument_inExpression ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)).readProperty_mTypeKindEnum ().objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 771)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 772)).readProperty_mPropertyMap ().getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 772)).boolEnum () ;
          if (kBoolTrue == test_2) {
            GALGAS_bool var_isPublic_39512 ;
            GALGAS_unifiedTypeMapEntry var_attributeType_39572 ;
            GALGAS_bool joker_39523 ; // Joker input parameter
            extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 773)).readProperty_mPropertyMap ().method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), constinArgument_inErrorLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 774)), var_isPublic_39512, joker_39523, var_attributeType_39572, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 773)) ;
            enumGalgasBool test_3 = kBoolTrue ;
            if (kBoolTrue == test_3) {
              test_3 = var_isPublic_39512.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 779)).boolEnum () ;
              if (kBoolTrue == test_3) {
                TC_Array <C_FixItDescription> fixItArray4 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 780)) ;
              }
            }
            enumGalgasBool test_5 = kBoolTrue ;
            if (kBoolTrue == test_5) {
              test_5 = GALGAS_bool (kIsEqual, var_attributeType_39572.objectCompare (var_boolType_39126)).boolEnum () ;
              if (kBoolTrue == test_5) {
                outArgument_outExpression = GALGAS_structPropertyAccessExpressionForGeneration::constructor_new (var_boolType_39126, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 783)) ;
              }
            }
            if (kBoolFalse == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 791)), fixItArray6  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 790)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
        }
        if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 796)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 795)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_40348 = (const cMapElement_getterMap *) extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 800)).readProperty_mGetterMap ().readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_40348) {
          macroValidSharedObject (objectArray_40348, cMapElement_getterMap) ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (kIsNotEqual, objectArray_40348->mProperty_mReturnedType.objectCompare (var_boolType_39126)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 802)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_8) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsStrictSup, objectArray_40348->mProperty_mArgumentTypeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 803)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 803)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 803)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 804)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (kBoolFalse == test_10) {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              test_12 = GALGAS_bool (kIsNotEqual, objectArray_40348->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_12) {
                TC_Array <C_FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_40348->mProperty_mErrorMessage, fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 806)) ;
                outArgument_outExpression.drop () ; // Release error dropped variable
              }
            }
            if (kBoolFalse == test_12) {
              outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_boolType_39126, constinArgument_inErrorLocation, objectArray_40348->mProperty_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 813)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 815)), objectArray_40348->mProperty_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 808)) ;
            }
          }
        }
      }else{
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)).readProperty_mGetterMap ().getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 820)))).boolEnum () ;
          if (kBoolTrue == test_14) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 822)), fixItArray15  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 821)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (kBoolFalse == test_14) {
          TC_Array <C_FixItDescription> fixItArray16 ;
          appendFixItActions (fixItArray16, kFixItReplace, extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828)).readProperty_mGetterMap ().getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 828))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (extensionGetter_definition (var_expressionType_39066, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 826)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 826)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 826)), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 825)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                      const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      C_Compiler * /* inCompiler */
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                      const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                      const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                      GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                      GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 861)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 862)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                       GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                       GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 874)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 875)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_type_43934 ;
  GALGAS_string var_cppName_43955 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_43957 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_43934, var_cppName_43955, joker_43957, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 877)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_43978 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expectedType_43978.objectCompare (var_type_43934)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)).add_operation (extensionGetter_identifierRepresentation (var_type_43934, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 881)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_43978, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 882)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 882)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 880)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_43955.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 884)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                               const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                               GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                               C_Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 895)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 896)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GALGAS_string var_cppName_45020 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 898)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_45154 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 899)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_45154, var_cppName_45020, var_cppName_45020, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 900)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_45389 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_45389.objectCompare (var_type_45154)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 904)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 904)).add_operation (extensionGetter_identifierRepresentation (var_type_45154, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 904)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 904)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 904)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_45389, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 905)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 905)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 905)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 903)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_45020, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 907)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeGrammarInstructionSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 918)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 919)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GALGAS_string var_cppName_46436 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 921)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 921)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 921)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 921)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 921)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_46570 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 922)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_46570, var_cppName_46436, var_cppName_46436, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 923)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_46780 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_46780.objectCompare (var_type_46570)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)).add_operation (extensionGetter_identifierRepresentation (var_type_46570, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 927)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_46780, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 928)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 928)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 928)), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 926)) ;
    }
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_46436, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 930)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 930)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 930)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 930))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 930)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 28)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 29)) ;
    }
  }
  if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_1904 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalParameterListForGeneration enumerator_2016 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_1904.hasCurrentObject () && enumerator_2016.hasCurrentObject ()) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, enumerator_1904.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2016.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2016.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (extensionGetter_formalArgumentMessage (enumerator_1904.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)) ;
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
        }
      }
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_2016.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_1904.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string var_s_2560 ;
          switch (enumerator_1904.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
          case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
            {
              var_s_2560 = GALGAS_string ("\?") ;
            }
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
            {
              var_s_2560 = GALGAS_string ("\?!") ;
            }
            break ;
          case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
            {
              var_s_2560 = GALGAS_string ("!") ;
            }
            break ;
          }
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_1904.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_1904.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 48)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          var_s_2560.plusAssign_operation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 48)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_2560) ;
          inCompiler->emitSemanticError (enumerator_2016.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_2560, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 49)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 49)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 49)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_2016.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 52)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_1904.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 52)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_2016.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)).add_operation (extensionGetter_definition (enumerator_2016.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 54)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 54)).add_operation (extensionGetter_definition (enumerator_1904.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 54)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 55)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 53)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 56)) ;
        }
      }
      enumerator_1904.gotoNextObject () ;
      enumerator_2016.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMapEntry constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMapEntry constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 75)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 75)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 76)) ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 81)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 81)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 82)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 83)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)) ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)) ;
    }
  }
  if (kBoolFalse == test_3) {
    cEnumerator_functionSignature enumerator_5147 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5234 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_5147.hasCurrentObject () && enumerator_5234.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsNotEqual, enumerator_5234.current_mFormalSelector (HERE).readProperty_string ().objectCompare (enumerator_5147.current_mFormalSelector (HERE).readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_string temp_7 ;
          const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5147.current_mFormalSelector (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_8) {
            temp_7 = enumerator_5147.current_mFormalSelector (HERE).readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 88)) ;
          }else if (kBoolFalse == test_8) {
            temp_7 = GALGAS_string::makeEmptyString () ;
          }
          GALGAS_string var_s_5348 = GALGAS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 88)) ;
          TC_Array <C_FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, kFixItReplace, var_s_5348) ;
          inCompiler->emitSemanticError (enumerator_5234.current_mFormalSelector (HERE).readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_5348, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 89)) ;
        }
      }
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsNotEqual, extensionGetter_definition (enumerator_5234.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 94)).readProperty_mTypeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5147.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 94)).readProperty_mTypeName ().readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5234.current_mFormalArgumentName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5234.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)).add_operation (extensionGetter_definition (enumerator_5234.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (extensionGetter_definition (enumerator_5147.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 97)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 96)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 97)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 95)) ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 98)) ;
        }
      }
      enumerator_5147.gotoNextObject () ;
      enumerator_5234.gotoNextObject () ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 134)) ;
  cEnumerator_formalParameterListAST enumerator_8166 (constinArgument_inRoutineSignatureAST, kENUMERATION_UP) ;
  while (enumerator_8166.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_type_8208 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_8166.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)) ;
    GALGAS_string var_formalArgumentCppName_8312 ;
    switch (enumerator_8166.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8312 = GALGAS_string ("inArgument_").add_operation (enumerator_8166.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 140)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = enumerator_8166.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 142)) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 144)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8312 = GALGAS_string ("outArgument_").add_operation (enumerator_8166.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 147)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 147)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8312 = GALGAS_string ("ioArgument_").add_operation (enumerator_8166.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 150)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = enumerator_8166.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 152)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 159)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8312 = GALGAS_string ("constinArgument_").add_operation (enumerator_8166.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 167)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_8166.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 169)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_8166.current_mFormalArgumentName (HERE), var_type_8208, var_formalArgumentCppName_8312, var_formalArgumentCppName_8312, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 176)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_8166.current_mFormalSelector (HERE), enumerator_8166.current_mFormalArgumentPassingMode (HERE), var_type_8208, enumerator_8166.current_mFormalArgumentName (HERE), var_formalArgumentCppName_8312  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 184)) ;
    enumerator_8166.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                 const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                 const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                 const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                 const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                 const GALGAS_location constinArgument_inEndOfMethodLocation,
                                 GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                 GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_11211 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("semanticAnalysis.galgas", 200)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_11392 (constinArgument_inNonMutableTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_11392.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_11211, enumerator_11392.current_mPropertyName (HERE), enumerator_11392.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 207)).add_operation (enumerator_11392.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 207)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 207)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 204)) ;
        }
        enumerator_11392.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 213)).boolEnum () ;
    if (kBoolTrue == test_1) {
      cEnumerator_typedPropertyList enumerator_11877 (constinArgument_inMutableTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_11877.hasCurrentObject ()) {
        {
        extensionSetter_insertMutableProperty (var_variableMap_11211, enumerator_11877.current_mPropertyName (HERE), enumerator_11877.current_mPropertyTypeEntry (HERE), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 218)).add_operation (enumerator_11877.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 218)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 218)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 215)) ;
        }
        enumerator_11877.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inRoutineSignatureAST, var_variableMap_11211, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 224)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 231)) ;
  cEnumerator_semanticInstructionListAST enumerator_12522 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_12522.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_12522.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_11211, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)) ;
    enumerator_12522.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_11211, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 242)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externFunctionDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_13380 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 256)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13380, var_nameForUsefulness_13380, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 257)) ;
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_13543 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 259)) ;
  const GALGAS_externFunctionDeclarationAST temp_1 = this ;
  cEnumerator_formalInputParameterListAST enumerator_13668 (temp_1.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_13668.hasCurrentObject ()) {
    var_formalArgumentList_13543.addAssign_operation (enumerator_13668.current_mFormalSelector (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_13668.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 263)), enumerator_13668.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_13668.current_mFormalArgumentName (HERE), enumerator_13668.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 261)) ;
    enumerator_13668.gotoNextObject () ;
  }
  const GALGAS_externFunctionDeclarationAST temp_2 = this ;
  const GALGAS_externFunctionDeclarationAST temp_3 = this ;
  const GALGAS_externFunctionDeclarationAST temp_4 = this ;
  const GALGAS_externFunctionDeclarationAST temp_5 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (temp_2.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 269)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_3.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)), temp_4.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_13543, extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_5.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 275))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 270))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 268)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_externRoutineDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_externRoutineDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_14827 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 290)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14827, var_nameForUsefulness_14827, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 291)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_14990 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 293)) ;
  const GALGAS_externRoutineDeclarationAST temp_1 = this ;
  cEnumerator_formalParameterListAST enumerator_15125 (temp_1.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_15125.hasCurrentObject ()) {
    var_formalArgumentList_14990.addAssign_operation (enumerator_15125.current_mFormalSelector (HERE), enumerator_15125.current_mFormalArgumentPassingMode (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_15125.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 298)), enumerator_15125.current_mFormalArgumentName (HERE), enumerator_15125.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 295)) ;
    enumerator_15125.gotoNextObject () ;
  }
  const GALGAS_externRoutineDeclarationAST temp_2 = this ;
  const GALGAS_externRoutineDeclarationAST temp_3 = this ;
  const GALGAS_externRoutineDeclarationAST temp_4 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (temp_2.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 303)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (temp_3.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 306)), temp_4.readProperty_mRoutineName ().readProperty_string (), var_formalArgumentList_14990  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 304))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 302)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_procDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                       const GALGAS_string /* constinArgument_inProductDirectory */,
                                                       const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                       const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                       GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_procDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_16207 = function_procedureNameForUsefulEntitiesGraph (temp_0.readProperty_mRoutineName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 322)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16207, var_nameForUsefulness_16207, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 323)) ;
  }
  GALGAS_analysisContext var_analysisContext_16384 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 329)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 325)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_16902 ;
  GALGAS_formalParameterListForGeneration var_formalArgumentList_16930 ;
  {
  const GALGAS_procDeclarationAST temp_1 = this ;
  const GALGAS_procDeclarationAST temp_2 = this ;
  const GALGAS_procDeclarationAST temp_3 = this ;
  routine_analyzeRoutineBody (var_nameForUsefulness_16207, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_16384, temp_1.readProperty_mFormalArgumentList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 338)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 339)), temp_2.readProperty_mRoutineInstructionList (), temp_3.readProperty_mEndOfRoutineInstructionList (), var_instructionList_16902, var_formalArgumentList_16930, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 333)) ;
  }
  const GALGAS_procDeclarationAST temp_4 = this ;
  const GALGAS_procDeclarationAST temp_5 = this ;
  const GALGAS_procDeclarationAST temp_6 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (temp_4.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 347)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (temp_5.readProperty_mRoutineName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 350)), temp_6.readProperty_mRoutineName ().readProperty_string (), var_formalArgumentList_16930, GALGAS_bool (false), var_instructionList_16902  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 348))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 346)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                  const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                  const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                  const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                  const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                  const GALGAS_lstring constinArgument_inReturnVariableName,
                                  const GALGAS_lstring constinArgument_inResultTypeName,
                                  const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                  GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                  GALGAS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_18128 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("semanticAnalysis.galgas", 376)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inAnalysisContext.readProperty_requiresSelfForAccessingProperty ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 379)).boolEnum () ;
    if (kBoolTrue == test_0) {
      cEnumerator_typedPropertyList enumerator_18373 (constinArgument_inTypedAttributeList, kENUMERATION_UP) ;
      while (enumerator_18373.hasCurrentObject ()) {
        {
        extensionSetter_insertNonMutableProperty (var_variableMap_18128, enumerator_18373.current_mPropertyName (HERE), enumerator_18373.current_mPropertyTypeEntry (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 384)).add_operation (enumerator_18373.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 384)), constinArgument_inAnalysisContext.readProperty_mSelfObjectCppName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 381)) ;
        }
        enumerator_18373.gotoNextObject () ;
      }
    }
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 390)) ;
  cEnumerator_formalInputParameterListAST enumerator_18859 (constinArgument_inFunctionSignature, kENUMERATION_UP) ;
  while (enumerator_18859.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntry var_parameterType_18908 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), enumerator_18859.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 392)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_18859.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_cppName_19041 = GALGAS_string ("constinArgument_").add_operation (enumerator_18859.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 394)) ;
        outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18859.current_mFormalSelector (HERE), var_parameterType_18908, var_cppName_19041, enumerator_18859.current_mFormalArgumentName (HERE), enumerator_18859.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 395)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = enumerator_18859.current_mIsUnused (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_18128, enumerator_18859.current_mFormalArgumentName (HERE), var_parameterType_18908, var_cppName_19041, var_cppName_19041, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 402)) ;
            }
          }
        }
        if (kBoolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_18128, enumerator_18859.current_mFormalArgumentName (HERE), var_parameterType_18908, var_cppName_19041, var_cppName_19041, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 404)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_1) {
      GALGAS_string var_cppName_19588 = GALGAS_string ("inArgument_").add_operation (enumerator_18859.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 407)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18859.current_mFormalSelector (HERE), var_parameterType_18908, var_cppName_19588, enumerator_18859.current_mFormalArgumentName (HERE), enumerator_18859.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 408)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = enumerator_18859.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_18128, enumerator_18859.current_mFormalArgumentName (HERE), var_parameterType_18908, var_cppName_19588, var_cppName_19588, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 415)) ;
          }
        }
      }
      if (kBoolFalse == test_3) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_18128, enumerator_18859.current_mFormalArgumentName (HERE), var_parameterType_18908, var_cppName_19588, var_cppName_19588, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 417)) ;
        }
      }
    }
    enumerator_18859.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 422)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 423)) ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_18128, constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 424)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 426)) ;
  cEnumerator_semanticInstructionListAST enumerator_20575 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_20575.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_20575.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_18128, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 428)) ;
    enumerator_20575.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_18128, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 437)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           C_Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_functionDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_21415 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 451)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21415, var_nameForUsefulness_21415, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 452)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_21415  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 454)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_21682 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 461)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 457)) ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_22204 ;
  GALGAS_unifiedTypeMapEntry var_returnType_22224 ;
  GALGAS_string var_resultVariableCppName_22255 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_22301 ;
  {
  const GALGAS_functionDeclarationAST temp_3 = this ;
  const GALGAS_functionDeclarationAST temp_4 = this ;
  const GALGAS_functionDeclarationAST temp_5 = this ;
  const GALGAS_functionDeclarationAST temp_6 = this ;
  const GALGAS_functionDeclarationAST temp_7 = this ;
  routine_analyzeFunctionBody (var_nameForUsefulness_21415, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21682, temp_3.readProperty_mFormalArgumentList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 470)), GALGAS_string::makeEmptyString (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultVariableName (), temp_6.readProperty_mResultTypeName (), temp_7.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_22204, var_returnType_22224, var_resultVariableCppName_22255, var_semanticInstructionListForGeneration_22301, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 465)) ;
  }
  const GALGAS_functionDeclarationAST temp_8 = this ;
  const GALGAS_functionDeclarationAST temp_9 = this ;
  const GALGAS_functionDeclarationAST temp_10 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 483)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_9.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 486)), temp_10.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_22204, var_returnType_22224, var_resultVariableCppName_22255, var_semanticInstructionListForGeneration_22301  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 484))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 482)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_onceFunctionDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_string /* constinArgument_inProductDirectory */,
                                                               const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                               const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                               GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_onceFunctionDeclarationAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_23241 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 506)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_23241, var_nameForUsefulness_23241, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 507)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_onceFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_mIsUsefull ().boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_23241  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 509)) ;
    }
  }
  GALGAS_analysisContext var_analysisContext_23508 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 516)), GALGAS_string::makeEmptyString (), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 512)) ;
  GALGAS_unifiedTypeMapEntry var_returnType_24030 ;
  GALGAS_string var_resultVariableCppName_24061 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_24107 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_3 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_4 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_5 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_6 = this ;
  GALGAS_formalInputParameterListForGeneration joker_24009 ; // Joker input parameter
  routine_analyzeFunctionBody (var_nameForUsefulness_23241, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23508, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 524)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 525)), GALGAS_string::makeEmptyString (), temp_3.readProperty_mFunctionInstructionList (), temp_4.readProperty_mResultVariableName (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), joker_24009, var_returnType_24030, var_resultVariableCppName_24061, var_semanticInstructionListForGeneration_24107, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 520)) ;
  }
  const GALGAS_onceFunctionDeclarationAST temp_7 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_8 = this ;
  const GALGAS_onceFunctionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 538)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 541)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_returnType_24030, var_resultVariableCppName_24061, var_semanticInstructionListForGeneration_24107  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 539))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 537)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_filewrapperDeclarationAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                              const GALGAS_string /* constinArgument_inProductDirectory */,
                                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                              const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                              GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_filewrapperDeclarationAST temp_0 = this ;
  GALGAS_lstring var_filewrapperNameForUsefulness_25290 = function_filewrapperNameForUsefulEntitiesGraph (temp_0.readProperty_mFilewrapperName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 563)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_25290, var_filewrapperNameForUsefulness_25290, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 564)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_25609 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_25659 ;
  const GALGAS_filewrapperDeclarationAST temp_1 = this ;
  GALGAS_lstring joker_25561 ; // Joker input parameter
  GALGAS_lstringlist joker_25568 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_25665_2 ; // Joker input parameter
  GALGAS_bool joker_25665_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mFilewrapperMap ().method_searchKey (temp_1.readProperty_mFilewrapperName (), joker_25561, joker_25568, var_wrapperFileMap_25609, var_wrapperDirectoryMap_25659, joker_25665_2, joker_25665_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 566)) ;
  GALGAS_string var_absoluteSourcePath_25729 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_3 = this ;
    test_2 = GALGAS_bool (kIsEqual, temp_3.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 576)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_filewrapperDeclarationAST temp_4 = this ;
      var_absoluteSourcePath_25729 = temp_4.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_filewrapperDeclarationAST temp_5 = this ;
    const GALGAS_filewrapperDeclarationAST temp_6 = this ;
    var_absoluteSourcePath_25729 = temp_5.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 579)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)).add_operation (temp_6.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 579)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_absoluteSourcePath_25729.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 581)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 581)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_filewrapperDeclarationAST temp_8 = this ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_25729, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 582)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 582)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 582)) ;
    }
  }
  if (kBoolFalse == test_7) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_26263 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
    const GALGAS_filewrapperDeclarationAST temp_10 = this ;
    cEnumerator_filewrapperTemplateListAST enumerator_26369 (temp_10.readProperty_mFilewrapperTemplateList (), kENUMERATION_UP) ;
    while (enumerator_26369.hasCurrentObject ()) {
      const GALGAS_filewrapperDeclarationAST temp_11 = this ;
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_26453 = function_filewrapperTemplateNameForUsefulEntitiesGraph (temp_11.readProperty_mFilewrapperName (), enumerator_26369.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 587)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_26453, var_filewrapperTemplateNameForUsefulness_26453, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 591)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_26453, var_filewrapperNameForUsefulness_25290 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 592)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsEqual, enumerator_26369.current_mFilewrapperTemplatePath (HERE).readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 593)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_26369.current_mFilewrapperTemplatePath (HERE).readProperty_location (), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_25729, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 595)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 595)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 594)) ;
        }
      }
      GALGAS_string var_absoluteTemplatePath_27070 = var_absoluteSourcePath_25729.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 597)).add_operation (enumerator_26369.current_mFilewrapperTemplatePath (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 597)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_27237 ;
      var_resultingInstructionList_27237.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_27070, enumerator_26369.current_mFilewrapperTemplatePath (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 600)), var_resultingInstructionList_27237  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 599)) ;
      GALGAS_templateVariableMap var_templateVariableMap_27410 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 602)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_27505 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 603)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_27591 (enumerator_26369.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
      while (enumerator_27591.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_27657 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_27591.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 605)) ;
        GALGAS_string var_cppVarName_27754 = GALGAS_string ("in_").add_operation (enumerator_27591.current_mFormalArgumentName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 606)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 606)) ;
        {
        var_templateVariableMap_27410.setter_insertKey (enumerator_27591.current_mFormalArgumentName (HERE), var_type_27657, var_cppVarName_27754, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 607)) ;
        }
        var_filewrapperTemplateFormalInputParameters_27505.addAssign_operation (enumerator_27591.current_mFormalTemplateSelector (HERE), var_type_27657, var_cppVarName_27754, enumerator_27591.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608)) ;
        enumerator_27591.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_28104 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 611)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_28181 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_27410  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 612)) ;
      {
      routine_templateInstructionListAnalysis (var_filewrapperNameForUsefulness_25290, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_28181, var_resultingInstructionList_27237, var_templateInstructionListForGeneration_28104, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 616)) ;
      }
      var_filewrapperTemplateListForGeneration_26263.addAssign_operation (enumerator_26369.current_mFilewrapperTemplateName (HERE).readProperty_string (), var_filewrapperTemplateFormalInputParameters_27505, var_templateInstructionListForGeneration_28104  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 624)) ;
      enumerator_26369.gotoNextObject () ;
    }
    const GALGAS_filewrapperDeclarationAST temp_14 = this ;
    const GALGAS_filewrapperDeclarationAST temp_15 = this ;
    const GALGAS_filewrapperDeclarationAST temp_16 = this ;
    const GALGAS_filewrapperDeclarationAST temp_17 = this ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (temp_14.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 631)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (temp_15.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 634)), temp_16.readProperty_mFilewrapperName ().readProperty_string (), temp_17.readProperty_mFilewrapperPath ().readProperty_string (), var_wrapperFileMap_25609, var_wrapperDirectoryMap_25659, var_filewrapperTemplateListForGeneration_26263  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 632))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 630)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_29762 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 655)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_29762, var_nameForUsefulness_29762, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 656)) ;
  }
  GALGAS_terminalMap var_terminalMap_30088 ;
  GALGAS_indexingListAST var_indexingListAST_30130 ;
  GALGAS_lstring var_indexingDirectory_30166 ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = this ;
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), var_terminalMap_30088, var_indexingListAST_30130, var_indexingDirectory_30166, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 658)) ;
  GALGAS_stringset var_indexNameSet_30262 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 665)) ;
  cEnumerator_indexingListAST enumerator_30287 (var_indexingListAST_30130, kENUMERATION_UP) ;
  while (enumerator_30287.hasCurrentObject ()) {
    var_indexNameSet_30262.addAssign_operation (enumerator_30287.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 667)) ;
    enumerator_30287.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_30379 = var_indexingDirectory_30166.readProperty_location ().getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 669)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 669)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 671)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 671)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 671)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GALGAS_string var_lexiqueName_30543 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_31001 ;
      {
      const GALGAS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GALGAS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent (var_nameForUsefulness_29762, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_30543, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_30088, var_indexNameSet_30262, var_hasIndexing_30379, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_31001, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 673)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_31001  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 688)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string constinArgument_inProductDirectory,
                                                                  const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 705)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_galgas_33_GrammarComponentAST temp_1 = this ;
      inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (temp_1.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = this ;
  GALGAS_lstring var_grammarNameForUsefulness_31785 = function_grammarNameForUsefulEntitiesGraph (temp_2.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_31785, var_grammarNameForUsefulness_31785, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_32097 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 712)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_32181 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 713)) ;
  GALGAS_lstring var_lexiqueComponentName_32221 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_32349 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 715)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_32403 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 716)) ;
  GALGAS_uint var_addedNonTerminalCount_32442 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = this ;
  cEnumerator_lstringlist enumerator_32473 (temp_3.readProperty_mSyntaxComponents (), kENUMERATION_UP) ;
  while (enumerator_32473.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_32535 = function_syntaxNameForUsefulEntitiesGraph (enumerator_32473.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31785, var_syntaxNameForUsefulness_32535 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 720)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_32721 = var_addedNonTerminalCount_32442 ;
    GALGAS_lstring var_lexiqueName_32876 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_32945 ;
    GALGAS_syntaxRuleListAST var_ruleList_32984 ;
    GALGAS_bool var_hasTranslateFeature_33021 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_32473.current_mValue (HERE), var_lexiqueName_32876, var_nonterminalDeclarationList_32945, var_ruleList_32984, var_hasTranslateFeature_33021, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 722)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_33060 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_32876, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 729)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31785, var_lexiqueNameForUsefulness_33060 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 730)) ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      const GALGAS_galgas_33_GrammarComponentAST temp_5 = this ;
      test_4 = temp_5.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_33021.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 732)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 732)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_galgas_33_GrammarComponentAST temp_6 = this ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_32473.current_mValue (HERE).readProperty_location (), GALGAS_string ("as '").add_operation (temp_6.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_galgas_33_GrammarComponentAST temp_9 = this ;
        test_8 = var_hasTranslateFeature_33021.operator_and (temp_9.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 734)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_galgas_33_GrammarComponentAST temp_10 = this ;
          TC_Array <C_FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("as '").add_operation (enumerator_32473.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 735)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 735)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 735)) ;
        }
      }
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_32221.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        var_lexiqueComponentName_32221 = var_lexiqueName_32876 ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsNotEqual, var_lexiqueName_32876.readProperty_string ().objectCompare (var_lexiqueComponentName_32221.readProperty_string ())).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (enumerator_32473.current_mValue (HERE).readProperty_location (), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_32876.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 741)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)).add_operation (var_lexiqueComponentName_32221.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)), fixItArray14  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 741)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_32181, var_nonterminalDeclarationList_32945, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 746)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_32181, var_ruleList_32984, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 751)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_32181, enumerator_32473.current_mValue (HERE), var_ruleList_32984, var_actuallyUsedTerminalSymbolMap_32097, var_syntaxComponentListForGrammarAnalysis_32349, var_addedNonTerminalCount_32442, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)) ;
    }
    GALGAS_uint var_i_34682 = GALGAS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_32442.isValid ()) {
      uint32_t variant_34695 = var_addedNonTerminalCount_32442.uintValue () ;
      bool loop_34695 = true ;
      while (loop_34695) {
        loop_34695 = GALGAS_bool (kIsStrictInf, var_i_34682.objectCompare (var_addedNonTerminalCount_32442.substract_operation (var_addedNonTerminalCountRef_32721, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)))).isValid () ;
        if (loop_34695) {
          loop_34695 = GALGAS_bool (kIsStrictInf, var_i_34682.objectCompare (var_addedNonTerminalCount_32442.substract_operation (var_addedNonTerminalCountRef_32721, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 765)))).boolValue () ;
        }
        if (loop_34695 && (0 == variant_34695)) {
          loop_34695 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 765)) ;
        }
        if (loop_34695) {
          variant_34695 -- ;
          var_nonTerminalToAddList_32403.addAssign_operation (enumerator_32473.current_mValue (HERE).readProperty_string (), var_i_34682  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 766)) ;
          var_i_34682.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 767)) ;
        }
      }
    }
    enumerator_32473.gotoNextObject () ;
  }
  GALGAS_lstring var_inIndexingDirectory_35176 ;
  GALGAS_terminalMap joker_35064 ; // Joker input parameter
  GALGAS_indexingListAST joker_35100 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (var_lexiqueComponentName_32221, joker_35064, joker_35100, var_inIndexingDirectory_35176, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 771)) ;
  GALGAS_bool var_hasIndexing_35204 = var_inIndexingDirectory_35176.readProperty_location ().getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 777)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 777)) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    const GALGAS_galgas_33_GrammarComponentAST temp_16 = this ;
    test_15 = var_hasIndexing_35204.operator_and (temp_16.readProperty_mHasIndexing ().readProperty_bool ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 778)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 778)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_galgas_33_GrammarComponentAST temp_17 = this ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mGrammarComponentName ().readProperty_location (), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_32221.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)), fixItArray18  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)) ;
    }
  }
  if (kBoolFalse == test_15) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      const GALGAS_galgas_33_GrammarComponentAST temp_20 = this ;
      test_19 = var_hasIndexing_35204.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 780)).operator_and (temp_20.readProperty_mHasIndexing ().readProperty_bool () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 780)).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GALGAS_galgas_33_GrammarComponentAST temp_21 = this ;
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (temp_21.readProperty_mHasIndexing ().readProperty_location (), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_32221.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 781)) ;
      }
    }
  }
  GALGAS_uint var_startSymbolIndex_35811 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_35883 ;
  const GALGAS_galgas_33_GrammarComponentAST temp_23 = this ;
  var_nonTerminalMapForGrammarAnalysis_32181.method_searchKey (temp_23.readProperty_mStartSymbolName (), var_startSymbolIndex_35811, var_startSymbolAltMap_35883, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 785)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_24 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_25 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_26 = this ;
  routine_checkLabelMap (temp_24.readProperty_mStartSymbolName ().readProperty_location (), temp_25.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_32181.getter_locationForKey (temp_26.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 794)), var_startSymbolAltMap_35883, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 791)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_36282 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 798)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_27 = this ;
  cEnumerator_lstringlist enumerator_36301 (temp_27.readProperty_mUnusedNonterminalList (), kENUMERATION_UP) ;
  while (enumerator_36301.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_36420 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_36422 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_32181.method_searchKey (enumerator_36301.current_mValue (HERE), var_nonterminalIndex_36420, joker_36422, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 800)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_36282.setter_insertKey (enumerator_36301.current_mValue (HERE), var_nonterminalIndex_36420, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 801)) ;
    }
    enumerator_36301.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_36706 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 804)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36773 (var_nonTerminalMapForGrammarAnalysis_32181, kENUMERATION_UP) ;
  while (enumerator_36773.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_36706.addAssign_operation (enumerator_36773.current_lkey (HERE), enumerator_36773.current_mNonTerminalIndex (HERE), enumerator_36773.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 806)) ;
    enumerator_36773.gotoNextObject () ;
  }
  enumGalgasBool test_28 = kBoolTrue ;
  if (kBoolTrue == test_28) {
    test_28 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_28) {
      {
      const GALGAS_galgas_33_GrammarComponentAST temp_29 = this ;
      const GALGAS_galgas_33_GrammarComponentAST temp_30 = this ;
      routine_emitProductionRulesInTexFile (constinArgument_inProductDirectory, temp_29.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_32181, var_syntaxComponentListForGrammarAnalysis_32349, temp_30.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 810)) ;
      }
    }
  }
  GALGAS_stringset var_implementationFileHeader_37631 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 821)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_37690 (var_nonTerminalMapForGrammarAnalysis_32181, kENUMERATION_UP) ;
  while (enumerator_37690.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_37726 (enumerator_37690.current (HERE).readProperty_mNonterminalSymbolParametersMap (), kENUMERATION_UP) ;
    while (enumerator_37726.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_37867 (enumerator_37726.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_37867.hasCurrentObject ()) {
        switch (enumerator_37867.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_38018 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_37867.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 827)) ;
            extensionMethod_addHeaderFileName (var_t_38018, var_implementationFileHeader_37631, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 828)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_37867.gotoNextObject () ;
      }
      enumerator_37726.gotoNextObject () ;
    }
    enumerator_37690.gotoNextObject () ;
  }
  enumGalgasBool test_31 = kBoolTrue ;
  if (kBoolTrue == test_31) {
    test_31 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_31) {
      var_implementationFileHeader_37631 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 835)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_32 = this ;
  GALGAS_string var_HTMLFilePath_38428 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 838)).add_operation (temp_32.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 838)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 838)) ;
  GALGAS_string var_grammarCppFile_38986 ;
  GALGAS_string var_grammarHTMLHelperContents_39029 ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_33 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_35 = this ;
  GALGAS_string temp_36 ;
  const enumGalgasBool test_37 = temp_35.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (kBoolTrue == test_37) {
    temp_36 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 851)) ;
  }else if (kBoolFalse == test_37) {
    temp_36 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 840)), temp_33.readProperty_mGrammarComponentName (), temp_34.readProperty_mGrammarClass (), var_startSymbolIndex_35811, var_lexiqueComponentName_32221.readProperty_string (), var_actuallyUsedTerminalSymbolMap_32097, var_syntaxComponentListForGrammarAnalysis_32349, var_unusedNonTerminalSymbolsForGrammar_36282, var_HTMLFilePath_38428, var_nonTerminalSymbolSortedListForGrammarAnalysis_36706, var_hasIndexing_35204, temp_36, var_grammarCppFile_38986, var_grammarHTMLHelperContents_39029, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 839)) ;
  }
  enumGalgasBool test_38 = kBoolTrue ;
  if (kBoolTrue == test_38) {
    test_38 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_38) {
      var_HTMLFilePath_38428.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 857)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 857)) ;
      GALGAS_bool joker_39342 ; // Joker input parameter
      var_grammarHTMLHelperContents_39029.method_writeToFileWhenDifferentContents (var_HTMLFilePath_38428, joker_39342, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 858)) ;
    }
  }
  if (kBoolFalse == test_38) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_38428, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 860)) ;
    }
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_39 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_40 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_41 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_42 = this ;
  const GALGAS_galgas_33_GrammarComponentAST temp_43 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (temp_39.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 867)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 867)), temp_40.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_32221.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_32181, var_nonTerminalToAddList_32403, var_hasIndexing_35204, temp_41.readProperty_mSyntaxComponents (), temp_42.readProperty_mStartSymbolName ().readProperty_string (), temp_43.readProperty_mHasTranslateFeature (), var_grammarCppFile_38986  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 865))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 863)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_lexiqueComponentAST::method_semanticAnalysis (GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                        const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                        const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                        C_Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_lexiqueComponentAST temp_0 = this ;
  GALGAS_lstring var_nameForUsefulness_40436 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 890)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_40436, var_nameForUsefulness_40436, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 891)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_40686 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_40821 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_40821, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 896)) ;
  }
  const GALGAS_lexiqueComponentAST temp_1 = this ;
  cEnumerator_externRoutineListAST enumerator_41002 (temp_1.readProperty_mExternRoutineList (), kENUMERATION_UP) ;
  while (enumerator_41002.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_41074 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 899)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_41172 (enumerator_41002.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_41172.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_41294 ;
      var_lexicalTypeMap_40686.method_searchKey (enumerator_41172.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_41294, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)) ;
      var_lexicalRoutineFormalArgumentList_41074.addAssign_operation (enumerator_41172.current_mPassingMode (HERE), var_lexicalFormalArgumentType_41294, enumerator_41172.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 902)) ;
      enumerator_41172.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap_40821.setter_insertKey (enumerator_41002.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_41074, enumerator_41002.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 904)) ;
    }
    enumerator_41002.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_41642 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_41642, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 908)) ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = this ;
  cEnumerator_externFunctionListAST enumerator_41828 (temp_2.readProperty_mExternFunctionList (), kENUMERATION_UP) ;
  while (enumerator_41828.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList_41937 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 911)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_41988 (enumerator_41828.current_mLexicalFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_41988.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_42111 ;
      var_lexicalTypeMap_40686.method_searchKey (enumerator_41988.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_42111, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 913)) ;
      var_lexicalFunctionFormalArgumentList_41937.addAssign_operation (var_lexicalFormalArgumentType_42111, enumerator_41988.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 914)) ;
      enumerator_41988.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType_42293 ;
    var_lexicalTypeMap_40686.method_searchKey (enumerator_41828.current_mReturnedTypeName (HERE), var_returnedArgumentType_42293, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 916)) ;
    {
    var_lexicalFunctionMap_41642.setter_insertKey (enumerator_41828.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList_41937, var_returnedArgumentType_42293, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 917)) ;
    }
    enumerator_41828.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeTestFunctions_42577 ;
  {
  const GALGAS_lexiqueComponentAST temp_3 = this ;
  routine_lexicalUnicodeTestFunctionAnalysis (temp_3.readProperty_mLexicalFunctionListAST (), var_unicodeTestFunctions_42577, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 920)) ;
  }
  const GALGAS_lexiqueComponentAST temp_4 = this ;
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_42672 = GALGAS_lexiqueAnalysisContext::constructor_new (temp_4.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_40821, var_lexicalFunctionMap_41642, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 926)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 927)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 928)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 929)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 930)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 931)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 932)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 933)), var_unicodeTestFunctions_42577  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 922)) ;
  GALGAS_bigint var_styleIndex_43067 = GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 937)) ;
  const GALGAS_lexiqueComponentAST temp_5 = this ;
  cEnumerator_lexicalStyleListAST enumerator_43093 (temp_5.readProperty_mLexicalStyleList (), kENUMERATION_UP) ;
  while (enumerator_43093.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_42672.mProperty_mStyleMap.setter_insertKey (enumerator_43093.current_mName (HERE), enumerator_43093.current_mComment (HERE), var_styleIndex_43067.getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 939)) ;
    }
    var_styleIndex_43067.plusAssign_operation(GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 940)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 940)) ;
    enumerator_43093.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_6 = this ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_40686, temp_6.readProperty_mLexicalAttributeList (), var_lexiqueAnalysisContext_42672.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 943)) ;
  }
  const GALGAS_lexiqueComponentAST temp_7 = this ;
  cEnumerator_terminalDeclarationListAST enumerator_43561 (temp_7.readProperty_mTerminalDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_43561.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_43631 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (kIsStrictSup, enumerator_43561.current_mStyle (HERE).readProperty_string ().getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 951)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 951)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 951)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_lstring joker_43734 ; // Joker input parameter
        var_lexiqueAnalysisContext_42672.readProperty_mStyleMap ().method_searchKey (enumerator_43561.current_mStyle (HERE), joker_43734, var_terminalStyleIndex_43631, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 952)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_43789 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 954)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_43856 (enumerator_43561.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_43856.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_43985 ;
      var_lexiqueAnalysisContext_42672.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_43856.current_mAttributeName (HERE), var_attributeLexicalType_43985, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 956)) ;
      var_argumentTypeList_43789.addAssign_operation (enumerator_43856.current_mFormalSelector (HERE), enumerator_43856.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_43985  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 957)) ;
      enumerator_43856.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_42672.mProperty_mTerminalMap.setter_insertKey (enumerator_43561.current_mName (HERE), var_argumentTypeList_43789, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark_44189 = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection_44221 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_44244 (enumerator_43561.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_44244.hasCurrentObject ()) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsEqual, enumerator_44244.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = var_atomicSelection_44221.boolEnum () ;
            if (kBoolTrue == test_10) {
              var_atomicSelection_44221 = GALGAS_bool (false) ;
            }
          }
          if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_44244.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 967)) ;
          }
        }
      }
      if (kBoolFalse == test_9) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (kIsNotEqual, enumerator_44244.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_44244.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 970)) ;
          }
        }
        if (kBoolFalse == test_12) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_isEndOfTemplateMark_44189.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_44244.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray15  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 972)) ;
            }
          }
          if (kBoolFalse == test_14) {
            var_isEndOfTemplateMark_44189 = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_44244.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_42672.mProperty_mTerminalList.addAssign_operation (enumerator_43561.current_mName (HERE), var_argumentTypeList_43789, enumerator_43561.current_mSyntaxErrorMessage (HERE).readProperty_string (), var_isEndOfTemplateMark_44189, var_atomicSelection_44221, var_terminalStyleIndex_43631  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 977)) ;
    enumerator_43561.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_16 = this ;
  cEnumerator_lexicalListDeclarationListAST enumerator_45075 (temp_16.readProperty_mLexicalListDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_45075.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_45148 = GALGAS_uint (uint32_t (0U)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (kIsStrictSup, enumerator_45075.current_mStyle (HERE).readProperty_string ().getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 987)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 987)))).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_lstring joker_45251 ; // Joker input parameter
        var_lexiqueAnalysisContext_42672.readProperty_mStyleMap ().method_searchKey (enumerator_45075.current_mStyle (HERE), joker_45251, var_terminalStyleIndex_45148, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 988)) ;
      }
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_45306 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 990)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_45373 (enumerator_45075.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_45373.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_45502 ;
      var_lexiqueAnalysisContext_42672.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_45373.current_mAttributeName (HERE), var_attributeLexicalType_45502, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)) ;
      var_argumentTypeList_45306.addAssign_operation (enumerator_45373.current_mFormalSelector (HERE), enumerator_45373.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_45502  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 993)) ;
      enumerator_45373.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_45656 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 995)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_45685 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 996)) ;
    cEnumerator_lexicalListEntryListAST enumerator_45764 (enumerator_45075.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_45764.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_45811 = enumerator_45075.current_mSyntaxErrorMessage (HERE).readProperty_string ().getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_45764.current_mTerminalSpelling (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 998)) ;
      GALGAS_bool var_isEndOfTemplateMark_45936 = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection_45970 = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_45995 (enumerator_45764.current_mAttributeList (HERE), kENUMERATION_UP) ;
      while (enumerator_45995.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (kIsEqual, enumerator_45995.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = var_atomicSelection_45970.boolEnum () ;
              if (kBoolTrue == test_19) {
                var_atomicSelection_45970 = GALGAS_bool (false) ;
              }
            }
            if (kBoolFalse == test_19) {
              TC_Array <C_FixItDescription> fixItArray20 ;
              inCompiler->emitSemanticError (enumerator_45995.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray20  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1006)) ;
            }
          }
        }
        if (kBoolFalse == test_18) {
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            test_21 = GALGAS_bool (kIsNotEqual, enumerator_45995.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray22 ;
              inCompiler->emitSemanticError (enumerator_45995.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray22  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1009)) ;
            }
          }
          if (kBoolFalse == test_21) {
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              test_23 = var_isEndOfTemplateMark_45936.boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <C_FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_45995.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray24  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1011)) ;
              }
            }
            if (kBoolFalse == test_23) {
              var_isEndOfTemplateMark_45936 = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_45995.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext_42672.mProperty_mTerminalList.addAssign_operation (enumerator_45764.current_mTerminalSpelling (HERE), var_argumentTypeList_45306, var_syntaxErrorMessage_45811, var_isEndOfTemplateMark_45936, var_atomicSelection_45970, var_terminalStyleIndex_45148  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1016)) ;
      {
      var_lexiqueAnalysisContext_42672.mProperty_mTerminalMap.setter_insertKey (enumerator_45764.current_mTerminalSpelling (HERE), var_argumentTypeList_45306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1023)) ;
      }
      {
      var_lexicalTokenListMap_45656.setter_insertKey (enumerator_45764.current_mEntrySpelling (HERE), enumerator_45764.current_mTerminalSpelling (HERE), enumerator_45764.current_mAttributeList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1024)) ;
      }
      var_tokenSortedlist_45685.addAssign_operation (enumerator_45764.current_mEntrySpelling (HERE).readProperty_string ().getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1025)), enumerator_45764.current_mEntrySpelling (HERE).readProperty_string (), enumerator_45764.current_mTerminalSpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1025)) ;
      var_lexiqueAnalysisContext_42672.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_45764.current_mEntrySpelling (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1026)) ;
      enumerator_45764.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_42672.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_45075.current_mName (HERE), var_lexicalTokenListMap_45656, var_tokenSortedlist_45685, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1028)) ;
    }
    enumerator_45075.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_25 = this ;
  cEnumerator_lexicalMessageDeclarationListAST enumerator_47390 (temp_25.readProperty_mLexicalMessageDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_47390.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_42672.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_47390.current_mMessageName (HERE), enumerator_47390.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1032)) ;
    }
    enumerator_47390.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_26 = this ;
  cEnumerator_lexicalRuleListAST enumerator_47608 (temp_26.readProperty_mLexicalRuleList (), kENUMERATION_UP) ;
  while (enumerator_47608.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_47608.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_42672, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)) ;
    enumerator_47608.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_47799 (var_lexiqueAnalysisContext_42672.readProperty_mLexicalMessageMap (), kENUMERATION_UP) ;
  while (enumerator_47799.hasCurrentObject ()) {
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = enumerator_47799.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1040)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <C_FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticWarning (enumerator_47799.current_lkey (HERE).readProperty_location (), GALGAS_string ("unused message"), fixItArray28  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)) ;
      }
    }
    enumerator_47799.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_29 = this ;
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_48033 (temp_29.readProperty_mTemplateDelimitorList (), kENUMERATION_UP) ;
  while (enumerator_48033.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_42672.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48033.current_mStartString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1046)) ;
    var_lexiqueAnalysisContext_42672.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48033.current_mEndString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1047)) ;
    GALGAS_bool var_preservesStartDelimiter_48247 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_48270 (enumerator_48033.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_48270.hasCurrentObject ()) {
      enumGalgasBool test_30 = kBoolTrue ;
      if (kBoolTrue == test_30) {
        test_30 = GALGAS_bool (kIsNotEqual, enumerator_48270.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
        if (kBoolTrue == test_30) {
          TC_Array <C_FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticError (enumerator_48270.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'preserved' attribute is allowed here"), fixItArray31  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1051)) ;
        }
      }
      if (kBoolFalse == test_30) {
        enumGalgasBool test_32 = kBoolTrue ;
        if (kBoolTrue == test_32) {
          test_32 = var_preservesStartDelimiter_48247.boolEnum () ;
          if (kBoolTrue == test_32) {
            TC_Array <C_FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticError (enumerator_48270.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'preserved' attribute is already set"), fixItArray33  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1053)) ;
          }
        }
        if (kBoolFalse == test_32) {
          var_preservesStartDelimiter_48247 = GALGAS_bool (true) ;
        }
      }
      enumerator_48270.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_42672.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_48033.current_mStartString (HERE), enumerator_48033.current_mEndString (HERE), var_preservesStartDelimiter_48247  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1058)) ;
    enumerator_48033.gotoNextObject () ;
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    const GALGAS_lexiqueComponentAST temp_35 = this ;
    test_34 = temp_35.readProperty_mIndexingDirectory ().readProperty_location ().getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1061)).boolEnum () ;
    if (kBoolTrue == test_34) {
      const GALGAS_lexiqueComponentAST temp_36 = this ;
      cEnumerator_indexingListAST enumerator_48815 (temp_36.readProperty_mIndexingListAST (), kENUMERATION_UP) ;
      while (enumerator_48815.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_48815.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration"), fixItArray37  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1063)) ;
        enumerator_48815.gotoNextObject () ;
      }
    }
  }
  GALGAS_stringset var_indexNameSet_48985 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1066)) ;
  const GALGAS_lexiqueComponentAST temp_38 = this ;
  cEnumerator_indexingListAST enumerator_49010 (temp_38.readProperty_mIndexingListAST (), kENUMERATION_UP) ;
  while (enumerator_49010.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_indexNameSet_48985.getter_hasKey (enumerator_49010.current_mIndexName (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1068)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_49010.current_mIndexName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_49010.current_mIndexName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)), fixItArray40  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1069)) ;
      }
    }
    var_indexNameSet_48985.addAssign_operation (enumerator_49010.current_mIndexName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1071)) ;
    enumerator_49010.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_41 = this ;
  cEnumerator_templateReplacementListAST enumerator_49327 (temp_41.readProperty_mTemplateReplacementList (), kENUMERATION_UP) ;
  while (enumerator_49327.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_42672.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_49327.current_mMatchString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1075)) ;
    var_lexiqueAnalysisContext_42672.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_49327.current_mReplacementString (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1076)) ;
    enumerator_49327.gotoNextObject () ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1080)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1080)))).boolEnum () ;
    if (kBoolTrue == test_42) {
      const GALGAS_lexiqueComponentAST temp_43 = this ;
      GALGAS_string var_lexiqueClassName_49693 = temp_43.readProperty_mLexiqueComponentName ().readProperty_string () ;
      const GALGAS_lexiqueComponentAST temp_44 = this ;
      GALGAS_string var_headerContents_49766 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName_49693.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1084)), var_lexiqueAnalysisContext_42672, temp_44.readProperty_mTemplateDelimitorList () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1083))) ;
      const GALGAS_lexiqueComponentAST temp_45 = this ;
      const GALGAS_lexiqueComponentAST temp_46 = this ;
      const GALGAS_lexiqueComponentAST temp_47 = this ;
      var_headerContents_49766.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName_49693.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1089)), temp_45.readProperty_mLexicalListDeclarationList (), var_lexiqueAnalysisContext_42672, temp_46.readProperty_mIndexingListAST (), temp_47.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1088))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1088)) ;
      const GALGAS_lexiqueComponentAST temp_48 = this ;
      const GALGAS_lexiqueComponentAST temp_49 = this ;
      const GALGAS_lexiqueComponentAST temp_50 = this ;
      const GALGAS_lexiqueComponentAST temp_51 = this ;
      const GALGAS_lexiqueComponentAST temp_52 = this ;
      const GALGAS_lexiqueComponentAST temp_53 = this ;
      GALGAS_string var_cppContents_50248 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName_49693.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1097)), var_lexiqueAnalysisContext_42672.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_42672.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_42672.readProperty_mTerminalList (), var_lexiqueAnalysisContext_42672.readProperty_mLexicalTokenListMap (), var_lexiqueAnalysisContext_42672.readProperty_mUnicodeStringToGenerate (), temp_48.readProperty_mLexicalRuleList (), var_lexiqueAnalysisContext_42672, temp_49.readProperty_mIndexingDirectory ().readProperty_string (), temp_50.readProperty_mTemplateDelimitorList (), var_lexiqueClassName_49693, temp_51.readProperty_mTemplateReplacementList (), temp_52.readProperty_mLexicalStyleList (), temp_53.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1096))) ;
      const GALGAS_lexiqueComponentAST temp_54 = this ;
      GALGAS_string var_cocoaHeader_50927 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName_49693, var_lexiqueAnalysisContext_42672, temp_54.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1113))) ;
      var_cocoaHeader_50927.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName_49693, var_lexiqueAnalysisContext_42672 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1118)) ;
      const GALGAS_lexiqueComponentAST temp_55 = this ;
      const GALGAS_lexiqueComponentAST temp_56 = this ;
      const GALGAS_lexiqueComponentAST temp_57 = this ;
      const GALGAS_lexiqueComponentAST temp_58 = this ;
      const GALGAS_lexiqueComponentAST temp_59 = this ;
      const GALGAS_lexiqueComponentAST temp_60 = this ;
      const GALGAS_lexiqueComponentAST temp_61 = this ;
      GALGAS_string var_cocoaImplementation_51283 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49693.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1124)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1124)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1124)), var_lexiqueClassName_49693, var_lexiqueAnalysisContext_42672.readProperty_mLexicalAttributeMap (), var_lexiqueAnalysisContext_42672.readProperty_mLexicalMessageMap (), var_lexiqueAnalysisContext_42672.readProperty_mTerminalList (), var_lexiqueAnalysisContext_42672.readProperty_mUnicodeStringToGenerate (), temp_55.readProperty_mLexicalRuleList (), var_lexiqueAnalysisContext_42672, temp_56.readProperty_mTemplateReplacementList (), temp_57.readProperty_mIndexingDirectory ().readProperty_string (), temp_58.readProperty_mIndexingListAST (), temp_59.readProperty_mLexicalStyleList (), temp_60.readProperty_mTemplateDelimitorList (), temp_61.readProperty_mLexicalFunctionListAST () COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1123))) ;
      ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_49693.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1144)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1144)), var_lexiqueClassName_49693, var_headerContents_49766, var_cppContents_50248, var_cocoaHeader_50927, var_cocoaImplementation_51283  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1142))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1140)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1167)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1168)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1169)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1170)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1171)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1172)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1173)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1174)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1175)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1176)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1177)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1178))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1178)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1178)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1179)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1180)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1181))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1181)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1181)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("stringset"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1182))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1182)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1182)), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (GALGAS_string ("lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1183))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1183)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1183))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)) ;
//---
  return result_outPredefinedTypes ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'syntaxFileGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_syntaxFileGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_syntaxFileGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_syntaxFileGenerationTemplate_0,
  0,
  gWrapperAllDirectories_syntaxFileGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_30_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_30 (in_INCLUSION_5F_SET, kENUMERATION_UP) ;
    while (enumerator_30.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_30.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_30_.increment () ;
      enumerator_30.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                               const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                               const GALGAS_nonterminalMap & in_NONTERMINAL_5F_MAP,
                                                                                               const GALGAS_ruleDeclarationList & in_RULE_5F_DECLARATION_5F_LIST,
                                                                                               const GALGAS_uintlist & in_SELECT_5F_METHOD_5F_LIST,
                                                                                               const GALGAS_bool & in_HAS_5F_INDEXING,
                                                                                               const GALGAS_bool & in_HAS_5F_TRANSLATE_5F_FEATURE
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public: virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_550_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_550 (in_NONTERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_550.hasCurrentObject ()) {
      GALGAS_uint index_606_ (0) ;
      if (enumerator_550.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_606 (enumerator_550.current_mLabelMap (HERE), kENUMERATION_UP) ;
        while (enumerator_606.hasCurrentObject ()) {
          result << "  protected: virtual void nt_" ;
          result << enumerator_550.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_606.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_845_IDX (0) ;
          if (enumerator_606.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_845 (enumerator_606.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_845.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_845.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << extensionGetter_identifierRepresentation (enumerator_845.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_845.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_845.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_845.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_845_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_845_IDX.increment () ;
              enumerator_845.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_3 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_3) {
            result << "class C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 28)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_3) {
          }
          result << "class C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) = 0 ;\n"
            "\n" ;
          index_606_.increment () ;
          enumerator_606.gotoNextObject () ;
        }
      }
      result << "  protected: virtual void nt_" ;
      result << enumerator_550.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_4 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "class C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 35)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_4) {
      }
      result << "class C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) = 0 ;\n"
        "\n" ;
      const enumGalgasBool test_5 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  protected: virtual void nt_" ;
        result << enumerator_550.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
        result << "_indexing (class C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) = 0 ;\n"
          "\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_550_.increment () ;
      enumerator_550.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Rule declarations\n" ;
  GALGAS_uint index_2316_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2316 (in_RULE_5F_DECLARATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2316.hasCurrentObject ()) {
      GALGAS_uint index_2454_ (0) ;
      if (enumerator_2316.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2454 (enumerator_2316.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
        while (enumerator_2454.hasCurrentObject ()) {
          result << "  protected: void rule_" ;
          result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2316.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2316.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2454.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2764_IDX (0) ;
          if (enumerator_2454.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2764 (enumerator_2454.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_2764.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2764.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_2764.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2764.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << extensionGetter_identifierRepresentation (enumerator_2764.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2764.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_2764.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_2764.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2764_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_2764_IDX.increment () ;
              enumerator_2764.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_9 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
          if (kBoolTrue == test_9) {
            result << "C_String & " ;
            result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 60)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }else if (kBoolFalse == test_9) {
          }
          result << "C_Lexique_" ;
          result << in_LEXIQUE_5F_NAME.stringValue () ;
          result << " * inLexique) ;\n"
            "\n" ;
          index_2454_.increment () ;
          enumerator_2454.gotoNextObject () ;
        }
      }
      result << "  protected: void rule_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2316.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2316.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_parse (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_10 = in_HAS_5F_TRANSLATE_5F_FEATURE.boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "C_String & " ;
        result << function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 66)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_10) {
      }
      result << "C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " * inLexique) ;\n"
        "\n" ;
      const enumGalgasBool test_11 = in_HAS_5F_INDEXING.boolEnum () ;
      if (kBoolTrue == test_11) {
        result << "  protected: void rule_" ;
        result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2316.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2316.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_2316_.increment () ;
      enumerator_2316.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Select methods\n" ;
  GALGAS_uint index_4263_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4263 (in_SELECT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4263.hasCurrentObject ()) {
      result << "  protected: virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_4263.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " *) = 0 ;\n"
        "\n" ;
      index_4263_.increment () ;
      enumerator_4263.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_58254 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.readProperty_string ()) ;
  if (NULL != objectArray_58254) {
      macroValidSharedObject (objectArray_58254, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_58358 = objectArray_58254->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1272)) ;
    GALGAS_stringset var_reDeclarationLabelSet_58420 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1273)) ;
    GALGAS_stringset var_missingLabelSet_58488 = var_firstDeclarationLabelSet_58358.substract_operation (var_reDeclarationLabelSet_58420, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1274)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet_58488.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1275)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_s_58599 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_58619 (var_missingLabelSet_58488, kENUMERATION_UP) ;
        while (enumerator_58619.hasCurrentObject ()) {
          var_s_58599.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (enumerator_58619.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1278)) ;
          enumerator_58619.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1281)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1281)).add_operation (var_s_58599, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1281)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1280)) ;
      }
    }
    GALGAS_stringset var_newLabelSet_58852 = var_reDeclarationLabelSet_58420.substract_operation (var_firstDeclarationLabelSet_58358, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1283)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet_58852.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1284)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1284)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string var_s_58951 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_58971 (var_newLabelSet_58852, kENUMERATION_UP) ;
        while (enumerator_58971.hasCurrentObject ()) {
          var_s_58951.plusAssign_operation(GALGAS_string ("\n"
            "-  ").add_operation (enumerator_58971.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1287)) ;
          enumerator_58971.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)).add_operation (var_s_58951, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1289)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet_58488.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1292)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet_58852.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1292)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1292)).boolEnum () ;
      if (kBoolTrue == test_4) {
        cEnumerator_nonterminalLabelMap enumerator_59262 (objectArray_58254->mProperty_mLabelMap, kENUMERATION_UP) ;
        cEnumerator_nonterminalLabelMap enumerator_59310 (constinArgument_inNonterminalLabelMap, kENUMERATION_UP) ;
        while (enumerator_59262.hasCurrentObject () && enumerator_59310.hasCurrentObject ()) {
          GALGAS_formalParameterSignature var_newSignature_59390 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1294)) ;
          cEnumerator_formalParameterSignature enumerator_59491 (enumerator_59310.current_mSignature (HERE), kENUMERATION_UP) ;
          while (enumerator_59491.hasCurrentObject ()) {
            var_newSignature_59390.addAssign_operation (enumerator_59491.current_mFormalSelector (HERE), enumerator_59491.current_mFormalArgumentType (HERE), enumerator_59491.current_mFormalArgumentPassingMode (HERE), enumerator_59491.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1296)) ;
            enumerator_59491.gotoNextObject () ;
          }
          {
          routine_checkMethodSignatures (enumerator_59262.current (HERE).readProperty_mSignatureForGeneration (), enumerator_59262.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_59390, enumerator_59310.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1298)) ;
          }
          enumerator_59262.gotoNextObject () ;
          enumerator_59310.gotoNextObject () ;
        }
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1307)) ;
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1317)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_60383 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_60383.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_60447 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1320)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_60536 (enumerator_60383.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_60536.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_60584 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1322)) ;
      GALGAS_formalParameterSignature var_signature_60643 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1323)) ;
      cEnumerator_formalParameterListAST enumerator_60774 (enumerator_60536.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      while (enumerator_60774.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_t_60815 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_60774.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1325)) ;
        var_signatureForGeneration_60584.addAssign_operation (enumerator_60774.current_mFormalSelector (HERE), enumerator_60774.current_mFormalArgumentPassingMode (HERE), var_t_60815, enumerator_60774.current_mFormalArgumentName (HERE), enumerator_60774.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1326)) ;
        var_signature_60643.addAssign_operation (enumerator_60774.current_mFormalSelector (HERE), var_t_60815, enumerator_60774.current_mFormalArgumentPassingMode (HERE), enumerator_60774.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1327)) ;
        enumerator_60774.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_60447.setter_insertKey (enumerator_60536.current_mLabelName (HERE), var_signatureForGeneration_60584, var_signature_60643, enumerator_60536.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1329)) ;
      }
      enumerator_60536.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_60383.current_mNonterminalName (HERE), var_nonterminalLabelMap_60447, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1331)) ;
    }
    enumerator_60383.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                   const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                   const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                   const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                   const GALGAS_string /* constinArgument_inComponentName */,
                                                                   const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                   GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                   GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                   GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1371)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                         const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                         const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                         GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                         GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                         C_Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_type_64624 ;
  GALGAS_string var_cppName_64645 ;
  {
  const GALGAS_inputParameterVariable temp_0 = this ;
  GALGAS_string joker_64647 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_64624, var_cppName_64645, joker_64647, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1407)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_64689 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_64689 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_64689.objectCompare (var_type_64624)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_inputParameterVariable temp_2 = this ;
      const GALGAS_inputParameterVariable temp_3 = this ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)).add_operation (extensionGetter_identifierRepresentation (var_type_64624, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1421)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_64689, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1422)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1422)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1422)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1420)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_64645, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1424)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                        GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_expectedType_66306 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_66306 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredVariable temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_67168 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1452)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_expectedType_66306.objectCompare (var_type_67168)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredVariable temp_4 = this ;
          const GALGAS_inputParameterDeclaredVariable temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).add_operation (extensionGetter_definition (var_type_67168, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1455)).add_operation (extensionGetter_definition (var_expectedType_66306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1456)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1454)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredVariable temp_7 = this ;
  const GALGAS_inputParameterDeclaredVariable temp_8 = this ;
  GALGAS_string var_cppName_67597 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1460)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1460)) ;
  {
  const GALGAS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GALGAS_bool (true), var_expectedType_66306, var_cppName_67597, var_cppName_67597, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1461)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_66306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1469)).readProperty_mTypeName ().readProperty_string (), var_cppName_67597, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1468)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                        GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                        GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_unifiedTypeMapEntry var_expectedType_68485 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_68485 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GALGAS_bool (kIsNotEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputParameterDeclaredConstant temp_2 = this ;
      GALGAS_unifiedTypeMapEntry var_type_69347 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1496)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsNotEqual, var_expectedType_68485.objectCompare (var_type_69347)).boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_inputParameterDeclaredConstant temp_4 = this ;
          const GALGAS_inputParameterDeclaredConstant temp_5 = this ;
          TC_Array <C_FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)).add_operation (extensionGetter_definition (var_type_69347, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1499)).add_operation (extensionGetter_definition (var_expectedType_68485, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1500)).readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1500)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1500)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1498)) ;
        }
      }
    }
  }
  const GALGAS_inputParameterDeclaredConstant temp_7 = this ;
  const GALGAS_inputParameterDeclaredConstant temp_8 = this ;
  GALGAS_string var_cppName_69776 = GALGAS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1504)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1504)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1504)) ;
  {
  const GALGAS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_68485, var_cppName_69776, var_cppName_69776, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1505)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (extensionGetter_definition (var_expectedType_68485, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1508)).readProperty_mTypeName ().readProperty_string (), var_cppName_69776, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1507)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                    GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    C_Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                    const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                    GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1534)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1535)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                     const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                     GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1545)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1546)) ;
    }
  }
  GALGAS_unifiedTypeMapEntry var_type_71890 ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GALGAS_string joker_71892 ; // Joker input parameter
  GALGAS_string joker_71895 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_71890, joker_71892, joker_71895, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1548)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_71916 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (kIsNotEqual, var_expectedType_71916.objectCompare (var_type_71890)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)).add_operation (extensionGetter_identifierRepresentation (var_type_71890, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1552)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_71916, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1553)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1553)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1553)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1551)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                             GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1563)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GALGAS_string var_cppName_72752 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1566)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1566)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1566)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_72886 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1567)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GALGAS_bool (true), var_type_72886, var_cppName_72752, var_cppName_72752, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1568)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_73144 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_73144.objectCompare (var_type_72886)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)).add_operation (extensionGetter_identifierRepresentation (var_type_72886, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1578)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_73144, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1579)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1579)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1579)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1577)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeSDT (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1589)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)) ;
    }
  }
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GALGAS_string var_cppName_73973 = GALGAS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1592)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1592)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1592)) ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GALGAS_unifiedTypeMapEntry var_type_74107 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1593)) ;
  {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_74107, var_cppName_73973, var_cppName_73973, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1594)) ;
  }
  GALGAS_unifiedTypeMapEntry var_expectedType_74317 = constinArgument_inAnalysisContext.readProperty_mPredefinedTypes ().readProperty_mStringType () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (kIsNotEqual, var_expectedType_74317.objectCompare (var_type_74107)).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      TC_Array <C_FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GALGAS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1598)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1598)).add_operation (extensionGetter_identifierRepresentation (var_type_74107, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1598)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1598)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1598)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_74317, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1599)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1599)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1599)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1597)) ;
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_generateCode (const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      const GALGAS_string constinArgument_inAccessMethodName,
                                                                                      GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1619)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1620)) ;
      }
    }
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GALGAS_string /* constinArgument_inAccessMethodName */,
                                                                                      GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                      GALGAS_string & /* ioArgument_ioGeneratedCode */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GALGAS_string constinArgument_inAccessMethodName,
                                                                                       GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                       GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GALGAS_string var_cppName_76425 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1640)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1640)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1640)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1640)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1640)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1640)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(var_cppName_76425.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1641)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1641)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1641)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1641)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GALGAS_string constinArgument_inAccessMethodName,
                                                                                               GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                               GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GALGAS_string var_cppName_77040 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1651)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1651)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1651)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1651)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1651)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1651)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_string ").add_operation (var_cppName_77040, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1652)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1652)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1652)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1652)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1652)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GALGAS_bool /* constinArgument_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                                                 GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GALGAS_string var_cppName_77660 = GALGAS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1662)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1662)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1662)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1662)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1662)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1662)) ;
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_77660, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1663)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                           const GALGAS_string constinArgument_inLexiqueName,
                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                           const GALGAS_string constinArgument_inComponentName,
                                           const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                           const GALGAS_location constinArgument_inEndOfBranchLocation,
                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                           GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1683)) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1685)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_78776 (constinArgument_inSyntaxInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_78776.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_78776.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1688)) ;
    enumerator_78776.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1704)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                          const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
                                          const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionList,
                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                          const GALGAS_terminalMap constinArgument_inTerminalMap,
                                          const GALGAS_bool constinArgument_inHasTranslateFeature,
                                          const GALGAS_string constinArgument_inLexiqueName,
                                          const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                          const GALGAS_string constinArgument_inComponentName,
                                          const GALGAS_location constinArgument_inEndOfInstructionList,
                                          const GALGAS_stringset constinArgument_inIndexNameSet,
                                          GALGAS_uint & ioArgument_ioSelectMethodCount,
                                          GALGAS_formalParameterListForGeneration & outArgument_outSignatureForGeneration,
                                          GALGAS_formalParameterSignature & outArgument_outSignature,
                                          GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_localVarManager var_variableMap_80378 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("semanticAnalysis.galgas", 1731)) ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.readProperty_mSemanticContext (), constinArgument_inFormalArguments, var_variableMap_80378, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1732)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1739)) ;
  cEnumerator_formalParameterListForGeneration enumerator_80702 (outArgument_outSignatureForGeneration, kENUMERATION_UP) ;
  while (enumerator_80702.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_80702.current_mFormalSelector (HERE), enumerator_80702.current_mFormalArgumentType (HERE), enumerator_80702.current_mFormalArgumentPassingMode (HERE), enumerator_80702.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1741)) ;
    enumerator_80702.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1744)) ;
  cEnumerator_syntaxInstructionList enumerator_81044 (constinArgument_inSyntaxInstructionList, kENUMERATION_UP) ;
  while (enumerator_81044.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_81044.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_80378, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1747)) ;
    enumerator_81044.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_80378, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1763)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent (const GALGAS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                const GALGAS_string constinArgument_inSyntaxComponentName,
                                                const GALGAS_string constinArgument_inLexiqueName,
                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                const GALGAS_terminalMap constinArgument_inTerminalMap,
                                                const GALGAS_stringset constinArgument_inIndexNameSet,
                                                const GALGAS_bool constinArgument_inHasIndexing,
                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                GALGAS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GALGAS_nonterminalMap var_nonterminalMap_82666 ;
  {
  routine_buildNonterminalDeclarationsMap (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, var_nonterminalMap_82666, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1788)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_82759 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_82759.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_82826 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1795)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_82895 (enumerator_82759.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_82895.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_82980 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1797)) ;
      GALGAS_formalParameterSignature var_signature_83031 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1798)) ;
      cEnumerator_formalParameterListAST enumerator_83136 (enumerator_82895.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_83136.hasCurrentObject ()) {
        GALGAS_unifiedTypeMapEntry var_type_83177 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_83136.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1800)) ;
        var_signatureForGeneration_82980.addAssign_operation (enumerator_83136.current_mFormalSelector (HERE), enumerator_83136.current_mFormalArgumentPassingMode (HERE), var_type_83177, enumerator_83136.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_83136.current_mFormalArgumentName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1806))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1801)) ;
        var_signature_83031.addAssign_operation (enumerator_83136.current_mFormalSelector (HERE), var_type_83177, enumerator_83136.current_mFormalArgumentPassingMode (HERE), enumerator_83136.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1807)) ;
        enumerator_83136.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_82826.setter_insertKey (enumerator_82895.current_mLabelName (HERE), var_signatureForGeneration_82980, var_signature_83031, enumerator_82895.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1809)) ;
      }
      enumerator_82895.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_82759.current_mNonterminalName (HERE), var_nonterminalLabelMap_82826, var_nonterminalMap_82666, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1811)) ;
    }
    enumerator_82759.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext_83819 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string::makeEmptyString (), GALGAS_selfAvailability::constructor_none (SOURCE_FILE ("semanticAnalysis.galgas", 1818)), GALGAS_string::makeEmptyString (), GALGAS_bool (false)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1814)) ;
  GALGAS_uint var_selectMethodCount_84021 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList_84072 = GALGAS_ruleDeclarationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1824)) ;
  GALGAS_uint var_newRuleIndex_84102 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_syntaxRuleListAST enumerator_84141 (constinArgument_inRuleList, kENUMERATION_UP) ;
  while (enumerator_84141.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList_84231 = GALGAS_ruleLabelImplementationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1828)) ;
    GALGAS_uint var_localSelectMethodCount_84273 = var_selectMethodCount_84021 ;
    GALGAS_nonterminalLabelMap joker_84343 ; // Joker input parameter
    var_nonterminalMap_82666.method_searchKey (enumerator_84141.current_mNonterminalName (HERE), joker_84343, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1830)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_84450 (enumerator_84141.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_84450.hasCurrentObject ()) {
      var_localSelectMethodCount_84273 = var_selectMethodCount_84021 ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_84992 ;
      GALGAS_formalParameterSignature var_signature_85015 ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration_85057 ;
      {
      routine_semanticAnalysisOfRuleLabel (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_84450.current_mFormalArguments (HERE), enumerator_84450.current_mSyntaxInstructionList (HERE), var_analysisContext_83819, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1841)), var_nonterminalMap_82666, constinArgument_inSyntaxComponentName, enumerator_84450.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount_84273, var_signatureForGeneration_84992, var_signature_85015, var_instructionListForGeneration_85057, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1833)) ;
      }
      var_ruleLabelImplementationList_84231.addAssign_operation (enumerator_84450.current_mLabelName (HERE), var_signatureForGeneration_84992, var_signature_85015, enumerator_84450.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration_85057  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1851)) ;
      enumerator_84450.gotoNextObject () ;
    }
    var_selectMethodCount_84021 = var_localSelectMethodCount_84273 ;
    GALGAS_nonterminalLabelMap joker_85348 ; // Joker input parameter
    var_nonterminalMap_82666.method_searchKey (enumerator_84141.current_mNonterminalName (HERE), joker_85348, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1859)) ;
    var_ruleDeclarationList_84072.addAssign_operation (enumerator_84141.current_mNonterminalName (HERE).readProperty_string (), var_newRuleIndex_84102, var_ruleLabelImplementationList_84231  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1860)) ;
    var_newRuleIndex_84102.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1864)) ;
    enumerator_84141.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::constructor_new (constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_82666, var_ruleDeclarationList_84072, var_selectMethodCount_84021, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1867)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputActualParameterForGeneration::method_generateActualParameter (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                              GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                              GALGAS_string & ioArgument_ioImplementation,
                                                                              GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                              GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                              GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                              GALGAS_string & outArgument_outCppName,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_outputActualParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 27)) ;
  const GALGAS_outputActualParameterForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((const cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mOutputActualParameterExpression ().ptr (), ioArgument_ioImplementation, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 28)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_outputInputActualParameterForGeneration::method_generateActualParameter (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                                   GALGAS_string & /* ioArgument_ioImplementation */,
                                                                                   GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                                   GALGAS_stringlist & /* ioArgument_ioOutputVariableList */,
                                                                                   GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                   GALGAS_string & outArgument_outCppName,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_outputInputActualParameterForGeneration temp_0 = this ;
  cEnumerator_unifiedTypeMapEntryList enumerator_2145 (temp_0.readProperty_mTypeList (), kENUMERATION_UP) ;
  while (enumerator_2145.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_2145.current_mEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 42)) ;
    enumerator_2145.gotoNextObject () ;
  }
  const GALGAS_outputInputActualParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mOutputInputVariableCppName () ;
  const GALGAS_outputInputActualParameterForGeneration temp_2 = this ;
  cEnumerator_lstringlist enumerator_2278 (temp_2.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_2278.hasCurrentObject ()) {
    outArgument_outCppName.plusAssign_operation(GALGAS_string (".mProperty_").add_operation (enumerator_2278.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 46)) ;
    enumerator_2278.gotoNextObject () ;
  }
  {
  const GALGAS_outputInputActualParameterForGeneration temp_3 = this ;
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (temp_3.readProperty_mOutputInputVariableCppName () COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 48)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputActualParameterForGeneration::method_generateActualParameter (GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                             GALGAS_string & /* ioArgument_ioImplementation */,
                                                                             GALGAS_stringlist & /* ioArgument_ioJokerParametersToReleaseList */,
                                                                             GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             GALGAS_string & outArgument_outCppName,
                                                                             C_Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_inputActualParameterForGeneration temp_0 = this ;
  outArgument_outCppName = temp_0.readProperty_mInputActualCppName () ;
  const GALGAS_inputActualParameterForGeneration temp_1 = this ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_1.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 62)) ;
  {
  ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (outArgument_outCppName COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 63)) ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerParameterForGeneration generateActualParameter'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_inputJokerParameterForGeneration::method_generateActualParameter (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_uint & /* ioArgument_ioTemporaryVariableIndex */,
                                                                            GALGAS_string & ioArgument_ioImplementation,
                                                                            GALGAS_stringlist & ioArgument_ioJokerParametersToReleaseList,
                                                                            GALGAS_stringlist & ioArgument_ioOutputVariableList,
                                                                            GALGAS_stringset & /* ioArgument_ioUnusedVariableCppNameSet */,
                                                                            GALGAS_string & outArgument_outCppName,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_inputJokerParameterForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mFormalArgumentType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 76)) ;
  const GALGAS_inputJokerParameterForGeneration temp_1 = this ;
  outArgument_outCppName = temp_1.readProperty_mInputActualCppName () ;
  const GALGAS_inputJokerParameterForGeneration temp_2 = this ;
  ioArgument_ioImplementation.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (temp_2.readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (outArgument_outCppName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)).add_operation (GALGAS_string (" ; // Joker input parameter\n"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 78)) ;
  const GALGAS_inputJokerParameterForGeneration temp_3 = this ;
  ioArgument_ioJokerParametersToReleaseList.addAssign_operation (temp_3.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 79)) ;
  const GALGAS_inputJokerParameterForGeneration temp_4 = this ;
  ioArgument_ioOutputVariableList.addAssign_operation (temp_4.readProperty_mInputActualCppName ()  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 80)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@semanticBlockInstructionForGeneration generateInstruction'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_semanticBlockInstructionForGeneration::method_generateInstruction (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                             GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                             const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                             GALGAS_string & ioArgument_ioGeneratedCode,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("{\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 91)) ;
  {
  const GALGAS_semanticBlockInstructionForGeneration temp_0 = this ;
  routine_generateInstructionList (ioArgument_ioInclusionSet, temp_0.readProperty_mInstructionList (), ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 92)) ;
  }
  ioArgument_ioGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticInstructionGeneration.galgas", 100)) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                              GALGAS_string & outArgument_outHeader,
                                                              C_Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarForGeneration temp_0 = this ;
  cEnumerator_lstringlist enumerator_1346 (temp_0.readProperty_mSyntaxComponents (), kENUMERATION_UP) ;
  while (enumerator_1346.hasCurrentObject ()) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (enumerator_1346.current_mValue (HERE).readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 24)) ;
    enumerator_1346.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_1 = this ;
  const GALGAS_grammarForGeneration temp_2 = this ;
  const GALGAS_grammarForGeneration temp_3 = this ;
  const GALGAS_grammarForGeneration temp_4 = this ;
  const GALGAS_grammarForGeneration temp_5 = this ;
  const GALGAS_grammarForGeneration temp_6 = this ;
  const GALGAS_grammarForGeneration temp_7 = this ;
  const GALGAS_grammarForGeneration temp_8 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_grammarGenerationTemplate_grammarZone_33_HeaderGalgas_33_ (inCompiler, temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 27)), temp_2.readProperty_mNonTerminalMapForGrammarAnalysis (), temp_3.readProperty_mNonTerminalToAddList (), temp_4.readProperty_mHasIndexing (), temp_5.readProperty_mStartSymbolName (), temp_6.readProperty_mHasTranslateFeature (), temp_7.readProperty_mGrammarName (), temp_8.readProperty_mSyntaxComponents () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 26))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@grammarForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_grammarForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                     GALGAS_string & outArgument_outImplementation,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_grammarForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 45))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 45)) ;
  const GALGAS_grammarForGeneration temp_1 = this ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_2216 (temp_1.readProperty_mNonTerminalMapForGrammarAnalysis (), kENUMERATION_UP) ;
  while (enumerator_2216.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_2252 (enumerator_2216.current (HERE).readProperty_mNonterminalSymbolParametersMap (), kENUMERATION_UP) ;
    while (enumerator_2252.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_2393 (enumerator_2252.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_2393.hasCurrentObject ()) {
        switch (enumerator_2393.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            GALGAS_unifiedTypeMapEntry var_t_2544 = extensionGetter_searchKey (constinArgument_inUnifiedTypeMap, enumerator_2393.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 51)) ;
            extensionMethod_addHeaderFileName (var_t_2544, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 52)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_2393.gotoNextObject () ;
      }
      enumerator_2252.gotoNextObject () ;
    }
    enumerator_2216.gotoNextObject () ;
  }
  const GALGAS_grammarForGeneration temp_2 = this ;
  outArgument_outImplementation = temp_2.readProperty_mCppFileContents () ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_grammarForGeneration::getter_implementationCppFileName (C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_grammarForGeneration temp_0 = this ;
  result_result = GALGAS_string ("grammar-").add_operation (temp_0.readProperty_mGrammarName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 64)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarForGeneration::getter_hasCppHeaderFile (C_Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_grammarForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 76)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@grammarForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_grammarForGeneration::getter_isPredefined (C_Compiler */* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string cPtr_syntaxDeclarationForGeneration::getter_implementationCppFileName (C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_result ; // Returned variable
  const GALGAS_syntaxDeclarationForGeneration temp_0 = this ;
  result_result = GALGAS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 90)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_syntaxDeclarationForGeneration::getter_hasCppHeaderFile (C_Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_headerKind cPtr_syntaxDeclarationForGeneration::getter_headerKind (C_Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 102)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@syntaxDeclarationForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_syntaxDeclarationForGeneration::getter_isPredefined (C_Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendDeclaration_31_ (GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (temp_0.readProperty_mLexiqueName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 115)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 115)) ;
  GALGAS_uintlist var_selectMethodList_5182 = GALGAS_uintlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 116)) ;
  GALGAS_uint var_idx_5213 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = this ;
  if (temp_1.readProperty_mSelectMethodCount ().add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).isValid ()) {
    uint32_t variant_5224 = temp_1.readProperty_mSelectMethodCount ().add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).getter_uint (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 118)).uintValue () ;
    bool loop_5224 = true ;
    while (loop_5224) {
      const GALGAS_syntaxDeclarationForGeneration temp_2 = this ;
      loop_5224 = GALGAS_bool (kIsStrictInf, var_idx_5213.objectCompare (temp_2.readProperty_mSelectMethodCount ())).isValid () ;
      if (loop_5224) {
        loop_5224 = GALGAS_bool (kIsStrictInf, var_idx_5213.objectCompare (temp_2.readProperty_mSelectMethodCount ())).boolValue () ;
      }
      if (loop_5224 && (0 == variant_5224)) {
        loop_5224 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 118)) ;
      }
      if (loop_5224) {
        variant_5224 -- ;
        var_selectMethodList_5182.addAssign_operation (var_idx_5213  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 120)) ;
        var_idx_5213.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 121)) ;
      }
    }
  }
  const GALGAS_syntaxDeclarationForGeneration temp_3 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_4 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_5 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_6 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_7 = this ;
  const GALGAS_syntaxDeclarationForGeneration temp_8 = this ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxAnalyserClassDeclaration (inCompiler, temp_3.readProperty_mSyntaxComponentName (), temp_4.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 125)), temp_5.readProperty_mNonterminalDeclarationMap (), temp_6.readProperty_mRuleDeclarationList (), var_selectMethodList_5182, temp_7.readProperty_mHasIndexing (), temp_8.readProperty_mHasTranslateFeature () COMMA_SOURCE_FILE ("semanticGeneration.galgas", 123))) ;
}
//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@syntaxDeclarationForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

void cPtr_syntaxDeclarationForGeneration::method_appendSpecificImplementation (const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  const GALGAS_syntaxDeclarationForGeneration temp_0 = this ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("syntax-").add_operation (temp_0.readProperty_mSyntaxComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 141))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 141)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (inCompiler, GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 143)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 142))) ;
  const GALGAS_syntaxDeclarationForGeneration temp_1 = this ;
  GALGAS_string var_lexiqueCppName_6181 = GALGAS_string ("C_Lexique_").add_operation (temp_1.readProperty_mLexiqueName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 146)) ;
  const GALGAS_syntaxDeclarationForGeneration temp_2 = this ;
  cEnumerator_ruleDeclarationList enumerator_6303 (temp_2.readProperty_mRuleDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_6303.hasCurrentObject ()) {
    cEnumerator_ruleLabelImplementationList enumerator_6456 (enumerator_6303.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
    while (enumerator_6456.hasCurrentObject ()) {
      const GALGAS_syntaxDeclarationForGeneration temp_3 = this ;
      const GALGAS_syntaxDeclarationForGeneration temp_4 = this ;
      GALGAS_string var_ruleName_6515 = GALGAS_string ("cParser_").add_operation (temp_3.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 150)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 150)).add_operation (temp_4.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 151)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (enumerator_6303.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 151)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 152)).add_operation (enumerator_6303.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)).add_operation (enumerator_6456.current_mLabelName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 153)) ;
      outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 154)) ;
      GALGAS_string var_code_7324 ;
      {
      const GALGAS_syntaxDeclarationForGeneration temp_5 = this ;
      routine_generateProcedure (GALGAS_bool (false), var_ruleName_6515, ioArgument_ioInclusionSet, enumerator_6456.current_mSignatureForGeneration (HERE), enumerator_6456.current_mInstructionListForGeneration (HERE), GALGAS_bool (false), var_lexiqueCppName_6181, GALGAS_bool (false), GALGAS_bool (false), temp_5.readProperty_mHasTranslateFeature (), var_code_7324, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 155)) ;
      }
      outArgument_outImplementation.plusAssign_operation(var_code_7324, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 168)) ;
      enumerator_6456.gotoNextObject () ;
    }
    GALGAS_semanticInstructionListForGeneration var_parseInstructionList_7476 ;
    GALGAS_lstring joker_7440 ; // Joker input parameter
    GALGAS_formalParameterListForGeneration joker_7443 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_7446 ; // Joker input parameter
    GALGAS_location joker_7449 ; // Joker input parameter
    enumerator_6303.current_mLabelImplementationList (HERE).method_first (joker_7440, joker_7443, joker_7446, joker_7449, var_parseInstructionList_7476, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 171)) ;
    const GALGAS_syntaxDeclarationForGeneration temp_6 = this ;
    const GALGAS_syntaxDeclarationForGeneration temp_7 = this ;
    GALGAS_string var_parseRuleName_7507 = GALGAS_string ("cParser_").add_operation (temp_6.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 172)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 172)).add_operation (temp_7.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (enumerator_6303.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 173)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 174)).add_operation (enumerator_6303.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)).add_operation (GALGAS_string ("_parse"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 175)) ;
    outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 176)) ;
    GALGAS_string var_parseCode_8294 ;
    {
    const GALGAS_syntaxDeclarationForGeneration temp_8 = this ;
    routine_generateProcedure (GALGAS_bool (false), var_parseRuleName_7507, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 181)), function_syntaxSignatureOfInstructionList (GALGAS_string ("parse"), var_parseInstructionList_7476, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 182)), GALGAS_bool (false), var_lexiqueCppName_6181, GALGAS_bool (false), GALGAS_bool (true), temp_8.readProperty_mHasTranslateFeature (), var_parseCode_8294, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 177)) ;
    }
    outArgument_outImplementation.plusAssign_operation(var_parseCode_8294, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 190)) ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_syntaxDeclarationForGeneration temp_10 = this ;
      test_9 = temp_10.readProperty_mHasIndexing ().boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_semanticInstructionListForGeneration var_instructionList_8466 ;
        GALGAS_lstring joker_8435 ; // Joker input parameter
        GALGAS_formalParameterListForGeneration joker_8438 ; // Joker input parameter
        GALGAS_formalParameterSignature joker_8441 ; // Joker input parameter
        GALGAS_location joker_8444 ; // Joker input parameter
        enumerator_6303.current_mLabelImplementationList (HERE).method_first (joker_8435, joker_8438, joker_8441, joker_8444, var_instructionList_8466, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 193)) ;
        const GALGAS_syntaxDeclarationForGeneration temp_11 = this ;
        const GALGAS_syntaxDeclarationForGeneration temp_12 = this ;
        GALGAS_string var_ruleName_8494 = GALGAS_string ("cParser_").add_operation (temp_11.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (GALGAS_string ("::rule_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 194)).add_operation (temp_12.readProperty_mSyntaxComponentName ().getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (enumerator_6303.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 195)).add_operation (GALGAS_string ("_i"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 196)).add_operation (enumerator_6303.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("semanticGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)).add_operation (GALGAS_string ("_indexing"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 197)) ;
        outArgument_outImplementation.plusAssign_operation(GALGAS_string ("//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 198)) ;
        GALGAS_string var_code_9351 ;
        {
        routine_generateProcedure (GALGAS_bool (false), var_ruleName_8494, ioArgument_ioInclusionSet, GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 203)), function_syntaxSignatureOfInstructionList (GALGAS_string ("indexing"), var_instructionList_8466, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 204)), GALGAS_bool (false), var_lexiqueCppName_6181, GALGAS_bool (false), GALGAS_bool (false), GALGAS_bool (false), var_code_9351, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 199)) ;
        }
        outArgument_outImplementation.plusAssign_operation(var_code_9351, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 212)) ;
      }
    }
    enumerator_6303.gotoNextObject () ;
  }
}
//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateProcedure'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateProcedure (const GALGAS_bool constinArgument_inGenerateStatic,
                                const GALGAS_string constinArgument_inProcedureName,
                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                const GALGAS_bool constinArgument_inProcedureIsConst,
                                const GALGAS_string constinArgument_inCompilerTypeName,
                                const GALGAS_bool constinArgument_inGenerateLocationArgs,
                                const GALGAS_bool constinArgument_inGenerateResetTemplateString,
                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                GALGAS_string & outArgument_outGeneratedCode,
                                C_Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_10349 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 237)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_0) {
      var_unusedVariableCppNameSet_10349.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 239))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 239)) ;
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 241)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_unusedVariableCppNameSet_10349.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 242))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 242)) ;
    }
  }
  cEnumerator_formalParameterListForGeneration enumerator_10652 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_10652.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsNotEqual, enumerator_10652.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 245)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_unusedVariableCppNameSet_10349.addAssign_operation (enumerator_10652.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 246)) ;
      }
    }
    enumerator_10652.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_10891 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_10913 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_10913.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 252)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_10974 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_10974.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_10974.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_10891, var_unusedVariableCppNameSet_10349, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody_10913, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 254)) ;
    enumerator_10974.gotoNextObject () ;
  }
  {
  var_routineBody_10913.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 262)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11301 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_11301.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11301.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 265)) ;
    enumerator_11301.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inGenerateStatic.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 270)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("void ").add_operation (constinArgument_inProcedureName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 272)) ;
  GALGAS_uint var_colRef_11582 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 273)) ;
  cEnumerator_formalParameterListForGeneration enumerator_11703 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_11703.hasCurrentObject ()) {
    switch (enumerator_11703.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 278)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 280)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 282)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_11703.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
      }
      break ;
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_unusedVariableCppNameSet_10349.getter_hasKey (enumerator_11703.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)).boolEnum () ;
      if (kBoolTrue == test_4) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_11703.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 287)) ;
      }
    }
    if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_11703.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 289)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 291)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11582, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)) ;
    }
    enumerator_11703.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedVariableCppNameSet_10349.getter_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 297)) ;
        }
      }
      if (kBoolFalse == test_6) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 299)) ;
      }
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11582, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)) ;
      }
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 304)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_unusedVariableCppNameSet_10349.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)).boolEnum () ;
    if (kBoolTrue == test_7) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
    }
  }
  if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 308)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
    if (kBoolTrue == test_8) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)) ;
      {
      outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_11582, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 312)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (")"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
    if (kBoolTrue == test_9) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 317)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) ;
  cEnumerator_formalParameterListForGeneration enumerator_13633 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_13633.hasCurrentObject ()) {
    switch (enumerator_13633.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_13633.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 324)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_13633.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_10913, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
    if (kBoolTrue == test_10) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 332)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 335)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateFunction'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateFunction (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                               GALGAS_stringset & ioArgument_ioInclusionSet,
                               const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                               const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                               const GALGAS_string constinArgument_inCompilerTypeName,
                               const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                               const GALGAS_string constinArgument_inResultVariableCppName,
                               const GALGAS_bool constinArgument_inIsStatic,
                               const GALGAS_bool constinArgument_inIsConst,
                               GALGAS_string & outArgument_outGeneratedCode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 355)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_15271 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 357)) ;
  var_unusedVariableCppNameSet_15271.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 358))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 358)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_15451 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_15451.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_15451.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 361)) ;
    var_unusedVariableCppNameSet_15271.addAssign_operation (enumerator_15451.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 362)) ;
    enumerator_15451.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_15656 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_15686 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_15686.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 367)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_15747 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_15747.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_15747.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_15656, var_unusedVariableCppNameSet_15271, GALGAS_bool (false), var_routineBody_15686, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 369)) ;
    enumerator_15747.gotoNextObject () ;
  }
  {
  var_routineBody_15686.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 377)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inIsStatic.boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("static "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 380)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 382)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)) ;
  GALGAS_uint var_colRef_16264 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 384)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16370 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_16370.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = enumerator_16370.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16370.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)).add_operation (GALGAS_string (" &"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 388)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_16370.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)) ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_15271.getter_hasKey (enumerator_16370.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 392)).boolEnum () ;
      if (kBoolTrue == test_2) {
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16370.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16264, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 398)) ;
    }
    enumerator_16370.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_15271.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 402)).boolEnum () ;
    if (kBoolTrue == test_3) {
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 407)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_16264, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 408)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 409)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = constinArgument_inIsConst.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" const"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 411)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 413)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_15686, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 423)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionGetterNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionGetterNew (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                         const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                         const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                         const GALGAS_string constinArgument_inCompilerTypeName,
                                         const GALGAS_unifiedTypeMapEntry constinArgument_inResultType,
                                         const GALGAS_string constinArgument_inResultVariableCppName,
                                         GALGAS_string & outArgument_outGeneratedCode,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  extensionMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 437)) ;
  GALGAS_stringset var_unusedVariableCppNameSet_18687 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 439)) ;
  var_unusedVariableCppNameSet_18687.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 440))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 440)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_18867 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_18867.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18867.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 443)) ;
    var_unusedVariableCppNameSet_18687.addAssign_operation (enumerator_18867.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 444)) ;
    enumerator_18867.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_19072 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_19102 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_19102.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 449)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_19163 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_19163.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_19163.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_19072, var_unusedVariableCppNameSet_18687, GALGAS_bool (false), var_routineBody_19102, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
    enumerator_19163.gotoNextObject () ;
  }
  {
  var_routineBody_19102.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 459)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 461)) ;
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)) ;
  GALGAS_uint var_colRef_19619 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 463)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_19725 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_19725.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_19725.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19725.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 467)) ;
      }
    }
    if (kBoolFalse == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_19725.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 469)) ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_unusedVariableCppNameSet_18687.getter_hasKey (enumerator_19725.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 471)).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" /* ").add_operation (enumerator_19725.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)) ;
      }
    }
    if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_19725.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 474)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 476)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19619, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 477)) ;
    }
    enumerator_19725.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" *"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 480)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_unusedVariableCppNameSet_18687.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 482)) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (" ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 484)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 486)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_19619, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS) const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 488)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  GALGAS_").add_operation (extensionGetter_identifierRepresentation (constinArgument_inResultType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 490)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_19102, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("//---\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 496)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}\n"
    "\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 498)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionSetter'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionSetter (const GALGAS_string constinArgument_inClassName,
                                      const GALGAS_string constinArgument_inBaseClassName,
                                      const GALGAS_string constinArgument_inMethodName,
                                      GALGAS_stringset & ioArgument_ioInclusionSet,
                                      const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                      const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                      GALGAS_string & outArgument_outGeneratedCode,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet_21912 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  var_unusedVariableCppNameSet_21912.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517)) ;
  var_unusedVariableCppNameSet_21912.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 518)) ;
  cEnumerator_formalParameterListForGeneration enumerator_22045 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_22045.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_21912.addAssign_operation (enumerator_22045.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 520)) ;
    enumerator_22045.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_22189 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_22211 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_22211.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_22272 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_22272.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_22272.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_22189, var_unusedVariableCppNameSet_21912, GALGAS_bool (false), var_routineBody_22211, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 527)) ;
    enumerator_22272.gotoNextObject () ;
  }
  {
  var_routineBody_22211.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 535)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void extensionSetter_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 537)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 537)) ;
  GALGAS_uint var_colRef_22735 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 538)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 540)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 540)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 540)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 540)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 542)) ;
  }
  GALGAS_bool var_currentObjectIsUnused_23015 = var_unusedVariableCppNameSet_21912.getter_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 544)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_currentObjectIsUnused_23015.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* inObject */"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 546)) ;
    }
  }
  if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("inObject"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_23268 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_23268.hasCurrentObject ()) {
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 552)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22735, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 553)) ;
    }
    switch (enumerator_23268.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23268.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 556)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23268.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 558)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23268.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 560)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_23268.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 562)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_21912.getter_hasKey (enumerator_23268.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 564)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_23268.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 565)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_23268.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)) ;
    }
    enumerator_23268.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 571)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22735, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 573)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_21912.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 575)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 577)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 579)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_22735, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 580)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 581)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = var_currentObjectIsUnused_23015.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 584)).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 586)) ;
        }
      }
      if (kBoolFalse == test_5) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
      }
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 590)) ;
    }
  }
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_22211, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 592)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 594)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'generateExtensionMethodNew'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_generateExtensionMethodNew (const GALGAS_unifiedTypeMapEntry constinArgument_inReceiverType,
                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                         const GALGAS_string constinArgument_inMethodName,
                                         const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                         const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                         GALGAS_string & outArgument_outGeneratedCode,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className_26067 = extensionGetter_definition (constinArgument_inReceiverType, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)).readProperty_mTypeName ().readProperty_string () ;
  GALGAS_stringset var_unusedVariableCppNameSet_26187 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 611)) ;
  var_unusedVariableCppNameSet_26187.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 612)) ;
  var_unusedVariableCppNameSet_26187.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613)) ;
  cEnumerator_formalParameterListForGeneration enumerator_26320 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_26320.hasCurrentObject ()) {
    var_unusedVariableCppNameSet_26187.addAssign_operation (enumerator_26320.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)) ;
    enumerator_26320.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex_26464 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_routineBody_26494 = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody_26494.setter_incIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 620)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_26555 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_26555.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_26555.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex_26464, var_unusedVariableCppNameSet_26187, GALGAS_bool (false), var_routineBody_26494, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
    enumerator_26555.gotoNextObject () ;
  }
  {
  var_routineBody_26494.setter_decIndentation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)) ;
  }
  GALGAS_unifiedTypeMapEntry var_baseType_26891 = constinArgument_inReceiverType ;
  GALGAS_bool var_searching_26930 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 634)).isValid ()) {
    uint32_t variant_26944 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 634)).uintValue () ;
    bool loop_26944 = true ;
    while (loop_26944) {
      loop_26944 = var_searching_26930.isValid () ;
      if (loop_26944) {
        loop_26944 = var_searching_26930.boolValue () ;
      }
      if (loop_26944 && (0 == variant_26944)) {
        loop_26944 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 634)) ;
      }
      if (loop_26944) {
        variant_26944 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = extensionGetter_definition (var_baseType_26891, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 635)).readProperty_mSuperType ().getter_isNull (SOURCE_FILE ("semanticGeneration.galgas", 635)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 635)).boolEnum () ;
          if (kBoolTrue == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              test_1 = extensionGetter_definition (extensionGetter_definition (var_baseType_26891, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).readProperty_mSuperType (), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).readProperty_mInstanceMethodMap ().getter_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 636)).boolEnum () ;
              if (kBoolTrue == test_1) {
                var_baseType_26891 = extensionGetter_definition (var_baseType_26891, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)).readProperty_mSuperType () ;
              }
            }
            if (kBoolFalse == test_1) {
              var_searching_26930 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_0) {
          var_searching_26930 = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (extensionGetter_definition (var_baseType_26891, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)).readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)).add_operation (constinArgument_inMethodName.getter_fileNameRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)) ;
  extensionMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 646)) ;
  cEnumerator_formalParameterListForGeneration enumerator_27516 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_27516.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_27516.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 648)) ;
    enumerator_27516.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("void cPtr_").add_operation (var_className_26067.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)).add_operation (GALGAS_string ("::method_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)).add_operation (constinArgument_inMethodName.getter_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 651)) ;
  GALGAS_uint var_colRef_27787 = outArgument_outGeneratedCode.getter_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 652)) ;
  cEnumerator_formalParameterListForGeneration enumerator_28341 (constinArgument_inFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_28341.hasCurrentObject ()) {
    switch (enumerator_28341.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28341.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 670)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28341.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 672)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 672)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 672)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 672)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28341.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 674)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("GALGAS_").add_operation (extensionGetter_identifierRepresentation (enumerator_28341.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
      }
      break ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_unusedVariableCppNameSet_26187.getter_hasKey (enumerator_28341.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 678)).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (enumerator_28341.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 679)) ;
      }
    }
    if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.plusAssign_operation(enumerator_28341.current_mFormalArgumentCppName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 681)) ;
    }
    outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (",\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 683)) ;
    {
    outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27787, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 684)) ;
    }
    enumerator_28341.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("C_Compiler * "), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 689)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_unusedVariableCppNameSet_26187.getter_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 690)).boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 691)) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.plusAssign_operation(function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 695)) ;
  {
  outArgument_outGeneratedCode.setter_appendSpacesUntilColumn (var_colRef_27787, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 696)) ;
  }
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 697)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string (") const {\n"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 698)) ;
  outArgument_outGeneratedCode.plusAssign_operation(var_routineBody_26494, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709)) ;
  outArgument_outGeneratedCode.plusAssign_operation(GALGAS_string ("}"), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 711)) ;
}


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'typeGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_typeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_typeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_typeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_typeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_typeGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_bool & /* in_IS_5F_CONCRETE */,
                                                                                  const GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                  const GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_optionalMethodMap & in_OPTIONAL_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const GALGAS_operators & in_SUPPORTED_5F_OPERATORS,
                                                                                  const GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const GALGAS_unifiedTypeMapEntry & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//-- Start of generic part --*\n"
    "\n"
    "//--------------------------------- Object cloning\n"
    "  protected: virtual AC_GALGAS_root * clonedObject (void) const ;\n"
    "\n"
    "//--------------------------------- Object extraction\n"
    "  public: static GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " extractObject (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_object & inObject,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_CONSTRUCTOR_5F_MAP.getter_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- GALGAS constructors\n" ;
    GALGAS_uint index_570_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_570 (in_CONSTRUCTOR_5F_MAP, kENUMERATION_UP) ;
      while (enumerator_570.hasCurrentObject ()) {
        result << "  public: static class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_570.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " constructor_" ;
        result << enumerator_570.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_814_IDX (0) ;
        if (enumerator_570.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_814 (enumerator_570.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_814.hasCurrentObject ()) {
            result << "const class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_814.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            result << " & inOperand" ;
            result << index_814_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            if (enumerator_814.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_814_IDX.increment () ;
            enumerator_814.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_570.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_570.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "class C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_570.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "C_Compiler * inCompiler\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_570.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)))).boolEnum () ;
            if (kBoolTrue == test_3) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS) ;\n"
                "\n" ;
            }else if (kBoolFalse == test_3) {
              result << "LOCATION_ARGS) ;\n"
                "\n" ;
            }
          }
        }
        index_570_.increment () ;
        enumerator_570.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_4 = in_SUPPORTED_5F_OPERATORS.getter_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--------------------------------- Handle copy\n"
      "  public: GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "  public: GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & operator = (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inSource) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = in_SUPPORTED_5F_OPERATORS.getter_infixShiftOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "//--------------------------------- << and >> shift operators\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_bigint inShiftOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "class C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 56)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//--------------------------------- += operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void plusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                       class C_Compiler * inCompiler\n"
      "                                                       COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_SUPPORTED_5F_OPERATORS.getter_minusEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 63)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//--------------------------------- -= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void minusAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                        class C_Compiler * inCompiler\n"
      "                                                        COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_8 = in_SUPPORTED_5F_OPERATORS.getter_mulEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 70)).boolEnum () ;
  if (kBoolTrue == test_8) {
    result << "//--------------------------------- *= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void mulAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_8) {
  }
  const enumGalgasBool test_9 = in_SUPPORTED_5F_OPERATORS.getter_divEqualOperatorWithExpression (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "//--------------------------------- /= operator (with expression)\n"
      "  public: VIRTUAL_IN_DEBUG void divAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand,\n"
      "                                                      class C_Compiler * inCompiler\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 84)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "//--------------------------------- += operator (with list of field expressions)\n"
      "  public: VIRTUAL_IN_DEBUG void addAssign_operation (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4540_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_4540 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4540.hasCurrentObject ()) {
        result << "const class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_4540.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        result << " & inOperand" ;
        result << index_4540_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 88)).stringValue () ;
        if (enumerator_4540.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4540_IDX.increment () ;
        enumerator_4540.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_11 = in_SUPPORTED_5F_OPERATORS.getter_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).boolEnum () ;
    if (kBoolTrue == test_11) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler" ;
    }else if (kBoolFalse == test_11) {
    }
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n" ;
  }else if (kBoolFalse == test_10) {
  }
  const enumGalgasBool test_12 = in_SUPPORTED_5F_OPERATORS.getter_infixAndOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 98)).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "//--------------------------------- & operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_and (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_13 = in_SUPPORTED_5F_OPERATORS.getter_infixOrOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 104)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//--------------------------------- | operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_or (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_14 = in_SUPPORTED_5F_OPERATORS.getter_infixXorOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 110)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//--------------------------------- ^ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_xor (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_15 = in_SUPPORTED_5F_OPERATORS.getter_prefixNotOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 116)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//--------------------------------- not operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_not (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = in_SUPPORTED_5F_OPERATORS.getter_prefixTildeOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 121)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//--------------------------------- ~ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_tilde (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).boolEnum () ;
  if (kBoolTrue == test_17) {
    result << "//--------------------------------- + operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_17) {
  }
  const enumGalgasBool test_18 = in_SUPPORTED_5F_OPERATORS.getter_infixAddOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).boolEnum () ;
  if (kBoolTrue == test_18) {
    result << "//--------------------------------- &+ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).boolEnum () ;
  if (kBoolTrue == test_19) {
    result << "//--------------------------------- &- operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = in_SUPPORTED_5F_OPERATORS.getter_infixSubOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 143)).boolEnum () ;
  if (kBoolTrue == test_20) {
    result << "//--------------------------------- - operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_20) {
  }
  const enumGalgasBool test_21 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).boolEnum () ;
  if (kBoolTrue == test_21) {
    result << "//--------------------------------- * operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_21) {
  }
  const enumGalgasBool test_22 = in_SUPPORTED_5F_OPERATORS.getter_infixMulOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).boolEnum () ;
  if (kBoolTrue == test_22) {
    result << "//--------------------------------- &* operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 162)).boolEnum () ;
  if (kBoolTrue == test_23) {
    result << "//--------------------------------- / operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_23) {
  }
  const enumGalgasBool test_24 = in_SUPPORTED_5F_OPERATORS.getter_infixDivOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 169)).boolEnum () ;
  if (kBoolTrue == test_24) {
    result << "//--------------------------------- &/ operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = in_SUPPORTED_5F_OPERATORS.getter_infixModOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 174)).boolEnum () ;
  if (kBoolTrue == test_25) {
    result << "//--------------------------------- mod operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " modulo_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_25) {
  }
  const enumGalgasBool test_26 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 181)).boolEnum () ;
  if (kBoolTrue == test_26) {
    result << "//--------------------------------- prefix - operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = in_SUPPORTED_5F_OPERATORS.getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 187)).boolEnum () ;
  if (kBoolTrue == test_27) {
    result << "//--------------------------------- prefix &- operator\n"
      "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus_no_ovf (void) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperator (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_28) {
    result << "//--------------------------------- ++, -- operators\n"
      "  public: VIRTUAL_IN_DEBUG void increment_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG void decrement_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = in_SUPPORTED_5F_OPERATORS.getter_incDecOperatorNoOVF (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 199)).boolEnum () ;
  if (kBoolTrue == test_29) {
    result << "//--------------------------------- &++, &-- operators\n"
      "  public: VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n"
      "\n"
      "  public: VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_29) {
  }
  const enumGalgasBool test_30 = in_SUPPORTED_5F_OPERATORS.getter_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)).boolEnum () ;
  if (kBoolTrue == test_30) {
    result << "//--------------------------------- Implementation of getter 'description'\n"
      "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
      "                                              const int32_t inIndentation) const ;\n" ;
  }else if (kBoolFalse == test_30) {
  }
  const enumGalgasBool test_31 = in_SUPPORTED_5F_OPERATORS.getter_doNotGenererateObjectCompare (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 210)).boolEnum () ;
  if (kBoolTrue == test_31) {
    result << "//--------------------------------- Comparison\n"
      "  public: typeComparisonResult objectCompare (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n" ;
  }else if (kBoolFalse == test_31) {
  }
  result << "\n"
    "//--------------------------------- Setters\n" ;
  GALGAS_uint index_10347_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_10347 (in_MODIFIER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_10347.hasCurrentObject ()) {
      const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_10347.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 220)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_10347.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_10347.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))).operator_or (GALGAS_bool (kIsEqual, enumerator_10347.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).operator_or (GALGAS_bool (kIsEqual, enumerator_10347.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 221)).boolEnum () ;
        if (kBoolTrue == test_33) {
          result << "  public: VIRTUAL_IN_DEBUG void setter_" ;
          result << enumerator_10347.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 222)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10801_IDX (0) ;
          if (enumerator_10347.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10801 (enumerator_10347.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_10801.hasCurrentObject ()) {
              const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_10801.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 224)))).boolEnum () ;
              if (kBoolTrue == test_34) {
                result << "class GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_10801.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
                result << " constinArgument" ;
                result << index_10801_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 225)).stringValue () ;
              }else if (kBoolFalse == test_34) {
                const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_10801.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 226)))).boolEnum () ;
                if (kBoolTrue == test_35) {
                  result << "class GALGAS_" ;
                  result << extensionGetter_identifierRepresentation (enumerator_10801.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_10801_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 227)).stringValue () ;
                }else if (kBoolFalse == test_35) {
                  const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, enumerator_10801.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 228)))).boolEnum () ;
                  if (kBoolTrue == test_36) {
                    result << "class GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_10801.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_10801_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 229)).stringValue () ;
                  }else if (kBoolFalse == test_36) {
                    result << "class GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_10801.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                    result << " inArgument" ;
                    result << index_10801_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 231)).stringValue () ;
                  }
                }
              }
              if (enumerator_10801.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10801_IDX.increment () ;
              enumerator_10801.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_37 = GALGAS_bool (kIsEqual, enumerator_10347.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)))).boolEnum () ;
          if (kBoolTrue == test_37) {
            const enumGalgasBool test_38 = enumerator_10347.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_38) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_38) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_37) {
            const enumGalgasBool test_39 = enumerator_10347.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_39) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_39) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") ;\n"
            "\n" ;
        }else if (kBoolFalse == test_33) {
        }
      }else if (kBoolFalse == test_32) {
      }
      index_10347_.increment () ;
      enumerator_10347.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Instance Methods\n" ;
  GALGAS_uint index_12210_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_12210 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_12210.hasCurrentObject ()) {
      const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_12210.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 258)))).boolEnum () ;
      if (kBoolTrue == test_40) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_12210.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_12210.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))).operator_or (GALGAS_bool (kIsEqual, enumerator_12210.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).operator_or (GALGAS_bool (kIsEqual, enumerator_12210.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 259)).boolEnum () ;
        if (kBoolTrue == test_41) {
          result << "  public: VIRTUAL_IN_DEBUG void method_" ;
          result << enumerator_12210.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 260)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_12664_IDX (0) ;
          if (enumerator_12210.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_12664 (enumerator_12210.current_mParameterList (HERE), kENUMERATION_UP) ;
            while (enumerator_12664.hasCurrentObject ()) {
              const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_12664.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 262)))).boolEnum () ;
              if (kBoolTrue == test_42) {
                result << "class GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_12664.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
                result << " constinArgument" ;
                result << index_12664_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 263)).stringValue () ;
              }else if (kBoolFalse == test_42) {
                const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_12664.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 264)))).boolEnum () ;
                if (kBoolTrue == test_43) {
                  result << "class GALGAS_" ;
                  result << extensionGetter_identifierRepresentation (enumerator_12664.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_12664_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 265)).stringValue () ;
                }else if (kBoolFalse == test_43) {
                  const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, enumerator_12664.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 266)))).boolEnum () ;
                  if (kBoolTrue == test_44) {
                    result << "class GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_12664.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_12664_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 267)).stringValue () ;
                  }else if (kBoolFalse == test_44) {
                    result << "class GALGAS_" ;
                    result << extensionGetter_identifierRepresentation (enumerator_12664.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                    result << " inArgument" ;
                    result << index_12664_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 269)).stringValue () ;
                  }
                }
              }
              if (enumerator_12664.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_12664_IDX.increment () ;
              enumerator_12664.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_45 = GALGAS_bool (kIsEqual, enumerator_12210.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)))).boolEnum () ;
          if (kBoolTrue == test_45) {
            const enumGalgasBool test_46 = enumerator_12210.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_46) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_46) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_45) {
            const enumGalgasBool test_47 = enumerator_12210.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_47) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_47) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") const ;\n"
            "\n" ;
        }else if (kBoolFalse == test_41) {
        }
      }else if (kBoolFalse == test_40) {
      }
      index_12210_.increment () ;
      enumerator_12210.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Class Methods\n" ;
  GALGAS_uint index_14009_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_14009 (in_CLASS_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_14009.hasCurrentObject ()) {
      result << "  public: static void class_method_" ;
      result << enumerator_14009.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 295)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_14216_IDX (0) ;
      if (enumerator_14009.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_14216 (enumerator_14009.current_mParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_14216.hasCurrentObject ()) {
          const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_14216.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 297)))).boolEnum () ;
          if (kBoolTrue == test_48) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_14216.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
            result << " constinArgument" ;
            result << index_14216_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 298)).stringValue () ;
          }else if (kBoolFalse == test_48) {
            const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_14216.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 299)))).boolEnum () ;
            if (kBoolTrue == test_49) {
              result << "class GALGAS_" ;
              result << extensionGetter_identifierRepresentation (enumerator_14216.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
              result << " & ioArgument" ;
              result << index_14216_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 300)).stringValue () ;
            }else if (kBoolFalse == test_49) {
              const enumGalgasBool test_50 = GALGAS_bool (kIsEqual, enumerator_14216.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 301)))).boolEnum () ;
              if (kBoolTrue == test_50) {
                result << "class GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_14216.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
                result << " & outArgument" ;
                result << index_14216_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 302)).stringValue () ;
              }else if (kBoolFalse == test_50) {
                result << "class GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_14216.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
                result << " inArgument" ;
                result << index_14216_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 304)).stringValue () ;
              }
            }
          }
          if (enumerator_14216.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_14216_IDX.increment () ;
          enumerator_14216.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_51 = GALGAS_bool (kIsEqual, enumerator_14009.current_mParameterList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 308)))).boolEnum () ;
      if (kBoolTrue == test_51) {
        const enumGalgasBool test_52 = enumerator_14009.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_52) {
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_52) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "LOCATION_ARGS" ;
        }
      }else if (kBoolFalse == test_51) {
        const enumGalgasBool test_53 = enumerator_14009.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_53) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_53) {
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }
      }
      result << ") ;\n"
        "\n" ;
      index_14009_.increment () ;
      enumerator_14009.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Getters\n" ;
  GALGAS_uint index_15466_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_15466 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_15466.hasCurrentObject ()) {
      switch (enumerator_15466.current_mKind (HERE).enumValue ()) {
      case GALGAS_methodKind::kNotBuilt :
        break ;
      case GALGAS_methodKind::kEnum_definedAsExtension :
        {
        }
        break ;
      case GALGAS_methodKind::kEnum_definedAsMember :
        {
          const enumGalgasBool test_54 = GALGAS_bool (kIsEqual, enumerator_15466.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_15466.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isVirtualAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 332)))).operator_or (GALGAS_bool (kIsEqual, enumerator_15466.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 332)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 332)).operator_or (GALGAS_bool (kIsEqual, enumerator_15466.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 332)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 332)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 332)).boolEnum () ;
          if (kBoolTrue == test_54) {
            result << "  public: VIRTUAL_IN_DEBUG class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_15466.current_mReturnedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)).stringValue () ;
            result << " getter_" ;
            result << enumerator_15466.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 333)).stringValue () ;
            result << " (" ;
            columnMarker = result.currentColumn () ;
            GALGAS_uint index_15973_IDX (0) ;
            if (enumerator_15466.current_mArgumentTypeList (HERE).isValid ()) {
              cEnumerator_functionSignature enumerator_15973 (enumerator_15466.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
              while (enumerator_15973.hasCurrentObject ()) {
                result << "const class GALGAS_" ;
                result << extensionGetter_identifierRepresentation (enumerator_15973.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 335)).stringValue () ;
                result << " & constinOperand" ;
                result << index_15973_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 335)).stringValue () ;
                if (enumerator_15973.hasNextObject ()) {
                  result << ",\n" ;
                  result.appendSpacesUntilColumn (columnMarker) ;
                }
                index_15973_IDX.increment () ;
                enumerator_15973.gotoNextObject () ;
              }
            }
            const enumGalgasBool test_55 = GALGAS_bool (kIsEqual, enumerator_15466.current_mArgumentTypeList (HERE).getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 338)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 338)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 338)))).boolEnum () ;
            if (kBoolTrue == test_55) {
              const enumGalgasBool test_56 = enumerator_15466.current_mHasCompilerArgument (HERE).boolEnum () ;
              if (kBoolTrue == test_56) {
                result << "C_Compiler * inCompiler\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }else if (kBoolFalse == test_56) {
                result << "LOCATION_ARGS" ;
              }
            }else if (kBoolFalse == test_55) {
              const enumGalgasBool test_57 = enumerator_15466.current_mHasCompilerArgument (HERE).boolEnum () ;
              if (kBoolTrue == test_57) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "C_Compiler * inCompiler\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }else if (kBoolFalse == test_57) {
                result << "\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
                result << "COMMA_LOCATION_ARGS" ;
              }
            }
            result << ") const ;\n"
              "\n" ;
          }else if (kBoolFalse == test_54) {
          }
        }
        break ;
      }
      index_15466_.increment () ;
      enumerator_15466.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Optional Methods\n" ;
  GALGAS_uint index_16652_ (0) ;
  if (in_OPTIONAL_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_optionalMethodMap enumerator_16652 (in_OPTIONAL_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_16652.hasCurrentObject ()) {
      result << "  public: VIRTUAL_IN_DEBUG bool optional_" ;
      result << enumerator_16652.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 360)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_16863_IDX (0) ;
      if (enumerator_16652.current_mArgumentTypeList (HERE).isValid ()) {
        cEnumerator_optionalMethodSignature enumerator_16863 (enumerator_16652.current_mArgumentTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_16863.hasCurrentObject ()) {
          const enumGalgasBool test_58 = enumerator_16863.current_mInputArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_58) {
            result << "const class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_16863.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 364)).stringValue () ;
            result << " & constinOperand" ;
            result << index_16863_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 364)).stringValue () ;
          }else if (kBoolFalse == test_58) {
            result << "class GALGAS_" ;
            result << extensionGetter_identifierRepresentation (enumerator_16863.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue () ;
            result << " & outOperand" ;
            result << index_16863_IDX.getter_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 366)).stringValue () ;
          }
          if (enumerator_16863.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_16863_IDX.increment () ;
          enumerator_16863.gotoNextObject () ;
        }
      }
      result << ") const ;\n"
        "\n" ;
      index_16652_.increment () ;
      enumerator_16652.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Introspection\n"
    "  public: VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;\n" ;
  const enumGalgasBool test_59 = in_SUPPORTED_5F_OPERATORS.getter_generateEnumerationHelperMethods (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 378)).boolEnum () ;
  if (kBoolTrue == test_59) {
    result << "//--------------------------------- Enumeration helper methods\n"
      "  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_59) {
  }
  const enumGalgasBool test_60 = in_SUPPORTED_5F_OPERATORS.getter_supportWithAccessor (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 384)).boolEnum () ;
  if (kBoolTrue == test_60) {
    result << "  public: VIRTUAL_IN_DEBUG cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * readWriteAccessForWithInstruction (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_string & inKey\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_60) {
  }
  const enumGalgasBool test_61 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 390)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 390)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 390)))).boolEnum () ;
  if (kBoolTrue == test_61) {
    result << "//--------------------------------- Friend\n"
      "\n"
      "  friend class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_61) {
  }
  result << " \n"
    "} ; // End of GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " class\n"
    "\n" ;
  const enumGalgasBool test_62 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.getter_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 397)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 397)).getter_uint (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 397)))).boolEnum () ;
  if (kBoolTrue == test_62) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "//   Enumerator declaration                                                                      \n"
      "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " : public cGenericAbstractEnumerator {\n"
      "  public: cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inEnumeratedObject,\n"
      "     " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const typeEnumerationOrder inOrder) ;\n"
      "\n"
      "//--- Current element access\n" ;
    GALGAS_uint index_18754_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_18754 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_18754.hasCurrentObject ()) {
        result << "  public: class GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_18754.current_mEnumeratedType (HERE), inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 408)).stringValue () ;
        result << " current_" ;
        result << enumerator_18754.current_mEnumerationName (HERE).getter_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 408)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
        index_18754_.increment () ;
        enumerator_18754.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_63 = in_ENUMERATED_5F_OBJECT_5F_TYPE.getter_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 410)).boolEnum () ;
    if (kBoolTrue == test_63) {
      result << "//--- Current element access\n"
        "  public: class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (in_ENUMERATED_5F_OBJECT_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 412)).stringValue () ;
      result << " current (LOCATION_ARGS) const ;\n" ;
    }else if (kBoolFalse == test_63) {
    }
    result << "} ;\n" ;
  }else if (kBoolFalse == test_62) {
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate genericTypeImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_unifiedTypeMapEntry & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const GALGAS_operators & /* in_SUPPORTED_5F_OPERATORS */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "const C_galgas_type_descriptor\n"
    "kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "\"" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << "\",\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.getter_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NULL" ;
  }else if (kBoolFalse == test_0) {
    result << "& kTypeDescriptor_GALGAS_" ;
    result << extensionGetter_identifierRepresentation (in_SUPER_5F_TYPE_5F_INDEX, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).stringValue () ;
  }
  result << ") ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "const C_galgas_type_descriptor * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::staticTypeDescriptor (void) const {\n"
    "  return & kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "AC_GALGAS_root * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::clonedObject (void) const {\n"
    "  AC_GALGAS_root * result = NULL ;\n"
    "  if (isValid ()) {\n"
    "    macroMyNew (result, GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (*this)) ;\n"
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
  result << "::extractObject (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_object & inObject,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inObject.embeddedObject () ;\n"
    "  if (NULL != p) {\n"
    "    if (NULL != dynamic_cast <const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *> (p)) {\n"
    "      result = *p ;\n"
    "    }else{\n"
    "      inCompiler->castError (\"" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << "\", p->dynamicTypeDescriptor () COMMA_THERE) ;\n"
    "    }  \n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate externTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const GALGAS_string & in_CODE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "//  Predeclarations (from GALGAS extern type declaration\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  result << in_PRE_5F_DECLARATION.stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//---\n"
    "  public: virtual bool isValid (void) const ;\n"
    "  public: virtual void drop (void) ;\n"
    "\n"
    "//--- For log instruction\n"
    "  public: virtual void description (C_String & ioString,\n"
    "                                     const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Code (from GALGAS extern type declaration)\n" ;
  result << in_CODE.stringValue () ;
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_graph {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_unifiedTypeMapEntry & /* in_TYPE */,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_unifiedTypeMapEntry & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_graph () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyGraph (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyGraph (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_758_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_758 (in_INSERT_5F_MODIFIER_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_758.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_758.current_mInsertModifierName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_1139_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1139 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
        while (enumerator_1139.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_1139.current_mFormalArgumentType (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          result << " inArgument_" ;
          result << index_1139_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          index_1139_IDX.increment () ;
          enumerator_1139.gotoNextObject () ;
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  capCollectionElement attributes ;\n"
        "  GALGAS_" ;
      result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue () ;
      result << "::makeAttributesFromObjects (attributes" ;
      GALGAS_uint index_1585_IDX (0) ;
      if (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments ().isValid ()) {
        cEnumerator_functionSignature enumerator_1585 (extensionGetter_definition (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).readProperty_mAddAssignOperatorArguments (), kENUMERATION_UP) ;
        while (enumerator_1585.hasCurrentObject ()) {
          result << ", inArgument_" ;
          result << index_1585_IDX.getter_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue () ;
          index_1585_IDX.increment () ;
          enumerator_1585.gotoNextObject () ;
        }
      }
      result << " COMMA_THERE) ;\n"
        "  const char * kErrorMessage = " ;
      result << enumerator_758.current_mInsertErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue () ;
      result << " ;\n"
        "  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_758_.increment () ;
      enumerator_758.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_topologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue () ;
  result << " & outUnsortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outUnsortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray sortedList ;\n"
    "  capCollectionElementArray unsortedList ;\n"
    "  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (unsortedList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_depthFirstTopologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 58)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue () ;
  result << " & outUnsortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outUnsortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray sortedList ;\n"
    "  capCollectionElementArray unsortedList ;\n"
    "  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 67)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 68)).stringValue () ;
  result << " (unsortedList) ;\n"
    "}\n"
    "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_reversedGraph (LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_circularities (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 82)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 87)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoSuccessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoPredecessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  capCollectionElementArray infoList ;\n"
    "  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 107)).stringValue () ;
  result << " (infoList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_subgraphFromNodes (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_stringset & inKeysToExclude,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  subGraph (result, inStartKeyList, inKeysToExclude, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 123)).stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_nodeList (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << extensionGetter_identifierRepresentation (in_ASSOCIATED_5F_LIST_5F_TYPE, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 124)).stringValue () ;
  result << " resultingList ;\n"
    "  if (isValid ()) {\n"
    "    resultingList = graph () ;\n"
    "  }\n"
    "  return resultingList ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstringlist GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_accessibleNodesFrom (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_stringset & inNodesToExclude,\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "                                        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_lstringlist result ;\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " resultingGraph ;\n"
    "  subGraph (resultingGraph,\n"
    "            inStartKeyList,\n"
    "            inNodesToExclude,\n"
    "            inCompiler\n"
    "            COMMA_THERE) ;\n"
    "  if (resultingGraph.isValid ()) {\n"
    "    result = resultingGraph.getter_lkeyList (THERE) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & /* in_ELEMENT_5F_TYPE_5F_IDENTIFIER */,
                                                                              const GALGAS_uint & /* in_DIMENSION */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public: inline GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "  mSharedObject (NULL) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "\n"
    "//--- Insulate\n"
    "  private: VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- isValid\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const {\n"
    "    return NULL != mSharedObject ;\n"
    "  }\n"
    "\n"
    "//--- Drop\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Private attribute\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedObject ;\n"
    "\n"
    "//--- Drop\n"
    "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_uint & in_DIMENSION,
                                                                                          const GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "  private: GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mObjectArray ;\n" ;
  GALGAS_uint index_432_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_432 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_432.hasCurrentObject ()) {
      result << "  private: uint32_t mSize" ;
      result << enumerator_432.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_432_.increment () ;
      enumerator_432.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_571_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_571 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_571.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_571.current_mValue (HERE).stringValue () ;
      if (enumerator_571.hasNextObject ()) {
        result << ",\n" ;
      }
      index_571_.increment () ;
      enumerator_571.gotoNextObject () ;
    }
  }
  result << "\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inPointer\n"
    "      " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Destructor\n"
    "  public: virtual ~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Comparison\n"
    "  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const ;\n"
    "\n"
    "//--- \n" ;
  GALGAS_uint index_1187_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1187 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1187.hasCurrentObject ()) {
      result << "  public: inline uint32_t size" ;
      result << enumerator_1187.current_mValue (HERE).stringValue () ;
      result << " (void) const { return mSize" ;
      result << enumerator_1187.current_mValue (HERE).stringValue () ;
      result << " ; }\n" ;
      index_1187_.increment () ;
      enumerator_1187.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " objectAtAbsoluteIndex (const int32_t inIndex) const ;\n"
    "\n"
    "  public: VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "                                                           const int32_t inIndex) ;\n"
    "\n"
    "//--- \n"
    "  public: VIRTUAL_IN_DEBUG int32_t indexForIndexes (" ;
  GALGAS_uint index_1696_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1696 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_1696 = enumerator_1696.hasCurrentObject () ;
    if (nonEmpty_enumerator_1696) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1696.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1696.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_1696_.increment () ;
      enumerator_1696.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const ;\n"
    "\n"
    "//--- \n"
    "  public: VIRTUAL_IN_DEBUG void setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1892_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1892 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1892.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1892.current_mValue (HERE).stringValue () ;
      if (enumerator_1892.hasNextObject ()) {
        result << ",\n" ;
      }
      index_1892_.increment () ;
      enumerator_1892.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2189_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2189 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2189.hasCurrentObject ()) {
      result << "const uint32_t inSize" ;
      result << enumerator_2189.current_mValue (HERE).stringValue () ;
      if (enumerator_2189.hasNextObject ()) {
        result << ",\n"
          "                                                      " ;
      }
      index_2189_.increment () ;
      enumerator_2189.gotoNextObject () ;
    }
  }
  result << "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2409_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2409 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2409.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2409.current_mValue (HERE).stringValue () ;
      result << " (inSize" ;
      result << enumerator_2409.current_mValue (HERE).stringValue () ;
      result << ")" ;
      if (enumerator_2409.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2409_.increment () ;
      enumerator_2409.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_2574_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2574 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2574.hasCurrentObject ()) {
      result << " inSize" ;
      result << enumerator_2574.current_mValue (HERE).stringValue () ;
      if (enumerator_2574.hasNextObject ()) {
        result << " * " ;
      }
      index_2574_.increment () ;
      enumerator_2574.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inPointer\n"
    "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2949_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2949 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2949.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2949.current_mValue (HERE).stringValue () ;
      result << " (inPointer->size" ;
      result << enumerator_2949.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_2949.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2949_.increment () ;
      enumerator_2949.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  const uint32_t size = " ;
  GALGAS_uint index_3082_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3082 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3082.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3082.current_mValue (HERE).stringValue () ;
      if (enumerator_3082.hasNextObject ()) {
        result << " * " ;
      }
      index_3082_.increment () ;
      enumerator_3082.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", size) ;\n"
    "  for (uint32_t i=0 ; i<size ; i++) {\n"
    "    mObjectArray [i] = inPointer->mObjectArray [i] ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static inline uint32_t " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3510_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3510 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3510.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_3510.current_mValue (HERE).stringValue () ;
      if (enumerator_3510.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3510_.increment () ;
      enumerator_3510.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3621_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3621 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kENUMERATION_UP) ;
    while (enumerator_3621.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_3621.current_mValue (HERE).stringValue () ;
      index_3621_.increment () ;
      enumerator_3621.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "  uint32_t idx = inIndex0 ;\n" ;
  GALGAS_uint index_3754_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3754 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kENUMERATION_UP) ;
    while (enumerator_3754.hasCurrentObject ()) {
      result << "  idx *= inSize" ;
      result << enumerator_3754.current_mValue (HERE).stringValue () ;
      result << " ;\n"
        "  idx += inIndex" ;
      result << enumerator_3754.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_3754_.increment () ;
      enumerator_3754.gotoNextObject () ;
    }
  }
  result << "  return idx ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "int32_t cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4052_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4052 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4052.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_4052.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_4052_.increment () ;
      enumerator_4052.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  int32_t result = -1 ;\n"
    "  " ;
  GALGAS_uint index_4224_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4224 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4224.hasCurrentObject ()) {
      result << "if (inIndex" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " >= size" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " ()) {\n"
        "    C_String s ;\n"
        "    s << \"array index " ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " : \" << cStringWithUnsigned (inIndex" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << ") << \" >= size \" << cStringWithUnsigned (size" ;
      result << enumerator_4224.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n"
        "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
      if (enumerator_4224.hasNextObject ()) {
        result << "  }else " ;
      }
      index_4224_.increment () ;
      enumerator_4224.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    result = (int32_t) " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_4605_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4605 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4605.hasCurrentObject ()) {
      result << "inIndex" ;
      result << enumerator_4605.current_mValue (HERE).stringValue () ;
      if (enumerator_4605.hasNextObject ()) {
        result << ", " ;
      }
      index_4605_.increment () ;
      enumerator_4605.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4695_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)).isValid ()) {
    cEnumerator_stringlist enumerator_4695 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)), kENUMERATION_UP) ;
    while (enumerator_4695.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_4695.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_4695_.increment () ;
      enumerator_4695.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectAtAbsoluteIndex (const int32_t inIndex) const {\n"
    "  return mObjectArray [inIndex] ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setObjectAtAbsoluteIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t inIndex) {\n"
    "  mObjectArray [inIndex] = inObject ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroMyDeleteArray (mObjectArray) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5755_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5755 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5755.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_5755.current_mValue (HERE).stringValue () ;
      if (enumerator_5755.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5755_.increment () ;
      enumerator_5755.gotoNextObject () ;
    }
  }
  result << "      \n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNewArrayThere (p, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_5989_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5989 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5989.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_5989.current_mValue (HERE).stringValue () ;
      if (enumerator_5989.hasNextObject ()) {
        result << " * " ;
      }
      index_5989_.increment () ;
      enumerator_5989.gotoNextObject () ;
    }
  }
  result << ") ;\n" ;
  GALGAS_uint index_6064_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6064 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6064.hasCurrentObject ()) {
      result << "  uint32_t min" ;
      result << enumerator_6064.current_mValue (HERE).stringValue () ;
      result << " = uimin32 (size" ;
      result << enumerator_6064.current_mValue (HERE).stringValue () ;
      result << " (), inSize" ;
      result << enumerator_6064.current_mValue (HERE).stringValue () ;
      result << ") ;\n" ;
      index_6064_.increment () ;
      enumerator_6064.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6178_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6178 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6178.hasCurrentObject ()) {
      result << "  for (uint32_t i" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << "=0 ; i" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << "<min" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << " ; i" ;
      result << enumerator_6178.current_mValue (HERE).stringValue () ;
      result << "++) {\n" ;
      index_6178_.increment () ;
      enumerator_6178.gotoNextObject () ;
    }
  }
  result << "        const uint32_t idxSource = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6363_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6363 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6363.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6363.current_mValue (HERE).stringValue () ;
      if (enumerator_6363.hasNextObject ()) {
        result << ", " ;
      }
      index_6363_.increment () ;
      enumerator_6363.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6447_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)).isValid ()) {
    cEnumerator_stringlist enumerator_6447 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)), kENUMERATION_UP) ;
    while (enumerator_6447.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_6447.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_6447_.increment () ;
      enumerator_6447.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        const uint32_t idxTarget = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6580_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6580 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6580.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6580.current_mValue (HERE).stringValue () ;
      if (enumerator_6580.hasNextObject ()) {
        result << ", " ;
      }
      index_6580_.increment () ;
      enumerator_6580.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6664_ (0) ;
  if (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)).isValid ()) {
    cEnumerator_stringlist enumerator_6664 (in_DIMENSION_5F_LIST.getter_subListFromIndex (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)), kENUMERATION_UP) ;
    while (enumerator_6664.hasCurrentObject ()) {
      result << ", inSize" ;
      result << enumerator_6664.current_mValue (HERE).stringValue () ;
      index_6664_.increment () ;
      enumerator_6664.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        p [idxTarget] = mObjectArray [idxSource] ;\n" ;
  GALGAS_uint index_6778_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6778 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6778.hasCurrentObject ()) {
      result << "  }\n" ;
      index_6778_.increment () ;
      enumerator_6778.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6824_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6824 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6824.hasCurrentObject ()) {
      result << "  mSize" ;
      result << enumerator_6824.current_mValue (HERE).stringValue () ;
      result << " = inSize" ;
      result << enumerator_6824.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_6824_.increment () ;
      enumerator_6824.gotoNextObject () ;
    }
  }
  result << "  macroMyDeleteArray (mObjectArray) ;\n"
    "  mObjectArray = p ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSourceObject) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedObject (NULL) {\n"
    "  macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSourceObject) {\n"
    "  if (this != & inSourceObject) {\n"
    "    macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "  }\n"
    "  return *this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8333_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8333 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8333.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inSize" ;
      result << enumerator_8333.current_mValue (HERE).stringValue () ;
      if (enumerator_8333.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8333_.increment () ;
      enumerator_8333.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_8500_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8500 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8500.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8500.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_8500.hasNextObject ()) {
        result << " && " ;
      }
      index_8500_.increment () ;
      enumerator_8500.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroMyNew (result.mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8652_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8652 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8652.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8652.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_8652.hasNextObject ()) {
        result << ", " ;
      }
      index_8652_.increment () ;
      enumerator_8652.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
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
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t /* inIndentation */) const {\n"
    "  ioString << \"<@ptrint:\" ;\n"
    "  if (NULL == mSharedObject) {\n"
    "    ioString << \"NULL\" ;\n"
    "  }else{\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    ioString " ;
  columnMarker = result.currentColumn () ;
  result << "<< \"array [\"" ;
  GALGAS_uint index_9217_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9217 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9217.hasCurrentObject ()) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "<< cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_9217.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_9217.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_9217_.increment () ;
      enumerator_9217.gotoNextObject () ;
    }
  }
  result << "             << \"] of @uint\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_axisCount (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid ()) {\n"
    "    result = GALGAS_uint (" ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 263)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_range GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_rangeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inAxisIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_range result ;\n"
    "  if (isValid () && inAxisIndex.isValid ()) {\n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 276)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10354_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10354 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10354.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_10354.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size" ;
      result << enumerator_10354.current_mValue (HERE).stringValue () ;
      result << " ())) ;\n" ;
      index_10354_.increment () ;
      enumerator_10354.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_sizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_uint & inAxisIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid () && inAxisIndex.isValid ()) {\n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 297)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"getter @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_11192_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11192 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11192.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_11192.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_uint (mSharedObject->size" ;
      result << enumerator_11192.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n" ;
      index_11192_.increment () ;
      enumerator_11192.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_isValueValidAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11567_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11567 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11567.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_11567.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_11567_.increment () ;
      enumerator_11567.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (isValid ()" ;
  GALGAS_uint index_11758_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11758 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11758.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_11758.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_11758_.increment () ;
      enumerator_11758.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11964_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11964 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11964.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_11964.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_11964_.increment () ;
      enumerator_11964.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = GALGAS_bool (mSharedObject->objectAtAbsoluteIndex (idx).isValid ()) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_valueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12525_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12525 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12525.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_12525.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_12525_.increment () ;
      enumerator_12525.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (isValid ()" ;
  GALGAS_uint index_12738_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12738 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12738.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_12738.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_12738_.increment () ;
      enumerator_12738.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12944_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12944 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12944.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_12944.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_12944_.increment () ;
      enumerator_12944.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n"
    "      if (! result.isValid ()) {\n"
    "        C_String s ;\n"
    "        s << \"getter @ptrint valueAtIndex: object at index (\"" ;
  GALGAS_uint index_13357_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13357 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13357.hasCurrentObject ()) {
      result << "\n"
        "             << cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_13357.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_13357.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_13357_.increment () ;
      enumerator_13357.gotoNextObject () ;
    }
  }
  result << "\n"
    "             << \") is invalid\" ;\n"
    "        inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if (isValid () && !mSharedObject->isUniquelyReferenced ()) {\n"
    "    cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedObject COMMA_THERE)) ;\n"
    "    macroAssignSharedObject (mSharedObject, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_14398_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14398 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14398.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_14398.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_14398_.increment () ;
      enumerator_14398.gotoNextObject () ;
    }
  }
  result << "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_14583_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14583 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14583.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_14583.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_14583_.increment () ;
      enumerator_14583.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14911_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14911 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14911.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_14911.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_14911_.increment () ;
      enumerator_14911.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_forceValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_15452_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15452 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15452.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inIndex" ;
      result << enumerator_15452.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_15452_.increment () ;
      enumerator_15452.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_15632_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15632 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15632.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_15632.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_15632_.increment () ;
      enumerator_15632.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  //--- Resize \?\n"
    "    const bool resize = " ;
  GALGAS_uint index_15942_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15942 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15942.hasCurrentObject ()) {
      result << "(inIndex" ;
      result << enumerator_15942.current_mValue (HERE).stringValue () ;
      result << ".uintValue () >= mSharedObject->size" ;
      result << enumerator_15942.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_15942.hasNextObject ()) {
        result << " || " ;
      }
      index_15942_.increment () ;
      enumerator_15942.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "    if (resize) {\n" ;
  GALGAS_uint index_16087_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16087 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16087.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_16087.current_mValue (HERE).stringValue () ;
      result << " = uimax32 (mSharedObject->size" ;
      result << enumerator_16087.current_mValue (HERE).stringValue () ;
      result << " (), inIndex" ;
      result << enumerator_16087.current_mValue (HERE).stringValue () ;
      result << ".uintValue () + 1) ;\n" ;
      index_16087_.increment () ;
      enumerator_16087.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_16280_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16280 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16280.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_16280.current_mValue (HERE).stringValue () ;
      if (enumerator_16280.hasNextObject ()) {
        result << ", " ;
      }
      index_16280_.increment () ;
      enumerator_16280.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  //---\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_16438_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16438 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16438.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_16438.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_16438_.increment () ;
      enumerator_16438.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (inValue, idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSizeForAxis (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_uint inNewSize,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_uint inAxisIndex,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inNewSize.isValid () && inAxisIndex.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "  //--- \n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 451)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"setter @ptrint setSizeForAxis: axis index (\"\n"
    "        << cStringWithUnsigned (axisIndex) << \") >= dimension (" ;
  result << in_DIMENSION.getter_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 454)).stringValue () ;
  result << ")\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "    }else{\n" ;
  GALGAS_uint index_17672_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17672 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17672.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_17672.current_mValue (HERE).stringValue () ;
      result << " = (" ;
      result << enumerator_17672.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) \? inNewSize.uintValue () : mSharedObject->size" ;
      result << enumerator_17672.current_mValue (HERE).stringValue () ;
      result << " () ;\n" ;
      index_17672_.increment () ;
      enumerator_17672.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_17873_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17873 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17873.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_17873.current_mValue (HERE).stringValue () ;
      if (enumerator_17873.hasNextObject ()) {
        result << ", " ;
      }
      index_17873_.increment () ;
      enumerator_17873.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_invalidateValueAtIndex (" ;
  GALGAS_uint index_18170_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18170 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_18170 = enumerator_18170.hasCurrentObject () ;
    if (nonEmpty_enumerator_18170) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_18170.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_18170.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_18170_.increment () ;
      enumerator_18170.gotoNextObject () ;
    }
  }
  result << "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_18335_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18335 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18335.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_18335.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_18335_.increment () ;
      enumerator_18335.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18663_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18663 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18663.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_18663.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_18663_.increment () ;
      enumerator_18663.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      mSharedObject->setObjectAtAbsoluteIndex (GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (), idx) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19178_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19178 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19178.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inNewSize" ;
      result << enumerator_19178.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_19178_.increment () ;
      enumerator_19178.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_19345_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19345 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19345.hasCurrentObject ()) {
      result << " && inNewSize" ;
      result << enumerator_19345.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_19345_.increment () ;
      enumerator_19345.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->isUniquelyReferenced (), \"isUniquelyReferenced () is false\", 0, 0) ;\n"
    "    mSharedObject->setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19647_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19647 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19647.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inNewSize" ;
      result << enumerator_19647.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_19647.hasNextObject ()) {
        result << ",\n" ;
      }
      index_19647_.increment () ;
      enumerator_19647.gotoNextObject () ;
    }
  }
  result << "\n"
    "                            COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "  typeComparisonResult result =  kOperandEqual ;\n" ;
  GALGAS_uint index_20072_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20072 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20072.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    if (mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << " < inOperand->mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandLowerThanSecond ;\n"
        "    }else if (mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << " > inOperand->mSize" ;
      result << enumerator_20072.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandGreaterThanSecond ;\n"
        "    }\n"
        "  }\n" ;
      index_20072_.increment () ;
      enumerator_20072.gotoNextObject () ;
    }
  }
  result << "  for (uint32_t i=0 ; (i<(" ;
  GALGAS_uint index_20393_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20393 (in_DIMENSION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20393.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_20393.current_mValue (HERE).stringValue () ;
      if (enumerator_20393.hasNextObject ()) {
        result << "*" ;
      }
      index_20393_.increment () ;
      enumerator_20393.gotoNextObject () ;
    }
  }
  result << ")) && (result == kOperandEqual) ; i++) {\n"
    "    GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptrObject1 = & (mObjectArray [i]) ;\n"
    "    GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptrObject2 = & (inOperand->mObjectArray [i]) ;\n"
    "    if ((! ptrObject1->isValid ()) && ptrObject2->isValid ()) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (ptrObject1->isValid () && ! ptrObject2->isValid ()) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else if (ptrObject1->isValid () && ptrObject2->isValid ()) {\n"
    "      result = ptrObject1->objectCompare (* ptrObject2) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = (isValid () && inOperand.isValid ()) \? kOperandEqual : kOperandNotValid ;\n"
    "  if (kOperandEqual == result) {\n"
    "    result = mSharedObject->objectCompare (inOperand.mSharedObject) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_listmap {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
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
    "AC_GALGAS_listmap () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyListMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_830_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_830 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_830.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_830.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      result << " & inOperand" ;
      result << index_830_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      index_830_IDX.increment () ;
      enumerator_830.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inKey.isValid ()" ;
  GALGAS_uint index_1109_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1109 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1109.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_1109_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue () ;
      result << ".isValid ()" ;
      index_1109_IDX.increment () ;
      enumerator_1109.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_1401_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1401 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1401.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_1401_IDX.getter_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue () ;
      index_1401_IDX.increment () ;
      enumerator_1401.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    addObjectInListMap (inKey.stringValue (), attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_listForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (listForKey (inKey)) ;\n"
    "}\n"
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
    "                       " ;
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
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mKey, p->mSharedListMapList) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_string cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_string (p->mKey) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_mList (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (p->mSharedListMapList) ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                            const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_411_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_411 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_411.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_411.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_411_.increment () ;
      enumerator_411.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_map {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  \n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeHeader2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_494_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_494 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_494.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_494.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_494.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_494_.increment () ;
      enumerator_494.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_821_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_821 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_821.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_821.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_821.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      index_821_.increment () ;
      enumerator_821.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE,
                                                                                        const GALGAS_bool & in_ACTIVATE_5F_REMPLACEMENT_5F_SUGGESTIONS
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_308_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_308.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_308.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_308.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      index_308_.increment () ;
      enumerator_308.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_582_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_582 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_582.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_582.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_582_.increment () ;
      enumerator_582.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mProperty_lkey.isValid ()" ;
  GALGAS_uint index_1017_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1017 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1017.hasCurrentObject ()) {
      result << " && mProperty_" ;
      result << enumerator_1017.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_1017_.increment () ;
      enumerator_1017.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement * cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cMapElement * result = NULL ;\n"
    "  macroMyNew (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mProperty_lkey" ;
  GALGAS_uint index_1483_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1483 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1483.hasCurrentObject ()) {
      result << ", mProperty_" ;
      result << enumerator_1483.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 32)).stringValue () ;
      index_1483_.increment () ;
      enumerator_1483.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 40)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 40)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 40)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_2078_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_2078 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_2078.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_2078.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mProperty_" ;
        result << enumerator_2078.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_2078_.increment () ;
        enumerator_2078.gotoNextObject () ;
      }
    }
  }
  result << "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::compare (const cCollectionElement * inOperand) const {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * operand = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "  typeComparisonResult result = mProperty_lkey.objectCompare (operand->mProperty_lkey) ;\n" ;
  GALGAS_uint index_2853_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2853 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2853.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mProperty_" ;
      result << enumerator_2853.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mProperty_" ;
      result << enumerator_2853.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2853_.increment () ;
      enumerator_2853.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_map (" ;
  result << in_ACTIVATE_5F_REMPLACEMENT_5F_SUGGESTIONS.getter_cString (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 69)).stringValue () ;
  result << ") {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_map (inSource) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  * ((AC_GALGAS_map *) this) = inSource ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyMap (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_mapWithMapToOverride (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inMapToOverride\n"
    "                                                   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNewEmptyMapWithMapToOverride (inMapToOverride COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_overriddenMap (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  getOverridenMap (result, inCompiler COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_5360_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5360 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5360.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5360.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      result << " & inArgument" ;
      result << index_5360_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      index_5360_IDX.increment () ;
      enumerator_5360.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  macroMyNew (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inKey" ;
  GALGAS_uint index_5732_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5732 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5732.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_5732_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 122)).stringValue () ;
      index_5732_IDX.increment () ;
      enumerator_5732.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  capCollectionElement attributes ;\n"
    "  attributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n" ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).uintValue ()) ;
  }
  result << "const char * kInsertErrorMessage = \"@" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " insert error: '%K' already in map\" ;\n"
    "const char * kShadowErrorMessage = \"\" ;\n"
    "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
  if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 128)).uintValue ())) ;
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_6243_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_6243 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6243.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_6243.current_mInsertMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 137)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_6593_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6593 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6593.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_6593.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          result << " inArgument" ;
          result << index_6593_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          index_6593_IDX.increment () ;
          enumerator_6593.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = NULL ;\n"
        "  macroMyNew (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (inKey" ;
      GALGAS_uint index_6981_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6981 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_6981.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_6981_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue () ;
          index_6981_IDX.increment () ;
          enumerator_6981.gotoNextObject () ;
        }
      }
      result << " COMMA_HERE)) ;\n"
        "  capCollectionElement attributes ;\n"
        "  attributes.setPointer (p) ;\n"
        "  macroDetachSharedObject (p) ;\n" ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).uintValue ()) ;
      }
      result << "const char * kInsertErrorMessage = " ;
      result << enumerator_6243.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
      result << " ;\n"
        "const char * kShadowErrorMessage = " ;
      result << enumerator_6243.current_mShadowErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 154)).stringValue () ;
      result << " ;\n"
        "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
      if (GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 152)).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_6243_.increment () ;
      enumerator_6243.gotoNextObject () ;
    }
  }
  GALGAS_uint index_7543_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_7543 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7543.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_7543.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " = " ;
      result << enumerator_7543.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " ;\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::method_" ;
      result << enumerator_7543.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 164)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_8168_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8168 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8168.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_8168.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          result << " & outArgument" ;
          result << index_8168_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          index_8168_IDX.increment () ;
          enumerator_8168.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_1 = enumerator_7543.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_location & outKeyLocation" ;
      }else if (kBoolFalse == test_1) {
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) performSearch (" ;
      columnMarker = result.currentColumn () ;
      result << "inKey,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inCompiler,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_7543.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 175)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "  if (NULL == p) {\n" ;
      GALGAS_uint index_8841_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8841 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8841.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_8841_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 179)).stringValue () ;
          result << ".drop () ;\n" ;
          index_8841_IDX.increment () ;
          enumerator_8841.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_2 = enumerator_7543.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "    outKeyLocation.drop () ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      result << "  }else{\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_9150_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9150.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_9150_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 187)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_9150.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 187)).stringValue () ;
          result << " ;\n" ;
          index_9150_IDX.increment () ;
          enumerator_9150.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_3 = enumerator_7543.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "    outKeyLocation = p->mProperty_lkey.mProperty_location ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      result << "  }\n"
        "}\n"
        "\n" ;
      index_7543_.increment () ;
      enumerator_7543.gotoNextObject () ;
    }
  }
  GALGAS_uint index_9442_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_9442 (in_REMOVE_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9442.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_9442.current_mMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 199)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_9782_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9782 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9782.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_9782.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).stringValue () ;
          result << " & outArgument" ;
          result << index_9782_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 201)).stringValue () ;
          index_9782_IDX.increment () ;
          enumerator_9782.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  const char * kRemoveErrorMessage = " ;
      result << enumerator_9442.current_mErrorMessage (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 205)).stringValue () ;
      result << " ;\n"
        "  capCollectionElement attributes ;\n"
        "  performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "  if (NULL == p) {\n" ;
      GALGAS_uint index_10387_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10387 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10387.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_10387_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 211)).stringValue () ;
          result << ".drop () ;\n" ;
          index_10387_IDX.increment () ;
          enumerator_10387.gotoNextObject () ;
        }
      }
      result << "  }else{\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_10624_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_10624 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_10624.hasCurrentObject ()) {
          result << "    outArgument" ;
          result << index_10624_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_10624.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 216)).stringValue () ;
          result << " ;\n" ;
          index_10624_IDX.increment () ;
          enumerator_10624.gotoNextObject () ;
        }
      }
      result << "  }\n"
        "}\n"
        "\n" ;
      index_9442_.increment () ;
      enumerator_9442.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::setter_insertOrReplace (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_lstring inKey" ;
    GALGAS_uint index_11100_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11100 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11100.hasCurrentObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_11100.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 227)).stringValue () ;
        result << " inArgument" ;
        result << index_11100_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 227)).stringValue () ;
        index_11100_IDX.increment () ;
        enumerator_11100.gotoNextObject () ;
      }
    }
    result << "\n"
      " " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
      "  cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = NULL ;\n"
      "  macroMyNew (p, cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (inKey" ;
    GALGAS_uint index_11449_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_11449 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_11449.hasCurrentObject ()) {
        result << ", inArgument" ;
        result << index_11449_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 233)).stringValue () ;
        index_11449_IDX.increment () ;
        enumerator_11449.gotoNextObject () ;
      }
    }
    result << " COMMA_HERE)) ;\n"
      "  capCollectionElement attributes ;\n"
      "  attributes.setPointer (p) ;\n"
      "  macroDetachSharedObject (p) ;\n"
      "  performInsertOrReplace (attributes) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_4) {
  }
  GALGAS_uint index_11776_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11776 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11776.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11776.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_11776.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 245)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_string & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  const cCollectionElement * attributes = searchForReadingAttribute (inKey, inCompiler COMMA_THERE) ;\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_11776.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 250)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_11776.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 253)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_11776_IDX.increment () ;
      enumerator_11776.gotoNextObject () ;
    }
  }
  GALGAS_uint index_12856_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12856 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12856.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_12856.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_12856.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 261)).stringValue () ;
      result << " inAttributeValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_string inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, true, inCompiler COMMA_THERE) ;\n"
        "  cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    p->mProperty_" ;
      result << enumerator_12856.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 269)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_12856_IDX.increment () ;
      enumerator_12856.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::readWriteAccessForWithInstruction (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * inCompiler,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = (cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForReadWriteAttribute (inKey, false, inCompiler COMMA_THERE) ;\n"
    "  macroNullOrValidSharedObject (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return result ;\n"
    "}\n"
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
    "                       " ;
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
    "  const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mProperty_lkey" ;
  GALGAS_uint index_15342_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15342 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15342.hasCurrentObject ()) {
      result << ", p->mProperty_" ;
      result << enumerator_15342.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 301)).stringValue () ;
      index_15342_.increment () ;
      enumerator_15342.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mProperty_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_15867_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15867 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15867.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_15867.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_15867.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 316)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mProperty_" ;
      result << enumerator_15867.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 319)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_15867_IDX.increment () ;
      enumerator_15867.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_16752_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16752 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16752.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_16752.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue () ;
      result << " & outArgument" ;
      result << index_16752_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 326)).stringValue () ;
      index_16752_IDX.increment () ;
      enumerator_16752.gotoNextObject () ;
    }
  }
  result << ") const {\n"
    "  const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) searchForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "inKey) ;\n"
    "  const bool result = NULL != p ;\n"
    "  if (result) {\n"
    "    macroValidSharedObject (p, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_17200_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17200 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17200.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_17200_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_17200.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 334)).stringValue () ;
      result << " ;\n" ;
      index_17200_IDX.increment () ;
      enumerator_17200.gotoNextObject () ;
    }
  }
  result << "  }else{\n" ;
  GALGAS_uint index_17409_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17409 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17409.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_17409_IDX.getter_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 338)).stringValue () ;
      result << ".drop () ;\n" ;
      index_17409_IDX.increment () ;
      enumerator_17409.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" dict"), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Attributes\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedDict ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public: virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "//--- isValid\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedDict != NULL ; }\n"
    "\n"
    "//--- drop\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Implementation of reader 'description'\n"
    "  public: VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Insulate\n"
    "  private: void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- Object compare\n"
    "  public: VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const ;\n"
    "\n"
    "//--- Enumeration\n"
    "  public: void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate dictTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                         const GALGAS_string & in_KEY_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element {\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mInfPtr ;\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSupPtr ;\n"
    "  public: int32_t mBalance ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & in_key" ;
  GALGAS_uint index_502_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_502 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_502.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_502.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      result << " & inProperty_" ;
      result << enumerator_502.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 10)).stringValue () ;
      index_502_.increment () ;
      enumerator_502.gotoNextObject () ;
    }
  }
  result << ") :\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (in_key" ;
  GALGAS_uint index_778_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_778 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_778.hasCurrentObject ()) {
      result << ", inProperty_" ;
      result << enumerator_778.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 15)).stringValue () ;
      index_778_.increment () ;
      enumerator_778.gotoNextObject () ;
    }
  }
  result << "),\n"
    "  mInfPtr (NULL),\n"
    "  mSupPtr (NULL),\n"
    "  mBalance (0) {\n"
    "  }\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode) ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) = delete ;\n"
    "\n"
    "  public: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "& operator = (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) = delete ;\n"
    "\n"
    "  public: virtual ~ cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "    macroMyDelete (mInfPtr) ;\n"
    "    macroMyDelete (mSupPtr) ;\n"
    "  }\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "//--------------------------------- Attributes\n"
    "  private: cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mRoot ;\n"
    "  private: uint32_t mCount ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  protected: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (LOCATION_ARGS) :\n"
    "  C_SharedObject (THERE),\n"
    "  mRoot (NULL),\n"
    "  mCount (0) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  protected: virtual ~ cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "    macroMyDelete (mRoot) ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- No copy\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--------------------------------- Copy a map\n"
    "  protected: VIRTUAL_IN_DEBUG void copyFrom (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSource) ;\n"
    "\n"
    "//--------------------------------- Insert\n"
    "  protected: VIRTUAL_IN_DEBUG void performInsert (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inNewNode,\n"
    "                                                  const bool inEntryOverrideAllowed) {\n"
    "    macroUniqueSharedObject (this) ;\n"
    "    bool extension = false ;\n"
    "    bool entryAlreadyInDict = false ;\n"
    "    recursiveAddEntry (mRoot, inNewNode, entryAlreadyInDict, extension, inEntryOverrideAllowed) ;\n"
    "    if (!entryAlreadyInDict) {\n"
    "      mCount ++ ;\n"
    "    }\n"
    "    #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "      checkDict (HERE) ;\n"
    "    #endif\n"
    "  }\n"
    "\n"
    "  protected: static void rotateLeft (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr) {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = ioRootPtr->mSupPtr ;\n"
    "    ioRootPtr->mSupPtr = ptr->mInfPtr ;\n"
    "    ptr->mInfPtr = ioRootPtr;\n"
    "\n"
    "    if (ptr->mBalance >= 0) {\n"
    "      ioRootPtr->mBalance ++ ;\n"
    "    }else{\n"
    "      ioRootPtr->mBalance += 1 - ptr->mBalance ;\n"
    "    }\n"
    "\n"
    "    if (ioRootPtr->mBalance > 0) {\n"
    "      ptr->mBalance += ioRootPtr->mBalance + 1 ;\n"
    "    }else{\n"
    "      ptr->mBalance ++ ;\n"
    "    }\n"
    "    ioRootPtr = ptr ;\n"
    "  }\n"
    "\n"
    "  protected: static void rotateRight (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr) {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr = ioRootPtr->mInfPtr ;\n"
    "    ioRootPtr->mInfPtr = ptr->mSupPtr ;\n"
    "    ptr->mSupPtr = ioRootPtr ;\n"
    "   \n"
    "    if (ptr->mBalance > 0) {\n"
    "      ioRootPtr->mBalance += -ptr->mBalance - 1 ;\n"
    "    }else{\n"
    "      ioRootPtr->mBalance -- ;\n"
    "    }\n"
    "    if (ioRootPtr->mBalance >= 0) {\n"
    "      ptr->mBalance -- ;\n"
    "    }else{\n"
    "      ptr->mBalance += ioRootPtr->mBalance - 1 ;\n"
    "    }\n"
    "    ioRootPtr = ptr ;\n"
    "  }\n"
    "\n"
    "  protected: static void recursiveAddEntry (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRootPtr,\n"
    "                                            const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inNewNode,\n"
    "                                            bool & outEntryAlreadyPresent,\n"
    "                                            bool & ioExtension,\n"
    "                                            const bool inEntryOverrideAllowed) {\n"
    "    if (ioRootPtr == NULL) {\n"
    "      macroMyNew (ioRootPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNewNode.mProperty_key" ;
  GALGAS_uint index_4458_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4458 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4458.hasCurrentObject ()) {
      result << ", inNewNode.mProperty_" ;
      result << enumerator_4458.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 121)).stringValue () ;
      index_4458_.increment () ;
      enumerator_4458.gotoNextObject () ;
    }
  }
  result << ")) ;\n"
    "      ioExtension = true ;\n"
    "      outEntryAlreadyPresent = false ;\n"
    "    }else{\n"
    "      macroValidPointer (ioRootPtr) ;\n"
    "      const typeComparisonResult comparaison = ioRootPtr->mProperty_key.objectCompare (inNewNode.mProperty_key) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        recursiveAddEntry (ioRootPtr->mInfPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n"
    "        if (ioExtension) {\n"
    "          ioRootPtr->mBalance++;\n"
    "          if (ioRootPtr->mBalance == 0) {\n"
    "            ioExtension = false;\n"
    "          }else if (ioRootPtr->mBalance == 2) {\n"
    "            if (ioRootPtr->mInfPtr->mBalance == -1) {\n"
    "              rotateLeft (ioRootPtr->mInfPtr) ;\n"
    "            }\n"
    "            rotateRight (ioRootPtr) ;\n"
    "            ioExtension = false;\n"
    "          }\n"
    "        }\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        recursiveAddEntry (ioRootPtr->mSupPtr, inNewNode, outEntryAlreadyPresent, ioExtension, inEntryOverrideAllowed) ;\n"
    "        if (ioExtension) {\n"
    "          ioRootPtr->mBalance-- ;\n"
    "          if (ioRootPtr->mBalance == 0) {\n"
    "            ioExtension = false ;\n"
    "          }else if (ioRootPtr->mBalance == -2) {\n"
    "            if (ioRootPtr->mSupPtr->mBalance == 1) {\n"
    "              rotateRight (ioRootPtr->mSupPtr) ;\n"
    "            }\n"
    "            rotateLeft (ioRootPtr) ;\n"
    "            ioExtension = false;\n"
    "          }\n"
    "        }\n"
    "      }else{  // Found\n"
    "        ioExtension = false ;\n"
    "        outEntryAlreadyPresent = true ;\n"
    "        if (inEntryOverrideAllowed) {\n" ;
  GALGAS_uint index_6145_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6145 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6145.hasCurrentObject ()) {
      result << "          ioRootPtr->mProperty_" ;
      result << enumerator_6145.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue () ;
      result << " = inNewNode.mProperty_" ;
      result << enumerator_6145.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 163)).stringValue () ;
      result << " ;\n" ;
      index_6145_.increment () ;
      enumerator_6145.gotoNextObject () ;
    }
  }
  result << "        }\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "//--------------------------------- Search\n"
    "  private: VIRTUAL_IN_DEBUG cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * findEntryInDict (const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey) const {\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * result = NULL ;\n"
    "    cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * currentNode = mRoot ;\n"
    "    while ((currentNode != NULL) && (NULL == result)) {\n"
    "      macroValidPointer (currentNode) ;\n"
    "      const typeComparisonResult comparaison = currentNode->mProperty_key.objectCompare (inKey) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        currentNode = currentNode->mInfPtr ;\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        currentNode = currentNode->mSupPtr ;\n"
    "      }else{ // Found\n"
    "        result = currentNode ;\n"
    "      }\n"
    "    }\n"
    "    return result ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Remove\n"
    "  protected: VIRTUAL_IN_DEBUG void performRemove (const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & outRemovedNodePtr) {\n"
    "    bool branchHasBeenRemoved = false ; // Unused here\n"
    "    internalRemoveRecursively (mRoot, inKey, outRemovedNodePtr, branchHasBeenRemoved) ;\n"
    "    if (NULL != outRemovedNodePtr) {\n"
    "      mCount -- ;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void supBranchDecreased (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                              bool & ioBranchHasBeenRemoved) {\n"
    "    ioRoot->mBalance ++ ;\n"
    "    switch (ioRoot->mBalance) {\n"
    "    case 0:\n"
    "      break;\n"
    "    case 1:\n"
    "      ioBranchHasBeenRemoved = false;\n"
    "      break;\n"
    "    case 2:\n"
    "      switch (ioRoot->mInfPtr->mBalance) {\n"
    "      case -1:\n"
    "        rotateLeft (ioRoot->mInfPtr) ;\n"
    "        rotateRight (ioRoot) ;\n"
    "        break;\n"
    "      case 0:\n"
    "        rotateRight (ioRoot) ;\n"
    "        ioBranchHasBeenRemoved = false;\n"
    "        break;\n"
    "      case 1:\n"
    "        rotateRight (ioRoot) ;\n"
    "        break;\n"
    "      }\n"
    "      break;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void infBranchDecreased (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                              bool & ioBranchHasBeenRemoved) {\n"
    "    ioRoot->mBalance -- ;\n"
    "    switch (ioRoot->mBalance) {\n"
    "    case 0:\n"
    "      break;\n"
    "    case -1:\n"
    "      ioBranchHasBeenRemoved = false;\n"
    "      break;\n"
    "    case -2:\n"
    "      switch (ioRoot->mSupPtr->mBalance) {\n"
    "      case 1:\n"
    "        rotateRight (ioRoot->mSupPtr) ;\n"
    "        rotateLeft (ioRoot) ;\n"
    "        break;\n"
    "      case 0:\n"
    "        rotateLeft (ioRoot) ;\n"
    "        ioBranchHasBeenRemoved = false;\n"
    "        break;\n"
    "      case -1:\n"
    "        rotateLeft (ioRoot) ;\n"
    "        break;\n"
    "      }\n"
    "      break;\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void  getPreviousElement (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                               cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioElement,\n"
    "                                               bool & ioBranchHasBeenRemoved) {\n"
    "    if (ioRoot->mSupPtr == NULL) {\n"
    "      ioElement = ioRoot ;\n"
    "      ioRoot = ioRoot->mInfPtr ;\n"
    "      ioBranchHasBeenRemoved = true ;\n"
    "    }else{\n"
    "      getPreviousElement (ioRoot->mSupPtr, ioElement, ioBranchHasBeenRemoved) ;\n"
    "      if (ioBranchHasBeenRemoved) {\n"
    "        supBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "  protected: static void internalRemoveRecursively (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & ioRoot,\n"
    "                                                     const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKeyToRemove,\n"
    "                                                     cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * & outRemovedNode,\n"
    "                                                     bool & ioBranchHasBeenRemoved) {\n"
    "    if (ioRoot != NULL) {\n"
    "      const typeComparisonResult comparaison = ioRoot->mProperty_key.objectCompare (inKeyToRemove) ;\n"
    "      if (comparaison == kFirstOperandGreaterThanSecond) {\n"
    "        internalRemoveRecursively (ioRoot->mInfPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n"
    "        if (ioBranchHasBeenRemoved) {\n"
    "          infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "        }\n"
    "      }else if (comparaison == kFirstOperandLowerThanSecond) {\n"
    "        internalRemoveRecursively (ioRoot->mSupPtr, inKeyToRemove, outRemovedNode, ioBranchHasBeenRemoved);\n"
    "        if (ioBranchHasBeenRemoved) {\n"
    "          supBranchDecreased (ioRoot, ioBranchHasBeenRemoved);\n"
    "        }\n"
    "      }else{\n"
    "        cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = ioRoot ;\n"
    "        if (p->mInfPtr == NULL) {\n"
    "          ioRoot = p->mSupPtr;\n"
    "          p->mSupPtr = NULL;\n"
    "          ioBranchHasBeenRemoved = true;\n"
    "        }else if (p->mSupPtr == NULL) {\n"
    "          ioRoot = p->mInfPtr;\n"
    "          p->mInfPtr = NULL;\n"
    "          ioBranchHasBeenRemoved = true;\n"
    "        }else{\n"
    "          getPreviousElement (p->mInfPtr, ioRoot, ioBranchHasBeenRemoved) ;\n"
    "          ioRoot->mSupPtr = p->mSupPtr;\n"
    "          p->mSupPtr = NULL;\n"
    "          ioRoot->mInfPtr = p->mInfPtr;\n"
    "          p->mInfPtr = NULL;\n"
    "          ioRoot->mBalance = p->mBalance;\n"
    "          p->mBalance = 0;\n"
    "          if (ioBranchHasBeenRemoved) {\n"
    "            infBranchDecreased (ioRoot, ioBranchHasBeenRemoved) ;\n"
    "          }\n"
    "        }\n"
    "        outRemovedNode = p ;\n"
    "      }\n"
    "    }\n"
    "  }\n"
    "\n"
    "//--------------------------------- Internal method for enumeration\n"
    "  protected: VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const ;\n"
    "\n"
    "//--------------------------------- Check Dictionary\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "      private: VIRTUAL_IN_DEBUG void checkDict (LOCATION_ARGS) const {\n"
    "      uint32_t n = 0 ;\n"
    "      checkNode (mRoot, n) ;\n"
    "      MF_AssertThere (n == mCount, \"n (%lld) != mCount (%lld)\", n, mCount) ;\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    private: static void checkNode (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                     uint32_t & ioCount) {\n"
    "      if (NULL != inNode) {\n"
    "        checkNode (inNode->mInfPtr, ioCount) ;\n"
    "        ioCount ++ ;\n"
    "        checkNode (inNode->mSupPtr, ioCount) ;\n"
    "      }\n"
    "    }\n"
    "  #endif\n"
    "\n"
    "//--------------------------------- Compare Dictionaries\n"
    "  public: typeComparisonResult compare (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "    typeComparisonResult result = kOperandEqual ;\n"
    "    if (mCount < inOperand->mCount) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mCount > inOperand->mCount) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      capCollectionElementArray enumerationArray ;\n"
    "      populateEnumerationArray (enumerationArray) ;\n"
    "      capCollectionElementArray operandEnumerationArray ;\n"
    "      inOperand->populateEnumerationArray (operandEnumerationArray) ;\n"
    "      result = enumerationArray.compareCollectionElementArray (operandEnumerationArray) ;\n"
    "    }\n"
    "    return result ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Friend\n"
    "  friend class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "} ;\n"
    "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedDict (NULL) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedDict (NULL) {\n"
    "  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  macroAssignSharedObject (mSharedDict, inSource.mSharedDict) ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedDict) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_emptyDict (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  macroMyNew (result.mSharedDict, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (THERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Description\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                 C_String & ioString,\n"
    "                                 const int32_t inIndentation) {\n"
    "  if (NULL != inNode) {\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr, ioString, inIndentation) ;\n"
    "    ioString << \"\\n\" ;\n"
    "    inNode->description (ioString, inIndentation) ;\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr, ioString, inIndentation) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString,\n"
    "                                             const int32_t inIndentation) const {\n"
    "  ioString << \"<dict @\" << staticTypeDescriptor ()->mGalgasTypeName << \":\" ;\n"
    "  if (isValid ()) {\n"
    "    internalDescription_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedDict->mRoot, ioString, inIndentation) ;\n"
    "  }else{\n"
    "    ioString << \" not built\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Insulate\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode) :\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (inNode->mProperty_key" ;
  GALGAS_uint index_16483_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16483 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16483.hasCurrentObject ()) {
      result << ", inNode->mProperty_" ;
      result << enumerator_16483.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 440)).stringValue () ;
      index_16483_.increment () ;
      enumerator_16483.gotoNextObject () ;
    }
  }
  result << "),\n"
    "mInfPtr (NULL),\n"
    "mSupPtr (NULL),\n"
    "mBalance (inNode->mBalance) {\n"
    "  if (inNode->mInfPtr != NULL) {\n"
    "    macroMyNew (mInfPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr)) ;\n"
    "  }\n"
    "  if (inNode->mSupPtr != NULL) {\n"
    "    macroMyNew (mSupPtr, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr)) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copyFrom (const cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSource) {\n"
    "  macroUniqueSharedObject (this) ;\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    inSource->checkDict (HERE) ;\n"
    "  #endif\n"
    "  macroValidSharedObject (inSource, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  mCount = inSource->mCount ;\n"
    "  if (NULL != inSource->mRoot) {\n"
    "    macroMyNew (mRoot, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inSource->mRoot)) ;\n"
    "  }\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    checkDict (HERE) ;\n"
    "  #endif\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if ((NULL != mSharedDict) && !mSharedDict->isUniquelyReferenced ()) {\n"
    "    cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (THERE)) ;\n"
    "    p->copyFrom (mSharedDict) ;\n"
    "    macroAssignSharedObject (mSharedDict, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Insert\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey" ;
  GALGAS_uint index_18454_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18454 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18454.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_18454.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 493)).stringValue () ;
      result << " & inArgument" ;
      result << index_18454_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 493)).stringValue () ;
      index_18454_IDX.increment () ;
      enumerator_18454.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element newElement (inKey" ;
  GALGAS_uint index_18791_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18791 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18791.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_18791_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 499)).stringValue () ;
      index_18791_IDX.increment () ;
      enumerator_18791.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  if (isValid () && newElement.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroUniqueSharedObject (mSharedDict) ;\n"
    "    const bool entryOverrideAllowed = true ;\n"
    "    mSharedDict->performInsert (newElement, entryOverrideAllowed) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::getter_hasKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_bool result ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
    "    result = GALGAS_bool (p != NULL) ;\n"
    "   }\n"
    "   return result ;\n"
    " }\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inKey" ;
  GALGAS_uint index_19855_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19855 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19855.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_19855.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue () ;
      result << " & outArgument" ;
      result << index_19855_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 526)).stringValue () ;
      index_19855_IDX.increment () ;
      enumerator_19855.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    p = mSharedDict->findEntryInDict (inKey) ;\n"
    "    if (NULL == p) {\n"
    "    //--- Build error message\n"
    "      C_String message ;\n"
    "      message << \"cannot search in dict: the key does not exist\" ;\n"
    "    //--- Emit error message\n"
    "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_20523_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20523 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20523.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_20523_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 544)).stringValue () ;
      result << ".drop () ;\n" ;
      index_20523_IDX.increment () ;
      enumerator_20523.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_20746_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_20746 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_20746.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_20746_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 550)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_20746.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 550)).stringValue () ;
      result << " ;\n" ;
      index_20746_IDX.increment () ;
      enumerator_20746.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeKey (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inKey" ;
  GALGAS_uint index_21177_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21177 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21177.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_21177.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 558)).stringValue () ;
      result << " & outArgument" ;
      result << index_21177_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 558)).stringValue () ;
      index_21177_IDX.increment () ;
      enumerator_21177.gotoNextObject () ;
    }
  }
  result << ",\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if (isValid () && inKey.isValid ()) {\n"
    "    insulate (THERE) ;\n"
    "    macroUniqueSharedObject (mSharedDict) ;\n"
    "    mSharedDict->performRemove (inKey, p) ;\n"
    "    if (NULL == p) {\n"
    "    //--- Build error message\n"
    "      C_String message ;\n"
    "      message << \"cannot remove in dict: the key does not exist\" ;\n"
    "    //--- Emit error message\n"
    "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  if (NULL == p) {\n" ;
  GALGAS_uint index_21897_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21897 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21897.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_21897_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 578)).stringValue () ;
      result << ".drop () ;\n" ;
      index_21897_IDX.increment () ;
      enumerator_21897.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_22120_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22120 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22120.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_22120_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 584)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_22120.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 584)).stringValue () ;
      result << " ;\n" ;
      index_22120_IDX.increment () ;
      enumerator_22120.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_22322_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_22322 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_22322.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_22322.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 591)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_22322.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 591)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_" ;
      result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " & inKey,\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                               " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_22322.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 594)).stringValue () ;
      result << " result ;\n"
        "  if (isValid () && inKey.isValid ()) {\n"
        "  const cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
        "   if (NULL == p) {\n"
        "    //--- Build error message\n"
        "      C_String message ;\n"
        "      message << \"cannot get " ;
      result << enumerator_22322.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 600)).stringValue () ;
      result << " ForKey in dict: the key does not exist\" ;\n"
        "    //--- Emit error message\n"
        "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
        "    }else{\n"
        "      macroValidSharedObject (p, cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "      result = p->mProperty_" ;
      result << enumerator_22322.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 605)).stringValue () ;
      result << "  ;\n"
        "    }\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_22322_.increment () ;
      enumerator_22322.gotoNextObject () ;
    }
  }
  GALGAS_uint index_23654_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_23654 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_23654.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_23654.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 614)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 614)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_23654.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 614)).stringValue () ;
      result << " inPropertyValue,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " inKey,\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                           " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  if (isValid () && inKey.isValid ()) {\n"
        "    insulate (THERE) ;\n"
        "    macroUniqueSharedObject (mSharedDict) ;\n"
        "    cNode_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = mSharedDict->findEntryInDict (inKey) ;\n"
        "    if (NULL == p) {\n"
        "    //--- Build error message\n"
        "      C_String message ;\n"
        "      message << \"cannot set" ;
      result << enumerator_23654.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 625)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 625)).stringValue () ;
      result << "ForKey in dict: the key does not exist\" ;\n"
        "    //--- Emit error message\n"
        "      inCompiler->onTheFlySemanticError (message COMMA_THERE) ;\n"
        "    }else{\n"
        "      p->mProperty_" ;
      result << enumerator_23654.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 629)).stringValue () ;
      result << " = inPropertyValue ;\n"
        "    }\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_23654_.increment () ;
      enumerator_23654.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark Object compare\n"
    "#endif\n"
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
    "    result = mSharedDict->compare (inOperand.mSharedDict) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "#ifdef PRAGMA_MARK_ALLOWED\n"
    "  #pragma mark map Enumeration\n"
    "#endif\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mElement ;\n"
    "\n"
    "//--- Constructor\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element & inElement) :\n"
    "  cCollectionElement (HERE),\n"
    "  mElement (inElement) {\n"
    "  }\n"
    "\n"
    "//--- No copy\n"
    "  private: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const { return mElement.isValid () ; }\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const {\n"
    "    const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) inOperand ;\n"
    "    return mElement.objectCompare (p->mElement) ;\n"
    "  }\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mElement)) ;\n"
    "    return p ;\n"
    "  }\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const {\n"
    "    mElement.description (ioString, inIndentation) ;\n"
    "  }\n"
    "} ;\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static void enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inNode,\n"
    "                                                       capCollectionElementArray & ioEnumerationArray) {\n"
    "  if (inNode != NULL) {\n"
    "    enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mInfPtr, ioEnumerationArray) ;\n"
    "    cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (*inNode)) ;\n"
    "    capCollectionElement element ;\n"
    "    element.setPointer (p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    ioEnumerationArray.appendObject (element) ;\n"
    "    enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inNode->mSupPtr, ioEnumerationArray) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void cSharedDictRoot_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    checkDict (HERE) ;\n"
    "  #endif\n"
    "  ioEnumerationArray.setCapacity (mCount) ;\n"
    "  enterAscendingEnumeration_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mRoot, ioEnumerationArray) ;\n"
    "  MF_Assert (mCount == ioEnumerationArray.count (), \"mCount (%lld) != ioEnumerationArray.count () (%lld)\", mCount, ioEnumerationArray.count ()) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::populateEnumerationArray (capCollectionElementArray & ioEnumerationArray) const {\n"
    "  if (NULL != mSharedDict) {\n"
    "    mSharedDict->populateEnumerationArray (ioEnumerationArray) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inEnumeratedObject,\n"
    "                                                        const typeEnumerationOrder inOrder) :\n"
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
  result << "* p = dynamic_cast  <const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "*> (currentObjectPtr (THERE)) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element (p->mElement) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "* p = dynamic_cast  <const cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "*> (currentObjectPtr (THERE)) ;\n"
    "  macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return p->mElement.mProperty_key ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_30453_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_30453 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_30453.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_30453.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 755)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_30453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 755)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "* p = dynamic_cast  <const cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "*> (currentObjectPtr (THERE)) ;\n"
        "  macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mElement.mProperty_" ;
      result << enumerator_30453.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 758)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_30453_IDX.increment () ;
      enumerator_30453.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::optional_searchKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_" ;
  result << in_KEY_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inKey" ;
  GALGAS_uint index_31405_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31405 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31405.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_31405.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 764)).stringValue () ;
      result << " & outArgument" ;
      result << index_31405_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 764)).stringValue () ;
      index_31405_IDX.increment () ;
      enumerator_31405.gotoNextObject () ;
    }
  }
  result << ") const {\n"
    "  const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "  if ((mSharedDict != NULL) && inKey.isValid ()) {\n"
    "    p = (const cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mSharedDict->findEntryInDict (inKey) ;\n"
    "  }\n"
    "  const bool result = NULL != p ;\n"
    "  if (result) {\n"
    "    macroValidSharedObject (p, cNode_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_31936_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_31936 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_31936.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_31936_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 775)).stringValue () ;
      result << " = p->mProperty_" ;
      result << enumerator_31936.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 775)).stringValue () ;
      result << " ;\n" ;
      index_31936_IDX.increment () ;
      enumerator_31936.gotoNextObject () ;
    }
  }
  result << "  }else{\n" ;
  GALGAS_uint index_32152_IDX (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_32152 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_32152.hasCurrentObject ()) {
      result << "    outArgument" ;
      result << index_32152_IDX.getter_string (SOURCE_FILE ("GALGAS_dict.cpp.galgasTemplate", 779)).stringValue () ;
      result << ".drop () ;\n" ;
      index_32152_IDX.increment () ;
      enumerator_32152.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                   const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                   const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                   const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR,
                                                                                   const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "  value class\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 15)) COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 15)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--------------------------------- Embedded object pointer\n"
    "  public: inline const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr (void) const {\n"
    "    return (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mObjectPtr ;\n"
    "  }\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n"
    "//--------------------------------- Property read access\n" ;
  GALGAS_uint index_1251_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1251 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1251.hasCurrentObject ()) {
      result << "  public: class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1251.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 32)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_1251.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h1.galgasTemplate", 32)).stringValue () ;
      result << " (void) const ;\n"
        "\n" ;
      index_1251_.increment () ;
      enumerator_1251.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_TYPE_5F_NAME,
                                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                           const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                           const GALGAS_bool & /* in_IS_5F_ABSTRACT */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeHeader2part2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                           const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                           const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                           const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                           const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//--- Properties\n" ;
  GALGAS_uint index_110_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_110 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_110.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_110.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_110.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_110_.increment () ;
      enumerator_110.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_398_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_398 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_398.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_398.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_398.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_398.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_398_.increment () ;
      enumerator_398.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 13)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result << "LOCATION_ARGS" ;
  }
  result << ") ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--- Duplication\n"
      "  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  GALGAS_uint index_894_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_894 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_894.hasCurrentObject ()) {
      result << "  public: VIRTUAL_IN_DEBUG GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_894.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue () ;
      result << " getter_" ;
      result << enumerator_894.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 28)).stringValue () ;
      result << " (LOCATION_ARGS) const ;\n" ;
      const enumGalgasBool test_2 = enumerator_894.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "  public: VIRTUAL_IN_DEBUG void setter_set" ;
        result << enumerator_894.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue () ;
        result << " (GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_894.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.h2-part2.galgasTemplate", 30)).stringValue () ;
        result << " inValue COMMA_LOCATION_ARGS) ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      index_894_.increment () ;
      enumerator_894.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_3 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const override = 0 ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n" ;
  }else if (kBoolFalse == test_3) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const override ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate valueClassTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                               const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                               const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//   Object comparison                                                                           \n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n"
      "  typeComparisonResult result = kOperandEqual ;\n"
      "  const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = (const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " *) inOperandPtr ;\n"
      "  macroValidSharedObject (p, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ") ;\n" ;
    GALGAS_uint index_1127_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1127 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1127.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mProperty_" ;
        result << enumerator_1127.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mProperty_" ;
        result << enumerator_1127.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1127_.increment () ;
        enumerator_1127.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    const int32_t mySlot = mObjectPtr->classDescriptor ()->mSlotID ;\n"
    "    const int32_t operandSlot = inOperand.mObjectPtr->classDescriptor ()->mSlotID ;\n"
    "    if (mySlot < operandSlot) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (mySlot > operandSlot) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 55)) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 55)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 60)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 60)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 60)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint index_2880_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2880 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_2880.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_2880.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << "::constructor_" ;
          result << extensionGetter_definition (enumerator_2880.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 62)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2880.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2880_.increment () ;
          enumerator_2880.gotoNextObject () ;
        }
      }
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE" ;
    }else if (kBoolFalse == test_4) {
      result << "THERE" ;
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) :\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "AC_GALGAS_value_class" ;
  }else if (kBoolFalse == test_5) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n" ;
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 82)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (LOCATION_ARGS) {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (THERE)) ;\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)))) COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 91)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4346_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4346 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4346.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_4346.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 95)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4346.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 95)).stringValue () ;
        if (enumerator_4346.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4346_.increment () ;
        enumerator_4346.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 98)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 98)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 98)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_8) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS" ;
    }
    result << ") {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  if (" ;
    GALGAS_uint index_4750_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4750 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4750.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4750.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 107)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4750.hasNextObject ()) {
          result << " && " ;
        }
        index_4750_.increment () ;
        enumerator_4750.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_5014_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_5014 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_5014.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_5014.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 113)).stringValue () ;
        if (enumerator_5014.hasNextObject ()) {
          result << ", " ;
        }
        index_5014_.increment () ;
        enumerator_5014.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  GALGAS_uint index_5262_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5262 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5262.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5262.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 124)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::readProperty_" ;
      result << enumerator_5262.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 124)).stringValue () ;
      result << " (void) const {\n"
        "  if (NULL == mObjectPtr) {\n"
        "    return GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5262.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 126)).stringValue () ;
      result << " () ;\n"
        "  }else{\n"
        "    const cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) mObjectPtr ;\n"
        "    macroValidSharedObject (p, cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    return p->mProperty_" ;
      result << enumerator_5262.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 130)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5262.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 134)).stringValue () ;
      result << " cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_5262.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 134)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return mProperty_" ;
      result << enumerator_5262.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 135)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_5262_.increment () ;
      enumerator_5262.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6407_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6407 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6407.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_6407.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6407.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 142)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 142)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_6407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 142)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) {\n"
          "  if (NULL != mObjectPtr) {\n"
          "    insulate (THERE) ;\n"
          "    cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    p->mProperty_" ;
        result << enumerator_6407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 148)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n"
          "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_6407.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 152)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 152)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_6407.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 152)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  mProperty_" ;
        result << enumerator_6407.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 154)).stringValue () ;
        result << " = inValue ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_6407_.increment () ;
      enumerator_6407.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 160)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 160)).stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8058_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8058 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8058.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_8058.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 165)).stringValue () ;
      result << " & in_" ;
      result << enumerator_8058.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 165)).stringValue () ;
      if (enumerator_8058.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_8058_.increment () ;
      enumerator_8058.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 168)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 168)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 168)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_10) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_11) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_8500_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8500 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8500.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_8500.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 176)).stringValue () ;
      if (enumerator_8500.hasNextObject ()) {
        result << ", " ;
      }
      index_8500_.increment () ;
      enumerator_8500.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 179)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 179)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 179)))).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_12) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_8763_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8763 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8763.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_8763.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 186)).stringValue () ;
      result << " (in_" ;
      result << enumerator_8763.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 186)).stringValue () ;
      result << ")" ;
      index_8763_.increment () ;
      enumerator_8763.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 192)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 197)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 197)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 197)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t /* inIndentation */) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << "]\" ;\n"
        "}\n"
        "\n" ;
    }else if (kBoolFalse == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t inIndentation) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << ":\" ;\n" ;
      GALGAS_uint index_9756_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9756 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_9756.hasCurrentObject ()) {
          result << "  mProperty_" ;
          result << enumerator_9756.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 207)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_9756.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_9756_.increment () ;
          enumerator_9756.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_15 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 215)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_10342_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_10342 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_10342 = enumerator_10342.hasCurrentObject () ;
      while (enumerator_10342.hasCurrentObject ()) {
        result << "mProperty_" ;
        result << enumerator_10342.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_value_class.cpp.galgasTemplate", 222)).stringValue () ;
        if (enumerator_10342.hasNextObject ()) {
          result << ", " ;
        }
        index_10342_.increment () ;
        enumerator_10342.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_10342) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                       const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR,
                                                                                       const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 3)).stringValue () ;
  result << " reference class\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 15)) COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 15)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--------------------------------- Constructor from pointer\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n"
    "//--------------------------------- Property read access\n" ;
  GALGAS_uint index_1067_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1067 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1067.hasCurrentObject ()) {
      result << "  public: class GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_1067.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 27)).stringValue () ;
      result << " readProperty_" ;
      result << enumerator_1067.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h1.galgasTemplate", 27)).stringValue () ;
      result << " (void) const ;\n"
        "\n" ;
      index_1067_.increment () ;
      enumerator_1067.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                               const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                               const GALGAS_bool & /* in_IS_5F_ABSTRACT */,
                                                                                               const GALGAS_getterMap & in_GETTER_5F_MAP,
                                                                                               const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 2: pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "acStrongPtr_class" ;
  }else if (kBoolFalse == test_0) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "\n" ;
  GALGAS_uint index_542_ (0) ;
  if (in_GETTER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_542 (in_GETTER_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_542.hasCurrentObject ()) {
      result << function_generateClassGetterDeclaration (enumerator_542.current_lkey (HERE), enumerator_542.current_mArgumentTypeList (HERE), enumerator_542.current_mHasCompilerArgument (HERE), enumerator_542.current_mReturnedType (HERE), enumerator_542.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 11)).stringValue () ;
      index_542_.increment () ;
      enumerator_542.gotoNextObject () ;
    }
  }
  GALGAS_uint index_753_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_753 (in_INSTANCE_5F_METHOD_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_753.hasCurrentObject ()) {
      result << function_generateClassInstanceMethodDeclaration (enumerator_753.current_lkey (HERE), enumerator_753.current_mParameterList (HERE), enumerator_753.current_mMutability (HERE), enumerator_753.current_mHasCompilerArgument (HERE), enumerator_753.current_mQualifier (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part1.galgasTemplate", 14)).stringValue () ;
      index_753_.increment () ;
      enumerator_753.gotoNextObject () ;
    }
  }
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeHeader2part2'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (C_Compiler * inCompiler,
                                                                                               const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                               const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                               const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                               const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//--- Properties\n" ;
  GALGAS_uint index_110_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_110 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_110.hasCurrentObject ()) {
      result << "  public: GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_110.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_110.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_110_.increment () ;
      enumerator_110.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public: cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_398_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_398 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_398.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_398.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_398.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_398.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_398_.increment () ;
      enumerator_398.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 13)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result << "LOCATION_ARGS" ;
  }
  result << ") ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--- Duplication\n"
      "  public: virtual acPtr_class * duplicate (LOCATION_ARGS) const override ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  const enumGalgasBool test_2 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const override = 0 ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override = 0 ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
    result << "//--- Description\n"
      "  public: virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const override ;\n"
      "\n"
      "  public: virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const override ;\n"
      "\n"
      "  public: virtual const C_galgas_type_descriptor * classDescriptor (void) const override ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate referenceClassTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                                   const GALGAS_typedPropertyList & in_CURRENT_5F_PROPERTY_5F_LIST,
                                                                                                   const GALGAS_typedPropertyList & in_ALL_5F_PROPERTY_5F_LIST,
                                                                                                   const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                                   const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                                   const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string (" @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 2)).stringValue () ;
  result << " reference class\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 14)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * inOperandPtr) const {\n"
      "  typeComparisonResult result = kOperandEqual ;\n"
      "  const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * p = (const cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " *) inOperandPtr ;\n"
      "  macroValidSharedObject (p, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ") ;\n" ;
    GALGAS_uint index_1073_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1073 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1073.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mProperty_" ;
        result << enumerator_1073.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mProperty_" ;
        result << enumerator_1073.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1073_.increment () ;
        enumerator_1073.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//----------------------------------------------------------------------------------------------------------------------\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    const size_t myObjectPtr = size_t (mObjectPtr) ;\n"
    "    const size_t operandObjectPtr = size_t (inOperand.mObjectPtr) ;\n"
    "    if (myObjectPtr < operandObjectPtr) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (myObjectPtr > operandObjectPtr) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = mObjectPtr->dynamicObjectCompare (inOperand.mObjectPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_default (LOCATION_ARGS) {\n"
      "  return GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 60)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 60)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 60)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint index_2800_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2800 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_2800.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << extensionGetter_identifierRepresentation (enumerator_2800.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << "::constructor_" ;
          result << extensionGetter_definition (enumerator_2800.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 62)).readProperty_mDefaultConstructorName ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 62)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2800.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2800_.increment () ;
          enumerator_2800.gotoNextObject () ;
        }
      }
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE" ;
    }else if (kBoolFalse == test_4) {
      result << "THERE" ;
    }
    result << ") ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_3) {
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) :\n" ;
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "AC_GALGAS_reference_class" ;
  }else if (kBoolFalse == test_5) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n" ;
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 82)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (LOCATION_ARGS) {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (THERE)) ;\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)))) COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 91)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4270_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4270 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4270.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_4270.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4270.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 95)).stringValue () ;
        if (enumerator_4270.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4270_.increment () ;
        enumerator_4270.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 98)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << "LOCATION_ARGS" ;
    }else if (kBoolFalse == test_8) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS" ;
    }
    result << ") {\n"
      "  GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " result ;\n"
      "  if (" ;
    GALGAS_uint index_4674_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4674 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4674.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4674.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 107)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4674.hasNextObject ()) {
          result << " && " ;
        }
        index_4674_.increment () ;
        enumerator_4674.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_4938_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4938 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_4938.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4938.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 113)).stringValue () ;
        if (enumerator_4938.hasNextObject ()) {
          result << ", " ;
        }
        index_4938_.increment () ;
        enumerator_4938.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  GALGAS_uint index_5186_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5186 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5186.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_5186.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_5186.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << extensionGetter_identifierRepresentation (enumerator_5186.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 125)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  if (NULL != mObjectPtr) {\n"
          "    cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    p->mProperty_" ;
        result << enumerator_5186.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 130)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_5186_.increment () ;
      enumerator_5186.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5985_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5985 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5985.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5985.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 139)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::readProperty_" ;
      result << enumerator_5985.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 139)).stringValue () ;
      result << " (void) const {\n"
        "  if (NULL == mObjectPtr) {\n"
        "    return GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_5985.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 141)).stringValue () ;
      result << " () ;\n"
        "  }else{\n"
        "    cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) mObjectPtr ;\n"
        "    macroValidSharedObject (p, cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    return p->mProperty_" ;
      result << enumerator_5985.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 145)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_5985_.increment () ;
      enumerator_5985.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 151)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 151)).stringValue () ;
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7101_ (0) ;
  if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7101 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7101.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << extensionGetter_identifierRepresentation (enumerator_7101.current_mPropertyTypeEntry (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).stringValue () ;
      result << " & in_" ;
      result << enumerator_7101.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 156)).stringValue () ;
      if (enumerator_7101.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7101_.increment () ;
      enumerator_7101.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsStrictSup, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 159)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 159)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 159)))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_10) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "acStrongPtr_class" ;
  }else if (kBoolFalse == test_11) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_7549_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7549 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7549.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_7549.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 167)).stringValue () ;
      if (enumerator_7549.hasNextObject ()) {
        result << ", " ;
      }
      index_7549_.increment () ;
      enumerator_7549.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 170)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 170)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 170)))).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_12) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_7812_ (0) ;
  if (in_CURRENT_5F_PROPERTY_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7812 (in_CURRENT_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7812.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_7812.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 177)).stringValue () ;
      result << " (in_" ;
      result << enumerator_7812.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 177)).stringValue () ;
      result << ")" ;
      index_7812_.increment () ;
      enumerator_7812.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_13 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 183)).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, in_ALL_5F_PROPERTY_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 188)).objectCompare (GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 188)).getter_uint (inCompiler COMMA_SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 188)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t /* inIndentation */) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << "]\" ;\n"
        "}\n"
        "\n" ;
    }else if (kBoolFalse == test_14) {
      result << "void cPtr_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::description (" ;
      columnMarker = result.currentColumn () ;
      result << "C_String & ioString,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const int32_t inIndentation) const {\n"
        "  ioString << \"[@" ;
      result << in_TYPE_5F_NAME.stringValue () ;
      result << ":\" ;\n" ;
      GALGAS_uint index_8805_ (0) ;
      if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8805 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_8805.hasCurrentObject ()) {
          result << "  mProperty_" ;
          result << enumerator_8805.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 198)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_8805.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_8805_.increment () ;
          enumerator_8805.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_15 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 206)).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//----------------------------------------------------------------------------------------------------------------------\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_9391_ (0) ;
    if (in_ALL_5F_PROPERTY_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9391 (in_ALL_5F_PROPERTY_5F_LIST, kENUMERATION_UP) ;
      const bool nonEmpty_enumerator_9391 = enumerator_9391.hasCurrentObject () ;
      while (enumerator_9391.hasCurrentObject ()) {
        result << "mProperty_" ;
        result << enumerator_9391.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_reference_class.cpp.galgasTemplate", 213)).stringValue () ;
        if (enumerator_9391.hasNextObject ()) {
          result << ", " ;
        }
        index_9391_.increment () ;
        enumerator_9391.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9391) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_15) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                           const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" weak reference class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_weak_reference_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public: static GALGAS_" ;
    result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--------------------------------- Constructor and assignment from strong reference\n"
    "  public: GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const class GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "  public: GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const class GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n"
    "//--------------------------------- Bang operator\n"
    "  public: GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " bang_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'typeGenerationTemplate weakReferenceClassTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                                       const GALGAS_string & in_CLASS_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_string & in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_string & in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER,
                                                                                                       const GALGAS_typedPropertyList & /* in_CURRENT_5F_PROPERTY_5F_LIST */,
                                                                                                       const GALGAS_typedPropertyList & /* in_ALL_5F_PROPERTY_5F_LIST */,
                                                                                                       const GALGAS_typedPropertyList & /* in_INHERITED_5F_ATTRIBUTE_5F_LIST */,
                                                                                                       const GALGAS_bool & /* in_HAS_5F_DEFAULT_5F_CONSTRUCTOR */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "typeComparisonResult GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inOperand) const {\n"
    "  typeComparisonResult result = kOperandNotValid ;\n"
    "  if (isValid () && inOperand.isValid ()) {\n"
    "    cPtr_weakReference_proxy * myPtr = mProxyPtr ;\n"
    "    const size_t myObjectPtr = size_t (myPtr) ;\n"
    "    cPtr_weakReference_proxy * operandPtr = inOperand.mProxyPtr ;\n"
    "    const size_t operandObjectPtr = size_t (operandPtr) ;\n"
    "    if (myObjectPtr < operandObjectPtr) {\n"
    "      result = kFirstOperandLowerThanSecond ;\n"
    "    }else if (myObjectPtr > operandObjectPtr) {\n"
    "      result = kFirstOperandGreaterThanSecond ;\n"
    "    }else{\n"
    "      result = kOperandEqual ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  cPtr_weakReference_proxy * proxyPtr = NULL ;\n"
    "  acStrongPtr_class * p = (acStrongPtr_class *) inSource.ptr () ;\n"
    "  if (p != NULL) {\n"
    "    proxyPtr = p->getProxy () ;\n"
    "  }\n"
    "  macroAssignSharedObject (mProxyPtr, proxyPtr) ;\n"
    "  return *this ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n" ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "AC_GALGAS_weak_reference" ;
  }else if (kBoolFalse == test_1) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSource) {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_nil (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  macroMyNew (result.mProxyPtr, cPtr_weakReference_proxy (THERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::bang_" ;
  result << in_WEAK_5F_REF_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (C_Compiler * inCompiler COMMA_LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (mProxyPtr != NULL) {\n"
    "    acStrongPtr_class * strongPtr = mProxyPtr->strongObject () ;\n"
    "    if (strongPtr == NULL) {\n"
    "      inCompiler->onTheFlySemanticError (\"weak reference is nil\" COMMA_THERE) ;\n"
    "    }else{\n"
    "      macroValidSharedObject (strongPtr, cPtr_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "      result = GALGAS_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ((cPtr_" ;
  result << in_CLASS_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) strongPtr) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

