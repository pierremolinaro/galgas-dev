#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-22.h"

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
  GALGAS_commandLineOptionMap var_boolOptionMap_4786 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 117)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_4833 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 118)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_4882 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 119)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_4935 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 120)) ;
  GALGAS_stringset var_optionNameSet_4960 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 121)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  cEnumerator_commandLineOptionListAST enumerator_5132 (temp_0.readProperty_mOptions (), kENUMERATION_UP) ;
  while (enumerator_5132.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_4960.getter_hasKey (enumerator_5132.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_5132.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5132.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_4786.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_5132.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_5132.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 133)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_4833.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_5132.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_5132.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 137)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 144)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_4882.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_5132.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_5132.current_mOptionComment (HERE).readProperty_string (), enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 148)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 155)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 156)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, enumerator_5132.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_4935.setter_insertKey (enumerator_5132.current_mOptionInternalName (HERE), enumerator_5132.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_5132.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_5132.current_mOptionComment (HERE).readProperty_string (), enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 159)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsNotEqual, enumerator_5132.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 166)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_5132.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 167)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_5132.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 170)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_4960.addAssign_operation (enumerator_5132.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 172)) ;
    enumerator_5132.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = object ;
  const GALGAS_optionComponentDeclarationAST temp_19 = object ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_mIsPredefined (), var_boolOptionMap_4786, var_uintOptionMap_4833, var_stringOptionMap_4882, var_stringListOptionMap_4935, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 175)) ;
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
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8295 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8295, var_nameForUsefulness_8295, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 199)) ;
  }
  GALGAS_bool var_isPredefined_8567 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_8612 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_8657 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_8704 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_8755 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = object ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_isPredefined_8567, var_boolOptionMap_8612, var_uintOptionMap_8657, var_stringOptionMap_8704, var_stringListOptionMap_8755, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 201)) ;
  const GALGAS_optionComponentDeclarationAST temp_2 = object ;
  const GALGAS_optionComponentDeclarationAST temp_3 = object ;
  const GALGAS_optionComponentDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 214)), var_isPredefined_8567, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionMap_8612, var_uintOptionMap_8657, var_stringOptionMap_8704, var_stringListOptionMap_8755  COMMA_SOURCE_FILE ("optionCompilation.galgas", 212))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 210)) ;
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
  const GALGAS_optionComponentForGeneration temp_0 = object ;
  result_result = temp_0.readProperty_mIsPredefined () ;
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
  const GALGAS_optionComponentForGeneration temp_0 = object ;
  GALGAS_headerKind temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mIsPredefined ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 246)) ;
  }
  result_result = temp_1 ;
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
    const GALGAS_optionComponentForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outHeader = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = object ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionMap (), temp_4.readProperty_mUIntOptionMap (), temp_5.readProperty_mStringOptionMap (), temp_6.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 258))) ;
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
    const GALGAS_optionComponentForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mIsPredefined ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_optionComponentForGeneration temp_2 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 278))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 278)) ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    const GALGAS_optionComponentForGeneration temp_7 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionMap (), temp_5.readProperty_mUIntOptionMap (), temp_6.readProperty_mStringOptionMap (), temp_7.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 279))) ;
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
      const GALGAS_optionComponentForGeneration temp_2 = object ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 297)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 298))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 298)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = object ;
      const GALGAS_optionComponentForGeneration temp_5 = object ;
      const GALGAS_optionComponentForGeneration temp_6 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 301)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 305))), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 309))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 299)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 315))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 315)) ;
      const GALGAS_optionComponentForGeneration temp_8 = object ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = object ;
      const GALGAS_optionComponentForGeneration temp_10 = object ;
      const GALGAS_optionComponentForGeneration temp_11 = object ;
      const GALGAS_optionComponentForGeneration temp_12 = object ;
      const GALGAS_optionComponentForGeneration temp_13 = object ;
      const GALGAS_optionComponentForGeneration temp_14 = object ;
      const GALGAS_optionComponentForGeneration temp_15 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 319)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 324)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 324)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionMap (), temp_13.readProperty_mUIntOptionMap (), temp_14.readProperty_mStringOptionMap (), temp_15.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 323))), GALGAS_string ("\n"
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
  GALGAS_uint index_429_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_429 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_429.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_429.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_429_.increment () ;
      enumerator_429.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1000_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1000 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1000.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_1000.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1000_.increment () ;
      enumerator_1000.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1573_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1573 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1573.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_1573.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1573_.increment () ;
      enumerator_1573.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2153_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2153 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2153.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_2153.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_2153_.increment () ;
      enumerator_2153.gotoNextObject () ;
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
  GALGAS_uint index_428_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_428 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_428.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_428.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_428.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_428.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_428.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_428.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_428_.increment () ;
      enumerator_428.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                               UInt options                                                    \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_1344_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1344 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1344.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1344.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1344.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1344.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1344_.increment () ;
      enumerator_1344.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String options                                                   \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_2327_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2327 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2327.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2327.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2327.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2327.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2327_.increment () ;
      enumerator_2327.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//                              String List options                                              \n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n" ;
  GALGAS_uint index_3338_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_3338 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_3338.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_3338.current_lkey (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_3338.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3338.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3338.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_3338.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_3338_.increment () ;
      enumerator_3338.gotoNextObject () ;
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
  GALGAS_uint index_852_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_852 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_852.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_852.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_852.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_852.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_852.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_852_.increment () ;
      enumerator_852.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1370_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1370 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1370.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1370.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1370.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1370.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1370.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1370.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1370_.increment () ;
      enumerator_1370.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1925_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1925 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1925.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1925.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1925.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1925.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1925.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1925.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1925_.increment () ;
      enumerator_1925.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2487_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2487 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2487.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2487.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2487.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2487.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2487.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2487.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2487_.increment () ;
      enumerator_2487.gotoNextObject () ;
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
  cEnumerator_galgas_33_GUIComponentListAST enumerator_8453 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_8453.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_8453.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 245)) ;
    }
    enumerator_8453.gotoNextObject () ;
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
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_string ().objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 261)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_9119 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 264)) ;
  cEnumerator_lstringlist enumerator_9183 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), kENUMERATION_UP) ;
  while (enumerator_9183.hasCurrentObject ()) {
    GALGAS_bool joker_9322_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9322_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_9183.current_mValue (HERE), joker_9322_5, joker_9322_4, joker_9322_3, joker_9322_2, joker_9322_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 267)) ;
    var_context_9119.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_9183.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 271)) ;
    enumerator_9183.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_9444 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_9471 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), kENUMERATION_UP) ;
  while (enumerator_9471.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9471.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_9444.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9471.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 278)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_9471.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_9471.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 280)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_9119.setter_setMBuildRunOption (enumerator_9471.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 282)) ;
            var_runOptionDefined_9444 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_9471.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_9954 (enumerator_9471.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 286)), kENUMERATION_UP) ;
          while (enumerator_9954.hasCurrentObject ()) {
            var_context_9119.mProperty_mNibAndClassList.addAssign_operation (enumerator_9954.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 287)) ;
            enumerator_9954.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_9471.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_9471.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 290)) ;
      }
    }
    enumerator_9471.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_10226 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
  GALGAS_uint index_10162 ((uint32_t) 0) ;
  while (enumerator_10226.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_10428 ;
    GALGAS_indexingListAST joker_10436_2 ; // Joker input parameter
    GALGAS_lstring joker_10436_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_10226.current_mLexiqueFileName (HERE), var_terminalMap_10428, joker_10436_2, joker_10436_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 296)) ;
    GALGAS_stringset var_terminalSymbolSet_10503 = var_terminalMap_10428.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 302)) ;
    cEnumerator_guiLabelListAST enumerator_10573 (enumerator_10226.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_10573.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_10611 (enumerator_10573.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_10611.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_10503.getter_hasKey (enumerator_10611.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_10611.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_10611.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)).add_operation (enumerator_10226.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 309)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 310)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)) ;
          }
        }
        enumerator_10611.gotoNextObject () ;
      }
      enumerator_10573.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_10968 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 316)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_11009 (enumerator_10226.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_11009.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_11009.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_11009.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_10968.addAssign_operation (enumerator_11009.current_mAttributeName (HERE).readProperty_string (), enumerator_11009.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 321)) ;
      }
      enumerator_11009.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_11313 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_11351 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_11389 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_11426 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_11460 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_11486 (enumerator_10226.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_11486.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_11486.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_9119.mProperty_mExtensionMap.setter_insertKey (enumerator_11486.current_mValue (HERE), enumerator_10226.current_mLexiqueFileName (HERE).readProperty_string (), index_10162, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 332)) ;
          }
          var_hasAssociatedExtension_11313 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_11486.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_11351.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_11486.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_11486.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 336)) ;
              }
            }
            var_hasTabViewTitle_11351 = GALGAS_bool (true) ;
            var_tabViewTitle_11426 = enumerator_11486.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_11486.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_11389.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_11486.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_11486.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
                }
              }
              var_hasBlockComment_11389 = GALGAS_bool (true) ;
              var_blockComment_11460 = enumerator_11486.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_11486.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_11486.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
          }
        }
      }
      enumerator_11486.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_11313.operator_not (SOURCE_FILE ("guiCompilation.galgas", 351)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_10226.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 352)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_11351.operator_not (SOURCE_FILE ("guiCompilation.galgas", 355)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_10226.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 356)) ;
      }
    }
    var_context_9119.mProperty_mWithLexiqueList.addAssign_operation (enumerator_10226.current_mLexiqueFileName (HERE).readProperty_string (), index_10162, var_blockComment_11460, var_tabViewTitle_11426, var_textMacroList_10968, enumerator_10226.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 359)) ;
    enumerator_10226.gotoNextObject () ;
    index_10162.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_9119, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 368)) ;
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
  cEnumerator_optionComponentMapForGeneration enumerator_13453 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_13453.hasCurrentObject ()) {
    GALGAS_string var_fileName_13511 = GALGAS_string ("gui-").add_operation (enumerator_13453.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 386)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_13511  COMMA_SOURCE_FILE ("guiCompilation.galgas", 387)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_13511  COMMA_SOURCE_FILE ("guiCompilation.galgas", 388)) ;
    GALGAS_string var_s_13621 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_13453.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_13453.current_mGuiComponentContext (HERE).readProperty_mBuildRunOption () COMMA_SOURCE_FILE ("guiCompilation.galgas", 389))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_13511, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_13621, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 394)) ;
    }
    enumerator_13453.gotoNextObject () ;
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
  GALGAS_uint index_204_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_204 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_204.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_204.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 6)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_204_.increment () ;
      enumerator_204.gotoNextObject () ;
    }
  }
  GALGAS_uint index_334_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
    cEnumerator_stringlist enumerator_334 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
    while (enumerator_334.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_334.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_334_.increment () ;
      enumerator_334.gotoNextObject () ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1176_ (0) ;
    if (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList ().isValid ()) {
      cEnumerator_stringlist enumerator_1176 (in_GUI_5F_CONTEXT.readProperty_mNibAndClassList (), kENUMERATION_UP) ;
      while (enumerator_1176.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1176.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1176.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1176_.increment () ;
        enumerator_1176.gotoNextObject () ;
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
  GALGAS_uint index_1846_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_1846 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_1846.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_1846.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 55)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_1846_.increment () ;
      enumerator_1846.gotoNextObject () ;
    }
  }
  result << "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2332_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList ().isValid ()) {
    cEnumerator_stringlist enumerator_2332 (in_GUI_5F_CONTEXT.readProperty_mImportedOptionComponentList (), kENUMERATION_UP) ;
    while (enumerator_2332.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2332.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 66)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2332_.increment () ;
      enumerator_2332.gotoNextObject () ;
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
  GALGAS_uint index_3252_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3252 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_3252.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "//\n"
        "//                     P O P    U P    L I S T    D A T A                                        \n"
        "//\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n" ;
      GALGAS_uint index_3886_ (0) ;
      if (enumerator_3252.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_3886 (enumerator_3252.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_3886.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_3886.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_3886.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_3886.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 101)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4226_ (0) ;
          if (enumerator_3886.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4226 (enumerator_3886.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4226.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4226.current_mTerminal (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ", " ;
              result << enumerator_4226.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ",\n" ;
              index_4226_.increment () ;
              enumerator_4226.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_3886_.increment () ;
          enumerator_3886.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << " [" ;
      result << enumerator_3252.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_4599_ (0) ;
      if (enumerator_3252.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4599 (enumerator_3252.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4599.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_4599.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << ",\n" ;
          index_4599_.increment () ;
          enumerator_4599.gotoNextObject () ;
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
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 119)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
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
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 129)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3252.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 132)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3252.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << "_" ;
      result << enumerator_3252.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3252.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3252.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 144)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3252.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7073_ (0) ;
      if (enumerator_3252.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7073 (enumerator_3252.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7073.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7073.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 150)).stringValue () ;
          result << ",\n" ;
          index_7073_.increment () ;
          enumerator_7073.gotoNextObject () ;
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
      result << enumerator_3252.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7536_ (0) ;
      if (enumerator_3252.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7536 (enumerator_3252.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7536.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7536.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 160)).stringValue () ;
          result << ",\n" ;
          index_7536_.increment () ;
          enumerator_7536.gotoNextObject () ;
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
      index_3252_.increment () ;
      enumerator_3252.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_8125_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mExtensionMap ().isValid ()) {
    cEnumerator_extensionMap enumerator_8125 (in_GUI_5F_CONTEXT.readProperty_mExtensionMap (), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8125 = enumerator_8125.hasCurrentObject () ;
    if (nonEmpty_enumerator_8125) {
      result << "  if" ;
    }
    while (enumerator_8125.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_8125.current_lkey (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_8125.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 178)).stringValue () ;
      result << "_" ;
      result << enumerator_8125.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_8125.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_8125_.increment () ;
      enumerator_8125.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8125) {
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
  GALGAS_uint index_8636_ (0) ;
  if (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList ().isValid ()) {
    cEnumerator_importedLexiqueList enumerator_8636 (in_GUI_5F_CONTEXT.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
    while (enumerator_8636.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_8636.current_mIndex (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 190)).stringValue () ;
      result << "_" ;
      result << enumerator_8636.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_8636_.increment () ;
      enumerator_8636.gotoNextObject () ;
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
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2038 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 46)), temp_1.readProperty_mArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-array.galgas", 46)) ;
  {
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2038, temp_2, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 47)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2038, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mElementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 48)), temp_4.readProperty_mElementTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-array.galgas", 48)) COMMA_SOURCE_FILE ("type-array.galgas", 48)) ;
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
    const GALGAS_arrayDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mDimension ().readProperty_uint ().objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_arrayDeclarationAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDimension ().readProperty_location (), GALGAS_string ("the dimension of an array should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_arrayTypeIndex_3195 ;
  {
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mArrayTypeName (), var_arrayTypeIndex_3195 COMMA_SOURCE_FILE ("type-array.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeIndex_3323 ;
  {
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mElementTypeName (), var_elementTypeIndex_3323 COMMA_SOURCE_FILE ("type-array.galgas", 67)) ;
  }
  GALGAS_constructorMap var_constructorMap_3366 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 69)) ;
  GALGAS_getterMap var_getterMap_3457 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_3457, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 70)) ;
  }
  GALGAS_setterMap var_setterMap_3486 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 71)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3533 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 72)) ;
  GALGAS_unifiedTypeMap_2D_entry var_boolType_3640 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("bool"), var_boolType_3640 COMMA_SOURCE_FILE ("type-array.galgas", 74)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_3743 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_3743 COMMA_SOURCE_FILE ("type-array.galgas", 76)) ;
  }
  GALGAS_functionSignature var_uintArgs_3783 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 78)) ;
  GALGAS_uint var_idx_3804 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_6 = object ;
  if (temp_6.readProperty_mDimension ().readProperty_uint ().isValid ()) {
    uint32_t variant_3815 = temp_6.readProperty_mDimension ().readProperty_uint ().uintValue () ;
    bool loop_3815 = true ;
    while (loop_3815) {
      const GALGAS_arrayDeclarationAST temp_7 = object ;
      loop_3815 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_7.readProperty_mDimension ().readProperty_uint ())).isValid () ;
      if (loop_3815) {
        loop_3815 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_7.readProperty_mDimension ().readProperty_uint ())).boolValue () ;
      }
      if (loop_3815 && (0 == variant_3815)) {
        loop_3815 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 80)) ;
      }
      if (loop_3815) {
        variant_3815 -- ;
        var_uintArgs_3783.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 81)), var_uintType_3743, GALGAS_string ("inSize").add_operation (var_idx_3804.getter_string (SOURCE_FILE ("type-array.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 81))  COMMA_SOURCE_FILE ("type-array.galgas", 81)) ;
        var_idx_3804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 82)) ;
      }
    }
  }
  {
  var_constructorMap_3366.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 86))  COMMA_SOURCE_FILE ("type-array.galgas", 86)), var_uintArgs_3783, GALGAS_bool (false), var_arrayTypeIndex_3195, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 85)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_3457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 92)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 99)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_3457, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 106)) ;
  }
  {
  var_getterMap_3457.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 116))  COMMA_SOURCE_FILE ("type-array.galgas", 116)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 117)), var_uintArgs_3783, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 119)), GALGAS_bool (true), var_boolType_3640, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 122)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 115)) ;
  }
  {
  var_getterMap_3457.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 126))  COMMA_SOURCE_FILE ("type-array.galgas", 126)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 127)), var_uintArgs_3783, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 129)), GALGAS_bool (true), var_elementTypeIndex_3323, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 132)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 125)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_5211 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 136)) ;
  var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 137)), var_elementTypeIndex_3323, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 137)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
  var_idx_3804 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_8 = object ;
  if (temp_8.readProperty_mDimension ().readProperty_uint ().isValid ()) {
    uint32_t variant_5381 = temp_8.readProperty_mDimension ().readProperty_uint ().uintValue () ;
    bool loop_5381 = true ;
    while (loop_5381) {
      const GALGAS_arrayDeclarationAST temp_9 = object ;
      loop_5381 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_9.readProperty_mDimension ().readProperty_uint ())).isValid () ;
      if (loop_5381) {
        loop_5381 = GALGAS_bool (kIsStrictInf, var_idx_3804.objectCompare (temp_9.readProperty_mDimension ().readProperty_uint ())).boolValue () ;
      }
      if (loop_5381 && (0 == variant_5381)) {
        loop_5381 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 139)) ;
      }
      if (loop_5381) {
        variant_5381 -- ;
        var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 140)), var_uintType_3743, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 140)), GALGAS_string ("inIndex").add_operation (var_idx_3804.getter_string (SOURCE_FILE ("type-array.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 140))  COMMA_SOURCE_FILE ("type-array.galgas", 140)) ;
        var_idx_3804.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 141)) ;
      }
    }
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 144)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 145)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 148)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 143)) ;
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 152)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 153)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 156)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 151)) ;
  }
  {
  GALGAS_lstring joker_5979_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_5979_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_5979_2 ; // Joker input parameter
  GALGAS_string joker_5979_1 ; // Joker input parameter
  var_setterFormalArgumentList_5211.setter_popFirst (joker_5979_4, joker_5979_3, joker_5979_2, joker_5979_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 159)) ;
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 161)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 162)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 165)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 160)) ;
  }
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 169)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 170)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 168)) ;
  }
  var_setterFormalArgumentList_5211 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 176)) ;
  var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 177)), var_uintType_3743, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 177)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 177)) ;
  var_setterFormalArgumentList_5211.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 178)), var_uintType_3743, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 178)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 178)) ;
  {
  var_setterMap_3486.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 181)), var_setterFormalArgumentList_5211, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 184)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 179)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_10 = object ;
  const GALGAS_arrayDeclarationAST temp_11 = object ;
  const GALGAS_arrayDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.readProperty_mArrayTypeName (), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 195)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 197)), var_constructorMap_3366, var_getterMap_3457, var_setterMap_3486, var_instanceMethodMap_3533, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 202)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 203)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-array.galgas", 205)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 206)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 207)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 209)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 210)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 212)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (temp_12.readProperty_mArrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 214)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 215)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 188)) ;
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
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8396 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8396, var_nameForUsefulness_8396, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 233)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_8561 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 234)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8396, var_elementTypeNameForUsefulness_8561 COMMA_SOURCE_FILE ("type-array.galgas", 235)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 238)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mArrayTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 240)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 241)), temp_5.readProperty_mDimension ().readProperty_uint ()  COMMA_SOURCE_FILE ("type-array.galgas", 239))  COMMA_SOURCE_FILE ("type-array.galgas", 237)) ;
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
  const GALGAS_arrayTypeForGeneration temp_0 = object ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  const GALGAS_arrayTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 261)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 262)), temp_2.readProperty_mElementTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 263)), temp_3.readProperty_mDimension () COMMA_SOURCE_FILE ("type-array.galgas", 260))) ;
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  const GALGAS_arrayTypeForGeneration temp_8 = object ;
  const GALGAS_arrayTypeForGeneration temp_9 = object ;
  const GALGAS_arrayTypeForGeneration temp_10 = object ;
  const GALGAS_arrayTypeForGeneration temp_11 = object ;
  const GALGAS_arrayTypeForGeneration temp_12 = object ;
  const GALGAS_arrayTypeForGeneration temp_13 = object ;
  const GALGAS_arrayTypeForGeneration temp_14 = object ;
  const GALGAS_arrayTypeForGeneration temp_15 = object ;
  const GALGAS_arrayTypeForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 267)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 268)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 271)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 273)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 277)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 278)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 279)) COMMA_SOURCE_FILE ("type-array.galgas", 266))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 266)) ;
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
  const GALGAS_arrayTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 289)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 290)) ;
  GALGAS_stringlist var_suffixList_11067 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 292)) ;
  GALGAS_uint var_idx_11099 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  if (temp_2.readProperty_mDimension ().isValid ()) {
    uint32_t variant_11110 = temp_2.readProperty_mDimension ().uintValue () ;
    bool loop_11110 = true ;
    while (loop_11110) {
      const GALGAS_arrayTypeForGeneration temp_3 = object ;
      loop_11110 = GALGAS_bool (kIsStrictInf, var_idx_11099.objectCompare (temp_3.readProperty_mDimension ())).isValid () ;
      if (loop_11110) {
        loop_11110 = GALGAS_bool (kIsStrictInf, var_idx_11099.objectCompare (temp_3.readProperty_mDimension ())).boolValue () ;
      }
      if (loop_11110 && (0 == variant_11110)) {
        loop_11110 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 294)) ;
      }
      if (loop_11110) {
        variant_11110 -- ;
        var_suffixList_11067.addAssign_operation (var_idx_11099.getter_string (SOURCE_FILE ("type-array.galgas", 295))  COMMA_SOURCE_FILE ("type-array.galgas", 295)) ;
        var_idx_11099.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 296)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 300)), temp_6.readProperty_mElementTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 301)), temp_7.readProperty_mDimension (), var_suffixList_11067 COMMA_SOURCE_FILE ("type-array.galgas", 298))) ;
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
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  const GALGAS_boolsetDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1974 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 48)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 48)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1974, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 49)) ;
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
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 57)) ;
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
  GALGAS_stringset var_slotNameSet_3536 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 82)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_3557 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_3557.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).getter_hasKey (enumerator_3557.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_3664 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_3734 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 86)), kENUMERATION_UP) ;
        while (enumerator_3734.hasCurrentObject ()) {
          var_m_3664.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_3734.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 87)) ;
          enumerator_3734.gotoNextObject () ;
        }
        var_m_3664.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 89)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_3557.current_mValue (HERE).readProperty_location (), var_m_3664, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_3536.getter_hasKey (enumerator_3557.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 91)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_3557.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 92)) ;
        }
      }
    }
    var_slotNameSet_3536.addAssign_operation (enumerator_3557.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 94)) ;
    enumerator_3557.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_boolsetTypeIndex_4103 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_4103 COMMA_SOURCE_FILE ("type-boolset.galgas", 97)) ;
  }
  GALGAS_getterMap var_getterMap_4221 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4221, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  }
  GALGAS_constructorMap var_constructorMap_4259 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 100)) ;
  {
  var_constructorMap_4259.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 101)), GALGAS_bool (false), var_boolsetTypeIndex_4103, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  }
  {
  var_constructorMap_4259.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 102)), GALGAS_bool (false), var_boolsetTypeIndex_4103, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4221, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4221, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 110)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  cEnumerator_lstringlist enumerator_4790 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_4790.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_4259.getter_hasKey (enumerator_4790.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).operator_not (SOURCE_FILE ("type-boolset.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_4259.setter_insertKey (enumerator_4790.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 119)), GALGAS_bool (false), var_boolsetTypeIndex_4103, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4221, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4790.current_mValue (HERE).readProperty_string (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
        }
      }
    }
    enumerator_4790.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_5205 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 130)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5275 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 132)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mBoolsetTypeName (), var_getterMap_4221, var_setterMap_5205, var_instanceMethodMap_5275, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  GALGAS_operators var_operators_5617 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 146)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 147)) COMMA_SOURCE_FILE ("type-boolset.galgas", 146)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 147)) COMMA_SOURCE_FILE ("type-boolset.galgas", 147)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 147)) COMMA_SOURCE_FILE ("type-boolset.galgas", 147)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_9 = object ;
  const GALGAS_boolsetDeclarationAST temp_10 = object ;
  const GALGAS_boolsetDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 154)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 157)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 158)), var_constructorMap_4259, var_getterMap_4221, var_setterMap_5205, var_instanceMethodMap_5275, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 163)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 164)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 165)), var_operators_5617, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 167)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 168)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 169)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 170)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 171)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 173)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 175)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 175)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 149)) ;
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
    const GALGAS_boolsetDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 194)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = object ;
      GALGAS_lstring var_s_7179 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 195)) ;
      const GALGAS_boolsetDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_7179.readProperty_location (), GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 196)).getter_string (SOURCE_FILE ("type-boolset.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 196)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 196)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 196)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_lstring var_boolsetNameForUsefulness_7358 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 199)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_7358, var_boolsetNameForUsefulness_7358, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 200)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  const GALGAS_boolsetDeclarationAST temp_7 = object ;
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 202)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mBoolsetTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 204)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 203))  COMMA_SOURCE_FILE ("type-boolset.galgas", 201)) ;
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
    "  private: uint64_t mFlags ;\n"
    "  private: bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG bool isValid (void) const ;\n"
    "  public: VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Private constructor\n"
    "  private: GALGAS_" ;
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
  GALGAS_uint index_1089_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_1089 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1089.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_1089.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 32)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) {\n"
        "  return GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " (((uint64_t) 1) << " ;
      result << index_1089_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 33)).stringValue () ;
      result << ") ;\n"
        "}\n"
        "\n" ;
      index_1089_idx.increment () ;
      enumerator_1089.gotoNextObject () ;
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
  GALGAS_uint index_5172_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_5172 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5172.hasCurrentObject ()) {
      result << "    if ((mFlags & ((uint64_t) 1) << " ;
      result << index_5172_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 129)).stringValue () ;
      result << ") != 0) {\n"
        "      ioString << \" " ;
      result << enumerator_5172.current_mValue (HERE).readProperty_string ().stringValue () ;
      result << "\" ;\n"
        "    }\n" ;
      index_5172_idx.increment () ;
      enumerator_5172.gotoNextObject () ;
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
  GALGAS_uint index_6026_idx (0) ;
  if (in_SLOT_5F_LIST.isValid ()) {
    cEnumerator_lstringlist enumerator_6026 (in_SLOT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6026.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_6026.current_mValue (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 159)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  GALGAS_bool result ;\n"
        "  if (mIsValid) {\n"
        "    result = GALGAS_bool ((mFlags & ((uint64_t) 1) << " ;
      result << index_6026_idx.getter_string (SOURCE_FILE ("GALGAS_boolset.cpp.galgasTemplate", 162)).stringValue () ;
      result << ") != 0) ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_6026_idx.increment () ;
      enumerator_6026.gotoNextObject () ;
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
  const GALGAS_boolsetTypeForGeneration temp_0 = object ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 241)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 242)), temp_2.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 240))) ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  const GALGAS_boolsetTypeForGeneration temp_5 = object ;
  const GALGAS_boolsetTypeForGeneration temp_6 = object ;
  const GALGAS_boolsetTypeForGeneration temp_7 = object ;
  const GALGAS_boolsetTypeForGeneration temp_8 = object ;
  const GALGAS_boolsetTypeForGeneration temp_9 = object ;
  const GALGAS_boolsetTypeForGeneration temp_10 = object ;
  const GALGAS_boolsetTypeForGeneration temp_11 = object ;
  const GALGAS_boolsetTypeForGeneration temp_12 = object ;
  const GALGAS_boolsetTypeForGeneration temp_13 = object ;
  const GALGAS_boolsetTypeForGeneration temp_14 = object ;
  const GALGAS_boolsetTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 247)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 248)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 249)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 250)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 251)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 252)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 256)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 257)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 258)) COMMA_SOURCE_FILE ("type-boolset.galgas", 245))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 245)) ;
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
  const GALGAS_boolsetTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 269)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 272)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 274)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 274)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 274)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 274)) COMMA_SOURCE_FILE ("type-boolset.galgas", 270))) ;
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
//Function 'weakSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_weakSuffix (C_Compiler * /* inCompiler */
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  result_result = GALGAS_string ("-weak") ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_weakSuffix [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_weakSuffix (C_Compiler * inCompiler,
                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                           const GALGAS_location & /* inErrorLocation */
                                                           COMMA_LOCATION_ARGS) {
  return function_weakSuffix (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_weakSuffix ("weakSuffix",
                                                            functionWithGenericHeader_weakSuffix,
                                                            & kTypeDescriptor_GALGAS_string,
                                                            0,
                                                            functionArgs_weakSuffix) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@classDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_classDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  const GALGAS_classDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 107)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_classDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                          extensionGetter_classDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_classDeclarationAST_keyRepresentation (defineExtensionGetter_classDeclarationAST_keyRepresentation, NULL) ;

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
  const GALGAS_classDeclarationAST temp_0 = object ;
  const GALGAS_classDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_4258 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 119)), temp_1.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 119)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4258, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 120)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = object ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = object ;
      const GALGAS_classDeclarationAST temp_6 = object ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4258, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 124)), temp_6.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 124)) COMMA_SOURCE_FILE ("type-class.galgas", 122)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4605 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4605.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = object ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4258, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4605.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 128)), temp_8.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 128)) COMMA_SOURCE_FILE ("type-class.galgas", 128)) ;
    }
    enumerator_4605.gotoNextObject () ;
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
  GALGAS_getterMap var_getterMap_5431 ;
  GALGAS_setterMap var_setterMap_5458 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5501 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_5553 ;
  GALGAS_propertyMap var_attributeMap_5585 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 146)) ;
  GALGAS_unifiedTypeMap_2D_entry var_superClassIndex_5658 ;
  GALGAS_bool var_generateHeaderInSeparateFile_5699 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_5658 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 151)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5431, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 152)) ;
      }
      var_setterMap_5458 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 153)) ;
      var_instanceMethodMap_5501 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 154)) ;
      var_inheritedTypedPropertyList_5553 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 155)) ;
      var_attributeMap_5585 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 156)) ;
      var_generateHeaderInSeparateFile_5699 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = object ;
      cEnumerator_lstringlist enumerator_6027 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_6027.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_6027.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_5699 = GALGAS_bool (true) ;
          }
        }
        enumerator_6027.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperClassName (), var_superClassIndex_5658 COMMA_SOURCE_FILE ("type-class.galgas", 164)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_6324 ;
    GALGAS_getterMap var_inheritedGetterMap_6362 ;
    GALGAS_setterMap var_inheritedSetterMap_6400 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_6446 ;
    const GALGAS_classDeclarationAST temp_5 = object ;
    GALGAS_bool joker_6524_3 ; // Joker input parameter
    GALGAS_bool joker_6524_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_6524_1 ; // Joker input parameter
    GALGAS_bool joker_6554 ; // Joker input parameter
    GALGAS_typedPropertyList joker_6617_2 ; // Joker input parameter
    GALGAS_constructorMap joker_6617_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_6705_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_6705_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_6705_7 ; // Joker input parameter
    GALGAS_operators joker_6705_6 ; // Joker input parameter
    GALGAS_functionSignature joker_6705_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_6705_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_6705_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_6705_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_6705_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_6751_4 ; // Joker input parameter
    GALGAS_string joker_6751_3 ; // Joker input parameter
    GALGAS_string joker_6751_2 ; // Joker input parameter
    GALGAS_headerKind joker_6751_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_5.readProperty_mSuperClassName (), joker_6524_3, joker_6524_2, joker_6524_1, var_typeKindEnum_6324, joker_6554, var_inheritedTypedPropertyList_5553, var_attributeMap_5585, joker_6617_2, joker_6617_1, var_inheritedGetterMap_6362, var_inheritedSetterMap_6400, var_inheritedMethodMap_6446, joker_6705_9, joker_6705_8, joker_6705_7, joker_6705_6, joker_6705_5, joker_6705_4, joker_6705_3, joker_6705_2, joker_6705_1, var_generateHeaderInSeparateFile_5699, joker_6751_4, joker_6751_3, joker_6751_2, joker_6751_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 169)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_typeKindEnum_6324.getter_isClassType (SOURCE_FILE ("type-class.galgas", 185)).operator_not (SOURCE_FILE ("type-class.galgas", 185)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = object ;
        const GALGAS_classDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 186)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 186)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 186)) ;
      }
    }
    var_setterMap_5458 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 189)) ;
    cEnumerator_setterMap enumerator_7027 (var_inheritedSetterMap_6400, kENUMERATION_UP) ;
    while (enumerator_7027.hasCurrentObject ()) {
      {
      var_setterMap_5458.setter_insertKey (enumerator_7027.current_lkey (HERE), enumerator_7027.current_mKind (HERE), enumerator_7027.current_mParameterList (HERE), enumerator_7027.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 191)) ;
      }
      enumerator_7027.gotoNextObject () ;
    }
    var_getterMap_5431 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 201)) ;
    cEnumerator_getterMap enumerator_7401 (var_inheritedGetterMap_6362, kENUMERATION_UP) ;
    while (enumerator_7401.hasCurrentObject ()) {
      {
      var_getterMap_5431.setter_insertKey (enumerator_7401.current_lkey (HERE), enumerator_7401.current_mKind (HERE), enumerator_7401.current_mArgumentTypeList (HERE), enumerator_7401.current_mDeclarationLocation (HERE), enumerator_7401.current_mHasCompilerArgument (HERE), enumerator_7401.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 210)), enumerator_7401.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 203)) ;
      }
      enumerator_7401.gotoNextObject () ;
    }
    var_instanceMethodMap_5501 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 215)) ;
    cEnumerator_instanceMethodMap enumerator_7825 (var_inheritedMethodMap_6446, kENUMERATION_UP) ;
    while (enumerator_7825.hasCurrentObject ()) {
      {
      var_instanceMethodMap_5501.setter_insertKey (enumerator_7825.current_lkey (HERE), enumerator_7825.current_mKind (HERE), enumerator_7825.current_mParameterList (HERE), enumerator_7825.current_mDeclarationLocation (HERE), enumerator_7825.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 223)), enumerator_7825.current_mMutability (HERE), enumerator_7825.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 217)) ;
      }
      enumerator_7825.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_8197 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 230)) ;
  cEnumerator_typedPropertyList enumerator_8257 (var_inheritedTypedPropertyList_5553, kENUMERATION_UP) ;
  while (enumerator_8257.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_8257.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_8257.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 233)) ;
    }
    var_constructorPropertyTypeList_8197.addAssign_operation (temp_10, enumerator_8257.current_mPropertyTypeEntry (HERE), enumerator_8257.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 232)) ;
    enumerator_8257.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8525 (temp_12.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8525.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_8660 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8525.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8660 COMMA_SOURCE_FILE ("type-class.galgas", 238)) ;
    }
    GALGAS_bool var_hasSelector_8681 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8708 (enumerator_8525.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8708.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_8708.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_hasSelector_8681.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              fixItArray15.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_8708.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 243)) ;
            }
          }
          var_hasSelector_8681 = GALGAS_bool (true) ;
        }
      }
      enumerator_8708.gotoNextObject () ;
    }
    GALGAS_lstring temp_16 ;
    const enumGalgasBool test_17 = var_hasSelector_8681.boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = enumerator_8525.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 249)) ;
    }
    var_constructorPropertyTypeList_8197.addAssign_operation (temp_16, var_attributeTypeIndex_8660, enumerator_8525.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 248)) ;
    {
    var_attributeMap_5585.setter_insertKey (enumerator_8525.current_mPropertyName (HERE), enumerator_8525.current_mIsPublic (HERE), enumerator_8525.current_isConstant (HERE), var_attributeTypeIndex_8660, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 252)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_getterMap_5431.getter_hasKey (enumerator_8525.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 258)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_8525.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_8525.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 259)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 259)), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 259)) ;
      }
    }
    enumerator_8525.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_classIndex_9535 ;
  {
  const GALGAS_classDeclarationAST temp_20 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_20.readProperty_mClassTypeName (), var_classIndex_9535 COMMA_SOURCE_FILE ("type-class.galgas", 263)) ;
  }
  GALGAS_constructorMap var_constructorMap_9594 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 269)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_classDeclarationAST temp_22 = object ;
    test_21 = temp_22.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 270)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      var_constructorMap_9594.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 272))  COMMA_SOURCE_FILE ("type-class.galgas", 272)), var_constructorPropertyTypeList_8197, GALGAS_bool (false), var_classIndex_9535, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 271)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_9866 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 279)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_9918 = var_inheritedTypedPropertyList_5553 ;
  const GALGAS_classDeclarationAST temp_23 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10012 (temp_23.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10012.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10147 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10012.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10147 COMMA_SOURCE_FILE ("type-class.galgas", 282)) ;
    }
    GALGAS_bool var_hasSelector_10168 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_10192 (enumerator_10012.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_10192.hasCurrentObject ()) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_10192.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticWarning (enumerator_10192.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 286)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, enumerator_10192.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticWarning (enumerator_10192.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 288)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (kIsEqual, enumerator_10192.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              var_hasSelector_10168 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_10192.gotoNextObject () ;
    }
    var_currentClassTypedPropertyList_9866.addAssign_operation (var_attributeTypeIndex_10147, enumerator_10012.current_mPropertyName (HERE), enumerator_10012.current_mIsPublic (HERE), var_hasSelector_10168  COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
    var_allTypedAttributeList_9918.addAssign_operation (var_attributeTypeIndex_10147, enumerator_10012.current_mPropertyName (HERE), enumerator_10012.current_mIsPublic (HERE), var_hasSelector_10168  COMMA_SOURCE_FILE ("type-class.galgas", 294)) ;
    enumerator_10012.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_10794 (var_currentClassTypedPropertyList_9866, kENUMERATION_UP) ;
  while (enumerator_10794.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_10794.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_29) {
        {
        GALGAS_formalParameterSignature temp_30 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 302)) ;
        temp_30.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 302)), enumerator_10794.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 302)), enumerator_10794.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 302)) ;
        var_setterMap_5458.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10794.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 300)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 300))  COMMA_SOURCE_FILE ("type-class.galgas", 300)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 301)), temp_30, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 304)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 299)) ;
        }
      }
    }
    enumerator_10794.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_31 = object ;
  const GALGAS_classDeclarationAST temp_32 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_31.readProperty_mClassTypeName (), var_getterMap_5431, var_setterMap_5458, var_instanceMethodMap_5501, temp_32.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 319)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 310)) ;
  }
  GALGAS_string var_defaultConstructorName_11660 ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = var_superClassIndex_5658.getter_isNull (SOURCE_FILE ("type-class.galgas", 323)).boolEnum () ;
    if (kBoolTrue == test_33) {
      var_defaultConstructorName_11660 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_33) {
    var_defaultConstructorName_11660 = var_superClassIndex_5658.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 326)) ;
  }
  cEnumerator_typedPropertyList enumerator_11850 (var_currentClassTypedPropertyList_9866, kENUMERATION_UP) ;
  bool bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_11660.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_11850.hasCurrentObject () && bool_34) {
    while (enumerator_11850.hasCurrentObject () && bool_34) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = GALGAS_bool (kIsEqual, enumerator_11850.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 329)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_11850.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 329)).operator_not (SOURCE_FILE ("type-class.galgas", 329)) COMMA_SOURCE_FILE ("type-class.galgas", 329)).boolEnum () ;
        if (kBoolTrue == test_35) {
          var_defaultConstructorName_11660 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_11850.gotoNextObject () ;
      if (enumerator_11850.hasCurrentObject ()) {
        bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_11660.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  const GALGAS_classDeclarationAST temp_36 = object ;
  const GALGAS_classDeclarationAST temp_37 = object ;
  const GALGAS_classDeclarationAST temp_38 = object ;
  const GALGAS_classDeclarationAST temp_39 = object ;
  const GALGAS_classDeclarationAST temp_40 = object ;
  GALGAS_operators temp_41 ;
  const enumGalgasBool test_42 = temp_40.readProperty_mIsReference ().boolEnum () ;
  if (kBoolTrue == test_42) {
    temp_41 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 351)) ;
  }else if (kBoolFalse == test_42) {
    temp_41 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 351)) ;
  }
  const GALGAS_classDeclarationAST temp_43 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_36.readProperty_mClassTypeName (), temp_37.readProperty_mIsPredefined (), temp_38.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 337)), var_superClassIndex_5658, GALGAS_typeKindEnum::constructor_classType (temp_39.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 339)), GALGAS_bool (false), var_allTypedAttributeList_9918, var_attributeMap_5585, var_currentClassTypedPropertyList_9866, var_constructorMap_9594, var_getterMap_5431, var_setterMap_5458, var_instanceMethodMap_5501, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 348)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 349)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 350)), temp_41, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 352)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 353)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 354)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 355)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 356)), var_generateHeaderInSeparateFile_5699, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 358)), var_defaultConstructorName_11660, GALGAS_string ("class-").add_operation (temp_43.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 360)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 334)) ;
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
  const GALGAS_classDeclarationAST temp_0 = object ;
  GALGAS_lstring var_classTypeNameForUsefulness_13651 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 378)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_13651, var_classTypeNameForUsefulness_13651, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 379)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = object ;
      GALGAS_lstring var_superClassNameForUsefulness_13879 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 381)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_13651, var_superClassNameForUsefulness_13879 COMMA_SOURCE_FILE ("type-class.galgas", 382)) ;
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classDeclarationAST temp_5 = object ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classDeclarationAST temp_6 = object ;
      const GALGAS_classDeclarationAST temp_7 = object ;
      GALGAS_lstring var_weakRefTypeNameForUsefulness_14102 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 385)), temp_7.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 385)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 385)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_13651, var_weakRefTypeNameForUsefulness_14102 COMMA_SOURCE_FILE ("type-class.galgas", 386)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_14367 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mClassTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 389)) ;
  const GALGAS_classDeclarationAST temp_9 = object ;
  GALGAS_unifiedTypeMap_2D_entry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 392)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = object ;
    temp_10 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mSuperClassName (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 393)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_superClassEntry_14496 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_14496.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 398)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_14945 ;
      var_superClassEntry_14496.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 399)).method_classType (var_superClassIsReference_14945, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 399)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = object ;
        test_14 = var_superClassIsReference_14945.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 400)) COMMA_SOURCE_FILE ("type-class.galgas", 400)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 401)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = object ;
          test_18 = var_superClassIsReference_14945.operator_not (SOURCE_FILE ("type-class.galgas", 402)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 402)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = object ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 403)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_15491 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_14496.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 410)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_15491 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 411)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_15597 = GALGAS_bool (false) ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_24 = object ;
        test_23 = GALGAS_bool (kIsStrictSup, temp_24.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 413)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_23) {
          const GALGAS_classDeclarationAST temp_25 = object ;
          cEnumerator_lstringlist enumerator_15671 (temp_25.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_15671.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, enumerator_15671.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = var_generatedInSeparateFileFeature_15597.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <C_FixItDescription> fixItArray28 ;
                    inCompiler->emitSemanticError (enumerator_15671.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray28  COMMA_SOURCE_FILE ("type-class.galgas", 417)) ;
                  }
                }
                var_generatedInSeparateFileFeature_15597 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_15671.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 421)) ;
            }
            enumerator_15671.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_15491 = var_superClassEntry_14496.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 426)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      const GALGAS_classDeclarationAST temp_31 = object ;
      test_30 = GALGAS_bool (kIsStrictSup, temp_31.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 427)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const GALGAS_classDeclarationAST temp_32 = object ;
        cEnumerator_lstringlist enumerator_16210 (temp_32.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_16210.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (enumerator_16210.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray33  COMMA_SOURCE_FILE ("type-class.galgas", 429)) ;
          enumerator_16210.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_16415 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 434)) ;
  GALGAS_propertyIndexMap var_attributeMap_16457 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 435)) ;
  const GALGAS_classDeclarationAST temp_34 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16527 (temp_34.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16527.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16591 = function_typeNameForUsefulEntitiesGraph (enumerator_16527.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 437)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_13651, var_propertyTypeNameForUsefulness_16591 COMMA_SOURCE_FILE ("type-class.galgas", 438)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_16752 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_16527.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 439)) ;
    GALGAS_bool var_hasSelector_16855 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_16879 (enumerator_16527.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_35 = var_hasSelector_16855.operator_not (SOURCE_FILE ("type-class.galgas", 441)).isValidAndTrue () ;
    if (enumerator_16879.hasCurrentObject () && bool_35) {
      while (enumerator_16879.hasCurrentObject () && bool_35) {
        var_hasSelector_16855 = GALGAS_bool (kIsEqual, enumerator_16879.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_16879.gotoNextObject () ;
        if (enumerator_16879.hasCurrentObject ()) {
          bool_35 = var_hasSelector_16855.operator_not (SOURCE_FILE ("type-class.galgas", 441)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_16415.addAssign_operation (var_t_16752, enumerator_16527.current_mPropertyName (HERE), enumerator_16527.current_mIsPublic (HERE), var_hasSelector_16855  COMMA_SOURCE_FILE ("type-class.galgas", 444)) ;
    var_allAttributeList_15491.addAssign_operation (var_t_16752, enumerator_16527.current_mPropertyName (HERE), enumerator_16527.current_mIsPublic (HERE), var_hasSelector_16855  COMMA_SOURCE_FILE ("type-class.galgas", 449)) ;
    {
    var_attributeMap_16457.setter_insertKey (enumerator_16527.current_mPropertyName (HERE), var_t_16752, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 454)) ;
    }
    enumerator_16527.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_36 = object ;
  const GALGAS_classDeclarationAST temp_37 = object ;
  const GALGAS_classDeclarationAST temp_38 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_36.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 458)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_14367, temp_37.readProperty_mIsAbstract (), temp_38.readProperty_mIsReference (), var_superClassEntry_14496, var_allAttributeList_15491, var_typedAttributeList_16415, var_selfType_14367.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 466))  COMMA_SOURCE_FILE ("type-class.galgas", 459))  COMMA_SOURCE_FILE ("type-class.galgas", 457)) ;
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
    const GALGAS_classTypeForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 489)).operator_not (SOURCE_FILE ("type-class.galgas", 489)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = object ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 490)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classTypeForGeneration temp_4 = object ;
    test_3 = temp_4.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_classTypeForGeneration temp_5 = object ;
      const GALGAS_classTypeForGeneration temp_6 = object ;
      const GALGAS_classTypeForGeneration temp_7 = object ;
      GALGAS_string temp_8 ;
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 497)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = object ;
        temp_8 = temp_10.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 497)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = object ;
      const GALGAS_classTypeForGeneration temp_12 = object ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 495)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 496)), temp_8, temp_11.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_12.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 499)).objectCompare (GALGAS_string::makeEmptyString ())), temp_13.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 494))) ;
      const GALGAS_classTypeForGeneration temp_14 = object ;
      const GALGAS_classTypeForGeneration temp_15 = object ;
      const GALGAS_classTypeForGeneration temp_16 = object ;
      const GALGAS_classTypeForGeneration temp_17 = object ;
      const GALGAS_classTypeForGeneration temp_18 = object ;
      const GALGAS_classTypeForGeneration temp_19 = object ;
      const GALGAS_classTypeForGeneration temp_20 = object ;
      const GALGAS_classTypeForGeneration temp_21 = object ;
      const GALGAS_classTypeForGeneration temp_22 = object ;
      const GALGAS_classTypeForGeneration temp_23 = object ;
      const GALGAS_classTypeForGeneration temp_24 = object ;
      const GALGAS_classTypeForGeneration temp_25 = object ;
      const GALGAS_classTypeForGeneration temp_26 = object ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_14.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 503)), temp_15.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 504)), temp_16.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 505)), temp_17.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 506)), temp_18.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)), temp_19.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)), temp_20.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)), temp_21.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)), temp_22.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 511)), temp_23.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)), temp_24.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 513)), temp_25.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 514)), temp_26.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)) COMMA_SOURCE_FILE ("type-class.galgas", 502))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 502)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_classTypeForGeneration temp_27 = object ;
    const GALGAS_classTypeForGeneration temp_28 = object ;
    const GALGAS_classTypeForGeneration temp_29 = object ;
    GALGAS_string temp_30 ;
    const enumGalgasBool test_31 = temp_29.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 521)).boolEnum () ;
    if (kBoolTrue == test_31) {
      temp_30 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_31) {
      const GALGAS_classTypeForGeneration temp_32 = object ;
      temp_30 = temp_32.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 521)) ;
    }
    const GALGAS_classTypeForGeneration temp_33 = object ;
    const GALGAS_classTypeForGeneration temp_34 = object ;
    const GALGAS_classTypeForGeneration temp_35 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, temp_27.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)), temp_28.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 520)), temp_30, temp_33.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_34.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 523)).objectCompare (GALGAS_string::makeEmptyString ())), temp_35.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 518))) ;
    const GALGAS_classTypeForGeneration temp_36 = object ;
    const GALGAS_classTypeForGeneration temp_37 = object ;
    const GALGAS_classTypeForGeneration temp_38 = object ;
    const GALGAS_classTypeForGeneration temp_39 = object ;
    const GALGAS_classTypeForGeneration temp_40 = object ;
    const GALGAS_classTypeForGeneration temp_41 = object ;
    const GALGAS_classTypeForGeneration temp_42 = object ;
    const GALGAS_classTypeForGeneration temp_43 = object ;
    const GALGAS_classTypeForGeneration temp_44 = object ;
    const GALGAS_classTypeForGeneration temp_45 = object ;
    const GALGAS_classTypeForGeneration temp_46 = object ;
    const GALGAS_classTypeForGeneration temp_47 = object ;
    const GALGAS_classTypeForGeneration temp_48 = object ;
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_36.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 527)), temp_37.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 528)), temp_38.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 529)), temp_39.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 530)), temp_40.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 531)), temp_41.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 532)), temp_42.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 533)), temp_43.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)), temp_44.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 535)), temp_45.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)), temp_46.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)), temp_47.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 538)), temp_48.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 539)) COMMA_SOURCE_FILE ("type-class.galgas", 526))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 526)) ;
  }
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
  const GALGAS_classTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_21118 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_21118.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_21118.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 552)) ;
    enumerator_21118.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classTypeForGeneration temp_2 = object ;
    test_1 = temp_2.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        const GALGAS_classTypeForGeneration temp_4 = object ;
        test_3 = temp_4.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_classTypeForGeneration temp_5 = object ;
          const GALGAS_classTypeForGeneration temp_6 = object ;
          const GALGAS_classTypeForGeneration temp_7 = object ;
          GALGAS_string temp_8 ;
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 560)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = object ;
            temp_8 = temp_10.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 560)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = object ;
          const GALGAS_classTypeForGeneration temp_12 = object ;
          const GALGAS_classTypeForGeneration temp_13 = object ;
          GALGAS_string var_part_31__21298 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 558)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 559)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 557))) ;
          const GALGAS_classTypeForGeneration temp_14 = object ;
          const GALGAS_classTypeForGeneration temp_15 = object ;
          const GALGAS_classTypeForGeneration temp_16 = object ;
          GALGAS_string temp_17 ;
          const enumGalgasBool test_18 = temp_16.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 568)).boolEnum () ;
          if (kBoolTrue == test_18) {
            temp_17 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_18) {
            const GALGAS_classTypeForGeneration temp_19 = object ;
            temp_17 = temp_19.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 568)) ;
          }
          const GALGAS_classTypeForGeneration temp_20 = object ;
          const GALGAS_classTypeForGeneration temp_21 = object ;
          const GALGAS_classTypeForGeneration temp_22 = object ;
          GALGAS_string var_part_32__21687 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, temp_14.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)), temp_15.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 567)), temp_17, temp_20.readProperty_mCurrentTypedAttributeList (), temp_21.readProperty_mAllTypedAttributeList (), temp_22.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 565))) ;
          const GALGAS_classTypeForGeneration temp_23 = object ;
          GALGAS_string var_headerFileName_22085 = GALGAS_string ("separateHeaderFor_").add_operation (temp_23.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 573)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 575)), var_headerFileName_22085, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
            "\n"), var_part_31__21298, GALGAS_string ("\n"
            "\n"), var_part_32__21687, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 574)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_22085, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 585)).add_operation (GALGAS_string ("\"\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 585)) ;
        }
      }
      if (kBoolFalse == test_3) {
        const GALGAS_classTypeForGeneration temp_24 = object ;
        const GALGAS_classTypeForGeneration temp_25 = object ;
        const GALGAS_classTypeForGeneration temp_26 = object ;
        GALGAS_string temp_27 ;
        const enumGalgasBool test_28 = temp_26.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 590)).boolEnum () ;
        if (kBoolTrue == test_28) {
          temp_27 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_28) {
          const GALGAS_classTypeForGeneration temp_29 = object ;
          temp_27 = temp_29.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 590)) ;
        }
        const GALGAS_classTypeForGeneration temp_30 = object ;
        const GALGAS_classTypeForGeneration temp_31 = object ;
        const GALGAS_classTypeForGeneration temp_32 = object ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, temp_24.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 588)), temp_25.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)), temp_27, temp_30.readProperty_mCurrentTypedAttributeList (), temp_31.readProperty_mAllTypedAttributeList (), temp_32.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 587))) ;
        const GALGAS_classTypeForGeneration temp_33 = object ;
        const GALGAS_classTypeForGeneration temp_34 = object ;
        const GALGAS_classTypeForGeneration temp_35 = object ;
        GALGAS_string temp_36 ;
        const enumGalgasBool test_37 = temp_35.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 598)).boolEnum () ;
        if (kBoolTrue == test_37) {
          temp_36 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_37) {
          const GALGAS_classTypeForGeneration temp_38 = object ;
          temp_36 = temp_38.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 598)) ;
        }
        const GALGAS_classTypeForGeneration temp_39 = object ;
        const GALGAS_classTypeForGeneration temp_40 = object ;
        const GALGAS_classTypeForGeneration temp_41 = object ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, temp_33.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 596)), temp_34.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 597)), temp_36, temp_39.readProperty_mCurrentTypedAttributeList (), temp_40.readProperty_mAllTypedAttributeList (), temp_41.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 595))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 595)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_42 = kBoolTrue ;
    if (kBoolTrue == test_42) {
      const GALGAS_classTypeForGeneration temp_43 = object ;
      test_42 = temp_43.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_42) {
        const GALGAS_classTypeForGeneration temp_44 = object ;
        const GALGAS_classTypeForGeneration temp_45 = object ;
        const GALGAS_classTypeForGeneration temp_46 = object ;
        GALGAS_string temp_47 ;
        const enumGalgasBool test_48 = temp_46.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 609)).boolEnum () ;
        if (kBoolTrue == test_48) {
          temp_47 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_48) {
          const GALGAS_classTypeForGeneration temp_49 = object ;
          temp_47 = temp_49.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 609)) ;
        }
        const GALGAS_classTypeForGeneration temp_50 = object ;
        const GALGAS_classTypeForGeneration temp_51 = object ;
        const GALGAS_classTypeForGeneration temp_52 = object ;
        GALGAS_string var_part_31__23479 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, temp_44.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 607)), temp_45.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 608)), temp_47, temp_50.readProperty_mCurrentTypedAttributeList (), temp_51.readProperty_mAllTypedAttributeList (), temp_52.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 606))) ;
        const GALGAS_classTypeForGeneration temp_53 = object ;
        const GALGAS_classTypeForGeneration temp_54 = object ;
        const GALGAS_classTypeForGeneration temp_55 = object ;
        GALGAS_string temp_56 ;
        const enumGalgasBool test_57 = temp_55.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 617)).boolEnum () ;
        if (kBoolTrue == test_57) {
          temp_56 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_57) {
          const GALGAS_classTypeForGeneration temp_58 = object ;
          temp_56 = temp_58.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 617)) ;
        }
        const GALGAS_classTypeForGeneration temp_59 = object ;
        const GALGAS_classTypeForGeneration temp_60 = object ;
        const GALGAS_classTypeForGeneration temp_61 = object ;
        GALGAS_string var_part_32__23864 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, temp_53.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 615)), temp_54.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 616)), temp_56, temp_59.readProperty_mCurrentTypedAttributeList (), temp_60.readProperty_mAllTypedAttributeList (), temp_61.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 614))) ;
        const GALGAS_classTypeForGeneration temp_62 = object ;
        GALGAS_string var_headerFileName_24258 = GALGAS_string ("separateHeaderFor_").add_operation (temp_62.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 624)), var_headerFileName_24258, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
          "\n"), var_part_31__23479, GALGAS_string ("\n"
          "\n"), var_part_32__23864, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 623)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24258, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 634)).add_operation (GALGAS_string ("\"\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 634)) ;
      }
    }
    if (kBoolFalse == test_42) {
      const GALGAS_classTypeForGeneration temp_63 = object ;
      const GALGAS_classTypeForGeneration temp_64 = object ;
      const GALGAS_classTypeForGeneration temp_65 = object ;
      GALGAS_string temp_66 ;
      const enumGalgasBool test_67 = temp_65.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 639)).boolEnum () ;
      if (kBoolTrue == test_67) {
        temp_66 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_67) {
        const GALGAS_classTypeForGeneration temp_68 = object ;
        temp_66 = temp_68.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 639)) ;
      }
      const GALGAS_classTypeForGeneration temp_69 = object ;
      const GALGAS_classTypeForGeneration temp_70 = object ;
      const GALGAS_classTypeForGeneration temp_71 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, temp_63.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 637)), temp_64.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 638)), temp_66, temp_69.readProperty_mCurrentTypedAttributeList (), temp_70.readProperty_mAllTypedAttributeList (), temp_71.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 636))) ;
      const GALGAS_classTypeForGeneration temp_72 = object ;
      const GALGAS_classTypeForGeneration temp_73 = object ;
      const GALGAS_classTypeForGeneration temp_74 = object ;
      GALGAS_string temp_75 ;
      const enumGalgasBool test_76 = temp_74.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 647)).boolEnum () ;
      if (kBoolTrue == test_76) {
        temp_75 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_76) {
        const GALGAS_classTypeForGeneration temp_77 = object ;
        temp_75 = temp_77.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 647)) ;
      }
      const GALGAS_classTypeForGeneration temp_78 = object ;
      const GALGAS_classTypeForGeneration temp_79 = object ;
      const GALGAS_classTypeForGeneration temp_80 = object ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, temp_72.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 645)), temp_73.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 646)), temp_75, temp_78.readProperty_mCurrentTypedAttributeList (), temp_79.readProperty_mAllTypedAttributeList (), temp_80.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 644))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 644)) ;
    }
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
  const GALGAS_classTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 663)) ;
  const GALGAS_classTypeForGeneration temp_1 = object ;
  const GALGAS_classTypeForGeneration temp_2 = object ;
  const GALGAS_classTypeForGeneration temp_3 = object ;
  GALGAS_typedPropertyList var_at_25945 = temp_1.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), temp_2.readProperty_mAllTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 665)).substract_operation (temp_3.readProperty_mCurrentTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665))  COMMA_SOURCE_FILE ("type-class.galgas", 665)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 664)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = object ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = object ;
      const GALGAS_classTypeForGeneration temp_7 = object ;
      const GALGAS_classTypeForGeneration temp_8 = object ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 671)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = object ;
        temp_9 = temp_11.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 671)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = object ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      const GALGAS_classTypeForGeneration temp_14 = object ;
      const GALGAS_classTypeForGeneration temp_15 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, temp_6.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 669)), temp_7.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 670)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_25945, temp_14.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_15.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 676)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 668))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_16 = object ;
    const GALGAS_classTypeForGeneration temp_17 = object ;
    const GALGAS_classTypeForGeneration temp_18 = object ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 682)).boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_20) {
      const GALGAS_classTypeForGeneration temp_21 = object ;
      temp_19 = temp_21.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 682)) ;
    }
    const GALGAS_classTypeForGeneration temp_22 = object ;
    const GALGAS_classTypeForGeneration temp_23 = object ;
    const GALGAS_classTypeForGeneration temp_24 = object ;
    const GALGAS_classTypeForGeneration temp_25 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, temp_16.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 680)), temp_17.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 681)), temp_19, temp_22.readProperty_mCurrentTypedAttributeList (), temp_23.readProperty_mAllTypedAttributeList (), var_at_25945, temp_24.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_25.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 687)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 679))) ;
  }
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
//Overriding extension getter '@weakReferenceDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_weakReferenceDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  const GALGAS_weakReferenceDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("weak reference @").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 18)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_weakReferenceDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                          extensionGetter_weakReferenceDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_weakReferenceDeclarationAST_keyRepresentation (defineExtensionGetter_weakReferenceDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  const GALGAS_weakReferenceDeclarationAST temp_0 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1648 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)), temp_1.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 30)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1648, temp_2, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 31)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_weakReferenceDeclarationAST temp_4 = object ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_weakReferenceDeclarationAST temp_5 = object ;
      const GALGAS_weakReferenceDeclarationAST temp_6 = object ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)), temp_6.readProperty_mSuperWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 35)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 33)) ;
      }
    }
  }
  {
  const GALGAS_weakReferenceDeclarationAST temp_7 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1648, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_7.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 40)), temp_8.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 40)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 38)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                                extensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_weakReferenceDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                                const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                                const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_superClassIndex_2875 ;
  GALGAS_bool var_generateHeaderInSeparateFile_2916 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_2875 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 58)) ;
      var_generateHeaderInSeparateFile_2916 = GALGAS_bool (false) ;
      const GALGAS_weakReferenceDeclarationAST temp_2 = object ;
      cEnumerator_lstringlist enumerator_3078 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_3078.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3078.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_2916 = GALGAS_bool (true) ;
          }
        }
        enumerator_3078.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_weakReferenceDeclarationAST temp_4 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperWeakReferenceTypeName (), var_superClassIndex_2875 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 66)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_3387 ;
    GALGAS_getterMap var_inheritedGetterMap_3425 ;
    GALGAS_setterMap var_inheritedSetterMap_3463 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_3509 ;
    const GALGAS_weakReferenceDeclarationAST temp_5 = object ;
    GALGAS_bool joker_3599_3 ; // Joker input parameter
    GALGAS_bool joker_3599_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_3599_1 ; // Joker input parameter
    GALGAS_bool joker_3629_5 ; // Joker input parameter
    GALGAS_typedPropertyList joker_3629_4 ; // Joker input parameter
    GALGAS_propertyMap joker_3629_3 ; // Joker input parameter
    GALGAS_typedPropertyList joker_3629_2 ; // Joker input parameter
    GALGAS_constructorMap joker_3629_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_3717_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_3717_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_3717_7 ; // Joker input parameter
    GALGAS_operators joker_3717_6 ; // Joker input parameter
    GALGAS_functionSignature joker_3717_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_3717_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_3717_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_3717_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_3717_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_3763_4 ; // Joker input parameter
    GALGAS_string joker_3763_3 ; // Joker input parameter
    GALGAS_string joker_3763_2 ; // Joker input parameter
    GALGAS_headerKind joker_3763_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_5.readProperty_mSuperWeakReferenceTypeName (), joker_3599_3, joker_3599_2, joker_3599_1, var_typeKindEnum_3387, joker_3629_5, joker_3629_4, joker_3629_3, joker_3629_2, joker_3629_1, var_inheritedGetterMap_3425, var_inheritedSetterMap_3463, var_inheritedMethodMap_3509, joker_3717_9, joker_3717_8, joker_3717_7, joker_3717_6, joker_3717_5, joker_3717_4, joker_3717_3, joker_3717_2, joker_3717_1, var_generateHeaderInSeparateFile_2916, joker_3763_4, joker_3763_3, joker_3763_2, joker_3763_1, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 71)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_typeKindEnum_3387.getter_isWeakReferenceType (SOURCE_FILE ("type-weak-reference.galgas", 84)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 84)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_weakReferenceDeclarationAST temp_7 = object ;
        const GALGAS_weakReferenceDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperWeakReferenceTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)).add_operation (GALGAS_string (" should be a weak reference type"), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)), fixItArray9  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 85)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_weakReferenceIndex_4149 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mWeakReferenceTypeName (), var_weakReferenceIndex_4149 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 89)) ;
  }
  GALGAS_constructorMap var_constructorMap_4208 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 95)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_11 = object ;
  var_constructorMap_4208.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nil"), temp_11.readProperty_mWeakReferenceTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 97)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 98)), GALGAS_bool (false), var_weakReferenceIndex_4149, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 96)) ;
  }
  GALGAS_getterMap var_getterMap_4402 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 103)) ;
  GALGAS_setterMap var_setterMap_4434 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 104)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4482 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 105)) ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_12 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_12.readProperty_mWeakReferenceTypeName (), var_getterMap_4402, var_setterMap_4434, var_instanceMethodMap_4482, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 106)) ;
  }
  cEnumerator_getterMap enumerator_4794 (var_getterMap_4402, kENUMERATION_UP) ;
  while (enumerator_4794.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray13 ;
    inCompiler->emitSemanticError (enumerator_4794.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak referencev does not support extension"), fixItArray13  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 118)) ;
    enumerator_4794.gotoNextObject () ;
  }
  cEnumerator_setterMap enumerator_4896 (var_setterMap_4434, kENUMERATION_UP) ;
  while (enumerator_4896.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (enumerator_4896.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak referencev does not support extension"), fixItArray14  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 121)) ;
    enumerator_4896.gotoNextObject () ;
  }
  cEnumerator_instanceMethodMap enumerator_4998 (var_instanceMethodMap_4482, kENUMERATION_UP) ;
  while (enumerator_4998.hasCurrentObject ()) {
    TC_Array <C_FixItDescription> fixItArray15 ;
    inCompiler->emitSemanticError (enumerator_4998.current_lkey (HERE).readProperty_location (), GALGAS_string ("a weak reference does not support extension"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 124)) ;
    enumerator_4998.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_classIndex_5216 ;
  {
  const GALGAS_weakReferenceDeclarationAST temp_16 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_16.readProperty_mClassTypeName (), var_classIndex_5216 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 127)) ;
  }
  {
  const GALGAS_weakReferenceDeclarationAST temp_17 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_18 = object ;
  const GALGAS_weakReferenceDeclarationAST temp_19 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_17.readProperty_mWeakReferenceTypeName (), temp_18.readProperty_mIsPredefined (), GALGAS_bool (true), var_superClassIndex_2875, GALGAS_typeKindEnum::constructor_weakReferenceType (var_classIndex_5216  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 133)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 135)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 136)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 137)), var_constructorMap_4208, GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 139)), GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 140)), GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 141)), GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 142)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 143)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 144)), GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-weak-reference.galgas", 145)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 146)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 147)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 148)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 149)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 150)), var_generateHeaderInSeparateFile_2916, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 152)), GALGAS_string ("nil"), GALGAS_string ("weak-reference-").add_operation (temp_19.readProperty_mWeakReferenceTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-weak-reference.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 154)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-weak-reference.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 128)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                               extensionMethod_weakReferenceDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceDeclarationAST_enterInSemanticContext (defineExtensionMethod_weakReferenceDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceDeclarationAST * object = (const cPtr_weakReferenceDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceDeclarationAST) ;
  const GALGAS_weakReferenceDeclarationAST temp_0 = object ;
  GALGAS_lstring var_weakRefTypeNameForUsefulness_6755 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 172)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_weakRefTypeNameForUsefulness_6755, var_weakRefTypeNameForUsefulness_6755, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 173)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_weakReferenceDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_weakReferenceDeclarationAST temp_3 = object ;
      GALGAS_lstring var_superWeakRefNameForUsefulness_7009 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperWeakReferenceTypeName (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 175)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_weakRefTypeNameForUsefulness_6755, var_superWeakRefNameForUsefulness_7009 COMMA_SOURCE_FILE ("type-weak-reference.galgas", 176)) ;
      }
    }
  }
  const GALGAS_weakReferenceDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_7238 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mWeakReferenceTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 179)) ;
  const GALGAS_weakReferenceDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry temp_6 ;
  const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, temp_5.readProperty_mSuperWeakReferenceTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 182)) ;
  }else if (kBoolFalse == test_7) {
    const GALGAS_weakReferenceDeclarationAST temp_8 = object ;
    temp_6 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mSuperWeakReferenceTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 183)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_superClassEntry_7375 = temp_6 ;
  GALGAS_typedPropertyList var_allAttributeList_7783 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_superClassEntry_7375.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-weak-reference.galgas", 189)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      var_allAttributeList_7783 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 190)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_7889 = GALGAS_bool (false) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_weakReferenceDeclarationAST temp_11 = object ;
        test_10 = GALGAS_bool (kIsStrictSup, temp_11.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 192)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_weakReferenceDeclarationAST temp_12 = object ;
          cEnumerator_lstringlist enumerator_7963 (temp_12.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_7963.hasCurrentObject ()) {
            enumGalgasBool test_13 = kBoolTrue ;
            if (kBoolTrue == test_13) {
              test_13 = GALGAS_bool (kIsEqual, enumerator_7963.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_13) {
                enumGalgasBool test_14 = kBoolTrue ;
                if (kBoolTrue == test_14) {
                  test_14 = var_generatedInSeparateFileFeature_7889.boolEnum () ;
                  if (kBoolTrue == test_14) {
                    TC_Array <C_FixItDescription> fixItArray15 ;
                    inCompiler->emitSemanticError (enumerator_7963.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray15  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 196)) ;
                  }
                }
                var_generatedInSeparateFileFeature_7889 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_13) {
              TC_Array <C_FixItDescription> fixItArray16 ;
              inCompiler->emitSemanticError (enumerator_7963.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray16  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 200)) ;
            }
            enumerator_7963.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    var_allAttributeList_7783 = var_superClassEntry_7375.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 205)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_weakReferenceDeclarationAST temp_18 = object ;
      test_17 = GALGAS_bool (kIsStrictSup, temp_18.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 206)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_weakReferenceDeclarationAST temp_19 = object ;
        cEnumerator_lstringlist enumerator_8502 (temp_19.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_8502.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (enumerator_8502.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray20  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 208)) ;
          enumerator_8502.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_8707 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-weak-reference.galgas", 213)) ;
  GALGAS_propertyIndexMap var_attributeMap_8749 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-weak-reference.galgas", 214)) ;
  const GALGAS_weakReferenceDeclarationAST temp_21 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8818 (temp_21.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8818.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_t_8854 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_8818.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 216)) ;
    GALGAS_bool var_hasSelector_8957 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8981 (enumerator_8818.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_22 = var_hasSelector_8957.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 218)).isValidAndTrue () ;
    if (enumerator_8981.hasCurrentObject () && bool_22) {
      while (enumerator_8981.hasCurrentObject () && bool_22) {
        var_hasSelector_8957 = GALGAS_bool (kIsEqual, enumerator_8981.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_8981.gotoNextObject () ;
        if (enumerator_8981.hasCurrentObject ()) {
          bool_22 = var_hasSelector_8957.operator_not (SOURCE_FILE ("type-weak-reference.galgas", 218)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_8707.addAssign_operation (var_t_8854, enumerator_8818.current_mPropertyName (HERE), enumerator_8818.current_mIsPublic (HERE), var_hasSelector_8957  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 221)) ;
    var_allAttributeList_7783.addAssign_operation (var_t_8854, enumerator_8818.current_mPropertyName (HERE), enumerator_8818.current_mIsPublic (HERE), var_hasSelector_8957  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 226)) ;
    {
    var_attributeMap_8749.setter_insertKey (enumerator_8818.current_mPropertyName (HERE), var_t_8854, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 231)) ;
    }
    enumerator_8818.gotoNextObject () ;
  }
  const GALGAS_weakReferenceDeclarationAST temp_23 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_referenceClassType_9370 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_23.readProperty_mClassTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 234)) ;
  const GALGAS_weakReferenceDeclarationAST temp_24 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("weak reference ").add_operation (temp_24.readProperty_mWeakReferenceTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 239)), GALGAS_weakReferenceTypeForGeneration::constructor_new (var_selfType_7238, var_referenceClassType_9370, var_superClassEntry_7375, var_allAttributeList_7783, var_typedAttributeList_8707, var_selfType_7238.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 246))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 240))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 238)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_weakReferenceDeclarationAST.mSlotID,
                                         extensionMethod_weakReferenceDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceDeclarationAST_semanticAnalysis (defineExtensionMethod_weakReferenceDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                  GALGAS_string & outArgument_outHeader,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceTypeForGeneration * object = (const cPtr_weakReferenceTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_weakReferenceTypeForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 268)).operator_not (SOURCE_FILE ("type-weak-reference.galgas", 268)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_weakReferenceTypeForGeneration temp_2 = object ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 269)) ;
    }
  }
  const GALGAS_weakReferenceTypeForGeneration temp_3 = object ;
  extensionMethod_addHeaderFileName (temp_3.readProperty_mReferenceClassType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 271)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_4 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_5 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_6 = object ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = temp_6.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 276)).boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_8) {
    const GALGAS_weakReferenceTypeForGeneration temp_9 = object ;
    temp_7 = temp_9.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 276)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_10 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeHeader_31_ (inCompiler, temp_4.readProperty_mReferenceClassType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 274)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 275)), temp_7, GALGAS_bool (kIsNotEqual, temp_10.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 277)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 273))) ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_12 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_13 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_14 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_15 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_16 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_17 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_18 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_19 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_20 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_21 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_22 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_23 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_11.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 280)), temp_12.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 281)), temp_13.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 282)), temp_14.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 283)), temp_15.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 284)), temp_16.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 285)), temp_17.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 286)), temp_18.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 287)), temp_19.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 288)), temp_20.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 289)), temp_21.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 290)), temp_22.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 291)), temp_23.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 292)) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 279))), inCompiler  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 279)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration.mSlotID,
                                              extensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_weakReferenceTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@weakReferenceTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                         const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                         GALGAS_string & outArgument_outImplementation,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_weakReferenceTypeForGeneration * object = (const cPtr_weakReferenceTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_weakReferenceTypeForGeneration) ;
  const GALGAS_weakReferenceTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 303)) ;
  const GALGAS_weakReferenceTypeForGeneration temp_1 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_2 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_3 = object ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = temp_3.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-weak-reference.galgas", 307)).boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_5) {
    const GALGAS_weakReferenceTypeForGeneration temp_6 = object ;
    temp_4 = temp_6.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 307)) ;
  }
  const GALGAS_weakReferenceTypeForGeneration temp_7 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_8 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_9 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_10 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_11 = object ;
  const GALGAS_weakReferenceTypeForGeneration temp_12 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_weakReferenceClassTypeSpecificImplementation (inCompiler, temp_1.readProperty_mReferenceClassType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 305)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 306)), temp_4, temp_7.readProperty_mTypedAttributeList (), temp_8.readProperty_mAllTypedPropertyList (), temp_9.readProperty_mAllTypedPropertyList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), temp_10.readProperty_mAllTypedPropertyList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 310)).substract_operation (temp_11.readProperty_mTypedAttributeList ().getter_length (SOURCE_FILE ("type-weak-reference.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310))  COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 310)), GALGAS_bool (kIsNotEqual, temp_12.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-weak-reference.galgas", 311)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-weak-reference.galgas", 304))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_weakReferenceTypeForGeneration.mSlotID,
                                                     extensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_weakReferenceTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_weakReferenceTypeForGeneration_appendSpecificImplementation, NULL) ;

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
  const GALGAS_enumDeclarationAST temp_0 = object ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2803 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 74)), temp_1.readProperty_mEnumTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 74)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2803, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 75)) ;
  }
  GALGAS_bool var_circularReference_3045 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_3092 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_3045.isValidAndTrue () ;
  if (enumerator_3092.hasCurrentObject () && bool_4) {
    while (enumerator_3092.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_3167 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_3194 (enumerator_3092.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_3167.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
      if (enumerator_3194.hasCurrentObject () && bool_5) {
        while (enumerator_3194.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_3281 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3194.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 81)), enumerator_3194.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 81)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_3281.readProperty_string ().objectCompare (var_key_2803.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_3167 = GALGAS_bool (true) ;
            }
          }
          enumerator_3194.gotoNextObject () ;
          if (enumerator_3194.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_3167.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_3167.operator_not (SOURCE_FILE ("type-enum.galgas", 86)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_3045 = GALGAS_bool (false) ;
        }
      }
      enumerator_3092.gotoNextObject () ;
      if (enumerator_3092.hasCurrentObject ()) {
        bool_4 = var_circularReference_3045.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_3045.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = object ;
      cEnumerator_enumConstantList enumerator_3643 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_3643.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_3690 (enumerator_3643.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_3690.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_3752 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3690.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_3690.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_3752.readProperty_string ().objectCompare (var_key_2803.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2803, var_propertyKey_3752 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
              }
            }
          }
          enumerator_3690.gotoNextObject () ;
        }
        enumerator_3643.gotoNextObject () ;
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
  GALGAS_constructorMap var_constructorMap_4672 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_setterMap var_setterMap_4704 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4752 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_classMethodMap var_classMethodMap_4794 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 116)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_4842 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 117)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumTypeEntry_4978 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_4978 COMMA_SOURCE_FILE ("type-enum.galgas", 119)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5033 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 121)) ;
  GALGAS_bool var_hasAssociatedValues_5070 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_5130 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_5130.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_5208 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 124)) ;
    GALGAS_functionSignature var_argumentTypeList_5257 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 125)) ;
    cEnumerator__32_lstringlist enumerator_5293 (enumerator_5130.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5293.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_5434 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5293.current_mValue_30_ (HERE), var_associatedTypeEntry_5434 COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      }
      var_argumentTypeList_5257.addAssign_operation (enumerator_5293.current_mValue_31_ (HERE), var_associatedTypeEntry_5434, enumerator_5293.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
      var_associatedTypeList_5208.addAssign_operation (var_associatedTypeEntry_5434  COMMA_SOURCE_FILE ("type-enum.galgas", 129)) ;
      var_hasAssociatedValues_5070 = GALGAS_bool (true) ;
      enumerator_5293.gotoNextObject () ;
    }
    {
    var_constantMap_5033.setter_insertKey (enumerator_5130.current_mConstantName (HERE), var_constantMap_5033.getter_count (SOURCE_FILE ("type-enum.galgas", 132)), var_associatedTypeList_5208, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
    }
    {
    var_constructorMap_4672.setter_insertOrReplace (enumerator_5130.current_mConstantName (HERE), var_argumentTypeList_5257, GALGAS_bool (false), var_enumTypeEntry_4978 COMMA_SOURCE_FILE ("type-enum.galgas", 133)) ;
    }
    enumerator_5130.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = object ;
  cEnumerator_enumConstantList enumerator_5883 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_5883.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_5959 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
    cEnumerator__32_lstringlist enumerator_5995 (enumerator_5883.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5995.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_6136 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5995.current_mValue_30_ (HERE), var_associatedTypeEntry_6136 COMMA_SOURCE_FILE ("type-enum.galgas", 144)) ;
      }
      var_argumentTypeList_5959.addAssign_operation (GALGAS_bool (false), enumerator_5995.current_mValue_31_ (HERE), var_associatedTypeEntry_6136, enumerator_5995.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
      enumerator_5995.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_4842.setter_insertKey (enumerator_5883.current_mConstantName (HERE), var_argumentTypeList_5959, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 147)) ;
    }
    enumerator_5883.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_6396 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_6396.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_6396.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 154)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6532 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 155)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_6590 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 156)) ;
        cEnumerator__32_lstringlist enumerator_6628 (enumerator_6396.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6628.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_6771 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6628.current_mValue_30_ (HERE), var_associatedTypeEntry_6771 COMMA_SOURCE_FILE ("type-enum.galgas", 158)) ;
          }
          var_argumentTypeList_6590.addAssign_operation (enumerator_6628.current_mValue_31_ (HERE), var_associatedTypeEntry_6771, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 159)), enumerator_6628.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 159)) ;
          var_associatedTypeList_6532.addAssign_operation (var_associatedTypeEntry_6771  COMMA_SOURCE_FILE ("type-enum.galgas", 160)) ;
          var_hasAssociatedValues_5070 = GALGAS_bool (true) ;
          enumerator_6628.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_4752.setter_insertKey (enumerator_6396.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 165)), var_argumentTypeList_6590, enumerator_6396.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 169)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-enum.galgas", 170)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 163)) ;
        }
      }
    }
    enumerator_6396.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_7300 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7300, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 176)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = object ;
  cEnumerator_enumConstantList enumerator_7324 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7324.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_7300, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_7324.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 181)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 178)) ;
    }
    enumerator_7324.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.readProperty_mEnumTypeName (), var_getterMap_7300, var_setterMap_4704, var_instanceMethodMap_4752, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 187)) ;
  }
  GALGAS_string var_defaultConstructorName_7934 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mDefaultConstantName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8093 ;
      const GALGAS_enumDeclarationAST temp_9 = object ;
      GALGAS_uint joker_8068 ; // Joker input parameter
      var_constantMap_5033.method_searchKey (temp_9.readProperty_mDefaultConstantName (), joker_8068, var_associatedTypeList_8093, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 201)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_8093.getter_length (SOURCE_FILE ("type-enum.galgas", 202)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = object ;
          var_defaultConstructorName_7934 = temp_11.readProperty_mDefaultConstantName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mDefaultConstantName ().readProperty_location (), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 205)) ;
      }
    }
  }
  {
  const GALGAS_enumDeclarationAST temp_14 = object ;
  const GALGAS_enumDeclarationAST temp_15 = object ;
  const GALGAS_enumDeclarationAST temp_16 = object ;
  const GALGAS_enumDeclarationAST temp_17 = object ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_5070.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 236)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 236)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_14.readProperty_mEnumTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 213)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 214)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 216)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 217)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 218)), var_constructorMap_4672, var_getterMap_7300, var_setterMap_4704, var_instanceMethodMap_4752, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 223)), var_optionalMethodMap_4842, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 225)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 226)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 226)) COMMA_SOURCE_FILE ("type-enum.galgas", 226)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 227)), var_constantMap_5033, temp_16.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 230)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 231)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 233)), var_defaultConstructorName_7934, GALGAS_string ("enum-").add_operation (temp_17.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 235)), temp_18, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 209)) ;
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
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_9857 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 253)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9857, var_nameForUsefulness_9857, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 254)) ;
  }
  GALGAS_stringlist var_constantList_10024 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 256)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_10107 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 257)) ;
  GALGAS_constantIndexMap var_constantMap_10130 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 258)) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_10204 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_10204.hasCurrentObject ()) {
    var_constantList_10024.addAssign_operation (enumerator_10204.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 260)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_10324 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 261)) ;
    GALGAS_stringset var_associatedValueNameSet_10371 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 262)) ;
    cEnumerator__32_lstringlist enumerator_10401 (enumerator_10204.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_10401.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_10479 = function_typeNameForUsefulEntitiesGraph (enumerator_10401.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 264)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9857, var_propertyTypeNameForUsefulness_10479 COMMA_SOURCE_FILE ("type-enum.galgas", 265)) ;
      }
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_10643 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_10401.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 266)) ;
      var_associatedTypeList_10324.addAssign_operation (var_associatedTypeEntry_10643  COMMA_SOURCE_FILE ("type-enum.galgas", 267)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_10371.getter_hasKey (enumerator_10401.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 268)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_10401.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 269)) ;
        }
      }
      var_associatedValueNameSet_10371.addAssign_operation (enumerator_10401.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 271)) ;
      enumerator_10401.gotoNextObject () ;
    }
    {
    var_constantMap_10130.setter_insertKey (enumerator_10204.current_mConstantName (HERE), var_constantMap_10130.getter_count (SOURCE_FILE ("type-enum.galgas", 273)), var_associatedTypeList_10324, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 273)) ;
    }
    var_enumConstantListForGeneration_10107.addAssign_operation (enumerator_10204.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_10324  COMMA_SOURCE_FILE ("type-enum.galgas", 274)) ;
    enumerator_10204.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_11126 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mEnumTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 277)) ;
  const GALGAS_enumDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 279)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_11126, var_enumConstantListForGeneration_10107  COMMA_SOURCE_FILE ("type-enum.galgas", 280))  COMMA_SOURCE_FILE ("type-enum.galgas", 278)) ;
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
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Enumeration\n"
    "  public: typedef enum {\n"
    "    kNotBuilt" ;
  GALGAS_uint index_652_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_652 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_652.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_652.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_652_.increment () ;
      enumerator_652.gotoNextObject () ;
    }
  }
  result << "\n"
    "  } enumeration ;\n"
    "  \n"
    "//--------------------------------- Private data member\n" ;
  const enumGalgasBool test_0 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  private: AC_GALGAS_enumAssociatedValues mAssociatedValues ;\n"
      "  public: VIRTUAL_IN_DEBUG const cEnumAssociatedValues * unsafePointer (void) const {\n"
      "    return mAssociatedValues.unsafePointer () ;\n"
      "  }\n"
      "\n" ;
  }else if (kBoolFalse == test_0) {
  }
  result << "  private: enumeration mEnum ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public: VIRTUAL_IN_DEBUG inline bool isValid (void) const { return kNotBuilt != mEnum ; }\n"
    "  public: VIRTUAL_IN_DEBUG inline void drop (void) { mEnum = kNotBuilt ; }\n"
    "  public: inline enumeration enumValue (void) const { return mEnum ; }\n"
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
    GALGAS_uint index_290_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_290 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_290.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_290.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//----------------------------------------------------------------------------------------------------------------------\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_631_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_631 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_631.hasCurrentObject ()) {
              result << "  public: const GALGAS_" ;
              result << enumerator_631.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_631_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_631_idx.increment () ;
              enumerator_631.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public: cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_916_idx (0) ;
          if (enumerator_290.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapEntryList enumerator_916 (enumerator_290.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_916.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_916.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_916_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_916.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_916_idx.increment () ;
              enumerator_916.gotoNextObject () ;
            }
          }
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n"
            "  public: virtual void description (" ;
          columnMarker = result.currentColumn () ;
          result << "C_String & ioString,\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "const int32_t inIndentation) const ;\n"
            "  public: virtual typeComparisonResult compare (const cEnumAssociatedValues * inOperand) const ;\n"
            "\n"
            "  public: virtual ~ cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_290.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_290_.increment () ;
        enumerator_290.gotoNextObject () ;
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
  GALGAS_uint index_65_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_65 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_65.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_65.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 3)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_432_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_432 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_432.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_432.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_432_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 7)).stringValue () ;
            if (enumerator_432.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_432_idx.increment () ;
            enumerator_432.gotoNextObject () ;
          }
        }
        result << "\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) :\n"
          "cEnumAssociatedValues (THERE)" ;
        GALGAS_uint index_674_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_674 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_674.hasCurrentObject ()) {
            result << ",\n"
              "mAssociatedValue" ;
            result << index_674_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << " (inAssociatedValue" ;
            result << index_674_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 13)).stringValue () ;
            result << ")" ;
            index_674_idx.increment () ;
            enumerator_674.gotoNextObject () ;
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
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::description (" ;
        columnMarker = result.currentColumn () ;
        result << "C_String & ioString,\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "const int32_t inIndentation) const {\n"
          "  ioString << \"(\\n\" ;\n" ;
        GALGAS_uint index_1181_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1181 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1181.hasCurrentObject ()) {
            result << "  mAssociatedValue" ;
            result << index_1181_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 22)).stringValue () ;
            result << ".description (ioString, inIndentation) ;\n" ;
            index_1181_idx.increment () ;
            enumerator_1181.gotoNextObject () ;
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
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << "::compare (const cEnumAssociatedValues * inOperand) const {\n"
          "  const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = dynamic_cast<const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_65.current_mConstantName (HERE).stringValue () ;
        result << " *> (inOperand) ;\n"
          "  macroValidPointer (ptr) ;\n"
          "  typeComparisonResult result = kOperandEqual ;\n" ;
        GALGAS_uint index_1915_idx (0) ;
        if (enumerator_65.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_1915 (enumerator_65.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_1915.hasCurrentObject ()) {
            result << "  if (result == kOperandEqual) {\n"
              "    result = mAssociatedValue" ;
            result << index_1915_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ".objectCompare (ptr->mAssociatedValue" ;
            result << index_1915_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 33)).stringValue () ;
            result << ") ;\n"
              "  }\n" ;
            index_1915_idx.increment () ;
            enumerator_1915.gotoNextObject () ;
          }
        }
        result << "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      index_65_.increment () ;
      enumerator_65.gotoNextObject () ;
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
  GALGAS_uint index_2479_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_2479 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2479.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_2479.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 54)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2479.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 55)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "UNUSED_LOCATION_ARGS" ;
      }else if (kBoolFalse == test_2) {
        GALGAS_uint index_2869_idx (0) ;
        if (enumerator_2479.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_2869 (enumerator_2479.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_2869.hasCurrentObject ()) {
            result << "const GALGAS_" ;
            result << enumerator_2869.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            result << " & inAssociatedValue" ;
            result << index_2869_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 59)).stringValue () ;
            if (enumerator_2869.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_2869_idx.increment () ;
            enumerator_2869.gotoNextObject () ;
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
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2479.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 66)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  result.mEnum = kEnum_" ;
        result << enumerator_2479.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 67)).stringValue () ;
        result << " ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "  if (" ;
        GALGAS_uint index_3279_idx (0) ;
        if (enumerator_2479.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3279 (enumerator_2479.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3279.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3279_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 71)).stringValue () ;
            result << ".isValid ()" ;
            if (enumerator_3279.hasNextObject ()) {
              result << " && " ;
            }
            index_3279_idx.increment () ;
            enumerator_3279.gotoNextObject () ;
          }
        }
        result << ") {\n"
          "    result.mEnum = kEnum_" ;
        result << enumerator_2479.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 75)).stringValue () ;
        result << " ;\n"
          "    cEnumAssociatedValues * ptr = NULL ;\n"
          "    macroMyNew (ptr, cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_2479.current_mConstantName (HERE).stringValue () ;
        result << " (" ;
        GALGAS_uint index_3640_idx (0) ;
        if (enumerator_2479.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_3640 (enumerator_2479.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_3640.hasCurrentObject ()) {
            result << "inAssociatedValue" ;
            result << index_3640_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 79)).stringValue () ;
            if (enumerator_3640.hasNextObject ()) {
              result << ", " ;
            }
            index_3640_idx.increment () ;
            enumerator_3640.gotoNextObject () ;
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
      index_2479_.increment () ;
      enumerator_2479.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3945_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_3945 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3945.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, enumerator_3945.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 92)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::method_" ;
        result << enumerator_3945.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 94)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_4274_idx (0) ;
        if (enumerator_3945.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4274 (enumerator_3945.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4274.hasCurrentObject ()) {
            result << "GALGAS_" ;
            result << enumerator_4274.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << " & outAssociatedValue" ;
            result << index_4274_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 96)).stringValue () ;
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            index_4274_idx.increment () ;
            enumerator_4274.gotoNextObject () ;
          }
        }
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "C_Compiler * inCompiler\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_LOCATION_ARGS) const {\n"
          "  if (mEnum != kEnum_" ;
        result << enumerator_3945.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 100)).stringValue () ;
        result << ") {\n" ;
        GALGAS_uint index_4580_idx (0) ;
        if (enumerator_3945.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_4580 (enumerator_3945.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_4580.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_4580_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 102)).stringValue () ;
            result << ".drop () ;\n" ;
            index_4580_idx.increment () ;
            enumerator_4580.gotoNextObject () ;
          }
        }
        result << "    C_String s ;\n"
          "    s << \"method @" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " " ;
        result << enumerator_3945.current_mConstantName (HERE).stringValue () ;
        result << " invoked with an invalid enum value\" ;\n"
          "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
          "  }else{\n"
          "    const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3945.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_3945.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_5083_idx (0) ;
        if (enumerator_3945.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_5083 (enumerator_3945.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_5083.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_5083_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_5083_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 110)).stringValue () ;
            result << " ;\n" ;
            index_5083_idx.increment () ;
            enumerator_5083.gotoNextObject () ;
          }
        }
        result << "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_4) {
      }
      index_3945_.increment () ;
      enumerator_3945.gotoNextObject () ;
    }
  }
  GALGAS_uint index_5281_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5281 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5281.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::optional_" ;
      result << enumerator_5281.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 120)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_5568_idx (0) ;
      if (enumerator_5281.current_mAssociatedValueTypeList (HERE).isValid ()) {
        cEnumerator_unifiedTypeMapEntryList enumerator_5568 (enumerator_5281.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
        while (enumerator_5568.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_5568.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          result << " & outAssociatedValue" ;
          result << index_5568_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 123)).stringValue () ;
          if (enumerator_5568.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_5568_idx.increment () ;
          enumerator_5568.gotoNextObject () ;
        }
      }
      result << ") const {\n"
        "  const bool ok = mEnum == kEnum_" ;
      result << enumerator_5281.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 128)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, enumerator_5281.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 129)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "  if (ok) {\n"
          "    const auto * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5281.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n"
          "    // const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5281.current_mConstantName (HERE).stringValue () ;
        result << " * ptr = (const cEnumAssociatedValues_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_5281.current_mConstantName (HERE).stringValue () ;
        result << " *) unsafePointer () ;\n" ;
        GALGAS_uint index_6227_idx (0) ;
        if (enumerator_5281.current_mAssociatedValueTypeList (HERE).isValid ()) {
          cEnumerator_unifiedTypeMapEntryList enumerator_6227 (enumerator_5281.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
          while (enumerator_6227.hasCurrentObject ()) {
            result << "    outAssociatedValue" ;
            result << index_6227_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " = ptr->mAssociatedValue" ;
            result << index_6227_idx.getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 134)).stringValue () ;
            result << " ;\n" ;
            index_6227_idx.increment () ;
            enumerator_6227.gotoNextObject () ;
          }
        }
        result << "  }\n" ;
      }else if (kBoolFalse == test_5) {
      }
      result << "  return ok ;\n"
        "}\n"
        "\n" ;
      index_5281_.increment () ;
      enumerator_5281.gotoNextObject () ;
    }
  }
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 144)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_6705_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6705 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6705.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_6705.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 147)).stringValue () ;
      index_6705_.increment () ;
      enumerator_6705.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_6825_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_6825 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6825.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_6825.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 155)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_6825.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 156)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_6825_.increment () ;
      enumerator_6825.gotoNextObject () ;
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
  GALGAS_bool var_hasAssociatedValues_13142 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_13184 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_13142.operator_not (SOURCE_FILE ("type-enum.galgas", 333)).isValidAndTrue () ;
  if (enumerator_13184.hasCurrentObject () && bool_1) {
    while (enumerator_13184.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_13142 = GALGAS_bool (kIsStrictSup, enumerator_13184.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13184.gotoNextObject () ;
      if (enumerator_13184.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_13142.operator_not (SOURCE_FILE ("type-enum.galgas", 333)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 337)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 338)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_13142 COMMA_SOURCE_FILE ("type-enum.galgas", 336))) ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  const GALGAS_enumTypeForGeneration temp_6 = object ;
  const GALGAS_enumTypeForGeneration temp_7 = object ;
  const GALGAS_enumTypeForGeneration temp_8 = object ;
  const GALGAS_enumTypeForGeneration temp_9 = object ;
  const GALGAS_enumTypeForGeneration temp_10 = object ;
  const GALGAS_enumTypeForGeneration temp_11 = object ;
  const GALGAS_enumTypeForGeneration temp_12 = object ;
  const GALGAS_enumTypeForGeneration temp_13 = object ;
  const GALGAS_enumTypeForGeneration temp_14 = object ;
  const GALGAS_enumTypeForGeneration temp_15 = object ;
  const GALGAS_enumTypeForGeneration temp_16 = object ;
  const GALGAS_enumTypeForGeneration temp_17 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 343)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 344)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 345)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 346)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 347)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 348)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 349)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 350)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 351)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 352)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 353)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 354)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 355)) COMMA_SOURCE_FILE ("type-enum.galgas", 342))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 342)) ;
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
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14540 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14498.operator_not (SOURCE_FILE ("type-enum.galgas", 367)).isValidAndTrue () ;
  if (enumerator_14540.hasCurrentObject () && bool_1) {
    while (enumerator_14540.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14498 = GALGAS_bool (kIsStrictSup, enumerator_14540.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 368)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14540.gotoNextObject () ;
      if (enumerator_14540.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14498.operator_not (SOURCE_FILE ("type-enum.galgas", 367)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14700 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_14700.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_14741 (enumerator_14700.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14741.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_14741.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 372)) ;
      enumerator_14741.gotoNextObject () ;
    }
    enumerator_14700.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 376)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 377)), temp_5.readProperty_mConstantList (), var_hasAssociatedValues_14498 COMMA_SOURCE_FILE ("type-enum.galgas", 375))) ;
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
  GALGAS_bool var_hasAssociatedValues_15368 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_15410 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_15368.operator_not (SOURCE_FILE ("type-enum.galgas", 391)).isValidAndTrue () ;
  if (enumerator_15410.hasCurrentObject () && bool_1) {
    while (enumerator_15410.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_15368 = GALGAS_bool (kIsStrictSup, enumerator_15410.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 392)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_15410.gotoNextObject () ;
      if (enumerator_15410.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_15368.operator_not (SOURCE_FILE ("type-enum.galgas", 391)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 394)) ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 396)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 397)), temp_5.readProperty_mConstantList (), var_hasAssociatedValues_15368 COMMA_SOURCE_FILE ("type-enum.galgas", 395))) ;
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
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_7520 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 190)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 190)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7520, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 191)) ;
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
  GALGAS_getterMap var_getterMap_8412 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8412, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 204)) ;
  }
  GALGAS_constructorMap var_constructorMap_8451 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 205)) ;
  GALGAS_setterMap var_setterMap_8483 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 206)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8531 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 207)) ;
  GALGAS_classMethodMap var_classMethodMap_8573 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 208)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  cEnumerator_externTypeConstructorList enumerator_8651 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_8651.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_8796 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8651.current_mResultTypeName (HERE), var_returnedTypeEntry_8796 COMMA_SOURCE_FILE ("type-extern.galgas", 211)) ;
    }
    GALGAS_functionSignature var_arguments_8841 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 213)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8917 (enumerator_8651.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_8917.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_9056 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8917.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_9056 COMMA_SOURCE_FILE ("type-extern.galgas", 215)) ;
      }
      var_arguments_8841.addAssign_operation (enumerator_8917.current_mFormalSelector (HERE), var_argumentTypeEntry_9056, enumerator_8917.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 216)) ;
      enumerator_8917.gotoNextObject () ;
    }
    {
    var_constructorMap_8451.setter_insertKey (enumerator_8651.current_mConstructorName (HERE), var_arguments_8841, GALGAS_bool (true), var_returnedTypeEntry_8796, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 219)) ;
    }
    enumerator_8651.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  cEnumerator_externTypeGetterList enumerator_9375 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_9375.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_9515 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9375.current_mResultTypeName (HERE), var_returnedTypeEntry_9515 COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }
    GALGAS_functionSignature var_arguments_9560 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 230)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_9636 (enumerator_9375.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_9636.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_9775 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9636.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_9775 COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      }
      var_arguments_9560.addAssign_operation (enumerator_9636.current_mFormalSelector (HERE), var_argumentTypeEntry_9775, enumerator_9636.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 233)) ;
      enumerator_9636.gotoNextObject () ;
    }
    {
    var_getterMap_8412.setter_insertKey (enumerator_9375.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 238)), var_arguments_9560, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_bool (true), var_returnedTypeEntry_9515, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
    }
    enumerator_9375.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  cEnumerator_externTypeSetterList enumerator_10199 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_10199.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10284 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 249)) ;
    cEnumerator_formalParameterListAST enumerator_10387 (enumerator_10199.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10387.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_10578 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10387.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10578 COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
      }
      var_routineSignature_10284.addAssign_operation (enumerator_10387.current_mFormalSelector (HERE), var_parameterTypeIndex_10578, enumerator_10387.current_mFormalArgumentPassingMode (HERE), enumerator_10387.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      enumerator_10387.gotoNextObject () ;
    }
    {
    var_setterMap_8483.setter_insertKey (enumerator_10199.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 261)), var_routineSignature_10284, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 264)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }
    enumerator_10199.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  cEnumerator_externTypeMethodList enumerator_11023 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_11023.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_11082 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 270)) ;
    cEnumerator_formalParameterListAST enumerator_11210 (enumerator_11023.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_11210.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_11289 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_11210.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_11289 COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      }
      var_routineSignature_11082.addAssign_operation (enumerator_11210.current_mFormalSelector (HERE), var_parameterTypeIndex_11289, enumerator_11210.current_mFormalArgumentPassingMode (HERE), enumerator_11210.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      enumerator_11210.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_8531.setter_insertKey (enumerator_11023.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 283)), var_routineSignature_11082, enumerator_11023.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-extern.galgas", 288)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
    }
    enumerator_11023.gotoNextObject () ;
  }
  {
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  const GALGAS_externTypeDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 297)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 298)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 300)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 301)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 302)), var_constructorMap_8451, var_getterMap_8412, var_setterMap_8483, var_instanceMethodMap_8531, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 307)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 308)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 309)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 310)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 311)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 314)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 315)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 317)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 319)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 319)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 293)) ;
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
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_13304 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 337)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13304, var_nameForUsefulness_13304, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 341)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mExternTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 343)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 342))  COMMA_SOURCE_FILE ("type-extern.galgas", 340)) ;
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
  const GALGAS_externTypeDeclarationForGeneration temp_0 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_1 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_2 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 366)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 367)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 365))) ;
  const GALGAS_externTypeDeclarationForGeneration temp_4 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_5 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_6 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_7 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_8 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_9 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_10 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_11 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_12 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_13 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_14 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_15 = object ;
  const GALGAS_externTypeDeclarationForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 372)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 375)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 376)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 377)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 378)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 379)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 382)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 383)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 384)) COMMA_SOURCE_FILE ("type-extern.galgas", 371))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 371)) ;
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
  const GALGAS_graphDeclarationAST temp_0 = object ;
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2530 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2530, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2530, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeEntry_3597 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_3597 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeEntry_3766 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_3766 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_3931 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_3931 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_4124 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_4124 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringListTypeEntry_4306 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_4306 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4400 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4400, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4439 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4471 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4519 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4561 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeEntry_4124, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeEntry_4306, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeEntry_4124, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeEntry_4306, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 143)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 147))  COMMA_SOURCE_FILE ("type-graph.galgas", 147)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 148)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 150)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 152)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 153)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 146)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 158)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 160)), var_associatedListTypeEntry_4124, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 162)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 159)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 165)), var_lstringListTypeEntry_4306, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 167)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 164)) ;
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 170))  COMMA_SOURCE_FILE ("type-graph.galgas", 170)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 171)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 175)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 176)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 169)) ;
  }
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180))  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 181)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 183)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 185)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 179)) ;
  }
  {
  var_instanceMethodMap_4519.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 190))  COMMA_SOURCE_FILE ("type-graph.galgas", 190)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 191)), var_formalParameterList_4652, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 195)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 189)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_2.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 201)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 209)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 217)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 225)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 233)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 241)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 251)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 261)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 269)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 277)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 285)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4400, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 297)) ;
  }
  {
  var_constructorMap_4439.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 308))  COMMA_SOURCE_FILE ("type-graph.galgas", 308)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)), GALGAS_bool (false), var_graphTypeEntry_3931, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 307)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 314)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 316)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 318)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 315)) ;
  cEnumerator_functionSignature enumerator_10712 (var_associatedListTypeEntry_4124.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 320)), kENUMERATION_UP) ;
  while (enumerator_10712.hasCurrentObject ()) {
    var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 322)), enumerator_10712.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 324)), enumerator_10712.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 321)) ;
    enumerator_10712.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_4 = object ;
  cEnumerator_graphInsertModifierList enumerator_10957 (temp_4.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_10957.hasCurrentObject ()) {
    {
    var_setterMap_4471.setter_insertOrReplace (enumerator_10957.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 330)), var_formalParameterList_4652, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 333)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 328)) ;
    }
    enumerator_10957.gotoNextObject () ;
  }
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 340))  COMMA_SOURCE_FILE ("type-graph.galgas", 340)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 341)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 342)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 339)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 348)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 349)), var_stringTypeEntry_3597, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 349)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 349)) ;
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 351))  COMMA_SOURCE_FILE ("type-graph.galgas", 351)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 352)), var_formalParameterList_4652, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 355)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 350)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 360)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 361)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 361)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 361)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 362)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 362)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 362)) ;
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 364))  COMMA_SOURCE_FILE ("type-graph.galgas", 364)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 365)), var_formalParameterList_4652, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 368)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 363)) ;
  }
  var_formalParameterList_4652 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 373)) ;
  var_formalParameterList_4652.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 374)), var_lstringTypeEntry_3766, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 374)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 374)) ;
  {
  var_setterMap_4471.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 376))  COMMA_SOURCE_FILE ("type-graph.galgas", 376)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 377)), var_formalParameterList_4652, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 375)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mGraphTypeName (), var_getterMap_4400, var_setterMap_4471, var_instanceMethodMap_4519, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 385)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = object ;
  const GALGAS_graphDeclarationAST temp_7 = object ;
  const GALGAS_graphDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.readProperty_mGraphTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 401)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 404)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 406)), var_constructorMap_4439, var_getterMap_4400, var_setterMap_4471, var_instanceMethodMap_4519, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 415)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 417)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 418)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 419)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 421)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_8.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 423)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 424)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 397)) ;
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
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_14888 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14888, var_nameForUsefulness_14888, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 442)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_15056 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 443)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14888, var_associatedTypeNameForUsefulness_15056 COMMA_SOURCE_FILE ("type-graph.galgas", 444)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_15235 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mGraphTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 446)) ;
  const GALGAS_graphDeclarationAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_15350 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mAssociatedListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 447)) ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  const GALGAS_graphDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListElementTypeEntry_15481 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 450)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 450)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_associatedListTypeEntry_15350.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 451)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = object ;
      const GALGAS_graphDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 452)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 452)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 455)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 455)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 455)) ;
  GALGAS_stringset var_reservedModifierNames_15931 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = object ;
  cEnumerator_graphInsertModifierList enumerator_16005 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_16005.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_15931.getter_hasKey (enumerator_16005.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 457)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_16005.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_16005.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 458)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 458)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16005.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 460)) ;
    }
    enumerator_16005.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = object ;
  const GALGAS_graphDeclarationAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 464)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_15235, var_associatedListTypeEntry_15350, var_associatedListElementTypeEntry_15481, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 465))  COMMA_SOURCE_FILE ("type-graph.galgas", 463)) ;
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
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)) COMMA_SOURCE_FILE ("type-graph.galgas", 488))) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  const GALGAS_graphDeclarationForGeneration temp_7 = object ;
  const GALGAS_graphDeclarationForGeneration temp_8 = object ;
  const GALGAS_graphDeclarationForGeneration temp_9 = object ;
  const GALGAS_graphDeclarationForGeneration temp_10 = object ;
  const GALGAS_graphDeclarationForGeneration temp_11 = object ;
  const GALGAS_graphDeclarationForGeneration temp_12 = object ;
  const GALGAS_graphDeclarationForGeneration temp_13 = object ;
  const GALGAS_graphDeclarationForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), temp_4.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), temp_5.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), temp_6.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)), temp_7.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)), temp_8.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 499)), temp_9.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 500)), temp_10.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 501)), temp_11.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 502)), temp_12.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 503)), temp_13.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 504)), temp_14.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 505)) COMMA_SOURCE_FILE ("type-graph.galgas", 492))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
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
  const GALGAS_graphDeclarationForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 515)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 516)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 517)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 520)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 518))) ;
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
  const GALGAS_listDeclarationAST temp_0 = object ;
  const GALGAS_listDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2041 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2041, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2201 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_2201.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2201.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2201.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2201.gotoNextObject () ;
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
  GALGAS_typedPropertyList var_typedAttributeList_3059 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3129 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3129.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_3264 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3129.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3264 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasSelector_3285 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3309 (enumerator_3129.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_3309.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_3309.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (enumerator_3309.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 73)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3309.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (enumerator_3309.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 75)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_3309.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = var_hasSelector_3285.boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_3309.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 78)) ;
                }
              }
              var_hasSelector_3285 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 84)) ;
            temp_9.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
            appendFixItActions (fixItArray8, kFixItReplace, temp_9) ;
            inCompiler->emitSemanticError (enumerator_3309.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
          }
        }
      }
      enumerator_3309.gotoNextObject () ;
    }
    var_typedAttributeList_3059.addAssign_operation (var_attributeTypeIndex_3264, enumerator_3129.current_mPropertyName (HERE), enumerator_3129.current_mIsPublic (HERE), var_hasSelector_3285  COMMA_SOURCE_FILE ("type-list.galgas", 87)) ;
    enumerator_3129.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_4087 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4087 COMMA_SOURCE_FILE ("type-list.galgas", 90)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_4212 ;
  {
  const GALGAS_listDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mListTypeName (), var_listTypeIndex_4212 COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_4460 ;
  {
  const GALGAS_listDeclarationAST temp_11 = object ;
  const GALGAS_listDeclarationAST temp_12 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 96)), temp_12.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 96)), var_listElementTypeIndex_4460 COMMA_SOURCE_FILE ("type-list.galgas", 94)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_4545 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 100)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_4604 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 101)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_4672 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 102)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_4739 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 103)) ;
  cEnumerator_typedPropertyList enumerator_4799 (var_typedAttributeList_3059, kENUMERATION_UP) ;
  while (enumerator_4799.hasCurrentObject ()) {
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = enumerator_4799.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = enumerator_4799.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_4842 = temp_13 ;
    var_enumerationDescriptor_4545.addAssign_operation (enumerator_4799.current_mPropertyTypeEntry (HERE), enumerator_4799.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 106)) ;
    var_constructorAttributeTypeList_4604.addAssign_operation (var_selector_4842.getter_nowhere (SOURCE_FILE ("type-list.galgas", 108)), enumerator_4799.current_mPropertyTypeEntry (HERE), enumerator_4799.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 107)) ;
    var_setterOutputFormalArgumentList_4672.addAssign_operation (var_selector_4842.getter_nowhere (SOURCE_FILE ("type-list.galgas", 112)), enumerator_4799.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 114)), enumerator_4799.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 111)) ;
    var_setterInputFormalArgumentList_4739.addAssign_operation (var_selector_4842.getter_nowhere (SOURCE_FILE ("type-list.galgas", 117)), enumerator_4799.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 119)), enumerator_4799.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 116)) ;
    enumerator_4799.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5428 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 123)) ;
  {
  const GALGAS_listDeclarationAST temp_15 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5428, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_15.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 124)) ;
  }
  {
  var_constructorMap_5428.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 132))  COMMA_SOURCE_FILE ("type-list.galgas", 132)), var_constructorAttributeTypeList_4604, GALGAS_bool (false), var_listTypeIndex_4212, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)) ;
  }
  GALGAS_getterMap var_getterMap_5871 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5871, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 138)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_16 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_16.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 153)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_17 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_17.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 160)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5871, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_18.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 167)) ;
  }
  cEnumerator_typedPropertyList enumerator_6926 (var_typedAttributeList_3059, kENUMERATION_UP) ;
  while (enumerator_6926.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_19 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 178)) ;
    temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 178)), var_uintType_4087, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 178)) ;
    var_getterMap_5871.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6926.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 176)), enumerator_6926.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 176)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 177)), temp_19, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 179)), GALGAS_bool (true), enumerator_6926.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 182)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 175)) ;
    }
    enumerator_6926.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7383 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 187)) ;
  {
  var_instanceMethodMap_7383.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 189))  COMMA_SOURCE_FILE ("type-list.galgas", 189)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 190)), var_setterOutputFormalArgumentList_4672, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 192)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 194)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 195)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 188)) ;
  }
  {
  var_instanceMethodMap_7383.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 199))  COMMA_SOURCE_FILE ("type-list.galgas", 199)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 200)), var_setterOutputFormalArgumentList_4672, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 202)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 204)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 205)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 198)) ;
  }
  GALGAS_setterMap var_setterMap_7947 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 209)) ;
  {
  GALGAS_formalParameterSignature temp_20 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 213)) ;
  temp_20.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 213)), var_listElementTypeIndex_4460, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 213)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 213)) ;
  var_setterMap_7947.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 211))  COMMA_SOURCE_FILE ("type-list.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 212)), temp_20, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 215)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 210)) ;
  }
  {
  var_setterMap_7947.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 219))  COMMA_SOURCE_FILE ("type-list.galgas", 219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 220)), var_setterOutputFormalArgumentList_4672, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 223)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 218)) ;
  }
  {
  var_setterMap_7947.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 227))  COMMA_SOURCE_FILE ("type-list.galgas", 227)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 228)), var_setterOutputFormalArgumentList_4672, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 226)) ;
  }
  var_setterOutputFormalArgumentList_4672.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 234)), var_uintType_4087, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 234)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 234)) ;
  {
  var_setterMap_7947.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 236))  COMMA_SOURCE_FILE ("type-list.galgas", 236)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 237)), var_setterOutputFormalArgumentList_4672, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 240)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 235)) ;
  }
  cEnumerator_typedPropertyList enumerator_9028 (var_typedAttributeList_3059, kENUMERATION_UP) ;
  while (enumerator_9028.hasCurrentObject ()) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = enumerator_9028.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_9112 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 246)) ;
        var_setterFormalArgumentList_9112.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 247)), enumerator_9028.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 247)), enumerator_9028.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 247)) ;
        var_setterFormalArgumentList_9112.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 248)), var_uintType_4087, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 248)), enumerator_9028.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 248)) ;
        {
        var_setterMap_7947.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9028.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 250)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 250)), enumerator_9028.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 250)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 251)), var_setterFormalArgumentList_9112, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 249)) ;
        }
      }
    }
    enumerator_9028.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_4739.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 260)), var_uintType_4087, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 260)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 260)) ;
  {
  var_setterMap_7947.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 262))  COMMA_SOURCE_FILE ("type-list.galgas", 262)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 263)), var_setterInputFormalArgumentList_4739, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 266)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 261)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_22 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_22.readProperty_mListTypeName (), var_getterMap_5871, var_setterMap_7947, var_instanceMethodMap_7383, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 271)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_23 = object ;
  const GALGAS_listDeclarationAST temp_24 = object ;
  const GALGAS_listDeclarationAST temp_25 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_23.readProperty_mListTypeName (), temp_24.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-list.galgas", 287)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 288)), GALGAS_bool (true), var_typedAttributeList_3059, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 291)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 292)), var_constructorMap_5428, var_getterMap_5871, var_setterMap_7947, var_instanceMethodMap_7383, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 297)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 298)), var_enumerationDescriptor_4545, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 300)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 300)) COMMA_SOURCE_FILE ("type-list.galgas", 300)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 300)) COMMA_SOURCE_FILE ("type-list.galgas", 300)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 300)) COMMA_SOURCE_FILE ("type-list.galgas", 300)), var_constructorAttributeTypeList_4604, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 302)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 303)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 304)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 305)), GALGAS_bool (false), var_listElementTypeIndex_4460, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_25.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 309)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 310)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_11655 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 319)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_11714 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11714.hasCurrentObject ()) {
    var_structAttributeList_11655.addAssign_operation (enumerator_11714.current_isConstant (HERE), enumerator_11714.current_mPropertyTypeName (HERE), enumerator_11714.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 326))  COMMA_SOURCE_FILE ("type-list.galgas", 321)) ;
    enumerator_11714.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 330)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 330)), var_structAttributeList_11655, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 328))  COMMA_SOURCE_FILE ("type-list.galgas", 328)) ;
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
  const GALGAS_listDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_12795 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 350)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12795, var_nameForUsefulness_12795, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 351)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_12959 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 352)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 352)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12795, var_elementTypeNameForUsefulness_12959 COMMA_SOURCE_FILE ("type-list.galgas", 353)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13195 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 355)) ;
  GALGAS_propertyIndexMap var_attributeMap_13237 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 356)) ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_13308 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_13308.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13372 = function_typeNameForUsefulEntitiesGraph (enumerator_13308.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 358)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12795, var_propertyTypeNameForUsefulness_13372 COMMA_SOURCE_FILE ("type-list.galgas", 359)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_13524 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_13308.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 360)) ;
    GALGAS_bool var_hasSetter_13625 = enumerator_13308.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_13657 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13681 (enumerator_13308.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13681.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_13681.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (enumerator_13681.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 365)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_13681.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (enumerator_13681.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 367)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_13681.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_hasSelector_13657.boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_13681.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 370)) ;
                }
              }
              var_hasSelector_13657 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 376)) ;
            temp_12.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 376)) ;
            appendFixItActions (fixItArray11, kFixItReplace, temp_12) ;
            inCompiler->emitSemanticError (enumerator_13681.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray11  COMMA_SOURCE_FILE ("type-list.galgas", 374)) ;
          }
        }
      }
      enumerator_13681.gotoNextObject () ;
    }
    var_typedAttributeList_13195.addAssign_operation (var_t_13524, enumerator_13308.current_mPropertyName (HERE), var_hasSetter_13625, var_hasSelector_13657  COMMA_SOURCE_FILE ("type-list.galgas", 379)) ;
    {
    var_attributeMap_13237.setter_insertKey (enumerator_13308.current_mPropertyName (HERE), var_t_13524, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 384)) ;
    }
    enumerator_13308.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_13 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_14453 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_13.readProperty_mListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
  const GALGAS_listDeclarationAST temp_14 = object ;
  const GALGAS_listDeclarationAST temp_15 = object ;
  const GALGAS_listDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_14.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 389)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_14453, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_15.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 392)), temp_16.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 392)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 392)), var_typedAttributeList_13195  COMMA_SOURCE_FILE ("type-list.galgas", 390))  COMMA_SOURCE_FILE ("type-list.galgas", 388)) ;
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
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- List constructor used by listmap\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) ;\n"
    "\n"
    "//--------------------------------- Element constructor\n"
    "  public: static void makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_843_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_843.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_843.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_843_.increment () ;
      enumerator_843.gotoNextObject () ;
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
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructors\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_601_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_601 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_601.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_601.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_601.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_601.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_601_.increment () ;
      enumerator_601.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "  public: cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inElement COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public: virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public: virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public: virtual cCollectionElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    "  public: virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
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
  GALGAS_uint index_1667_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1667 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1667.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1667.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1667.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1667.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1667_.increment () ;
      enumerator_1667.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1960_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1960 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1960.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1960.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_1960.hasNextObject ()) {
        result << ", " ;
      }
      index_1960_.increment () ;
      enumerator_1960.gotoNextObject () ;
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
  GALGAS_uint index_2434_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2434 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2434.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2434.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2434.hasNextObject ()) {
        result << ", " ;
      }
      index_2434_.increment () ;
      enumerator_2434.gotoNextObject () ;
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
  GALGAS_uint index_3139_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3139 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3139.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3139.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3139.hasNextObject ()) {
        result << ", " ;
      }
      index_3139_.increment () ;
      enumerator_3139.gotoNextObject () ;
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
  GALGAS_uint index_3593_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3593 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3593.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3593.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3593.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3593_.increment () ;
      enumerator_3593.gotoNextObject () ;
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
  GALGAS_uint index_5416_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5416 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5416.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5416.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5416_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5416.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5416_IDX.increment () ;
      enumerator_5416.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5704_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5704 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5704.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5704_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5704.hasNextObject ()) {
        result << " && " ;
      }
      index_5704_IDX.increment () ;
      enumerator_5704.gotoNextObject () ;
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
  GALGAS_uint index_6054_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6054 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6054.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_6054_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_6054_IDX.increment () ;
      enumerator_6054.gotoNextObject () ;
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
  GALGAS_uint index_6487_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6487 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6487.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_6487.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6487.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6487_.increment () ;
      enumerator_6487.gotoNextObject () ;
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
  GALGAS_uint index_6845_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6845 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6845.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6845.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6845.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6845_.increment () ;
      enumerator_6845.gotoNextObject () ;
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
  GALGAS_uint index_7283_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7283 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7283.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7283.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_7283_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_7283.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7283_IDX.increment () ;
      enumerator_7283.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (" ;
  GALGAS_uint index_7556_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7556 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7556.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7556_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 177)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_7556.hasNextObject ()) {
        result << " && " ;
      }
      index_7556_IDX.increment () ;
      enumerator_7556.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7830_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7830 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7830.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7830_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      if (enumerator_7830.hasNextObject ()) {
        result << ", " ;
      }
      index_7830_IDX.increment () ;
      enumerator_7830.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{ // Destroy receiver\n"
    "      drop () ;\n"
    "    }\n"
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
    "  if (isValid ()) {\n"
    "    if (inElement.isValid ()) {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (inElement COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      appendObject (attributes) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9037_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9037 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9037.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_9037.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << " inOperand" ;
      result << index_9037_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 221)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9037_IDX.increment () ;
      enumerator_9037.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inInsertionIndex.isValid ()" ;
  GALGAS_uint index_9401_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9401 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9401.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_9401_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 229)).stringValue () ;
      result << ".isValid ()" ;
      index_9401_IDX.increment () ;
      enumerator_9401.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "      cCollectionElement * p = NULL ;\n"
    "      macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_9662_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9662 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9662.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_9662_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 235)).stringValue () ;
      if (enumerator_9662.hasNextObject ()) {
        result << ", " ;
      }
      index_9662_IDX.increment () ;
      enumerator_9662.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "      capCollectionElement attributes ;\n"
    "      attributes.setPointer (p) ;\n"
    "      macroDetachSharedObject (p) ;\n"
    "      insertObjectAtIndex (attributes, inInsertionIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "    }else{\n"
    "      drop () ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10262_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10262 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10262.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10262.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << " & outOperand" ;
      result << index_10262_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 253)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10262_IDX.increment () ;
      enumerator_10262.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inRemoveIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()) {\n"
    "    if (inRemoveIndex.isValid ()) {\n"
    "      capCollectionElement attributes ;\n"
    "      removeObjectAtIndex (attributes, inRemoveIndex.uintValue (), inCompiler COMMA_THERE) ;\n"
    "      cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = (cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) attributes.ptr () ;\n"
    "      if (NULL == p) {\n" ;
  GALGAS_uint index_10886_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10886 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10886.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_10886_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 266)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10886_IDX.increment () ;
      enumerator_10886.gotoNextObject () ;
    }
  }
  result << "        drop () ;\n"
    "      }else{\n"
    "        macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11150_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11150 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11150.hasCurrentObject ()) {
      result << "        outOperand" ;
      result << index_11150_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11150.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 273)).stringValue () ;
      result << " ;\n" ;
      index_11150_IDX.increment () ;
      enumerator_11150.gotoNextObject () ;
    }
  }
  result << "      }\n"
    "    }else{\n" ;
  GALGAS_uint index_11385_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11385 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11385.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_11385_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 279)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11385_IDX.increment () ;
      enumerator_11385.gotoNextObject () ;
    }
  }
  result << "      drop () ;    \n"
    "    }\n"
    "  }else{\n" ;
  GALGAS_uint index_11575_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11575 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11575.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11575_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 286)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11575_IDX.increment () ;
      enumerator_11575.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11911_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11911 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11911.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11911.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << " & outOperand" ;
      result << index_11911_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 295)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11911_IDX.increment () ;
      enumerator_11911.gotoNextObject () ;
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
  GALGAS_uint index_12384_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12384 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12384.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12384_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 305)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12384_IDX.increment () ;
      enumerator_12384.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12618_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12618 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12618.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12618_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12618.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 311)).stringValue () ;
      result << " ;\n" ;
      index_12618_IDX.increment () ;
      enumerator_12618.gotoNextObject () ;
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
  GALGAS_uint index_13012_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13012 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13012.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_13012.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << " & outOperand" ;
      result << index_13012_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 320)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13012_IDX.increment () ;
      enumerator_13012.gotoNextObject () ;
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
  GALGAS_uint index_13484_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13484 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13484.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13484_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 330)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13484_IDX.increment () ;
      enumerator_13484.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13718_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13718 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13718.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13718_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13718.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 336)).stringValue () ;
      result << " ;\n" ;
      index_13718_IDX.increment () ;
      enumerator_13718.gotoNextObject () ;
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
  GALGAS_uint index_14110_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14110 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14110.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_14110.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << " & outOperand" ;
      result << index_14110_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 345)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_14110_IDX.increment () ;
      enumerator_14110.gotoNextObject () ;
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
  GALGAS_uint index_14581_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14581 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14581.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14581_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 355)).stringValue () ;
      result << ".drop () ;\n" ;
      index_14581_IDX.increment () ;
      enumerator_14581.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_14815_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14815 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14815.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_14815_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_14815.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 361)).stringValue () ;
      result << " ;\n" ;
      index_14815_IDX.increment () ;
      enumerator_14815.gotoNextObject () ;
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
  GALGAS_uint index_15206_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15206 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15206.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_15206.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << " & outOperand" ;
      result << index_15206_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 370)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_15206_IDX.increment () ;
      enumerator_15206.gotoNextObject () ;
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
  GALGAS_uint index_15676_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15676 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15676.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15676_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 380)).stringValue () ;
      result << ".drop () ;\n" ;
      index_15676_IDX.increment () ;
      enumerator_15676.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_15910_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15910 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15910.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_15910_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_15910.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 386)).stringValue () ;
      result << " ;\n" ;
      index_15910_IDX.increment () ;
      enumerator_15910.gotoNextObject () ;
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
  GALGAS_uint index_18766_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18766 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18766.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_18766.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//----------------------------------------------------------------------------------------------------------------------\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_18766.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 446)).stringValue () ;
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
        result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 454)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_18766.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 460)).stringValue () ;
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
      result << enumerator_18766.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 465)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cCollectionElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mObject.mProperty_" ;
      result << enumerator_18766.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 468)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_18766_IDX.increment () ;
      enumerator_18766.gotoNextObject () ;
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
  GALGAS_uint index_21736_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_21736 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_21736.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_21736.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_21736.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 494)).stringValue () ;
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
      result << enumerator_21736.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 497)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_21736_IDX.increment () ;
      enumerator_21736.gotoNextObject () ;
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
  const GALGAS_listTypeForGeneration temp_0 = object ;
  const GALGAS_listTypeForGeneration temp_1 = object ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 430)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 431)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 429))) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  const GALGAS_listTypeForGeneration temp_7 = object ;
  const GALGAS_listTypeForGeneration temp_8 = object ;
  const GALGAS_listTypeForGeneration temp_9 = object ;
  const GALGAS_listTypeForGeneration temp_10 = object ;
  const GALGAS_listTypeForGeneration temp_11 = object ;
  const GALGAS_listTypeForGeneration temp_12 = object ;
  const GALGAS_listTypeForGeneration temp_13 = object ;
  const GALGAS_listTypeForGeneration temp_14 = object ;
  const GALGAS_listTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 435)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 436)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 437)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 438)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 439)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 440)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 441)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 442)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 443)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 444)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 445)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 446)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 447)) COMMA_SOURCE_FILE ("type-list.galgas", 434))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 434)) ;
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
  const GALGAS_listTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_17265 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_17265.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17265.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 458)) ;
    enumerator_17265.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 460)) ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 461)) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 463)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 464)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 466)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 466)) COMMA_SOURCE_FILE ("type-list.galgas", 462))) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_1588 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1588.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 41)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 43))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  var_structAttributeList_1588.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 47)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 44)) ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 53)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 53)), var_structAttributeList_1588, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 51))  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)) ;
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
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_2856 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2856, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 70)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2856, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 71)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) COMMA_SOURCE_FILE ("type-listmap.galgas", 71)) ;
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
  GALGAS_typeKindEnum var_typeKindEnum_3936 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_3994 ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_bool joker_3898_3 ; // Joker input parameter
  GALGAS_bool joker_3898_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_3898_1 ; // Joker input parameter
  GALGAS_bool joker_3942 ; // Joker input parameter
  GALGAS_propertyMap joker_4000_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4000_19 ; // Joker input parameter
  GALGAS_constructorMap joker_4000_18 ; // Joker input parameter
  GALGAS_getterMap joker_4000_17 ; // Joker input parameter
  GALGAS_setterMap joker_4000_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4000_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_4000_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_4000_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4000_12 ; // Joker input parameter
  GALGAS_operators joker_4000_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4000_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4000_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4000_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4000_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4000_6 ; // Joker input parameter
  GALGAS_bool joker_4000_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_4000_4 ; // Joker input parameter
  GALGAS_string joker_4000_3 ; // Joker input parameter
  GALGAS_string joker_4000_2 ; // Joker input parameter
  GALGAS_headerKind joker_4000_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_0.readProperty_mAssociatedListTypeName (), joker_3898_3, joker_3898_2, joker_3898_1, var_typeKindEnum_3936, joker_3942, var_listTypedAttributeList_3994, joker_4000_20, joker_4000_19, joker_4000_18, joker_4000_17, joker_4000_16, joker_4000_15, joker_4000_14, joker_4000_13, joker_4000_12, joker_4000_11, joker_4000_10, joker_4000_9, joker_4000_8, joker_4000_7, joker_4000_6, joker_4000_5, joker_4000_4, joker_4000_3, joker_4000_2, joker_4000_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 84)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_3936.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 92)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = object ;
      const GALGAS_listmapDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 93)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 93)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 93)) ;
      var_listTypedAttributeList_3994 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 94)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_4270 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_getterMap var_getterMap_4360 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4360, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 98)) ;
  }
  GALGAS_setterMap var_setterMap_4389 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 99)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4437 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 100)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeIndex_4596 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_4596 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_4730 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_4730 COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 106)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 113)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 120)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_4360, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 127)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_4270, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 137)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_5784 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 145)) ;
  var_enumeratorDescriptor_5784.addAssign_operation (var_stringTypeIndex_4730, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 146)) ;
  var_enumeratorDescriptor_5784.addAssign_operation (var_associatedListTypeIndex_4596, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 147)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_5997 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 149)) ;
  var_addAssignOperatorDescription_5997.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), var_stringTypeIndex_4730, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
  cEnumerator_typedPropertyList enumerator_6138 (var_listTypedAttributeList_3994, kENUMERATION_UP) ;
  while (enumerator_6138.hasCurrentObject ()) {
    var_addAssignOperatorDescription_5997.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 152)), enumerator_6138.current_mPropertyTypeEntry (HERE), enumerator_6138.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 152)) ;
    enumerator_6138.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mListmapTypeName (), var_getterMap_4360, var_setterMap_4389, var_instanceMethodMap_4437, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 155)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_6825 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 169)), temp_10.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 169)), var_listElementTypeIndex_6825 COMMA_SOURCE_FILE ("type-listmap.galgas", 167)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  const GALGAS_listmapDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.readProperty_mListmapTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 178)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 180)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 181)), var_listTypedAttributeList_3994, var_constructorMap_4270, var_getterMap_4360, var_setterMap_4389, var_instanceMethodMap_4437, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 187)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), var_enumeratorDescriptor_5784, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 190)), var_addAssignOperatorDescription_5997, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 192)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 193)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 194)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_bool (false), var_listElementTypeIndex_6825, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 199)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 173)) ;
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
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_8396 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8396, var_nameForUsefulness_8396, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_8566 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 219)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8396, var_associatedTypeNameForUsefulness_8566 COMMA_SOURCE_FILE ("type-listmap.galgas", 220)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_8754 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 221)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 221)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8396, var_elementTypeNameForUsefulness_8754 COMMA_SOURCE_FILE ("type-listmap.galgas", 222)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9111 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9168 ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  GALGAS_bool joker_9073_3 ; // Joker input parameter
  GALGAS_bool joker_9073_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9073_1 ; // Joker input parameter
  GALGAS_bool joker_9117 ; // Joker input parameter
  GALGAS_propertyMap joker_9174_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9174_19 ; // Joker input parameter
  GALGAS_constructorMap joker_9174_18 ; // Joker input parameter
  GALGAS_getterMap joker_9174_17 ; // Joker input parameter
  GALGAS_setterMap joker_9174_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9174_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_9174_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9174_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9174_12 ; // Joker input parameter
  GALGAS_operators joker_9174_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9174_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9174_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9174_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9174_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9174_6 ; // Joker input parameter
  GALGAS_bool joker_9174_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9174_4 ; // Joker input parameter
  GALGAS_string joker_9174_3 ; // Joker input parameter
  GALGAS_string joker_9174_2 ; // Joker input parameter
  GALGAS_headerKind joker_9174_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_4.readProperty_mAssociatedListTypeName (), joker_9073_3, joker_9073_2, joker_9073_1, var_typeKindEnum_9111, joker_9117, var_listTypeAttributeList_9168, joker_9174_20, joker_9174_19, joker_9174_18, joker_9174_17, joker_9174_16, joker_9174_15, joker_9174_14, joker_9174_13, joker_9174_12, joker_9174_11, joker_9174_10, joker_9174_9, joker_9174_8, joker_9174_7, joker_9174_6, joker_9174_5, joker_9174_4, joker_9174_3, joker_9174_2, joker_9174_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 224)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9111.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 233)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 234)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 238)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_9.readProperty_mListmapTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 240)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_10.readProperty_mAssociatedListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 241)), var_listTypeAttributeList_9168, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 243)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 243))  COMMA_SOURCE_FILE ("type-listmap.galgas", 239))  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)) ;
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
  const GALGAS_listmapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_10580 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10580.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10580.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 263)) ;
    enumerator_10580.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 267)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)) COMMA_SOURCE_FILE ("type-listmap.galgas", 266))) ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  const GALGAS_listmapTypeForGeneration temp_5 = object ;
  const GALGAS_listmapTypeForGeneration temp_6 = object ;
  const GALGAS_listmapTypeForGeneration temp_7 = object ;
  const GALGAS_listmapTypeForGeneration temp_8 = object ;
  const GALGAS_listmapTypeForGeneration temp_9 = object ;
  const GALGAS_listmapTypeForGeneration temp_10 = object ;
  const GALGAS_listmapTypeForGeneration temp_11 = object ;
  const GALGAS_listmapTypeForGeneration temp_12 = object ;
  const GALGAS_listmapTypeForGeneration temp_13 = object ;
  const GALGAS_listmapTypeForGeneration temp_14 = object ;
  const GALGAS_listmapTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 280)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 281)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 282)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 283)) COMMA_SOURCE_FILE ("type-listmap.galgas", 270))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 270)) ;
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
  const GALGAS_listmapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 296)), temp_3.readProperty_mAssociatedListTypeIndex ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 295))) ;
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
  const GALGAS_dictDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_2593 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 68)) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  var_structAttributeList_2593.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 69)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 69))  COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_2733 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_2733.hasCurrentObject ()) {
    var_structAttributeList_2593.addAssign_operation (GALGAS_bool (false), enumerator_2733.current_mPropertyTypeName (HERE), enumerator_2733.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 71))  COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
    enumerator_2733.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = object ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 75)), var_structAttributeList_2593, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 73))  COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
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
  const GALGAS_dictDeclarationAST temp_0 = object ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  GALGAS_lstring var_dictionary_3842 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 92)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_3842, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 94)), temp_4.readProperty_mKeyTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4114 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4114.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4114.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 96)), enumerator_4114.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
    }
    enumerator_4114.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_keyTypeIndex_5027 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_5027 COMMA_SOURCE_FILE ("type-dict.galgas", 110)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5085 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5027, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_5210 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_5227 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_5227.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_5227.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_5227.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 118)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_5210 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_5227.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 122)) ;
    }
    enumerator_5227.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5531 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_5622 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5622, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_5651 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5699 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5531, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), temp_7.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5622, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6391 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 154)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6439 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_6521 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_6521.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 157)), var_keyTypeIndex_5027, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 157)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_6391.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 159)), var_keyTypeIndex_5027, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 161)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_6874 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 163)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_6874.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 165)), var_keyTypeIndex_5027, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 167)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 164)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_7127 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_7127.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 172)), var_keyTypeIndex_5027, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_7314 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 175)) ;
  const GALGAS_dictDeclarationAST temp_14 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7389 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7389.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_7524 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7389.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7524 COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
    }
    GALGAS_bool var_hasSetter_7543 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7570 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_6521.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 180)), var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 180)) ;
    var_typedPropertyList_6439.addAssign_operation (var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE), var_hasSetter_7543, var_hasSelector_7570  COMMA_SOURCE_FILE ("type-dict.galgas", 181)) ;
    var_typesToIncludeInHeaderCompilation_7314.addAssign_operation (var_attributeTypeIndex_7524  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
    var_enumerationDescriptor_5085.addAssign_operation (var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 183)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_7389.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 185)) ;
    }
    var_insertMethodFormalArgumentList_6391.addAssign_operation (temp_15, var_attributeTypeIndex_7524, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 187)), enumerator_7389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_5210.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_7389.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 190)) ;
    }
    var_removeMethodFormalArgumentList_6874.addAssign_operation (temp_17, var_attributeTypeIndex_7524, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 192)), enumerator_7389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_5210 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_7570 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_7389.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 196)) ;
    }
    var_optionalMethodSignature_7127.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_7524, enumerator_7389.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 194)) ;
    enumerator_7389.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = object ;
  var_setterMap_5651.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 202)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 203)), var_removeMethodFormalArgumentList_6874, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 206)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = object ;
  const GALGAS_dictDeclarationAST temp_24 = object ;
  var_instanceMethodMap_5699.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 212)), var_removeMethodFormalArgumentList_6874, temp_24.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 216)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-dict.galgas", 217)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 210)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9217 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_9217.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9264 = GALGAS_lstring::constructor_new (enumerator_9217.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 222)), enumerator_9217.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 222)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_9447 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9217.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9447 COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 227)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 227)), var_keyTypeIndex_5027, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    var_getterMap_5622.setter_insertOrReplace (var_accessorName_9264, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 226)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 228)), GALGAS_bool (true), var_attributeTypeIndex_9447, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    }
    enumerator_9217.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_9853 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_9853.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9900 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9853.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 238)), enumerator_9853.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10186 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9853.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10186 COMMA_SOURCE_FILE ("type-dict.galgas", 241)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_10227 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 246)) ;
    var_accessorFormalArgumentList_10227.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 247)), var_attributeTypeIndex_10186, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 247)), enumerator_9853.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 247)) ;
    var_accessorFormalArgumentList_10227.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 248)), var_keyTypeIndex_5027, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 248)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
    {
    var_setterMap_5651.setter_insertOrReplace (var_accessorName_9900, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 251)), var_accessorFormalArgumentList_10227, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 249)) ;
    }
    enumerator_9853.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.readProperty_mDictTypeName (), var_getterMap_5622, var_setterMap_5651, var_instanceMethodMap_5699, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 259)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_11211 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = object ;
  const GALGAS_dictDeclarationAST temp_30 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 273)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 273)), temp_30.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 273)), var_elementTypeEntry_11211 COMMA_SOURCE_FILE ("type-dict.galgas", 271)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_11264 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 277)) ;
  {
  var_optionalMethodMap_11264.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 278)), var_optionalMethodSignature_7127, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 278)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_31 = object ;
  const GALGAS_dictDeclarationAST temp_32 = object ;
  const GALGAS_dictDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_31.readProperty_mDictTypeName (), temp_32.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 285)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 287)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 288)), var_typedPropertyList_6439, var_constructorMap_5531, var_getterMap_5622, var_setterMap_5651, var_instanceMethodMap_5699, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 294)), var_optionalMethodMap_11264, var_enumerationDescriptor_5085, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 297)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 297)) COMMA_SOURCE_FILE ("type-dict.galgas", 297)), var_argumentTypeListForAddAssignWithFieldExpressionList_6521, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 299)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 300)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 301)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 302)), GALGAS_bool (false), var_elementTypeEntry_11211, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 306)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 306)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
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
  cEnumerator_stringlist enumerator_12661 (inArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 316)), kENUMERATION_UP) ;
  while (enumerator_12661.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12698 = enumerator_12661.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 317)) ;
    {
    GALGAS_string joker_12785 ; // Joker input parameter
    var_explodedArray_12698.setter_popFirst (joker_12785, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 318)) ;
    }
    cEnumerator_stringlist enumerator_12803 (var_explodedArray_12698, kENUMERATION_UP) ;
    while (enumerator_12803.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12803.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 320)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_12878 = enumerator_12803.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 321)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_12878.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 323)) ;
            }
          }
        }
      }
      enumerator_12803.gotoNextObject () ;
    }
    enumerator_12661.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_13367 (inArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 333)), kENUMERATION_UP) ;
  while (enumerator_13367.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13404 = enumerator_13367.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 334)) ;
    {
    GALGAS_string joker_13491 ; // Joker input parameter
    var_explodedArray_13404.setter_popFirst (joker_13491, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
    }
    cEnumerator_stringlist enumerator_13509 (var_explodedArray_13404, kENUMERATION_UP) ;
    while (enumerator_13509.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13509.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 337)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13584 = enumerator_13509.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 338)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13584.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_13584.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 339)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 340)) ;
            }
          }
        }
      }
      enumerator_13509.gotoNextObject () ;
    }
    enumerator_13367.gotoNextObject () ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 350)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 352)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 353)) ;
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
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_14597 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 367)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14597, var_nameForUsefulness_14597, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 368)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = object ;
  const GALGAS_dictDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14761 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 369)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 369)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14597, var_elementTypeNameForUsefulness_14761 COMMA_SOURCE_FILE ("type-dict.galgas", 370)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_15017 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 372)) ;
  GALGAS_propertyIndexMap var_attributeMap_15059 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 373)) ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_15109 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_15109.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15173 = function_typeNameForUsefulEntitiesGraph (enumerator_15109.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 375)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14597, var_propertyTypeNameForUsefulness_15173 COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_15347 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_15109.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
    GALGAS_bool var_hasSetter_15426 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_15453 = GALGAS_bool (false) ;
    var_typedAttributeList_15017.addAssign_operation (var_t_15347, enumerator_15109.current_mPropertyName (HERE), var_hasSetter_15426, var_hasSelector_15453  COMMA_SOURCE_FILE ("type-dict.galgas", 380)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 385)).getter_hasKey (enumerator_15109.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 385)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_15646 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_15723 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 387)), kENUMERATION_UP) ;
        while (enumerator_15723.hasCurrentObject ()) {
          var_m_15646.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_15723.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 388)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 388)) ;
          enumerator_15723.gotoNextObject () ;
        }
        var_m_15646.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 390)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_15109.current_mPropertyName (HERE).readProperty_location (), var_m_15646, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 391)) ;
      }
    }
    {
    var_attributeMap_15059.setter_insertKey (enumerator_15109.current_mPropertyName (HERE), var_t_15347, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 393)) ;
    }
    enumerator_15109.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = object ;
  const GALGAS_dictDeclarationAST temp_7 = object ;
  const GALGAS_dictDeclarationAST temp_8 = object ;
  const GALGAS_dictDeclarationAST temp_9 = object ;
  const GALGAS_dictDeclarationAST temp_10 = object ;
  const GALGAS_dictDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 397)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mDictTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 399)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 400)), temp_9.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 400)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_15017, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 398))  COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
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
  const GALGAS_dictTypeForGeneration temp_0 = object ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 425)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 426)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 424))) ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  const GALGAS_dictTypeForGeneration temp_5 = object ;
  const GALGAS_dictTypeForGeneration temp_6 = object ;
  const GALGAS_dictTypeForGeneration temp_7 = object ;
  const GALGAS_dictTypeForGeneration temp_8 = object ;
  const GALGAS_dictTypeForGeneration temp_9 = object ;
  const GALGAS_dictTypeForGeneration temp_10 = object ;
  const GALGAS_dictTypeForGeneration temp_11 = object ;
  const GALGAS_dictTypeForGeneration temp_12 = object ;
  const GALGAS_dictTypeForGeneration temp_13 = object ;
  const GALGAS_dictTypeForGeneration temp_14 = object ;
  const GALGAS_dictTypeForGeneration temp_15 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 430)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 432)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 433)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 434)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 435)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 436)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 437)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 438)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 439)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 440)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 441)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 442)) COMMA_SOURCE_FILE ("type-dict.galgas", 429))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 429)) ;
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
  const GALGAS_dictTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 452)) ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 453)) ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 455)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 457)) COMMA_SOURCE_FILE ("type-dict.galgas", 454))) ;
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
  const GALGAS_mapDeclarationAST temp_0 = object ;
  result_outString = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 49)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_6645 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 186)) ;
  var_structAttributeList_6645.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 189)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 190)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 192))  COMMA_SOURCE_FILE ("type-map.galgas", 187)) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_6836 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_6836.hasCurrentObject ()) {
    var_structAttributeList_6645.addAssign_operation (GALGAS_bool (false), enumerator_6836.current_mPropertyTypeName (HERE), enumerator_6836.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 199))  COMMA_SOURCE_FILE ("type-map.galgas", 194)) ;
    enumerator_6836.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 203)), temp_3.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 203)), var_structAttributeList_6645, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 201))  COMMA_SOURCE_FILE ("type-map.galgas", 201)) ;
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
  const GALGAS_mapDeclarationAST temp_0 = object ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_7972 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 219)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 219)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7972, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 220)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8130 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8130.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_8130.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 222)), enumerator_8130.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 222)) COMMA_SOURCE_FILE ("type-map.galgas", 222)) ;
    }
    enumerator_8130.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_9048 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_9048 COMMA_SOURCE_FILE ("type-map.galgas", 237)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_locationTypeEntry_9183 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeEntry_9183 COMMA_SOURCE_FILE ("type-map.galgas", 239)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_9315 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9315 COMMA_SOURCE_FILE ("type-map.galgas", 241)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 243)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_9315, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 243)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9400 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9483 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_9516 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_9532 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_9532.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_9532.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_9532.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 250)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_9483 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_9532.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_9516.operator_not (SOURCE_FILE ("type-map.galgas", 254)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_9532.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 255)) ;
            }
          }
          var_activateSuggestion_9516 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_9532.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 259)) ;
      }
    }
    enumerator_9532.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_9999 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 263)) ;
  GALGAS_getterMap var_getterMap_10090 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_10090, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 264)) ;
  }
  GALGAS_setterMap var_setterMap_10118 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 265)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_10166 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 266)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_9999, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_9.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = object ;
  const GALGAS_mapDeclarationAST temp_11 = object ;
  routine_enterConstructorWithArgument (var_constructorMap_9999, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_11.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 275)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 285)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 292)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 303)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 310)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 317)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 326)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = object ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), temp_12.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 335)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_10090, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 342)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12318 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 350)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12373 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 351)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_12452 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 352)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_12452.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 355)), var_stringTypeIndex_9048, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 353)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12679 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 358)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12679.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 359)), var_lstringTypeIndex_9315, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 359)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12318.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 361)), var_lstringTypeIndex_9315, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 363)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 360)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_13043 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 365)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_13043.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 367)), var_lstringTypeIndex_9315, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 369)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 366)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_13312 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 371)) ;
  const GALGAS_mapDeclarationAST temp_19 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_13375 (temp_19.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_13375.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_13510 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13375.current_mPropertyTypeName (HERE), var_attributeTypeIndex_13510 COMMA_SOURCE_FILE ("type-map.galgas", 373)) ;
    }
    GALGAS_bool var_hasSetter_13529 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_13556 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13583 (enumerator_13375.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13583.hasCurrentObject ()) {
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsEqual, enumerator_13583.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_20) {
          var_hasSelector_13556 = GALGAS_bool (true) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = var_hasSelector_13556 ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = var_usesSelectorsInInsertAndSearch_9483 ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticWarning (enumerator_13583.current_mValue (HERE).readProperty_location (), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray23  COMMA_SOURCE_FILE ("type-map.galgas", 380)) ;
            }
          }
        }
      }
      enumerator_13583.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_12679.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 384)), var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 384)) ;
    var_typedPropertyList_12373.addAssign_operation (var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE), var_hasSetter_13529, var_hasSelector_13556  COMMA_SOURCE_FILE ("type-map.galgas", 385)) ;
    var_typesToIncludeInHeaderCompilation_13312.addAssign_operation (var_attributeTypeIndex_13510  COMMA_SOURCE_FILE ("type-map.galgas", 386)) ;
    var_enumerationDescriptor_9400.addAssign_operation (var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 387)) ;
    GALGAS_bool test_24 = var_usesSelectorsInInsertAndSearch_9483 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = var_hasSelector_13556 ;
    }
    GALGAS_lstring temp_25 ;
    const enumGalgasBool test_26 = test_24.boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = enumerator_13375.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_26) {
      temp_25 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 389)) ;
    }
    var_insertMethodFormalArgumentList_12318.addAssign_operation (temp_25, var_attributeTypeIndex_13510, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 391)), enumerator_13375.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 388)) ;
    GALGAS_bool test_27 = var_usesSelectorsInInsertAndSearch_9483 ;
    if (kBoolTrue != test_27.boolEnum ()) {
      test_27 = var_hasSelector_13556 ;
    }
    GALGAS_lstring temp_28 ;
    const enumGalgasBool test_29 = test_27.boolEnum () ;
    if (kBoolTrue == test_29) {
      temp_28 = enumerator_13375.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_29) {
      temp_28 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 394)) ;
    }
    var_removeMethodFormalArgumentList_13043.addAssign_operation (temp_28, var_attributeTypeIndex_13510, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 396)), enumerator_13375.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 393)) ;
    GALGAS_bool test_30 = var_usesSelectorsInInsertAndSearch_9483 ;
    if (kBoolTrue != test_30.boolEnum ()) {
      test_30 = var_hasSelector_13556 ;
    }
    GALGAS_lstring temp_31 ;
    const enumGalgasBool test_32 = test_30.boolEnum () ;
    if (kBoolTrue == test_32) {
      temp_31 = enumerator_13375.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_32) {
      temp_31 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 400)) ;
    }
    var_optionalMethodSignature_12452.addAssign_operation (GALGAS_bool (false), temp_31, var_attributeTypeIndex_13510, enumerator_13375.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 398)) ;
    enumerator_13375.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_33 = object ;
  cEnumerator_insertMethodListAST enumerator_14865 (temp_33.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_14865.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_setterMap_10118.getter_hasKey (enumerator_14865.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 406)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_14865.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_14865.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 407)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 407)), fixItArray35  COMMA_SOURCE_FILE ("type-map.galgas", 407)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_setterMap_10118.setter_insertOrReplace (enumerator_14865.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 411)), var_insertMethodFormalArgumentList_12318, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 414)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 409)) ;
      }
    }
    enumerator_14865.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_36 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_15328 (temp_36.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_15328.hasCurrentObject ()) {
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      test_37 = var_setterMap_10118.getter_hasKey (enumerator_15328.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 421)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_15328.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15328.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 422)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 422)), fixItArray38  COMMA_SOURCE_FILE ("type-map.galgas", 422)) ;
      }
    }
    if (kBoolFalse == test_37) {
      {
      var_setterMap_10118.setter_insertOrReplace (enumerator_15328.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 426)), var_removeMethodFormalArgumentList_13043, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 429)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 424)) ;
      }
    }
    enumerator_15328.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_39 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_15867 (temp_39.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_15867.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_15936 = var_removeMethodFormalArgumentList_13043 ;
    enumGalgasBool test_40 = kBoolTrue ;
    if (kBoolTrue == test_40) {
      test_40 = enumerator_15867.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_40) {
        GALGAS_lstring temp_41 ;
        const enumGalgasBool test_42 = var_usesSelectorsInInsertAndSearch_9483.boolEnum () ;
        if (kBoolTrue == test_42) {
          temp_41 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 439)) ;
        }else if (kBoolFalse == test_42) {
          temp_41 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 439)) ;
        }
        var_searchMethodFormalArgumentList_15936.addAssign_operation (temp_41, var_locationTypeEntry_9183, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 441)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 438)) ;
      }
    }
    {
    var_instanceMethodMap_10166.setter_insertKey (enumerator_15867.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 446)), var_searchMethodFormalArgumentList_15936, enumerator_15867.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 450)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-map.galgas", 451)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 444)) ;
    }
    enumerator_15867.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_43 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16574 (temp_43.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16574.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16621 = GALGAS_lstring::constructor_new (enumerator_16574.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 457)), enumerator_16574.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 457)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_16804 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16574.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16804 COMMA_SOURCE_FILE ("type-map.galgas", 458)) ;
    }
    {
    GALGAS_functionSignature temp_44 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 462)) ;
    temp_44.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 462)), var_stringTypeIndex_9048, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 462)) ;
    var_getterMap_10090.setter_insertOrReplace (var_accessorName_16621, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 461)), temp_44, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 463)), GALGAS_bool (true), var_attributeTypeIndex_16804, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 466)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
    }
    enumerator_16574.gotoNextObject () ;
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    const GALGAS_mapDeclarationAST temp_46 = object ;
    test_45 = GALGAS_bool (kIsSupOrEqual, temp_46.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 471)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_45) {
      GALGAS_location var_insertOrReplaceLocation_17244 ;
      const GALGAS_mapDeclarationAST temp_47 = object ;
      temp_47.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_17244, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 473)) ;
      {
      var_setterMap_10118.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_17244  COMMA_SOURCE_FILE ("type-map.galgas", 475)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 476)), var_insertMethodFormalArgumentList_12318, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 479)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 474)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_48 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17698 (temp_48.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17698.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_17745 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_17698.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 486)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 486)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 486)), enumerator_17698.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 485)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_18031 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17698.current_mPropertyTypeName (HERE), var_attributeTypeIndex_18031 COMMA_SOURCE_FILE ("type-map.galgas", 489)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_18098 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 494)) ;
    var_accessorFormalArgumentList_18098.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 495)), var_attributeTypeIndex_18031, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 495)), enumerator_17698.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 495)) ;
    var_accessorFormalArgumentList_18098.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 496)), var_stringTypeIndex_9048, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 496)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 496)) ;
    {
    var_setterMap_10118.setter_insertOrReplace (var_accessorName_17745, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 499)), var_accessorFormalArgumentList_18098, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 502)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 497)) ;
    }
    enumerator_17698.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_18563 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 507)) ;
  {
  var_optionalMethodMap_18563.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 508)), var_optionalMethodSignature_12452, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 508)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_49 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_49.readProperty_mMapTypeName (), var_getterMap_10090, var_setterMap_10118, var_instanceMethodMap_10166, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 510)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_19212 ;
  {
  const GALGAS_mapDeclarationAST temp_50 = object ;
  const GALGAS_mapDeclarationAST temp_51 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_50.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 524)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 524)), temp_51.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 524)), var_elementTypeEntry_19212 COMMA_SOURCE_FILE ("type-map.galgas", 522)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_52 = object ;
  const GALGAS_mapDeclarationAST temp_53 = object ;
  const GALGAS_mapDeclarationAST temp_54 = object ;
  const GALGAS_mapDeclarationAST temp_55 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_52.readProperty_mMapTypeName (), temp_53.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map.galgas", 532)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 533)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 535)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 536)), var_typedPropertyList_12373, var_constructorMap_9999, var_getterMap_10090, var_setterMap_10118, var_instanceMethodMap_10166, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 542)), var_optionalMethodMap_18563, var_enumerationDescriptor_9400, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 545)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 545)) COMMA_SOURCE_FILE ("type-map.galgas", 545)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 545)) COMMA_SOURCE_FILE ("type-map.galgas", 545)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 545)) COMMA_SOURCE_FILE ("type-map.galgas", 545)), var_argumentTypeListForAddAssignWithFieldExpressionList_12679, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 547)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 548)), temp_54.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 550)), GALGAS_bool (false), var_elementTypeEntry_19212, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_55.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 554)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 554)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 528)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_21209 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21209, var_nameForUsefulness_21209, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_21372 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 586)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 586)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21209, var_elementTypeNameForUsefulness_21372 COMMA_SOURCE_FILE ("type-map.galgas", 587)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_21610 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_21643 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_21659 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_21659.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_21659.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_21610 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_21659.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_21643 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_21659.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_21922 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 599)) ;
  GALGAS_propertyIndexMap var_attributeMap_21964 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 600)) ;
  const GALGAS_mapDeclarationAST temp_6 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_22014 (temp_6.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_22014.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_22078 = function_typeNameForUsefulEntitiesGraph (enumerator_22014.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 602)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21209, var_propertyTypeNameForUsefulness_22078 COMMA_SOURCE_FILE ("type-map.galgas", 603)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_22252 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_22014.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 604)) ;
    GALGAS_bool var_hasSetter_22331 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_22358 = GALGAS_bool (false) ;
    var_typedAttributeList_21922.addAssign_operation (var_t_22252, enumerator_22014.current_mPropertyName (HERE), var_hasSetter_22331, var_hasSelector_22358  COMMA_SOURCE_FILE ("type-map.galgas", 607)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)).getter_hasKey (enumerator_22014.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 612)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_22551 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_22628 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 614)), kENUMERATION_UP) ;
        while (enumerator_22628.hasCurrentObject ()) {
          var_m_22551.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_22628.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
          enumerator_22628.gotoNextObject () ;
        }
        var_m_22551.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_22014.current_mPropertyName (HERE).readProperty_location (), var_m_22551, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
      }
    }
    {
    var_attributeMap_21964.setter_insertKey (enumerator_22014.current_mPropertyName (HERE), var_t_22252, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 620)) ;
    }
    enumerator_22014.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22859 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 623)) ;
  const GALGAS_mapDeclarationAST temp_9 = object ;
  cEnumerator_insertMethodListAST enumerator_22925 (temp_9.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_22925.hasCurrentObject ()) {
    {
    var_insertMethodMap_22859.setter_insertKey (enumerator_22925.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 625)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22925.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 626)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22925.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 627)) ;
    }
    enumerator_22925.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_23185 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 630)) ;
  const GALGAS_mapDeclarationAST temp_10 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_23233 (temp_10.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_23233.hasCurrentObject ()) {
    {
    var_searchMethodMap_23185.setter_insertKey (enumerator_23233.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23233.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 633)) ;
    }
    enumerator_23233.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_23429 (temp_11.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_23429.hasCurrentObject ()) {
    {
    var_insertMethodMap_22859.setter_insertKey (enumerator_23429.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 637)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23429.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 638)) ;
    }
    enumerator_23429.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = object ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_23669 (temp_12.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_23632 ((uint32_t) 0) ;
  while (enumerator_23669.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_23632.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_23669.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 643)) ;
      }
    }
    enumerator_23669.gotoNextObject () ;
    index_23632.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 641)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = object ;
  GALGAS_bool var_hasInsertOrReplaceModifier_23896 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 646)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_23896.operator_and (var_insertMethodMap_22859.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 647)) COMMA_SOURCE_FILE ("type-map.galgas", 647)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_24087 ;
      const GALGAS_mapDeclarationAST temp_17 = object ;
      temp_17.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_24087, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 649)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_24087, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 650)) ;
    }
  }
  const GALGAS_mapDeclarationAST temp_19 = object ;
  const GALGAS_mapDeclarationAST temp_20 = object ;
  const GALGAS_mapDeclarationAST temp_21 = object ;
  const GALGAS_mapDeclarationAST temp_22 = object ;
  const GALGAS_mapDeclarationAST temp_23 = object ;
  const GALGAS_mapDeclarationAST temp_24 = object ;
  const GALGAS_mapDeclarationAST temp_25 = object ;
  const GALGAS_mapDeclarationAST temp_26 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 654)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_20.readProperty_mMapTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 656)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_21.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 657)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 657)), temp_22.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 657)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 657)), temp_23.readProperty_mMapTypeName (), var_typedAttributeList_21922, temp_24.readProperty_mInsertMethodList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_23896, var_activateSuggestion_21643  COMMA_SOURCE_FILE ("type-map.galgas", 655))  COMMA_SOURCE_FILE ("type-map.galgas", 653)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 690)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 691)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 689))) ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  const GALGAS_mapTypeForGeneration temp_9 = object ;
  const GALGAS_mapTypeForGeneration temp_10 = object ;
  const GALGAS_mapTypeForGeneration temp_11 = object ;
  const GALGAS_mapTypeForGeneration temp_12 = object ;
  const GALGAS_mapTypeForGeneration temp_13 = object ;
  const GALGAS_mapTypeForGeneration temp_14 = object ;
  const GALGAS_mapTypeForGeneration temp_15 = object ;
  const GALGAS_mapTypeForGeneration temp_16 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 696)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 697)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 698)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 699)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 700)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 701)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 702)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 703)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 704)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 705)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 706)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 708)) COMMA_SOURCE_FILE ("type-map.galgas", 695))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 695)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendDeclaration2'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  cEnumerator_typedPropertyList enumerator_27105 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_27105.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_27105.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 719)) ;
    enumerator_27105.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 723)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 724)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 722))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  const GALGAS_mapTypeForGeneration temp_0 = object ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 735)) ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 736)) ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 738)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier (), temp_8.readProperty_mActivateSuggestions () COMMA_SOURCE_FILE ("type-map.galgas", 737))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_lstring var_key_1201 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapEntryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)), temp_1.readProperty_mMapEntryTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map-entry.galgas", 20)) ;
  {
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1201, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 21)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1201, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)), temp_4.readProperty_mAssociatedMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map-entry.galgas", 23)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 22)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                                extensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapEntryDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_2291 ;
  GALGAS_typedPropertyList var_mapTypedAttributeList_2349 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_2408 ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  GALGAS_bool joker_2253_3 ; // Joker input parameter
  GALGAS_bool joker_2253_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2253_1 ; // Joker input parameter
  GALGAS_bool joker_2297_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2297_2 ; // Joker input parameter
  GALGAS_propertyMap joker_2297_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2355_11 ; // Joker input parameter
  GALGAS_getterMap joker_2355_10 ; // Joker input parameter
  GALGAS_setterMap joker_2355_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2355_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2355_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_2355_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2355_5 ; // Joker input parameter
  GALGAS_operators joker_2355_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2355_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2355_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2355_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2414_6 ; // Joker input parameter
  GALGAS_bool joker_2414_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_2414_4 ; // Joker input parameter
  GALGAS_string joker_2414_3 ; // Joker input parameter
  GALGAS_string joker_2414_2 ; // Joker input parameter
  GALGAS_headerKind joker_2414_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_0.readProperty_mAssociatedMapTypeName (), joker_2253_3, joker_2253_2, joker_2253_1, var_typeKindEnum_2291, joker_2297_3, joker_2297_2, joker_2297_1, var_mapTypedAttributeList_2349, joker_2355_11, joker_2355_10, joker_2355_9, joker_2355_8, joker_2355_7, joker_2355_6, joker_2355_5, joker_2355_4, joker_2355_3, joker_2355_2, joker_2355_1, var_searchMethodList_2408, joker_2414_6, joker_2414_5, joker_2414_4, joker_2414_3, joker_2414_2, joker_2414_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 39)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2291.objectCompare (GALGAS_typeKindEnum::constructor_sharedMapType (SOURCE_FILE ("type-map-entry.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_mapEntryDeclarationAST temp_2 = object ;
      const GALGAS_mapEntryDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedMapTypeName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_3.readProperty_mAssociatedMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)), fixItArray4  COMMA_SOURCE_FILE ("type-map-entry.galgas", 50)) ;
      var_mapTypedAttributeList_2349 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 51)) ;
    }
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_2652 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 54)) ;
  GALGAS_constructorMap var_constructorMap_2713 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 55)) ;
  GALGAS_getterMap var_getterMap_2804 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_2804, inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 56)) ;
  }
  GALGAS_setterMap var_setterMap_2833 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 57)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_2881 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 58)) ;
  GALGAS_classMethodMap var_classMethodMap_2922 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 59)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedMapTypeIndex_3079 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedMapTypeName (), var_associatedMapTypeIndex_3079 COMMA_SOURCE_FILE ("type-map-entry.galgas", 61)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_3208 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3208 COMMA_SOURCE_FILE ("type-map-entry.galgas", 63)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_3340 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3340 COMMA_SOURCE_FILE ("type-map-entry.galgas", 65)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_mapEntryTypeIndex_3478 ;
  {
  const GALGAS_mapEntryDeclarationAST temp_6 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_6.readProperty_mMapEntryTypeName (), var_mapEntryTypeIndex_3478 COMMA_SOURCE_FILE ("type-map-entry.galgas", 67)) ;
  }
  GALGAS_formalParameterSignature var_argList_3569 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 69)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 70)), var_associatedMapTypeIndex_3079, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 70)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 70)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 71)), var_lstringTypeIndex_3340, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 71)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 71)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 72)), var_mapEntryTypeIndex_3478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 72)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 72)) ;
  {
  var_classMethodMap_2922.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 74)), var_argList_3569, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 73)) ;
  }
  {
  var_classMethodMap_2922.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeOptionalEntry"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 79)), var_argList_3569, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 78)) ;
  }
  var_argList_3569 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 84)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 85)), var_associatedMapTypeIndex_3079, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-entry.galgas", 85)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 85)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 86)), var_stringTypeIndex_3208, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-entry.galgas", 86)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 86)) ;
  var_argList_3569.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 87)), var_mapEntryTypeIndex_3478, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-entry.galgas", 87)), GALGAS_string ("outEntry")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 87)) ;
  {
  var_classMethodMap_2922.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeEntryFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 89)), var_argList_3569, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 88)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_2713, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("null"), temp_7.readProperty_mMapEntryTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 94)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_4859 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 102)) ;
  var_constructorAttributeTypeList_4859.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 103)), var_associatedMapTypeIndex_3079, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 103)) ;
  var_constructorAttributeTypeList_4859.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-entry.galgas", 104)), var_lstringTypeIndex_3340, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-entry.galgas", 104)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5070 (var_searchMethodList_2408, kENUMERATION_UP) ;
  while (enumerator_5070.hasCurrentObject ()) {
    {
    var_constructorMap_2713.setter_insertKey (enumerator_5070.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_4859, GALGAS_bool (true), var_mapEntryTypeIndex_3478, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 106)) ;
    }
    enumerator_5070.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 114)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 121)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 128)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 135)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 142)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2804, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 149)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6427 = var_getterMap_2804 ;
  cEnumerator_typedPropertyList enumerator_6483 (var_mapTypedAttributeList_2349, kENUMERATION_UP) ;
  while (enumerator_6483.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_inheritedGetterMap_6427.getter_hasKey (enumerator_6483.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map-entry.galgas", 159)).boolEnum () ;
      if (kBoolTrue == test_8) {
        GALGAS_string var_s_6594 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_6614 (var_inheritedGetterMap_6427.getter_keySet (SOURCE_FILE ("type-map-entry.galgas", 161)), kENUMERATION_UP) ;
        while (enumerator_6614.hasCurrentObject ()) {
          var_s_6594.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6614.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 162)) ;
          if (enumerator_6614.hasNextObject ()) {
            var_s_6594.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 163)) ;
          }
          enumerator_6614.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_6483.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("the map has a associated map entry, which has predefined getters: ").add_operation (var_s_6594, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)), fixItArray9  COMMA_SOURCE_FILE ("type-map-entry.galgas", 165)) ;
      }
    }
    if (kBoolFalse == test_8) {
      {
      var_getterMap_2804.setter_insertKey (enumerator_6483.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-entry.galgas", 170)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 171)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 172)), GALGAS_bool (true), enumerator_6483.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-entry.galgas", 175)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 168)) ;
      }
    }
    enumerator_6483.gotoNextObject () ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_10 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_10.readProperty_mMapEntryTypeName (), var_getterMap_2804, var_setterMap_2833, var_instanceMethodMap_2881, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 181)) ;
  }
  {
  const GALGAS_mapEntryDeclarationAST temp_11 = object ;
  const GALGAS_mapEntryDeclarationAST temp_12 = object ;
  const GALGAS_mapEntryDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.readProperty_mMapEntryTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 197)), GALGAS_typeKindEnum::constructor_sharedMapEntryType (SOURCE_FILE ("type-map-entry.galgas", 198)), GALGAS_bool (false), var_mapTypedAttributeList_2349, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 201)), var_mapTypedAttributeList_2349, var_constructorMap_2713, var_getterMap_2804, var_setterMap_2833, var_instanceMethodMap_2881, var_classMethodMap_2922, var_optionalMethodMap_2652, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 209)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map-entry.galgas", 210)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map-entry.galgas", 210)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 210)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 211)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-entry.galgas", 212)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 213)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-entry.galgas", 214)), var_searchMethodList_2408, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map-entry.galgas", 217)), GALGAS_string ("null"), GALGAS_string ("mapentry-").add_operation (temp_13.readProperty_mMapEntryTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map-entry.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 219)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-entry.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 193)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                               extensionMethod_mapEntryDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapEntryDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryDeclarationAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  GALGAS_lstring var_nameForUsefulness_9017 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapEntryTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9017, var_nameForUsefulness_9017, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 238)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9323 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9382 ;
  const GALGAS_mapEntryDeclarationAST temp_1 = object ;
  GALGAS_bool joker_9271_7 ; // Joker input parameter
  GALGAS_bool joker_9271_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9271_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9271_4 ; // Joker input parameter
  GALGAS_bool joker_9271_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9271_2 ; // Joker input parameter
  GALGAS_propertyMap joker_9271_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9329_11 ; // Joker input parameter
  GALGAS_getterMap joker_9329_10 ; // Joker input parameter
  GALGAS_setterMap joker_9329_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9329_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9329_7 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_9329_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9329_5 ; // Joker input parameter
  GALGAS_operators joker_9329_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9329_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9329_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9329_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9388_6 ; // Joker input parameter
  GALGAS_bool joker_9388_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_9388_4 ; // Joker input parameter
  GALGAS_string joker_9388_3 ; // Joker input parameter
  GALGAS_string joker_9388_2 ; // Joker input parameter
  GALGAS_headerKind joker_9388_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_1.readProperty_mAssociatedMapTypeName (), joker_9271_7, joker_9271_6, joker_9271_5, joker_9271_4, joker_9271_3, joker_9271_2, joker_9271_1, var_listTypeAttributeList_9323, joker_9329_11, joker_9329_10, joker_9329_9, joker_9329_8, joker_9329_7, joker_9329_6, joker_9329_5, joker_9329_4, joker_9329_3, joker_9329_2, joker_9329_1, var_searchMethodList_9382, joker_9388_6, joker_9388_5, joker_9388_4, joker_9388_3, joker_9388_2, joker_9388_1, inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 240)) ;
  const GALGAS_mapEntryDeclarationAST temp_2 = object ;
  const GALGAS_mapEntryDeclarationAST temp_3 = object ;
  const GALGAS_mapEntryDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map entry ").add_operation (temp_2.readProperty_mMapEntryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 250)), GALGAS_mapEntryTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mMapEntryTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 252)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mAssociatedMapTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 253)), var_listTypeAttributeList_9323, var_searchMethodList_9382  COMMA_SOURCE_FILE ("type-map-entry.galgas", 251))  COMMA_SOURCE_FILE ("type-map-entry.galgas", 249)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                         extensionMethod_mapEntryDeclarationAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryDeclarationAST_semanticAnalysis (defineExtensionMethod_mapEntryDeclarationAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper 'mapEntryGenerationTemplate'
