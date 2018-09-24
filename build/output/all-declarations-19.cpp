#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-19.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                                extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@optionComponentDeclarationAST enterInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
              inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 134)), GALGAS_string ("an @bool option cannot have a default value (default value is allways false)"), fixItArray4  COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               extensionMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_8063 = function_optionNameForUsefulEntitiesGraph (object->mProperty_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 198)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8063, var_nameForUsefulness_8063, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 199)) ;
  }
  GALGAS_bool var_isPredefined_8325 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_8370 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_8415 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_8462 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_8513 ;
  constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mOptionComponentName, var_isPredefined_8325, var_boolOptionMap_8370, var_uintOptionMap_8415, var_stringOptionMap_8462, var_stringListOptionMap_8513, inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 201)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("option ").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("optionCompilation.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 211)), GALGAS_optionComponentForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 214)), var_isPredefined_8325, object->mProperty_mOptionComponentName.getter_string (HERE), var_boolOptionMap_8370, var_uintOptionMap_8415, var_stringOptionMap_8462, var_stringListOptionMap_8513  COMMA_SOURCE_FILE ("optionCompilation.galgas", 212))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 210)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension getter '@optionComponentForGeneration isPredefined'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_optionComponentForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                     extensionGetter_optionComponentForGeneration_isPredefined) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_optionComponentForGeneration_isPredefined (defineExtensionGetter_optionComponentForGeneration_isPredefined, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@optionComponentForGeneration headerKind'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_optionComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                   extensionGetter_optionComponentForGeneration_headerKind) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_optionComponentForGeneration_headerKind (defineExtensionGetter_optionComponentForGeneration_headerKind, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@optionComponentForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                              extensionMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                     extensionMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@optionComponentForGeneration appendSpecificFiles'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                            extensionMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'optionGenerationTemplates'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone3'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_635_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_635 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_635.hasCurrentObject ()) {
      result << "extern C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << "_" ;
      result << enumerator_635.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 9)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_635_.increment () ;
      enumerator_635.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_1412_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1412 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1412.hasCurrentObject ()) {
      result << "extern C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << "_" ;
      result << enumerator_1412.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 18)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_1412_.increment () ;
      enumerator_1412.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_2191_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2191 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2191.hasCurrentObject ()) {
      result << "extern C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << "_" ;
      result << enumerator_2191.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 27)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_2191_.increment () ;
      enumerator_2191.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_2977_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2977 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2977.hasCurrentObject ()) {
      result << "extern C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << "_" ;
      result << enumerator_2977.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-header-zone3.galgasTemplate", 36)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_2977_.increment () ;
      enumerator_2977.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_634_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_634 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_634.hasCurrentObject ()) {
      result << "C_BoolCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << "_" ;
      result << enumerator_634.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 8)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_634.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 9)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 10)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 11)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_634.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 12)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_634_.increment () ;
      enumerator_634.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_1756_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1756 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1756.hasCurrentObject ()) {
      result << "C_UIntCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << "_" ;
      result << enumerator_1756.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 21)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_1756.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 22)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 23)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 24)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 25)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_1756.current_mDefaultValue (HERE).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_1756_.increment () ;
      enumerator_1756.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_2945_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2945 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2945.hasCurrentObject ()) {
      result << "C_StringCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << "_" ;
      result << enumerator_2945.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 35)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_2945.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 36)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 37)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 38)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 39)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_2945.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 40)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_2945_.increment () ;
      enumerator_2945.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_4162_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_4162 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_4162.hasCurrentObject ()) {
      result << "C_StringListCommandLineOption gOption_" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << "_" ;
      result << enumerator_4162.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 49)).stringValue () ;
      result << " (\"" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.stringValue () ;
      result << "\",\n"
        "                                         " ;
      result << enumerator_4162.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 50)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).getter_string (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 51)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 52)).stringValue () ;
      result << ",\n"
        "                                         " ;
      result << enumerator_4162.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-galgas3.cpp.galgasTemplate", 53)).stringValue () ;
      result << ") ;\n"
        "\n" ;
      index_4162_.increment () ;
      enumerator_4162.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "#import \"" ;
  result << in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                   Routine 'compileAllGuiComponentFromASTGalgas3'                                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 241)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_7937 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_7937.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_7937.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 243)) ;
    }
    enumerator_7937.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Routine 'guiComponentSemanticAnalysis'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
      inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 259)), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 259)) ;
    }
  }
  GALGAS_guiAnalysisContext var_context_8599 = GALGAS_guiAnalysisContext::constructor_default (SOURCE_FILE ("guiCompilation.galgas", 262)) ;
  cEnumerator_lstringlist enumerator_8699 (constinArgument_inGUIComponentAST.getter_mImportedOptionList (HERE), kENUMERATION_UP) ;
  while (enumerator_8699.hasCurrentObject ()) {
    GALGAS_bool joker_8796_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8796_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8796_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8796_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_8796_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_8699.current_mValue (HERE), joker_8796_5, joker_8796_4, joker_8796_3, joker_8796_2, joker_8796_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 265)) ;
    var_context_8599.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_8699.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 269)) ;
    enumerator_8699.gotoNextObject () ;
  }
  GALGAS_bool var_runOptionDefined_8918 = GALGAS_bool (false) ;
  cEnumerator_guiSimpleAttributeListAST enumerator_8983 (constinArgument_inGUIComponentAST.getter_mGlobalSimpleAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_8983.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (kIsEqual, enumerator_8983.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("run"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = var_runOptionDefined_8918.boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_8983.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 276)), GALGAS_string ("option already defined"), fixItArray4  COMMA_SOURCE_FILE ("guiCompilation.galgas", 276)) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (kIsEqual, enumerator_8983.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              TC_Array <C_FixItDescription> fixItArray6 ;
              inCompiler->emitSemanticError (enumerator_8983.current_mValue (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 278)), GALGAS_string ("run option string should not be empty"), fixItArray6  COMMA_SOURCE_FILE ("guiCompilation.galgas", 278)) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_context_8599.mProperty_mBuildRunOption = enumerator_8983.current_mValue (HERE).getter_string (HERE) ;
            var_runOptionDefined_8918 = GALGAS_bool (true) ;
          }
        }
      }
    }
    if (kBoolFalse == test_2) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (kIsEqual, enumerator_8983.current_mKey (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
        if (kBoolTrue == test_7) {
          cEnumerator_stringlist enumerator_9417 (enumerator_8983.current_mValue (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 284)), kENUMERATION_UP) ;
          while (enumerator_9417.hasCurrentObject ()) {
            var_context_8599.mProperty_mNibAndClassList.addAssign_operation (enumerator_9417.current (HERE).getter_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 285)) ;
            enumerator_9417.gotoNextObject () ;
          }
        }
      }
      if (kBoolFalse == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticWarning (enumerator_8983.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 288)), GALGAS_string ("the '").add_operation (enumerator_8983.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 288)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 288)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 288)), fixItArray8  COMMA_SOURCE_FILE ("guiCompilation.galgas", 288)) ;
      }
    }
    enumerator_8983.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_9666 (constinArgument_inGUIComponentAST.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
  while (enumerator_9666.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_9823 ;
    GALGAS_indexingListAST joker_9831_2 ; // Joker input parameter
    GALGAS_lstring joker_9831_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_9666.current_mLexiqueFileName (HERE), var_terminalMap_9823, joker_9831_2, joker_9831_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 294)) ;
    GALGAS_stringset var_terminalSymbolSet_9898 = var_terminalMap_9823.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 300)) ;
    cEnumerator_guiLabelListAST enumerator_9963 (enumerator_9666.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_9963.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_9996 (enumerator_9963.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_9996.hasCurrentObject ()) {
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_terminalSymbolSet_9898.getter_hasKey (enumerator_9996.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 304)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 304)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 304)).boolEnum () ;
          if (kBoolTrue == test_9) {
            TC_Array <C_FixItDescription> fixItArray10 ;
            inCompiler->emitSemanticError (enumerator_9996.current_mTerminal (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 305)), GALGAS_string ("the '$").add_operation (enumerator_9996.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 306)).add_operation (enumerator_9666.current_mLexiqueFileName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 307)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 308)), fixItArray10  COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)) ;
          }
        }
        enumerator_9996.gotoNextObject () ;
      }
      enumerator_9963.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_10333 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 314)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_10372 (enumerator_9666.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10372.hasCurrentObject ()) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (kIsNotEqual, enumerator_10372.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 316)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
        if (kBoolTrue == test_11) {
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (enumerator_10372.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 317)), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray12  COMMA_SOURCE_FILE ("guiCompilation.galgas", 317)) ;
        }
      }
      if (kBoolFalse == test_11) {
        var_textMacroList_10333.addAssign_operation (enumerator_10372.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 319)), enumerator_10372.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 319))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 319)) ;
      }
      enumerator_10372.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_10654 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_10688 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_10722 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_10755 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_10785 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_10822 (enumerator_9666.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10822.hasCurrentObject ()) {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (kIsEqual, enumerator_10822.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 329)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
        if (kBoolTrue == test_13) {
          {
          var_context_8599.mProperty_mExtensionMap.setter_insertKey (enumerator_10822.current_mValue (HERE), enumerator_9666.current_mLexiqueFileName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 330)) ;
          }
          var_hasAssociatedExtension_10654 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_13) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = GALGAS_bool (kIsEqual, enumerator_10822.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 332)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
          if (kBoolTrue == test_14) {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              test_15 = var_hasTabViewTitle_10688.boolEnum () ;
              if (kBoolTrue == test_15) {
                TC_Array <C_FixItDescription> fixItArray16 ;
                inCompiler->emitSemanticError (enumerator_10822.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 334)), GALGAS_string ("the '").add_operation (enumerator_10822.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)), fixItArray16  COMMA_SOURCE_FILE ("guiCompilation.galgas", 334)) ;
              }
            }
            var_hasTabViewTitle_10688 = GALGAS_bool (true) ;
            var_tabViewTitle_10755 = enumerator_10822.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 337)) ;
          }
        }
        if (kBoolFalse == test_14) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = GALGAS_bool (kIsEqual, enumerator_10822.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 338)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
            if (kBoolTrue == test_17) {
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = var_hasBlockComment_10722.boolEnum () ;
                if (kBoolTrue == test_18) {
                  TC_Array <C_FixItDescription> fixItArray19 ;
                  inCompiler->emitSemanticError (enumerator_10822.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 340)), GALGAS_string ("the '").add_operation (enumerator_10822.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 340)) ;
                }
              }
              var_hasBlockComment_10722 = GALGAS_bool (true) ;
              var_blockComment_10785 = enumerator_10822.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 343)) ;
            }
          }
          if (kBoolFalse == test_17) {
            TC_Array <C_FixItDescription> fixItArray20 ;
            inCompiler->emitSemanticError (enumerator_10822.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 345)), GALGAS_string ("the '").add_operation (enumerator_10822.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 345)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 345)), fixItArray20  COMMA_SOURCE_FILE ("guiCompilation.galgas", 345)) ;
          }
        }
      }
      enumerator_10822.gotoNextObject () ;
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = var_hasAssociatedExtension_10654.operator_not (SOURCE_FILE ("guiCompilation.galgas", 349)).boolEnum () ;
      if (kBoolTrue == test_21) {
        TC_Array <C_FixItDescription> fixItArray22 ;
        inCompiler->emitSemanticError (enumerator_9666.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 350)), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray22  COMMA_SOURCE_FILE ("guiCompilation.galgas", 350)) ;
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = var_hasTabViewTitle_10688.operator_not (SOURCE_FILE ("guiCompilation.galgas", 353)).boolEnum () ;
      if (kBoolTrue == test_23) {
        TC_Array <C_FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (enumerator_9666.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 354)), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray24  COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
      }
    }
    var_context_8599.mProperty_mWithLexiqueList.addAssign_operation (enumerator_9666.current_mLexiqueFileName (HERE).getter_string (HERE), var_blockComment_10785, var_tabViewTitle_10755, var_textMacroList_10333, enumerator_9666.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 357)) ;
    enumerator_9666.gotoNextObject () ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE), var_context_8599, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 365)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'generateAllGuiComponentsGalgas3'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_12774 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_12774.hasCurrentObject ()) {
    GALGAS_string var_fileName_12794 = GALGAS_string ("gui-").add_operation (enumerator_12774.current_lkey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 383)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 383)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_12794  COMMA_SOURCE_FILE ("guiCompilation.galgas", 384)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_12794  COMMA_SOURCE_FILE ("guiCompilation.galgas", 385)) ;
    GALGAS_string var_s_12904 = GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_12774.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault, enumerator_12774.current_mGuiComponentContext (HERE).getter_mBuildRunOption (HERE) COMMA_SOURCE_FILE ("guiCompilation.galgas", 386))) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_12794, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_s_12904, GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 391)) ;
    }
    enumerator_12774.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'guiGenerationTemplates'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Filewrapper template 'guiGenerationTemplates gui_implementation'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "#pragma mark Nibs\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1363_ (0) ;
    if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 34)).isValid ()) {
      cEnumerator_stringlist enumerator_1363 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 34)), kENUMERATION_UP) ;
      while (enumerator_1363.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1363.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1363.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1363_.increment () ;
        enumerator_1363.gotoNextObject () ;
      }
    }
    result << "    nil\n"
      "  ] ;\n"
      "}\n" ;
  }
  result << "\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "#pragma mark Command Line Options\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//                       Command Line Options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  GALGAS_uint index_2288_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)).isValid ()) {
    cEnumerator_stringlist enumerator_2288 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)), kENUMERATION_UP) ;
    while (enumerator_2288.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_2288.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 55)).stringValue () ;
      result << "-cocoa.h\"\n" ;
      index_2288_.increment () ;
      enumerator_2288.gotoNextObject () ;
    }
  }
  result << "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2770_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)).isValid ()) {
    cEnumerator_stringlist enumerator_2770 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)), kENUMERATION_UP) ;
    while (enumerator_2770.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2770.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 66)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2770_.increment () ;
      enumerator_2770.gotoNextObject () ;
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
  GALGAS_uint index_3624_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 91)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3624 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 91)), kENUMERATION_UP) ;
    while (enumerator_3624.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3624.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "//                                                                                                                     *\n"
        "//                     P O P    U P    L I S T    D A T A                                                              *\n"
        "//                                                                                                                     *\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n" ;
      GALGAS_uint index_4463_ (0) ;
      if (enumerator_3624.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4463 (enumerator_3624.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4463.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3624.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "_" ;
          result << enumerator_4463.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_4463.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_4463.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 101)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4761_ (0) ;
          if (enumerator_4463.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4761 (enumerator_4463.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4761.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3624.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4761.current_mTerminal (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ", " ;
              result << enumerator_4761.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 103)).stringValue () ;
              result << ",\n" ;
              index_4761_.increment () ;
              enumerator_4761.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_4463_.increment () ;
          enumerator_4463.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3624.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << " [" ;
      result << enumerator_3624.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 108)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_5061_ (0) ;
      if (enumerator_3624.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_5061 (enumerator_3624.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_5061.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3624.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << "_" ;
          result << enumerator_5061.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 110)).stringValue () ;
          result << ",\n" ;
          index_5061_.increment () ;
          enumerator_5061.gotoNextObject () ;
        }
      }
      result << "  NULL\n"
        "} ;\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "//                                                                                                                     *\n"
        "//                            Lexique interface                                                                        *\n"
        "//                                                                                                                     *\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "@interface OC_Tokenizer_" ;
      result << enumerator_3624.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3624.current_mLexiqueClassName (HERE).stringValue () ;
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
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "@implementation OC_Tokenizer_" ;
      result << enumerator_3624.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3624.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 132)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3624.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 136)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3624.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 140)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3624.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 144)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3624.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 148)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7704_ (0) ;
      if (enumerator_3624.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7704 (enumerator_3624.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7704.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7704.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 150)).stringValue () ;
          result << ",\n" ;
          index_7704_.increment () ;
          enumerator_7704.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroTitle [inIndex] ;\n"
        "}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroContent [" ;
      result << enumerator_3624.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 158)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_8153_ (0) ;
      if (enumerator_3624.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_8153 (enumerator_3624.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_8153.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_8153.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 160)).stringValue () ;
          result << ",\n" ;
          index_8153_.increment () ;
          enumerator_8153.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroContent [inIndex] ;\n"
        "}\n"
        "\n"
        "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "@end\n"
        "\n" ;
      index_3624_.increment () ;
      enumerator_3624.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_8720_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 175)).isValid ()) {
    cEnumerator_extensionMap enumerator_8720 (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 175)), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8720 = enumerator_8720.hasCurrentObject () ;
    if (nonEmpty_enumerator_8720) {
      result << "  if" ;
    }
    while (enumerator_8720.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_8720.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 177)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_8720.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_8720.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_8720_.increment () ;
      enumerator_8720.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8720) {
      result << "  }\n" ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "NSArray * tokenizers (void) {\n"
    "  return [NSArray arrayWithObjects:\n" ;
  GALGAS_uint index_9146_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 189)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_9146 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 189)), kENUMERATION_UP) ;
    while (enumerator_9146.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_9146.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_9146_.increment () ;
      enumerator_9146.gotoNextObject () ;
    }
  }
  result << "    nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "NSString * buildRunOption (void) {\n"
    "  return @\"" ;
  result << in_BUILD_5F_RUN_5F_OPTION.stringValue () ;
  result << "\" ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                                extensionMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@arrayDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mArrayTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 192)), GALGAS_typeKindEnum::constructor_listMapType (SOURCE_FILE ("type-array.galgas", 193)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 195)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 196)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 197)), var_constructorMap_3594, var_getterMap_3685, var_setterMap_3710, var_instanceMethodMap_3753, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 202)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 203)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-array.galgas", 204)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 205)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-array.galgas", 206)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 207)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 208)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 209)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-array.galgas", 211)), GALGAS_string::makeEmptyString (), GALGAS_string ("array-").add_operation (object->mProperty_mArrayTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-array.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 213)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-array.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 188)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               extensionMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@arrayDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_8670 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mArrayTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 231)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8670, var_nameForUsefulness_8670, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 232)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_8830 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mElementTypeName, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 233)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8670, var_elementTypeNameForUsefulness_8830 COMMA_SOURCE_FILE ("type-array.galgas", 234)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("array ").add_operation (object->mProperty_mArrayTypeName.getter_string (SOURCE_FILE ("type-array.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 237)), GALGAS_arrayTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mArrayTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 239)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mElementTypeName, inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 240)), object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 241))  COMMA_SOURCE_FILE ("type-array.galgas", 238))  COMMA_SOURCE_FILE ("type-array.galgas", 236)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@arrayTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 260)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 261)), object->mProperty_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 262)), object->mProperty_mDimension COMMA_SOURCE_FILE ("type-array.galgas", 259))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 266)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 267)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 268)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 269)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 270)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 271)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 272)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 273)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 274)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 275)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 276)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 277)) COMMA_SOURCE_FILE ("type-array.galgas", 265))), inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 265)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_arrayTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayTypeForGeneration * object = (const cPtr_arrayTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_arrayTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 287)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 288)) ;
  GALGAS_stringlist var_suffixList_11150 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-array.galgas", 290)) ;
  GALGAS_uint var_idx_11178 = GALGAS_uint ((uint32_t) 0U) ;
  if (object->mProperty_mDimension.isValid ()) {
    uint32_t variant_11189 = object->mProperty_mDimension.uintValue () ;
    bool loop_11189 = true ;
    while (loop_11189) {
      loop_11189 = GALGAS_bool (kIsStrictInf, var_idx_11178.objectCompare (object->mProperty_mDimension)).isValid () ;
      if (loop_11189) {
        loop_11189 = GALGAS_bool (kIsStrictInf, var_idx_11178.objectCompare (object->mProperty_mDimension)).boolValue () ;
      }
      if (loop_11189 && (0 == variant_11189)) {
        loop_11189 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-array.galgas", 292)) ;
      }
      if (loop_11189) {
        variant_11189 -- ;
        var_suffixList_11150.addAssign_operation (var_idx_11178.getter_string (SOURCE_FILE ("type-array.galgas", 293))  COMMA_SOURCE_FILE ("type-array.galgas", 293)) ;
        var_idx_11178.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-array.galgas", 294)) ;
      }
    }
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 297)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 298)), object->mProperty_mElementTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-array.galgas", 299)), object->mProperty_mDimension, var_suffixList_11150 COMMA_SOURCE_FILE ("type-array.galgas", 296))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                                extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension getter '@boolsetDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_boolsetDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                          extensionGetter_boolsetDeclarationAST_keyRepresentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_boolsetDeclarationAST_keyRepresentation (defineExtensionGetter_boolsetDeclarationAST_keyRepresentation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Once function 'forbiddenKeysForBoolset'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset function_forbiddenKeysForBoolset (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (NULL,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@boolsetDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mBoolsetTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-boolset.galgas", 152)), GALGAS_typeKindEnum::constructor_boolsetType (SOURCE_FILE ("type-boolset.galgas", 153)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 155)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 156)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 157)), var_constructorMap_4573, var_getterMap_4539, var_setterMap_5510, var_instanceMethodMap_5576, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 162)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 163)), var_operators_5888, GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 165)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-boolset.galgas", 166)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 167)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 168)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 169)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-boolset.galgas", 171)), GALGAS_string ("none"), GALGAS_string ("boolset-").add_operation (object->mProperty_mBoolsetTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-boolset.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 173)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-boolset.galgas", 174)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 148)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                               extensionMethod_boolsetDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterInSemanticContext (defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@boolsetDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 192)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_s_7463 = object->mProperty_mFlagList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 193)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (var_s_7463.getter_location (SOURCE_FILE ("type-boolset.galgas", 194)), GALGAS_string ("max flags count is 64 (here: ").add_operation (object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 194)).getter_string (SOURCE_FILE ("type-boolset.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 194)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 194)), fixItArray1  COMMA_SOURCE_FILE ("type-boolset.galgas", 194)) ;
    }
  }
  GALGAS_lstring var_boolsetNameForUsefulness_7632 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mBoolsetTypeName, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 197)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_7632, var_boolsetNameForUsefulness_7632, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 198)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (object->mProperty_mBoolsetTypeName.getter_string (SOURCE_FILE ("type-boolset.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 200)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mBoolsetTypeName, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 202)), object->mProperty_mFlagList  COMMA_SOURCE_FILE ("type-boolset.galgas", 201))  COMMA_SOURCE_FILE ("type-boolset.galgas", 199)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                         extensionMethod_boolsetDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetDeclarationAST_semanticAnalysis (defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                       Filewrapper 'structGenerationTemplate'                                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_lstringlist & /* in_SLOT_5F_LIST */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" struct"), inCompiler COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_boolset.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (C_Compiler * /* inCompiler */,
                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                              const GALGAS_lstringlist & in_SLOT_5F_LIST,
                                                                                              const GALGAS_bigint & in_FULL_5F_SET
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mIsValid ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  mIsValid = false ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 239)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 240)), object->mProperty_mFlagList COMMA_SOURCE_FILE ("type-boolset.galgas", 238))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 244)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 245)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 246)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 247)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 248)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 249)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 250)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 251)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 252)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 253)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 254)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 255)) COMMA_SOURCE_FILE ("type-boolset.galgas", 243))), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 243)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                              extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_boolsetTypeForGeneration * object = (const cPtr_boolsetTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_boolsetTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 266)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_structGenerationTemplate_boolsetTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 268)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 269)), object->mProperty_mFlagList, GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 271)).left_shift_operation (object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 271)) COMMA_SOURCE_FILE ("type-boolset.galgas", 271)).substract_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 271)) COMMA_SOURCE_FILE ("type-boolset.galgas", 267))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                                     extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_3389 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 100)), object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 100))  COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3389, temp_0, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 101)) ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3389, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 103)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 103)) COMMA_SOURCE_FILE ("type-class.galgas", 103)) ;
      }
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_3697 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_3697.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3389, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3697.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 106)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 106)) COMMA_SOURCE_FILE ("type-class.galgas", 106)) ;
    }
    enumerator_3697.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_getterMap var_getterMap_4567 ;
  GALGAS_setterMap var_setterMap_4590 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4629 ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList_4678 ;
  GALGAS_propertyMap var_attributeMap_4706 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 124)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex_4775 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4812 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 128)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_superClassIndex_4775 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 129)) ;
      {
      routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4567, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 130)) ;
      }
      var_setterMap_4590 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 131)) ;
      var_instanceMethodMap_4629 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 132)) ;
      var_inheritedTypedAttributeList_4678 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 133)) ;
      var_attributeMap_4706 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 134)) ;
      var_generateHeaderInSeparateFile_4812 = GALGAS_bool (false) ;
      cEnumerator_lstringlist enumerator_5224 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
      while (enumerator_5224.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (kIsEqual, enumerator_5224.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 137)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_generateHeaderInSeparateFile_4812 = GALGAS_bool (true) ;
          }
        }
        enumerator_5224.gotoNextObject () ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mSuperClassName, var_superClassIndex_4775 COMMA_SOURCE_FILE ("type-class.galgas", 142)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_5487 ;
    GALGAS_getterMap var_inheritedGetterMap_5521 ;
    GALGAS_setterMap var_inheritedSetterMap_5555 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_5597 ;
    GALGAS_bool joker_5670_3 ; // Joker input parameter
    GALGAS_bool joker_5670_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5670_1 ; // Joker input parameter
    GALGAS_bool joker_5700 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5764_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5764_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5852_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5852_7 ; // Joker input parameter
    GALGAS_operators joker_5852_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5852_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5852_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5852_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5852_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5852_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5898_4 ; // Joker input parameter
    GALGAS_string joker_5898_3 ; // Joker input parameter
    GALGAS_string joker_5898_2 ; // Joker input parameter
    GALGAS_headerKind joker_5898_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSuperClassName, joker_5670_3, joker_5670_2, joker_5670_1, var_typeKindEnum_5487, joker_5700, var_inheritedTypedAttributeList_4678, var_attributeMap_4706, joker_5764_2, joker_5764_1, var_inheritedGetterMap_5521, var_inheritedSetterMap_5555, var_inheritedMethodMap_5597, joker_5852_8, joker_5852_7, joker_5852_6, joker_5852_5, joker_5852_4, joker_5852_3, joker_5852_2, joker_5852_1, var_generateHeaderInSeparateFile_4812, joker_5898_4, joker_5898_3, joker_5898_2, joker_5898_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 147)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = var_typeKindEnum_5487.getter_isClassType (SOURCE_FILE ("type-class.galgas", 163)).operator_not (SOURCE_FILE ("type-class.galgas", 163)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mSuperClassName.getter_location (SOURCE_FILE ("type-class.galgas", 164)), GALGAS_string ("the @").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 164)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 164)), fixItArray3  COMMA_SOURCE_FILE ("type-class.galgas", 164)) ;
      }
    }
    var_setterMap_4590 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 167)) ;
    cEnumerator_setterMap enumerator_6137 (var_inheritedSetterMap_5555, kENUMERATION_UP) ;
    while (enumerator_6137.hasCurrentObject ()) {
      {
      var_setterMap_4590.setter_insertKey (enumerator_6137.current_lkey (HERE), enumerator_6137.current_mKind (HERE), enumerator_6137.current_mParameterList (HERE), enumerator_6137.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 174)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 169)) ;
      }
      enumerator_6137.gotoNextObject () ;
    }
    var_getterMap_4567 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 179)) ;
    cEnumerator_getterMap enumerator_6428 (var_inheritedGetterMap_5521, kENUMERATION_UP) ;
    while (enumerator_6428.hasCurrentObject ()) {
      {
      var_getterMap_4567.setter_insertKey (enumerator_6428.current_lkey (HERE), enumerator_6428.current_mKind (HERE), enumerator_6428.current_mArgumentTypeList (HERE), enumerator_6428.current_mDeclarationLocation (HERE), enumerator_6428.current_mHasCompilerArgument (HERE), enumerator_6428.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 188)), enumerator_6428.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 181)) ;
      }
      enumerator_6428.gotoNextObject () ;
    }
    var_instanceMethodMap_4629 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 193)) ;
    cEnumerator_instanceMethodMap enumerator_6784 (var_inheritedMethodMap_5597, kENUMERATION_UP) ;
    while (enumerator_6784.hasCurrentObject ()) {
      {
      var_instanceMethodMap_4629.setter_insertKey (enumerator_6784.current_lkey (HERE), enumerator_6784.current_mKind (HERE), enumerator_6784.current_mParameterList (HERE), enumerator_6784.current_mDeclarationLocation (HERE), enumerator_6784.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 201)), enumerator_6784.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 195)) ;
      }
      enumerator_6784.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_7110 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 207)) ;
  cEnumerator_typedPropertyList enumerator_7155 (var_inheritedTypedAttributeList_4678, kENUMERATION_UP) ;
  while (enumerator_7155.hasCurrentObject ()) {
    GALGAS_lstring temp_4 ;
    const enumGalgasBool test_5 = enumerator_7155.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_5) {
      temp_4 = enumerator_7155.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_5) {
      temp_4 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 210)) ;
    }
    var_constructorAttributeTypeList_7110.addAssign_operation (temp_4, enumerator_7155.current_mPropertyTypeProxy (HERE), enumerator_7155.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 209)) ;
    enumerator_7155.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7344 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7344.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7456 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7344.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7456 COMMA_SOURCE_FILE ("type-class.galgas", 215)) ;
    }
    GALGAS_bool var_hasSelector_7477 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7523 (enumerator_7344.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_7523.hasCurrentObject ()) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = GALGAS_bool (kIsEqual, enumerator_7523.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_hasSelector_7477.boolEnum () ;
            if (kBoolTrue == test_7) {
              TC_Array <C_FixItDescription> fixItArray8 ;
              fixItArray8.appendObject (C_FixItDescription (kFixItRemove, "")) ;
              inCompiler->emitSemanticError (enumerator_7523.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 220)), GALGAS_string ("duplicated attribute"), fixItArray8  COMMA_SOURCE_FILE ("type-class.galgas", 220)) ;
            }
          }
          var_hasSelector_7477 = GALGAS_bool (true) ;
        }
      }
      enumerator_7523.gotoNextObject () ;
    }
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_hasSelector_7477.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_7344.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 226)) ;
    }
    var_constructorAttributeTypeList_7110.addAssign_operation (temp_9, var_attributeTypeIndex_7456, enumerator_7344.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 225)) ;
    {
    var_attributeMap_4706.setter_insertKey (enumerator_7344.current_mPropertyName (HERE), var_attributeTypeIndex_7456, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 229)) ;
    }
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_getterMap_4567.getter_hasKey (enumerator_7344.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 233)) COMMA_SOURCE_FILE ("type-class.galgas", 233)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_7344.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 234)), GALGAS_string ("'").add_operation (enumerator_7344.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 234)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 234)), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 234)) ;
      }
    }
    enumerator_7344.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex_8294 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mClassTypeName, var_classIndex_8294 COMMA_SOURCE_FILE ("type-class.galgas", 238)) ;
  }
  GALGAS_constructorMap var_constructorMap_8349 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 244)) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 245)).boolEnum () ;
    if (kBoolTrue == test_13) {
      {
      var_constructorMap_8349.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 247))  COMMA_SOURCE_FILE ("type-class.galgas", 247)), var_constructorAttributeTypeList_7110, GALGAS_bool (false), var_classIndex_8294, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 246)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList_8614 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 254)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_8662 = var_inheritedTypedAttributeList_4678 ;
  cEnumerator_propertyInCollectionListAST enumerator_8718 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8718.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_8830 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8718.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8830 COMMA_SOURCE_FILE ("type-class.galgas", 257)) ;
    }
    GALGAS_bool var_hasSetter_8849 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8875 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_8902 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_8939 (enumerator_8718.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_8939.hasCurrentObject ()) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = GALGAS_bool (kIsEqual, enumerator_8939.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 262)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_14) {
          var_hasSetter_8849 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_14) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = GALGAS_bool (kIsEqual, enumerator_8939.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 264)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_15) {
            var_hasGetter_8875 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_15) {
          enumGalgasBool test_16 = kBoolTrue ;
          if (kBoolTrue == test_16) {
            test_16 = GALGAS_bool (kIsEqual, enumerator_8939.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 266)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_16) {
              var_hasSelector_8902 = GALGAS_bool (true) ;
            }
          }
        }
      }
      enumerator_8939.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList_8614.addAssign_operation (var_attributeTypeIndex_8830, enumerator_8718.current_mPropertyName (HERE), var_hasSetter_8849, var_hasGetter_8875, var_hasSelector_8902  COMMA_SOURCE_FILE ("type-class.galgas", 270)) ;
    var_allTypedAttributeList_8662.addAssign_operation (var_attributeTypeIndex_8830, enumerator_8718.current_mPropertyName (HERE), var_hasSetter_8849, var_hasGetter_8875, var_hasSelector_8902  COMMA_SOURCE_FILE ("type-class.galgas", 271)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_hasGetter_8875.boolEnum () ;
      if (kBoolTrue == test_17) {
        {
        var_getterMap_4567.setter_insertKey (enumerator_8718.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 275)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 276)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 277)), GALGAS_bool (false), var_attributeTypeIndex_8830, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 280)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 273)) ;
        }
      }
    }
    enumerator_8718.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9801 (var_currentClassTypedAttributeList_8614, kENUMERATION_UP) ;
  while (enumerator_9801.hasCurrentObject ()) {
    enumGalgasBool test_18 = kBoolTrue ;
    if (kBoolTrue == test_18) {
      test_18 = enumerator_9801.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_18) {
        {
        GALGAS_formalParameterSignature temp_19 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 291)) ;
        temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 291)), enumerator_9801.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 291)), enumerator_9801.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 291)) ;
        var_setterMap_4590.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9801.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 289)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 289)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 289))  COMMA_SOURCE_FILE ("type-class.galgas", 289)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 290)), temp_19, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 293)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 288)) ;
        }
      }
    }
    enumerator_9801.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mClassTypeName, var_getterMap_4567, var_setterMap_4590, var_instanceMethodMap_4629, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 299)) ;
  }
  GALGAS_string var_defaultConstructorName_10587 ;
  enumGalgasBool test_20 = kBoolTrue ;
  if (kBoolTrue == test_20) {
    test_20 = var_superClassIndex_4775.getter_isNull (SOURCE_FILE ("type-class.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_20) {
      var_defaultConstructorName_10587 = GALGAS_string ("default") ;
    }
  }
  if (kBoolFalse == test_20) {
    var_defaultConstructorName_10587 = var_superClassIndex_4775.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 314)) ;
  }
  cEnumerator_typedPropertyList enumerator_10788 (var_currentClassTypedAttributeList_8614, kENUMERATION_UP) ;
  bool bool_21 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10587.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10788.hasCurrentObject () && bool_21) {
    while (enumerator_10788.hasCurrentObject () && bool_21) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        test_22 = GALGAS_bool (kIsEqual, enumerator_10788.current_mPropertyTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 317)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10788.current_mPropertyTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 317)).operator_not (SOURCE_FILE ("type-class.galgas", 317)) COMMA_SOURCE_FILE ("type-class.galgas", 317)).boolEnum () ;
        if (kBoolTrue == test_22) {
          var_defaultConstructorName_10587 = GALGAS_string::makeEmptyString () ;
        }
      }
      enumerator_10788.gotoNextObject () ;
      if (enumerator_10788.hasCurrentObject ()) {
        bool_21 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10587.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mClassTypeName, object->mProperty_mIsPredefined, object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 325)), var_superClassIndex_4775, GALGAS_typeKindEnum::constructor_classType (object->mProperty_mIsShared  COMMA_SOURCE_FILE ("type-class.galgas", 327)), GALGAS_bool (false), var_allTypedAttributeList_8662, var_attributeMap_4706, var_currentClassTypedAttributeList_8614, var_constructorMap_8349, var_getterMap_4567, var_setterMap_4590, var_instanceMethodMap_4629, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 336)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 337)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-class.galgas", 338)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 339)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 340)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 341)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 342)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 343)), var_generateHeaderInSeparateFile_4812, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 345)), var_defaultConstructorName_10587, GALGAS_string ("class-").add_operation (object->mProperty_mClassTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 347)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 348)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 322)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@classDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_classTypeNameForUsefulness_12652 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mClassTypeName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 365)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_12652, var_classTypeNameForUsefulness_12652, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 366)) ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 367)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring var_superClassNameForUsefulness_12872 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mSuperClassName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 368)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12652, var_superClassNameForUsefulness_12872 COMMA_SOURCE_FILE ("type-class.galgas", 369)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_13080 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 372)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 375)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 376)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy_13204 = temp_1 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsNotEqual, var_superClassProxy_13204.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 381)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      GALGAS_bool var_superClassIsShared_13637 ;
      var_superClassProxy_13204.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 382)).method_classType (var_superClassIsShared_13637, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 382)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_superClassIsShared_13637.operator_and (object->mProperty_mIsShared.operator_not (SOURCE_FILE ("type-class.galgas", 383)) COMMA_SOURCE_FILE ("type-class.galgas", 383)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 384)), GALGAS_string ("this class should be declared with 'shared' qualifier, as its super class"), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 384)) ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = var_superClassIsShared_13637.operator_not (SOURCE_FILE ("type-class.galgas", 385)).operator_and (object->mProperty_mIsShared COMMA_SOURCE_FILE ("type-class.galgas", 385)).boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 386)), GALGAS_string ("this class should be declared with no 'shared' qualifier, as its super class"), fixItArray7  COMMA_SOURCE_FILE ("type-class.galgas", 386)) ;
          }
        }
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_14168 ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (kIsEqual, var_superClassProxy_13204.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 393)))).boolEnum () ;
    if (kBoolTrue == test_8) {
      var_allAttributeList_14168 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 394)) ;
      GALGAS_bool var_generatedInSeparateFileFeature_14270 = GALGAS_bool (false) ;
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 396)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_9) {
          cEnumerator_lstringlist enumerator_14355 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
          while (enumerator_14355.hasCurrentObject ()) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsEqual, enumerator_14355.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 398)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
              if (kBoolTrue == test_10) {
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = var_generatedInSeparateFileFeature_14270.boolEnum () ;
                  if (kBoolTrue == test_11) {
                    TC_Array <C_FixItDescription> fixItArray12 ;
                    inCompiler->emitSemanticError (enumerator_14355.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 400)), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 400)) ;
                  }
                }
                var_generatedInSeparateFileFeature_14270 = GALGAS_bool (true) ;
              }
            }
            if (kBoolFalse == test_10) {
              TC_Array <C_FixItDescription> fixItArray13 ;
              inCompiler->emitSemanticError (enumerator_14355.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 404)), GALGAS_string ("only the 'generatedInSeparateFile' attribute is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-class.galgas", 404)) ;
            }
            enumerator_14355.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (kBoolFalse == test_8) {
    var_allAttributeList_14168 = var_superClassProxy_13204.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 409)) ;
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 410)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_14) {
        cEnumerator_lstringlist enumerator_14881 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
        while (enumerator_14881.hasCurrentObject ()) {
          TC_Array <C_FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (enumerator_14881.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 412)), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 412)) ;
          enumerator_14881.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_15055 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 417)) ;
  GALGAS_propertyIndexMap var_attributeMap_15093 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 418)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15124 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_15124.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_15165 = function_typeNameForUsefulEntitiesGraph (enumerator_15124.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 420)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12652, var_propertyTypeNameForUsefulness_15165 COMMA_SOURCE_FILE ("type-class.galgas", 421)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_15326 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_15124.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 422)) ;
    GALGAS_bool var_hasSetter_15427 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_15453 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_15480 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_15517 (enumerator_15124.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_15517.hasCurrentObject ()) {
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = GALGAS_bool (kIsEqual, enumerator_15517.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 427)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_16) {
          enumGalgasBool test_17 = kBoolTrue ;
          if (kBoolTrue == test_17) {
            test_17 = var_hasSetter_15427.boolEnum () ;
            if (kBoolTrue == test_17) {
              TC_Array <C_FixItDescription> fixItArray18 ;
              inCompiler->emitSemanticError (enumerator_15517.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 429)), GALGAS_string ("the '%setter' attribute is already named"), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 429)) ;
            }
          }
          var_hasSetter_15427 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_16) {
        enumGalgasBool test_19 = kBoolTrue ;
        if (kBoolTrue == test_19) {
          test_19 = GALGAS_bool (kIsEqual, enumerator_15517.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 432)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_19) {
            enumGalgasBool test_20 = kBoolTrue ;
            if (kBoolTrue == test_20) {
              test_20 = var_hasGetter_15453.operator_not (SOURCE_FILE ("type-class.galgas", 433)).boolEnum () ;
              if (kBoolTrue == test_20) {
                TC_Array <C_FixItDescription> fixItArray21 ;
                inCompiler->emitSemanticError (enumerator_15517.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 434)), GALGAS_string ("the '%nogetter' attribute is already named"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 434)) ;
              }
            }
            var_hasGetter_15453 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_19) {
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_bool (kIsEqual, enumerator_15517.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 437)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_22) {
              enumGalgasBool test_23 = kBoolTrue ;
              if (kBoolTrue == test_23) {
                test_23 = var_hasSelector_15480.boolEnum () ;
                if (kBoolTrue == test_23) {
                  TC_Array <C_FixItDescription> fixItArray24 ;
                  inCompiler->emitSemanticError (enumerator_15517.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 439)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray24  COMMA_SOURCE_FILE ("type-class.galgas", 439)) ;
                }
              }
              var_hasSelector_15480 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_22) {
            TC_Array <C_FixItDescription> fixItArray25 ;
            GALGAS_stringlist temp_26 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 445)) ;
            temp_26.addAssign_operation (GALGAS_string ("%nogetter")  COMMA_SOURCE_FILE ("type-class.galgas", 445)) ;
            temp_26.addAssign_operation (GALGAS_string ("%setter")  COMMA_SOURCE_FILE ("type-class.galgas", 445)) ;
            temp_26.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-class.galgas", 445)) ;
            appendFixItActions (fixItArray25, kFixItReplace, temp_26) ;
            inCompiler->emitSemanticError (enumerator_15517.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 443)), GALGAS_string ("only '%setter', '%nogetter' or '%selector' are allowed here"), fixItArray25  COMMA_SOURCE_FILE ("type-class.galgas", 443)) ;
          }
        }
      }
      enumerator_15517.gotoNextObject () ;
    }
    var_typedAttributeList_15055.addAssign_operation (var_t_15326, enumerator_15124.current_mPropertyName (HERE), var_hasSetter_15427, var_hasGetter_15453, var_hasSelector_15480  COMMA_SOURCE_FILE ("type-class.galgas", 449)) ;
    var_allAttributeList_14168.addAssign_operation (var_t_15326, enumerator_15124.current_mPropertyName (HERE), var_hasSetter_15427, var_hasGetter_15453, var_hasSelector_15480  COMMA_SOURCE_FILE ("type-class.galgas", 455)) ;
    {
    var_attributeMap_15093.setter_insertKey (enumerator_15124.current_mPropertyName (HERE), var_t_15326, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 461)) ;
    }
    enumerator_15124.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 465)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_13080, object->mProperty_mIsAbstract, object->mProperty_mIsShared, var_superClassProxy_13204, var_allAttributeList_14168, var_typedAttributeList_15055, var_selfType_13080.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 473))  COMMA_SOURCE_FILE ("type-class.galgas", 466))  COMMA_SOURCE_FILE ("type-class.galgas", 464)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 496)).operator_not (SOURCE_FILE ("type-class.galgas", 496)).boolEnum () ;
    if (kBoolTrue == test_0) {
      extensionMethod_addHeaderFileName (object->mProperty_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 497)) ;
    }
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 503)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 503)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 501)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)), temp_1, object->mProperty_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 505)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 500))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 510)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 511)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 512)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 513)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 514)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 518)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 519)) COMMA_SOURCE_FILE ("type-class.galgas", 507))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 507)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_18978 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_18978.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18978.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 531)) ;
    enumerator_18978.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = object->mProperty_mGenerateHeaderInSeparateFile.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string temp_1 ;
      const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 538)).boolEnum () ;
      if (kBoolTrue == test_2) {
        temp_1 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_2) {
        temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 538)) ;
      }
      GALGAS_string var_part_31__19085 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 536)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)), temp_1, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 535))) ;
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 546)).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }else if (kBoolFalse == test_4) {
        temp_3 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 546)) ;
      }
      GALGAS_string var_part_32__19397 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 544)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 545)), temp_3, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 543))) ;
      GALGAS_string var_headerFileName_19718 = GALGAS_string ("separateHeaderFor_").add_operation (object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 551)) ;
      {
      GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 553)), var_headerFileName_19718, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
        "\n"), var_part_31__19085, GALGAS_string ("\n"
        "\n"), var_part_32__19397, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 552)) ;
      }
      outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_19718, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 563)).add_operation (GALGAS_string ("\"\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 563)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 568)).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 568)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 567)), temp_5, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 565))) ;
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 576)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 576)) ;
    }
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 574)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 575)), temp_7, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 573))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 573)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 591)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 595)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 595)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 593)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 594)), temp_0, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mAllTypedAttributeList.getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mProperty_mAllTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 598)).substract_operation (object->mProperty_mTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 598))  COMMA_SOURCE_FILE ("type-class.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 598)), object->mProperty_mIsAbstract, object->mProperty_mIsShared, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 601)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 592))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
            GALGAS_bool test_7 = GALGAS_bool (kIsNotEqual, var_propertyKey_3809.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))) ;
            if (kBoolTrue != test_7.boolEnum ()) {
              test_7 = var_circularReference_3192 ;
            }
            test_6 = test_7.boolEnum () ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  GALGAS_constructorMap var_constructorMap_4796 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 113)) ;
  GALGAS_setterMap var_setterMap_4824 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 114)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4868 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 115)) ;
  GALGAS_classMethodMap var_classMethodMap_4906 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 116)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_enumTypeProxy_5037 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mEnumTypeName, var_enumTypeProxy_5037 COMMA_SOURCE_FILE ("type-enum.galgas", 118)) ;
  }
  GALGAS_constantIndexMap var_constantMap_5088 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 120)) ;
  GALGAS_bool var_hasAssociatedValues_5121 = GALGAS_bool (false) ;
  cEnumerator_enumConstantList enumerator_5155 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_5155.hasCurrentObject ()) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_5206 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 123)) ;
    GALGAS_functionSignature var_argumentTypeList_5251 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 124)) ;
    cEnumerator__32_lstringlist enumerator_5322 (enumerator_5155.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_5322.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_5428 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5322.current_mValue_30_ (HERE), var_associatedTypeProxy_5428 COMMA_SOURCE_FILE ("type-enum.galgas", 126)) ;
      }
      var_argumentTypeList_5251.addAssign_operation (enumerator_5322.current_mValue_31_ (HERE), var_associatedTypeProxy_5428, enumerator_5322.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 127)) ;
      var_associatedTypeList_5206.addAssign_operation (var_associatedTypeProxy_5428  COMMA_SOURCE_FILE ("type-enum.galgas", 128)) ;
      var_hasAssociatedValues_5121 = GALGAS_bool (true) ;
      enumerator_5322.gotoNextObject () ;
    }
    {
    var_constantMap_5088.setter_insertKey (enumerator_5155.current_mConstantName (HERE), var_constantMap_5088.getter_count (SOURCE_FILE ("type-enum.galgas", 131)), var_associatedTypeList_5206, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 131)) ;
    }
    {
    var_constructorMap_4796.setter_insertOrReplace (enumerator_5155.current_mConstantName (HERE), var_argumentTypeList_5251, GALGAS_bool (false), var_enumTypeProxy_5037 COMMA_SOURCE_FILE ("type-enum.galgas", 132)) ;
    }
    enumerator_5155.gotoNextObject () ;
  }
  cEnumerator_enumConstantList enumerator_5851 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_5851.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsStrictSup, enumerator_5851.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 141)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_unifiedTypeMapProxyList var_associatedTypeList_5960 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 142)) ;
        GALGAS_formalParameterSignature var_argumentTypeList_6014 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 143)) ;
        cEnumerator__32_lstringlist enumerator_6087 (enumerator_5851.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6087.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_6195 ;
          {
          GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_6087.current_mValue_30_ (HERE), var_associatedTypeProxy_6195 COMMA_SOURCE_FILE ("type-enum.galgas", 145)) ;
          }
          var_argumentTypeList_6014.addAssign_operation (enumerator_6087.current_mValue_31_ (HERE), var_associatedTypeProxy_6195, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-enum.galgas", 146)), enumerator_6087.current_mValue_30_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 146)) ;
          var_associatedTypeList_5960.addAssign_operation (var_associatedTypeProxy_6195  COMMA_SOURCE_FILE ("type-enum.galgas", 147)) ;
          var_hasAssociatedValues_5121 = GALGAS_bool (true) ;
          enumerator_6087.gotoNextObject () ;
        }
        {
        var_instanceMethodMap_4868.setter_insertKey (enumerator_5851.current_mConstantName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-enum.galgas", 152)), var_argumentTypeList_6014, enumerator_5851.current_mConstantName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-enum.galgas", 156)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 150)) ;
        }
      }
    }
    enumerator_5851.gotoNextObject () ;
  }
  GALGAS_getterMap var_getterMap_6699 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6699, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 162)) ;
  }
  cEnumerator_enumConstantList enumerator_6726 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_6726.hasCurrentObject ()) {
    {
    routine_enterBaseGetterWithoutArgument (var_getterMap_6699, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("is").add_operation (enumerator_6726.current_mConstantName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-enum.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 167)), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 164)) ;
    }
    enumerator_6726.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mEnumTypeName, var_getterMap_6699, var_setterMap_4824, var_instanceMethodMap_4868, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 173)) ;
  }
  GALGAS_string var_defaultConstructorName_7283 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mDefaultConstantName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_unifiedTypeMapProxyList var_associatedTypeList_7432 ;
      GALGAS_uint joker_7407 ; // Joker input parameter
      var_constantMap_5088.method_searchKey (object->mProperty_mDefaultConstantName, joker_7407, var_associatedTypeList_7432, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = GALGAS_bool (kIsEqual, var_associatedTypeList_7432.getter_length (SOURCE_FILE ("type-enum.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_defaultConstructorName_7283 = object->mProperty_mDefaultConstantName.getter_string (HERE) ;
        }
      }
      if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mDefaultConstantName.getter_location (SOURCE_FILE ("type-enum.galgas", 190)), GALGAS_string ("the default constant should have no associated values"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 190)) ;
      }
    }
  }
  {
  GALGAS_headerKind temp_4 ;
  const enumGalgasBool test_5 = var_hasAssociatedValues_5121.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-enum.galgas", 220)) ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-enum.galgas", 220)) ;
  }
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mEnumTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 198)), GALGAS_typeKindEnum::constructor_enumType (SOURCE_FILE ("type-enum.galgas", 199)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 201)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 202)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 203)), var_constructorMap_4796, var_getterMap_6699, var_setterMap_4824, var_instanceMethodMap_4868, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 208)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 209)), GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("type-enum.galgas", 210)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("type-enum.galgas", 210)) COMMA_SOURCE_FILE ("type-enum.galgas", 210)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 211)), var_constantMap_5088, object->mProperty_mConstantList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 214)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 215)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-enum.galgas", 217)), var_defaultConstructorName_7283, GALGAS_string ("enum-").add_operation (object->mProperty_mEnumTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-enum.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 219)), temp_4, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 194)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_9416 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mEnumTypeName, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 237)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9416, var_nameForUsefulness_9416, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 238)) ;
  }
  GALGAS_stringlist var_constantList_9578 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 240)) ;
  GALGAS_enumConstantListForGeneration var_enumConstantListForGeneration_9657 = GALGAS_enumConstantListForGeneration::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 241)) ;
  GALGAS_constantIndexMap var_constantMap_9680 = GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-enum.galgas", 242)) ;
  cEnumerator_enumConstantList enumerator_9736 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_9736.hasCurrentObject ()) {
    var_constantList_9578.addAssign_operation (enumerator_9736.current_mConstantName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 244)) ;
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_9829 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-enum.galgas", 245)) ;
    GALGAS_stringset var_associatedValueNameSet_9872 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-enum.galgas", 246)) ;
    cEnumerator__32_lstringlist enumerator_9922 (enumerator_9736.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_9922.hasCurrentObject ()) {
      GALGAS_lstring var_propertyTypeNameForUsefulness_9965 = function_typeNameForUsefulEntitiesGraph (enumerator_9922.current_mValue_30_ (HERE), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 248)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_9416, var_propertyTypeNameForUsefulness_9965 COMMA_SOURCE_FILE ("type-enum.galgas", 249)) ;
      }
      GALGAS_unifiedTypeMap_2D_proxy var_associatedTypeProxy_10129 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_9922.current_mValue_30_ (HERE), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 250)) ;
      var_associatedTypeList_9829.addAssign_operation (var_associatedTypeProxy_10129  COMMA_SOURCE_FILE ("type-enum.galgas", 251)) ;
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = var_associatedValueNameSet_9872.getter_hasKey (enumerator_9922.current_mValue_31_ (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-enum.galgas", 252)).boolEnum () ;
        if (kBoolTrue == test_0) {
          TC_Array <C_FixItDescription> fixItArray1 ;
          inCompiler->emitSemanticError (enumerator_9922.current_mValue_31_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 253)), GALGAS_string ("duplicated name"), fixItArray1  COMMA_SOURCE_FILE ("type-enum.galgas", 253)) ;
        }
      }
      var_associatedValueNameSet_9872.addAssign_operation (enumerator_9922.current_mValue_31_ (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-enum.galgas", 255)) ;
      enumerator_9922.gotoNextObject () ;
    }
    {
    var_constantMap_9680.setter_insertKey (enumerator_9736.current_mConstantName (HERE), var_constantMap_9680.getter_count (SOURCE_FILE ("type-enum.galgas", 257)), var_associatedTypeList_9829, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 257)) ;
    }
    var_enumConstantListForGeneration_9657.addAssign_operation (enumerator_9736.current_mConstantName (HERE).getter_string (HERE), var_associatedTypeList_9829  COMMA_SOURCE_FILE ("type-enum.galgas", 258)) ;
    enumerator_9736.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_10612 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mEnumTypeName, inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 261)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("enum ").add_operation (object->mProperty_mEnumTypeName.getter_string (SOURCE_FILE ("type-enum.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 263)), GALGAS_enumTypeForGeneration::constructor_new (var_selfType_10612, var_enumConstantListForGeneration_9657  COMMA_SOURCE_FILE ("type-enum.galgas", 264))  COMMA_SOURCE_FILE ("type-enum.galgas", 262)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_842_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_842 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_842.hasCurrentObject ()) {
      result << ",\n"
        "    kEnum_" ;
      result << enumerator_842.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 15)).stringValue () ;
      index_842_.increment () ;
      enumerator_842.gotoNextObject () ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
    result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
      "//                                                                                                                     *\n"
      "//" ;
    result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).add_operation (GALGAS_string (" enum, associated values"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 4)).stringValue () ;
    result << "*\n"
      "//                                                                                                                     *\n" ;
    GALGAS_uint index_519_ (0) ;
    if (in_CONSTANT_5F_LIST.isValid ()) {
      cEnumerator_enumConstantListForGeneration enumerator_519 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_519.hasCurrentObject ()) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, enumerator_519.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 8)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
            "\n"
            "class cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " : public cEnumAssociatedValues {\n" ;
          GALGAS_uint index_855_idx (0) ;
          if (enumerator_519.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_855 (enumerator_519.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_855.hasCurrentObject ()) {
              result << "  public : const GALGAS_" ;
              result << enumerator_855.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " mAssociatedValue" ;
              result << index_855_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 12)).stringValue () ;
              result << " ;\n" ;
              index_855_idx.increment () ;
              enumerator_855.gotoNextObject () ;
            }
          }
          result << "\n"
            "//--- Constructor\n"
            "  public : cEnumAssociatedValues_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1137_idx (0) ;
          if (enumerator_519.current_mAssociatedValueTypeList (HERE).isValid ()) {
            cEnumerator_unifiedTypeMapProxyList enumerator_1137 (enumerator_519.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
            while (enumerator_1137.hasCurrentObject ()) {
              result << "const GALGAS_" ;
              result << enumerator_1137.current_mType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              result << " & inAssociatedValue" ;
              result << index_1137_idx.getter_string (SOURCE_FILE ("GALGAS_enum.h2.galgasTemplate", 18)).stringValue () ;
              if (enumerator_1137.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_1137_idx.increment () ;
              enumerator_1137.gotoNextObject () ;
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
          result << enumerator_519.current_mConstantName (HERE).stringValue () ;
          result << " (void) {}\n"
            "} ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
        }
        index_519_.increment () ;
        enumerator_519.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
          "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
          "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "static const char * gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [" ;
  result << in_CONSTANT_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).getter_string (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 119)).stringValue () ;
  result << "] = {\n"
    "  \"(not built)\"" ;
  GALGAS_uint index_5323_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5323 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5323.hasCurrentObject ()) {
      result << ",\n"
        "  " ;
      result << enumerator_5323.current_mConstantName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 122)).stringValue () ;
      index_5323_.increment () ;
      enumerator_5323.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  GALGAS_uint index_5405_ (0) ;
  if (in_CONSTANT_5F_LIST.isValid ()) {
    cEnumerator_enumConstantListForGeneration enumerator_5405 (in_CONSTANT_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5405.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_bool GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_is" ;
      result << enumerator_5405.current_mConstantName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 130)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 130)).stringValue () ;
      result << " (UNUSED_LOCATION_ARGS) const {\n"
        "  return GALGAS_bool (kNotBuilt != mEnum, kEnum_" ;
      result << enumerator_5405.current_mConstantName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_enum.cpp.galgasTemplate", 131)).stringValue () ;
      result << " == mEnum) ;\n"
        "}\n"
        "\n" ;
      index_5405_.increment () ;
      enumerator_5405.gotoNextObject () ;
    }
  }
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (" ;
  columnMarker = result.currentColumn () ;
  result << "C_String & ioString,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "const int32_t " ;
  const enumGalgasBool test_5 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "inIndentation" ;
  }else if (kBoolFalse == test_5) {
    result << "/* inIndentation */" ;
  }
  result << ") const {\n"
    "  ioString << \"<enum @" ;
  result << in_TYPE_5F_NAME.stringValue () ;
  result << ": \" << gEnumNameArrayFor_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " [mEnum] ;\n" ;
  const enumGalgasBool test_6 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "  mAssociatedValues.description (ioString, inIndentation) ;\n" ;
  }else if (kBoolFalse == test_6) {
  }
  result << "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  const enumGalgasBool test_7 = in_HAS_5F_ASSOCIATED_5F_VALUES.boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "      result = mAssociatedValues.objectCompare (inOperand.mAssociatedValues) ;\n" ;
  }else if (kBoolFalse == test_7) {
    result << "      result = kOperandEqual ;\n" ;
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_12655 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_12689 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_12655.operator_not (SOURCE_FILE ("type-enum.galgas", 316)).isValidAndTrue () ;
  if (enumerator_12689.hasCurrentObject () && bool_0) {
    while (enumerator_12689.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_12655 = GALGAS_bool (kIsStrictSup, enumerator_12689.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 317)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_12689.gotoNextObject () ;
      if (enumerator_12689.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_12655.operator_not (SOURCE_FILE ("type-enum.galgas", 316)).isValidAndTrue () ;
      }
    }
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 320)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 321)), object->mProperty_mConstantList, var_hasAssociatedValues_12655 COMMA_SOURCE_FILE ("type-enum.galgas", 319))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 326)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 327)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 328)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 329)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 330)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 331)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 332)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 333)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 334)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 335)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 336)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 337)) COMMA_SOURCE_FILE ("type-enum.galgas", 325))), inCompiler  COMMA_SOURCE_FILE ("type-enum.galgas", 325)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                         GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_13784 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_13818 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_13784.operator_not (SOURCE_FILE ("type-enum.galgas", 348)).isValidAndTrue () ;
  if (enumerator_13818.hasCurrentObject () && bool_0) {
    while (enumerator_13818.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_13784 = GALGAS_bool (kIsStrictSup, enumerator_13818.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 349)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_13818.gotoNextObject () ;
      if (enumerator_13818.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_13784.operator_not (SOURCE_FILE ("type-enum.galgas", 348)).isValidAndTrue () ;
      }
    }
  }
  cEnumerator_enumConstantListForGeneration enumerator_13947 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  while (enumerator_13947.hasCurrentObject ()) {
    cEnumerator_unifiedTypeMapProxyList enumerator_13989 (enumerator_13947.current_mAssociatedValueTypeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13989.hasCurrentObject ()) {
      extensionMethod_addHeaderFileName (enumerator_13989.current_mType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 353)) ;
      enumerator_13989.gotoNextObject () ;
    }
    enumerator_13947.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 357)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 358)), object->mProperty_mConstantList, var_hasAssociatedValues_13784 COMMA_SOURCE_FILE ("type-enum.galgas", 356))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_enumTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_enumTypeForGeneration * object = (const cPtr_enumTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_enumTypeForGeneration) ;
  GALGAS_bool var_hasAssociatedValues_14557 = GALGAS_bool (false) ;
  cEnumerator_enumConstantListForGeneration enumerator_14591 (object->mProperty_mConstantList, kENUMERATION_UP) ;
  bool bool_0 = var_hasAssociatedValues_14557.operator_not (SOURCE_FILE ("type-enum.galgas", 371)).isValidAndTrue () ;
  if (enumerator_14591.hasCurrentObject () && bool_0) {
    while (enumerator_14591.hasCurrentObject () && bool_0) {
      var_hasAssociatedValues_14557 = GALGAS_bool (kIsStrictSup, enumerator_14591.current_mAssociatedValueTypeList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 372)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
      enumerator_14591.gotoNextObject () ;
      if (enumerator_14591.hasCurrentObject ()) {
        bool_0 = var_hasAssociatedValues_14557.operator_not (SOURCE_FILE ("type-enum.galgas", 371)).isValidAndTrue () ;
      }
    }
  }
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 374)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_enumGenerationTemplate_enumTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 376)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 377)), object->mProperty_mConstantList, var_hasAssociatedValues_14557 COMMA_SOURCE_FILE ("type-enum.galgas", 375))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_constructorMap var_constructorMap_8466 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 205)) ;
  GALGAS_setterMap var_setterMap_8510 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 206)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_8557 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 207)) ;
  GALGAS_classMethodMap var_classMethodMap_8609 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 208)) ;
  cEnumerator_externTypeConstructorList enumerator_8694 (object->mProperty_mExternTypeConstructorList, kENUMERATION_UP) ;
  while (enumerator_8694.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_8803 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8694.current_mResultTypeName (HERE), var_returnedTypeProxy_8803 COMMA_SOURCE_FILE ("type-extern.galgas", 211)) ;
    }
    GALGAS_functionSignature var_arguments_8844 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 213)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_8878 (enumerator_8694.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_8878.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_8998 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8878.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_8998 COMMA_SOURCE_FILE ("type-extern.galgas", 215)) ;
      }
      var_arguments_8844.addAssign_operation (enumerator_8878.current_mFormalSelector (HERE), var_argumentTypeProxy_8998, enumerator_8878.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 216)) ;
      enumerator_8878.gotoNextObject () ;
    }
    {
    var_constructorMap_8466.setter_insertKey (enumerator_8694.current_mConstructorName (HERE), var_arguments_8844, GALGAS_bool (true), var_returnedTypeProxy_8803, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 219)) ;
    }
    enumerator_8694.gotoNextObject () ;
  }
  cEnumerator_externTypeGetterList enumerator_9301 (object->mProperty_mExternTypeGetterList, kENUMERATION_UP) ;
  while (enumerator_9301.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_returnedTypeProxy_9410 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9301.current_mResultTypeName (HERE), var_returnedTypeProxy_9410 COMMA_SOURCE_FILE ("type-extern.galgas", 228)) ;
    }
    GALGAS_functionSignature var_arguments_9451 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 230)) ;
    cEnumerator_typeNameFormalParameterNameList enumerator_9485 (enumerator_9301.current_mParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_9485.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_argumentTypeProxy_9605 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9485.current_mFormalParameterTypeName (HERE), var_argumentTypeProxy_9605 COMMA_SOURCE_FILE ("type-extern.galgas", 232)) ;
      }
      var_arguments_9451.addAssign_operation (enumerator_9485.current_mFormalSelector (HERE), var_argumentTypeProxy_9605, enumerator_9485.current_mFormalParameterName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 233)) ;
      enumerator_9485.gotoNextObject () ;
    }
    {
    var_getterMap_8443.setter_insertKey (enumerator_9301.current_mGetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 238)), var_arguments_9451, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 240)), GALGAS_bool (true), var_returnedTypeProxy_9410, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 243)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 236)) ;
    }
    enumerator_9301.gotoNextObject () ;
  }
  cEnumerator_externTypeSetterList enumerator_10023 (object->mProperty_mExternTypeSetterList, kENUMERATION_UP) ;
  while (enumerator_10023.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10073 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 249)) ;
    cEnumerator_formalParameterListAST enumerator_10113 (enumerator_10023.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10113.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_10279 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10113.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10279 COMMA_SOURCE_FILE ("type-extern.galgas", 251)) ;
      }
      var_routineSignature_10073.addAssign_operation (enumerator_10113.current_mFormalSelector (HERE), var_parameterTypeIndex_10279, enumerator_10113.current_mFormalArgumentPassingMode (HERE), enumerator_10113.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 256)) ;
      enumerator_10113.gotoNextObject () ;
    }
    {
    var_setterMap_8510.setter_insertKey (enumerator_10023.current_mSetterName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 261)), var_routineSignature_10073, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 264)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 259)) ;
    }
    enumerator_10023.gotoNextObject () ;
  }
  cEnumerator_externTypeMethodList enumerator_10697 (object->mProperty_mExternTypeMethodList, kENUMERATION_UP) ;
  while (enumerator_10697.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_routineSignature_10725 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 270)) ;
    cEnumerator_formalParameterListAST enumerator_10790 (enumerator_10697.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
    while (enumerator_10790.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_proxy var_parameterTypeIndex_10840 ;
      {
      GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_10790.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_10840 COMMA_SOURCE_FILE ("type-extern.galgas", 273)) ;
      }
      var_routineSignature_10725.addAssign_operation (enumerator_10790.current_mFormalSelector (HERE), var_parameterTypeIndex_10840, enumerator_10790.current_mFormalArgumentPassingMode (HERE), enumerator_10790.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-extern.galgas", 278)) ;
      enumerator_10790.gotoNextObject () ;
    }
    {
    var_instanceMethodMap_8557.setter_insertKey (enumerator_10697.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-extern.galgas", 283)), var_routineSignature_10725, enumerator_10697.current_mDeclarationLocation (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-extern.galgas", 287)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 281)) ;
    }
    enumerator_10697.gotoNextObject () ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mExternTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 296)), GALGAS_typeKindEnum::constructor_externType (SOURCE_FILE ("type-extern.galgas", 297)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 299)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 300)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 301)), var_constructorMap_8466, var_getterMap_8443, var_setterMap_8510, var_instanceMethodMap_8557, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 306)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 307)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-extern.galgas", 308)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 309)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-extern.galgas", 310)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 311)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 312)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-extern.galgas", 313)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-extern.galgas", 315)), GALGAS_string ("default"), GALGAS_string ("externtype-").add_operation (object->mProperty_mExternTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-extern.galgas", 317)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 317)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-extern.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 292)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_13047 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mExternTypeName, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 335)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13047, var_nameForUsefulness_13047, inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 336)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern type ").add_operation (object->mProperty_mExternTypeName.getter_string (SOURCE_FILE ("type-extern.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 339)), GALGAS_externTypeDeclarationForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mExternTypeName, inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 341)), object->mProperty_mExternTypeName.getter_string (HERE), object->mProperty_mCppPreDeclarationCode, object->mProperty_mCppClassCode  COMMA_SOURCE_FILE ("type-extern.galgas", 340))  COMMA_SOURCE_FILE ("type-extern.galgas", 338)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                      GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                      GALGAS_string & outArgument_outHeader,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externTypeDeclarationForGeneration * object = (const cPtr_externTypeDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 364)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 365)), object->mProperty_mCppPreDeclarationCode, object->mProperty_mCppClassCode COMMA_SOURCE_FILE ("type-extern.galgas", 363))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 370)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 371)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 372)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 373)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 374)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 375)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 376)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 377)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 378)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 379)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 380)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-extern.galgas", 381)) COMMA_SOURCE_FILE ("type-extern.galgas", 369))), inCompiler  COMMA_SOURCE_FILE ("type-extern.galgas", 369)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_2720 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 64)), object->mProperty_mGraphTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 64))  COMMA_SOURCE_FILE ("type-graph.galgas", 64)) ;
  {
  const GALGAS_graphDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2720, temp_0, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 65)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2720, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 66)), object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 66))  COMMA_SOURCE_FILE ("type-graph.galgas", 66)) COMMA_SOURCE_FILE ("type-graph.galgas", 66)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@graphDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeProxy_3847 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeProxy_3847 COMMA_SOURCE_FILE ("type-graph.galgas", 79)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeProxy_4016 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeProxy_4016 COMMA_SOURCE_FILE ("type-graph.galgas", 85)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_4176 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mGraphTypeName, var_graphTypeProxy_4176 COMMA_SOURCE_FILE ("type-graph.galgas", 91)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_4364 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedListTypeName, var_associatedListTypeProxy_4364 COMMA_SOURCE_FILE ("type-graph.galgas", 97)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringListTypeProxy_4546 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringListTypeProxy_4546 COMMA_SOURCE_FILE ("type-graph.galgas", 103)) ;
  }
  GALGAS_getterMap var_getterMap_4640 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4640, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 109)) ;
  }
  GALGAS_constructorMap var_constructorMap_4663 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 110)) ;
  GALGAS_setterMap var_setterMap_4707 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 111)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4754 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 112)) ;
  GALGAS_classMethodMap var_classMethodMap_4806 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 113)) ;
  GALGAS_formalParameterSignature var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 115)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 117)), var_associatedListTypeProxy_4364, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 119)), GALGAS_string ("outSortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 116)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 122)), var_lstringListTypeProxy_4546, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 124)), GALGAS_string ("outSortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 121)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 127)), var_associatedListTypeProxy_4364, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 129)), GALGAS_string ("outUnsortedInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 126)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 132)), var_lstringListTypeProxy_4546, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 134)), GALGAS_string ("outUnsortedLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 131)) ;
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("topologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 137))  COMMA_SOURCE_FILE ("type-graph.galgas", 137)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 138)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 140)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 142)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 136)) ;
  }
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("depthFirstTopologicalSort"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 146))  COMMA_SOURCE_FILE ("type-graph.galgas", 146)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 147)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 149)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 151)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 145)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 156)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 158)), var_associatedListTypeProxy_4364, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 160)), GALGAS_string ("outInformationList")  COMMA_SOURCE_FILE ("type-graph.galgas", 157)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 163)), var_lstringListTypeProxy_4546, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-graph.galgas", 165)), GALGAS_string ("outLKeyList")  COMMA_SOURCE_FILE ("type-graph.galgas", 162)) ;
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("circularities"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 168))  COMMA_SOURCE_FILE ("type-graph.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 169)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 171)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 173)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 167)) ;
  }
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoSuccessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 177))  COMMA_SOURCE_FILE ("type-graph.galgas", 177)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 178)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 180)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 182)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 176)) ;
  }
  {
  var_instanceMethodMap_4754.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("nodesWithNoPredecessor"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 186))  COMMA_SOURCE_FILE ("type-graph.galgas", 186)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 187)), var_formalParameterList_4920, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 189)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 191)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("reversedGraph"), object->mProperty_mGraphTypeName.getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 196)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 204)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeKeyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 212)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("undefinedNodeReferenceList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 220)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 228)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNodeDefined"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 236)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 246)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 256)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 264)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edges"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 272)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subgraphFromNodes"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeLStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), object->mProperty_mGraphTypeName.getter_string (HERE), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 280)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (var_getterMap_4640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("accessibleNodesFrom"), GALGAS_string ("lstringlist"), GALGAS_string ("inStartNodeStringList"), GALGAS_string ("stringset"), GALGAS_string ("inNodesToExclude"), GALGAS_string ("lstringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 292)) ;
  }
  {
  var_constructorMap_4663.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("emptyGraph"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 303))  COMMA_SOURCE_FILE ("type-graph.galgas", 303)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 304)), GALGAS_bool (false), var_graphTypeProxy_4176, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 302)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 309)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 311)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 313)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 310)) ;
  cEnumerator_functionSignature enumerator_10906 (var_associatedListTypeProxy_4364.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 315)), kENUMERATION_UP) ;
  while (enumerator_10906.hasCurrentObject ()) {
    var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 317)), enumerator_10906.current_mFormalArgumentType (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 319)), enumerator_10906.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 316)) ;
    enumerator_10906.gotoNextObject () ;
  }
  cEnumerator_graphInsertModifierList enumerator_11096 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_11096.hasCurrentObject ()) {
    {
    var_setterMap_4707.setter_insertOrReplace (enumerator_11096.current_mInsertModifierName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 325)), var_formalParameterList_4920, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-graph.galgas", 328)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-graph.galgas", 323)) ;
    }
    enumerator_11096.gotoNextObject () ;
  }
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToDominators"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 335))  COMMA_SOURCE_FILE ("type-graph.galgas", 335)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 336)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 337)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 339)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 334)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 343)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 344)), var_stringTypeProxy_3847, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 344)), GALGAS_string ("inNodeName")  COMMA_SOURCE_FILE ("type-graph.galgas", 344)) ;
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeEdgesToNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 346))  COMMA_SOURCE_FILE ("type-graph.galgas", 346)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 347)), var_formalParameterList_4920, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 350)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 345)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 355)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 356)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 356)), GALGAS_string ("inSourceNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 356)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 357)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 357)), GALGAS_string ("inTargetNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 357)) ;
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("addEdge"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 359))  COMMA_SOURCE_FILE ("type-graph.galgas", 359)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 360)), var_formalParameterList_4920, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 363)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 358)) ;
  }
  var_formalParameterList_4920 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 368)) ;
  var_formalParameterList_4920.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-graph.galgas", 369)), var_lstringTypeProxy_4016, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-graph.galgas", 369)), GALGAS_string ("inNodeLKey")  COMMA_SOURCE_FILE ("type-graph.galgas", 369)) ;
  {
  var_setterMap_4707.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("noteNode"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 371))  COMMA_SOURCE_FILE ("type-graph.galgas", 371)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-graph.galgas", 372)), var_formalParameterList_4920, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-graph.galgas", 375)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 370)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mGraphTypeName, var_getterMap_4640, var_setterMap_4707, var_instanceMethodMap_4754, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 380)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mGraphTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 395)), GALGAS_typeKindEnum::constructor_graphType (SOURCE_FILE ("type-graph.galgas", 396)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 398)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 399)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 400)), var_constructorMap_4663, var_getterMap_4640, var_setterMap_4707, var_instanceMethodMap_4754, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 405)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 406)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-graph.galgas", 407)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 408)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-graph.galgas", 409)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 410)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 411)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-graph.galgas", 412)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-graph.galgas", 414)), GALGAS_string ("emptyGraph"), GALGAS_string ("graph-").add_operation (object->mProperty_mGraphTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-graph.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 416)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-graph.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 391)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@graphDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_15106 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mGraphTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 434)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15106, var_nameForUsefulness_15106, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 435)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_15269 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 436)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_15106, var_associatedTypeNameForUsefulness_15269 COMMA_SOURCE_FILE ("type-graph.galgas", 437)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_graphTypeProxy_15443 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mGraphTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 439)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeProxy_15553 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 440)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListElementTypeProxy_15679 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mAssociatedListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 443)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 443)), object->mProperty_mAssociatedListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-graph.galgas", 443)), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 441)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy_15553.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 444)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)), fixItArray1  COMMA_SOURCE_FILE ("type-graph.galgas", 445)) ;
    }
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 448)) ;
  temp_2.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  temp_2.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  GALGAS_stringset var_reservedModifierNames_16105 = temp_2 ;
  cEnumerator_graphInsertModifierList enumerator_16164 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_16164.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_reservedModifierNames_16105.getter_hasKey (enumerator_16164.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 450)) COMMA_SOURCE_FILE ("type-graph.galgas", 450)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_16164.current_mInsertModifierName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_string ("the '").add_operation (enumerator_16164.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)), fixItArray4  COMMA_SOURCE_FILE ("type-graph.galgas", 451)) ;
      }
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16164.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 453)) ;
    }
    enumerator_16164.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy_15443, var_associatedListTypeProxy_15553, var_associatedListElementTypeProxy_15679, object->mProperty_mInsertModifierList  COMMA_SOURCE_FILE ("type-graph.galgas", 458))  COMMA_SOURCE_FILE ("type-graph.galgas", 456)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                 GALGAS_string & outArgument_outHeader,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 482)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 483)) COMMA_SOURCE_FILE ("type-graph.galgas", 481))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 486)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 487)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 488)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 489)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 490)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 491)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 492)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 493)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 494)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 495)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 496)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 497)) COMMA_SOURCE_FILE ("type-graph.galgas", 485))), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 485)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                        const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                        GALGAS_string & outArgument_outImplementation,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_graphDeclarationForGeneration * object = (const cPtr_graphDeclarationForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 507)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 508)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 509)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 512)), object->mProperty_mAssociatedListTypeProxy, object->mProperty_mInsertModifierList COMMA_SOURCE_FILE ("type-graph.galgas", 510))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_2258 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 49))  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2258, temp_0, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2403 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_2403.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2403.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2403.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 52))  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2403.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3312 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3343 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_3343.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3455 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3343.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3455 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasSetter_3474 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_3500 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_3527 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3564 (enumerator_3343.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_3564.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_3564.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 74)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_hasSetter_3474.boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (enumerator_3564.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 76)), GALGAS_string ("the '%setter' attribute is already named"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 76)) ;
            }
          }
          var_hasSetter_3474 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_3564.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 79)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_hasGetter_3500.operator_not (SOURCE_FILE ("type-list.galgas", 80)).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_3564.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 81)), GALGAS_string ("the '%nogetter' attribute is already named"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 81)) ;
              }
            }
            var_hasGetter_3500 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, enumerator_3564.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 84)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = var_hasSelector_3527.boolEnum () ;
                if (kBoolTrue == test_7) {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (enumerator_3564.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 86)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 86)) ;
                }
              }
              var_hasSelector_3527 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            GALGAS_stringlist temp_10 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 92)) ;
            temp_10.addAssign_operation (GALGAS_string ("%nogetter")  COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
            temp_10.addAssign_operation (GALGAS_string ("%setter")  COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
            temp_10.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 92)) ;
            appendFixItActions (fixItArray9, kFixItReplace, temp_10) ;
            inCompiler->emitSemanticError (enumerator_3564.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 90)), GALGAS_string ("only '%setter', '%nogetter' or '%selector' attributes are allowed here"), fixItArray9  COMMA_SOURCE_FILE ("type-list.galgas", 90)) ;
          }
        }
      }
      enumerator_3564.gotoNextObject () ;
    }
    var_typedAttributeList_3312.addAssign_operation (var_attributeTypeIndex_3455, enumerator_3343.current_mPropertyName (HERE), var_hasSetter_3474, var_hasGetter_3500, var_hasSelector_3527  COMMA_SOURCE_FILE ("type-list.galgas", 95)) ;
    enumerator_3343.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_4528 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_4528 COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_4648 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mListTypeName, var_listTypeIndex_4648 COMMA_SOURCE_FILE ("type-list.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_4886 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 104)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 104)), var_listElementTypeIndex_4886 COMMA_SOURCE_FILE ("type-list.galgas", 102)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_4967 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 108)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_5022 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 109)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_5086 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 110)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_5149 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 111)) ;
  cEnumerator_typedPropertyList enumerator_5185 (var_typedAttributeList_3312, kENUMERATION_UP) ;
  while (enumerator_5185.hasCurrentObject ()) {
    GALGAS_string temp_11 ;
    const enumGalgasBool test_12 = enumerator_5185.current_mHasSelector (HERE).boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_5185.current_mPropertyName (HERE).getter_string (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_selector_5205 = temp_11 ;
    var_enumerationDescriptor_4967.addAssign_operation (enumerator_5185.current_mPropertyTypeProxy (HERE), enumerator_5185.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 114)) ;
    var_constructorAttributeTypeList_5022.addAssign_operation (var_selector_5205.getter_nowhere (SOURCE_FILE ("type-list.galgas", 116)), enumerator_5185.current_mPropertyTypeProxy (HERE), enumerator_5185.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 115)) ;
    var_setterOutputFormalArgumentList_5086.addAssign_operation (var_selector_5205.getter_nowhere (SOURCE_FILE ("type-list.galgas", 120)), enumerator_5185.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 122)), enumerator_5185.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 119)) ;
    var_setterInputFormalArgumentList_5149.addAssign_operation (var_selector_5205.getter_nowhere (SOURCE_FILE ("type-list.galgas", 125)), enumerator_5185.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 127)), enumerator_5185.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 124)) ;
    enumerator_5185.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5787 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 131)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5787, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 136)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 132)) ;
  }
  {
  var_constructorMap_5787.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 140))  COMMA_SOURCE_FILE ("type-list.galgas", 140)), var_constructorAttributeTypeList_5022, GALGAS_bool (false), var_listTypeIndex_4648, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 139)) ;
  }
  GALGAS_getterMap var_getterMap_6227 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_6227, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 146)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6227, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 147)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_6227, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 154)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6227, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 165)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 161)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6227, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 172)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 168)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_6227, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 179)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 175)) ;
  }
  cEnumerator_typedPropertyList enumerator_7224 (var_typedAttributeList_3312, kENUMERATION_UP) ;
  while (enumerator_7224.hasCurrentObject ()) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = enumerator_7224.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_13) {
        {
        GALGAS_functionSignature temp_14 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 187)) ;
        temp_14.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 187)), var_uintType_4528, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 187)) ;
        var_getterMap_6227.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_7224.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 185)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 185)), enumerator_7224.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 185))  COMMA_SOURCE_FILE ("type-list.galgas", 185)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 186)), temp_14, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 188)), GALGAS_bool (true), enumerator_7224.current_mPropertyTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 191)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 184)) ;
        }
      }
    }
    enumerator_7224.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7709 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 197)) ;
  {
  var_instanceMethodMap_7709.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 199))  COMMA_SOURCE_FILE ("type-list.galgas", 199)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 200)), var_setterOutputFormalArgumentList_5086, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 202)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 204)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 198)) ;
  }
  {
  var_instanceMethodMap_7709.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 208))  COMMA_SOURCE_FILE ("type-list.galgas", 208)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 209)), var_setterOutputFormalArgumentList_5086, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 211)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 213)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 207)) ;
  }
  GALGAS_setterMap var_setterMap_8227 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 217)) ;
  {
  GALGAS_formalParameterSignature temp_15 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 221)) ;
  temp_15.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 221)), var_listElementTypeIndex_4886, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-list.galgas", 221)), GALGAS_string ("inElement")  COMMA_SOURCE_FILE ("type-list.galgas", 221)) ;
  var_setterMap_8227.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("append"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 219))  COMMA_SOURCE_FILE ("type-list.galgas", 219)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 220)), temp_15, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 223)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 218)) ;
  }
  {
  var_setterMap_8227.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 227))  COMMA_SOURCE_FILE ("type-list.galgas", 227)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 228)), var_setterOutputFormalArgumentList_5086, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 231)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 226)) ;
  }
  {
  var_setterMap_8227.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 235))  COMMA_SOURCE_FILE ("type-list.galgas", 235)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 236)), var_setterOutputFormalArgumentList_5086, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 239)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 234)) ;
  }
  var_setterOutputFormalArgumentList_5086.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 242)), var_uintType_4528, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 242)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 242)) ;
  {
  var_setterMap_8227.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 244))  COMMA_SOURCE_FILE ("type-list.galgas", 244)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 245)), var_setterOutputFormalArgumentList_5086, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 248)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 243)) ;
  }
  cEnumerator_typedPropertyList enumerator_9286 (var_typedAttributeList_3312, kENUMERATION_UP) ;
  while (enumerator_9286.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = enumerator_9286.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_16) {
        GALGAS_formalParameterSignature var_setterFormalArgumentList_9347 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 254)) ;
        var_setterFormalArgumentList_9347.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 255)), enumerator_9286.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 255)), enumerator_9286.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 255)) ;
        var_setterFormalArgumentList_9347.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 256)), var_uintType_4528, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 256)), enumerator_9286.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 256)) ;
        {
        var_setterMap_8227.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9286.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 258)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 258)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 258)), enumerator_9286.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 258))  COMMA_SOURCE_FILE ("type-list.galgas", 258)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 259)), var_setterFormalArgumentList_9347, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 262)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 257)) ;
        }
      }
    }
    enumerator_9286.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_5149.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 268)), var_uintType_4528, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 268)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 268)) ;
  {
  var_setterMap_8227.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 270))  COMMA_SOURCE_FILE ("type-list.galgas", 270)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 271)), var_setterInputFormalArgumentList_5149, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 274)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 269)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListTypeName, var_getterMap_6227, var_setterMap_8227, var_instanceMethodMap_7709, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 279)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-list.galgas", 294)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 295)), GALGAS_bool (true), var_typedAttributeList_3312, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 298)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 299)), var_constructorMap_5787, var_getterMap_6227, var_setterMap_8227, var_instanceMethodMap_7709, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 304)), var_enumerationDescriptor_4967, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 306)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 306)) COMMA_SOURCE_FILE ("type-list.galgas", 306)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 306)) COMMA_SOURCE_FILE ("type-list.galgas", 306)), var_constructorAttributeTypeList_5022, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 308)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 309)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 310)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 311)), GALGAS_bool (false), var_listElementTypeIndex_4886, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mProperty_mListTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 315)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 290)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_11816 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 325)) ;
  cEnumerator_propertyInCollectionListAST enumerator_11847 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_11847.hasCurrentObject ()) {
    var_structAttributeList_11816.addAssign_operation (enumerator_11847.current_mPropertyTypeName (HERE), enumerator_11847.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 330))  COMMA_SOURCE_FILE ("type-list.galgas", 327)) ;
    enumerator_11847.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 334)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 334)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 334)), var_structAttributeList_11816, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 332))  COMMA_SOURCE_FILE ("type-list.galgas", 332)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_12924 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListTypeName, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 354)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12924, var_nameForUsefulness_12924, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 355)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_13083 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 356)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 356))  COMMA_SOURCE_FILE ("type-list.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 356)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12924, var_elementTypeNameForUsefulness_13083 COMMA_SOURCE_FILE ("type-list.galgas", 357)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_13305 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 359)) ;
  GALGAS_propertyIndexMap var_attributeMap_13343 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 360)) ;
  cEnumerator_propertyInCollectionListAST enumerator_13374 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_13374.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_13415 = function_typeNameForUsefulEntitiesGraph (enumerator_13374.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 362)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_12924, var_propertyTypeNameForUsefulness_13415 COMMA_SOURCE_FILE ("type-list.galgas", 363)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_13567 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13374.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 364)) ;
    GALGAS_bool var_hasSetter_13668 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_13694 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_13721 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_13758 (enumerator_13374.current_mAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_13758.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsEqual, enumerator_13758.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 369)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = var_hasSetter_13668.boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (enumerator_13758.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 371)), GALGAS_string ("the '%setter' attribute is already named"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 371)) ;
            }
          }
          var_hasSetter_13668 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_0) {
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (kIsEqual, enumerator_13758.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 374)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = var_hasGetter_13694.operator_not (SOURCE_FILE ("type-list.galgas", 375)).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <C_FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_13758.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 376)), GALGAS_string ("the '%nogetter' attribute is already named"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 376)) ;
              }
            }
            var_hasGetter_13694 = GALGAS_bool (false) ;
          }
        }
        if (kBoolFalse == test_3) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_bool (kIsEqual, enumerator_13758.current_mValue (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 379)).objectCompare (GALGAS_string ("selector"))).boolEnum () ;
            if (kBoolTrue == test_6) {
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = var_hasSelector_13721.boolEnum () ;
                if (kBoolTrue == test_7) {
                  TC_Array <C_FixItDescription> fixItArray8 ;
                  inCompiler->emitSemanticError (enumerator_13758.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 381)), GALGAS_string ("the '%selector' attribute is already named"), fixItArray8  COMMA_SOURCE_FILE ("type-list.galgas", 381)) ;
                }
              }
              var_hasSelector_13721 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_6) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            GALGAS_stringlist temp_10 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 387)) ;
            temp_10.addAssign_operation (GALGAS_string ("%nogetter")  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
            temp_10.addAssign_operation (GALGAS_string ("%setter")  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
            temp_10.addAssign_operation (GALGAS_string ("%selector")  COMMA_SOURCE_FILE ("type-list.galgas", 387)) ;
            appendFixItActions (fixItArray9, kFixItReplace, temp_10) ;
            inCompiler->emitSemanticError (enumerator_13758.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 385)), GALGAS_string ("only '%setter', '%nogetter' or '%selector' attributes are allowed here"), fixItArray9  COMMA_SOURCE_FILE ("type-list.galgas", 385)) ;
          }
        }
      }
      enumerator_13758.gotoNextObject () ;
    }
    var_typedAttributeList_13305.addAssign_operation (var_t_13567, enumerator_13374.current_mPropertyName (HERE), var_hasSetter_13668, var_hasGetter_13694, var_hasSelector_13721  COMMA_SOURCE_FILE ("type-list.galgas", 390)) ;
    {
    var_attributeMap_13343.setter_insertKey (enumerator_13374.current_mPropertyName (HERE), var_t_13567, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 396)) ;
    }
    enumerator_13374.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_14687 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 399)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_14687, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 404)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 404)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 404)), var_typedAttributeList_13305  COMMA_SOURCE_FILE ("type-list.galgas", 402))  COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Filewrapper 'listGenerationTemplate'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                            Filewrapper template 'listGenerationTemplate listTypeHeader1'                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_1057_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1057 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1057.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_1057.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1057.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 17)).stringValue () ;
      index_1057_.increment () ;
      enumerator_1057.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                         const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_824_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_824 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_824.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_824.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_824.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_824.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_824_.increment () ;
      enumerator_824.gotoNextObject () ;
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1839_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1839 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1839.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1839.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1839.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 37)).stringValue () ;
      if (enumerator_1839.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1839_.increment () ;
      enumerator_1839.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_2076_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2076 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2076.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_2076.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 45)).stringValue () ;
      if (enumerator_2076.hasNextObject ()) {
        result << ", " ;
      }
      index_2076_.increment () ;
      enumerator_2076.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_2494_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2494 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2494.hasCurrentObject ()) {
      result << "inElement.mProperty_" ;
      result << enumerator_2494.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 57)).stringValue () ;
      if (enumerator_2494.hasNextObject ()) {
        result << ", " ;
      }
      index_2494_.increment () ;
      enumerator_2494.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_3143_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3143 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3143.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_3143.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 75)).stringValue () ;
      if (enumerator_3143.hasNextObject ()) {
        result << ", " ;
      }
      index_3143_.increment () ;
      enumerator_3143.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_3541_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_3541 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3541.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_3541.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 89)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_3541.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 90)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_3541_.increment () ;
      enumerator_3541.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5308_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5308.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_5308.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      result << " & inOperand" ;
      result << index_5308_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 124)).stringValue () ;
      if (enumerator_5308.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5308_IDX.increment () ;
      enumerator_5308.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_5540_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5540 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5540.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_5540_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 131)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_5540.hasNextObject ()) {
        result << " && " ;
      }
      index_5540_IDX.increment () ;
      enumerator_5540.gotoNextObject () ;
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
  GALGAS_uint index_5834_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5834 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5834.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5834_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 139)).stringValue () ;
      index_5834_IDX.increment () ;
      enumerator_5834.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_6211_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6211 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6211.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_6211.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      result << " & in_" ;
      result << enumerator_6211.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 151)).stringValue () ;
      index_6211_.increment () ;
      enumerator_6211.gotoNextObject () ;
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
  GALGAS_uint index_6513_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6513 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6513.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_6513.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 158)).stringValue () ;
      if (enumerator_6513.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6513_.increment () ;
      enumerator_6513.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6895_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6895 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6895.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6895.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      result << " & inOperand" ;
      result << index_6895_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 170)).stringValue () ;
      if (enumerator_6895.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6895_IDX.increment () ;
      enumerator_6895.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_7100_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7100 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7100.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_7100_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 176)).stringValue () ;
      result << ".isValid ()" ;
      index_7100_IDX.increment () ;
      enumerator_7100.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7297_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7297 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7297.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7297_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 182)).stringValue () ;
      if (enumerator_7297.hasNextObject ()) {
        result << ", " ;
      }
      index_7297_IDX.increment () ;
      enumerator_7297.gotoNextObject () ;
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8328_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8328 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8328.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_8328.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << " inOperand" ;
      result << index_8328_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8328_IDX.increment () ;
      enumerator_8328.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inInsertionIndex.isValid ()" ;
  GALGAS_uint index_8628_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8628 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8628.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_8628_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 219)).stringValue () ;
      result << ".isValid ()" ;
      index_8628_IDX.increment () ;
      enumerator_8628.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8825_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8825 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8825.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_8825_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 225)).stringValue () ;
      if (enumerator_8825.hasNextObject ()) {
        result << ", " ;
      }
      index_8825_IDX.increment () ;
      enumerator_8825.gotoNextObject () ;
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9322_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9322 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9322.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9322.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << " & outOperand" ;
      result << index_9322_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9322_IDX.increment () ;
      enumerator_9322.gotoNextObject () ;
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
  GALGAS_uint index_9874_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9874 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9874.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_9874_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 252)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9874_IDX.increment () ;
      enumerator_9874.gotoNextObject () ;
    }
  }
  result << "    }else{\n"
    "      macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10058_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10058 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10058.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_10058_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 258)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10058.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 258)).stringValue () ;
      result << " ;\n" ;
      index_10058_IDX.increment () ;
      enumerator_10058.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10405_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10405 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10405.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10405.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue () ;
      result << " & outOperand" ;
      result << index_10405_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 268)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10405_IDX.increment () ;
      enumerator_10405.gotoNextObject () ;
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
  GALGAS_uint index_10822_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10822 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10822.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10822_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 278)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10822_IDX.increment () ;
      enumerator_10822.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11000_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11000 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11000.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11000_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 284)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11000.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 284)).stringValue () ;
      result << " ;\n" ;
      index_11000_IDX.increment () ;
      enumerator_11000.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11338_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11338 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11338.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11338.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue () ;
      result << " & outOperand" ;
      result << index_11338_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 293)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11338_IDX.increment () ;
      enumerator_11338.gotoNextObject () ;
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
  GALGAS_uint index_11754_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11754 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11754.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11754_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 303)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11754_IDX.increment () ;
      enumerator_11754.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11932_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11932 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11932.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11932_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 309)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11932.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 309)).stringValue () ;
      result << " ;\n" ;
      index_11932_IDX.increment () ;
      enumerator_11932.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12268_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12268 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12268.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_12268.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 318)).stringValue () ;
      result << " & outOperand" ;
      result << index_12268_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 318)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12268_IDX.increment () ;
      enumerator_12268.gotoNextObject () ;
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
  GALGAS_uint index_12683_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12683 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12683.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12683_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 328)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12683_IDX.increment () ;
      enumerator_12683.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12861_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12861 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12861.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12861_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12861.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 334)).stringValue () ;
      result << " ;\n" ;
      index_12861_IDX.increment () ;
      enumerator_12861.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13196_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13196 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13196.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_13196.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 343)).stringValue () ;
      result << " & outOperand" ;
      result << index_13196_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 343)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_13196_IDX.increment () ;
      enumerator_13196.gotoNextObject () ;
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
  GALGAS_uint index_13610_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13610 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13610.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13610_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 353)).stringValue () ;
      result << ".drop () ;\n" ;
      index_13610_IDX.increment () ;
      enumerator_13610.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_13788_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13788 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_13788.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_13788_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 359)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_13788.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 359)).stringValue () ;
      result << " ;\n" ;
      index_13788_IDX.increment () ;
      enumerator_13788.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_16588_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16588 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16588.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_16588.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_16588.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 419)).stringValue () ;
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
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 427)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      const enumGalgasBool test_1 = enumerator_16588.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_16588.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 434)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 434)).stringValue () ;
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
        result << enumerator_16588.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 439)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mObject.mProperty_" ;
        result << enumerator_16588.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 442)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_16588_IDX.increment () ;
      enumerator_16588.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
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
  GALGAS_uint index_19555_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19555 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19555.hasCurrentObject ()) {
      result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19555.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19555.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 469)).stringValue () ;
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
      result << enumerator_19555.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 472)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19555_IDX.increment () ;
      enumerator_19555.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@listTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 442)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 443)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 441))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 447)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 448)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 449)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 450)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 451)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 452)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 453)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 454)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 455)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 456)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 457)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 458)) COMMA_SOURCE_FILE ("type-list.galgas", 446))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 446)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@listTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_17378 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_17378.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_17378.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 469)) ;
    enumerator_17378.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mProperty_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 471)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 472)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 474)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 475)), object->mProperty_mTypedAttributeList, object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 477)).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 477)) COMMA_SOURCE_FILE ("type-list.galgas", 473))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@listmapDeclarationAST addAssociatedElement'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_1789 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 37)) ;
  var_structAttributeList_1789.addAssign_operation (GALGAS_string ("string").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 40)), GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 41)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 42))  COMMA_SOURCE_FILE ("type-listmap.galgas", 38)) ;
  var_structAttributeList_1789.addAssign_operation (object->mProperty_mAssociatedListTypeName, GALGAS_string ("mList").getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 46)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 47))  COMMA_SOURCE_FILE ("type-listmap.galgas", 43)) ;
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 51)), var_structAttributeList_1789, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-listmap.galgas", 49))  COMMA_SOURCE_FILE ("type-listmap.galgas", 49)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_key_3145 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 67)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 67))  COMMA_SOURCE_FILE ("type-listmap.galgas", 67)) ;
  {
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3145, temp_0, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 68)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3145, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 69)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 69)), object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 69))  COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) COMMA_SOURCE_FILE ("type-listmap.galgas", 69)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@listmapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                          const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                          const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_4280 ;
  GALGAS_typedPropertyList var_listTypedAttributeList_4338 ;
  GALGAS_bool joker_4242_3 ; // Joker input parameter
  GALGAS_bool joker_4242_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4242_1 ; // Joker input parameter
  GALGAS_bool joker_4286 ; // Joker input parameter
  GALGAS_propertyMap joker_4344_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_4344_18 ; // Joker input parameter
  GALGAS_constructorMap joker_4344_17 ; // Joker input parameter
  GALGAS_getterMap joker_4344_16 ; // Joker input parameter
  GALGAS_setterMap joker_4344_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_4344_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_4344_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_4344_12 ; // Joker input parameter
  GALGAS_operators joker_4344_11 ; // Joker input parameter
  GALGAS_functionSignature joker_4344_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_4344_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_4344_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4344_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_4344_6 ; // Joker input parameter
  GALGAS_bool joker_4344_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_4344_4 ; // Joker input parameter
  GALGAS_string joker_4344_3 ; // Joker input parameter
  GALGAS_string joker_4344_2 ; // Joker input parameter
  GALGAS_headerKind joker_4344_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_4242_3, joker_4242_2, joker_4242_1, var_typeKindEnum_4280, joker_4286, var_listTypedAttributeList_4338, joker_4344_19, joker_4344_18, joker_4344_17, joker_4344_16, joker_4344_15, joker_4344_14, joker_4344_13, joker_4344_12, joker_4344_11, joker_4344_10, joker_4344_9, joker_4344_8, joker_4344_7, joker_4344_6, joker_4344_5, joker_4344_4, joker_4344_3, joker_4344_2, joker_4344_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 82)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4280.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 91)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
      var_listTypedAttributeList_4338 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
    }
  }
  GALGAS_constructorMap var_constructorMap_4607 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 95)) ;
  GALGAS_getterMap var_getterMap_4697 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4697, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 96)) ;
  }
  GALGAS_setterMap var_setterMap_4722 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 97)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4766 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 98)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedListTypeIndex_4920 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedListTypeName, var_associatedListTypeIndex_4920 COMMA_SOURCE_FILE ("type-listmap.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_5054 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_5054 COMMA_SOURCE_FILE ("type-listmap.galgas", 102)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4697, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 104)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4697, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 111)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_4697, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 118)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_4697, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("listForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 131)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 125)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_4607, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 139)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 135)) ;
  }
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6090 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor_6090.addAssign_operation (var_stringTypeIndex_5054, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor_6090.addAssign_operation (var_associatedListTypeIndex_4920, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6303 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription_6303.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex_5054, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6435 (var_listTypedAttributeList_4338, kENUMERATION_UP) ;
  while (enumerator_6435.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6303.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6435.current_mPropertyTypeProxy (HERE), enumerator_6435.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6435.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListmapTypeName, var_getterMap_4697, var_setterMap_4722, var_instanceMethodMap_4766, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_7055 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), var_listElementTypeIndex_7055 COMMA_SOURCE_FILE ("type-listmap.galgas", 164)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListmapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-listmap.galgas", 174)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 175)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 178)), var_listTypedAttributeList_4338, var_constructorMap_4607, var_getterMap_4697, var_setterMap_4722, var_instanceMethodMap_4766, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 184)), var_enumeratorDescriptor_6090, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 186)), var_addAssignOperatorDescription_6303, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 189)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 190)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_bool (false), var_listElementTypeIndex_7055, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mProperty_mListmapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@listmapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_8705 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListmapTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 213)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8705, var_nameForUsefulness_8705, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_8870 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 215)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8705, var_associatedTypeNameForUsefulness_8870 COMMA_SOURCE_FILE ("type-listmap.galgas", 216)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_9053 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 217))  COMMA_SOURCE_FILE ("type-listmap.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8705, var_elementTypeNameForUsefulness_9053 COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9395 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9452 ;
  GALGAS_bool joker_9357_3 ; // Joker input parameter
  GALGAS_bool joker_9357_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9357_1 ; // Joker input parameter
  GALGAS_bool joker_9401 ; // Joker input parameter
  GALGAS_propertyMap joker_9458_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9458_18 ; // Joker input parameter
  GALGAS_constructorMap joker_9458_17 ; // Joker input parameter
  GALGAS_getterMap joker_9458_16 ; // Joker input parameter
  GALGAS_setterMap joker_9458_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9458_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_9458_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9458_12 ; // Joker input parameter
  GALGAS_operators joker_9458_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9458_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9458_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9458_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9458_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9458_6 ; // Joker input parameter
  GALGAS_bool joker_9458_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9458_4 ; // Joker input parameter
  GALGAS_string joker_9458_3 ; // Joker input parameter
  GALGAS_string joker_9458_2 ; // Joker input parameter
  GALGAS_headerKind joker_9458_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_9357_3, joker_9357_2, joker_9357_1, var_typeKindEnum_9395, joker_9401, var_listTypeAttributeList_9452, joker_9458_19, joker_9458_18, joker_9458_17, joker_9458_16, joker_9458_15, joker_9458_14, joker_9458_13, joker_9458_12, joker_9458_11, joker_9458_10, joker_9458_9, joker_9458_8, joker_9458_7, joker_9458_6, joker_9458_5, joker_9458_4, joker_9458_3, joker_9458_2, joker_9458_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 220)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9395.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 229)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 230)), GALGAS_string ("associated type should be a list type"), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 230)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 234)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 236)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)), var_listTypeAttributeList_9452, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 239))  COMMA_SOURCE_FILE ("type-listmap.galgas", 235))  COMMA_SOURCE_FILE ("type-listmap.galgas", 233)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10958 (object->mProperty_mAssociatedListTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_10958.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10958.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 260)) ;
    enumerator_10958.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) COMMA_SOURCE_FILE ("type-listmap.galgas", 263))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)) COMMA_SOURCE_FILE ("type-listmap.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_listmapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                   const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                   GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                   GALGAS_string & outArgument_outImplementation,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 289)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedListMapElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 290)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 292)), object->mProperty_mAssociatedListTypeIndex.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 293)), object->mProperty_mAssociatedListTypedAttributeList COMMA_SOURCE_FILE ("type-listmap.galgas", 291))) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension getter '@dictDeclarationAST keyRepresentation'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionGetter_dictDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                          extensionGetter_dictDeclarationAST_keyRepresentation) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gGetter_dictDeclarationAST_keyRepresentation (defineExtensionGetter_dictDeclarationAST_keyRepresentation, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@dictDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dictDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_2757 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 68)) ;
  var_structAttributeList_2757.addAssign_operation (object->mProperty_mKeyTypeName, GALGAS_string ("key").getter_nowhere (SOURCE_FILE ("type-dict.galgas", 69)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 69))  COMMA_SOURCE_FILE ("type-dict.galgas", 69)) ;
  cEnumerator_propertyInCollectionListAST enumerator_2848 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_2848.hasCurrentObject ()) {
    var_structAttributeList_2757.addAssign_operation (enumerator_2848.current_mPropertyTypeName (HERE), enumerator_2848.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 71))  COMMA_SOURCE_FILE ("type-dict.galgas", 71)) ;
    enumerator_2848.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 75)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 75)), var_structAttributeList_2757, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-dict.galgas", 73))  COMMA_SOURCE_FILE ("type-dict.galgas", 73)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                             extensionMethod_dictDeclarationAST_addAssociatedElement) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_addAssociatedElement (defineExtensionMethod_dictDeclarationAST_addAssociatedElement, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@dictDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_dictionary_3970 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 92)), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 92))  COMMA_SOURCE_FILE ("type-dict.galgas", 92)) ;
  {
  const GALGAS_dictDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_dictionary_3970, temp_0, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 93)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mKeyTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 94)), object->mProperty_mKeyTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 94))  COMMA_SOURCE_FILE ("type-dict.galgas", 94)) COMMA_SOURCE_FILE ("type-dict.galgas", 94)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_4217 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_4217.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_4217.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 96)), enumerator_4217.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 96))  COMMA_SOURCE_FILE ("type-dict.galgas", 96)) COMMA_SOURCE_FILE ("type-dict.galgas", 96)) ;
    }
    enumerator_4217.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                                extensionMethod_dictDeclarationAST_enterDeclarationInGraph) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_dictDeclarationAST_enterDeclarationInGraph, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@dictDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_dictDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_dictDeclarationAST * object = (const cPtr_dictDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_dictDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_keyTypeIndex_5178 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mKeyTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 110)), var_keyTypeIndex_5178 COMMA_SOURCE_FILE ("type-dict.galgas", 110)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_5236 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_keyTypeIndex_5178, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 112)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_5357 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_5393 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_5393.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (kIsEqual, enumerator_5393.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = var_usesSelectorsInInsertAndSearch_5357.boolEnum () ;
          if (kBoolTrue == test_1) {
            TC_Array <C_FixItDescription> fixItArray2 ;
            inCompiler->emitSemanticError (enumerator_5393.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 118)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 118)) ;
          }
        }
        var_usesSelectorsInInsertAndSearch_5357 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_5393.current_mValue (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 122)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-dict.galgas", 122)) ;
    }
    enumerator_5393.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5669 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 126)) ;
  GALGAS_getterMap var_getterMap_5760 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5760, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 127)) ;
  }
  GALGAS_setterMap var_setterMap_5785 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 128)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_5829 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 129)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5669, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyDict"), object->mProperty_mDictTypeName.getter_string (HERE), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 131)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5760, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), object->mProperty_mKeyTypeName.getter_string (HERE), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 139)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5760, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_6495 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 154)) ;
  GALGAS_typedPropertyList var_typedPropertyList_6539 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 155)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_6617 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 156)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_6617.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 157)), var_keyTypeIndex_5178, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 157)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch_5357.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_6495.addAssign_operation (temp_4.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 159)), var_keyTypeIndex_5178, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 161)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 158)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_6966 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 163)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch_5357.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("key") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_6966.addAssign_operation (temp_6.getter_nowhere (SOURCE_FILE ("type-dict.galgas", 165)), var_keyTypeIndex_5178, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 167)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 164)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_7204 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 169)) ;
  cEnumerator_propertyInCollectionListAST enumerator_7267 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7267.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7379 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7267.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7379 COMMA_SOURCE_FILE ("type-dict.galgas", 171)) ;
    }
    GALGAS_bool var_hasGetter_7398 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_7423 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_7450 = GALGAS_bool (false) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_6617.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 175)), var_attributeTypeIndex_7379, enumerator_7267.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 175)) ;
    var_typedPropertyList_6539.addAssign_operation (var_attributeTypeIndex_7379, enumerator_7267.current_mPropertyName (HERE), var_hasSetter_7423, var_hasGetter_7398, var_hasSelector_7450  COMMA_SOURCE_FILE ("type-dict.galgas", 176)) ;
    var_typesToIncludeInHeaderCompilation_7204.addAssign_operation (var_attributeTypeIndex_7379  COMMA_SOURCE_FILE ("type-dict.galgas", 177)) ;
    var_enumerationDescriptor_5236.addAssign_operation (var_attributeTypeIndex_7379, enumerator_7267.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 178))  COMMA_SOURCE_FILE ("type-dict.galgas", 178)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_5357.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_7267.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 180)) ;
    }
    var_insertMethodFormalArgumentList_6495.addAssign_operation (temp_8, var_attributeTypeIndex_7379, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 182)), enumerator_7267.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 179)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_5357.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_7267.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 185)) ;
    }
    var_removeMethodFormalArgumentList_6966.addAssign_operation (temp_10, var_attributeTypeIndex_7379, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-dict.galgas", 187)), enumerator_7267.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 184)) ;
    enumerator_7267.gotoNextObject () ;
  }
  {
  var_setterMap_5785.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 192)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 193)), var_removeMethodFormalArgumentList_6966, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 196)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 191)) ;
  }
  {
  var_instanceMethodMap_5829.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("searchKey"), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 201))  COMMA_SOURCE_FILE ("type-dict.galgas", 201)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 202)), var_removeMethodFormalArgumentList_6966, object->mProperty_mDictTypeName.getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 206)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 200)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_8860 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_8860.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_8884 = GALGAS_lstring::constructor_new (enumerator_8860.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 211)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 211)), enumerator_8860.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 211))  COMMA_SOURCE_FILE ("type-dict.galgas", 211)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_9071 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8860.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9071 COMMA_SOURCE_FILE ("type-dict.galgas", 212)) ;
    }
    {
    GALGAS_functionSignature temp_12 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 216)) ;
    temp_12.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 216)), var_keyTypeIndex_5178, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-dict.galgas", 216)) ;
    var_getterMap_5760.setter_insertOrReplace (var_accessorName_8884, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 215)), temp_12, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 217)), GALGAS_bool (true), var_attributeTypeIndex_9071, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 220)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 213)) ;
    }
    enumerator_8860.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_9458 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_9458.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_9482 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9458.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-dict.galgas", 227)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-dict.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 227)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 227)), enumerator_9458.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 228))  COMMA_SOURCE_FILE ("type-dict.galgas", 226)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_9772 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_9458.current_mPropertyTypeName (HERE), var_attributeTypeIndex_9772 COMMA_SOURCE_FILE ("type-dict.galgas", 230)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_9813 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 235)) ;
    var_accessorFormalArgumentList_9813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 236)), var_attributeTypeIndex_9772, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 236)), enumerator_9458.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 236)) ;
    var_accessorFormalArgumentList_9813.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-dict.galgas", 237)), var_keyTypeIndex_5178, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-dict.galgas", 237)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 237)) ;
    {
    var_setterMap_5785.setter_insertOrReplace (var_accessorName_9482, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-dict.galgas", 240)), var_accessorFormalArgumentList_9813, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-dict.galgas", 243)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-dict.galgas", 238)) ;
    }
    enumerator_9458.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mDictTypeName, var_getterMap_5760, var_setterMap_5785, var_instanceMethodMap_5829, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 248)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_10757 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 261)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 261)), var_elementTypeProxy_10757 COMMA_SOURCE_FILE ("type-dict.galgas", 259)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mDictTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-dict.galgas", 269)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-dict.galgas", 270)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 272)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 273)), var_typedPropertyList_6539, var_constructorMap_5669, var_getterMap_5760, var_setterMap_5785, var_instanceMethodMap_5829, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 279)), var_enumerationDescriptor_5236, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-dict.galgas", 281)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-dict.galgas", 281)) COMMA_SOURCE_FILE ("type-dict.galgas", 281)), var_argumentTypeListForAddAssignWithFieldExpressionList_6617, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 283)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 284)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 285)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 286)), GALGAS_bool (false), var_elementTypeProxy_10757, GALGAS_string ("emptyDict"), GALGAS_string ("dict-").add_operation (object->mProperty_mDictTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-dict.galgas", 290)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 290)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-dict.galgas", 291)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 265)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                               extensionMethod_dictDeclarationAST_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_enterInSemanticContext (defineExtensionMethod_dictDeclarationAST_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12121 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 300)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 300)), kENUMERATION_UP) ;
  while (enumerator_12121.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12154 = enumerator_12121.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 301)) ;
    {
    GALGAS_string joker_12241 ; // Joker input parameter
    var_explodedArray_12154.setter_popFirst (joker_12241, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 302)) ;
    }
    cEnumerator_stringlist enumerator_12271 (var_explodedArray_12154, kENUMERATION_UP) ;
    while (enumerator_12271.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12271.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 304)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_12328 = enumerator_12271.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 305)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_12328.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 307)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 307)) ;
            }
          }
        }
      }
      enumerator_12271.gotoNextObject () ;
    }
    enumerator_12121.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_12819 (inArgument_inString.getter_string (SOURCE_FILE ("type-dict.galgas", 317)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-dict.galgas", 317)), kENUMERATION_UP) ;
  while (enumerator_12819.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_12852 = enumerator_12819.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-dict.galgas", 318)) ;
    {
    GALGAS_string joker_12939 ; // Joker input parameter
    var_explodedArray_12852.setter_popFirst (joker_12939, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 319)) ;
    }
    cEnumerator_stringlist enumerator_12969 (var_explodedArray_12852, kENUMERATION_UP) ;
    while (enumerator_12969.hasCurrentObject ()) {
      enumGalgasBool test_0 = kBoolTrue ;
      if (kBoolTrue == test_0) {
        test_0 = GALGAS_bool (kIsStrictSup, enumerator_12969.current_mValue (HERE).getter_length (SOURCE_FILE ("type-dict.galgas", 321)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_0) {
          GALGAS_char var_c_13026 = enumerator_12969.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 322)) ;
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            test_1 = GALGAS_bool (kIsNotEqual, var_c_13026.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_13026.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-dict.galgas", 323)).boolEnum () ;
            if (kBoolTrue == test_1) {
              TC_Array <C_FixItDescription> fixItArray2 ;
              inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-dict.galgas", 324)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-dict.galgas", 324)) ;
            }
          }
        }
      }
      enumerator_12969.gotoNextObject () ;
    }
    enumerator_12819.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Once function 'forbiddenKeysForMapAndDict'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_stringset onceFunction_forbiddenKeysForMapAndDict (C_Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-dict.galgas", 334)) ;
  result_result.addAssign_operation (GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-dict.galgas", 335)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-dict.galgas", 336)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-dict.galgas", 337)) ;
//---
  return result_result ;
}



