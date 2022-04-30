#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-24.h"

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
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("optionCompilation.galgas", 167)) ;
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
  GALGAS_commandLineOptionMap var_boolOptionMap_6856 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 180)) ;
  GALGAS_commandLineOptionMap var_uintOptionMap_6903 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 181)) ;
  GALGAS_commandLineOptionMap var_stringOptionMap_6952 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 182)) ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_7005 = GALGAS_commandLineOptionMap::constructor_emptyMap (SOURCE_FILE ("optionCompilation.galgas", 183)) ;
  GALGAS_stringset var_optionNameSet_7030 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("optionCompilation.galgas", 184)) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  cEnumerator_commandLineOptionListAST enumerator_7202 (temp_0.readProperty_mOptions (), kENUMERATION_UP) ;
  while (enumerator_7202.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_optionNameSet_7030.getter_hasKey (enumerator_7202.current_mOptionInternalName (HERE).readProperty_string () COMMA_SOURCE_FILE ("optionCompilation.galgas", 186)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_7202.current_mOptionInternalName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_7202.current_mOptionInternalName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)), fixItArray2  COMMA_SOURCE_FILE ("optionCompilation.galgas", 187)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("bool"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          {
          var_boolOptionMap_6856.setter_insertKey (enumerator_7202.current_mOptionInternalName (HERE), enumerator_7202.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7202.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7202.current_mOptionComment (HERE).readProperty_string (), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 189)) ;
          }
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            test_4 = GALGAS_bool (kIsNotEqual, enumerator_7202.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 196)))).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @bool option cannot have a default value (default value is always false)"), fixItArray5  COMMA_SOURCE_FILE ("optionCompilation.galgas", 197)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_3) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("uint"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("0") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_string () ;
            }
            var_uintOptionMap_6903.setter_insertKey (enumerator_7202.current_mOptionInternalName (HERE), enumerator_7202.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7202.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7202.current_mOptionComment (HERE).readProperty_string (), temp_7, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 200)) ;
            }
            enumGalgasBool test_9 = kBoolTrue ;
            if (kBoolTrue == test_9) {
              test_9 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 207)))).boolEnum () ;
              if (kBoolTrue == test_9) {
                TC_Array <C_FixItDescription> fixItArray10 ;
                inCompiler->emitSemanticError (enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray10  COMMA_SOURCE_FILE ("optionCompilation.galgas", 208)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("string"))).boolEnum () ;
            if (kBoolTrue == test_11) {
              {
              var_stringOptionMap_6952.setter_insertKey (enumerator_7202.current_mOptionInternalName (HERE), enumerator_7202.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7202.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7202.current_mOptionComment (HERE).readProperty_string (), enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)) ;
              }
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 218)))).boolEnum () ;
                if (kBoolTrue == test_12) {
                  TC_Array <C_FixItDescription> fixItArray13 ;
                  inCompiler->emitSemanticError (enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray13  COMMA_SOURCE_FILE ("optionCompilation.galgas", 219)) ;
                }
              }
            }
          }
          if (kBoolFalse == test_11) {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              test_14 = GALGAS_bool (kIsEqual, enumerator_7202.current_mOptionTypeName (HERE).readProperty_string ().objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
              if (kBoolTrue == test_14) {
                {
                var_stringListOptionMap_7005.setter_insertKey (enumerator_7202.current_mOptionInternalName (HERE), enumerator_7202.current_mOptionInvocationLetter (HERE).readProperty_char (), enumerator_7202.current_mOptionInvocationString (HERE).readProperty_string (), enumerator_7202.current_mOptionComment (HERE).readProperty_string (), enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 222)) ;
                }
                enumGalgasBool test_15 = kBoolTrue ;
                if (kBoolTrue == test_15) {
                  test_15 = GALGAS_bool (kIsNotEqual, enumerator_7202.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 229)))).boolEnum () ;
                  if (kBoolTrue == test_15) {
                    TC_Array <C_FixItDescription> fixItArray16 ;
                    inCompiler->emitSemanticError (enumerator_7202.current_mOptionDefaultValue (HERE).readProperty_location (), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray16  COMMA_SOURCE_FILE ("optionCompilation.galgas", 230)) ;
                  }
                }
              }
            }
            if (kBoolFalse == test_14) {
              TC_Array <C_FixItDescription> fixItArray17 ;
              inCompiler->emitSemanticError (enumerator_7202.current_mOptionTypeName (HERE).readProperty_location (), GALGAS_string ("only the @bool, @uint or @string types are allowed here"), fixItArray17  COMMA_SOURCE_FILE ("optionCompilation.galgas", 233)) ;
            }
          }
        }
      }
    }
    var_optionNameSet_7030.addAssign_operation (enumerator_7202.current_mOptionInternalName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("optionCompilation.galgas", 235)) ;
    enumerator_7202.gotoNextObject () ;
  }
  {
  const GALGAS_optionComponentDeclarationAST temp_18 = object ;
  const GALGAS_optionComponentDeclarationAST temp_19 = object ;
  ioArgument_ioSemanticContext.mProperty_mOptionComponentMapForSemanticAnalysis.setter_insertKey (temp_18.readProperty_mOptionComponentName (), temp_19.readProperty_mIsPredefined (), var_boolOptionMap_6856, var_uintOptionMap_6903, var_stringOptionMap_6952, var_stringListOptionMap_7005, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 238)) ;
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
  GALGAS_lstring var_nameForUsefulness_10365 = function_optionNameForUsefulEntitiesGraph (temp_0.readProperty_mOptionComponentName (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 261)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_10365, var_nameForUsefulness_10365, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 262)) ;
  }
  GALGAS_bool var_isPredefined_10637 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_10682 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_10727 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_10774 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_10825 ;
  const GALGAS_optionComponentDeclarationAST temp_1 = object ;
  constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mOptionComponentName (), var_isPredefined_10637, var_boolOptionMap_10682, var_uintOptionMap_10727, var_stringOptionMap_10774, var_stringListOptionMap_10825, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 264)) ;
  const GALGAS_optionComponentDeclarationAST temp_2 = object ;
  const GALGAS_optionComponentDeclarationAST temp_3 = object ;
  const GALGAS_optionComponentDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (temp_2.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 274)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 277)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 277)), var_isPredefined_10637, temp_4.readProperty_mOptionComponentName ().readProperty_string (), var_boolOptionMap_10682, var_uintOptionMap_10727, var_stringOptionMap_10774, var_stringListOptionMap_10825  COMMA_SOURCE_FILE ("optionCompilation.galgas", 275))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 273)) ;
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
    temp_1 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 309)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 309)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, temp_2.readProperty_mOptionComponentName (), temp_3.readProperty_mBoolOptionMap (), temp_4.readProperty_mUIntOptionMap (), temp_5.readProperty_mStringOptionMap (), temp_6.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 321))) ;
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
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_2.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 341))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 341)) ;
    const GALGAS_optionComponentForGeneration temp_3 = object ;
    const GALGAS_optionComponentForGeneration temp_4 = object ;
    const GALGAS_optionComponentForGeneration temp_5 = object ;
    const GALGAS_optionComponentForGeneration temp_6 = object ;
    const GALGAS_optionComponentForGeneration temp_7 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, temp_3.readProperty_mOptionComponentName (), temp_4.readProperty_mBoolOptionMap (), temp_5.readProperty_mUIntOptionMap (), temp_6.readProperty_mStringOptionMap (), temp_7.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 342))) ;
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
    GALGAS_bool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 360)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
    if (kBoolTrue == test_1.boolEnum ()) {
      const GALGAS_optionComponentForGeneration temp_2 = object ;
      test_1 = temp_2.readProperty_mIsPredefined ().operator_not (SOURCE_FILE ("optionCompilation.galgas", 360)) ;
    }
    test_0 = test_1.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_optionComponentForGeneration temp_3 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_3.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 361)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 361))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 361)) ;
      {
      const GALGAS_optionComponentForGeneration temp_4 = object ;
      const GALGAS_optionComponentForGeneration temp_5 = object ;
      const GALGAS_optionComponentForGeneration temp_6 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_4.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 364)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 364)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 364)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, temp_5.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 368))), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, temp_6.readProperty_mOptionComponentName () COMMA_SOURCE_FILE ("optionCompilation.galgas", 372))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 362)) ;
      }
      const GALGAS_optionComponentForGeneration temp_7 = object ;
      ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (temp_7.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 378)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 378))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 378)) ;
      const GALGAS_optionComponentForGeneration temp_8 = object ;
      ioArgument_ioCocoaProductFileList.addAssign_operation (GALGAS_string ("option-").add_operation (temp_8.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 379)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 379))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 379)) ;
      {
      const GALGAS_optionComponentForGeneration temp_9 = object ;
      const GALGAS_optionComponentForGeneration temp_10 = object ;
      const GALGAS_optionComponentForGeneration temp_11 = object ;
      const GALGAS_optionComponentForGeneration temp_12 = object ;
      const GALGAS_optionComponentForGeneration temp_13 = object ;
      const GALGAS_optionComponentForGeneration temp_14 = object ;
      const GALGAS_optionComponentForGeneration temp_15 = object ;
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (temp_9.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 382)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 382)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 382)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (temp_10.readProperty_mOptionComponentName ().getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 387)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 387)), temp_11.readProperty_mOptionComponentName (), temp_12.readProperty_mBoolOptionMap (), temp_13.readProperty_mUIntOptionMap (), temp_14.readProperty_mStringOptionMap (), temp_15.readProperty_mStringListOptionMap () COMMA_SOURCE_FILE ("optionCompilation.galgas", 386))), GALGAS_string ("\n"
        "\n"), GALGAS_string ("\n"
        "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 380)) ;
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
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 369)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_12352 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_12352.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_12352.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 371)) ;
    }
    enumerator_12352.gotoNextObject () ;
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
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName ().readProperty_location (), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 387)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_13018 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 390)) ;
  cEnumerator_lstringlist enumerator_13082 (constinArgument_inGUIComponentAST.readProperty_mImportedOptionList (), kENUMERATION_UP) ;
  while (enumerator_13082.hasCurrentObject ()) {
    GALGAS_bool joker_13221_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13221_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13221_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13221_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_13221_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mOptionComponentMapForSemanticAnalysis ().method_searchKey (enumerator_13082.current_mValue (HERE), joker_13221_5, joker_13221_4, joker_13221_3, joker_13221_2, joker_13221_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 393)) ;
    var_context_13018.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_13082.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 397)) ;
    enumerator_13082.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_13343 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_13370 (constinArgument_inGUIComponentAST.readProperty_mGlobalSimpleAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13370.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13370.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_13343.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13370.current_mKey (HERE).readProperty_location (), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 404)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_13370.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_13370.current_mValue (HERE).readProperty_location (), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 406)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_13018.setter_setMBuildRunOption (enumerator_13370.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 408)) ;
            var_runOptionDefined_13343 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_13370.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_13853 (enumerator_13370.current_mValue (HERE).readProperty_string ().getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 412)), kENUMERATION_UP) ;
          while (enumerator_13853.hasCurrentObject ()) {
            var_context_13018.mProperty_mNibAndClassList.addAssign_operation (enumerator_13853.current (HERE).readProperty_mValue ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 413)) ;
            enumerator_13853.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_13370.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_13370.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 416)) ;
      }
    }
    enumerator_13370.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_14125 (constinArgument_inGUIComponentAST.readProperty_mWithLexiqueList (), kENUMERATION_UP) ;
  GALGAS_uint index_14061 ((uint32_t) 0) ;
  while (enumerator_14125.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_14327 ;
    GALGAS_indexingListAST joker_14335_2 ; // Joker input parameter
    GALGAS_lstring joker_14335_1 ; // Joker input parameter
    constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (enumerator_14125.current_mLexiqueFileName (HERE), var_terminalMap_14327, joker_14335_2, joker_14335_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 422)) ;
    GALGAS_stringset var_terminalSymbolSet_14402 = var_terminalMap_14327.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 428)) ;
    cEnumerator_guiLabelListAST enumerator_14472 (enumerator_14125.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_14472.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_14510 (enumerator_14472.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_14510.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_14402.getter_hasKey (enumerator_14510.current_mTerminal (HERE).readProperty_string () COMMA_SOURCE_FILE ("guiCompilation.galgas", 432)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 432)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_14510.current_mTerminal (HERE).readProperty_location (), GALGAS_string ("the '$").add_operation (enumerator_14510.current_mTerminal (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 433)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 434)).add_operation (enumerator_14125.current_mLexiqueFileName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 435)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 436)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 433)) ;
          }
        }
        enumerator_14510.gotoNextObject () ;
      }
      enumerator_14472.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_14867 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 442)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_14908 (enumerator_14125.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_14908.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_14908.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_14908.current_mKey (HERE).readProperty_location (), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 445)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_14867.addAssign_operation (enumerator_14908.current_mAttributeName (HERE).readProperty_string (), enumerator_14908.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("guiCompilation.galgas", 447)) ;
      }
      enumerator_14908.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_15212 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_15250 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_15288 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_15325 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_15359 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_15385 (enumerator_14125.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_15385.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_15385.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_13018.mProperty_mExtensionMap.setter_insertKey (enumerator_15385.current_mValue (HERE), enumerator_14125.current_mLexiqueFileName (HERE).readProperty_string (), index_14061, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 458)) ;
          }
          var_hasAssociatedExtension_15212 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_15385.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_15250.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_15385.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15385.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 462)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 462)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 462)) ;
              }
            }
            var_hasTabViewTitle_15250 = GALGAS_bool (true) ;
            var_tabViewTitle_15325 = enumerator_15385.current_mValue (HERE).readProperty_string () ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_15385.current_mKey (HERE).readProperty_string ().objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_15288.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_15385.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15385.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 468)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 468)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 468)) ;
                }
              }
              var_hasBlockComment_15288 = GALGAS_bool (true) ;
              var_blockComment_15359 = enumerator_15385.current_mValue (HERE).readProperty_string () ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_15385.current_mKey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_15385.current_mKey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 473)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 473)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 473)) ;
          }
        }
      }
      enumerator_15385.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_15212.operator_not (SOURCE_FILE ("guiCompilation.galgas", 477)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_14125.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 478)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_15250.operator_not (SOURCE_FILE ("guiCompilation.galgas", 481)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_14125.current_mLexiqueFileName (HERE).readProperty_location (), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 482)) ;
      }
    }
    var_context_13018.mProperty_mWithLexiqueList.addAssign_operation (enumerator_14125.current_mLexiqueFileName (HERE).readProperty_string (), index_14061, var_blockComment_15359, var_tabViewTitle_15325, var_textMacroList_14867, enumerator_14125.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 485)) ;
    enumerator_14125.gotoNextObject () ;
    index_14061.increment_operation (inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 420)) ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.readProperty_mGUIComponentName (), var_context_13018, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 494)) ;
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
  cEnumerator_optionComponentMapForGeneration enumerator_17352 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_17352.hasCurrentObject ()) {
    GALGAS_string var_fileName_17410 = GALGAS_string ("gui-").add_operation (enumerator_17352.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 512)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 512)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_17410  COMMA_SOURCE_FILE ("guiCompilation.galgas", 513)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_17410  COMMA_SOURCE_FILE ("guiCompilation.galgas", 514)) ;
    GALGAS_string var_s_17520 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_17352.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_17352.current_mGuiComponentContext (HERE).readProperty_mBuildRunOption () COMMA_SOURCE_FILE ("guiCompilation.galgas", 515))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_17410, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_17520, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 520)) ;
    }
    enumerator_17352.gotoNextObject () ;
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
  GALGAS_lstring var_key_3180 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 77)), temp_1.readProperty_mArrayTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-array.galgas", 77)) ;
  {
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3180, temp_2, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 78)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3180, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mElementTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 79)), temp_4.readProperty_mElementTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-array.galgas", 79)) COMMA_SOURCE_FILE ("type-array.galgas", 79)) ;
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
      inCompiler->emitSemanticError (temp_2.readProperty_mDimension ().readProperty_location (), GALGAS_string ("the dimension of an array should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("type-array.galgas", 93)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_arrayTypeIndex_4337 ;
  {
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mArrayTypeName (), var_arrayTypeIndex_4337 COMMA_SOURCE_FILE ("type-array.galgas", 96)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeIndex_4465 ;
  {
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mElementTypeName (), var_elementTypeIndex_4465 COMMA_SOURCE_FILE ("type-array.galgas", 98)) ;
  }
  GALGAS_constructorMap var_constructorMap_4508 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 100)) ;
  GALGAS_getterMap var_getterMap_4599 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4599, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 101)) ;
  }
  GALGAS_setterMap var_setterMap_4628 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 102)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4675 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 103)) ;
  GALGAS_unifiedTypeMap_2D_entry var_boolType_4782 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("bool"), var_boolType_4782 COMMA_SOURCE_FILE ("type-array.galgas", 105)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_4885 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4885 COMMA_SOURCE_FILE ("type-array.galgas", 107)) ;
  }
  GALGAS_functionSignature var_uintArgs_4925 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 109)) ;
  GALGAS_uint var_idx_4946 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_6 = object ;
  if (temp_6.readProperty_mDimension ().readProperty_uint ().isValid ()) {
    uint32_t variant_4957 = temp_6.readProperty_mDimension ().readProperty_uint ().uintValue () ;
    bool loop_4957 = true ;
    while (loop_4957) {
      const GALGAS_arrayDeclarationAST temp_7 = object ;
      loop_4957 = GALGAS_bool (kIsStrictInf, var_idx_4946.objectCompare (temp_7.readProperty_mDimension ().readProperty_uint ())).isValid () ;
      if (loop_4957) {
        loop_4957 = GALGAS_bool (kIsStrictInf, var_idx_4946.objectCompare (temp_7.readProperty_mDimension ().readProperty_uint ())).boolValue () ;
      }
      if (loop_4957 && (0 == variant_4957)) {
        loop_4957 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 111)) ;
      }
      if (loop_4957) {
        variant_4957 -- ;
        var_uintArgs_4925.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 112)), var_uintType_4885, GALGAS_string ("inSize").add_operation (var_idx_4946.getter_string (SOURCE_FILE ("type-array.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 112))  COMMA_SOURCE_FILE ("type-array.galgas", 112)) ;
        var_idx_4946.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 113)) ;
      }
    }
  }
  {
  var_constructorMap_4508.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 117))  COMMA_SOURCE_FILE ("type-array.galgas", 117)), var_uintArgs_4925, GALGAS_bool (false), var_arrayTypeIndex_4337, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 116)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_4599, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("axisCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 123)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4599, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("sizeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 130)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4599, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("rangeForAxis"), GALGAS_string ("uint"), GALGAS_string ("inAxisIndex"), GALGAS_string ("range"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 137)) ;
  }
  {
  var_getterMap_4599.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("isValueValidAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 147))  COMMA_SOURCE_FILE ("type-array.galgas", 147)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 148)), var_uintArgs_4925, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 150)), GALGAS_bool (true), var_boolType_4782, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 153)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 146)) ;
  }
  {
  var_getterMap_4599.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("valueAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 157))  COMMA_SOURCE_FILE ("type-array.galgas", 157)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 158)), var_uintArgs_4925, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 160)), GALGAS_bool (true), var_elementTypeIndex_4465, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 163)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-array.galgas", 156)) ;
  }
  GALGAS_formalParameterSignature var_setterFormalArgumentList_6353 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 167)) ;
  var_setterFormalArgumentList_6353.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 168)), var_elementTypeIndex_4465, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 168)), GALGAS_string ("InValue")  COMMA_SOURCE_FILE ("type-array.galgas", 168)) ;
  var_idx_4946 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayDeclarationAST temp_8 = object ;
  if (temp_8.readProperty_mDimension ().readProperty_uint ().isValid ()) {
    uint32_t variant_6523 = temp_8.readProperty_mDimension ().readProperty_uint ().uintValue () ;
    bool loop_6523 = true ;
    while (loop_6523) {
      const GALGAS_arrayDeclarationAST temp_9 = object ;
      loop_6523 = GALGAS_bool (kIsStrictInf, var_idx_4946.objectCompare (temp_9.readProperty_mDimension ().readProperty_uint ())).isValid () ;
      if (loop_6523) {
        loop_6523 = GALGAS_bool (kIsStrictInf, var_idx_4946.objectCompare (temp_9.readProperty_mDimension ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6523 && (0 == variant_6523)) {
        loop_6523 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 170)) ;
      }
      if (loop_6523) {
        variant_6523 -- ;
        var_setterFormalArgumentList_6353.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 171)), var_uintType_4885, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 171)), GALGAS_string ("inIndex").add_operation (var_idx_4946.getter_string (SOURCE_FILE ("type-array.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 171))  COMMA_SOURCE_FILE ("type-array.galgas", 171)) ;
        var_idx_4946.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 172)) ;
      }
    }
  }
  {
  var_setterMap_4628.setter_insertKey (GALGAS_string ("setValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 175)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 176)), var_setterFormalArgumentList_6353, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 179)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 174)) ;
  }
  {
  var_setterMap_4628.setter_insertKey (GALGAS_string ("forceValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 183)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 184)), var_setterFormalArgumentList_6353, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 187)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 182)) ;
  }
  {
  GALGAS_lstring joker_7121_4 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_7121_3 ; // Joker input parameter
  GALGAS_formalArgumentPassingModeAST joker_7121_2 ; // Joker input parameter
  GALGAS_string joker_7121_1 ; // Joker input parameter
  var_setterFormalArgumentList_6353.setter_popFirst (joker_7121_4, joker_7121_3, joker_7121_2, joker_7121_1, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 190)) ;
  }
  {
  var_setterMap_4628.setter_insertKey (GALGAS_string ("invalidateValueAtIndex").getter_nowhere (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 193)), var_setterFormalArgumentList_6353, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 191)) ;
  }
  {
  var_setterMap_4628.setter_insertKey (GALGAS_string ("setSize").getter_nowhere (SOURCE_FILE ("type-array.galgas", 200)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 201)), var_setterFormalArgumentList_6353, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 199)) ;
  }
  var_setterFormalArgumentList_6353 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 207)) ;
  var_setterFormalArgumentList_6353.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 208)), var_uintType_4885, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_string ("inSize")  COMMA_SOURCE_FILE ("type-array.galgas", 208)) ;
  var_setterFormalArgumentList_6353.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-array.galgas", 209)), var_uintType_4885, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-array.galgas", 209)), GALGAS_string ("inAxisIndex")  COMMA_SOURCE_FILE ("type-array.galgas", 209)) ;
  {
  var_setterMap_4628.setter_insertKey (GALGAS_string ("setSizeForAxis").getter_nowhere (SOURCE_FILE ("type-array.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-array.galgas", 212)), var_setterFormalArgumentList_6353, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-array.galgas", 215)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 210)) ;
  }
  {
  const GALGAS_arrayDeclarationAST temp_10 = object ;
  const GALGAS_arrayDeclarationAST temp_11 = object ;
  const GALGAS_arrayDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_10.readProperty_mArrayTypeName (), temp_11.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 223)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 224)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 226)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 227)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 228)), var_constructorMap_4508, var_getterMap_4599, var_setterMap_4628, var_instanceMethodMap_4675, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 233)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 234)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 235)), GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-array.galgas", 236)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 237)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 238)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 239)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 240)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 241)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-array.galgas", 243)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (temp_12.readProperty_mArrayTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 245)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 245)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 219)) ;
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
  GALGAS_lstring var_nameForUsefulness_9538 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mArrayTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 263)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9538, var_nameForUsefulness_9538, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 264)) ;
  }
  const GALGAS_arrayDeclarationAST temp_1 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_9703 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mElementTypeName (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 265)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9538, var_elementTypeNameForUsefulness_9703 COMMA_SOURCE_FILE ("type-array.galgas", 266)) ;
  }
  const GALGAS_arrayDeclarationAST temp_2 = object ;
  const GALGAS_arrayDeclarationAST temp_3 = object ;
  const GALGAS_arrayDeclarationAST temp_4 = object ;
  const GALGAS_arrayDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (temp_2.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mArrayTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 271)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mElementTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 272)), temp_5.readProperty_mDimension ().readProperty_uint ()  COMMA_SOURCE_FILE ("type-array.galgas", 270))  COMMA_SOURCE_FILE ("type-array.galgas", 268)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 292)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 293)), temp_2.readProperty_mElementTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 294)), temp_3.readProperty_mDimension () COMMA_SOURCE_FILE ("type-array.galgas", 291))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 298)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 300)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 301)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 302)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 303)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 304)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 305)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 306)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 307)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 308)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 309)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 310)) COMMA_SOURCE_FILE ("type-array.galgas", 297))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 297)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 320)) ;
  const GALGAS_arrayTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 321)) ;
  GALGAS_stringlist var_suffixList_12209 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 323)) ;
  GALGAS_uint var_idx_12241 = GALGAS_uint ((uint32_t) 0U) ;
  const GALGAS_arrayTypeForGeneration temp_2 = object ;
  if (temp_2.readProperty_mDimension ().isValid ()) {
    uint32_t variant_12252 = temp_2.readProperty_mDimension ().uintValue () ;
    bool loop_12252 = true ;
    while (loop_12252) {
      const GALGAS_arrayTypeForGeneration temp_3 = object ;
      loop_12252 = GALGAS_bool (kIsStrictInf, var_idx_12241.objectCompare (temp_3.readProperty_mDimension ())).isValid () ;
      if (loop_12252) {
        loop_12252 = GALGAS_bool (kIsStrictInf, var_idx_12241.objectCompare (temp_3.readProperty_mDimension ())).boolValue () ;
      }
      if (loop_12252 && (0 == variant_12252)) {
        loop_12252 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 325)) ;
      }
      if (loop_12252) {
        variant_12252 -- ;
        var_suffixList_12209.addAssign_operation (var_idx_12241.getter_string (SOURCE_FILE ("type-array.galgas", 326))  COMMA_SOURCE_FILE ("type-array.galgas", 326)) ;
        var_idx_12241.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 327)) ;
      }
    }
  }
  const GALGAS_arrayTypeForGeneration temp_4 = object ;
  const GALGAS_arrayTypeForGeneration temp_5 = object ;
  const GALGAS_arrayTypeForGeneration temp_6 = object ;
  const GALGAS_arrayTypeForGeneration temp_7 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 330)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 331)), temp_6.readProperty_mElementTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 332)), temp_7.readProperty_mDimension (), var_suffixList_12209 COMMA_SOURCE_FILE ("type-array.galgas", 329))) ;
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
  GALGAS_lstring var_key_3081 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 81)), temp_1.readProperty_mBoolsetTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 81)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3081, temp_2, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 82)) ;
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
  result_result = GALGAS_string ("boolset @").add_operation (temp_0.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 90)) ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 98)) ;
  result_result.addAssign_operation (GALGAS_string ("all")  COMMA_SOURCE_FILE ("type-boolset.galgas", 99)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-boolset.galgas", 100)) ;
  result_result.addAssign_operation (GALGAS_string ("dynamicType")  COMMA_SOURCE_FILE ("type-boolset.galgas", 101)) ;
  result_result.addAssign_operation (GALGAS_string ("none")  COMMA_SOURCE_FILE ("type-boolset.galgas", 102)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-boolset.galgas", 103)) ;
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
  GALGAS_stringset var_slotNameSet_4643 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-boolset.galgas", 115)) ;
  const GALGAS_boolsetDeclarationAST temp_0 = object ;
  cEnumerator_lstringlist enumerator_4664 (temp_0.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_4664.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 117)).getter_hasKey (enumerator_4664.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_m_4771 = GALGAS_string ("a slot cannot be named:") ;
        cEnumerator_stringset enumerator_4841 (function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)), kENUMERATION_UP) ;
        while (enumerator_4841.hasCurrentObject ()) {
          var_m_4771.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_4841.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 120)), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
          enumerator_4841.gotoNextObject () ;
        }
        var_m_4771.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 122)) ;
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_4664.current_mValue (HERE).readProperty_location (), var_m_4771, fixItArray2  COMMA_SOURCE_FILE ("type-boolset.galgas", 123)) ;
      }
    }
    if (kBoolFalse == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = var_slotNameSet_4643.getter_hasKey (enumerator_4664.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 124)).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4664.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated slot name"), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 125)) ;
        }
      }
    }
    var_slotNameSet_4643.addAssign_operation (enumerator_4664.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 127)) ;
    enumerator_4664.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_boolsetTypeIndex_5210 ;
  {
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mBoolsetTypeName (), var_boolsetTypeIndex_5210 COMMA_SOURCE_FILE ("type-boolset.galgas", 130)) ;
  }
  GALGAS_getterMap var_getterMap_5328 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5328, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 132)) ;
  }
  GALGAS_constructorMap var_constructorMap_5366 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 133)) ;
  {
  var_constructorMap_5366.setter_insertKey (GALGAS_string ("none").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 134)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 134)), GALGAS_bool (false), var_boolsetTypeIndex_5210, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 134)) ;
  }
  {
  var_constructorMap_5366.setter_insertKey (GALGAS_string ("all").getter_nowhere (SOURCE_FILE ("type-boolset.galgas", 135)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 135)), GALGAS_bool (false), var_boolsetTypeIndex_5210, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 135)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5328, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("none"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 136)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5328, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("all"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 143)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  cEnumerator_lstringlist enumerator_5897 (temp_6.readProperty_mFlagList (), kENUMERATION_UP) ;
  while (enumerator_5897.hasCurrentObject ()) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_constructorMap_5366.getter_hasKey (enumerator_5897.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-boolset.galgas", 151)).operator_not (SOURCE_FILE ("type-boolset.galgas", 151)).boolEnum () ;
      if (kBoolTrue == test_7) {
        {
        var_constructorMap_5366.setter_insertKey (enumerator_5897.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_bool (false), var_boolsetTypeIndex_5210, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 152)) ;
        }
        {
        routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5328, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5897.current_mValue (HERE).readProperty_string (), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 153)) ;
        }
      }
    }
    enumerator_5897.gotoNextObject () ;
  }
  GALGAS_setterMap var_setterMap_6312 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 163)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6382 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 165)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mBoolsetTypeName (), var_getterMap_5328, var_setterMap_6312, var_instanceMethodMap_6382, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 167)) ;
  }
  GALGAS_operators var_operators_6724 = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("type-boolset.galgas", 179)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("type-boolset.galgas", 179)) COMMA_SOURCE_FILE ("type-boolset.galgas", 179)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("type-boolset.galgas", 179)) COMMA_SOURCE_FILE ("type-boolset.galgas", 179)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("type-boolset.galgas", 179)) COMMA_SOURCE_FILE ("type-boolset.galgas", 179)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-boolset.galgas", 180)) COMMA_SOURCE_FILE ("type-boolset.galgas", 179)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("type-boolset.galgas", 180)) COMMA_SOURCE_FILE ("type-boolset.galgas", 180)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-boolset.galgas", 180)) COMMA_SOURCE_FILE ("type-boolset.galgas", 180)) ;
  {
  const GALGAS_boolsetDeclarationAST temp_9 = object ;
  const GALGAS_boolsetDeclarationAST temp_10 = object ;
  const GALGAS_boolsetDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_9.readProperty_mBoolsetTypeName (), temp_10.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 186)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 187)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 189)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 190)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 191)), var_constructorMap_5366, var_getterMap_5328, var_setterMap_6312, var_instanceMethodMap_6382, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 196)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 197)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 198)), var_operators_6724, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 200)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 201)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 202)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 203)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 204)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-boolset.galgas", 206)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (temp_11.readProperty_mBoolsetTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 208)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 182)) ;
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
    test_0 = GALGAS_bool (kIsStrictSup, temp_1.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 227)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_boolsetDeclarationAST temp_2 = object ;
      GALGAS_lstring var_s_8286 = temp_2.readProperty_mFlagList ().getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 228)) ;
      const GALGAS_boolsetDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_s_8286.readProperty_location (), GALGAS_string ("max flags count is 64 (here: ").add_operation (temp_3.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 229)).getter_string (SOURCE_FILE ("type-boolset.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 229)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 229)), fixItArray4  COMMA_SOURCE_FILE ("type-boolset.galgas", 229)) ;
    }
  }
  const GALGAS_boolsetDeclarationAST temp_5 = object ;
  GALGAS_lstring var_boolsetNameForUsefulness_8465 = function_typeNameForUsefulEntitiesGraph (temp_5.readProperty_mBoolsetTypeName (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 232)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_8465, var_boolsetNameForUsefulness_8465, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 233)) ;
  }
  const GALGAS_boolsetDeclarationAST temp_6 = object ;
  const GALGAS_boolsetDeclarationAST temp_7 = object ;
  const GALGAS_boolsetDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (temp_6.readProperty_mBoolsetTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 235)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mBoolsetTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 237)), temp_8.readProperty_mFlagList ()  COMMA_SOURCE_FILE ("type-boolset.galgas", 236))  COMMA_SOURCE_FILE ("type-boolset.galgas", 234)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 274)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 275)), temp_2.readProperty_mFlagList () COMMA_SOURCE_FILE ("type-boolset.galgas", 273))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 279)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 280)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 281)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 282)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 283)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 284)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 285)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 286)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 287)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 288)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 289)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 290)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 291)) COMMA_SOURCE_FILE ("type-boolset.galgas", 278))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 278)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 302)) ;
  const GALGAS_boolsetTypeForGeneration temp_1 = object ;
  const GALGAS_boolsetTypeForGeneration temp_2 = object ;
  const GALGAS_boolsetTypeForGeneration temp_3 = object ;
  const GALGAS_boolsetTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 304)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 305)), temp_3.readProperty_mFlagList (), GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 307)).left_shift_operation (temp_4.readProperty_mFlagList ().getter_length (SOURCE_FILE ("type-boolset.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 307)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 307)) COMMA_SOURCE_FILE ("type-boolset.galgas", 303))) ;
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
  result_result = GALGAS_string ("valueclass @").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 197)) ;
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
  GALGAS_lstring var_key_7047 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 209)), temp_1.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 209)) ;
  {
  const GALGAS_classDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7047, temp_2, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 210)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_classDeclarationAST temp_4 = object ;
    test_3 = GALGAS_bool (kIsNotEqual, temp_4.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      {
      const GALGAS_classDeclarationAST temp_5 = object ;
      const GALGAS_classDeclarationAST temp_6 = object ;
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7047, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_5.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 214)), temp_6.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 214)) COMMA_SOURCE_FILE ("type-class.galgas", 212)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_7 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_7394 (temp_7.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_7394.hasCurrentObject ()) {
    {
    const GALGAS_classDeclarationAST temp_8 = object ;
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_7047, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_7394.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 218)), temp_8.readProperty_mSuperClassName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 218)) COMMA_SOURCE_FILE ("type-class.galgas", 218)) ;
    }
    enumerator_7394.gotoNextObject () ;
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
  GALGAS_getterMap var_getterMap_8220 ;
  GALGAS_setterMap var_setterMap_8247 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8290 ;
  GALGAS_typedPropertyList var_inheritedTypedPropertyList_8342 ;
  GALGAS_propertyMap var_attributeMap_8374 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 236)) ;
  GALGAS_unifiedTypeMap_2D_entry var_superClassIndex_8447 ;
  GALGAS_bool var_generateHeaderInSeparateFile_8488 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_classDeclarationAST temp_1 = object ;
    test_0 = GALGAS_bool (kIsEqual, temp_1.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_8447 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 241)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8220, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
      }
      var_setterMap_8247 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 243)) ;
      var_instanceMethodMap_8290 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 244)) ;
      var_inheritedTypedPropertyList_8342 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 245)) ;
      var_attributeMap_8374 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 246)) ;
      var_generateHeaderInSeparateFile_8488 = GALGAS_bool (false) ;
      const GALGAS_classDeclarationAST temp_2 = object ;
      cEnumerator_lstringlist enumerator_8816 (temp_2.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
      while (enumerator_8816.hasCurrentObject ()) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_8816.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_generateHeaderInSeparateFile_8488 = GALGAS_bool (true) ;
          }
        }
        enumerator_8816.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    const GALGAS_classDeclarationAST temp_4 = object ;
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_4.readProperty_mSuperClassName (), var_superClassIndex_8447 COMMA_SOURCE_FILE ("type-class.galgas", 254)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_9113 ;
    GALGAS_getterMap var_inheritedGetterMap_9151 ;
    GALGAS_setterMap var_inheritedSetterMap_9189 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_9235 ;
    const GALGAS_classDeclarationAST temp_5 = object ;
    GALGAS_bool joker_9313_3 ; // Joker input parameter
    GALGAS_bool joker_9313_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_9313_1 ; // Joker input parameter
    GALGAS_bool joker_9343 ; // Joker input parameter
    GALGAS_typedPropertyList joker_9406_2 ; // Joker input parameter
    GALGAS_constructorMap joker_9406_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_9494_9 ; // Joker input parameter
    GALGAS_optionalMethodMap joker_9494_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_9494_7 ; // Joker input parameter
    GALGAS_operators joker_9494_6 ; // Joker input parameter
    GALGAS_functionSignature joker_9494_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_9494_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_9494_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_9494_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_9494_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_entry joker_9540_4 ; // Joker input parameter
    GALGAS_string joker_9540_3 ; // Joker input parameter
    GALGAS_string joker_9540_2 ; // Joker input parameter
    GALGAS_headerKind joker_9540_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_5.readProperty_mSuperClassName (), joker_9313_3, joker_9313_2, joker_9313_1, var_typeKindEnum_9113, joker_9343, var_inheritedTypedPropertyList_8342, var_attributeMap_8374, joker_9406_2, joker_9406_1, var_inheritedGetterMap_9151, var_inheritedSetterMap_9189, var_inheritedMethodMap_9235, joker_9494_9, joker_9494_8, joker_9494_7, joker_9494_6, joker_9494_5, joker_9494_4, joker_9494_3, joker_9494_2, joker_9494_1, var_generateHeaderInSeparateFile_8488, joker_9540_4, joker_9540_3, joker_9540_2, joker_9540_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 259)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_typeKindEnum_9113.getter_isClassType (SOURCE_FILE ("type-class.galgas", 275)).operator_not (SOURCE_FILE ("type-class.galgas", 275)).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_classDeclarationAST temp_7 = object ;
        const GALGAS_classDeclarationAST temp_8 = object ;
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (temp_7.readProperty_mSuperClassName ().readProperty_location (), GALGAS_string ("the @").add_operation (temp_8.readProperty_mSuperClassName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 276)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 276)), fixItArray9  COMMA_SOURCE_FILE ("type-class.galgas", 276)) ;
      }
    }
    var_setterMap_8247 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 279)) ;
    cEnumerator_setterMap enumerator_9816 (var_inheritedSetterMap_9189, kENUMERATION_UP) ;
    while (enumerator_9816.hasCurrentObject ()) {
      {
      var_setterMap_8247.setter_insertKey (enumerator_9816.current_lkey (HERE), enumerator_9816.current_mKind (HERE), enumerator_9816.current_mParameterList (HERE), enumerator_9816.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 286)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 281)) ;
      }
      enumerator_9816.gotoNextObject () ;
    }
    var_getterMap_8220 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 291)) ;
    cEnumerator_getterMap enumerator_10190 (var_inheritedGetterMap_9151, kENUMERATION_UP) ;
    while (enumerator_10190.hasCurrentObject ()) {
      {
      var_getterMap_8220.setter_insertKey (enumerator_10190.current_lkey (HERE), enumerator_10190.current_mKind (HERE), enumerator_10190.current_mArgumentTypeList (HERE), enumerator_10190.current_mDeclarationLocation (HERE), enumerator_10190.current_mHasCompilerArgument (HERE), enumerator_10190.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 300)), enumerator_10190.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 293)) ;
      }
      enumerator_10190.gotoNextObject () ;
    }
    var_instanceMethodMap_8290 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 305)) ;
    cEnumerator_instanceMethodMap enumerator_10614 (var_inheritedMethodMap_9235, kENUMERATION_UP) ;
    while (enumerator_10614.hasCurrentObject ()) {
      {
      var_instanceMethodMap_8290.setter_insertKey (enumerator_10614.current_lkey (HERE), enumerator_10614.current_mKind (HERE), enumerator_10614.current_mParameterList (HERE), enumerator_10614.current_mDeclarationLocation (HERE), enumerator_10614.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 313)), enumerator_10614.current_mMutability (HERE), enumerator_10614.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 307)) ;
      }
      enumerator_10614.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorPropertyTypeList_10986 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 320)) ;
  cEnumerator_typedPropertyList enumerator_11046 (var_inheritedTypedPropertyList_8342, kENUMERATION_UP) ;
  while (enumerator_11046.hasCurrentObject ()) {
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = enumerator_11046.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_11046.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 323)) ;
    }
    var_constructorPropertyTypeList_10986.addAssign_operation (temp_10, enumerator_11046.current_mPropertyTypeEntry (HERE), enumerator_11046.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 322)) ;
    enumerator_11046.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_12 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_11314 (temp_12.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11314.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_11449 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_11314.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11449 COMMA_SOURCE_FILE ("type-class.galgas", 328)) ;
    }
    GALGAS_bool var_hasSelector_11470 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_11497 (enumerator_11314.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_11497.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_11497.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          enumGalgasBool test_14 = kBoolTrue ;
          if (kBoolTrue == test_14) {
            test_14 = var_hasSelector_11470.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              fixItArray15.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_11497.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 333)) ;
            }
          }
          var_hasSelector_11470 = GALGAS_bool (true) ;
        }
      }
      enumerator_11497.gotoNextObject () ;
    }
    GALGAS_lstring temp_16 ;
    const enumGalgasBool test_17 = var_hasSelector_11470.boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = enumerator_11314.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 339)) ;
    }
    var_constructorPropertyTypeList_10986.addAssign_operation (temp_16, var_attributeTypeIndex_11449, enumerator_11314.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 338)) ;
    {
    var_attributeMap_8374.setter_insertKey (enumerator_11314.current_mPropertyName (HERE), enumerator_11314.current_mIsPublic (HERE), enumerator_11314.current_isConstant (HERE), var_attributeTypeIndex_11449, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 342)) ;
    }
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = var_getterMap_8220.getter_hasKey (enumerator_11314.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-class.galgas", 348)).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_11314.current_mPropertyName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_11314.current_mPropertyName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 349)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 349)), fixItArray19  COMMA_SOURCE_FILE ("type-class.galgas", 349)) ;
      }
    }
    enumerator_11314.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_classIndex_12324 ;
  {
  const GALGAS_classDeclarationAST temp_20 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_20.readProperty_mClassTypeName (), var_classIndex_12324 COMMA_SOURCE_FILE ("type-class.galgas", 353)) ;
  }
  GALGAS_constructorMap var_constructorMap_12383 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 359)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_classDeclarationAST temp_22 = object ;
    test_21 = temp_22.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 360)).boolEnum () ;
    if (kBoolTrue == test_21) {
      {
      var_constructorMap_12383.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 362))  COMMA_SOURCE_FILE ("type-class.galgas", 362)), var_constructorPropertyTypeList_10986, GALGAS_bool (false), var_classIndex_12324, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 361)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedPropertyList_12655 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 369)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_12707 = var_inheritedTypedPropertyList_8342 ;
  const GALGAS_classDeclarationAST temp_23 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12801 (temp_23.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12801.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_12936 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_12801.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12936 COMMA_SOURCE_FILE ("type-class.galgas", 372)) ;
    }
    GALGAS_bool var_hasSelector_12957 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12981 (enumerator_12801.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_12981.hasCurrentObject ()) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (kIsEqual, enumerator_12981.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          TC_Array <C_FixItDescription> fixItArray25 ;
          inCompiler->emitSemanticWarning (enumerator_12981.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 376)) ;
        }
      }
      if (kBoolFalse == test_24) {
        enumGalgasBool test_26 = kBoolTrue ;
        if (kBoolTrue == test_26) {
          test_26 = GALGAS_bool (kIsEqual, enumerator_12981.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_26) {
            TC_Array <C_FixItDescription> fixItArray27 ;
            inCompiler->emitSemanticWarning (enumerator_12981.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray27  COMMA_SOURCE_FILE ("type-class.galgas", 378)) ;
          }
        }
        if (kBoolFalse == test_26) {
          enumGalgasBool test_28 = kBoolTrue ;
          if (kBoolTrue == test_28) {
            test_28 = GALGAS_bool (kIsEqual, enumerator_12981.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_28) {
              var_hasSelector_12957 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_12981.gotoNextObject () ;
    }
    var_currentClassTypedPropertyList_12655.addAssign_operation (var_attributeTypeIndex_12936, enumerator_12801.current_mPropertyName (HERE), enumerator_12801.current_mIsPublic (HERE), var_hasSelector_12957  COMMA_SOURCE_FILE ("type-class.galgas", 383)) ;
    var_allTypedAttributeList_12707.addAssign_operation (var_attributeTypeIndex_12936, enumerator_12801.current_mPropertyName (HERE), enumerator_12801.current_mIsPublic (HERE), var_hasSelector_12957  COMMA_SOURCE_FILE ("type-class.galgas", 384)) ;
    enumerator_12801.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_13583 (var_currentClassTypedPropertyList_12655, kENUMERATION_UP) ;
  while (enumerator_13583.hasCurrentObject ()) {
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_13583.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_29) {
        {
        GALGAS_formalParameterSignature temp_30 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 392)) ;
        temp_30.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 392)), enumerator_13583.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 392)), enumerator_13583.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-class.galgas", 392)) ;
        var_setterMap_8247.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_13583.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 390)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 390)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 390))  COMMA_SOURCE_FILE ("type-class.galgas", 390)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 391)), temp_30, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 394)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 389)) ;
        }
      }
    }
    enumerator_13583.gotoNextObject () ;
  }
  {
  const GALGAS_classDeclarationAST temp_31 = object ;
  const GALGAS_classDeclarationAST temp_32 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_31.readProperty_mClassTypeName (), var_getterMap_8220, var_setterMap_8247, var_instanceMethodMap_8290, temp_32.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 409)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 400)) ;
  }
  GALGAS_string var_defaultConstructorName_14449 ;
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = var_superClassIndex_8447.getter_isNull (SOURCE_FILE ("type-class.galgas", 413)).boolEnum () ;
    if (kBoolTrue == test_33) {
      var_defaultConstructorName_14449 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_33) {
    var_defaultConstructorName_14449 = var_superClassIndex_8447.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 416)) ;
  }
  cEnumerator_typedPropertyList enumerator_14639 (var_currentClassTypedPropertyList_12655, kENUMERATION_UP) ;
  bool bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14449.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_14639.hasCurrentObject () && bool_34) {
    while (enumerator_14639.hasCurrentObject () && bool_34) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = GALGAS_bool (kIsEqual, enumerator_14639.current_mPropertyTypeEntry (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_14639.current_mPropertyTypeEntry (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 419)).operator_not (SOURCE_FILE ("type-class.galgas", 419)) COMMA_SOURCE_FILE ("type-class.galgas", 419)).boolEnum () ;
        if (kBoolTrue == test_35) {
          var_defaultConstructorName_14449 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_14639.gotoNextObject () ;
      if (enumerator_14639.hasCurrentObject ()) {
        bool_34 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_14449.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
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
    temp_41 = GALGAS_operators::constructor_isReferenceEquatable (SOURCE_FILE ("type-class.galgas", 441)) ;
  }else if (kBoolFalse == test_42) {
    temp_41 = GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-class.galgas", 441)) ;
  }
  const GALGAS_classDeclarationAST temp_43 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_36.readProperty_mClassTypeName (), temp_37.readProperty_mIsPredefined (), temp_38.readProperty_mIsAbstract ().operator_not (SOURCE_FILE ("type-class.galgas", 427)), var_superClassIndex_8447, GALGAS_typeKindEnum::constructor_classType (temp_39.readProperty_mIsReference ()  COMMA_SOURCE_FILE ("type-class.galgas", 429)), GALGAS_bool (false), var_allTypedAttributeList_12707, var_attributeMap_8374, var_currentClassTypedPropertyList_12655, var_constructorMap_12383, var_getterMap_8220, var_setterMap_8247, var_instanceMethodMap_8290, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 438)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 439)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 440)), temp_41, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 442)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 443)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 444)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 445)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 446)), var_generateHeaderInSeparateFile_8488, GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 448)), var_defaultConstructorName_14449, GALGAS_string ("class-").add_operation (temp_43.readProperty_mClassTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 450)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 450)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 424)) ;
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
  GALGAS_lstring var_classTypeNameForUsefulness_16440 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mClassTypeName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 468)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_16440, var_classTypeNameForUsefulness_16440, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 469)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_classDeclarationAST temp_2 = object ;
    test_1 = GALGAS_bool (kIsNotEqual, temp_2.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_classDeclarationAST temp_3 = object ;
      GALGAS_lstring var_superClassNameForUsefulness_16668 = function_typeNameForUsefulEntitiesGraph (temp_3.readProperty_mSuperClassName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 471)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16440, var_superClassNameForUsefulness_16668 COMMA_SOURCE_FILE ("type-class.galgas", 472)) ;
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
      GALGAS_lstring var_weakRefTypeNameForUsefulness_16891 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_6.readProperty_mClassTypeName ().readProperty_string ().add_operation (function_weakSuffix (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 475)), temp_7.readProperty_mClassTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-class.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 475)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16440, var_weakRefTypeNameForUsefulness_16891 COMMA_SOURCE_FILE ("type-class.galgas", 476)) ;
      }
    }
  }
  const GALGAS_classDeclarationAST temp_8 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_17156 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_8.readProperty_mClassTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 479)) ;
  const GALGAS_classDeclarationAST temp_9 = object ;
  GALGAS_unifiedTypeMap_2D_entry temp_10 ;
  const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, temp_9.readProperty_mSuperClassName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 482)) ;
  }else if (kBoolFalse == test_11) {
    const GALGAS_classDeclarationAST temp_12 = object ;
    temp_10 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_12.readProperty_mSuperClassName (), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 483)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_superClassEntry_17285 = temp_10 ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (kIsNotEqual, var_superClassEntry_17285.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 488)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_bool var_superClassIsReference_17734 ;
      var_superClassEntry_17285.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 489)).method_classType (var_superClassIsReference_17734, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 489)) ;
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        const GALGAS_classDeclarationAST temp_15 = object ;
        test_14 = var_superClassIsReference_17734.operator_and (temp_15.readProperty_mIsReference ().operator_not (SOURCE_FILE ("type-class.galgas", 490)) COMMA_SOURCE_FILE ("type-class.galgas", 490)).boolEnum () ;
        if (kBoolTrue == test_14) {
          const GALGAS_classDeclarationAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'refClass', as its super class"), fixItArray17  COMMA_SOURCE_FILE ("type-class.galgas", 491)) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          const GALGAS_classDeclarationAST temp_19 = object ;
          test_18 = var_superClassIsReference_17734.operator_not (SOURCE_FILE ("type-class.galgas", 492)).operator_and (temp_19.readProperty_mIsReference () COMMA_SOURCE_FILE ("type-class.galgas", 492)).boolEnum () ;
          if (kBoolTrue == test_18) {
            const GALGAS_classDeclarationAST temp_20 = object ;
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (temp_20.readProperty_mClassTypeName ().readProperty_location (), GALGAS_string ("this class should be declared by 'valueclass', as its super class"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 493)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_18280 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsEqual, var_superClassEntry_17285.objectCompare (GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-class.galgas", 500)))).boolEnum () ;
    if (kBoolTrue == test_22) {
      var_allAttributeList_18280 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 501)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_18386 = GALGAS_bool (false) ;
      enumGalgasBool test_23 = kBoolTrue ;
      if (kBoolTrue == test_23) {
        const GALGAS_classDeclarationAST temp_24 = object ;
        test_23 = GALGAS_bool (kIsStrictSup, temp_24.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 503)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_23) {
          const GALGAS_classDeclarationAST temp_25 = object ;
          cEnumerator_lstringlist enumerator_18460 (temp_25.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
          while (enumerator_18460.hasCurrentObject ()) {
            enumGalgasBool test_26 = kBoolTrue ;
            if (kBoolTrue == test_26) {
              test_26 = GALGAS_bool (kIsEqual, enumerator_18460.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_26) {
                enumGalgasBool test_27 = kBoolTrue ;
                if (kBoolTrue == test_27) {
                  test_27 = var_generatedInSeparateFileFeature_18386.boolEnum () ;
                  if (kBoolTrue == test_27) {
                    TC_Array <C_FixItDescription> fixItArray28 ;
                    inCompiler->emitSemanticError (enumerator_18460.current_mValue (HERE).readProperty_location (), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray28  COMMA_SOURCE_FILE ("type-class.galgas", 507)) ;
                  }
                }
                var_generatedInSeparateFileFeature_18386 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_26) {
              TC_Array <C_FixItDescription> fixItArray29 ;
              inCompiler->emitSemanticError (enumerator_18460.current_mValue (HERE).readProperty_location (), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray29  COMMA_SOURCE_FILE ("type-class.galgas", 511)) ;
            }
            enumerator_18460.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_22) {
    var_allAttributeList_18280 = var_superClassEntry_17285.getter_mAllTypedPropertyList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      const GALGAS_classDeclarationAST temp_31 = object ;
      test_30 = GALGAS_bool (kIsStrictSup, temp_31.readProperty_mClassFeatureList ().getter_length (SOURCE_FILE ("type-class.galgas", 517)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const GALGAS_classDeclarationAST temp_32 = object ;
        cEnumerator_lstringlist enumerator_18999 (temp_32.readProperty_mClassFeatureList (), kENUMERATION_UP) ;
        while (enumerator_18999.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray33 ;
          inCompiler->emitSemanticError (enumerator_18999.current_mValue (HERE).readProperty_location (), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray33  COMMA_SOURCE_FILE ("type-class.galgas", 519)) ;
          enumerator_18999.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_19204 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 524)) ;
  GALGAS_propertyIndexMap var_attributeMap_19246 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 525)) ;
  const GALGAS_classDeclarationAST temp_34 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_19316 (temp_34.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_19316.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_19380 = function_typeNameForUsefulEntitiesGraph (enumerator_19316.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 527)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_16440, var_propertyTypeNameForUsefulness_19380 COMMA_SOURCE_FILE ("type-class.galgas", 528)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_19541 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_19316.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 529)) ;
    GALGAS_bool var_hasSelector_19644 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_19668 (enumerator_19316.current_mAttributeList (HERE), kENUMERATION_UP) ;
    bool bool_35 = var_hasSelector_19644.operator_not (SOURCE_FILE ("type-class.galgas", 531)).isValidAndTrue () ;
    if (enumerator_19668.hasCurrentObject () && bool_35) {
      while (enumerator_19668.hasCurrentObject () && bool_35) {
        var_hasSelector_19644 = GALGAS_bool (kIsEqual, enumerator_19668.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))) ;
        enumerator_19668.gotoNextObject () ;
        if (enumerator_19668.hasCurrentObject ()) {
          bool_35 = var_hasSelector_19644.operator_not (SOURCE_FILE ("type-class.galgas", 531)).isValidAndTrue () ;
        }
      }
    }
    var_typedAttributeList_19204.addAssign_operation (var_t_19541, enumerator_19316.current_mPropertyName (HERE), enumerator_19316.current_mIsPublic (HERE), var_hasSelector_19644  COMMA_SOURCE_FILE ("type-class.galgas", 534)) ;
    var_allAttributeList_18280.addAssign_operation (var_t_19541, enumerator_19316.current_mPropertyName (HERE), enumerator_19316.current_mIsPublic (HERE), var_hasSelector_19644  COMMA_SOURCE_FILE ("type-class.galgas", 539)) ;
    {
    var_attributeMap_19246.setter_insertKey (enumerator_19316.current_mPropertyName (HERE), var_t_19541, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)) ;
    }
    enumerator_19316.gotoNextObject () ;
  }
  const GALGAS_classDeclarationAST temp_36 = object ;
  const GALGAS_classDeclarationAST temp_37 = object ;
  const GALGAS_classDeclarationAST temp_38 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (temp_36.readProperty_mClassTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 548)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_17156, temp_37.readProperty_mIsAbstract (), temp_38.readProperty_mIsReference (), var_superClassEntry_17285, var_allAttributeList_18280, var_typedAttributeList_19204, var_selfType_17156.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 556))  COMMA_SOURCE_FILE ("type-class.galgas", 549))  COMMA_SOURCE_FILE ("type-class.galgas", 547)) ;
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
    test_0 = temp_1.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 579)).operator_not (SOURCE_FILE ("type-class.galgas", 579)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_classTypeForGeneration temp_2 = object ;
      extensionMethod_addHeaderFileName (temp_2.readProperty_mSuperClass (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 580)) ;
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
      const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 587)).boolEnum () ;
      if (kBoolTrue == test_9) {
        temp_8 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_9) {
        const GALGAS_classTypeForGeneration temp_10 = object ;
        temp_8 = temp_10.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 587)) ;
      }
      const GALGAS_classTypeForGeneration temp_11 = object ;
      const GALGAS_classTypeForGeneration temp_12 = object ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_31_ (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 585)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 586)), temp_8, temp_11.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_12.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 589)).objectCompare (GALGAS_string::makeEmptyString ())), temp_13.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 584))) ;
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
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_14.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 593)), temp_15.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 594)), temp_16.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 595)), temp_17.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 596)), temp_18.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 597)), temp_19.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 598)), temp_20.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 599)), temp_21.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 600)), temp_22.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)), temp_23.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 602)), temp_24.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 603)), temp_25.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 604)), temp_26.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 605)) COMMA_SOURCE_FILE ("type-class.galgas", 592))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 592)) ;
    }
  }
  if (kBoolFalse == test_3) {
    const GALGAS_classTypeForGeneration temp_27 = object ;
    const GALGAS_classTypeForGeneration temp_28 = object ;
    const GALGAS_classTypeForGeneration temp_29 = object ;
    GALGAS_string temp_30 ;
    const enumGalgasBool test_31 = temp_29.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 611)).boolEnum () ;
    if (kBoolTrue == test_31) {
      temp_30 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_31) {
      const GALGAS_classTypeForGeneration temp_32 = object ;
      temp_30 = temp_32.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 611)) ;
    }
    const GALGAS_classTypeForGeneration temp_33 = object ;
    const GALGAS_classTypeForGeneration temp_34 = object ;
    const GALGAS_classTypeForGeneration temp_35 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_31_ (inCompiler, temp_27.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 609)), temp_28.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 610)), temp_30, temp_33.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_34.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 613)).objectCompare (GALGAS_string::makeEmptyString ())), temp_35.readProperty_mCurrentTypedAttributeList () COMMA_SOURCE_FILE ("type-class.galgas", 608))) ;
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
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_36.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 617)), temp_37.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 618)), temp_38.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 619)), temp_39.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 620)), temp_40.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 621)), temp_41.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 622)), temp_42.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 623)), temp_43.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 624)), temp_44.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 625)), temp_45.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 626)), temp_46.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 627)), temp_47.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 628)), temp_48.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 629)) COMMA_SOURCE_FILE ("type-class.galgas", 616))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 616)) ;
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
  cEnumerator_typedPropertyList enumerator_23907 (temp_0.readProperty_mCurrentTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_23907.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_23907.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 642)) ;
    enumerator_23907.gotoNextObject () ;
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
          const enumGalgasBool test_9 = temp_7.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 650)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_9) {
            const GALGAS_classTypeForGeneration temp_10 = object ;
            temp_8 = temp_10.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 650)) ;
          }
          const GALGAS_classTypeForGeneration temp_11 = object ;
          const GALGAS_classTypeForGeneration temp_12 = object ;
          const GALGAS_classTypeForGeneration temp_13 = object ;
          const GALGAS_classTypeForGeneration temp_14 = object ;
          GALGAS_string var_part_31__24087 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 648)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 649)), temp_8, temp_11.readProperty_mCurrentTypedAttributeList (), temp_12.readProperty_mAllTypedAttributeList (), temp_13.readProperty_mIsAbstract (), temp_14.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 654)) COMMA_SOURCE_FILE ("type-class.galgas", 647))) ;
          const GALGAS_classTypeForGeneration temp_15 = object ;
          const GALGAS_classTypeForGeneration temp_16 = object ;
          const GALGAS_classTypeForGeneration temp_17 = object ;
          GALGAS_string temp_18 ;
          const enumGalgasBool test_19 = temp_17.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 659)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = GALGAS_string::makeEmptyString () ;
          }else if (kBoolFalse == test_19) {
            const GALGAS_classTypeForGeneration temp_20 = object ;
            temp_18 = temp_20.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 659)) ;
          }
          const GALGAS_classTypeForGeneration temp_21 = object ;
          const GALGAS_classTypeForGeneration temp_22 = object ;
          const GALGAS_classTypeForGeneration temp_23 = object ;
          GALGAS_string var_part_32__24518 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, temp_15.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 657)), temp_16.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 658)), temp_18, temp_21.readProperty_mCurrentTypedAttributeList (), temp_22.readProperty_mAllTypedAttributeList (), temp_23.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 656))) ;
          const GALGAS_classTypeForGeneration temp_24 = object ;
          GALGAS_string var_headerFileName_24916 = GALGAS_string ("separateHeaderFor_").add_operation (temp_24.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 664)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 664)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 664)) ;
          {
          GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 666)), var_headerFileName_24916, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
            "\n"), var_part_31__24087, GALGAS_string ("\n"
            "\n"), var_part_32__24518, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 665)) ;
          }
          outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_24916, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 676)).add_operation (GALGAS_string ("\"\n"
            "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 676)) ;
        }
      }
      if (kBoolFalse == test_3) {
        const GALGAS_classTypeForGeneration temp_25 = object ;
        const GALGAS_classTypeForGeneration temp_26 = object ;
        const GALGAS_classTypeForGeneration temp_27 = object ;
        GALGAS_string temp_28 ;
        const enumGalgasBool test_29 = temp_27.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 681)).boolEnum () ;
        if (kBoolTrue == test_29) {
          temp_28 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_29) {
          const GALGAS_classTypeForGeneration temp_30 = object ;
          temp_28 = temp_30.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 681)) ;
        }
        const GALGAS_classTypeForGeneration temp_31 = object ;
        const GALGAS_classTypeForGeneration temp_32 = object ;
        const GALGAS_classTypeForGeneration temp_33 = object ;
        const GALGAS_classTypeForGeneration temp_34 = object ;
        outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_31_ (inCompiler, temp_25.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 679)), temp_26.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 680)), temp_28, temp_31.readProperty_mCurrentTypedAttributeList (), temp_32.readProperty_mAllTypedAttributeList (), temp_33.readProperty_mIsAbstract (), temp_34.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 685)) COMMA_SOURCE_FILE ("type-class.galgas", 678))) ;
        const GALGAS_classTypeForGeneration temp_35 = object ;
        const GALGAS_classTypeForGeneration temp_36 = object ;
        const GALGAS_classTypeForGeneration temp_37 = object ;
        GALGAS_string temp_38 ;
        const enumGalgasBool test_39 = temp_37.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 690)).boolEnum () ;
        if (kBoolTrue == test_39) {
          temp_38 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_39) {
          const GALGAS_classTypeForGeneration temp_40 = object ;
          temp_38 = temp_40.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 690)) ;
        }
        const GALGAS_classTypeForGeneration temp_41 = object ;
        const GALGAS_classTypeForGeneration temp_42 = object ;
        const GALGAS_classTypeForGeneration temp_43 = object ;
        outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeHeader_32_part_32_ (inCompiler, temp_35.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 688)), temp_36.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 689)), temp_38, temp_41.readProperty_mCurrentTypedAttributeList (), temp_42.readProperty_mAllTypedAttributeList (), temp_43.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 687))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 687)) ;
      }
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_44 = kBoolTrue ;
    if (kBoolTrue == test_44) {
      const GALGAS_classTypeForGeneration temp_45 = object ;
      test_44 = temp_45.readProperty_mGenerateHeaderInSeparateFile ().boolEnum () ;
      if (kBoolTrue == test_44) {
        const GALGAS_classTypeForGeneration temp_46 = object ;
        const GALGAS_classTypeForGeneration temp_47 = object ;
        const GALGAS_classTypeForGeneration temp_48 = object ;
        GALGAS_string temp_49 ;
        const enumGalgasBool test_50 = temp_48.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 701)).boolEnum () ;
        if (kBoolTrue == test_50) {
          temp_49 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_50) {
          const GALGAS_classTypeForGeneration temp_51 = object ;
          temp_49 = temp_51.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 701)) ;
        }
        const GALGAS_classTypeForGeneration temp_52 = object ;
        const GALGAS_classTypeForGeneration temp_53 = object ;
        const GALGAS_classTypeForGeneration temp_54 = object ;
        GALGAS_string var_part_31__26352 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, temp_46.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 699)), temp_47.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 700)), temp_49, temp_52.readProperty_mCurrentTypedAttributeList (), temp_53.readProperty_mAllTypedAttributeList (), temp_54.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 698))) ;
        const GALGAS_classTypeForGeneration temp_55 = object ;
        const GALGAS_classTypeForGeneration temp_56 = object ;
        const GALGAS_classTypeForGeneration temp_57 = object ;
        GALGAS_string temp_58 ;
        const enumGalgasBool test_59 = temp_57.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 709)).boolEnum () ;
        if (kBoolTrue == test_59) {
          temp_58 = GALGAS_string::makeEmptyString () ;
        }else if (kBoolFalse == test_59) {
          const GALGAS_classTypeForGeneration temp_60 = object ;
          temp_58 = temp_60.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 709)) ;
        }
        const GALGAS_classTypeForGeneration temp_61 = object ;
        const GALGAS_classTypeForGeneration temp_62 = object ;
        const GALGAS_classTypeForGeneration temp_63 = object ;
        GALGAS_string var_part_32__26737 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, temp_55.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 707)), temp_56.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 708)), temp_58, temp_61.readProperty_mCurrentTypedAttributeList (), temp_62.readProperty_mAllTypedAttributeList (), temp_63.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 706))) ;
        const GALGAS_classTypeForGeneration temp_64 = object ;
        GALGAS_string var_headerFileName_27131 = GALGAS_string ("separateHeaderFor_").add_operation (temp_64.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 714)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 714)) ;
        {
        GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 716)), var_headerFileName_27131, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
          "\n"), var_part_31__26352, GALGAS_string ("\n"
          "\n"), var_part_32__26737, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 715)) ;
        }
        outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_27131, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 726)).add_operation (GALGAS_string ("\"\n"
          "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 726)) ;
      }
    }
    if (kBoolFalse == test_44) {
      const GALGAS_classTypeForGeneration temp_65 = object ;
      const GALGAS_classTypeForGeneration temp_66 = object ;
      const GALGAS_classTypeForGeneration temp_67 = object ;
      GALGAS_string temp_68 ;
      const enumGalgasBool test_69 = temp_67.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 731)).boolEnum () ;
      if (kBoolTrue == test_69) {
        temp_68 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_69) {
        const GALGAS_classTypeForGeneration temp_70 = object ;
        temp_68 = temp_70.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 731)) ;
      }
      const GALGAS_classTypeForGeneration temp_71 = object ;
      const GALGAS_classTypeForGeneration temp_72 = object ;
      const GALGAS_classTypeForGeneration temp_73 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_31_ (inCompiler, temp_65.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 729)), temp_66.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 730)), temp_68, temp_71.readProperty_mCurrentTypedAttributeList (), temp_72.readProperty_mAllTypedAttributeList (), temp_73.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 728))) ;
      const GALGAS_classTypeForGeneration temp_74 = object ;
      const GALGAS_classTypeForGeneration temp_75 = object ;
      const GALGAS_classTypeForGeneration temp_76 = object ;
      GALGAS_string temp_77 ;
      const enumGalgasBool test_78 = temp_76.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 739)).boolEnum () ;
      if (kBoolTrue == test_78) {
        temp_77 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_78) {
        const GALGAS_classTypeForGeneration temp_79 = object ;
        temp_77 = temp_79.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 739)) ;
      }
      const GALGAS_classTypeForGeneration temp_80 = object ;
      const GALGAS_classTypeForGeneration temp_81 = object ;
      const GALGAS_classTypeForGeneration temp_82 = object ;
      outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeHeader_32_part_32_ (inCompiler, temp_74.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 737)), temp_75.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 738)), temp_77, temp_80.readProperty_mCurrentTypedAttributeList (), temp_81.readProperty_mAllTypedAttributeList (), temp_82.readProperty_mIsAbstract () COMMA_SOURCE_FILE ("type-class.galgas", 736))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 736)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 755)) ;
  const GALGAS_classTypeForGeneration temp_1 = object ;
  const GALGAS_classTypeForGeneration temp_2 = object ;
  const GALGAS_classTypeForGeneration temp_3 = object ;
  GALGAS_typedPropertyList var_at_28818 = temp_1.readProperty_mAllTypedAttributeList ().getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), temp_2.readProperty_mAllTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 757)).substract_operation (temp_3.readProperty_mCurrentTypedAttributeList ().getter_length (SOURCE_FILE ("type-class.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 757))  COMMA_SOURCE_FILE ("type-class.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 756)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_classTypeForGeneration temp_5 = object ;
    test_4 = temp_5.readProperty_mIsReference ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_classTypeForGeneration temp_6 = object ;
      const GALGAS_classTypeForGeneration temp_7 = object ;
      const GALGAS_classTypeForGeneration temp_8 = object ;
      GALGAS_string temp_9 ;
      const enumGalgasBool test_10 = temp_8.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 763)).boolEnum () ;
      if (kBoolTrue == test_10) {
        temp_9 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_10) {
        const GALGAS_classTypeForGeneration temp_11 = object ;
        temp_9 = temp_11.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 763)) ;
      }
      const GALGAS_classTypeForGeneration temp_12 = object ;
      const GALGAS_classTypeForGeneration temp_13 = object ;
      const GALGAS_classTypeForGeneration temp_14 = object ;
      const GALGAS_classTypeForGeneration temp_15 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_referenceClassTypeSpecificImplementation (inCompiler, temp_6.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 761)), temp_7.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 762)), temp_9, temp_12.readProperty_mCurrentTypedAttributeList (), temp_13.readProperty_mAllTypedAttributeList (), var_at_28818, temp_14.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_15.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 768)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 760))) ;
    }
  }
  if (kBoolFalse == test_4) {
    const GALGAS_classTypeForGeneration temp_16 = object ;
    const GALGAS_classTypeForGeneration temp_17 = object ;
    const GALGAS_classTypeForGeneration temp_18 = object ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.readProperty_mSuperClass ().getter_isNull (SOURCE_FILE ("type-class.galgas", 774)).boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_20) {
      const GALGAS_classTypeForGeneration temp_21 = object ;
      temp_19 = temp_21.readProperty_mSuperClass ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 774)) ;
    }
    const GALGAS_classTypeForGeneration temp_22 = object ;
    const GALGAS_classTypeForGeneration temp_23 = object ;
    const GALGAS_classTypeForGeneration temp_24 = object ;
    const GALGAS_classTypeForGeneration temp_25 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_valueClassTypeSpecificImplementation (inCompiler, temp_16.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 772)), temp_17.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 773)), temp_19, temp_22.readProperty_mCurrentTypedAttributeList (), temp_23.readProperty_mAllTypedAttributeList (), var_at_28818, temp_24.readProperty_mIsAbstract (), GALGAS_bool (kIsNotEqual, temp_25.readProperty_mSelfTypeEntry ().getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 779)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 771))) ;
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
//Function 'generateClassGetterDeclaration'
//
//----------------------------------------------------------------------------------------------------------------------