//
//----------------------------------------------------------------------------------------------------------------------

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapEntryGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapEntryGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapEntryGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapEntryGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapEntryGenerationTemplate_0
) ;


//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapEntryGenerationTemplate mapEntryTypeHeader1'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//----------------------------------------------------------------------------------------------------------------------\n"
    "//\n"
    "//" ;
  result << GALGAS_string (" Phase 1: @").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map entry"), inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.h1.galgasTemplate", 3)).stringValue () ;
  result << "\n"
    "//\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_sharedMapEntry {\n"
    "//--------------------------------- Default constructor\n"
    "  public: GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Filewrapper template 'mapEntryGenerationTemplate mapEntryTypeSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                 const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
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
    "AC_GALGAS_sharedMapEntry () {\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_null (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNullEntry (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeOptionalEntry (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstring inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeOptionalEntry (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeEntry (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstring inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeEntry (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//----------------------------------------------------------------------------------------------------------------------\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeEntryFromString (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & ioMap,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_string inKey,\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & outEntry\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outEntry.internalMakeEntryFromString (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2158_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2158 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2158.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_2158.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_2158.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 44)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n"
        "                                       " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_2158.current_mPropertyTypeEntry (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 46)).stringValue () ;
      result << " result ;\n"
        "  const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) getAttributeListPointer (inCompiler, " ;
      result << enumerator_2158.current_mPropertyName (HERE).readProperty_string ().getter_utf_38_Representation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 47)).stringValue () ;
      result << " COMMA_THERE) ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_2158.current_mPropertyName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 50)).stringValue () ;
      result << ";\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_2158_IDX.increment () ;
      enumerator_2158.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3160_IDX (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_3160 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3160.hasCurrentObject ()) {
      result << "//----------------------------------------------------------------------------------------------------------------------\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_3160.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 58)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "const GALGAS_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " & inMap,\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_lstring & inKey,\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        "                                                " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " result ;\n"
        "  result.internalMakeRegularEntryBySearchingKey (inMap, inKey, kSearchErrorMessage_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3160.current_mSearchMethodName (HERE).readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapentry.cpp.galgasTemplate", 63)).stringValue () ;
      result << ", inCompiler COMMA_THERE) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_3160_IDX.increment () ;
      enumerator_3160.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@mapEntryTypeForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapEntryTypeForGeneration * object = (const cPtr_mapEntryTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryTypeForGeneration) ;
  const GALGAS_mapEntryTypeForGeneration temp_0 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_1 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapEntryGenerationTemplate_mapEntryTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 294)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 295)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 293))) ;
  const GALGAS_mapEntryTypeForGeneration temp_2 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_3 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_4 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_5 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_6 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_7 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_8 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_9 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_10 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_11 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_12 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_13 = object ;
  const GALGAS_mapEntryTypeForGeneration temp_14 = object ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 298)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 299)), temp_4.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 300)), temp_5.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 301)), temp_6.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 302)), temp_7.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 303)), temp_8.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 304)), temp_9.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 305)), temp_10.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 306)), temp_11.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 307)), temp_12.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 308)), temp_13.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 309)), temp_14.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-entry.galgas", 310)) COMMA_SOURCE_FILE ("type-map-entry.galgas", 297))), inCompiler  COMMA_SOURCE_FILE ("type-map-entry.galgas", 297)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapEntryTypeForGeneration.mSlotID,
                                              extensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_mapEntryTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapEntryTypeForGeneration_appendDeclaration_31_, NULL) ;