//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function implementation                                                                                            *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static bool gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMapAndDict ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_stringset function_forbiddenKeysForMapAndDict (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict) {
    gOnceFunctionResult_forbiddenKeysForMapAndDict = onceFunction_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMapAndDict = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMapAndDict ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void releaseOnceFunctionResult_forbiddenKeysForMapAndDict (void) {
  gOnceFunctionResult_forbiddenKeysForMapAndDict.drop () ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMapAndDict (NULL,
                                                                        releaseOnceFunctionResult_forbiddenKeysForMapAndDict) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMapAndDict [1] = {
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMapAndDict (C_Compiler * inCompiler,
                                                                           const cObjectArray & /* inEffectiveParameterArray */,
                                                                           const GALGAS_location & /* inErrorLocation */
                                                                           COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMapAndDict (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMapAndDict ("forbiddenKeysForMapAndDict",
                                                                            functionWithGenericHeader_forbiddenKeysForMapAndDict,
                                                                            & kTypeDescriptor_GALGAS_stringset,
                                                                            0,
                                                                            functionArgs_forbiddenKeysForMapAndDict) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@dictDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  GALGAS_lstring var_nameForUsefulness_14039 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mDictTypeName, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 351)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14039, var_nameForUsefulness_14039, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 352)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_14198 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 353)), object->mProperty_mDictTypeName.getter_location (SOURCE_FILE ("type-dict.galgas", 353))  COMMA_SOURCE_FILE ("type-dict.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 353)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14039, var_elementTypeNameForUsefulness_14198 COMMA_SOURCE_FILE ("type-dict.galgas", 354)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_14440 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-dict.galgas", 356)) ;
  GALGAS_propertyIndexMap var_attributeMap_14478 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-dict.galgas", 357)) ;
  cEnumerator_propertyInCollectionListAST enumerator_14509 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_14509.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14550 = function_typeNameForUsefulEntitiesGraph (enumerator_14509.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 359)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_14039, var_propertyTypeNameForUsefulness_14550 COMMA_SOURCE_FILE ("type-dict.galgas", 360)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_14720 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_14509.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 361)) ;
    GALGAS_bool var_hasSetter_14799 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_14824 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSelector_14851 = GALGAS_bool (false) ;
    var_typedAttributeList_14440.addAssign_operation (var_t_14720, enumerator_14509.current_mPropertyName (HERE), var_hasSetter_14799, var_hasGetter_14824, var_hasSelector_14851  COMMA_SOURCE_FILE ("type-dict.galgas", 365)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 371)).getter_hasKey (enumerator_14509.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-dict.galgas", 371)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_m_15057 = GALGAS_string ("a property cannot be named:") ;
        cEnumerator_stringset enumerator_15134 (function_forbiddenKeysForMapAndDict (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 373)), kENUMERATION_UP) ;
        while (enumerator_15134.hasCurrentObject ()) {
          var_m_15057.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_15134.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 374)) ;
          enumerator_15134.gotoNextObject () ;
        }
        var_m_15057.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 376)) ;
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_14509.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-dict.galgas", 377)), var_m_15057, fixItArray1  COMMA_SOURCE_FILE ("type-dict.galgas", 377)) ;
      }
    }
    {
    var_attributeMap_14478.setter_insertKey (enumerator_14509.current_mPropertyName (HERE), var_t_14720, inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 379)) ;
    }
    enumerator_14509.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("dict ").add_operation (object->mProperty_mDictTypeName.getter_string (SOURCE_FILE ("type-dict.galgas", 383)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 383)), GALGAS_dictTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mDictTypeName, inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 385)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mDictTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-dict.galgas", 386)), object->mProperty_mDictTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-dict.galgas", 386)), inCompiler  COMMA_SOURCE_FILE ("type-dict.galgas", 386)), object->mProperty_mDictTypeName, var_typedAttributeList_14440, object->mProperty_mKeyTypeName  COMMA_SOURCE_FILE ("type-dict.galgas", 384))  COMMA_SOURCE_FILE ("type-dict.galgas", 382)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_dictDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_dictDeclarationAST.mSlotID,
                                         extensionMethod_dictDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_dictDeclarationAST_semanticAnalysis (defineExtensionMethod_dictDeclarationAST_semanticAnalysis, NULL) ;