GALGAS_string function_generateClassGetterDeclaration (const GALGAS_lstring & constinArgument_inGetterName,
                                                       const GALGAS_functionSignature & constinArgument_inArgumentTypeList,
                                                       const GALGAS_bool & constinArgument_inHasCompilerArgument,
                                                       const GALGAS_unifiedTypeMap_2D_entry & constinArgument_inReturnedType,
                                                       const GALGAS_methodQualifier & constinArgument_inQualifier,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  GALGAS_bool var_generate_30498 = GALGAS_bool (true) ;
  GALGAS_string var_suffix_30518 = GALGAS_string::makeEmptyString () ;
  switch (constinArgument_inQualifier.enumValue ()) {
  case GALGAS_methodQualifier::kNotBuilt:
    break ;
  case GALGAS_methodQualifier::kEnum_isAbstract:
    {
      var_suffix_30518 = GALGAS_string (" = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasic:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isBasicFinal:
    {
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isInherited:
    {
      var_generate_30498 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isOverriding:
    {
      var_suffix_30518 = GALGAS_string (" overriding = 0") ;
    }
    break ;
  case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
    {
      var_suffix_30518 = GALGAS_string (" overriding = 0") ;
    }
    break ;
  }
  result_result = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_generate_30498.boolEnum () ;
    if (kBoolTrue == test_0) {
      result_result = GALGAS_string ("/* \xC2""\xA7"" public: virtual GALGAS_").add_operation (constinArgument_inReturnedType.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 810)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 810)) ;
      result_result.plusAssign_operation(GALGAS_string (" getter_").add_operation (constinArgument_inGetterName.readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-class.galgas", 811)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 811)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 811)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 811)) ;
      GALGAS_bool var_first_31004 = GALGAS_bool (true) ;
      cEnumerator_functionSignature enumerator_31056 (constinArgument_inArgumentTypeList, kENUMERATION_UP) ;
      while (enumerator_31056.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_first_31004.boolEnum () ;
          if (kBoolTrue == test_1) {
            var_first_31004 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_1) {
          result_result.plusAssign_operation(GALGAS_string (",\n"
            "           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 818)) ;
        }
        result_result.plusAssign_operation(GALGAS_string ("const GALGAS_").add_operation (enumerator_31056.current (HERE).readProperty_mFormalArgumentType ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 820)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 820)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 820)) ;
        result_result.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31056.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 821)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 821)) ;
        enumerator_31056.gotoNextObject () ;
      }
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = constinArgument_inHasCompilerArgument.boolEnum () ;
        if (kBoolTrue == test_2) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_first_31004.operator_not (SOURCE_FILE ("type-class.galgas", 824)).boolEnum () ;
            if (kBoolTrue == test_3) {
              result_result.plusAssign_operation(GALGAS_string (",\n"
                "           "), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 825)) ;
            }
          }
          result_result.plusAssign_operation(GALGAS_string ("C_Compiler *"), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 827)) ;
          var_first_31004 = GALGAS_bool (false) ;
        }
      }
      GALGAS_string temp_4 ;
      const enumGalgasBool test_5 = var_first_31004.boolEnum () ;
      if (kBoolTrue == test_5) {
        temp_4 = GALGAS_string ("LOCATION_ARGS") ;
      }else if (kBoolFalse == test_5) {
        temp_4 = GALGAS_string (" COMMA_LOCATION_ARGS") ;
      }
      result_result.plusAssign_operation(temp_4.add_operation (GALGAS_string (") const"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 830)).add_operation (var_suffix_30518, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 830)).add_operation (GALGAS_string (" ; */\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 830)), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 830)) ;
    }
  }
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateClassGetterDeclaration [6] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_functionSignature,
  & kTypeDescriptor_GALGAS_bool,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_entry,
  & kTypeDescriptor_GALGAS_methodQualifier,
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateClassGetterDeclaration (C_Compiler * inCompiler,
                                                                               const cObjectArray & inEffectiveParameterArray,
                                                                               const GALGAS_location & /* inErrorLocation */
                                                                               COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_functionSignature operand1 = GALGAS_functionSignature::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                     inCompiler
                                                                                     COMMA_THERE) ;
  const GALGAS_bool operand2 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_entry operand3 = GALGAS_unifiedTypeMap_2D_entry::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  const GALGAS_methodQualifier operand4 = GALGAS_methodQualifier::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_generateClassGetterDeclaration (operand0,
                                                  operand1,
                                                  operand2,
                                                  operand3,
                                                  operand4,
                                                  inCompiler
                                                  COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateClassGetterDeclaration ("generateClassGetterDeclaration",
                                                                                functionWithGenericHeader_generateClassGetterDeclaration,
                                                                                & kTypeDescriptor_GALGAS_string,
                                                                                5,
                                                                                functionArgs_generateClassGetterDeclaration) ;

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
  GALGAS_lstring var_key_4453 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 128)), temp_1.readProperty_mEnumTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
  {
  const GALGAS_enumDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_4453, temp_2, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 129)) ;
  }
  GALGAS_bool var_circularReference_4695 = GALGAS_bool (true) ;
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_4742 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_4 = var_circularReference_4695.isValidAndTrue () ;
  if (enumerator_4742.hasCurrentObject () && bool_4) {
    while (enumerator_4742.hasCurrentObject () && bool_4) {
      GALGAS_bool var_namesCurrentType_4817 = GALGAS_bool (false) ;
      cEnumerator__32_lstringlist enumerator_4844 (enumerator_4742.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      bool bool_5 = var_namesCurrentType_4817.operator_not (SOURCE_FILE ("type-enum.galgas", 134)).isValidAndTrue () ;
      if (enumerator_4844.hasCurrentObject () && bool_5) {
        while (enumerator_4844.hasCurrentObject () && bool_5) {
          GALGAS_lstring var_propertyKey_4931 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4844.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 135)), enumerator_4844.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 135)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, var_propertyKey_4931.readProperty_string ().objectCompare (var_key_4453.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_namesCurrentType_4817 = GALGAS_bool (true) ;
            }
          }
          enumerator_4844.gotoNextObject () ;
          if (enumerator_4844.hasCurrentObject ()) {
            bool_5 = var_namesCurrentType_4817.operator_not (SOURCE_FILE ("type-enum.galgas", 134)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = var_namesCurrentType_4817.operator_not (SOURCE_FILE ("type-enum.galgas", 140)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_circularReference_4695 = GALGAS_bool (false) ;
        }
      }
      enumerator_4742.gotoNextObject () ;
      if (enumerator_4742.hasCurrentObject ()) {
        bool_4 = var_circularReference_4695.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_circularReference_4695.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_enumDeclarationAST temp_9 = object ;
      cEnumerator_enumConstantList enumerator_5293 (temp_9.readProperty_mConstantList (), kENUMERATION_UP) ;
      while (enumerator_5293.hasCurrentObject ()) {
        cEnumerator__32_lstringlist enumerator_5340 (enumerator_5293.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_5340.hasCurrentObject ()) {
          GALGAS_lstring var_propertyKey_5402 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5340.current_mValue_30_ (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 148)), enumerator_5340.current_mValue_30_ (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-enum.galgas", 148)) ;
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            test_10 = GALGAS_bool (kIsNotEqual, var_propertyKey_5402.readProperty_string ().objectCompare (var_key_4453.readProperty_string ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              {
              ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_4453, var_propertyKey_5402 COMMA_SOURCE_FILE ("type-enum.galgas", 150)) ;
              }
            }
          }
          enumerator_5340.gotoNextObject () ;
        }
        enumerator_5293.gotoNextObject () ;
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
  GALGAS_constructorMap var_constructorMap_6322 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 167)) ;
  GALGAS_setterMap var_setterMap_6354 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 168)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6402 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 169)) ;
  GALGAS_classMethodMap var_classMethodMap_6444 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 170)) ;
  GALGAS_optionalMethodMap var_optionalMethodMap_6492 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 171)) ;
  GALGAS_unifiedTypeMap_2D_entry var_enumTypeEntry_6628 ;
  {
  const GALGAS_enumDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mEnumTypeName (), var_enumTypeEntry_6628 COMMA_SOURCE_FILE ("type-enum.galgas", 173)) ;
  }
  GALGAS_constantIndexMap var_constantMap_6683 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 175)) ;
  GALGAS_bool var_hasAssociatedValues_6720 = GALGAS_bool (false) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_6780 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_6780.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_6858 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 178)) ;
    GALGAS_functionSignature var_argumentTypeList_6907 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 179)) ;
    cEnumerator__32_lstringlist enumerator_6943 (enumerator_6780.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_6943.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_7084 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6943.current_mValue_30_ (HERE), var_associatedTypeEntry_7084 COMMA_SOURCE_FILE ("type-enum.galgas", 181)) ;
      }
      var_argumentTypeList_6907.addAssign_operation (enumerator_6943.current_mValue_31_ (HERE), var_associatedTypeEntry_7084, enumerator_6943.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 182)) ;
      var_associatedTypeList_6858.addAssign_operation (var_associatedTypeEntry_7084  COMMA_SOURCE_FILE ("type-enum.galgas", 183)) ;
      var_hasAssociatedValues_6720 = GALGAS_bool (true) ;
      enumerator_6943.gotoNextObject () ;
    }
    {
    var_constantMap_6683.setter_insertKey (enumerator_6780.current_mConstantName (HERE), var_constantMap_6683.getter_count (SOURCE_FILE ("type-enum.galgas", 186)), var_associatedTypeList_6858, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
    }
    {
    var_constructorMap_6322.setter_insertOrReplace (enumerator_6780.current_mConstantName (HERE), var_argumentTypeList_6907, GALGAS_bool (false), var_enumTypeEntry_6628 COMMA_SOURCE_FILE ("type-enum.galgas", 187)) ;
    }
    enumerator_6780.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_2 = object ;
  cEnumerator_enumConstantList enumerator_7533 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_7533.hasCurrentObject ()) {
    GALGAS_optionalMethodSignature var_argumentTypeList_7609 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 196)) ;
    cEnumerator__32_lstringlist enumerator_7645 (enumerator_7533.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_7645.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_7786 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7645.current_mValue_30_ (HERE), var_associatedTypeEntry_7786 COMMA_SOURCE_FILE ("type-enum.galgas", 198)) ;
      }
      var_argumentTypeList_7609.addAssign_operation (GALGAS_bool (false), enumerator_7645.current_mValue_31_ (HERE), var_associatedTypeEntry_7786, enumerator_7645.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 199)) ;
      enumerator_7645.gotoNextObject () ;
    }
    {
    var_optionalMethodMap_6492.setter_insertKey (enumerator_7533.current_mConstantName (HERE), var_argumentTypeList_7609, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 201)) ;
    }
    enumerator_7533.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_3 = object ;
  cEnumerator_enumConstantList enumerator_8046 (temp_3.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8046.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsStrictSup, enumerator_8046.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 208)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_unifiedTypeMapEntryList var_associatedTypeList_8182 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 209)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_8240 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 210)) ;
        cEnumerator__32_lstringlist enumerator_8278 (enumerator_8046.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_8278.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_8421 ;
          {
          GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8278.current_mValue_30_ (HERE), var_associatedTypeEntry_8421 COMMA_SOURCE_FILE ("type-enum.galgas", 212)) ;
          }
          var_argumentTypeList_8240.addAssign_operation (enumerator_8278.current_mValue_31_ (HERE), var_associatedTypeEntry_8421, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 213)), enumerator_8278.current_mValue_30_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 213)) ;
          var_associatedTypeList_8182.addAssign_operation (var_associatedTypeEntry_8421  COMMA_SOURCE_FILE ("type-enum.galgas", 214)) ;
          var_hasAssociatedValues_6720 = GALGAS_bool (true) ;
          enumerator_8278.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_6402.setter_insertKey (enumerator_8046.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 219)), var_argumentTypeList_8240, enumerator_8046.current_mConstantName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 223)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-enum.galgas", 224)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 217)) ;
        }
      }
    }
    enumerator_8046.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_8950 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_8950, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 230)) ;
  }
  const GALGAS_enumDeclarationAST temp_5 = object ;
  cEnumerator_enumConstantList enumerator_8974 (temp_5.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_8974.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_8950, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_8974.current_mConstantName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 235)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 232)) ;
    }
    enumerator_8974.gotoNextObject () ;
  }
  {
  const GALGAS_enumDeclarationAST temp_6 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_6.readProperty_mEnumTypeName (), var_getterMap_8950, var_setterMap_6354, var_instanceMethodMap_6402, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 241)) ;
  }
  GALGAS_string var_defaultConstructorName_9584 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_enumDeclarationAST temp_8 = object ;
    test_7 = GALGAS_bool (kIsNotEqual, temp_8.readProperty_mDefaultConstantName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      GALGAS_unifiedTypeMapEntryList var_associatedTypeList_9743 ;
      const GALGAS_enumDeclarationAST temp_9 = object ;
      GALGAS_uint joker_9718 ; // Joker input parameter
      var_constantMap_6683.method_searchKey (temp_9.readProperty_mDefaultConstantName (), joker_9718, var_associatedTypeList_9743, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 255)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = GALGAS_bool (kIsEqual, var_associatedTypeList_9743.getter_length (SOURCE_FILE ("type-enum.galgas", 256)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_enumDeclarationAST temp_11 = object ;
          var_defaultConstructorName_9584 = temp_11.readProperty_mDefaultConstantName ().readProperty_string () ;
        }
      }
      if (kBoolFalse == test_10) {
        const GALGAS_enumDeclarationAST temp_12 = object ;
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mDefaultConstantName ().readProperty_location (), GALGAS_string ("the default constant should have no associated values"), fixItArray13  COMMA_SOURCE_FILE ("type-enum.galgas", 259)) ;
      }
    }
  }
  {
  const GALGAS_enumDeclarationAST temp_14 = object ;
  const GALGAS_enumDeclarationAST temp_15 = object ;
  const GALGAS_enumDeclarationAST temp_16 = object ;
  const GALGAS_enumDeclarationAST temp_17 = object ;
  GALGAS_headerKind temp_18 ;
  const enumGalgasBool test_19 = var_hasAssociatedValues_6720.boolEnum () ;
  if (kBoolTrue == test_19) {
    temp_18 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 290)) ;
  }else if (kBoolFalse == test_19) {
    temp_18 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 290)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_14.readProperty_mEnumTypeName (), temp_15.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 267)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 268)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 270)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 271)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 272)), var_constructorMap_6322, var_getterMap_8950, var_setterMap_6354, var_instanceMethodMap_6402, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 277)), var_optionalMethodMap_6492, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 279)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 280)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 280)) COMMA_SOURCE_FILE ("type-enum.galgas", 280)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 281)), var_constantMap_6683, temp_16.readProperty_mConstantList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 284)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 285)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-enum.galgas", 287)), var_defaultConstructorName_9584, GALGAS_string ("enum-").add_operation (temp_17.readProperty_mEnumTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 289)), temp_18, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 263)) ;
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
  GALGAS_lstring var_nameForUsefulness_11507 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mEnumTypeName (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 307)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11507, var_nameForUsefulness_11507, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 308)) ;
  }
  GALGAS_stringlist var_constantList_11674 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 310)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_11757 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 311)) ;
  GALGAS_constantIndexMap var_constantMap_11780 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 312)) ;
  const GALGAS_enumDeclarationAST temp_1 = object ;
  cEnumerator_enumConstantList enumerator_11854 (temp_1.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_11854.hasCurrentObject ()) {
    var_constantList_11674.addAssign_operation (enumerator_11854.current_mConstantName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 314)) ;
    GALGAS_unifiedTypeMapEntryList var_associatedTypeList_11974 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 315)) ;
    GALGAS_stringset var_associatedValueNameSet_12021 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 316)) ;
    cEnumerator__32_lstringlist enumerator_12051 (enumerator_11854.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_12051.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_12129 = function_typeNameForUsefulEntitiesGraph (enumerator_12051.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 318)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11507, var_propertyTypeNameForUsefulness_12129 COMMA_SOURCE_FILE ("type-enum.galgas", 319)) ;
      }
      GALGAS_unifiedTypeMap_2D_entry var_associatedTypeEntry_12293 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_12051.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 320)) ;
      var_associatedTypeList_11974.addAssign_operation (var_associatedTypeEntry_12293  COMMA_SOURCE_FILE ("type-enum.galgas", 321)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = var_associatedValueNameSet_12021.getter_hasKey (enumerator_12051.current_mValue_31_ (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-enum.galgas", 322)).boolEnum () ;
        if (kBoolTrue == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_12051.current_mValue_31_ (HERE).readProperty_location (), GALGAS_string ("duplicated name"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 323)) ;
        }
      }
      var_associatedValueNameSet_12021.addAssign_operation (enumerator_12051.current_mValue_31_ (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
      enumerator_12051.gotoNextObject () ;
    }
    {
    var_constantMap_11780.setter_insertKey (enumerator_11854.current_mConstantName (HERE), var_constantMap_11780.getter_count (SOURCE_FILE ("type-enum.galgas", 327)), var_associatedTypeList_11974, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 327)) ;
    }
    var_enumConstantListForGeneration_11757.addAssign_operation (enumerator_11854.current_mConstantName (HERE).readProperty_string (), var_associatedTypeList_11974  COMMA_SOURCE_FILE ("type-enum.galgas", 328)) ;
    enumerator_11854.gotoNextObject () ;
  }
  const GALGAS_enumDeclarationAST temp_4 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_12776 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_4.readProperty_mEnumTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 331)) ;
  const GALGAS_enumDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (temp_5.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 333)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_12776, var_enumConstantListForGeneration_11757  COMMA_SOURCE_FILE ("type-enum.galgas", 334))  COMMA_SOURCE_FILE ("type-enum.galgas", 332)) ;
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
  GALGAS_bool var_hasAssociatedValues_14792 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_14834 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_14792.operator_not (SOURCE_FILE ("type-enum.galgas", 387)).isValidAndTrue () ;
  if (enumerator_14834.hasCurrentObject () && bool_1) {
    while (enumerator_14834.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_14792 = GALGAS_bool (kIsStrictSup, enumerator_14834.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 388)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14834.gotoNextObject () ;
      if (enumerator_14834.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_14792.operator_not (SOURCE_FILE ("type-enum.galgas", 387)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 391)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 392)), temp_4.readProperty_mConstantList (), var_hasAssociatedValues_14792 COMMA_SOURCE_FILE ("type-enum.galgas", 390))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_5.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 397)), temp_6.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 398)), temp_7.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 399)), temp_8.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 400)), temp_9.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 401)), temp_10.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 402)), temp_11.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 403)), temp_12.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 404)), temp_13.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 405)), temp_14.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 406)), temp_15.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 407)), temp_16.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 408)), temp_17.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 409)) COMMA_SOURCE_FILE ("type-enum.galgas", 396))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 396)) ;
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
  GALGAS_bool var_hasAssociatedValues_16148 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_16190 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_16148.operator_not (SOURCE_FILE ("type-enum.galgas", 421)).isValidAndTrue () ;
  if (enumerator_16190.hasCurrentObject () && bool_1) {
    while (enumerator_16190.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_16148 = GALGAS_bool (kIsStrictSup, enumerator_16190.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 422)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_16190.gotoNextObject () ;
      if (enumerator_16190.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_16148.operator_not (SOURCE_FILE ("type-enum.galgas", 421)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_16350 (temp_2.readProperty_mConstantList (), kENUMERATION_UP) ;
  while (enumerator_16350.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapEntryList enumerator_16391 (enumerator_16350.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_16391.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName_31_ (enumerator_16391.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 426)) ;
      enumerator_16391.gotoNextObject () ;
    }
    enumerator_16350.gotoNextObject () ;
  }
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 430)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 431)), temp_5.readProperty_mConstantList (), var_hasAssociatedValues_16148 COMMA_SOURCE_FILE ("type-enum.galgas", 429))) ;
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
  GALGAS_bool var_hasAssociatedValues_17018 = GALGAS_bool (false) ;
  const GALGAS_enumTypeForGeneration temp_0 = object ;
  cEnumerator_enumConstantListForGeneration enumerator_17060 (temp_0.readProperty_mConstantList (), kENUMERATION_UP) ;
  bool bool_1 = var_hasAssociatedValues_17018.operator_not (SOURCE_FILE ("type-enum.galgas", 445)).isValidAndTrue () ;
  if (enumerator_17060.hasCurrentObject () && bool_1) {
    while (enumerator_17060.hasCurrentObject () && bool_1) {
      var_hasAssociatedValues_17018 = GALGAS_bool (kIsStrictSup, enumerator_17060.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 446)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_17060.gotoNextObject () ;
      if (enumerator_17060.hasCurrentObject ()) {
        bool_1 = var_hasAssociatedValues_17018.operator_not (SOURCE_FILE ("type-enum.galgas", 445)).isValidAndTrue () ;
      }
    }
  }
  const GALGAS_enumTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 448)) ;
  const GALGAS_enumTypeForGeneration temp_3 = object ;
  const GALGAS_enumTypeForGeneration temp_4 = object ;
  const GALGAS_enumTypeForGeneration temp_5 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 450)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 451)), temp_5.readProperty_mConstantList (), var_hasAssociatedValues_17018 COMMA_SOURCE_FILE ("type-enum.galgas", 449))) ;
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
  GALGAS_lstring var_key_11980 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 313)), temp_1.readProperty_mExternTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-extern.galgas", 313)) ;
  {
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11980, temp_2, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 314)) ;
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
  GALGAS_getterMap var_getterMap_12872 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_12872, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 327)) ;
  }
  GALGAS_constructorMap var_constructorMap_12911 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 328)) ;
  GALGAS_setterMap var_setterMap_12943 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 329)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_12991 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 330)) ;
  GALGAS_classMethodMap var_classMethodMap_13033 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 331)) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  cEnumerator_externTypeConstructorList enumerator_13111 (temp_0.readProperty_mExternTypeConstructorList (), kENUMERATION_UP) ;
  while (enumerator_13111.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_13256 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13111.current_mResultTypeName (HERE), var_returnedTypeEntry_13256 COMMA_SOURCE_FILE ("type-extern.galgas", 334)) ;
    }
    GALGAS_functionSignature var_arguments_13301 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 336)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_13377 (enumerator_13111.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_13377.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_13516 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13377.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_13516 COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
      }
      var_arguments_13301.addAssign_operation (enumerator_13377.current_mFormalSelector (HERE), var_argumentTypeEntry_13516, enumerator_13377.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 339)) ;
      enumerator_13377.gotoNextObject () ;
    }
    {
    var_constructorMap_12911.setter_insertKey (enumerator_13111.current_mConstructorName (HERE), var_arguments_13301, GALGAS_bool (true), var_returnedTypeEntry_13256, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 342)) ;
    }
    enumerator_13111.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  cEnumerator_externTypeGetterList enumerator_13835 (temp_1.readProperty_mExternTypeGetterList (), kENUMERATION_UP) ;
  while (enumerator_13835.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_returnedTypeEntry_13975 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_13835.current_mResultTypeName (HERE), var_returnedTypeEntry_13975 COMMA_SOURCE_FILE ("type-extern.galgas", 351)) ;
    }
    GALGAS_functionSignature var_arguments_14020 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 353)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_14096 (enumerator_13835.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14096.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentTypeEntry_14235 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_14096.current_mFormalParameterTypeName (HERE), var_argumentTypeEntry_14235 COMMA_SOURCE_FILE ("type-extern.galgas", 355)) ;
      }
      var_arguments_14020.addAssign_operation (enumerator_14096.current_mFormalSelector (HERE), var_argumentTypeEntry_14235, enumerator_14096.current_mFormalParameterName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 356)) ;
      enumerator_14096.gotoNextObject () ;
    }
    {
    var_getterMap_12872.setter_insertKey (enumerator_13835.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 361)), var_arguments_14020, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 363)), GALGAS_bool (true), var_returnedTypeEntry_13975, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 366)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 359)) ;
    }
    enumerator_13835.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  cEnumerator_externTypeSetterList enumerator_14659 (temp_2.readProperty_mExternTypeSetterList (), kENUMERATION_UP) ;
  while (enumerator_14659.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_14744 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 372)) ;
    cEnumerator_formalParameterListAST enumerator_14847 (enumerator_14659.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_14847.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_15038 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_14847.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15038 COMMA_SOURCE_FILE ("type-extern.galgas", 374)) ;
      }
      var_routineSignature_14744.addAssign_operation (enumerator_14847.current_mFormalSelector (HERE), var_parameterTypeIndex_15038, enumerator_14847.current_mFormalArgumentPassingMode (HERE), enumerator_14847.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 379)) ;
      enumerator_14847.gotoNextObject () ;
    }
    {
    var_setterMap_12943.setter_insertKey (enumerator_14659.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 384)), var_routineSignature_14744, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 387)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 382)) ;
    }
    enumerator_14659.gotoNextObject () ;
  }
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  cEnumerator_externTypeMethodList enumerator_15483 (temp_3.readProperty_mExternTypeMethodList (), kENUMERATION_UP) ;
  while (enumerator_15483.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_15542 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 393)) ;
    cEnumerator_formalParameterListAST enumerator_15670 (enumerator_15483.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_15670.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_15749 ;
      {
      GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_15670.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_15749 COMMA_SOURCE_FILE ("type-extern.galgas", 396)) ;
      }
      var_routineSignature_15542.addAssign_operation (enumerator_15670.current_mFormalSelector (HERE), var_parameterTypeIndex_15749, enumerator_15670.current_mFormalArgumentPassingMode (HERE), enumerator_15670.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-extern.galgas", 401)) ;
      enumerator_15670.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_12991.setter_insertKey (enumerator_15483.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 406)), var_routineSignature_15542, enumerator_15483.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 410)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-extern.galgas", 411)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 404)) ;
    }
    enumerator_15483.gotoNextObject () ;
  }
  {
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  const GALGAS_externTypeDeclarationAST temp_6 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_4.readProperty_mExternTypeName (), temp_5.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 420)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 421)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 423)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 424)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 425)), var_constructorMap_12911, var_getterMap_12872, var_setterMap_12943, var_instanceMethodMap_12991, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 430)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 431)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 432)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 433)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 434)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 435)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 436)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 437)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 438)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-extern.galgas", 440)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (temp_6.readProperty_mExternTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 442)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 442)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 416)) ;
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
  GALGAS_lstring var_nameForUsefulness_17764 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mExternTypeName (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 460)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17764, var_nameForUsefulness_17764, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 461)) ;
  }
  const GALGAS_externTypeDeclarationAST temp_1 = object ;
  const GALGAS_externTypeDeclarationAST temp_2 = object ;
  const GALGAS_externTypeDeclarationAST temp_3 = object ;
  const GALGAS_externTypeDeclarationAST temp_4 = object ;
  const GALGAS_externTypeDeclarationAST temp_5 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (temp_1.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 464)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mExternTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 466)), temp_3.readProperty_mExternTypeName ().readProperty_string (), temp_4.readProperty_mCppPreDeclarationCode (), temp_5.readProperty_mCppClassCode ()  COMMA_SOURCE_FILE ("type-extern.galgas", 465))  COMMA_SOURCE_FILE ("type-extern.galgas", 463)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 489)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 490)), temp_2.readProperty_mCppPreDeclarationCode (), temp_3.readProperty_mCppClassCode () COMMA_SOURCE_FILE ("type-extern.galgas", 488))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 495)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 496)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 497)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 498)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 499)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 500)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 501)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 502)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 503)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 504)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 505)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 506)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 507)) COMMA_SOURCE_FILE ("type-extern.galgas", 494))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 494)) ;
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
  GALGAS_lstring var_key_3889 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 104)), temp_1.readProperty_mGraphTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 104)) ;
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3889, temp_2, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 105)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3889, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 106)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 106)) COMMA_SOURCE_FILE ("type-graph.galgas", 106)) ;
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
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeEntry_4956 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeEntry_4956 COMMA_SOURCE_FILE ("type-graph.galgas", 119)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeEntry_5125 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeEntry_5125 COMMA_SOURCE_FILE ("type-graph.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_5290 ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mGraphTypeName (), var_graphTypeEntry_5290 COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_5483 ;
  {
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mAssociatedListTypeName (), var_associatedListTypeEntry_5483 COMMA_SOURCE_FILE ("type-graph.galgas", 137)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringListTypeEntry_5665 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeEntry_5665 COMMA_SOURCE_FILE ("type-graph.galgas", 143)) ;
  }
  GALGAS_getterMap var_getterMap_5759 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5759, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)) ;
  }
  GALGAS_constructorMap var_constructorMap_5798 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 150)) ;
  GALGAS_setterMap var_setterMap_5830 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 151)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5878 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 152)) ;
  GALGAS_classMethodMap var_classMethodMap_5920 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 153)) ;
  GALGAS_formalParameterSignature var_formalParameterList_6011 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 155)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 157)), var_associatedListTypeEntry_5483, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 159)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 162)), var_lstringListTypeEntry_5665, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 164)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 161)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 167)), var_associatedListTypeEntry_5483, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 169)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 166)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 172)), var_lstringListTypeEntry_5665, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 174)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 171)) ;
  {
  var_instanceMethodMap_5878.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList_6011, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 183)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap_5878.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 187))  COMMA_SOURCE_FILE ("type-graph.galgas", 187)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 188)), var_formalParameterList_6011, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 190)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 192)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 193)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 186)) ;
  }
  var_formalParameterList_6011 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 198)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 200)), var_associatedListTypeEntry_5483, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 202)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 199)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 205)), var_lstringListTypeEntry_5665, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 207)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  {
  var_instanceMethodMap_5878.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 210))  COMMA_SOURCE_FILE ("type-graph.galgas", 210)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 211)), var_formalParameterList_6011, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 213)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 215)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 216)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 209)) ;
  }
  {
  var_instanceMethodMap_5878.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220))  COMMA_SOURCE_FILE ("type-graph.galgas", 220)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 221)), var_formalParameterList_6011, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 223)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 225)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 226)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 219)) ;
  }
  {
  var_instanceMethodMap_5878.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 230))  COMMA_SOURCE_FILE ("type-graph.galgas", 230)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 231)), var_formalParameterList_6011, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 233)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 235)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-graph.galgas", 236)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 229)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_2 = object ;
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), temp_2.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 241)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 249)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 257)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 265)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 273)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 281)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 291)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 301)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 309)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 317)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_3 = object ;
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), temp_3.readProperty_mGraphTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 325)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_5759, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 337)) ;
  }
  {
  var_constructorMap_5798.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 348))  COMMA_SOURCE_FILE ("type-graph.galgas", 348)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 349)), GALGAS_bool (false), var_graphTypeEntry_5290, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 347)) ;
  }
  var_formalParameterList_6011 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 354)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeEntry_5125, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 358)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 355)) ;
  cEnumerator_functionSignature enumerator_12071 (var_associatedListTypeEntry_5483.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 360)), kENUMERATION_UP) ;
  while (enumerator_12071.hasCurrentObject ()) {
    var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 362)), enumerator_12071.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 364)), enumerator_12071.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 361)) ;
    enumerator_12071.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_4 = object ;
  cEnumerator_graphInsertModifierList enumerator_12316 (temp_4.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_12316.hasCurrentObject ()) {
    {
    var_setterMap_5830.setter_insertOrReplace (enumerator_12316.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 370)), var_formalParameterList_6011, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 373)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 368)) ;
    }
    enumerator_12316.gotoNextObject () ;
  }
  {
  var_setterMap_5830.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380))  COMMA_SOURCE_FILE ("type-graph.galgas", 380)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 381)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 382)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 384)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 379)) ;
  }
  var_formalParameterList_6011 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 388)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 389)), var_stringTypeEntry_4956, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 389)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 389)) ;
  {
  var_setterMap_5830.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 391))  COMMA_SOURCE_FILE ("type-graph.galgas", 391)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 392)), var_formalParameterList_6011, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 390)) ;
  }
  var_formalParameterList_6011 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 401)), var_lstringTypeEntry_5125, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 401)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 401)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 402)), var_lstringTypeEntry_5125, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 402)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 402)) ;
  {
  var_setterMap_5830.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 404))  COMMA_SOURCE_FILE ("type-graph.galgas", 404)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 405)), var_formalParameterList_6011, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 403)) ;
  }
  var_formalParameterList_6011 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 413)) ;
  var_formalParameterList_6011.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 414)), var_lstringTypeEntry_5125, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 414)) ;
  {
  var_setterMap_5830.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 416))  COMMA_SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 417)), var_formalParameterList_6011, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 420)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 415)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_5 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_5.readProperty_mGraphTypeName (), var_getterMap_5759, var_setterMap_5830, var_instanceMethodMap_5878, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 425)) ;
  }
  {
  const GALGAS_graphDeclarationAST temp_6 = object ;
  const GALGAS_graphDeclarationAST temp_7 = object ;
  const GALGAS_graphDeclarationAST temp_8 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_6.readProperty_mGraphTypeName (), temp_7.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 441)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 442)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 444)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 446)), var_constructorMap_5798, var_getterMap_5759, var_setterMap_5830, var_instanceMethodMap_5878, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 452)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 453)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 454)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 455)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 456)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 458)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 459)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-graph.galgas", 461)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (temp_8.readProperty_mGraphTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 463)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
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
  GALGAS_lstring var_nameForUsefulness_16247 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mGraphTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 481)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_16247, var_nameForUsefulness_16247, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 482)) ;
  }
  const GALGAS_graphDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_16415 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_16247, var_associatedTypeNameForUsefulness_16415 COMMA_SOURCE_FILE ("type-graph.galgas", 484)) ;
  }
  const GALGAS_graphDeclarationAST temp_2 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_graphTypeEntry_16594 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_2.readProperty_mGraphTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 486)) ;
  const GALGAS_graphDeclarationAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeEntry_16709 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mAssociatedListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 487)) ;
  const GALGAS_graphDeclarationAST temp_4 = object ;
  const GALGAS_graphDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListElementTypeEntry_16840 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_4.readProperty_mAssociatedListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), temp_5.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-graph.galgas", 490)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 488)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (kIsNotEqual, var_associatedListTypeEntry_16709.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 491)))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_graphDeclarationAST temp_7 = object ;
      const GALGAS_graphDeclarationAST temp_8 = object ;
      TC_Array <C_FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_8.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), fixItArray9  COMMA_SOURCE_FILE ("type-graph.galgas", 492)) ;
    }
  }
  GALGAS_stringset temp_10 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 495)) ;
  temp_10.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 495)) ;
  temp_10.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 495)) ;
  GALGAS_stringset var_reservedModifierNames_17290 = temp_10 ;
  const GALGAS_graphDeclarationAST temp_11 = object ;
  cEnumerator_graphInsertModifierList enumerator_17364 (temp_11.readProperty_mInsertModifierList (), kENUMERATION_UP) ;
  while (enumerator_17364.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_reservedModifierNames_17290.getter_hasKey (enumerator_17364.current_mInsertModifierName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-graph.galgas", 497)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_17364.current_mInsertModifierName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_17364.current_mInsertModifierName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 498)), fixItArray13  COMMA_SOURCE_FILE ("type-graph.galgas", 498)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_17364.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 500)) ;
    }
    enumerator_17364.gotoNextObject () ;
  }
  const GALGAS_graphDeclarationAST temp_14 = object ;
  const GALGAS_graphDeclarationAST temp_15 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (temp_14.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 504)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeEntry_16594, var_associatedListTypeEntry_16709, var_associatedListElementTypeEntry_16840, temp_15.readProperty_mInsertModifierList ()  COMMA_SOURCE_FILE ("type-graph.galgas", 505))  COMMA_SOURCE_FILE ("type-graph.galgas", 503)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 529)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 530)) COMMA_SOURCE_FILE ("type-graph.galgas", 528))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 533)), temp_3.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 534)), temp_4.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 535)), temp_5.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 536)), temp_6.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 537)), temp_7.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 538)), temp_8.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 539)), temp_9.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 540)), temp_10.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 541)), temp_11.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 542)), temp_12.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 543)), temp_13.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 544)), temp_14.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 545)) COMMA_SOURCE_FILE ("type-graph.galgas", 532))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 532)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 555)) ;
  const GALGAS_graphDeclarationForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 556)) ;
  const GALGAS_graphDeclarationForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mAssociatedListElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 557)) ;
  const GALGAS_graphDeclarationForGeneration temp_3 = object ;
  const GALGAS_graphDeclarationForGeneration temp_4 = object ;
  const GALGAS_graphDeclarationForGeneration temp_5 = object ;
  const GALGAS_graphDeclarationForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry (), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 560)), temp_5.readProperty_mAssociatedListTypeEntry (), temp_6.readProperty_mInsertModifierList () COMMA_SOURCE_FILE ("type-graph.galgas", 558))) ;
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
  GALGAS_lstring var_key_3204 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 84)), temp_1.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
  {
  const GALGAS_listDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3204, temp_2, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 85)) ;
  }
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3364 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3364.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3364.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 87)), enumerator_3364.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 87)) COMMA_SOURCE_FILE ("type-list.galgas", 87)) ;
    }
    enumerator_3364.gotoNextObject () ;
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
  GALGAS_typedPropertyList var_typedAttributeList_4222 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 102)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_4292 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_4292.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_4427 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_4292.current_mPropertyTypeName (HERE), var_attributeTypeIndex_4427 COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
    }
    GALGAS_bool var_hasSelector_4448 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_4472 (enumerator_4292.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_4472.hasCurrentObject ()) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (kIsEqual, enumerator_4472.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticWarning (enumerator_4472.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%setter' is obsolete and has no effect"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 108)) ;
        }
      }
      if (kBoolFalse == test_1) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_4472.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticWarning (enumerator_4472.current_mValue (HERE).readProperty_location (), GALGAS_string ("'%nogetter' is obsolete and has no effect"), fixItArray4  COMMA_SOURCE_FILE ("type-list.galgas", 110)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_4472.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_5) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = var_hasSelector_4448.boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <C_FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_4472.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 113)) ;
                }
              }
              var_hasSelector_4448 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_5) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            GALGAS_stringlist temp_9 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 119)) ;
            temp_9.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 119)) ;
            appendFixItActions (fixItArray8, kFixItReplace, temp_9) ;
            inCompiler->emitSemanticError (enumerator_4472.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribute is allowed here"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 117)) ;
          }
        }
      }
      enumerator_4472.gotoNextObject () ;
    }
    var_typedAttributeList_4222.addAssign_operation (var_attributeTypeIndex_4427, enumerator_4292.current_mPropertyName (HERE), enumerator_4292.current_mIsPublic (HERE), var_hasSelector_4448  COMMA_SOURCE_FILE ("type-list.galgas", 122)) ;
    enumerator_4292.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_uintType_5250 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_5250 COMMA_SOURCE_FILE ("type-list.galgas", 125)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listTypeIndex_5375 ;
  {
  const GALGAS_listDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_10.readProperty_mListTypeName (), var_listTypeIndex_5375 COMMA_SOURCE_FILE ("type-list.galgas", 127)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_5623 ;
  {
  const GALGAS_listDeclarationAST temp_11 = object ;
  const GALGAS_listDeclarationAST temp_12 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_11.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 131)), temp_12.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 131)), var_listElementTypeIndex_5623 COMMA_SOURCE_FILE ("type-list.galgas", 129)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5708 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 135)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5767 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 136)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5835 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 137)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5902 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 138)) ;
  cEnumerator_typedPropertyList enumerator_5962 (var_typedAttributeList_4222, kENUMERATION_UP) ;
  while (enumerator_5962.hasCurrentObject ()) {
    GALGAS_string temp_13 ;
    const enumGalgasBool test_14 = enumerator_5962.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_14) {
      temp_13 = enumerator_5962.current_mPropertyName (HERE).readProperty_string () ;
    }else if (kBoolFalse == test_14) {
      temp_13 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_6005 = temp_13 ;
    var_enumerationDescriptor_5708.addAssign_operation (enumerator_5962.current_mPropertyTypeEntry (HERE), enumerator_5962.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 141)) ;
    var_constructorAttributeTypeList_5767.addAssign_operation (var_selector_6005.getter_nowhere (SOURCE_FILE ("type-list.galgas", 143)), enumerator_5962.current_mPropertyTypeEntry (HERE), enumerator_5962.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 142)) ;
    var_setterOutputFormalArgumentList_5835.addAssign_operation (var_selector_6005.getter_nowhere (SOURCE_FILE ("type-list.galgas", 147)), enumerator_5962.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 149)), enumerator_5962.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
    var_setterInputFormalArgumentList_5902.addAssign_operation (var_selector_6005.getter_nowhere (SOURCE_FILE ("type-list.galgas", 152)), enumerator_5962.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 154)), enumerator_5962.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 151)) ;
    enumerator_5962.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6591 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 158)) ;
  {
  const GALGAS_listDeclarationAST temp_15 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6591, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), temp_15.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 159)) ;
  }
  {
  var_constructorMap_6591.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 167))  COMMA_SOURCE_FILE ("type-list.galgas", 167)), var_constructorAttributeTypeList_5767, GALGAS_bool (false), var_listTypeIndex_5375, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 166)) ;
  }
  GALGAS_getterMap var_getterMap_7034 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_7034, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 173)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7034, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 174)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_7034, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 181)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_16 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_7034, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_16.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 188)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_17 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_7034, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), temp_17.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 195)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_18 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_7034, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), temp_18.readProperty_mListTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 202)) ;
  }
  cEnumerator_typedPropertyList enumerator_8089 (var_typedAttributeList_4222, kENUMERATION_UP) ;
  while (enumerator_8089.hasCurrentObject ()) {
    {
    GALGAS_functionSignature temp_19 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 213)) ;
    temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 213)), var_uintType_5250, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 213)) ;
    var_getterMap_7034.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_8089.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 211)), enumerator_8089.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 211)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 212)), temp_19, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 214)), GALGAS_bool (true), enumerator_8089.current_mPropertyTypeEntry (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 217)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 210)) ;
    }
    enumerator_8089.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_8546 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 222)) ;
  {
  var_instanceMethodMap_8546.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 224))  COMMA_SOURCE_FILE ("type-list.galgas", 224)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 225)), var_setterOutputFormalArgumentList_5835, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 227)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 229)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 230)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 223)) ;
  }
  {
  var_instanceMethodMap_8546.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 234))  COMMA_SOURCE_FILE ("type-list.galgas", 234)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 235)), var_setterOutputFormalArgumentList_5835, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 237)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 239)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-list.galgas", 240)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 233)) ;
  }
  GALGAS_setterMap var_setterMap_9110 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 244)) ;
  {
  GALGAS_formalParameterSignature temp_20 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 248)) ;
  temp_20.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 248)), var_listElementTypeIndex_5623, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 248)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 248)) ;
  var_setterMap_9110.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 246))  COMMA_SOURCE_FILE ("type-list.galgas", 246)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 247)), temp_20, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 250)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 245)) ;
  }
  {
  var_setterMap_9110.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 254))  COMMA_SOURCE_FILE ("type-list.galgas", 254)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 255)), var_setterOutputFormalArgumentList_5835, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 258)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 253)) ;
  }
  {
  var_setterMap_9110.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 262))  COMMA_SOURCE_FILE ("type-list.galgas", 262)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 263)), var_setterOutputFormalArgumentList_5835, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 266)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 261)) ;
  }
  var_setterOutputFormalArgumentList_5835.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 269)), var_uintType_5250, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 269)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 269)) ;
  {
  var_setterMap_9110.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 271))  COMMA_SOURCE_FILE ("type-list.galgas", 271)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 272)), var_setterOutputFormalArgumentList_5835, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 275)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 270)) ;
  }
  cEnumerator_typedPropertyList enumerator_10191 (var_typedAttributeList_4222, kENUMERATION_UP) ;
  while (enumerator_10191.hasCurrentObject ()) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = enumerator_10191.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_10275 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 281)) ;
        var_setterFormalArgumentList_10275.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 282)), enumerator_10191.current_mPropertyTypeEntry (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 282)), enumerator_10191.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 282)) ;
        var_setterFormalArgumentList_10275.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 283)), var_uintType_5250, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 283)), enumerator_10191.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-list.galgas", 283)) ;
        {
        var_setterMap_9110.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_10191.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 285)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 285)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 285)), enumerator_10191.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 285)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 286)), var_setterFormalArgumentList_10275, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 289)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 284)) ;
        }
      }
    }
    enumerator_10191.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5902.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 295)), var_uintType_5250, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 295)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 295)) ;
  {
  var_setterMap_9110.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 297))  COMMA_SOURCE_FILE ("type-list.galgas", 297)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 298)), var_setterInputFormalArgumentList_5902, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 301)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 296)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_22 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_22.readProperty_mListTypeName (), var_getterMap_7034, var_setterMap_9110, var_instanceMethodMap_8546, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 306)) ;
  }
  {
  const GALGAS_listDeclarationAST temp_23 = object ;
  const GALGAS_listDeclarationAST temp_24 = object ;
  const GALGAS_listDeclarationAST temp_25 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_23.readProperty_mListTypeName (), temp_24.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-list.galgas", 322)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 323)), GALGAS_bool (true), var_typedAttributeList_4222, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 326)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 327)), var_constructorMap_6591, var_getterMap_7034, var_setterMap_9110, var_instanceMethodMap_8546, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 332)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 333)), var_enumerationDescriptor_5708, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-list.galgas", 335)) COMMA_SOURCE_FILE ("type-list.galgas", 335)), var_constructorAttributeTypeList_5767, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 337)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 338)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 339)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 340)), GALGAS_bool (false), var_listElementTypeIndex_5623, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (temp_25.readProperty_mListTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 344)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 344)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 318)) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_12818 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 354)) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12877 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12877.hasCurrentObject ()) {
    var_structAttributeList_12818.addAssign_operation (enumerator_12877.current_isConstant (HERE), enumerator_12877.current_mPropertyTypeName (HERE), enumerator_12877.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 361))  COMMA_SOURCE_FILE ("type-list.galgas", 356)) ;
    enumerator_12877.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 365)), temp_3.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 365)), var_structAttributeList_12818, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 363))  COMMA_SOURCE_FILE ("type-list.galgas", 363)) ;
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
  GALGAS_lstring var_nameForUsefulness_13958 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 385)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13958, var_nameForUsefulness_13958, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 386)) ;
  }
  const GALGAS_listDeclarationAST temp_1 = object ;
  const GALGAS_listDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_14122 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mListTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 387)), temp_2.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13958, var_elementTypeNameForUsefulness_14122 COMMA_SOURCE_FILE ("type-list.galgas", 388)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14358 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 390)) ;
  GALGAS_propertyIndexMap var_attributeMap_14400 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 391)) ;
  const GALGAS_listDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_14471 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_14471.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14535 = function_typeNameForUsefulEntitiesGraph (enumerator_14471.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 393)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_13958, var_propertyTypeNameForUsefulness_14535 COMMA_SOURCE_FILE ("type-list.galgas", 394)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_14687 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_14471.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 395)) ;
    GALGAS_bool var_hasSetter_14788 = enumerator_14471.current_mIsPublic (HERE) ;
    GALGAS_bool var_hasSelector_14820 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_14844 (enumerator_14471.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_14844.hasCurrentObject ()) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (kIsEqual, enumerator_14844.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticWarning (enumerator_14844.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: setter is implicitly generated for a public property"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (kIsEqual, enumerator_14844.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticWarning (enumerator_14844.current_mValue (HERE).readProperty_location (), GALGAS_string ("obsolete attribute: use 'private' qualifier"), fixItArray7  COMMA_SOURCE_FILE ("type-list.galgas", 402)) ;
          }
        }
        if (kBoolFalse == test_6) {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (kIsEqual, enumerator_14844.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_hasSelector_14820.boolEnum () ;
                if (kBoolTrue == test_9) {
                  TC_Array <C_FixItDescription> fixItArray10 ;
                  inCompiler->emitSemanticError (enumerator_14844.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '%selector' attribute is already named"), fixItArray10  COMMA_SOURCE_FILE ("type-list.galgas", 405)) ;
                }
              }
              var_hasSelector_14820 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_8) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            GALGAS_stringlist temp_12 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 411)) ;
            temp_12.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 411)) ;
            appendFixItActions (fixItArray11, kFixItReplace, temp_12) ;
            inCompiler->emitSemanticError (enumerator_14844.current_mValue (HERE).readProperty_location (), GALGAS_string ("only '%selector' attribut is allowed here"), fixItArray11  COMMA_SOURCE_FILE ("type-list.galgas", 409)) ;
          }
        }
      }
      enumerator_14844.gotoNextObject () ;
    }
    var_typedAttributeList_14358.addAssign_operation (var_t_14687, enumerator_14471.current_mPropertyName (HERE), var_hasSetter_14788, var_hasSelector_14820  COMMA_SOURCE_FILE ("type-list.galgas", 414)) ;
    {
    var_attributeMap_14400.setter_insertKey (enumerator_14471.current_mPropertyName (HERE), var_t_14687, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 419)) ;
    }
    enumerator_14471.gotoNextObject () ;
  }
  const GALGAS_listDeclarationAST temp_13 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_15616 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_13.readProperty_mListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 422)) ;
  const GALGAS_listDeclarationAST temp_14 = object ;
  const GALGAS_listDeclarationAST temp_15 = object ;
  const GALGAS_listDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (temp_14.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 424)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_15616, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_15.readProperty_mListTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 427)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 427)), temp_16.readProperty_mListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-list.galgas", 427)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 427)), var_typedAttributeList_14358  COMMA_SOURCE_FILE ("type-list.galgas", 425))  COMMA_SOURCE_FILE ("type-list.galgas", 423)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 465)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 466)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-list.galgas", 464))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 470)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 471)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 472)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 473)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 474)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 475)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 476)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 477)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 478)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 479)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 480)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 481)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 482)) COMMA_SOURCE_FILE ("type-list.galgas", 469))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 469)) ;
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
  cEnumerator_typedPropertyList enumerator_18428 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_18428.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18428.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 493)) ;
    enumerator_18428.gotoNextObject () ;
  }
  const GALGAS_listTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mListElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 495)) ;
  const GALGAS_listTypeForGeneration temp_2 = object ;
  extensionMethod_addHeaderFileName (temp_2.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 496)) ;
  const GALGAS_listTypeForGeneration temp_3 = object ;
  const GALGAS_listTypeForGeneration temp_4 = object ;
  const GALGAS_listTypeForGeneration temp_5 = object ;
  const GALGAS_listTypeForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 498)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 499)), temp_5.readProperty_mTypedAttributeList (), temp_6.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 501)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 501)) COMMA_SOURCE_FILE ("type-list.galgas", 497))) ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_2626 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 63)) ;
  var_structAttributeList_2626.addAssign_operation (GALGAS_bool (false), GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 66)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 67)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 64)) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  var_structAttributeList_2626.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mAssociatedListTypeName (), GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 73)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 75))  COMMA_SOURCE_FILE ("type-listmap.galgas", 70)) ;
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 79)), var_structAttributeList_2626, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 77))  COMMA_SOURCE_FILE ("type-listmap.galgas", 77)) ;
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
  GALGAS_lstring var_key_3894 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 95)), temp_1.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 95)) ;
  {
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3894, temp_2, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3894, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 97)), temp_4.readProperty_mAssociatedListTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) COMMA_SOURCE_FILE ("type-listmap.galgas", 97)) ;
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
  GALGAS_typeKindEnum var_typeKindEnum_4974 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_5032 ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  GALGAS_bool joker_4936_3 ; // Joker input parameter
  GALGAS_bool joker_4936_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_4936_1 ; // Joker input parameter
  GALGAS_bool joker_4980 ; // Joker input parameter
  GALGAS_propertyMap joker_5038_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_5038_19 ; // Joker input parameter
  GALGAS_constructorMap joker_5038_18 ; // Joker input parameter
  GALGAS_getterMap joker_5038_17 ; // Joker input parameter
  GALGAS_setterMap joker_5038_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_5038_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_5038_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_5038_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_5038_12 ; // Joker input parameter
  GALGAS_operators joker_5038_11 ; // Joker input parameter
  GALGAS_functionSignature joker_5038_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_5038_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_5038_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_5038_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_5038_6 ; // Joker input parameter
  GALGAS_bool joker_5038_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_5038_4 ; // Joker input parameter
  GALGAS_string joker_5038_3 ; // Joker input parameter
  GALGAS_string joker_5038_2 ; // Joker input parameter
  GALGAS_headerKind joker_5038_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_0.readProperty_mAssociatedListTypeName (), joker_4936_3, joker_4936_2, joker_4936_1, var_typeKindEnum_4974, joker_4980, var_listTypedAttributeList_5032, joker_5038_20, joker_5038_19, joker_5038_18, joker_5038_17, joker_5038_16, joker_5038_15, joker_5038_14, joker_5038_13, joker_5038_12, joker_5038_11, joker_5038_10, joker_5038_9, joker_5038_8, joker_5038_7, joker_5038_6, joker_5038_5, joker_5038_4, joker_5038_3, joker_5038_2, joker_5038_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 110)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4974.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 118)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_listmapDeclarationAST temp_2 = object ;
      const GALGAS_listmapDeclarationAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("the '@").add_operation (temp_3.readProperty_mAssociatedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 119)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 119)), fixItArray4  COMMA_SOURCE_FILE ("type-listmap.galgas", 119)) ;
      var_listTypedAttributeList_5032 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 120)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_5308 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 123)) ;
  GALGAS_getterMap var_getterMap_5398 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5398, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 124)) ;
  }
  GALGAS_setterMap var_setterMap_5427 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 125)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5475 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 126)) ;
  GALGAS_unifiedTypeMap_2D_entry var_associatedListTypeIndex_5634 ;
  {
  const GALGAS_listmapDeclarationAST temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_5.readProperty_mAssociatedListTypeName (), var_associatedListTypeIndex_5634 COMMA_SOURCE_FILE ("type-listmap.galgas", 128)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_5768 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5768 COMMA_SOURCE_FILE ("type-listmap.galgas", 130)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5398, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 132)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5398, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5398, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 146)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_6 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_5398, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), temp_6.readProperty_mAssociatedListTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_7 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_5308, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_7.readProperty_mListmapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 163)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6822 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 171)) ;
  var_enumeratorDescriptor_6822.addAssign_operation (var_stringTypeIndex_5768, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 172)) ;
  var_enumeratorDescriptor_6822.addAssign_operation (var_associatedListTypeIndex_5634, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 173)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_7035 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 175)) ;
  var_addAssignOperatorDescription_7035.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 176)), var_stringTypeIndex_5768, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 176)) ;
  cEnumerator_typedPropertyList enumerator_7176 (var_listTypedAttributeList_5032, kENUMERATION_UP) ;
  while (enumerator_7176.hasCurrentObject ()) {
    var_addAssignOperatorDescription_7035.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 178)), enumerator_7176.current_mPropertyTypeEntry (HERE), enumerator_7176.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 178)) ;
    enumerator_7176.gotoNextObject () ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_8.readProperty_mListmapTypeName (), var_getterMap_5398, var_setterMap_5427, var_instanceMethodMap_5475, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 181)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_listElementTypeIndex_7863 ;
  {
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_9.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 195)), temp_10.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 195)), var_listElementTypeIndex_7863 COMMA_SOURCE_FILE ("type-listmap.galgas", 193)) ;
  }
  {
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  const GALGAS_listmapDeclarationAST temp_13 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_11.readProperty_mListmapTypeName (), temp_12.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-listmap.galgas", 203)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 204)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 206)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 207)), var_listTypedAttributeList_5032, var_constructorMap_5308, var_getterMap_5398, var_setterMap_5427, var_instanceMethodMap_5475, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 213)), GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 214)), var_enumeratorDescriptor_6822, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 216)), var_addAssignOperatorDescription_7035, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 218)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 219)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 220)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 221)), GALGAS_bool (false), var_listElementTypeIndex_7863, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (temp_13.readProperty_mListmapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 225)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 199)) ;
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
  GALGAS_lstring var_nameForUsefulness_9434 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mListmapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 243)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9434, var_nameForUsefulness_9434, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 244)) ;
  }
  const GALGAS_listmapDeclarationAST temp_1 = object ;
  GALGAS_lstring var_associatedTypeNameForUsefulness_9604 = function_typeNameForUsefulEntitiesGraph (temp_1.readProperty_mAssociatedListTypeName (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 245)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9434, var_associatedTypeNameForUsefulness_9604 COMMA_SOURCE_FILE ("type-listmap.galgas", 246)) ;
  }
  const GALGAS_listmapDeclarationAST temp_2 = object ;
  const GALGAS_listmapDeclarationAST temp_3 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_9792 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_2.readProperty_mListmapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 247)), temp_3.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 247)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 247)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9434, var_elementTypeNameForUsefulness_9792 COMMA_SOURCE_FILE ("type-listmap.galgas", 248)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_10149 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_10206 ;
  const GALGAS_listmapDeclarationAST temp_4 = object ;
  GALGAS_bool joker_10111_3 ; // Joker input parameter
  GALGAS_bool joker_10111_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_10111_1 ; // Joker input parameter
  GALGAS_bool joker_10155 ; // Joker input parameter
  GALGAS_propertyMap joker_10212_20 ; // Joker input parameter
  GALGAS_typedPropertyList joker_10212_19 ; // Joker input parameter
  GALGAS_constructorMap joker_10212_18 ; // Joker input parameter
  GALGAS_getterMap joker_10212_17 ; // Joker input parameter
  GALGAS_setterMap joker_10212_16 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_10212_15 ; // Joker input parameter
  GALGAS_classMethodMap joker_10212_14 ; // Joker input parameter
  GALGAS_optionalMethodMap joker_10212_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_10212_12 ; // Joker input parameter
  GALGAS_operators joker_10212_11 ; // Joker input parameter
  GALGAS_functionSignature joker_10212_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_10212_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_10212_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_10212_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_10212_6 ; // Joker input parameter
  GALGAS_bool joker_10212_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_entry joker_10212_4 ; // Joker input parameter
  GALGAS_string joker_10212_3 ; // Joker input parameter
  GALGAS_string joker_10212_2 ; // Joker input parameter
  GALGAS_headerKind joker_10212_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mTypeMap ().method_searchKey (temp_4.readProperty_mAssociatedListTypeName (), joker_10111_3, joker_10111_2, joker_10111_1, var_typeKindEnum_10149, joker_10155, var_listTypeAttributeList_10206, joker_10212_20, joker_10212_19, joker_10212_18, joker_10212_17, joker_10212_16, joker_10212_15, joker_10212_14, joker_10212_13, joker_10212_12, joker_10212_11, joker_10212_10, joker_10212_9, joker_10212_8, joker_10212_7, joker_10212_6, joker_10212_5, joker_10212_4, joker_10212_3, joker_10212_2, joker_10212_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 250)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_10149.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 259)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_listmapDeclarationAST temp_6 = object ;
      TC_Array <C_FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mAssociatedListTypeName ().readProperty_location (), GALGAS_string ("associated type should be a list type"), fixItArray7  COMMA_SOURCE_FILE ("type-listmap.galgas", 260)) ;
    }
  }
  const GALGAS_listmapDeclarationAST temp_8 = object ;
  const GALGAS_listmapDeclarationAST temp_9 = object ;
  const GALGAS_listmapDeclarationAST temp_10 = object ;
  const GALGAS_listmapDeclarationAST temp_11 = object ;
  const GALGAS_listmapDeclarationAST temp_12 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (temp_8.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_9.readProperty_mListmapTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 266)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_10.readProperty_mAssociatedListTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 267)), var_listTypeAttributeList_10206, GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_11.readProperty_mListmapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), temp_12.readProperty_mListmapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 269))  COMMA_SOURCE_FILE ("type-listmap.galgas", 265))  COMMA_SOURCE_FILE ("type-listmap.galgas", 263)) ;
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
  cEnumerator_typedPropertyList enumerator_11618 (temp_0.readProperty_mAssociatedListTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_11618.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_11618.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 289)) ;
    enumerator_11618.gotoNextObject () ;
  }
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 294)) COMMA_SOURCE_FILE ("type-listmap.galgas", 292))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 297)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 298)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 299)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 300)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 301)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 302)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 303)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 304)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 305)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 306)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 307)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 308)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 309)) COMMA_SOURCE_FILE ("type-listmap.galgas", 296))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 296)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 319)) ;
  const GALGAS_listmapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mAssociatedListMapElementTypeIndex (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 320)) ;
  const GALGAS_listmapTypeForGeneration temp_2 = object ;
  const GALGAS_listmapTypeForGeneration temp_3 = object ;
  const GALGAS_listmapTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 322)), temp_3.readProperty_mAssociatedListTypeIndex ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 323)), temp_4.readProperty_mAssociatedListTypedAttributeList () COMMA_SOURCE_FILE ("type-listmap.galgas", 321))) ;
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
  GALGAS_string result_result ; // Returned variable
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("dict @").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 15)) ;
//---
  return result_result ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_3786 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 111)) ;
  const GALGAS_dictDeclarationAST temp_0 = object ;
  var_structAttributeList_3786.addAssign_operation (GALGAS_bool (false), temp_0.readProperty_mKeyTypeName (), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 112)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 112))  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_3926 (temp_1.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_3926.hasCurrentObject ()) {
    var_structAttributeList_3786.addAssign_operation (GALGAS_bool (false), enumerator_3926.current_mPropertyTypeName (HERE), enumerator_3926.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 114))  COMMA_SOURCE_FILE ("type-dict.galgas", 114)) ;
    enumerator_3926.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_2 = object ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_2.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_3.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 118)), temp_4.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 118)), var_structAttributeList_3786, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 116))  COMMA_SOURCE_FILE ("type-dict.galgas", 116)) ;
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
  GALGAS_lstring var_dictionary_5035 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 135)), temp_1.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 135)) ;
  {
  const GALGAS_dictDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_5035, temp_2, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 136)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_3 = object ;
  const GALGAS_dictDeclarationAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_3.readProperty_mKeyTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 137)), temp_4.readProperty_mKeyTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 137)) COMMA_SOURCE_FILE ("type-dict.galgas", 137)) ;
  }
  const GALGAS_dictDeclarationAST temp_5 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_5307 (temp_5.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_5307.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_5307.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 139)), enumerator_5307.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
    }
    enumerator_5307.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_keyTypeIndex_6220 ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mKeyTypeName ().readProperty_string (), var_keyTypeIndex_6220 COMMA_SOURCE_FILE ("type-dict.galgas", 153)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_6278 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_6220, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_6403 = GALGAS_bool (false) ;
  const GALGAS_dictDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_6420 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_6420.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_6420.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_6403.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_6420.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-dict.galgas", 161)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_6403 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_6420.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 165)) ;
    }
    enumerator_6420.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_6724 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 169)) ;
  GALGAS_getterMap var_getterMap_6815 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6815, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 170)) ;
  }
  GALGAS_setterMap var_setterMap_6844 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 171)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_6892 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 172)) ;
  {
  const GALGAS_dictDeclarationAST temp_6 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_6724, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), temp_6.readProperty_mDictTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 174)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_7 = object ;
  routine_enterBaseGetterWithArgument (var_getterMap_6815, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), temp_7.readProperty_mKeyTypeName ().readProperty_string (), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 182)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6815, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 189)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_7584 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 197)) ;
  GALGAS_typedPropertyList var_typedPropertyList_7632 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 198)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_7714 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 199)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_7714.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 200)), var_keyTypeIndex_6220, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
  GALGAS_string temp_8 ;
  const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_6403.boolEnum () ;
  if (kBoolTrue == test_9) {
    temp_8 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_9) {
    temp_8 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_7584.addAssign_operation (temp_8.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 202)), var_keyTypeIndex_6220, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 204)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 201)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_8067 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 206)) ;
  GALGAS_string temp_10 ;
  const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_6403.boolEnum () ;
  if (kBoolTrue == test_11) {
    temp_10 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_11) {
    temp_10 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_8067.addAssign_operation (temp_10.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 208)), var_keyTypeIndex_6220, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 210)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 207)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_8320 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 212)) ;
  GALGAS_string temp_12 ;
  const enumGalgasBool test_13 = var_usesSelectorsInInsertAndSearch_6403.boolEnum () ;
  if (kBoolTrue == test_13) {
    temp_12 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_13) {
    temp_12 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_8320.addAssign_operation (GALGAS_bool (true), temp_12.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 215)), var_keyTypeIndex_6220, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 213)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_8507 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 218)) ;
  const GALGAS_dictDeclarationAST temp_14 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_8582 (temp_14.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_8582.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_8717 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8582.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8717 COMMA_SOURCE_FILE ("type-dict.galgas", 220)) ;
    }
    GALGAS_bool var_hasSetter_8736 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8763 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_7714.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 223)), var_attributeTypeIndex_8717, enumerator_8582.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 223)) ;
    var_typedPropertyList_7632.addAssign_operation (var_attributeTypeIndex_8717, enumerator_8582.current_mPropertyName (HERE), var_hasSetter_8736, var_hasSelector_8763  COMMA_SOURCE_FILE ("type-dict.galgas", 224)) ;
    var_typesToIncludeInHeaderCompilation_8507.addAssign_operation (var_attributeTypeIndex_8717  COMMA_SOURCE_FILE ("type-dict.galgas", 225)) ;
    var_enumerationDescriptor_6278.addAssign_operation (var_attributeTypeIndex_8717, enumerator_8582.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 226)) ;
    GALGAS_lstring temp_15 ;
    const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_6403.boolEnum () ;
    if (kBoolTrue == test_16) {
      temp_15 = enumerator_8582.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_16) {
      temp_15 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 228)) ;
    }
    var_insertMethodFormalArgumentList_7584.addAssign_operation (temp_15, var_attributeTypeIndex_8717, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 230)), enumerator_8582.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 227)) ;
    GALGAS_lstring temp_17 ;
    const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_6403.boolEnum () ;
    if (kBoolTrue == test_18) {
      temp_17 = enumerator_8582.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_18) {
      temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 233)) ;
    }
    var_removeMethodFormalArgumentList_8067.addAssign_operation (temp_17, var_attributeTypeIndex_8717, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 235)), enumerator_8582.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 232)) ;
    GALGAS_bool test_19 = var_usesSelectorsInInsertAndSearch_6403 ;
    if (kBoolTrue != test_19.boolEnum ()) {
      test_19 = var_hasSelector_8763 ;
    }
    GALGAS_lstring temp_20 ;
    const enumGalgasBool test_21 = test_19.boolEnum () ;
    if (kBoolTrue == test_21) {
      temp_20 = enumerator_8582.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_21) {
      temp_20 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 239)) ;
    }
    var_optionalMethodSignature_8320.addAssign_operation (GALGAS_bool (false), temp_20, var_attributeTypeIndex_8717, enumerator_8582.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    enumerator_8582.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_22 = object ;
  var_setterMap_6844.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), temp_22.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 245)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 246)), var_removeMethodFormalArgumentList_8067, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 249)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 244)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_23 = object ;
  const GALGAS_dictDeclarationAST temp_24 = object ;
  var_instanceMethodMap_6892.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), temp_23.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 254)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 255)), var_removeMethodFormalArgumentList_8067, temp_24.readProperty_mDictTypeName ().readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 259)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-dict.galgas", 260)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 253)) ;
  }
  const GALGAS_dictDeclarationAST temp_25 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10410 (temp_25.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10410.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_10457 = GALGAS_lstring::constructor_new (enumerator_10410.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 265)), enumerator_10410.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_10640 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10410.current_mPropertyTypeName (HERE), var_attributeTypeIndex_10640 COMMA_SOURCE_FILE ("type-dict.galgas", 266)) ;
    }
    {
    GALGAS_functionSignature temp_26 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 270)) ;
    temp_26.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 270)), var_keyTypeIndex_6220, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 270)) ;
    var_getterMap_6815.setter_insertOrReplace (var_accessorName_10457, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 269)), temp_26, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 271)), GALGAS_bool (true), var_attributeTypeIndex_10640, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 267)) ;
    }
    enumerator_10410.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_27 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_11046 (temp_27.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_11046.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_11093 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_11046.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 281)), enumerator_11046.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 280)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_11379 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_11046.current_mPropertyTypeName (HERE), var_attributeTypeIndex_11379 COMMA_SOURCE_FILE ("type-dict.galgas", 284)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_11420 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 289)) ;
    var_accessorFormalArgumentList_11420.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 290)), var_attributeTypeIndex_11379, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 290)), enumerator_11046.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-dict.galgas", 290)) ;
    var_accessorFormalArgumentList_11420.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 291)), var_keyTypeIndex_6220, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 291)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 291)) ;
    {
    var_setterMap_6844.setter_insertOrReplace (var_accessorName_11093, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 294)), var_accessorFormalArgumentList_11420, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 297)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 292)) ;
    }
    enumerator_11046.gotoNextObject () ;
  }
  {
  const GALGAS_dictDeclarationAST temp_28 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_28.readProperty_mDictTypeName (), var_getterMap_6815, var_setterMap_6844, var_instanceMethodMap_6892, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 302)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_12404 ;
  {
  const GALGAS_dictDeclarationAST temp_29 = object ;
  const GALGAS_dictDeclarationAST temp_30 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_29.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 316)), temp_30.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 316)), var_elementTypeEntry_12404 COMMA_SOURCE_FILE ("type-dict.galgas", 314)) ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_12457 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 320)) ;
  {
  var_optionalMethodMap_12457.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 321)), var_optionalMethodSignature_8320, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 321)) ;
  }
  {
  const GALGAS_dictDeclarationAST temp_31 = object ;
  const GALGAS_dictDeclarationAST temp_32 = object ;
  const GALGAS_dictDeclarationAST temp_33 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_31.readProperty_mDictTypeName (), temp_32.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-dict.galgas", 327)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 328)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 330)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 331)), var_typedPropertyList_7632, var_constructorMap_6724, var_getterMap_6815, var_setterMap_6844, var_instanceMethodMap_6892, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 337)), var_optionalMethodMap_12457, var_enumerationDescriptor_6278, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 340)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 340)) COMMA_SOURCE_FILE ("type-dict.galgas", 340)), var_argumentTypeListForAddAssignWithFieldExpressionList_7714, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 342)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 343)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 344)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 345)), GALGAS_bool (false), var_elementTypeEntry_12404, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (temp_33.readProperty_mDictTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 349)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 350)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 323)) ;
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
  cEnumerator_stringlist enumerator_13854 (inArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 359)), kENUMERATION_UP) ;
  while (enumerator_13854.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_13891 = enumerator_13854.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 360)) ;
    {
    GALGAS_string joker_13978 ; // Joker input parameter
    var_explodedArray_13891.setter_popFirst (joker_13978, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    }
    cEnumerator_stringlist enumerator_13996 (var_explodedArray_13891, kENUMERATION_UP) ;
    while (enumerator_13996.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_13996.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 363)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14071 = enumerator_13996.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 364)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14071.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.readProperty_location (), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 366)) ;
            }
          }
        }
      }
      enumerator_13996.gotoNextObject () ;
    }
    enumerator_13854.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_14560 (inArgument_inString.readProperty_string ().getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 376)), kENUMERATION_UP) ;
  while (enumerator_14560.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_14597 = enumerator_14560.current (HERE).readProperty_mValue ().getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
    {
    GALGAS_string joker_14684 ; // Joker input parameter
    var_explodedArray_14597.setter_popFirst (joker_14684, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 378)) ;
    }
    cEnumerator_stringlist enumerator_14702 (var_explodedArray_14597, kENUMERATION_UP) ;
    while (enumerator_14702.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_14702.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 380)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_14777 = enumerator_14702.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 381)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_14777.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_14777.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 382)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.readProperty_location (), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 383)) ;
            }
          }
        }
      }
      enumerator_14702.gotoNextObject () ;
    }
    enumerator_14560.gotoNextObject () ;
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
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 393)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 394)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 395)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 396)) ;
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
  GALGAS_lstring var_nameForUsefulness_15790 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mDictTypeName (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 410)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15790, var_nameForUsefulness_15790, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 411)) ;
  }
  const GALGAS_dictDeclarationAST temp_1 = object ;
  const GALGAS_dictDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_15954 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mDictTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 412)), temp_2.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 412)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 412)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15790, var_elementTypeNameForUsefulness_15954 COMMA_SOURCE_FILE ("type-dict.galgas", 413)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16210 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 415)) ;
  GALGAS_propertyIndexMap var_attributeMap_16252 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 416)) ;
  const GALGAS_dictDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_16302 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_16302.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_16366 = function_typeNameForUsefulEntitiesGraph (enumerator_16302.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 418)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15790, var_propertyTypeNameForUsefulness_16366 COMMA_SOURCE_FILE ("type-dict.galgas", 419)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_16540 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_16302.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 420)) ;
    GALGAS_bool var_hasSetter_16619 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_16646 = GALGAS_bool (false) ;
    var_typedAttributeList_16210.addAssign_operation (var_t_16540, enumerator_16302.current_mPropertyName (HERE), var_hasSetter_16619, var_hasSelector_16646  COMMA_SOURCE_FILE ("type-dict.galgas", 423)) ;
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 428)).getter_hasKey (enumerator_16302.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-dict.galgas", 428)).boolEnum () ;
      if (kBoolTrue == test_4) {
        GALGAS_string var_m_16839 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_16916 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 430)), kENUMERATION_UP) ;
        while (enumerator_16916.hasCurrentObject ()) {
          var_m_16839.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_16916.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 431)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 431)) ;
          enumerator_16916.gotoNextObject () ;
        }
        var_m_16839.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 433)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_16302.current_mPropertyName (HERE).readProperty_location (), var_m_16839, fixItArray5  COMMA_SOURCE_FILE ("type-dict.galgas", 434)) ;
      }
    }
    {
    var_attributeMap_16252.setter_insertKey (enumerator_16302.current_mPropertyName (HERE), var_t_16540, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 436)) ;
    }
    enumerator_16302.gotoNextObject () ;
  }
  const GALGAS_dictDeclarationAST temp_6 = object ;
  const GALGAS_dictDeclarationAST temp_7 = object ;
  const GALGAS_dictDeclarationAST temp_8 = object ;
  const GALGAS_dictDeclarationAST temp_9 = object ;
  const GALGAS_dictDeclarationAST temp_10 = object ;
  const GALGAS_dictDeclarationAST temp_11 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (temp_6.readProperty_mDictTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 440)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_7.readProperty_mDictTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 442)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_8.readProperty_mDictTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 443)), temp_9.readProperty_mDictTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-dict.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 443)), temp_10.readProperty_mDictTypeName (), var_typedAttributeList_16210, temp_11.readProperty_mKeyTypeName ()  COMMA_SOURCE_FILE ("type-dict.galgas", 441))  COMMA_SOURCE_FILE ("type-dict.galgas", 439)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 468)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 469)), temp_2.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-dict.galgas", 467))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_3.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 473)), temp_4.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 474)), temp_5.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 475)), temp_6.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 476)), temp_7.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 477)), temp_8.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 478)), temp_9.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 479)), temp_10.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 480)), temp_11.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 481)), temp_12.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 482)), temp_13.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 483)), temp_14.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 484)), temp_15.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 485)) COMMA_SOURCE_FILE ("type-dict.galgas", 472))), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 472)) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 495)) ;
  const GALGAS_dictTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 496)) ;
  const GALGAS_dictTypeForGeneration temp_2 = object ;
  const GALGAS_dictTypeForGeneration temp_3 = object ;
  const GALGAS_dictTypeForGeneration temp_4 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_dictTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 498)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mKeyTypeName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("type-dict.galgas", 500)) COMMA_SOURCE_FILE ("type-dict.galgas", 497))) ;
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
  GALGAS_string result_result ; // Returned variable
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("map @").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 49)) ;
//---
  return result_result ;
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
  GALGAS_propertyInCollectionListAST var_structAttributeList_10657 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 312)) ;
  var_structAttributeList_10657.addAssign_operation (GALGAS_bool (false), GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 315)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 316)), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 318))  COMMA_SOURCE_FILE ("type-map.galgas", 313)) ;
  const GALGAS_mapDeclarationAST temp_0 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_10848 (temp_0.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_10848.hasCurrentObject ()) {
    var_structAttributeList_10657.addAssign_operation (GALGAS_bool (false), enumerator_10848.current_mPropertyTypeName (HERE), enumerator_10848.current_mPropertyName (HERE), GALGAS_bool (true), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 325))  COMMA_SOURCE_FILE ("type-map.galgas", 320)) ;
    enumerator_10848.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (temp_1.readProperty_mIsPredefined (), GALGAS_lstring::constructor_new (temp_2.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 329)), temp_3.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 329)), var_structAttributeList_10657, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 327))  COMMA_SOURCE_FILE ("type-map.galgas", 327)) ;
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
  GALGAS_lstring var_key_11984 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (temp_0.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 345)), temp_1.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 345)) ;
  {
  const GALGAS_mapDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_11984, temp_2, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 346)) ;
  }
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_12142 (temp_3.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_12142.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12142.current_mPropertyTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 348)), enumerator_12142.current_mPropertyTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 348)) COMMA_SOURCE_FILE ("type-map.galgas", 348)) ;
    }
    enumerator_12142.gotoNextObject () ;
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
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_13060 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13060 COMMA_SOURCE_FILE ("type-map.galgas", 363)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_locationTypeEntry_13195 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeEntry_13195 COMMA_SOURCE_FILE ("type-map.galgas", 365)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_lstringTypeIndex_13327 ;
  {
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntryFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13327 COMMA_SOURCE_FILE ("type-map.galgas", 367)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 369)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13327, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 369)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_13412 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_13495 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_13528 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_13544 (temp_1.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_13544.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_13544.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_usesSelectorsInInsertAndSearch_13495.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_13544.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-map.galgas", 376)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_13495 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_13544.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_activateSuggestion_13528.operator_not (SOURCE_FILE ("type-map.galgas", 380)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <C_FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (enumerator_13544.current_mValue (HERE).readProperty_location (), GALGAS_string ("duplicated attribute"), fixItArray7  COMMA_SOURCE_FILE ("type-map.galgas", 381)) ;
            }
          }
          var_activateSuggestion_13528 = GALGAS_bool (false) ;
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_13544.current_mValue (HERE).readProperty_location (), GALGAS_string ("unknown attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 385)) ;
      }
    }
    enumerator_13544.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14011 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 389)) ;
  GALGAS_getterMap var_getterMap_14102 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_14102, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 390)) ;
  }
  GALGAS_setterMap var_setterMap_14130 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 391)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14178 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 392)) ;
  {
  const GALGAS_mapDeclarationAST temp_9 = object ;
  routine_enterConstructorWithoutArgument (var_constructorMap_14011, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), temp_9.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 394)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_10 = object ;
  const GALGAS_mapDeclarationAST temp_11 = object ;
  routine_enterConstructorWithArgument (var_constructorMap_14011, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), temp_10.readProperty_mMapTypeName ().readProperty_string (), GALGAS_string ("inMap"), temp_11.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 401)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 411)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 418)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 429)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 443)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 452)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_12 = object ;
  routine_enterBaseGetterWithoutArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), temp_12.readProperty_mMapTypeName ().readProperty_string (), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 461)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14102, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 468)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16330 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 476)) ;
  GALGAS_typedPropertyList var_typedPropertyList_16385 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 477)) ;
  GALGAS_optionalMethodSignature var_optionalMethodSignature_16464 = GALGAS_optionalMethodSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 478)) ;
  GALGAS_string temp_13 ;
  const enumGalgasBool test_14 = var_usesSelectorsInInsertAndSearch_13495.boolEnum () ;
  if (kBoolTrue == test_14) {
    temp_13 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_14) {
    temp_13 = GALGAS_string::makeEmptyString () ;
  }
  var_optionalMethodSignature_16464.addAssign_operation (GALGAS_bool (true), temp_13.getter_nowhere (SOURCE_FILE ("type-map.galgas", 481)), var_stringTypeIndex_13060, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 479)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_16691 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 484)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_16691.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 485)), var_lstringTypeIndex_13327, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 485)) ;
  GALGAS_string temp_15 ;
  const enumGalgasBool test_16 = var_usesSelectorsInInsertAndSearch_13495.boolEnum () ;
  if (kBoolTrue == test_16) {
    temp_15 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_16) {
    temp_15 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16330.addAssign_operation (temp_15.getter_nowhere (SOURCE_FILE ("type-map.galgas", 487)), var_lstringTypeIndex_13327, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 489)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 486)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_17055 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 491)) ;
  GALGAS_string temp_17 ;
  const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_13495.boolEnum () ;
  if (kBoolTrue == test_18) {
    temp_17 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_18) {
    temp_17 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_17055.addAssign_operation (temp_17.getter_nowhere (SOURCE_FILE ("type-map.galgas", 493)), var_lstringTypeIndex_13327, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 495)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 492)) ;
  GALGAS_unifiedTypeMapEntryList var_typesToIncludeInHeaderCompilation_17324 = GALGAS_unifiedTypeMapEntryList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 497)) ;
  const GALGAS_mapDeclarationAST temp_19 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_17387 (temp_19.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_17387.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_17522 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17387.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17522 COMMA_SOURCE_FILE ("type-map.galgas", 499)) ;
    }
    GALGAS_bool var_hasSetter_17541 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_17568 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_17595 (enumerator_17387.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_17595.hasCurrentObject ()) {
      enumGalgasBool test_20 = kBoolTrue ;
      if (kBoolTrue == test_20) {
        test_20 = GALGAS_bool (kIsEqual, enumerator_17595.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_20) {
          var_hasSelector_17568 = GALGAS_bool (true) ;
          enumGalgasBool test_21 = kBoolTrue ;
          if (kBoolTrue == test_21) {
            GALGAS_bool test_22 = var_hasSelector_17568 ;
            if (kBoolTrue == test_22.boolEnum ()) {
              test_22 = var_usesSelectorsInInsertAndSearch_13495 ;
            }
            test_21 = test_22.boolEnum () ;
            if (kBoolTrue == test_21) {
              TC_Array <C_FixItDescription> fixItArray23 ;
              inCompiler->emitSemanticWarning (enumerator_17595.current_mValue (HERE).readProperty_location (), GALGAS_string ("%selector useless, map has %selectors attributes"), fixItArray23  COMMA_SOURCE_FILE ("type-map.galgas", 506)) ;
            }
          }
        }
      }
      enumerator_17595.gotoNextObject () ;
    }
    var_argumentTypeListForAddAssignWithFieldExpressionList_16691.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 510)), var_attributeTypeIndex_17522, enumerator_17387.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 510)) ;
    var_typedPropertyList_16385.addAssign_operation (var_attributeTypeIndex_17522, enumerator_17387.current_mPropertyName (HERE), var_hasSetter_17541, var_hasSelector_17568  COMMA_SOURCE_FILE ("type-map.galgas", 511)) ;
    var_typesToIncludeInHeaderCompilation_17324.addAssign_operation (var_attributeTypeIndex_17522  COMMA_SOURCE_FILE ("type-map.galgas", 512)) ;
    var_enumerationDescriptor_13412.addAssign_operation (var_attributeTypeIndex_17522, enumerator_17387.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 513)) ;
    GALGAS_bool test_24 = var_usesSelectorsInInsertAndSearch_13495 ;
    if (kBoolTrue != test_24.boolEnum ()) {
      test_24 = var_hasSelector_17568 ;
    }
    GALGAS_lstring temp_25 ;
    const enumGalgasBool test_26 = test_24.boolEnum () ;
    if (kBoolTrue == test_26) {
      temp_25 = enumerator_17387.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_26) {
      temp_25 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 515)) ;
    }
    var_insertMethodFormalArgumentList_16330.addAssign_operation (temp_25, var_attributeTypeIndex_17522, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 517)), enumerator_17387.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 514)) ;
    GALGAS_bool test_27 = var_usesSelectorsInInsertAndSearch_13495 ;
    if (kBoolTrue != test_27.boolEnum ()) {
      test_27 = var_hasSelector_17568 ;
    }
    GALGAS_lstring temp_28 ;
    const enumGalgasBool test_29 = test_27.boolEnum () ;
    if (kBoolTrue == test_29) {
      temp_28 = enumerator_17387.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_29) {
      temp_28 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 520)) ;
    }
    var_removeMethodFormalArgumentList_17055.addAssign_operation (temp_28, var_attributeTypeIndex_17522, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 522)), enumerator_17387.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 519)) ;
    GALGAS_bool test_30 = var_usesSelectorsInInsertAndSearch_13495 ;
    if (kBoolTrue != test_30.boolEnum ()) {
      test_30 = var_hasSelector_17568 ;
    }
    GALGAS_lstring temp_31 ;
    const enumGalgasBool test_32 = test_30.boolEnum () ;
    if (kBoolTrue == test_32) {
      temp_31 = enumerator_17387.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_32) {
      temp_31 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 526)) ;
    }
    var_optionalMethodSignature_16464.addAssign_operation (GALGAS_bool (false), temp_31, var_attributeTypeIndex_17522, enumerator_17387.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 524)) ;
    enumerator_17387.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_33 = object ;
  cEnumerator_insertMethodListAST enumerator_18877 (temp_33.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_18877.hasCurrentObject ()) {
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_setterMap_14130.getter_hasKey (enumerator_18877.current_mInsertMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 532)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <C_FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_18877.current_mInsertMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_18877.current_mInsertMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 533)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 533)), fixItArray35  COMMA_SOURCE_FILE ("type-map.galgas", 533)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_setterMap_14130.setter_insertOrReplace (enumerator_18877.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 537)), var_insertMethodFormalArgumentList_16330, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 540)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 535)) ;
      }
    }
    enumerator_18877.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_36 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_19340 (temp_36.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_19340.hasCurrentObject ()) {
    enumGalgasBool test_37 = kBoolTrue ;
    if (kBoolTrue == test_37) {
      test_37 = var_setterMap_14130.getter_hasKey (enumerator_19340.current_mMethodName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 547)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_19340.current_mMethodName (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_19340.current_mMethodName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 548)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 548)), fixItArray38  COMMA_SOURCE_FILE ("type-map.galgas", 548)) ;
      }
    }
    if (kBoolFalse == test_37) {
      {
      var_setterMap_14130.setter_insertOrReplace (enumerator_19340.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 552)), var_removeMethodFormalArgumentList_17055, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 555)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 550)) ;
      }
    }
    enumerator_19340.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_39 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_19879 (temp_39.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_19879.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_19948 = var_removeMethodFormalArgumentList_17055 ;
    enumGalgasBool test_40 = kBoolTrue ;
    if (kBoolTrue == test_40) {
      test_40 = enumerator_19879.current_mLocationAttribute (HERE).boolEnum () ;
      if (kBoolTrue == test_40) {
        GALGAS_lstring temp_41 ;
        const enumGalgasBool test_42 = var_usesSelectorsInInsertAndSearch_13495.boolEnum () ;
        if (kBoolTrue == test_42) {
          temp_41 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 565)) ;
        }else if (kBoolFalse == test_42) {
          temp_41 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 565)) ;
        }
        var_searchMethodFormalArgumentList_19948.addAssign_operation (temp_41, var_locationTypeEntry_13195, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 567)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 564)) ;
      }
    }
    {
    var_instanceMethodMap_14178.setter_insertKey (enumerator_19879.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 572)), var_searchMethodFormalArgumentList_19948, enumerator_19879.current_mSearchMethodName (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 576)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("type-map.galgas", 577)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 570)) ;
    }
    enumerator_19879.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_43 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_20586 (temp_43.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_20586.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_20633 = GALGAS_lstring::constructor_new (enumerator_20586.current_mPropertyName (HERE).readProperty_string ().add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 583)), enumerator_20586.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 583)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_20816 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_20586.current_mPropertyTypeName (HERE), var_attributeTypeIndex_20816 COMMA_SOURCE_FILE ("type-map.galgas", 584)) ;
    }
    {
    GALGAS_functionSignature temp_44 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 588)) ;
    temp_44.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 588)), var_stringTypeIndex_13060, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 588)) ;
    var_getterMap_14102.setter_insertOrReplace (var_accessorName_20633, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 587)), temp_44, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 589)), GALGAS_bool (true), var_attributeTypeIndex_20816, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 592)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
    }
    enumerator_20586.gotoNextObject () ;
  }
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    const GALGAS_mapDeclarationAST temp_46 = object ;
    test_45 = GALGAS_bool (kIsSupOrEqual, temp_46.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 597)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
    if (kBoolTrue == test_45) {
      GALGAS_location var_insertOrReplaceLocation_21256 ;
      const GALGAS_mapDeclarationAST temp_47 = object ;
      temp_47.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceLocation_21256, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 599)) ;
      {
      var_setterMap_14130.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_21256  COMMA_SOURCE_FILE ("type-map.galgas", 601)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 602)), var_insertMethodFormalArgumentList_16330, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 605)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 600)) ;
      }
    }
  }
  const GALGAS_mapDeclarationAST temp_48 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_21710 (temp_48.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_21710.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21757 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_21710.current_mPropertyName (HERE).readProperty_string ().getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 612)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 612)), enumerator_21710.current_mPropertyName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 611)) ;
    GALGAS_unifiedTypeMap_2D_entry var_attributeTypeIndex_22043 ;
    {
    GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_21710.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22043 COMMA_SOURCE_FILE ("type-map.galgas", 615)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_22110 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 620)) ;
    var_accessorFormalArgumentList_22110.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 621)), var_attributeTypeIndex_22043, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 621)), enumerator_21710.current_mPropertyName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("type-map.galgas", 621)) ;
    var_accessorFormalArgumentList_22110.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 622)), var_stringTypeIndex_13060, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 622)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 622)) ;
    {
    var_setterMap_14130.setter_insertOrReplace (var_accessorName_21757, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 625)), var_accessorFormalArgumentList_22110, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 628)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 623)) ;
    }
    enumerator_21710.gotoNextObject () ;
  }
  GALGAS_optionalMethodMap var_optionalMethodMap_22575 = GALGAS_optionalMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 633)) ;
  {
  var_optionalMethodMap_22575.setter_insertKey (GALGAS_string ("searchKey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 634)), var_optionalMethodSignature_16464, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 634)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_49 = object ;
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, temp_49.readProperty_mMapTypeName (), var_getterMap_14102, var_setterMap_14130, var_instanceMethodMap_14178, GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 636)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_elementTypeEntry_23224 ;
  {
  const GALGAS_mapDeclarationAST temp_50 = object ;
  const GALGAS_mapDeclarationAST temp_51 = object ;
  GALGAS_unifiedTypeMap_2D_entry::class_method_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (temp_50.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 650)), temp_51.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 650)), var_elementTypeEntry_23224 COMMA_SOURCE_FILE ("type-map.galgas", 648)) ;
  }
  {
  const GALGAS_mapDeclarationAST temp_52 = object ;
  const GALGAS_mapDeclarationAST temp_53 = object ;
  const GALGAS_mapDeclarationAST temp_54 = object ;
  const GALGAS_mapDeclarationAST temp_55 = object ;
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (temp_52.readProperty_mMapTypeName (), temp_53.readProperty_mIsPredefined (), GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("type-map.galgas", 658)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 659)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 661)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 662)), var_typedPropertyList_16385, var_constructorMap_14011, var_getterMap_14102, var_setterMap_14130, var_instanceMethodMap_14178, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 668)), var_optionalMethodMap_22575, var_enumerationDescriptor_13412, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 671)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 671)) COMMA_SOURCE_FILE ("type-map.galgas", 671)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 671)) COMMA_SOURCE_FILE ("type-map.galgas", 671)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-map.galgas", 671)) COMMA_SOURCE_FILE ("type-map.galgas", 671)), var_argumentTypeListForAddAssignWithFieldExpressionList_16691, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 673)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 674)), temp_54.readProperty_mSearchMethodList (), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 676)), GALGAS_bool (false), var_elementTypeEntry_23224, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (temp_55.readProperty_mMapTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 680)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 681)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 654)) ;
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
  GALGAS_lstring var_nameForUsefulness_25221 = function_typeNameForUsefulEntitiesGraph (temp_0.readProperty_mMapTypeName (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 710)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_25221, var_nameForUsefulness_25221, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 711)) ;
  }
  const GALGAS_mapDeclarationAST temp_1 = object ;
  const GALGAS_mapDeclarationAST temp_2 = object ;
  GALGAS_lstring var_elementTypeNameForUsefulness_25384 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (temp_1.readProperty_mMapTypeName ().readProperty_string ().add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 712)), temp_2.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 712)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_25221, var_elementTypeNameForUsefulness_25384 COMMA_SOURCE_FILE ("type-map.galgas", 713)) ;
  }
  GALGAS_bool var_usesSelectorsInInsertAndSearch_25622 = GALGAS_bool (false) ;
  GALGAS_bool var_activateSuggestion_25655 = GALGAS_bool (true) ;
  const GALGAS_mapDeclarationAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_25671 (temp_3.readProperty_mAttributeList (), kENUMERATION_UP) ;
  while (enumerator_25671.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (kIsEqual, enumerator_25671.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_usesSelectorsInInsertAndSearch_25622 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (kIsEqual, enumerator_25671.current_mValue (HERE).readProperty_string ().objectCompare (GALGAS_string ("noSuggestion"))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_activateSuggestion_25655 = GALGAS_bool (false) ;
        }
      }
    }
    enumerator_25671.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_25934 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 725)) ;
  GALGAS_propertyIndexMap var_attributeMap_25976 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 726)) ;
  const GALGAS_mapDeclarationAST temp_6 = object ;
  cEnumerator_propertyInCollectionListAST enumerator_26026 (temp_6.readProperty_mPropertyList (), kENUMERATION_UP) ;
  while (enumerator_26026.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_26090 = function_typeNameForUsefulEntitiesGraph (enumerator_26026.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 728)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_25221, var_propertyTypeNameForUsefulness_26090 COMMA_SOURCE_FILE ("type-map.galgas", 729)) ;
    }
    GALGAS_unifiedTypeMap_2D_entry var_t_26264 = GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_26026.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 730)) ;
    GALGAS_bool var_hasSetter_26343 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_26370 = GALGAS_bool (false) ;
    var_typedAttributeList_25934.addAssign_operation (var_t_26264, enumerator_26026.current_mPropertyName (HERE), var_hasSetter_26343, var_hasSelector_26370  COMMA_SOURCE_FILE ("type-map.galgas", 733)) ;
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 738)).getter_hasKey (enumerator_26026.current_mPropertyName (HERE).readProperty_string () COMMA_SOURCE_FILE ("type-map.galgas", 738)).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_string var_m_26563 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_26640 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 740)), kENUMERATION_UP) ;
        while (enumerator_26640.hasCurrentObject ()) {
          var_m_26563.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_26640.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 741)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 741)) ;
          enumerator_26640.gotoNextObject () ;
        }
        var_m_26563.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 743)) ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_26026.current_mPropertyName (HERE).readProperty_location (), var_m_26563, fixItArray8  COMMA_SOURCE_FILE ("type-map.galgas", 744)) ;
      }
    }
    {
    var_attributeMap_25976.setter_insertKey (enumerator_26026.current_mPropertyName (HERE), var_t_26264, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 746)) ;
    }
    enumerator_26026.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_26871 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 749)) ;
  const GALGAS_mapDeclarationAST temp_9 = object ;
  cEnumerator_insertMethodListAST enumerator_26937 (temp_9.readProperty_mInsertMethodList (), kENUMERATION_UP) ;
  while (enumerator_26937.hasCurrentObject ()) {
    {
    var_insertMethodMap_26871.setter_insertKey (enumerator_26937.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 751)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26937.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 752)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_26937.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 753)) ;
    }
    enumerator_26937.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_27197 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 756)) ;
  const GALGAS_mapDeclarationAST temp_10 = object ;
  cEnumerator_mapSearchMethodListAST enumerator_27245 (temp_10.readProperty_mSearchMethodList (), kENUMERATION_UP) ;
  while (enumerator_27245.hasCurrentObject ()) {
    {
    var_searchMethodMap_27197.setter_insertKey (enumerator_27245.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 758)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_27245.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 759)) ;
    }
    enumerator_27245.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_11 = object ;
  cEnumerator_mapRemoveMethodListAST enumerator_27441 (temp_11.readProperty_mRemoveMethodList (), kENUMERATION_UP) ;
  while (enumerator_27441.hasCurrentObject ()) {
    {
    var_insertMethodMap_26871.setter_insertKey (enumerator_27441.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 763)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_27441.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 764)) ;
    }
    enumerator_27441.gotoNextObject () ;
  }
  const GALGAS_mapDeclarationAST temp_12 = object ;
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_27681 (temp_12.readProperty_mInsertOrReplaceDeclarationListAST (), kENUMERATION_UP) ;
  GALGAS_uint index_27644 ((uint32_t) 0) ;
  while (enumerator_27681.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (kIsStrictSup, index_27644.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticWarning (enumerator_27681.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray14  COMMA_SOURCE_FILE ("type-map.galgas", 769)) ;
      }
    }
    enumerator_27681.gotoNextObject () ;
    index_27644.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 767)) ;
  }
  const GALGAS_mapDeclarationAST temp_15 = object ;
  GALGAS_bool var_hasInsertOrReplaceModifier_27908 = GALGAS_bool (kIsStrictSup, temp_15.readProperty_mInsertOrReplaceDeclarationListAST ().getter_length (SOURCE_FILE ("type-map.galgas", 772)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = var_hasInsertOrReplaceModifier_27908.operator_and (var_insertMethodMap_26871.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 773)) COMMA_SOURCE_FILE ("type-map.galgas", 773)).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_location var_insertOrReplaceDeclarationLocation_28099 ;
      const GALGAS_mapDeclarationAST temp_17 = object ;
      temp_17.readProperty_mInsertOrReplaceDeclarationListAST ().method_first (var_insertOrReplaceDeclarationLocation_28099, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 775)) ;
      TC_Array <C_FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_28099, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray18  COMMA_SOURCE_FILE ("type-map.galgas", 776)) ;
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
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (temp_19.readProperty_mMapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 780)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_20.readProperty_mMapTypeName (), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 782)), GALGAS_unifiedTypeMap_2D_entry::constructor_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), GALGAS_lstring::constructor_new (temp_21.readProperty_mMapTypeName ().readProperty_string ().add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 783)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 783)), temp_22.readProperty_mMapTypeName ().readProperty_location ()  COMMA_SOURCE_FILE ("type-map.galgas", 783)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 783)), temp_23.readProperty_mMapTypeName (), var_typedAttributeList_25934, temp_24.readProperty_mInsertMethodList (), temp_25.readProperty_mSearchMethodList (), temp_26.readProperty_mRemoveMethodList (), var_hasInsertOrReplaceModifier_27908, var_activateSuggestion_25655  COMMA_SOURCE_FILE ("type-map.galgas", 781))  COMMA_SOURCE_FILE ("type-map.galgas", 779)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, temp_0.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 816)), temp_1.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 817)), temp_2.readProperty_mTypedAttributeList (), temp_3.readProperty_mSearchMethodList () COMMA_SOURCE_FILE ("type-map.galgas", 815))) ;
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
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, temp_4.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 822)), temp_5.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 823)), temp_6.readProperty_mSelfTypeEntry ().getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 824)), temp_7.readProperty_mSelfTypeEntry ().getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 825)), temp_8.readProperty_mSelfTypeEntry ().getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 826)), temp_9.readProperty_mSelfTypeEntry ().getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 827)), temp_10.readProperty_mSelfTypeEntry ().getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 828)), temp_11.readProperty_mSelfTypeEntry ().getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 829)), temp_12.readProperty_mSelfTypeEntry ().getter_mOptionalMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 830)), temp_13.readProperty_mSelfTypeEntry ().getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 831)), temp_14.readProperty_mSelfTypeEntry ().getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 832)), temp_15.readProperty_mSelfTypeEntry ().getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 833)), temp_16.readProperty_mSelfTypeEntry ().getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 834)) COMMA_SOURCE_FILE ("type-map.galgas", 821))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 821)) ;
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
  cEnumerator_typedPropertyList enumerator_31117 (temp_0.readProperty_mTypedAttributeList (), kENUMERATION_UP) ;
  while (enumerator_31117.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_31117.current_mPropertyTypeEntry (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 845)) ;
    enumerator_31117.gotoNextObject () ;
  }
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, temp_1.readProperty_mSelfTypeEntry ().getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 849)), temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 850)), temp_3.readProperty_mTypedAttributeList () COMMA_SOURCE_FILE ("type-map.galgas", 848))) ;
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
  extensionMethod_addHeaderFileName (temp_0.readProperty_mElementTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 861)) ;
  const GALGAS_mapTypeForGeneration temp_1 = object ;
  extensionMethod_addHeaderFileName (temp_1.readProperty_mSelfTypeEntry (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 862)) ;
  const GALGAS_mapTypeForGeneration temp_2 = object ;
  const GALGAS_mapTypeForGeneration temp_3 = object ;
  const GALGAS_mapTypeForGeneration temp_4 = object ;
  const GALGAS_mapTypeForGeneration temp_5 = object ;
  const GALGAS_mapTypeForGeneration temp_6 = object ;
  const GALGAS_mapTypeForGeneration temp_7 = object ;
  const GALGAS_mapTypeForGeneration temp_8 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, temp_2.readProperty_mSelfTypeEntry ().getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 864)), temp_3.readProperty_mTypedAttributeList (), temp_4.readProperty_mInsertMethodList (), temp_5.readProperty_mSearchMethodList (), temp_6.readProperty_mRemoveMethodList (), temp_7.readProperty_mHasInsertOrReplaceModifier (), temp_8.readProperty_mActivateSuggestions () COMMA_SOURCE_FILE ("type-map.galgas", 863))) ;
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

