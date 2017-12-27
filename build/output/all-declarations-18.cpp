#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-18.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@optionComponentDeclarationAST enterDeclarationInGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                                extensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_optionComponentDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@optionComponentDeclarationAST enterInSemanticContext'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    const enumGalgasBool test_0 = var_optionNameSet_4838.getter_hasKey (enumerator_4881.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 123)) COMMA_SOURCE_FILE ("optionCompilation.galgas", 123)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_4881.current_mOptionInternalName (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 124)), GALGAS_string ("the '").add_operation (enumerator_4881.current_mOptionInternalName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)).add_operation (GALGAS_string ("' command line option has been already declared"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)), fixItArray1  COMMA_SOURCE_FILE ("optionCompilation.galgas", 124)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 125)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_boolOptionMap_4676.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 128)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 129)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 130)), GALGAS_string ("false"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 126)) ;
        }
        const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 133)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 134)), GALGAS_string ("an @bool option cannot have a default value (default value is allways false)"), fixItArray4  COMMA_SOURCE_FILE ("optionCompilation.galgas", 134)) ;
        }
      }else if (kBoolFalse == test_2) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 136)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
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
          const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_stringDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 144)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 145)), GALGAS_string ("an @uint option default value cannot be an @string value"), fixItArray9  COMMA_SOURCE_FILE ("optionCompilation.galgas", 145)) ;
          }
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 147)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
          if (kBoolTrue == test_10) {
            {
            var_stringOptionMap_4764.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 150)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 151)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 152)), enumerator_4881.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 148)) ;
            }
            const enumGalgasBool test_11 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_unsignedDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 155)))).boolEnum () ;
            if (kBoolTrue == test_11) {
              TC_Array <C_FixItDescription> fixItArray12 ;
              inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 156)), GALGAS_string ("an @string option default value cannot be an @uint value"), fixItArray12  COMMA_SOURCE_FILE ("optionCompilation.galgas", 156)) ;
            }
          }else if (kBoolFalse == test_10) {
            const enumGalgasBool test_13 = GALGAS_bool (kIsEqual, enumerator_4881.current_mOptionTypeName (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 158)).objectCompare (GALGAS_string ("stringlist"))).boolEnum () ;
            if (kBoolTrue == test_13) {
              {
              var_stringListOptionMap_4813.setter_insertKey (enumerator_4881.current_mOptionInternalName (HERE), enumerator_4881.current_mOptionInvocationLetter (HERE).getter_char (SOURCE_FILE ("optionCompilation.galgas", 161)), enumerator_4881.current_mOptionInvocationString (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 162)), enumerator_4881.current_mOptionComment (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 163)), enumerator_4881.current_mOptionDefaultValue (HERE).getter_string (SOURCE_FILE ("optionCompilation.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 159)) ;
              }
              const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, enumerator_4881.current_mOptionDefaultValueKind (HERE).objectCompare (GALGAS_optionDefaultValueEnumAST::constructor_noDefaultValue (SOURCE_FILE ("optionCompilation.galgas", 166)))).boolEnum () ;
              if (kBoolTrue == test_14) {
                TC_Array <C_FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (enumerator_4881.current_mOptionDefaultValue (HERE).getter_location (SOURCE_FILE ("optionCompilation.galgas", 167)), GALGAS_string ("an @stringlist option cannot accept default value"), fixItArray15  COMMA_SOURCE_FILE ("optionCompilation.galgas", 167)) ;
              }
            }else if (kBoolFalse == test_13) {
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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                               extensionMethod_optionComponentDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_enterInSemanticContext (defineExtensionMethod_optionComponentDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@optionComponentDeclarationAST semanticAnalysis'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                         extensionMethod_optionComponentDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentDeclarationAST_semanticAnalysis (defineExtensionMethod_optionComponentDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@optionComponentForGeneration isPredefined'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_optionComponentForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                     extensionGetter_optionComponentForGeneration_isPredefined) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_optionComponentForGeneration_isPredefined (defineExtensionGetter_optionComponentForGeneration_isPredefined, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@optionComponentForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind extensionGetter_optionComponentForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_headerKind temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("optionCompilation.galgas", 247)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("optionCompilation.galgas", 247)) ;
  }
  result_result = temp_0 ;
//---
  return result_result ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_optionComponentForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                   extensionGetter_optionComponentForGeneration_headerKind) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_optionComponentForGeneration_headerKind (defineExtensionGetter_optionComponentForGeneration_headerKind, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@optionComponentForGeneration appendDeclaration1'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mProperty_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outHeader = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mProperty_mOptionComponentName, object->mProperty_mBoolOptionMap, object->mProperty_mUIntOptionMap, object->mProperty_mStringOptionMap, object->mProperty_mStringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 259))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                              extensionMethod_optionComponentForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendDeclaration_31_ (defineExtensionMethod_optionComponentForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@optionComponentForGeneration appendSpecificImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  const enumGalgasBool test_0 = object->mProperty_mIsPredefined.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outImplementation = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 278))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 278)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mProperty_mOptionComponentName, object->mProperty_mBoolOptionMap, object->mProperty_mUIntOptionMap, object->mProperty_mStringOptionMap, object->mProperty_mStringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 279))) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                                     extensionMethod_optionComponentForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificImplementation (defineExtensionMethod_optionComponentForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@optionComponentForGeneration appendSpecificFiles'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_optionComponentForGeneration_appendSpecificFiles (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                              const GALGAS_string constinArgument_inProductDirectory,
                                                                              GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionComponentForGeneration * object = (const cPtr_optionComponentForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentForGeneration) ;
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("optionCompilation.galgas", 295)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mProperty_mIsPredefined.operator_not (SOURCE_FILE ("optionCompilation.galgas", 295)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 296)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 296))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 296)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 299)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 299)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 299)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mProperty_mOptionComponentName COMMA_SOURCE_FILE ("optionCompilation.galgas", 303))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mProperty_mOptionComponentName COMMA_SOURCE_FILE ("optionCompilation.galgas", 307))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 297)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 313)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 313))  COMMA_SOURCE_FILE ("optionCompilation.galgas", 313)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 316)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mProperty_mOptionComponentName.getter_fileNameRepresentation (SOURCE_FILE ("optionCompilation.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 321)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 321)), object->mProperty_mOptionComponentName, object->mProperty_mBoolOptionMap, object->mProperty_mUIntOptionMap, object->mProperty_mStringOptionMap, object->mProperty_mStringListOptionMap COMMA_SOURCE_FILE ("optionCompilation.galgas", 320))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("optionCompilation.galgas", 314)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles (void) {
  enterExtensionMethod_appendSpecificFiles (kTypeDescriptor_GALGAS_optionComponentForGeneration.mSlotID,
                                            extensionMethod_optionComponentForGeneration_appendSpecificFiles) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_optionComponentForGeneration_appendSpecificFiles (defineExtensionMethod_optionComponentForGeneration_appendSpecificFiles, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'optionGenerationTemplates'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'optionGenerationTemplates optionHeaderZone3'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (C_Compiler * /* inCompiler */,
                                                                                  const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                  const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                  const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'optionGenerationTemplates optionImplementationGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                            const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                            const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                            const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               Bool options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                               UInt options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String options                                                                         *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                              String List options                                                                    *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import <Cocoa/Cocoa.h>\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'optionGenerationTemplates optionHeaderCocoaZone3'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (C_Compiler * /* inCompiler */,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-header-cocoa-zone3.galgasTemplate", 4)).stringValue () ;
  result << " (NSMutableArray * ioBoolOptionArray,\n"
    "                                                       NSMutableArray * ioUIntOptionArray,\n"
    "                                                       NSMutableArray * ioStringOptionArray,\n"
    "                                                       NSMutableArray * ioStringListOptionArray) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#endif\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'optionGenerationTemplates optionImplementationCocoa'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_OPTION_5F_HEADER_5F_FILE_5F_NAME,
                                                                                       const GALGAS_string & in_OPTION_5F_COMPONENT_5F_NAME,
                                                                                       const GALGAS_commandLineOptionMap & in_BOOL_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_UINT_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_OPTION_5F_MAP,
                                                                                       const GALGAS_commandLineOptionMap & in_STRING_5F_LIST_5F_OPTION_5F_MAP
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#import \"" ;
  result << in_OPTION_5F_HEADER_5F_FILE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#import \"OC_GGS_CommandLineOption.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptionsFor_" ;
  result << in_OPTION_5F_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 8)).stringValue () ;
  result << " (NSMutableArray * ioBoolOptionArray,\n"
    "                                                       NSMutableArray * ioUIntOptionArray,\n"
    "                                                       NSMutableArray * ioStringOptionArray,\n"
    "                                                       NSMutableArray * ioStringListOptionArray) {\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_BOOL_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_UINT_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).add_operation (in_STRING_5F_LIST_5F_OPTION_5F_MAP.getter_count (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)), inCompiler COMMA_SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "  OC_GGS_CommandLineOption * option ;\n" ;
  }else if (kBoolFalse == test_0) {
  }
  GALGAS_uint index_915_ (0) ;
  if (in_BOOL_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_915 (in_BOOL_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_915.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 17)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_915.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 18)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_915.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 19)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_915.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 20)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_915.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 21)).stringValue () ;
      result << "\n"
        "    defaultValue:@\"\"\n"
        "  ] ;\n"
        "  [ioBoolOptionArray addObject:option] ;\n" ;
      index_915_.increment () ;
      enumerator_915.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1380_ (0) ;
  if (in_UINT_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1380 (in_UINT_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1380.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 28)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1380.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 29)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1380.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 30)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1380.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 31)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1380.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 32)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1380.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 33)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioUIntOptionArray addObject:option] ;\n" ;
      index_1380_.increment () ;
      enumerator_1380.gotoNextObject () ;
    }
  }
  GALGAS_uint index_1882_ (0) ;
  if (in_STRING_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_1882 (in_STRING_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_1882.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 39)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_1882.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 40)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_1882.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 41)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_1882.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 42)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_1882.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 43)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_1882.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 44)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringOptionArray addObject:option] ;\n" ;
      index_1882_.increment () ;
      enumerator_1882.gotoNextObject () ;
    }
  }
  GALGAS_uint index_2391_ (0) ;
  if (in_STRING_5F_LIST_5F_OPTION_5F_MAP.isValid ()) {
    cEnumerator_commandLineOptionMap enumerator_2391 (in_STRING_5F_LIST_5F_OPTION_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_2391.hasCurrentObject ()) {
      result << "  option = [[OC_GGS_CommandLineOption alloc]\n"
        "    initWithDomainName:@" ;
      result << in_OPTION_5F_COMPONENT_5F_NAME.getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 50)).stringValue () ;
      result << "\n"
        "    identifier:@" ;
      result << enumerator_2391.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 51)).stringValue () ;
      result << "\n"
        "    commandChar:" ;
      result << enumerator_2391.current_mOptionChar (HERE).getter_uint (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).getter_string (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 52)).stringValue () ;
      result << "\n"
        "    commandString:@" ;
      result << enumerator_2391.current_mOptionString (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 53)).stringValue () ;
      result << "\n"
        "    comment:@" ;
      result << enumerator_2391.current_mComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 54)).stringValue () ;
      result << "\n"
        "    defaultValue:@" ;
      result << enumerator_2391.current_mDefaultValue (HERE).getter_utf_38_Representation (SOURCE_FILE ("option-implementation-cocoa.galgasTemplate", 55)).stringValue () ;
      result << "\n"
        "  ] ;\n"
        "  [ioStringListOptionArray addObject:option] ;\n" ;
      index_2391_.increment () ;
      enumerator_2391.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Routine 'compileAllGuiComponentFromASTGalgas3'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_compileAllGuiComponentFromASTGalgas_33_ (const GALGAS_galgas_33_GUIComponentListAST constinArgument_inGuiComponentListAST,
                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                      GALGAS_optionComponentMapForGeneration & outArgument_outOptionComponentMapForGeneration,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptionComponentMapForGeneration.drop () ; // Release 'out' argument
  outArgument_outOptionComponentMapForGeneration = GALGAS_optionComponentMapForGeneration::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 240)) ;
  cEnumerator_galgas_33_GUIComponentListAST enumerator_7911 (constinArgument_inGuiComponentListAST, kENUMERATION_UP) ;
  while (enumerator_7911.hasCurrentObject ()) {
    {
    routine_guiComponentSemanticAnalysis (enumerator_7911.current (HERE), constinArgument_inSemanticContext, outArgument_outOptionComponentMapForGeneration, inCompiler  COMMA_SOURCE_FILE ("guiCompilation.galgas", 242)) ;
    }
    enumerator_7911.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'guiComponentSemanticAnalysis'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_guiComponentSemanticAnalysis (const GALGAS_galgas_33_GUIComponentListAST_2D_element constinArgument_inGUIComponentAST,
                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                           GALGAS_optionComponentMapForGeneration & ioArgument_ioOptionComponentMapForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("cocoa"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 258)), GALGAS_string ("the gui name should be 'cocoa'"), fixItArray1  COMMA_SOURCE_FILE ("guiCompilation.galgas", 258)) ;
  }
  GALGAS_guiAnalysisContext var_context_8573 = GALGAS_guiAnalysisContext::constructor_new (GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 262)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 263)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 264)), GALGAS_guiCommandLineOptionList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 265)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 266)), GALGAS_extensionMap::constructor_emptyMap (SOURCE_FILE ("guiCompilation.galgas", 267)), GALGAS_importedLexiqueList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 268))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 261)) ;
  cEnumerator_lstringlist enumerator_8963 (constinArgument_inGUIComponentAST.getter_mImportedOptionList (HERE), kENUMERATION_UP) ;
  while (enumerator_8963.hasCurrentObject ()) {
    GALGAS_bool joker_9060_5 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9060_4 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9060_3 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9060_2 ; // Joker input parameter
    GALGAS_commandLineOptionMap joker_9060_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_8963.current_mValue (HERE), joker_9060_5, joker_9060_4, joker_9060_3, joker_9060_2, joker_9060_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 272)) ;
    var_context_8573.mProperty_mImportedOptionComponentList.addAssign_operation (enumerator_8963.current_mValue (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 276)) ;
    enumerator_8963.gotoNextObject () ;
  }
  cEnumerator_guiSimpleAttributeListAST enumerator_9216 (constinArgument_inGUIComponentAST.getter_mGlobalSimpleAttributeList (HERE), kENUMERATION_UP) ;
  while (enumerator_9216.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_9216.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 280)).objectCompare (GALGAS_string ("nibAndMainClass"))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (enumerator_9216.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 281)), GALGAS_string ("the '").add_operation (enumerator_9216.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)).add_operation (GALGAS_string ("' key is invalid and has no effect"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)), fixItArray3  COMMA_SOURCE_FILE ("guiCompilation.galgas", 281)) ;
    }else if (kBoolFalse == test_2) {
      cEnumerator_stringlist enumerator_9420 (enumerator_9216.current_mValue (HERE).getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string (".") COMMA_SOURCE_FILE ("guiCompilation.galgas", 283)), kENUMERATION_UP) ;
      while (enumerator_9420.hasCurrentObject ()) {
        var_context_8573.mProperty_mNibAndClassList.addAssign_operation (enumerator_9420.current (HERE).getter_mValue (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 284)) ;
        enumerator_9420.gotoNextObject () ;
      }
    }
    enumerator_9216.gotoNextObject () ;
  }
  cEnumerator_withLexiqueListAST enumerator_9587 (constinArgument_inGUIComponentAST.getter_mWithLexiqueList (HERE), kENUMERATION_UP) ;
  while (enumerator_9587.hasCurrentObject ()) {
    GALGAS_terminalMap var_terminalMap_9744 ;
    GALGAS_indexingListAST joker_9752_2 ; // Joker input parameter
    GALGAS_lstring joker_9752_1 ; // Joker input parameter
    constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_9587.current_mLexiqueFileName (HERE), var_terminalMap_9744, joker_9752_2, joker_9752_1, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 291)) ;
    GALGAS_stringset var_terminalSymbolSet_9819 = var_terminalMap_9744.getter_keySet (SOURCE_FILE ("guiCompilation.galgas", 297)) ;
    cEnumerator_guiLabelListAST enumerator_9884 (enumerator_9587.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_9884.hasCurrentObject ()) {
      cEnumerator_terminalLabelListAST enumerator_9917 (enumerator_9884.current_mTerminalList (HERE), kENUMERATION_UP) ;
      while (enumerator_9917.hasCurrentObject ()) {
        const enumGalgasBool test_4 = var_terminalSymbolSet_9819.getter_hasKey (enumerator_9917.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 301)) COMMA_SOURCE_FILE ("guiCompilation.galgas", 301)).operator_not (SOURCE_FILE ("guiCompilation.galgas", 301)).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_9917.current_mTerminal (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 302)), GALGAS_string ("the '$").add_operation (enumerator_9917.current_mTerminal (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 302)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 302)).add_operation (GALGAS_string ("$' terminal symbol is not declared by the '"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 303)).add_operation (enumerator_9587.current_mLexiqueFileName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 304)).add_operation (GALGAS_string ("' lexique"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 305)), fixItArray5  COMMA_SOURCE_FILE ("guiCompilation.galgas", 302)) ;
        }
        enumerator_9917.gotoNextObject () ;
      }
      enumerator_9884.gotoNextObject () ;
    }
    GALGAS_textMacroList var_textMacroList_10243 = GALGAS_textMacroList::constructor_emptyList (SOURCE_FILE ("guiCompilation.galgas", 311)) ;
    cEnumerator_guiCompoundAttributeListAST enumerator_10296 (enumerator_9587.current_mCompoundAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10296.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_10296.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 313)).objectCompare (GALGAS_string ("textMacro"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_10296.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 314)), GALGAS_string ("for a compound attribute, only the 'textMacro' key is valid"), fixItArray7  COMMA_SOURCE_FILE ("guiCompilation.galgas", 314)) ;
      }else if (kBoolFalse == test_6) {
        var_textMacroList_10243.addAssign_operation (enumerator_10296.current_mAttributeName (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 316)), enumerator_10296.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 316))  COMMA_SOURCE_FILE ("guiCompilation.galgas", 316)) ;
      }
      enumerator_10296.gotoNextObject () ;
    }
    GALGAS_bool var_hasAssociatedExtension_10578 = GALGAS_bool (false) ;
    GALGAS_bool var_hasTabViewTitle_10612 = GALGAS_bool (false) ;
    GALGAS_bool var_hasBlockComment_10646 = GALGAS_bool (false) ;
    GALGAS_string var_tabViewTitle_10679 = GALGAS_string::makeEmptyString () ;
    GALGAS_string var_blockComment_10709 = GALGAS_string::makeEmptyString () ;
    cEnumerator_guiSimpleAttributeListAST enumerator_10746 (enumerator_9587.current_mSimpleAttributes (HERE), kENUMERATION_UP) ;
    while (enumerator_10746.hasCurrentObject ()) {
      const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_10746.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 326)).objectCompare (GALGAS_string ("fileExtension"))).boolEnum () ;
      if (kBoolTrue == test_8) {
        {
        var_context_8573.mProperty_mExtensionMap.setter_insertKey (enumerator_10746.current_mValue (HERE), enumerator_9587.current_mLexiqueFileName (HERE).getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 327)) ;
        }
        var_hasAssociatedExtension_10578 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_8) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_10746.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 329)).objectCompare (GALGAS_string ("title"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = var_hasTabViewTitle_10612.boolEnum () ;
          if (kBoolTrue == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_10746.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 331)), GALGAS_string ("the '").add_operation (enumerator_10746.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 331)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 331)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 331)), fixItArray11  COMMA_SOURCE_FILE ("guiCompilation.galgas", 331)) ;
          }
          var_hasTabViewTitle_10612 = GALGAS_bool (true) ;
          var_tabViewTitle_10679 = enumerator_10746.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 334)) ;
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_10746.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 335)).objectCompare (GALGAS_string ("blockComment"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            const enumGalgasBool test_13 = var_hasBlockComment_10646.boolEnum () ;
            if (kBoolTrue == test_13) {
              TC_Array <C_FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (enumerator_10746.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 337)), GALGAS_string ("the '").add_operation (enumerator_10746.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)).add_operation (GALGAS_string ("' key should be defined once"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)), fixItArray14  COMMA_SOURCE_FILE ("guiCompilation.galgas", 337)) ;
            }
            var_hasBlockComment_10646 = GALGAS_bool (true) ;
            var_blockComment_10709 = enumerator_10746.current_mValue (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 340)) ;
          }else if (kBoolFalse == test_12) {
            TC_Array <C_FixItDescription> fixItArray15 ;
            inCompiler->emitSemanticError (enumerator_10746.current_mKey (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 342)), GALGAS_string ("the '").add_operation (enumerator_10746.current_mKey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)).add_operation (GALGAS_string ("' key is not valid (valid keys: 'blockComment,', 'fileExtension', 'title')"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)), fixItArray15  COMMA_SOURCE_FILE ("guiCompilation.galgas", 342)) ;
          }
        }
      }
      enumerator_10746.gotoNextObject () ;
    }
    const enumGalgasBool test_16 = var_hasAssociatedExtension_10578.operator_not (SOURCE_FILE ("guiCompilation.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (enumerator_9587.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 347)), GALGAS_string ("one or more file extensions should be associated with a lexique (fileExtension : \"...\")"), fixItArray17  COMMA_SOURCE_FILE ("guiCompilation.galgas", 347)) ;
    }
    const enumGalgasBool test_18 = var_hasTabViewTitle_10612.operator_not (SOURCE_FILE ("guiCompilation.galgas", 350)).boolEnum () ;
    if (kBoolTrue == test_18) {
      TC_Array <C_FixItDescription> fixItArray19 ;
      inCompiler->emitSemanticError (enumerator_9587.current_mLexiqueFileName (HERE).getter_location (SOURCE_FILE ("guiCompilation.galgas", 351)), GALGAS_string ("the 'title' key should be defined once (it is not defined)"), fixItArray19  COMMA_SOURCE_FILE ("guiCompilation.galgas", 351)) ;
    }
    var_context_8573.mProperty_mWithLexiqueList.addAssign_operation (enumerator_9587.current_mLexiqueFileName (HERE).getter_string (HERE), var_blockComment_10709, var_tabViewTitle_10679, var_textMacroList_10243, enumerator_9587.current_mLabels (HERE)  COMMA_SOURCE_FILE ("guiCompilation.galgas", 354)) ;
    enumerator_9587.gotoNextObject () ;
  }
  {
  ioArgument_ioOptionComponentMapForGeneration.setter_insertKey (constinArgument_inGUIComponentAST.getter_mGUIComponentName (HERE), var_context_8573, inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 362)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'generateAllGuiComponentsGalgas3'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateAllGuiComponentsGalgas_33_ (const GALGAS_optionComponentMapForGeneration constinArgument_inOptionComponentMapForGeneration,
                                                 const GALGAS_string constinArgument_inOutputDirectory,
                                                 const GALGAS_bool constinArgument_inQuietOutputByDefault,
                                                 GALGAS_stringlist & ioArgument_ioApplicationSourceSet,
                                                 GALGAS_stringset & ioArgument_ioAllProductFileSet,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_optionComponentMapForGeneration enumerator_12698 (constinArgument_inOptionComponentMapForGeneration, kENUMERATION_UP) ;
  while (enumerator_12698.hasCurrentObject ()) {
    GALGAS_string var_fileName_12718 = GALGAS_string ("gui-").add_operation (enumerator_12698.current_lkey (HERE).getter_string (SOURCE_FILE ("guiCompilation.galgas", 380)), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 380)).add_operation (GALGAS_string (".m"), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 380)) ;
    ioArgument_ioApplicationSourceSet.addAssign_operation (var_fileName_12718  COMMA_SOURCE_FILE ("guiCompilation.galgas", 381)) ;
    ioArgument_ioAllProductFileSet.addAssign_operation (var_fileName_12718  COMMA_SOURCE_FILE ("guiCompilation.galgas", 382)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory, var_fileName_12718, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (inCompiler, enumerator_12698.current_mGuiComponentContext (HERE), constinArgument_inQuietOutputByDefault COMMA_SOURCE_FILE ("guiCompilation.galgas", 389))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("guiCompilation.galgas", 383)) ;
    }
    enumerator_12698.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'guiGenerationTemplates'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'guiGenerationTemplates gui_implementation'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_guiGenerationTemplates_gui_5F_implementation (C_Compiler * inCompiler,
                                                                                const GALGAS_guiAnalysisContext & in_GUI_5F_CONTEXT,
                                                                                const GALGAS_bool & in_QUIET_5F_OUTPUT_5F_BY_5F_DEFAULT
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#import \"OC_Token.h\"\n"
    "#import \"F_CocoaWrapperForGalgas.h\"\n" ;
  GALGAS_uint index_101_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 4)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_101 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 4)), kENUMERATION_UP) ;
    while (enumerator_101.hasCurrentObject ()) {
      result << "#import \"lexique-" ;
      result << enumerator_101.current_mLexiqueClassName (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 5)).stringValue () ;
      result << "-cocoa.m\"\n" ;
      index_101_.increment () ;
      enumerator_101.gotoNextObject () ;
    }
  }
  GALGAS_uint index_227_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 7)).isValid ()) {
    cEnumerator_stringlist enumerator_227 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 7)), kENUMERATION_UP) ;
    while (enumerator_227.hasCurrentObject ()) {
      result << "#import \"" ;
      result << enumerator_227.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_227_.increment () ;
      enumerator_227.gotoNextObject () ;
    }
  }
  result << "\n"
    "#ifdef USER_DEFAULT_COLORS_DEFINED\n"
    "  #import \"user_default_colors.h\"\n"
    "#endif\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark Nibs\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//          N I B S   A N D   T H E I R   M A I N   C L A S S E S                                                      *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 25)).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 25)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray array] ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "NSArray * nibsAndClasses (void) {\n"
      "  return [NSArray arrayWithObjects:\n" ;
    GALGAS_uint index_1326_ (0) ;
    if (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 33)).isValid ()) {
      cEnumerator_stringlist enumerator_1326 (in_GUI_5F_CONTEXT.getter_mNibAndClassList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 33)), kENUMERATION_UP) ;
      while (enumerator_1326.hasCurrentObject ()) {
        result << "    [NSArray arrayWithObjects:@\"" ;
        result << enumerator_1326.current_mValue (HERE).stringValue () ;
        result << "\", [" ;
        result << enumerator_1326.current_mValue (HERE).stringValue () ;
        result << " class], nil],\n" ;
        index_1326_.increment () ;
        enumerator_1326.gotoNextObject () ;
      }
    }
    result << "    nil\n"
      "  ] ;\n"
      "}\n" ;
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#pragma mark Command Line Options\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//                       Command Line Options                                                                          *\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_2251_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 53)).isValid ()) {
    cEnumerator_stringlist enumerator_2251 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 53)), kENUMERATION_UP) ;
    while (enumerator_2251.hasCurrentObject ()) {
      result << "#import \"option-" ;
      result << enumerator_2251.current_mValue (HERE).getter_fileNameRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 54)).stringValue () ;
      result << "-cocoa.m\"\n" ;
      index_2251_.increment () ;
      enumerator_2251.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterOptions (NSMutableArray * ioBoolOptionArray,\n"
    "                   NSMutableArray * ioUIntOptionArray,\n"
    "                   NSMutableArray * ioStringOptionArray,\n"
    "                   NSMutableArray * ioStringListOptionArray) {\n" ;
  GALGAS_uint index_2733_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 64)).isValid ()) {
    cEnumerator_stringlist enumerator_2733 (in_GUI_5F_CONTEXT.getter_mImportedOptionComponentList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 64)), kENUMERATION_UP) ;
    while (enumerator_2733.hasCurrentObject ()) {
      result << "  enterOptionsFor_" ;
      result << enumerator_2733.current_mValue (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 65)).stringValue () ;
      result << " (ioBoolOptionArray, ioUIntOptionArray, ioStringOptionArray, ioStringListOptionArray) ;\n" ;
      index_2733_.increment () ;
      enumerator_2733.gotoNextObject () ;
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
  GALGAS_uint index_3587_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 90)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_3587 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 90)), kENUMERATION_UP) ;
    while (enumerator_3587.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "#pragma mark Lexique " ;
      result << enumerator_3587.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//                                                                                                                     *\n"
        "//                     P O P    U P    L I S T    D A T A                                                              *\n"
        "//                                                                                                                     *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n" ;
      GALGAS_uint index_4426_ (0) ;
      if (enumerator_3587.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_4426 (enumerator_3587.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_4426.hasCurrentObject ()) {
          result << "static const UInt16 gPopUpData_" ;
          result << enumerator_3587.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).stringValue () ;
          result << "_" ;
          result << enumerator_4426.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).stringValue () ;
          result << " [" ;
          result << GALGAS_uint ((uint32_t) 2U).multiply_operation (enumerator_4426.current_mTerminalList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).add_operation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 99)).stringValue () ;
          result << "] = {\n"
            "  " ;
          result << enumerator_4426.current_mLeadingCharacterStrippedCount (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 100)).stringValue () ;
          result << ", // Leading character count to strip\n" ;
          GALGAS_uint index_4724_ (0) ;
          if (enumerator_4426.current_mTerminalList (HERE).isValid ()) {
            cEnumerator_terminalLabelListAST enumerator_4724 (enumerator_4426.current_mTerminalList (HERE), kENUMERATION_UP) ;
            while (enumerator_4724.hasCurrentObject ()) {
              result << "  " ;
              result << enumerator_3587.current_mLexiqueClassName (HERE).stringValue () ;
              result << "_1_" ;
              result << enumerator_4724.current_mTerminal (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 102)).stringValue () ;
              result << ", " ;
              result << enumerator_4724.current_mDisplayFlags (HERE).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 102)).stringValue () ;
              result << ",\n" ;
              index_4724_.increment () ;
              enumerator_4724.gotoNextObject () ;
            }
          }
          result << "  0\n"
            "} ;\n"
            "\n" ;
          index_4426_.increment () ;
          enumerator_4426.gotoNextObject () ;
        }
      }
      result << "static const UInt16 * gPopUpData_" ;
      result << enumerator_3587.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).stringValue () ;
      result << " [" ;
      result << enumerator_3587.current_mLabels (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 107)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_5024_ (0) ;
      if (enumerator_3587.current_mLabels (HERE).isValid ()) {
        cEnumerator_guiLabelListAST enumerator_5024 (enumerator_3587.current_mLabels (HERE), kENUMERATION_UP) ;
        while (enumerator_5024.hasCurrentObject ()) {
          result << "  gPopUpData_" ;
          result << enumerator_3587.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 109)).stringValue () ;
          result << "_" ;
          result << enumerator_5024.current_mLocation (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 109)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 109)).stringValue () ;
          result << ",\n" ;
          index_5024_.increment () ;
          enumerator_5024.gotoNextObject () ;
        }
      }
      result << "  NULL\n"
        "} ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//                                                                                                                     *\n"
        "//                            Lexique interface                                                                        *\n"
        "//                                                                                                                     *\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "@interface OC_Tokenizer_" ;
      result << enumerator_3587.current_mLexiqueClassName (HERE).stringValue () ;
      result << " : OC_Lexique_" ;
      result << enumerator_3587.current_mLexiqueClassName (HERE).stringValue () ;
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
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "@implementation OC_Tokenizer_" ;
      result << enumerator_3587.current_mLexiqueClassName (HERE).stringValue () ;
      result << "\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) blockComment {\n"
        "  return @" ;
      result << enumerator_3587.current_mBlockComment (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 131)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (const UInt16 * *) popupListData {\n"
        "  return gPopUpData_" ;
      result << enumerator_3587.current_mLexiqueClassName (HERE).getter_identifierRepresentation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 135)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSUInteger) textMacroCount {\n"
        "  return " ;
      result << enumerator_3587.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 139)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 139)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) tabItemTitle {\n"
        "  return @" ;
      result << enumerator_3587.current_mTitle (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 143)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) textMacroTitleAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroTitle [" ;
      result << enumerator_3587.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 147)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 147)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 147)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_7667_ (0) ;
      if (enumerator_3587.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_7667 (enumerator_3587.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_7667.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_7667.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 149)).stringValue () ;
          result << ",\n" ;
          index_7667_.increment () ;
          enumerator_7667.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroTitle [inIndex] ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "- (NSString *) textMacroContentAtIndex: (const UInt32) inIndex {\n"
        "  static NSString * kTextMacroContent [" ;
      result << enumerator_3587.current_mTextMacroList (HERE).getter_length (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).getter_string (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 157)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_8116_ (0) ;
      if (enumerator_3587.current_mTextMacroList (HERE).isValid ()) {
        cEnumerator_textMacroList enumerator_8116 (enumerator_3587.current_mTextMacroList (HERE), kENUMERATION_UP) ;
        while (enumerator_8116.hasCurrentObject ()) {
          result << "    @" ;
          result << enumerator_8116.current_mContents (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 159)).stringValue () ;
          result << ",\n" ;
          index_8116_.increment () ;
          enumerator_8116.gotoNextObject () ;
        }
      }
      result << "    NULL\n"
        "  } ;\n"
        "  return kTextMacroContent [inIndex] ;\n"
        "}\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "@end\n"
        "\n" ;
      index_3587_.increment () ;
      enumerator_3587.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "OC_Lexique * tokenizerForExtension (const NSString * inExtension) {\n"
    "  OC_Lexique * result = nil ;\n" ;
  GALGAS_uint index_8683_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 174)).isValid ()) {
    cEnumerator_extensionMap enumerator_8683 (in_GUI_5F_CONTEXT.getter_mExtensionMap (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 174)), kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_8683 = enumerator_8683.hasCurrentObject () ;
    if (nonEmpty_enumerator_8683) {
      result << "  if" ;
    }
    while (enumerator_8683.hasCurrentObject ()) {
      result << " ([inExtension isEqualToString:@" ;
      result << enumerator_8683.current_lkey (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 176)).stringValue () ;
      result << "]) {\n"
        "    result = [OC_Tokenizer_" ;
      result << enumerator_8683.current_mLexiqueName (HERE).stringValue () ;
      result << " new] ;\n" ;
      if (enumerator_8683.hasNextObject ()) {
        result << "  }else if" ;
      }
      index_8683_.increment () ;
      enumerator_8683.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_8683) {
      result << "  }\n" ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "NSArray * tokenizers (void) {\n"
    "  return [NSArray arrayWithObjects:\n" ;
  GALGAS_uint index_9109_ (0) ;
  if (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 188)).isValid ()) {
    cEnumerator_importedLexiqueList enumerator_9109 (in_GUI_5F_CONTEXT.getter_mWithLexiqueList (SOURCE_FILE ("gui-implementation.m.galgasTemplate", 188)), kENUMERATION_UP) ;
    while (enumerator_9109.hasCurrentObject ()) {
      result << "    [OC_Tokenizer_" ;
      result << enumerator_9109.current_mLexiqueClassName (HERE).stringValue () ;
      result << " new],\n" ;
      index_9109_.increment () ;
      enumerator_9109.gotoNextObject () ;
    }
  }
  result << "    nil\n"
    "  ] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@arrayDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                                extensionMethod_arrayDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_arrayDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@arrayDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_arrayDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mDimension.getter_uint (SOURCE_FILE ("type-array.galgas", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mDimension.getter_location (SOURCE_FILE ("type-array.galgas", 62)), GALGAS_string ("the dimension of an array should be > 0"), fixItArray1  COMMA_SOURCE_FILE ("type-array.galgas", 62)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                               extensionMethod_arrayDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_enterInSemanticContext (defineExtensionMethod_arrayDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@arrayDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                         extensionMethod_arrayDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayDeclarationAST_semanticAnalysis (defineExtensionMethod_arrayDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@arrayTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                              extensionMethod_arrayTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_arrayTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@arrayTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_arrayTypeForGeneration.mSlotID,
                                                     extensionMethod_arrayTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_arrayTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_arrayTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@boolsetDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                                extensionMethod_boolsetDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_boolsetDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension getter '@boolsetDeclarationAST keyRepresentation'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_boolsetDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                          extensionGetter_boolsetDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_boolsetDeclarationAST_keyRepresentation (defineExtensionGetter_boolsetDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Once function 'forbiddenKeysForBoolset'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_forbiddenKeysForBoolset = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForBoolset ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_forbiddenKeysForBoolset (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForBoolset) {
    gOnceFunctionResult_forbiddenKeysForBoolset = onceFunction_forbiddenKeysForBoolset (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForBoolset = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForBoolset ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_forbiddenKeysForBoolset (void) {
  gOnceFunctionResult_forbiddenKeysForBoolset.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForBoolset (NULL,
                                                                     releaseOnceFunctionResult_forbiddenKeysForBoolset) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForBoolset [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForBoolset (C_Compiler * inCompiler,
                                                                        const cObjectArray & /* inEffectiveParameterArray */,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForBoolset (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForBoolset ("forbiddenKeysForBoolset",
                                                                         functionWithGenericHeader_forbiddenKeysForBoolset,
                                                                         & kTypeDescriptor_GALGAS_stringset,
                                                                         0,
                                                                         functionArgs_forbiddenKeysForBoolset) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@boolsetDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    const enumGalgasBool test_0 = function_forbiddenKeysForBoolset (inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).getter_hasKey (enumerator_3903.current_mValue (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-boolset.galgas", 84)).boolEnum () ;
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
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = var_slotNameSet_3868.getter_hasKey (enumerator_3903.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 91)) COMMA_SOURCE_FILE ("type-boolset.galgas", 91)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_3903.current_mValue (HERE).getter_location (SOURCE_FILE ("type-boolset.galgas", 92)), GALGAS_string ("duplicated slot name"), fixItArray3  COMMA_SOURCE_FILE ("type-boolset.galgas", 92)) ;
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
    const enumGalgasBool test_4 = var_constructorMap_4573.getter_hasKey (enumerator_5118.current_mValue (HERE).getter_string (SOURCE_FILE ("type-boolset.galgas", 118)) COMMA_SOURCE_FILE ("type-boolset.galgas", 118)).operator_not (SOURCE_FILE ("type-boolset.galgas", 118)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      var_constructorMap_4573.setter_insertKey (enumerator_5118.current_mValue (HERE), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-boolset.galgas", 119)), GALGAS_bool (false), var_boolsetTypeIndex_4421, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 119)) ;
      }
      {
      routine_enterBaseFinalGetterWithoutArgument (var_getterMap_4539, ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_5118.current_mValue (HERE).getter_string (HERE), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 120)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                               extensionMethod_boolsetDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolsetDeclarationAST_enterInSemanticContext (defineExtensionMethod_boolsetDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@boolsetDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 192)).objectCompare (GALGAS_uint ((uint32_t) 64U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_s_7463 = object->mProperty_mFlagList.getter_mValueAtIndex (GALGAS_uint ((uint32_t) 64U), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 193)) ;
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_s_7463.getter_location (SOURCE_FILE ("type-boolset.galgas", 194)), GALGAS_string ("max flags count is 64 (here: ").add_operation (object->mProperty_mFlagList.getter_length (SOURCE_FILE ("type-boolset.galgas", 194)).getter_string (SOURCE_FILE ("type-boolset.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 194)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 194)), fixItArray1  COMMA_SOURCE_FILE ("type-boolset.galgas", 194)) ;
  }
  GALGAS_lstring var_boolsetNameForUsefulness_7632 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mBoolsetTypeName, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 197)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_boolsetNameForUsefulness_7632, var_boolsetNameForUsefulness_7632, inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 198)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("boolset ").add_operation (object->mProperty_mBoolsetTypeName.getter_string (SOURCE_FILE ("type-boolset.galgas", 200)), inCompiler COMMA_SOURCE_FILE ("type-boolset.galgas", 200)), GALGAS_boolsetTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mBoolsetTypeName, inCompiler  COMMA_SOURCE_FILE ("type-boolset.galgas", 202)), object->mProperty_mFlagList  COMMA_SOURCE_FILE ("type-boolset.galgas", 201))  COMMA_SOURCE_FILE ("type-boolset.galgas", 199)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_boolsetDeclarationAST.mSlotID,
                                         extensionMethod_boolsetDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolsetDeclarationAST_semanticAnalysis (defineExtensionMethod_boolsetDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Filewrapper 'structGenerationTemplate'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'structGenerationTemplate boolsetTypeHeader1'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'structGenerationTemplate boolsetTypeSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@boolsetTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                              extensionMethod_boolsetTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_boolsetTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@boolsetTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_boolsetTypeForGeneration.mSlotID,
                                                     extensionMethod_boolsetTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_boolsetTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_boolsetTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@classDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_3399 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 100)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 100)), object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 100))  COMMA_SOURCE_FILE ("type-class.galgas", 100)) ;
  {
  const GALGAS_classDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_3399, temp_0, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 101)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3399, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 103)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 103)) COMMA_SOURCE_FILE ("type-class.galgas", 103)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_3708 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_3708.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_3399, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3708.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 106)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 106)), object->mProperty_mSuperClassName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 106)) COMMA_SOURCE_FILE ("type-class.galgas", 106)) ;
    }
    enumerator_3708.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                                extensionMethod_classDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_classDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@classDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                        const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                        const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classDeclarationAST * object = (const cPtr_classDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_classDeclarationAST) ;
  GALGAS_getterMap var_getterMap_4578 ;
  GALGAS_setterMap var_setterMap_4601 ;
  GALGAS_instanceMethodMap var_instanceMethodMap_4640 ;
  GALGAS_typedPropertyList var_inheritedTypedAttributeList_4689 ;
  GALGAS_propertyMap var_attributeMap_4717 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 124)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_superClassIndex_4786 ;
  GALGAS_bool var_generateHeaderInSeparateFile_4823 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 128)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_superClassIndex_4786 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 129)) ;
    {
    routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_4578, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 130)) ;
    }
    var_setterMap_4601 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 131)) ;
    var_instanceMethodMap_4640 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 132)) ;
    var_inheritedTypedAttributeList_4689 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 133)) ;
    var_attributeMap_4717 = GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 134)) ;
    var_generateHeaderInSeparateFile_4823 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_5236 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
    while (enumerator_5236.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_5236.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 137)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_generateHeaderInSeparateFile_4823 = GALGAS_bool (true) ;
      }
      enumerator_5236.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_0) {
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mSuperClassName, var_superClassIndex_4786 COMMA_SOURCE_FILE ("type-class.galgas", 142)) ;
    }
    GALGAS_typeKindEnum var_typeKindEnum_5499 ;
    GALGAS_getterMap var_inheritedGetterMap_5533 ;
    GALGAS_setterMap var_inheritedSetterMap_5567 ;
    GALGAS_instanceMethodMap var_inheritedMethodMap_5609 ;
    GALGAS_bool joker_5682_3 ; // Joker input parameter
    GALGAS_bool joker_5682_2 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5682_1 ; // Joker input parameter
    GALGAS_bool joker_5712 ; // Joker input parameter
    GALGAS_typedPropertyList joker_5776_2 ; // Joker input parameter
    GALGAS_constructorMap joker_5776_1 ; // Joker input parameter
    GALGAS_classMethodMap joker_5864_8 ; // Joker input parameter
    GALGAS_enumerationDescriptorList joker_5864_7 ; // Joker input parameter
    GALGAS_operators joker_5864_6 ; // Joker input parameter
    GALGAS_functionSignature joker_5864_5 ; // Joker input parameter
    GALGAS_constantIndexMap joker_5864_4 ; // Joker input parameter
    GALGAS_enumConstantList joker_5864_3 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5864_2 ; // Joker input parameter
    GALGAS_mapSearchMethodListAST joker_5864_1 ; // Joker input parameter
    GALGAS_unifiedTypeMap_2D_proxy joker_5910_4 ; // Joker input parameter
    GALGAS_string joker_5910_3 ; // Joker input parameter
    GALGAS_string joker_5910_2 ; // Joker input parameter
    GALGAS_headerKind joker_5910_1 ; // Joker input parameter
    ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mSuperClassName, joker_5682_3, joker_5682_2, joker_5682_1, var_typeKindEnum_5499, joker_5712, var_inheritedTypedAttributeList_4689, var_attributeMap_4717, joker_5776_2, joker_5776_1, var_inheritedGetterMap_5533, var_inheritedSetterMap_5567, var_inheritedMethodMap_5609, joker_5864_8, joker_5864_7, joker_5864_6, joker_5864_5, joker_5864_4, joker_5864_3, joker_5864_2, joker_5864_1, var_generateHeaderInSeparateFile_4823, joker_5910_4, joker_5910_3, joker_5910_2, joker_5910_1, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 147)) ;
    const enumGalgasBool test_2 = var_typeKindEnum_5499.getter_isClassType (SOURCE_FILE ("type-class.galgas", 163)).operator_not (SOURCE_FILE ("type-class.galgas", 163)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mSuperClassName.getter_location (SOURCE_FILE ("type-class.galgas", 164)), GALGAS_string ("the @").add_operation (object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 164)).add_operation (GALGAS_string (" should be a class type"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 164)), fixItArray3  COMMA_SOURCE_FILE ("type-class.galgas", 164)) ;
    }
    var_setterMap_4601 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 167)) ;
    cEnumerator_setterMap enumerator_6166 (var_inheritedSetterMap_5567, kENUMERATION_UP) ;
    while (enumerator_6166.hasCurrentObject ()) {
      {
      var_setterMap_4601.setter_insertKey (enumerator_6166.current_lkey (HERE), enumerator_6166.current_mKind (HERE), enumerator_6166.current_mParameterList (HERE), enumerator_6166.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 174)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 169)) ;
      }
      enumerator_6166.gotoNextObject () ;
    }
    var_getterMap_4578 = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 179)) ;
    cEnumerator_getterMap enumerator_6475 (var_inheritedGetterMap_5533, kENUMERATION_UP) ;
    while (enumerator_6475.hasCurrentObject ()) {
      {
      var_getterMap_4578.setter_insertKey (enumerator_6475.current_lkey (HERE), enumerator_6475.current_mKind (HERE), enumerator_6475.current_mArgumentTypeList (HERE), enumerator_6475.current_mDeclarationLocation (HERE), enumerator_6475.current_mHasCompilerArgument (HERE), enumerator_6475.current_mReturnedType (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 188)), enumerator_6475.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 181)) ;
      }
      enumerator_6475.gotoNextObject () ;
    }
    var_instanceMethodMap_4640 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 193)) ;
    cEnumerator_instanceMethodMap enumerator_6848 (var_inheritedMethodMap_5609, kENUMERATION_UP) ;
    while (enumerator_6848.hasCurrentObject ()) {
      {
      var_instanceMethodMap_4640.setter_insertKey (enumerator_6848.current_lkey (HERE), enumerator_6848.current_mKind (HERE), enumerator_6848.current_mParameterList (HERE), enumerator_6848.current_mDeclarationLocation (HERE), enumerator_6848.current_mHasCompilerArgument (HERE), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-class.galgas", 201)), enumerator_6848.current_mErrorMessage (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 195)) ;
      }
      enumerator_6848.gotoNextObject () ;
    }
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_7191 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 207)) ;
  cEnumerator_typedPropertyList enumerator_7236 (var_inheritedTypedAttributeList_4689, kENUMERATION_UP) ;
  while (enumerator_7236.hasCurrentObject ()) {
    var_constructorAttributeTypeList_7191.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 209)), enumerator_7236.current_mPropertyTypeProxy (HERE), enumerator_7236.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 209)) ;
    enumerator_7236.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7364 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_7364.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_7476 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_7364.current_mPropertyTypeName (HERE), var_attributeTypeIndex_7476 COMMA_SOURCE_FILE ("type-class.galgas", 212)) ;
    }
    var_constructorAttributeTypeList_7191.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 213)), var_attributeTypeIndex_7476, enumerator_7364.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 213)) ;
    {
    var_attributeMap_4717.setter_insertKey (enumerator_7364.current_mPropertyName (HERE), var_attributeTypeIndex_7476, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 214)) ;
    }
    const enumGalgasBool test_4 = var_getterMap_4578.getter_hasKey (enumerator_7364.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 218)) COMMA_SOURCE_FILE ("type-class.galgas", 218)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (enumerator_7364.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 219)), GALGAS_string ("'").add_operation (enumerator_7364.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 219)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 219)).add_operation (GALGAS_string ("' is the name of a prefefined or a user defined getter"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 219)), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 219)) ;
    }
    enumerator_7364.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_classIndex_7985 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mClassTypeName, var_classIndex_7985 COMMA_SOURCE_FILE ("type-class.galgas", 223)) ;
  }
  GALGAS_constructorMap var_constructorMap_8040 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 229)) ;
  const enumGalgasBool test_6 = object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 230)).boolEnum () ;
  if (kBoolTrue == test_6) {
    {
    var_constructorMap_8040.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("new"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 232))  COMMA_SOURCE_FILE ("type-class.galgas", 232)), var_constructorAttributeTypeList_7191, GALGAS_bool (false), var_classIndex_7985, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 231)) ;
    }
  }
  GALGAS_typedPropertyList var_currentClassTypedAttributeList_8305 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 239)) ;
  GALGAS_typedPropertyList var_allTypedAttributeList_8353 = var_inheritedTypedAttributeList_4689 ;
  cEnumerator_propertyInCollectionListAST enumerator_8410 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_8410.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_8522 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_8410.current_mPropertyTypeName (HERE), var_attributeTypeIndex_8522 COMMA_SOURCE_FILE ("type-class.galgas", 242)) ;
    }
    GALGAS_bool var_hasSetter_8543 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_8571 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_8605 (enumerator_8410.current_mFeatureList (HERE), kENUMERATION_UP) ;
    while (enumerator_8605.hasCurrentObject ()) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_8605.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 246)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_hasSetter_8543 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_7) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_8605.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 248)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_8) {
          var_hasGetter_8571 = GALGAS_bool (false) ;
        }
      }
      enumerator_8605.gotoNextObject () ;
    }
    var_currentClassTypedAttributeList_8305.addAssign_operation (var_attributeTypeIndex_8522, enumerator_8410.current_mPropertyName (HERE), var_hasSetter_8543, var_hasGetter_8571  COMMA_SOURCE_FILE ("type-class.galgas", 252)) ;
    var_allTypedAttributeList_8353.addAssign_operation (var_attributeTypeIndex_8522, enumerator_8410.current_mPropertyName (HERE), var_hasSetter_8543, var_hasGetter_8571  COMMA_SOURCE_FILE ("type-class.galgas", 253)) ;
    const enumGalgasBool test_9 = var_hasGetter_8571.boolEnum () ;
    if (kBoolTrue == test_9) {
      {
      var_getterMap_4578.setter_insertKey (enumerator_8410.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 257)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 258)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 259)), GALGAS_bool (false), var_attributeTypeIndex_8522, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-class.galgas", 262)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 255)) ;
      }
    }
    enumerator_8410.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_9367 (var_currentClassTypedAttributeList_8305, kENUMERATION_UP) ;
  while (enumerator_9367.hasCurrentObject ()) {
    const enumGalgasBool test_10 = enumerator_9367.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_10) {
      {
      GALGAS_formalParameterSignature temp_11 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 273)) ;
      temp_11.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-class.galgas", 273)), enumerator_9367.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-class.galgas", 273)), enumerator_9367.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-class.galgas", 273)) ;
      var_setterMap_4601.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_9367.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 271)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-class.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 271)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 271))  COMMA_SOURCE_FILE ("type-class.galgas", 271)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-class.galgas", 272)), temp_11, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("type-class.galgas", 275)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 270)) ;
      }
    }
    enumerator_9367.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mClassTypeName, var_getterMap_4578, var_setterMap_4601, var_instanceMethodMap_4640, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 281)) ;
  }
  GALGAS_string var_defaultConstructorName_10153 ;
  const enumGalgasBool test_12 = var_superClassIndex_4786.getter_isNull (SOURCE_FILE ("type-class.galgas", 293)).boolEnum () ;
  if (kBoolTrue == test_12) {
    var_defaultConstructorName_10153 = GALGAS_string ("default") ;
  }else if (kBoolFalse == test_12) {
    var_defaultConstructorName_10153 = var_superClassIndex_4786.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 296)) ;
  }
  cEnumerator_typedPropertyList enumerator_10354 (var_currentClassTypedAttributeList_8305, kENUMERATION_UP) ;
  bool bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10153.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
  if (enumerator_10354.hasCurrentObject () && bool_13) {
    while (enumerator_10354.hasCurrentObject () && bool_13) {
      const enumGalgasBool test_14 = GALGAS_bool (kIsEqual, enumerator_10354.current_mPropertyTypeProxy (HERE).getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 299)).objectCompare (GALGAS_string::makeEmptyString ())).operator_or (enumerator_10354.current_mPropertyTypeProxy (HERE).getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 299)).operator_not (SOURCE_FILE ("type-class.galgas", 299)) COMMA_SOURCE_FILE ("type-class.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_14) {
        var_defaultConstructorName_10153 = GALGAS_string::makeEmptyString () ;
      }
      enumerator_10354.gotoNextObject () ;
      if (enumerator_10354.hasCurrentObject ()) {
        bool_13 = GALGAS_bool (kIsNotEqual, var_defaultConstructorName_10153.objectCompare (GALGAS_string::makeEmptyString ())).isValidAndTrue () ;
      }
    }
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mClassTypeName, object->mProperty_mIsPredefined, object->mProperty_mIsAbstract.operator_not (SOURCE_FILE ("type-class.galgas", 307)), var_superClassIndex_4786, GALGAS_typeKindEnum::constructor_classType (object->mProperty_mIsShared  COMMA_SOURCE_FILE ("type-class.galgas", 309)), GALGAS_bool (false), var_allTypedAttributeList_8353, var_attributeMap_4717, var_currentClassTypedAttributeList_8305, var_constructorMap_8040, var_getterMap_4578, var_setterMap_4601, var_instanceMethodMap_4640, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 318)), GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 319)), GALGAS_operators::constructor_none (SOURCE_FILE ("type-class.galgas", 320)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 321)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 322)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 323)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 324)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 325)), var_generateHeaderInSeparateFile_4823, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 327)), var_defaultConstructorName_10153, GALGAS_string ("class-").add_operation (object->mProperty_mClassTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-class.galgas", 329)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 329)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-class.galgas", 330)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 304)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                               extensionMethod_classDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_enterInSemanticContext (defineExtensionMethod_classDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@classDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_classTypeNameForUsefulness_12218 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mClassTypeName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 347)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_classTypeNameForUsefulness_12218, var_classTypeNameForUsefulness_12218, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 348)) ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mSuperClassName.getter_string (SOURCE_FILE ("type-class.galgas", 349)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_lstring var_superClassNameForUsefulness_12438 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mSuperClassName, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 350)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12218, var_superClassNameForUsefulness_12438 COMMA_SOURCE_FILE ("type-class.galgas", 351)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_12646 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mClassTypeName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 354)) ;
  GALGAS_unifiedTypeMap_2D_proxy temp_1 ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mSuperClassName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 357)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mSuperClassName, inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 358)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_superClassProxy_12770 = temp_1 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_superClassProxy_12770.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 363)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_bool var_superClassIsShared_13203 ;
    var_superClassProxy_12770.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 364)).method_classType (var_superClassIsShared_13203, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 364)) ;
    const enumGalgasBool test_4 = var_superClassIsShared_13203.operator_and (object->mProperty_mIsShared.operator_not (SOURCE_FILE ("type-class.galgas", 365)) COMMA_SOURCE_FILE ("type-class.galgas", 365)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 366)), GALGAS_string ("this class should be declared with 'shared' qualifier, as its super class"), fixItArray5  COMMA_SOURCE_FILE ("type-class.galgas", 366)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = var_superClassIsShared_13203.operator_not (SOURCE_FILE ("type-class.galgas", 367)).operator_and (object->mProperty_mIsShared COMMA_SOURCE_FILE ("type-class.galgas", 367)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mClassTypeName.getter_location (SOURCE_FILE ("type-class.galgas", 368)), GALGAS_string ("this class should be declared with no 'shared' qualifier, as its super class"), fixItArray7  COMMA_SOURCE_FILE ("type-class.galgas", 368)) ;
      }
    }
  }
  GALGAS_typedPropertyList var_allAttributeList_13734 ;
  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, var_superClassProxy_12770.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-class.galgas", 375)))).boolEnum () ;
  if (kBoolTrue == test_8) {
    var_allAttributeList_13734 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 376)) ;
    GALGAS_bool var_generatedInSeparateFileFeature_13862 = GALGAS_bool (false) ;
    const enumGalgasBool test_9 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 378)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_9) {
      cEnumerator_lstringlist enumerator_13947 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
      while (enumerator_13947.hasCurrentObject ()) {
        const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, enumerator_13947.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 380)).objectCompare (GALGAS_string ("generatedInSeparateFile"))).boolEnum () ;
        if (kBoolTrue == test_10) {
          const enumGalgasBool test_11 = var_generatedInSeparateFileFeature_13862.boolEnum () ;
          if (kBoolTrue == test_11) {
            TC_Array <C_FixItDescription> fixItArray12 ;
            inCompiler->emitSemanticError (enumerator_13947.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 382)), GALGAS_string ("the 'generatedInSeparateFile' is already named"), fixItArray12  COMMA_SOURCE_FILE ("type-class.galgas", 382)) ;
          }
          var_generatedInSeparateFileFeature_13862 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_10) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_13947.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 386)), GALGAS_string ("only the 'generatedInSeparateFile' feature is allowed here"), fixItArray13  COMMA_SOURCE_FILE ("type-class.galgas", 386)) ;
        }
        enumerator_13947.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_8) {
    var_allAttributeList_13734 = var_superClassProxy_12770.getter_mAllTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 391)) ;
    const enumGalgasBool test_14 = GALGAS_bool (kIsStrictSup, object->mProperty_mClassFeatureList.getter_length (SOURCE_FILE ("type-class.galgas", 392)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_14) {
      cEnumerator_lstringlist enumerator_14471 (object->mProperty_mClassFeatureList, kENUMERATION_UP) ;
      while (enumerator_14471.hasCurrentObject ()) {
        TC_Array <C_FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_14471.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 394)), GALGAS_string ("a class that has a super class does not accept any feature"), fixItArray15  COMMA_SOURCE_FILE ("type-class.galgas", 394)) ;
        enumerator_14471.gotoNextObject () ;
      }
    }
  }
  GALGAS_typedPropertyList var_typedAttributeList_14645 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-class.galgas", 399)) ;
  GALGAS_propertyIndexMap var_attributeMap_14683 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-class.galgas", 400)) ;
  cEnumerator_propertyInCollectionListAST enumerator_14715 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_14715.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_14756 = function_typeNameForUsefulEntitiesGraph (enumerator_14715.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 402)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_classTypeNameForUsefulness_12218, var_propertyTypeNameForUsefulness_14756 COMMA_SOURCE_FILE ("type-class.galgas", 403)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_14917 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_14715.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 404)) ;
    GALGAS_bool var_hasSetter_15020 = GALGAS_bool (false) ;
    GALGAS_bool var_hasGetter_15048 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_15082 (enumerator_14715.current_mFeatureList (HERE), kENUMERATION_UP) ;
    while (enumerator_15082.hasCurrentObject ()) {
      const enumGalgasBool test_16 = GALGAS_bool (kIsEqual, enumerator_15082.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 408)).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
      if (kBoolTrue == test_16) {
        const enumGalgasBool test_17 = var_hasSetter_15020.boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <C_FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (enumerator_15082.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 410)), GALGAS_string ("the 'setter' feature is already named"), fixItArray18  COMMA_SOURCE_FILE ("type-class.galgas", 410)) ;
        }
        var_hasSetter_15020 = GALGAS_bool (true) ;
      }else if (kBoolFalse == test_16) {
        const enumGalgasBool test_19 = GALGAS_bool (kIsEqual, enumerator_15082.current_mValue (HERE).getter_string (SOURCE_FILE ("type-class.galgas", 413)).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const enumGalgasBool test_20 = var_hasGetter_15048.operator_not (SOURCE_FILE ("type-class.galgas", 414)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <C_FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticError (enumerator_15082.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 415)), GALGAS_string ("the 'nogetter' feature is already named"), fixItArray21  COMMA_SOURCE_FILE ("type-class.galgas", 415)) ;
          }
          var_hasGetter_15048 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_19) {
          TC_Array <C_FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (enumerator_15082.current_mValue (HERE).getter_location (SOURCE_FILE ("type-class.galgas", 419)), GALGAS_string ("only the 'setter' or 'nogetter' are allowed here"), fixItArray22  COMMA_SOURCE_FILE ("type-class.galgas", 419)) ;
        }
      }
      enumerator_15082.gotoNextObject () ;
    }
    var_typedAttributeList_14645.addAssign_operation (var_t_14917, enumerator_14715.current_mPropertyName (HERE), var_hasSetter_15020, var_hasGetter_15048  COMMA_SOURCE_FILE ("type-class.galgas", 422)) ;
    var_allAttributeList_13734.addAssign_operation (var_t_14917, enumerator_14715.current_mPropertyName (HERE), var_hasSetter_15020, var_hasGetter_15048  COMMA_SOURCE_FILE ("type-class.galgas", 427)) ;
    {
    var_attributeMap_14683.setter_insertKey (enumerator_14715.current_mPropertyName (HERE), var_t_14917, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 432)) ;
    }
    enumerator_14715.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("class ").add_operation (object->mProperty_mClassTypeName.getter_string (SOURCE_FILE ("type-class.galgas", 436)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 436)), GALGAS_classTypeForGeneration::constructor_new (var_selfType_12646, object->mProperty_mIsAbstract, object->mProperty_mIsShared, var_superClassProxy_12770, var_allAttributeList_13734, var_typedAttributeList_14645, var_selfType_12646.getter_mGenerateHeaderInSeparateFile (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 444))  COMMA_SOURCE_FILE ("type-class.galgas", 437))  COMMA_SOURCE_FILE ("type-class.galgas", 435)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_classDeclarationAST.mSlotID,
                                         extensionMethod_classDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classDeclarationAST_semanticAnalysis (defineExtensionMethod_classDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  const enumGalgasBool test_0 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 467)).operator_not (SOURCE_FILE ("type-class.galgas", 467)).boolEnum () ;
  if (kBoolTrue == test_0) {
    extensionMethod_addHeaderFileName (object->mProperty_mSuperClass, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 468)) ;
  }
  GALGAS_string temp_1 ;
  const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 474)).boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_2) {
    temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 474)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 472)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 473)), temp_1, object->mProperty_mIsAbstract, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 476)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 471))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 479)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 480)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 481)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 482)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 483)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 484)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 485)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 486)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 487)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 488)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 489)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 490)) COMMA_SOURCE_FILE ("type-class.galgas", 478))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 478)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@classTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                          const GALGAS_string constinArgument_inOutputDirectory,
                                                                          GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                          GALGAS_string & outArgument_outHeader,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_18228 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_18228.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_18228.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 502)) ;
    enumerator_18228.gotoNextObject () ;
  }
  const enumGalgasBool test_0 = object->mProperty_mGenerateHeaderInSeparateFile.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 509)).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_2) {
      temp_1 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 509)) ;
    }
    GALGAS_string var_part_31__18335 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 507)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 508)), temp_1, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 506))) ;
    GALGAS_string temp_3 ;
    const enumGalgasBool test_4 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 517)).boolEnum () ;
    if (kBoolTrue == test_4) {
      temp_3 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_4) {
      temp_3 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 517)) ;
    }
    GALGAS_string var_part_32__18647 = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 515)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 516)), temp_3, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 514))) ;
    GALGAS_string var_headerFileName_18968 = GALGAS_string ("separateHeaderFor_").add_operation (object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 522)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 522)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 522)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inOutputDirectory.add_operation (GALGAS_string ("/../user-headers"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 524)), var_headerFileName_18968, GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), var_part_31__18335, GALGAS_string ("\n"
      "\n"), var_part_32__18647, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 523)) ;
    }
    outArgument_outHeader = GALGAS_string ("#include \"").add_operation (var_headerFileName_18968, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)).add_operation (GALGAS_string ("\"\n"
      "\n"), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 534)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string temp_5 ;
    const enumGalgasBool test_6 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 539)).boolEnum () ;
    if (kBoolTrue == test_6) {
      temp_5 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_6) {
      temp_5 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 539)) ;
    }
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 537)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 538)), temp_5, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 536))) ;
    GALGAS_string temp_7 ;
    const enumGalgasBool test_8 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 547)).boolEnum () ;
    if (kBoolTrue == test_8) {
      temp_7 = GALGAS_string::makeEmptyString () ;
    }else if (kBoolFalse == test_8) {
      temp_7 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 547)) ;
    }
    outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 545)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 546)), temp_7, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mIsAbstract COMMA_SOURCE_FILE ("type-class.galgas", 544))), inCompiler  COMMA_SOURCE_FILE ("type-class.galgas", 544)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                              extensionMethod_classTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_classTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding extension method '@classTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_classTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_classTypeForGeneration * object = (const cPtr_classTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_classTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 562)) ;
  GALGAS_string temp_0 ;
  const enumGalgasBool test_1 = object->mProperty_mSuperClass.getter_isNull (SOURCE_FILE ("type-class.galgas", 566)).boolEnum () ;
  if (kBoolTrue == test_1) {
    temp_0 = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_1) {
    temp_0 = object->mProperty_mSuperClass.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 566)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 564)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 565)), temp_0, object->mProperty_mTypedAttributeList, object->mProperty_mAllTypedAttributeList, object->mProperty_mAllTypedAttributeList.getter_subListWithRange (GALGAS_range::constructor_new (GALGAS_uint ((uint32_t) 0U), object->mProperty_mAllTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 569)).substract_operation (object->mProperty_mTypedAttributeList.getter_length (SOURCE_FILE ("type-class.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 569))  COMMA_SOURCE_FILE ("type-class.galgas", 569)), inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 569)), object->mProperty_mIsAbstract, object->mProperty_mIsShared, GALGAS_bool (kIsNotEqual, object->mProperty_mTypeProxy.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("type-class.galgas", 572)).objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("type-class.galgas", 563))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_classTypeForGeneration.mSlotID,
                                                     extensionMethod_classTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_classTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_classTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_propertyKey_3382.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_namesCurrentType_3277 = GALGAS_bool (true) ;
          }
          enumerator_3330.gotoNextObject () ;
          if (enumerator_3330.hasCurrentObject ()) {
            bool_2 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 80)).isValidAndTrue () ;
          }
        }
      }
      const enumGalgasBool test_4 = var_namesCurrentType_3277.operator_not (SOURCE_FILE ("type-enum.galgas", 86)).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_circularReference_3192 = GALGAS_bool (false) ;
      }
      enumerator_3225.gotoNextObject () ;
      if (enumerator_3225.hasCurrentObject ()) {
        bool_1 = var_circularReference_3192.isValidAndTrue () ;
      }
    }
  }
  const enumGalgasBool test_5 = var_circularReference_3192.boolEnum () ;
  if (kBoolTrue == test_5) {
    cEnumerator_enumConstantList enumerator_3732 (object->mProperty_mConstantList, kENUMERATION_UP) ;
    while (enumerator_3732.hasCurrentObject ()) {
      cEnumerator__32_lstringlist enumerator_3782 (enumerator_3732.current_mAssociatedValueDefinitionList (HERE), kENUMERATION_UP) ;
      while (enumerator_3782.hasCurrentObject ()) {
        GALGAS_lstring var_propertyKey_3809 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_3782.current_mValue_30_ (HERE).getter_string (SOURCE_FILE ("type-enum.galgas", 94)), inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 94)), enumerator_3782.current_mValue_30_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 94))  COMMA_SOURCE_FILE ("type-enum.galgas", 94)) ;
        GALGAS_bool test_6 = GALGAS_bool (kIsNotEqual, var_propertyKey_3809.getter_string (HERE).objectCompare (var_key_2958.getter_string (HERE))) ;
        if (kBoolTrue != test_6.boolEnum ()) {
          test_6 = var_circularReference_3192 ;
        }
        const enumGalgasBool test_7 = test_6.boolEnum () ;
        if (kBoolTrue == test_7) {
          {
          ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_2958, var_propertyKey_3809 COMMA_SOURCE_FILE ("type-enum.galgas", 96)) ;
          }
        }
        enumerator_3782.gotoNextObject () ;
      }
      enumerator_3732.gotoNextObject () ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                                extensionMethod_enumDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_enumDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@enumDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_5851.current_mAssociatedValueDefinitionList (HERE).getter_length (SOURCE_FILE ("type-enum.galgas", 141)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mDefaultConstantName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_unifiedTypeMapProxyList var_associatedTypeList_7432 ;
    GALGAS_uint joker_7407 ; // Joker input parameter
    var_constantMap_5088.method_searchKey (object->mProperty_mDefaultConstantName, joker_7407, var_associatedTypeList_7432, inCompiler COMMA_SOURCE_FILE ("type-enum.galgas", 186)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_associatedTypeList_7432.getter_length (SOURCE_FILE ("type-enum.galgas", 187)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_defaultConstructorName_7283 = object->mProperty_mDefaultConstantName.getter_string (HERE) ;
    }else if (kBoolFalse == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mDefaultConstantName.getter_location (SOURCE_FILE ("type-enum.galgas", 190)), GALGAS_string ("the default constant should have no associated values"), fixItArray3  COMMA_SOURCE_FILE ("type-enum.galgas", 190)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                               extensionMethod_enumDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_enterInSemanticContext (defineExtensionMethod_enumDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@enumDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
      const enumGalgasBool test_0 = var_associatedValueNameSet_9872.getter_hasKey (enumerator_9922.current_mValue_31_ (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-enum.galgas", 252)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <C_FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_9922.current_mValue_31_ (HERE).getter_location (SOURCE_FILE ("type-enum.galgas", 253)), GALGAS_string ("duplicated name"), fixItArray1  COMMA_SOURCE_FILE ("type-enum.galgas", 253)) ;
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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                         extensionMethod_enumDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumDeclarationAST_semanticAnalysis (defineExtensionMethod_enumDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'enumGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_enumGenerationTemplate_enumTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_enumConstantListForGeneration & in_CONSTANT_5F_LIST,
                                                                             const GALGAS_bool & in_HAS_5F_ASSOCIATED_5F_VALUES
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" enum"), inCompiler COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_enum.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'enumGenerationTemplate enumTypeHeader2'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'enumGenerationTemplate enumTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          "//---------------------------------------------------------------------------------------------------------------------*\n"
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
          "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@enumTypeForGeneration appendDeclaration2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                              extensionMethod_enumTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_enumTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@enumTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_enumTypeForGeneration.mSlotID,
                                                     extensionMethod_enumTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_enumTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_enumTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterDeclarationInGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                                extensionMethod_externTypeDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externTypeDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@externTypeDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                               extensionMethod_externTypeDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_enterInSemanticContext (defineExtensionMethod_externTypeDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@externTypeDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                         extensionMethod_externTypeDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationAST_semanticAnalysis (defineExtensionMethod_externTypeDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@externTypeDeclarationForGeneration appendDeclaration1'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_externTypeDeclarationForGeneration.mSlotID,
                                              extensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_externTypeDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_externTypeDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@graphDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                                extensionMethod_graphDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_graphDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@graphDeclarationAST enterInSemanticContext'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                               extensionMethod_graphDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_enterInSemanticContext (defineExtensionMethod_graphDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@graphDeclarationAST semanticAnalysis'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_associatedListTypeProxy_15553.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 444)).objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-graph.galgas", 444)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-graph.galgas", 445)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 445)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)).add_operation (GALGAS_string ("' type should be a list"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 445)), fixItArray1  COMMA_SOURCE_FILE ("type-graph.galgas", 445)) ;
  }
  GALGAS_stringset temp_2 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-graph.galgas", 448)) ;
  temp_2.addAssign_operation (GALGAS_string ("noteNode")  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  temp_2.addAssign_operation (GALGAS_string ("addArc")  COMMA_SOURCE_FILE ("type-graph.galgas", 448)) ;
  GALGAS_stringset var_reservedModifierNames_16105 = temp_2 ;
  cEnumerator_graphInsertModifierList enumerator_16164 (object->mProperty_mInsertModifierList, kENUMERATION_UP) ;
  while (enumerator_16164.hasCurrentObject ()) {
    const enumGalgasBool test_3 = var_reservedModifierNames_16105.getter_hasKey (enumerator_16164.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 450)) COMMA_SOURCE_FILE ("type-graph.galgas", 450)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_16164.current_mInsertModifierName (HERE).getter_location (SOURCE_FILE ("type-graph.galgas", 451)), GALGAS_string ("the '").add_operation (enumerator_16164.current_mInsertModifierName (HERE).getter_string (SOURCE_FILE ("type-graph.galgas", 451)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)).add_operation (GALGAS_string ("' setter name is reserved for a graph type"), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 451)), fixItArray4  COMMA_SOURCE_FILE ("type-graph.galgas", 451)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_16164.current_mInsertErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-graph.galgas", 453)) ;
    }
    enumerator_16164.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("graph ").add_operation (object->mProperty_mGraphTypeName.getter_string (SOURCE_FILE ("type-graph.galgas", 457)), inCompiler COMMA_SOURCE_FILE ("type-graph.galgas", 457)), GALGAS_graphDeclarationForGeneration::constructor_new (var_graphTypeProxy_15443, var_associatedListTypeProxy_15553, var_associatedListElementTypeProxy_15679, object->mProperty_mInsertModifierList  COMMA_SOURCE_FILE ("type-graph.galgas", 458))  COMMA_SOURCE_FILE ("type-graph.galgas", 456)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                         extensionMethod_graphDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationAST_semanticAnalysis (defineExtensionMethod_graphDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@graphDeclarationForGeneration appendDeclaration1'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                              extensionMethod_graphDeclarationForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendDeclaration_31_ (defineExtensionMethod_graphDeclarationForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding extension method '@graphDeclarationForGeneration appendSpecificImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_graphDeclarationForGeneration.mSlotID,
                                                     extensionMethod_graphDeclarationForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_graphDeclarationForGeneration_appendSpecificImplementation (defineExtensionMethod_graphDeclarationForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterDeclarationInGraph'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_2263 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 49)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 49))  COMMA_SOURCE_FILE ("type-list.galgas", 49)) ;
  {
  const GALGAS_listDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_2263, temp_0, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 50)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_2409 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_2409.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_2409.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 52)), enumerator_2409.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 52))  COMMA_SOURCE_FILE ("type-list.galgas", 52)) COMMA_SOURCE_FILE ("type-list.galgas", 52)) ;
    }
    enumerator_2409.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                                extensionMethod_listDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                       const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                       const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_typedPropertyList var_typedAttributeList_3318 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 67)) ;
  cEnumerator_propertyInCollectionListAST enumerator_3350 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_3350.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_3462 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_3350.current_mPropertyTypeName (HERE), var_attributeTypeIndex_3462 COMMA_SOURCE_FILE ("type-list.galgas", 69)) ;
    }
    GALGAS_bool var_hasGetter_3483 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_3510 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_3545 (enumerator_3350.current_mFeatureList (HERE), kENUMERATION_UP) ;
    while (enumerator_3545.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_3545.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_hasGetter_3483 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_3545.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_1) {
          var_hasSetter_3510 = GALGAS_bool (true) ;
        }
      }
      enumerator_3545.gotoNextObject () ;
    }
    var_typedAttributeList_3318.addAssign_operation (var_attributeTypeIndex_3462, enumerator_3350.current_mPropertyName (HERE), var_hasSetter_3510, var_hasGetter_3483  COMMA_SOURCE_FILE ("type-list.galgas", 79)) ;
    enumerator_3350.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_uintType_3908 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("uint"), var_uintType_3908 COMMA_SOURCE_FILE ("type-list.galgas", 82)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listTypeIndex_4028 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mListTypeName, var_listTypeIndex_4028 COMMA_SOURCE_FILE ("type-list.galgas", 84)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_4266 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 88)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 88)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 88)), var_listElementTypeIndex_4266 COMMA_SOURCE_FILE ("type-list.galgas", 86)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_4347 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 92)) ;
  GALGAS_functionSignature var_constructorAttributeTypeList_4402 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 93)) ;
  GALGAS_formalParameterSignature var_setterOutputFormalArgumentList_4466 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 94)) ;
  GALGAS_formalParameterSignature var_setterInputFormalArgumentList_4529 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 95)) ;
  cEnumerator_typedPropertyList enumerator_4565 (var_typedAttributeList_3318, kENUMERATION_UP) ;
  while (enumerator_4565.hasCurrentObject ()) {
    var_enumerationDescriptor_4347.addAssign_operation (enumerator_4565.current_mPropertyTypeProxy (HERE), enumerator_4565.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 97))  COMMA_SOURCE_FILE ("type-list.galgas", 97)) ;
    var_constructorAttributeTypeList_4402.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 98)), enumerator_4565.current_mPropertyTypeProxy (HERE), enumerator_4565.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 98)) ;
    var_setterOutputFormalArgumentList_4466.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 99)), enumerator_4565.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-list.galgas", 99)), enumerator_4565.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 99)) ;
    var_setterInputFormalArgumentList_4529.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 100)), enumerator_4565.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 100)), enumerator_4565.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 100)) ;
    enumerator_4565.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_5058 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 103)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_5058, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyList"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 108)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 104)) ;
  }
  {
  var_constructorMap_5058.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("listWithValue"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 112))  COMMA_SOURCE_FILE ("type-list.galgas", 112)), var_constructorAttributeTypeList_4402, GALGAS_bool (false), var_listTypeIndex_4028, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 111)) ;
  }
  GALGAS_getterMap var_getterMap_5533 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_5533, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 118)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5533, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 119)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_5533, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 126)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5533, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 137)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 133)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5533, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListToIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 144)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 140)) ;
  }
  {
  routine_enterBaseGetterWithArgument (var_getterMap_5533, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("subListWithRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 151)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 147)) ;
  }
  cEnumerator_typedPropertyList enumerator_6530 (var_typedAttributeList_3318, kENUMERATION_UP) ;
  while (enumerator_6530.hasCurrentObject ()) {
    const enumGalgasBool test_2 = enumerator_6530.current_mHasGetter (HERE).boolEnum () ;
    if (kBoolTrue == test_2) {
      {
      GALGAS_functionSignature temp_3 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 159)) ;
      temp_3.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 159)), var_uintType_3908, GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 159)) ;
      var_getterMap_5533.setter_insertOrReplace (GALGAS_lstring::constructor_new (enumerator_6530.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 157)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 157)), enumerator_6530.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 157))  COMMA_SOURCE_FILE ("type-list.galgas", 157)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 158)), temp_3, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 160)), GALGAS_bool (true), enumerator_6530.current_mPropertyTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 163)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 156)) ;
      }
    }
    enumerator_6530.gotoNextObject () ;
  }
  GALGAS_instanceMethodMap var_instanceMethodMap_7000 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 169)) ;
  {
  var_instanceMethodMap_7000.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("first"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 171))  COMMA_SOURCE_FILE ("type-list.galgas", 171)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 172)), var_setterOutputFormalArgumentList_4466, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 174)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 176)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 170)) ;
  }
  {
  var_instanceMethodMap_7000.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("last"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 180))  COMMA_SOURCE_FILE ("type-list.galgas", 180)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 181)), var_setterOutputFormalArgumentList_4466, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 183)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 185)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 179)) ;
  }
  GALGAS_setterMap var_setterMap_7537 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 189)) ;
  {
  var_setterMap_7537.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popFirst"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 191))  COMMA_SOURCE_FILE ("type-list.galgas", 191)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 192)), var_setterOutputFormalArgumentList_4466, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 195)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 190)) ;
  }
  {
  var_setterMap_7537.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("popLast"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 199))  COMMA_SOURCE_FILE ("type-list.galgas", 199)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 200)), var_setterOutputFormalArgumentList_4466, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 203)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 198)) ;
  }
  var_setterOutputFormalArgumentList_4466.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 206)), var_uintType_3908, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 206)), GALGAS_string ("inIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 206)) ;
  {
  var_setterMap_7537.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("removeAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 208))  COMMA_SOURCE_FILE ("type-list.galgas", 208)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 209)), var_setterOutputFormalArgumentList_4466, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 212)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 207)) ;
  }
  cEnumerator_typedPropertyList enumerator_8354 (var_typedAttributeList_3318, kENUMERATION_UP) ;
  while (enumerator_8354.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_8354.current_mHasSetter (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_formalParameterSignature var_setterFormalArgumentList_8415 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 218)) ;
      var_setterFormalArgumentList_8415.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 219)), enumerator_8354.current_mPropertyTypeProxy (HERE), GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 219)), enumerator_8354.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 219)) ;
      var_setterFormalArgumentList_8415.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 220)), var_uintType_3908, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 220)), enumerator_8354.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 220)) ;
      {
      var_setterMap_7537.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_8354.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-list.galgas", 222)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-list.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 222)).add_operation (GALGAS_string ("AtIndex"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 222)), enumerator_8354.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 222))  COMMA_SOURCE_FILE ("type-list.galgas", 222)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 223)), var_setterFormalArgumentList_8415, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 226)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 221)) ;
      }
    }
    enumerator_8354.gotoNextObject () ;
  }
  var_setterInputFormalArgumentList_4529.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-list.galgas", 232)), var_uintType_3908, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-list.galgas", 232)), GALGAS_string ("inInsertionIndex")  COMMA_SOURCE_FILE ("type-list.galgas", 232)) ;
  {
  var_setterMap_7537.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertAtIndex"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 234))  COMMA_SOURCE_FILE ("type-list.galgas", 234)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-list.galgas", 235)), var_setterInputFormalArgumentList_4529, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-list.galgas", 238)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-list.galgas", 233)) ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListTypeName, var_getterMap_5533, var_setterMap_7537, var_instanceMethodMap_7000, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 243)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-list.galgas", 258)), GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-list.galgas", 259)), GALGAS_bool (true), var_typedAttributeList_3318, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 262)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 263)), var_constructorMap_5058, var_getterMap_5533, var_setterMap_7537, var_instanceMethodMap_7000, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 268)), var_enumerationDescriptor_4347, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-list.galgas", 270)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("type-list.galgas", 270)) COMMA_SOURCE_FILE ("type-list.galgas", 270)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("type-list.galgas", 270)) COMMA_SOURCE_FILE ("type-list.galgas", 270)), var_constructorAttributeTypeList_4402, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 272)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 273)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 274)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 275)), GALGAS_bool (false), var_listElementTypeIndex_4266, GALGAS_string ("emptyList"), GALGAS_string ("list-").add_operation (object->mProperty_mListTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-list.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 279)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-list.galgas", 280)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 254)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                               extensionMethod_listDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_enterInSemanticContext (defineExtensionMethod_listDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@listDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_10884 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 289)) ;
  cEnumerator_propertyInCollectionListAST enumerator_10916 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_10916.hasCurrentObject ()) {
    var_structAttributeList_10884.addAssign_operation (enumerator_10916.current_mPropertyTypeName (HERE), enumerator_10916.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 294))  COMMA_SOURCE_FILE ("type-list.galgas", 291)) ;
    enumerator_10916.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 298)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 298)), var_structAttributeList_10884, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-list.galgas", 296))  COMMA_SOURCE_FILE ("type-list.galgas", 296)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                             extensionMethod_listDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_addAssociatedElement (defineExtensionMethod_listDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Overriding extension method '@listDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_nameForUsefulness_11993 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListTypeName, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 318)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_11993, var_nameForUsefulness_11993, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 319)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_12152 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 320)), object->mProperty_mListTypeName.getter_location (SOURCE_FILE ("type-list.galgas", 320))  COMMA_SOURCE_FILE ("type-list.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 320)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11993, var_elementTypeNameForUsefulness_12152 COMMA_SOURCE_FILE ("type-list.galgas", 321)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_12374 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 323)) ;
  GALGAS_propertyIndexMap var_attributeMap_12412 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-list.galgas", 324)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12444 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_12444.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_12485 = function_typeNameForUsefulEntitiesGraph (enumerator_12444.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 326)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_11993, var_propertyTypeNameForUsefulness_12485 COMMA_SOURCE_FILE ("type-list.galgas", 327)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_12637 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_12444.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 328)) ;
    GALGAS_bool var_hasGetter_12738 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_12763 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_12798 (enumerator_12444.current_mFeatureList (HERE), kENUMERATION_UP) ;
    while (enumerator_12798.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_12798.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("nogetter"))).boolEnum () ;
      if (kBoolTrue == test_0) {
        const enumGalgasBool test_1 = var_hasGetter_12738.operator_not (SOURCE_FILE ("type-list.galgas", 333)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          fixItArray2.appendObject (C_FixItDescription (kFixItRemove, "")) ;
          inCompiler->emitSemanticError (enumerator_12798.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 334)), GALGAS_string ("duplicate attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-list.galgas", 334)) ;
        }
        var_hasGetter_12738 = GALGAS_bool (false) ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12798.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("setter"))).boolEnum () ;
        if (kBoolTrue == test_3) {
          const enumGalgasBool test_4 = var_hasSetter_12763.boolEnum () ;
          if (kBoolTrue == test_4) {
            TC_Array <C_FixItDescription> fixItArray5 ;
            fixItArray5.appendObject (C_FixItDescription (kFixItRemove, "")) ;
            inCompiler->emitSemanticError (enumerator_12798.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 339)), GALGAS_string ("duplicate attribute"), fixItArray5  COMMA_SOURCE_FILE ("type-list.galgas", 339)) ;
          }
          var_hasSetter_12763 = GALGAS_bool (true) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray6 ;
          GALGAS_stringlist temp_7 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("type-list.galgas", 343)) ;
          temp_7.addAssign_operation (GALGAS_string ("nogetter")  COMMA_SOURCE_FILE ("type-list.galgas", 343)) ;
          temp_7.addAssign_operation (GALGAS_string ("setter")  COMMA_SOURCE_FILE ("type-list.galgas", 343)) ;
          appendFixItActions (fixItArray6, kFixItReplace, temp_7) ;
          inCompiler->emitSemanticError (enumerator_12798.current_mValue (HERE).getter_location (SOURCE_FILE ("type-list.galgas", 343)), GALGAS_string ("unknown feature"), fixItArray6  COMMA_SOURCE_FILE ("type-list.galgas", 343)) ;
        }
      }
      enumerator_12798.gotoNextObject () ;
    }
    var_typedAttributeList_12374.addAssign_operation (var_t_12637, enumerator_12444.current_mPropertyName (HERE), var_hasSetter_12763, var_hasGetter_12738  COMMA_SOURCE_FILE ("type-list.galgas", 346)) ;
    {
    var_attributeMap_12412.setter_insertKey (enumerator_12444.current_mPropertyName (HERE), var_t_12637, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 351)) ;
    }
    enumerator_12444.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_selfType_13417 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 354)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list type ").add_operation (object->mProperty_mListTypeName.getter_string (SOURCE_FILE ("type-list.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 356)), GALGAS_listTypeForGeneration::constructor_new (var_selfType_13417, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 359)), object->mProperty_mListTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-list.galgas", 359)), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 359)), var_typedAttributeList_12374  COMMA_SOURCE_FILE ("type-list.galgas", 357))  COMMA_SOURCE_FILE ("type-list.galgas", 355)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                         extensionMethod_listDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listDeclarationAST_semanticAnalysis (defineExtensionMethod_listDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'listGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'listGenerationTemplate listTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (C_Compiler * inCompiler,
                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                             const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                             const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_list.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'listGenerationTemplate listTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                         const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                         const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                         const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' list"), inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cCollectionElement {\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_2D_element mObject ;\n"
    "\n"
    "//--- Constructor\n"
    "  public : cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_823_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_823 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_823.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_823.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      result << " & in_" ;
      result << enumerator_823.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 13)).stringValue () ;
      if (enumerator_823.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_823_.increment () ;
      enumerator_823.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_1713_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1713 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1713.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_1713.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 36)).stringValue () ;
      result << " & in_" ;
      result << enumerator_1713.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 36)).stringValue () ;
      if (enumerator_1713.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_1713_.increment () ;
      enumerator_1713.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mObject (" ;
  GALGAS_uint index_1950_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1950 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1950.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_1950.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 44)).stringValue () ;
      if (enumerator_1950.hasNextObject ()) {
        result << ", " ;
      }
      index_1950_.increment () ;
      enumerator_1950.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mObject.isValid () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cCollectionElement * cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cCollectionElement * result = NULL ;\n"
    "  macroMyNew (result, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2582_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2582 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2582.hasCurrentObject ()) {
      result << "mObject.mProperty_" ;
      result << enumerator_2582.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 62)).stringValue () ;
      if (enumerator_2582.hasNextObject ()) {
        result << ", " ;
      }
      index_2582_.increment () ;
      enumerator_2582.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
  GALGAS_uint index_2980_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2980 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2980.hasCurrentObject ()) {
      result << "  ioString << \"\\n\" ;\n"
        "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
        "  ioString << " ;
      result << enumerator_2980.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 76)).stringValue () ;
      result << " \":\" ;\n"
        "  mObject.mProperty_" ;
      result << enumerator_2980.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 77)).stringValue () ;
      result << ".description (ioString, inIndentation) ;\n" ;
      index_2980_.increment () ;
      enumerator_2980.gotoNextObject () ;
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_list () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const capCollectionElementArray & inSharedArray) :\n"
    "AC_GALGAS_list (inSharedArray) {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_listWithValue (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4747_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4747 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4747.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_4747.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 111)).stringValue () ;
      result << " & inOperand" ;
      result << index_4747_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 111)).stringValue () ;
      if (enumerator_4747.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_4747_IDX.increment () ;
      enumerator_4747.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  if (" ;
  GALGAS_uint index_4979_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4979 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4979.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_4979_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 118)).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_4979.hasNextObject ()) {
        result << " && " ;
      }
      index_4979_IDX.increment () ;
      enumerator_4979.gotoNextObject () ;
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
  GALGAS_uint index_5273_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5273 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5273.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_5273_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 126)).stringValue () ;
      index_5273_IDX.increment () ;
      enumerator_5273.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    result.appendObject (attributes) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (" ;
  columnMarker = result.currentColumn () ;
  result << "capCollectionElement & outAttributes" ;
  GALGAS_uint index_5650_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5650 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5650.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_5650.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 138)).stringValue () ;
      result << " & in_" ;
      result << enumerator_5650.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 138)).stringValue () ;
      index_5650_.increment () ;
      enumerator_5650.gotoNextObject () ;
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
  GALGAS_uint index_5952_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5952 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_5952.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_5952.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 145)).stringValue () ;
      if (enumerator_5952.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_5952_.increment () ;
      enumerator_5952.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
    "  outAttributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_6334_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6334 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6334.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_6334.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 157)).stringValue () ;
      result << " & inOperand" ;
      result << index_6334_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 157)).stringValue () ;
      if (enumerator_6334.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_6334_IDX.increment () ;
      enumerator_6334.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_6539_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6539 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6539.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_6539_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 163)).stringValue () ;
      result << ".isValid ()" ;
      index_6539_IDX.increment () ;
      enumerator_6539.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_6736_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6736 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_6736.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_6736_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 169)).stringValue () ;
      if (enumerator_6736.hasNextObject ()) {
        result << ", " ;
      }
      index_6736_IDX.increment () ;
      enumerator_6736.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_insertAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7171_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7171 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7171.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7171.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      result << " inOperand" ;
      result << index_7171_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 184)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_7171_IDX.increment () ;
      enumerator_7171.gotoNextObject () ;
    }
  }
  result << "const GALGAS_uint inInsertionIndex,\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inInsertionIndex.isValid ()" ;
  GALGAS_uint index_7471_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7471 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7471.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_7471_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 191)).stringValue () ;
      result << ".isValid ()" ;
      index_7471_IDX.increment () ;
      enumerator_7471.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    cCollectionElement * p = NULL ;\n"
    "    macroMyNew (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_7668_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7668 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_7668.hasCurrentObject ()) {
      result << "inOperand" ;
      result << index_7668_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 197)).stringValue () ;
      if (enumerator_7668.hasNextObject ()) {
        result << ", " ;
      }
      index_7668_IDX.increment () ;
      enumerator_7668.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_removeAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8165_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8165 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8165.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_8165.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << " & outOperand" ;
      result << index_8165_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 212)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_8165_IDX.increment () ;
      enumerator_8165.gotoNextObject () ;
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
  GALGAS_uint index_8717_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8717 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8717.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_8717_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 224)).stringValue () ;
      result << ".drop () ;\n" ;
      index_8717_IDX.increment () ;
      enumerator_8717.gotoNextObject () ;
    }
  }
  result << "    }else{\n"
    "      macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_8901_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8901 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_8901.hasCurrentObject ()) {
      result << "      outOperand" ;
      result << index_8901_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 230)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_8901.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 230)).stringValue () ;
      result << " ;\n" ;
      index_8901_IDX.increment () ;
      enumerator_8901.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popFirst (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_9248_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9248 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9248.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_9248.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << " & outOperand" ;
      result << index_9248_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 240)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_9248_IDX.increment () ;
      enumerator_9248.gotoNextObject () ;
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
  GALGAS_uint index_9665_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9665 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9665.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9665_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 250)).stringValue () ;
      result << ".drop () ;\n" ;
      index_9665_IDX.increment () ;
      enumerator_9665.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_9843_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_9843 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9843.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_9843_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 256)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_9843.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 256)).stringValue () ;
      result << " ;\n" ;
      index_9843_IDX.increment () ;
      enumerator_9843.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setter_popLast (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_10181_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10181 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10181.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_10181.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 265)).stringValue () ;
      result << " & outOperand" ;
      result << index_10181_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 265)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_10181_IDX.increment () ;
      enumerator_10181.gotoNextObject () ;
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
  GALGAS_uint index_10597_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10597 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10597.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10597_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 275)).stringValue () ;
      result << ".drop () ;\n" ;
      index_10597_IDX.increment () ;
      enumerator_10597.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_10775_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10775 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_10775.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_10775_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 281)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_10775.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 281)).stringValue () ;
      result << " ;\n" ;
      index_10775_IDX.increment () ;
      enumerator_10775.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_first (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11111_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11111 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11111.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_11111.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 290)).stringValue () ;
      result << " & outOperand" ;
      result << index_11111_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 290)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_11111_IDX.increment () ;
      enumerator_11111.gotoNextObject () ;
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
  GALGAS_uint index_11526_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11526 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11526.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11526_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 300)).stringValue () ;
      result << ".drop () ;\n" ;
      index_11526_IDX.increment () ;
      enumerator_11526.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_11704_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11704 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_11704.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_11704_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 306)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_11704.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 306)).stringValue () ;
      result << " ;\n" ;
      index_11704_IDX.increment () ;
      enumerator_11704.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_last (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12039_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12039 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12039.hasCurrentObject ()) {
      result << "GALGAS_" ;
      result << enumerator_12039.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 315)).stringValue () ;
      result << " & outOperand" ;
      result << index_12039_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 315)).stringValue () ;
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_12039_IDX.increment () ;
      enumerator_12039.gotoNextObject () ;
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
  GALGAS_uint index_12453_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12453 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12453.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12453_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 325)).stringValue () ;
      result << ".drop () ;\n" ;
      index_12453_IDX.increment () ;
      enumerator_12453.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    macroValidSharedObject (p, cCollectionElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n" ;
  GALGAS_uint index_12631_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_12631 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12631.hasCurrentObject ()) {
      result << "    outOperand" ;
      result << index_12631_IDX.getter_string (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 331)).stringValue () ;
      result << " = p->mObject.mProperty_" ;
      result << enumerator_12631.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 331)).stringValue () ;
      result << " ;\n" ;
      index_12631_IDX.increment () ;
      enumerator_12631.gotoNextObject () ;
    }
  }
  result << "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_15431_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_15431 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_15431.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_15431.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::setter_set" ;
        result << enumerator_15431.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 391)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 391)).stringValue () ;
        result << "AtIndex (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_15431.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 391)).stringValue () ;
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
        result << enumerator_15431.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 399)).stringValue () ;
        result << " = inOperand ;\n"
          "  }\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_0) {
      }
      const enumGalgasBool test_1 = enumerator_15431.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_15431.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 406)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::getter_" ;
        result << enumerator_15431.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 406)).stringValue () ;
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
        result << enumerator_15431.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 411)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != p) {\n"
          "    macroValidSharedObject (p, cCollectionElement_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mObject.mProperty_" ;
        result << enumerator_15431.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 414)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_1) {
      }
      index_15431_IDX.increment () ;
      enumerator_15431.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_18398_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_18398 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_18398.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_18398.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 441)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_18398.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 441)).stringValue () ;
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
      result << enumerator_18398.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_list.cpp.galgasTemplate", 444)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_18398_IDX.increment () ;
      enumerator_18398.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@listTypeForGeneration appendDeclaration1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                         GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                         GALGAS_string & outArgument_outHeader,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 396)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 397)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 395))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 401)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 402)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 403)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 404)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 405)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 406)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 407)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 408)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 409)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 410)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 411)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 412)) COMMA_SOURCE_FILE ("type-list.galgas", 400))), inCompiler  COMMA_SOURCE_FILE ("type-list.galgas", 400)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                              extensionMethod_listTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@listTypeForGeneration appendSpecificImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                GALGAS_string & outArgument_outImplementation,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listTypeForGeneration * object = (const cPtr_listTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_16071 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_16071.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_16071.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 423)) ;
    enumerator_16071.gotoNextObject () ;
  }
  extensionMethod_addHeaderFileName (object->mProperty_mListElementTypeIndex, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 425)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 426)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_listGenerationTemplate_listTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 428)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-list.galgas", 429)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-list.galgas", 427))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listTypeForGeneration.mSlotID,
                                                     extensionMethod_listTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@listmapDeclarationAST addAssociatedElement'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                             extensionMethod_listmapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_addAssociatedElement (defineExtensionMethod_listmapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@listmapDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                                extensionMethod_listmapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_listmapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@listmapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_4280.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 90)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 91)), GALGAS_string ("the '@").add_operation (object->mProperty_mAssociatedListTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)).add_operation (GALGAS_string ("' type should be a list type"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 91)), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 91)) ;
    var_listTypedAttributeList_4338 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 92)) ;
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
  GALGAS_enumerationDescriptorList var_enumeratorDescriptor_6102 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 143)) ;
  var_enumeratorDescriptor_6102.addAssign_operation (var_stringTypeIndex_5054, GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-listmap.galgas", 144)) ;
  var_enumeratorDescriptor_6102.addAssign_operation (var_associatedListTypeIndex_4920, GALGAS_string ("mList")  COMMA_SOURCE_FILE ("type-listmap.galgas", 145)) ;
  GALGAS_functionSignature var_addAssignOperatorDescription_6315 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 147)) ;
  var_addAssignOperatorDescription_6315.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 148)), var_stringTypeIndex_5054, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-listmap.galgas", 148)) ;
  cEnumerator_typedPropertyList enumerator_6447 (var_listTypedAttributeList_4338, kENUMERATION_UP) ;
  while (enumerator_6447.hasCurrentObject ()) {
    var_addAssignOperatorDescription_6315.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-listmap.galgas", 150)), enumerator_6447.current_mPropertyTypeProxy (HERE), enumerator_6447.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 150)) ;
    enumerator_6447.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mListmapTypeName, var_getterMap_4697, var_setterMap_4722, var_instanceMethodMap_4766, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 153)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_listElementTypeIndex_7067 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 166)), var_listElementTypeIndex_7067 COMMA_SOURCE_FILE ("type-listmap.galgas", 164)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mListmapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-listmap.galgas", 174)), GALGAS_typeKindEnum::constructor_arrayType (SOURCE_FILE ("type-listmap.galgas", 175)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 177)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 178)), var_listTypedAttributeList_4338, var_constructorMap_4607, var_getterMap_4697, var_setterMap_4722, var_instanceMethodMap_4766, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 184)), var_enumeratorDescriptor_6102, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-listmap.galgas", 186)), var_addAssignOperatorDescription_6315, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-listmap.galgas", 188)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 189)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 190)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-listmap.galgas", 191)), GALGAS_bool (false), var_listElementTypeIndex_7067, GALGAS_string ("emptyMap"), GALGAS_string ("listmap-").add_operation (object->mProperty_mListmapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-listmap.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 195)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-listmap.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 170)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                               extensionMethod_listmapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_enterInSemanticContext (defineExtensionMethod_listmapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@listmapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_nameForUsefulness_8717 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mListmapTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 213)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8717, var_nameForUsefulness_8717, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 214)) ;
  }
  GALGAS_lstring var_associatedTypeNameForUsefulness_8882 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mAssociatedListTypeName, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 215)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8717, var_associatedTypeNameForUsefulness_8882 COMMA_SOURCE_FILE ("type-listmap.galgas", 216)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_9065 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)), object->mProperty_mListmapTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 217))  COMMA_SOURCE_FILE ("type-listmap.galgas", 217)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 217)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_8717, var_elementTypeNameForUsefulness_9065 COMMA_SOURCE_FILE ("type-listmap.galgas", 218)) ;
  }
  GALGAS_typeKindEnum var_typeKindEnum_9407 ;
  GALGAS_typedPropertyList var_listTypeAttributeList_9464 ;
  GALGAS_bool joker_9369_3 ; // Joker input parameter
  GALGAS_bool joker_9369_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9369_1 ; // Joker input parameter
  GALGAS_bool joker_9413 ; // Joker input parameter
  GALGAS_propertyMap joker_9470_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9470_18 ; // Joker input parameter
  GALGAS_constructorMap joker_9470_17 ; // Joker input parameter
  GALGAS_getterMap joker_9470_16 ; // Joker input parameter
  GALGAS_setterMap joker_9470_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9470_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_9470_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9470_12 ; // Joker input parameter
  GALGAS_operators joker_9470_11 ; // Joker input parameter
  GALGAS_functionSignature joker_9470_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9470_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_9470_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9470_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9470_6 ; // Joker input parameter
  GALGAS_bool joker_9470_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9470_4 ; // Joker input parameter
  GALGAS_string joker_9470_3 ; // Joker input parameter
  GALGAS_string joker_9470_2 ; // Joker input parameter
  GALGAS_headerKind joker_9470_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedListTypeName, joker_9369_3, joker_9369_2, joker_9369_1, var_typeKindEnum_9407, joker_9413, var_listTypeAttributeList_9464, joker_9470_19, joker_9470_18, joker_9470_17, joker_9470_16, joker_9470_15, joker_9470_14, joker_9470_13, joker_9470_12, joker_9470_11, joker_9470_10, joker_9470_9, joker_9470_8, joker_9470_7, joker_9470_6, joker_9470_5, joker_9470_4, joker_9470_3, joker_9470_2, joker_9470_1, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 220)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_9407.objectCompare (GALGAS_typeKindEnum::constructor_listType (SOURCE_FILE ("type-listmap.galgas", 229)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssociatedListTypeName.getter_location (SOURCE_FILE ("type-listmap.galgas", 230)), GALGAS_string ("associated type should be a list type"), fixItArray1  COMMA_SOURCE_FILE ("type-listmap.galgas", 230)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("list map ").add_operation (object->mProperty_mListmapTypeName.getter_string (SOURCE_FILE ("type-listmap.galgas", 234)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 234)), GALGAS_listmapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mListmapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 236)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedListTypeName, inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 237)), var_listTypeAttributeList_9464, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mListmapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), object->mProperty_mListmapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-listmap.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 239))  COMMA_SOURCE_FILE ("type-listmap.galgas", 235))  COMMA_SOURCE_FILE ("type-listmap.galgas", 233)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                         extensionMethod_listmapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapDeclarationAST_semanticAnalysis (defineExtensionMethod_listmapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@listmapTypeForGeneration appendDeclaration1'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                            GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                            GALGAS_string & outArgument_outHeader,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_listmapTypeForGeneration * object = (const cPtr_listmapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_listmapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_10970 (object->mProperty_mAssociatedListTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_10970.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_10970.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 260)) ;
    enumerator_10970.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 264)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 265)) COMMA_SOURCE_FILE ("type-listmap.galgas", 263))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 268)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 269)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 270)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 271)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 272)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 273)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 274)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 275)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 276)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 277)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 278)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-listmap.galgas", 279)) COMMA_SOURCE_FILE ("type-listmap.galgas", 267))), inCompiler  COMMA_SOURCE_FILE ("type-listmap.galgas", 267)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                              extensionMethod_listmapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_listmapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@listmapTypeForGeneration appendSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_listmapTypeForGeneration.mSlotID,
                                                     extensionMethod_listmapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_listmapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_listmapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding extension method '@mapDeclarationAST addAssociatedElement'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_addAssociatedElement (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_semanticDeclarationListAST & ioArgument_ioSemanticDeclarationList,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_propertyInCollectionListAST var_structAttributeList_6512 = GALGAS_propertyInCollectionListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 180)) ;
  var_structAttributeList_6512.addAssign_operation (GALGAS_string ("lstring").getter_nowhere (SOURCE_FILE ("type-map.galgas", 182)), GALGAS_string ("lkey").getter_nowhere (SOURCE_FILE ("type-map.galgas", 183)), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 184))  COMMA_SOURCE_FILE ("type-map.galgas", 181)) ;
  cEnumerator_propertyInCollectionListAST enumerator_6671 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_6671.hasCurrentObject ()) {
    var_structAttributeList_6512.addAssign_operation (enumerator_6671.current_mPropertyTypeName (HERE), enumerator_6671.current_mPropertyName (HERE), GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 189))  COMMA_SOURCE_FILE ("type-map.galgas", 186)) ;
    enumerator_6671.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationList.addAssign_operation (GALGAS_structDeclarationAST::constructor_new (object->mProperty_mIsPredefined, GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 193)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 193)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 193)), var_structAttributeList_6512, GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("type-map.galgas", 191))  COMMA_SOURCE_FILE ("type-map.galgas", 191)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_addAssociatedElement (void) {
  enterExtensionMethod_addAssociatedElement (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                             extensionMethod_mapDeclarationAST_addAssociatedElement) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_addAssociatedElement (defineExtensionMethod_mapDeclarationAST_addAssociatedElement, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension method '@mapDeclarationAST enterDeclarationInGraph'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_key_7828 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 209)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 209))  COMMA_SOURCE_FILE ("type-map.galgas", 209)) ;
  {
  const GALGAS_mapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_7828, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 210)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_7971 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_7971.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_7971.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 212)), enumerator_7971.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 212))  COMMA_SOURCE_FILE ("type-map.galgas", 212)) COMMA_SOURCE_FILE ("type-map.galgas", 212)) ;
    }
    enumerator_7971.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                                extensionMethod_mapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapDeclarationAST enterInSemanticContext'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                      const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                      const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                      const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                      GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapDeclarationAST * object = (const cPtr_mapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_8944 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_8944 COMMA_SOURCE_FILE ("type-map.galgas", 226)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_locationTypeProxy_9079 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeProxy_9079 COMMA_SOURCE_FILE ("type-map.galgas", 228)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_9211 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_9211 COMMA_SOURCE_FILE ("type-map.galgas", 230)) ;
  }
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_9269 = GALGAS_enumerationDescriptorList::constructor_listWithValue (var_lstringTypeIndex_9211, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 232)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_9395 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_9431 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_9431.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_9431.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = var_usesSelectorsInInsertAndSearch_9395.boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <C_FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_9431.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 238)), GALGAS_string ("duplicated attribute"), fixItArray2  COMMA_SOURCE_FILE ("type-map.galgas", 238)) ;
      }
      var_usesSelectorsInInsertAndSearch_9395 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_0) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_9431.current_mValue (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 242)), GALGAS_string ("unknown attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 242)) ;
    }
    enumerator_9431.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_9695 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 246)) ;
  GALGAS_getterMap var_getterMap_9809 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_9809, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 247)) ;
  }
  GALGAS_setterMap var_setterMap_9827 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 248)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_9874 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 249)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_9695, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 255)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 251)) ;
  }
  {
  routine_enterConstructorWithArgument (var_constructorMap_9695, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("mapWithMapToOverride"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 262)), GALGAS_string ("inMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 264)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 258)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("levels"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 268)) ;
  }
  {
  routine_enterInheritedGetterWith_32_Arguments (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKeyAtLevel"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("uint"), GALGAS_string ("inLevel"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 275)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 286)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("keyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 293)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 300)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 309)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("overriddenMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 322)), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 318)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_9809, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 325)) ;
  }
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_12064 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 333)) ;
  GALGAS_typedPropertyList var_typedPropertyList_12119 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 334)) ;
  GALGAS_functionSignature var_argumentTypeListForAddAssignWithFieldExpressionList_12216 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 335)) ;
  var_argumentTypeListForAddAssignWithFieldExpressionList_12216.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 336)), var_lstringTypeIndex_9211, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 336)) ;
  GALGAS_string temp_4 ;
  const enumGalgasBool test_5 = var_usesSelectorsInInsertAndSearch_9395.boolEnum () ;
  if (kBoolTrue == test_5) {
    temp_4 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_5) {
    temp_4 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_12064.addAssign_operation (temp_4.getter_nowhere (SOURCE_FILE ("type-map.galgas", 338)), var_lstringTypeIndex_9211, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 340)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 337)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_12576 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 342)) ;
  GALGAS_string temp_6 ;
  const enumGalgasBool test_7 = var_usesSelectorsInInsertAndSearch_9395.boolEnum () ;
  if (kBoolTrue == test_7) {
    temp_6 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_7) {
    temp_6 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_12576.addAssign_operation (temp_6.getter_nowhere (SOURCE_FILE ("type-map.galgas", 344)), var_lstringTypeIndex_9211, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 346)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map.galgas", 343)) ;
  GALGAS_unifiedTypeMapProxyList var_typesToIncludeInHeaderCompilation_12820 = GALGAS_unifiedTypeMapProxyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 348)) ;
  cEnumerator_propertyInCollectionListAST enumerator_12883 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_12883.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_12995 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_12883.current_mPropertyTypeName (HERE), var_attributeTypeIndex_12995 COMMA_SOURCE_FILE ("type-map.galgas", 350)) ;
    }
    GALGAS_bool var_hasGetter_13016 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_13043 = GALGAS_bool (true) ;
    var_argumentTypeListForAddAssignWithFieldExpressionList_12216.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 353)), var_attributeTypeIndex_12995, enumerator_12883.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 353)) ;
    var_typedPropertyList_12119.addAssign_operation (var_attributeTypeIndex_12995, enumerator_12883.current_mPropertyName (HERE), var_hasSetter_13043, var_hasGetter_13016  COMMA_SOURCE_FILE ("type-map.galgas", 354)) ;
    var_typesToIncludeInHeaderCompilation_12820.addAssign_operation (var_attributeTypeIndex_12995  COMMA_SOURCE_FILE ("type-map.galgas", 355)) ;
    var_enumerationDescriptor_9269.addAssign_operation (var_attributeTypeIndex_12995, enumerator_12883.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 356))  COMMA_SOURCE_FILE ("type-map.galgas", 356)) ;
    GALGAS_lstring temp_8 ;
    const enumGalgasBool test_9 = var_usesSelectorsInInsertAndSearch_9395.boolEnum () ;
    if (kBoolTrue == test_9) {
      temp_8 = enumerator_12883.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_9) {
      temp_8 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 358)) ;
    }
    var_insertMethodFormalArgumentList_12064.addAssign_operation (temp_8, var_attributeTypeIndex_12995, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 360)), enumerator_12883.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 357)) ;
    GALGAS_lstring temp_10 ;
    const enumGalgasBool test_11 = var_usesSelectorsInInsertAndSearch_9395.boolEnum () ;
    if (kBoolTrue == test_11) {
      temp_10 = enumerator_12883.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_11) {
      temp_10 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 363)) ;
    }
    var_removeMethodFormalArgumentList_12576.addAssign_operation (temp_10, var_attributeTypeIndex_12995, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 365)), enumerator_12883.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 362)) ;
    enumerator_12883.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_13897 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_13897.hasCurrentObject ()) {
    const enumGalgasBool test_12 = var_setterMap_9827.getter_hasKey (enumerator_13897.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 370)) COMMA_SOURCE_FILE ("type-map.galgas", 370)).boolEnum () ;
    if (kBoolTrue == test_12) {
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (enumerator_13897.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 371)), GALGAS_string ("the '").add_operation (enumerator_13897.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 371)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 371)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 371)), fixItArray13  COMMA_SOURCE_FILE ("type-map.galgas", 371)) ;
    }else if (kBoolFalse == test_12) {
      {
      var_setterMap_9827.setter_insertOrReplace (enumerator_13897.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 375)), var_insertMethodFormalArgumentList_12064, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 378)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 373)) ;
      }
    }
    enumerator_13897.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_14344 (object->mProperty_mRemoveMethodList, kENUMERATION_UP) ;
  while (enumerator_14344.hasCurrentObject ()) {
    const enumGalgasBool test_14 = var_setterMap_9827.getter_hasKey (enumerator_14344.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 385)) COMMA_SOURCE_FILE ("type-map.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_14) {
      TC_Array <C_FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (enumerator_14344.current_mMethodName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 386)), GALGAS_string ("the '").add_operation (enumerator_14344.current_mMethodName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 386)).add_operation (GALGAS_string ("' method is already declared as an insert setter or a remove setter"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 386)), fixItArray15  COMMA_SOURCE_FILE ("type-map.galgas", 386)) ;
    }else if (kBoolFalse == test_14) {
      {
      var_setterMap_9827.setter_insertOrReplace (enumerator_14344.current_mMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 390)), var_removeMethodFormalArgumentList_12576, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 393)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 388)) ;
      }
    }
    enumerator_14344.gotoNextObject () ;
  }
  cEnumerator_mapSearchMethodListAST enumerator_14840 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_14840.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_searchMethodFormalArgumentList_14882 = var_removeMethodFormalArgumentList_12576 ;
    const enumGalgasBool test_16 = enumerator_14840.current_mLocationAttribute (HERE).boolEnum () ;
    if (kBoolTrue == test_16) {
      GALGAS_lstring temp_17 ;
      const enumGalgasBool test_18 = var_usesSelectorsInInsertAndSearch_9395.boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("keyLocation").getter_nowhere (SOURCE_FILE ("type-map.galgas", 403)) ;
      }else if (kBoolFalse == test_18) {
        temp_17 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 403)) ;
      }
      var_searchMethodFormalArgumentList_14882.addAssign_operation (temp_17, var_locationTypeProxy_9079, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map.galgas", 405)), GALGAS_string ("outKeyLocation")  COMMA_SOURCE_FILE ("type-map.galgas", 402)) ;
    }
    {
    var_instanceMethodMap_9874.setter_insertKey (enumerator_14840.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 410)), var_searchMethodFormalArgumentList_14882, enumerator_14840.current_mSearchMethodName (HERE).getter_location (HERE), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 414)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 408)) ;
    }
    enumerator_14840.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_15478 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_15478.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_15502 = GALGAS_lstring::constructor_new (enumerator_15478.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 420)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 420)), enumerator_15478.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 420))  COMMA_SOURCE_FILE ("type-map.galgas", 420)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_15689 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_15478.current_mPropertyTypeName (HERE), var_attributeTypeIndex_15689 COMMA_SOURCE_FILE ("type-map.galgas", 421)) ;
    }
    {
    GALGAS_functionSignature temp_19 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 425)) ;
    temp_19.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 425)), var_stringTypeIndex_8944, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-map.galgas", 425)) ;
    var_getterMap_9809.setter_insertOrReplace (var_accessorName_15502, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 424)), temp_19, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 426)), GALGAS_bool (true), var_attributeTypeIndex_15689, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 429)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 422)) ;
    }
    enumerator_15478.gotoNextObject () ;
  }
  const enumGalgasBool test_20 = GALGAS_bool (kIsSupOrEqual, object->mProperty_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 434)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
  if (kBoolTrue == test_20) {
    GALGAS_location var_insertOrReplaceLocation_16120 ;
    object->mProperty_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceLocation_16120, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 436)) ;
    {
    var_setterMap_9827.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("insertOrReplace"), var_insertOrReplaceLocation_16120  COMMA_SOURCE_FILE ("type-map.galgas", 438)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 439)), var_insertMethodFormalArgumentList_12064, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 442)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 437)) ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_16550 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_16550.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_16574 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_16550.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map.galgas", 449)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-map.galgas", 449)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 449)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 449)), enumerator_16550.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 450))  COMMA_SOURCE_FILE ("type-map.galgas", 448)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_16864 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_16550.current_mPropertyTypeName (HERE), var_attributeTypeIndex_16864 COMMA_SOURCE_FILE ("type-map.galgas", 452)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_16905 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 457)) ;
    var_accessorFormalArgumentList_16905.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 458)), var_attributeTypeIndex_16864, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 458)), enumerator_16550.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 458)) ;
    var_accessorFormalArgumentList_16905.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map.galgas", 459)), var_stringTypeIndex_8944, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map.galgas", 459)), GALGAS_string ("key")  COMMA_SOURCE_FILE ("type-map.galgas", 459)) ;
    {
    var_setterMap_9827.setter_insertOrReplace (var_accessorName_16574, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map.galgas", 462)), var_accessorFormalArgumentList_16905, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map.galgas", 465)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-map.galgas", 460)) ;
    }
    enumerator_16550.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapTypeName, var_getterMap_9809, var_setterMap_9827, var_instanceMethodMap_9874, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 470)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_elementTypeProxy_17849 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 483)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 483)), var_elementTypeProxy_17849 COMMA_SOURCE_FILE ("type-map.galgas", 481)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map.galgas", 491)), GALGAS_typeKindEnum::constructor_mapType (SOURCE_FILE ("type-map.galgas", 492)), GALGAS_bool (true), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 494)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 495)), var_typedPropertyList_12119, var_constructorMap_9695, var_getterMap_9809, var_setterMap_9827, var_instanceMethodMap_9874, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 501)), var_enumerationDescriptor_9269, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map.galgas", 503)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithFieldListNeedsCompilerArg (SOURCE_FILE ("type-map.galgas", 503)) COMMA_SOURCE_FILE ("type-map.galgas", 503)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-map.galgas", 503)) COMMA_SOURCE_FILE ("type-map.galgas", 503)), var_argumentTypeListForAddAssignWithFieldExpressionList_12216, GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 505)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 506)), object->mProperty_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 508)), GALGAS_bool (false), var_elementTypeProxy_17849, GALGAS_string ("emptyMap"), GALGAS_string ("map-").add_operation (object->mProperty_mMapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map.galgas", 512)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 512)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-map.galgas", 513)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 487)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                               extensionMethod_mapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_19732 (inArgument_inString.getter_string (SOURCE_FILE ("type-map.galgas", 534)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-map.galgas", 534)), kENUMERATION_UP) ;
  while (enumerator_19732.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_19765 = enumerator_19732.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-map.galgas", 535)) ;
    {
    GALGAS_string joker_19852 ; // Joker input parameter
    var_explodedArray_19765.setter_popFirst (joker_19852, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 536)) ;
    }
    cEnumerator_stringlist enumerator_19882 (var_explodedArray_19765, kENUMERATION_UP) ;
    while (enumerator_19882.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_19882.current_mValue (HERE).getter_length (SOURCE_FILE ("type-map.galgas", 538)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_char var_c_19939 = enumerator_19882.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 539)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_c_19939.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-map.galgas", 541)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-map.galgas", 541)) ;
        }
      }
      enumerator_19882.gotoNextObject () ;
    }
    enumerator_19732.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'check_K_L_escapeCharacters'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_L_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_20430 (inArgument_inString.getter_string (SOURCE_FILE ("type-map.galgas", 551)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-map.galgas", 551)), kENUMERATION_UP) ;
  while (enumerator_20430.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray_20463 = enumerator_20430.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-map.galgas", 552)) ;
    {
    GALGAS_string joker_20550 ; // Joker input parameter
    var_explodedArray_20463.setter_popFirst (joker_20550, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 553)) ;
    }
    cEnumerator_stringlist enumerator_20580 (var_explodedArray_20463, kENUMERATION_UP) ;
    while (enumerator_20580.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_20580.current_mValue (HERE).getter_length (SOURCE_FILE ("type-map.galgas", 555)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_char var_c_20637 = enumerator_20580.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 556)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_c_20637.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_20637.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-map.galgas", 557)).boolEnum () ;
        if (kBoolTrue == test_1) {
          TC_Array <C_FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (inArgument_inString.getter_location (SOURCE_FILE ("type-map.galgas", 558)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message"), fixItArray2  COMMA_SOURCE_FILE ("type-map.galgas", 558)) ;
        }
      }
      enumerator_20580.gotoNextObject () ;
    }
    enumerator_20430.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'forbiddenKeysForMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset onceFunction_forbiddenKeysForMap (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_result ; // Returned variable
  result_result = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-map.galgas", 568)) ;
  result_result.addAssign_operation (GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-map.galgas", 569)) ;
  result_result.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("type-map.galgas", 570)) ;
  result_result.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("type-map.galgas", 571)) ;
//---
  return result_result ;
}



//---------------------------------------------------------------------------------------------------------------------*
//  Function implementation                                                                                            *
//---------------------------------------------------------------------------------------------------------------------*

static bool gOnceFunctionResultAvailable_forbiddenKeysForMap = false ;
static GALGAS_stringset gOnceFunctionResult_forbiddenKeysForMap ;

//---------------------------------------------------------------------------------------------------------------------*

GALGAS_stringset function_forbiddenKeysForMap (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_forbiddenKeysForMap) {
    gOnceFunctionResult_forbiddenKeysForMap = onceFunction_forbiddenKeysForMap (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_forbiddenKeysForMap = true ;
  }
  return gOnceFunctionResult_forbiddenKeysForMap ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void releaseOnceFunctionResult_forbiddenKeysForMap (void) {
  gOnceFunctionResult_forbiddenKeysForMap.drop () ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gEpilogueForOnceFunction_forbiddenKeysForMap (NULL,
                                                                 releaseOnceFunctionResult_forbiddenKeysForMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_forbiddenKeysForMap [1] = {
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_forbiddenKeysForMap (C_Compiler * inCompiler,
                                                                    const cObjectArray & /* inEffectiveParameterArray */,
                                                                    const GALGAS_location & /* inErrorLocation */
                                                                    COMMA_LOCATION_ARGS) {
  return function_forbiddenKeysForMap (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMap ("forbiddenKeysForMap",
                                                                     functionWithGenericHeader_forbiddenKeysForMap,
                                                                     & kTypeDescriptor_GALGAS_stringset,
                                                                     0,
                                                                     functionArgs_forbiddenKeysForMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Overriding extension method '@mapDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  GALGAS_lstring var_nameForUsefulness_21651 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 585)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_21651, var_nameForUsefulness_21651, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 586)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_21809 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-element"), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 587)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-map.galgas", 587))  COMMA_SOURCE_FILE ("type-map.galgas", 587)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 587)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21651, var_elementTypeNameForUsefulness_21809 COMMA_SOURCE_FILE ("type-map.galgas", 588)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_22034 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map.galgas", 590)) ;
  GALGAS_propertyIndexMap var_attributeMap_22090 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 591)) ;
  cEnumerator_propertyInCollectionListAST enumerator_22121 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_22121.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_22162 = function_typeNameForUsefulEntitiesGraph (enumerator_22121.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 593)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_21651, var_propertyTypeNameForUsefulness_22162 COMMA_SOURCE_FILE ("type-map.galgas", 594)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_22332 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_22121.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 595)) ;
    GALGAS_bool var_hasSetter_22413 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_22440 = GALGAS_bool (true) ;
    var_typedAttributeList_22034.addAssign_operation (var_t_22332, enumerator_22121.current_mPropertyName (HERE), var_hasSetter_22413, var_hasGetter_22440  COMMA_SOURCE_FILE ("type-map.galgas", 598)) ;
    const enumGalgasBool test_0 = function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 603)).getter_hasKey (enumerator_22121.current_mPropertyName (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-map.galgas", 603)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_m_22619 = GALGAS_string ("a property cannot be named:") ;
      cEnumerator_stringset enumerator_22689 (function_forbiddenKeysForMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 605)), kENUMERATION_UP) ;
      while (enumerator_22689.hasCurrentObject ()) {
        var_m_22619.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_22689.current (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 606)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 606)) ;
        enumerator_22689.gotoNextObject () ;
      }
      var_m_22619.plusAssign_operation(GALGAS_string ("; theses names are reserved"), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 608)) ;
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_22121.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map.galgas", 609)), var_m_22619, fixItArray1  COMMA_SOURCE_FILE ("type-map.galgas", 609)) ;
    }
    {
    var_attributeMap_22090.setter_insertKey (enumerator_22121.current_mPropertyName (HERE), var_t_22332, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 611)) ;
    }
    enumerator_22121.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_22903 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 614)) ;
  cEnumerator_insertMethodListAST enumerator_22962 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_22962.hasCurrentObject ()) {
    {
    var_insertMethodMap_22903.setter_insertKey (enumerator_22962.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 616)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22962.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 617)) ;
    }
    {
    routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_22962.current_mShadowErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 618)) ;
    }
    enumerator_22962.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_23178 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map.galgas", 621)) ;
  cEnumerator_mapSearchMethodListAST enumerator_23237 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_23237.hasCurrentObject ()) {
    {
    var_searchMethodMap_23178.setter_insertKey (enumerator_23237.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 623)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23237.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 624)) ;
    }
    enumerator_23237.gotoNextObject () ;
  }
  cEnumerator_mapRemoveMethodListAST enumerator_23403 (object->mProperty_mRemoveMethodList, kENUMERATION_UP) ;
  while (enumerator_23403.hasCurrentObject ()) {
    {
    var_insertMethodMap_22903.setter_insertKey (enumerator_23403.current_mMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 628)) ;
    }
    {
    routine_check_5F_K_5F_escapeCharacters (enumerator_23403.current_mErrorMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 629)) ;
    }
    enumerator_23403.gotoNextObject () ;
  }
  cEnumerator_insertOrReplaceDeclarationListAST enumerator_23620 (object->mProperty_mInsertOrReplaceDeclarationListAST, kENUMERATION_UP) ;
  GALGAS_uint index_23579 ((uint32_t) 0) ;
  while (enumerator_23620.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, index_23579.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (enumerator_23620.current_mInsertOrReplaceDeclarationLocation (HERE), GALGAS_string ("the 'insertOrReplace' setter is already declared"), fixItArray3  COMMA_SOURCE_FILE ("type-map.galgas", 634)) ;
    }
    enumerator_23620.gotoNextObject () ;
    index_23579.increment_operation (inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 632)) ;
  }
  GALGAS_bool var_hasInsertOrReplaceModifier_23803 = GALGAS_bool (kIsStrictSup, object->mProperty_mInsertOrReplaceDeclarationListAST.getter_length (SOURCE_FILE ("type-map.galgas", 637)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  const enumGalgasBool test_4 = var_hasInsertOrReplaceModifier_23803.operator_and (var_insertMethodMap_22903.getter_hasKey (GALGAS_string ("insertOrReplace") COMMA_SOURCE_FILE ("type-map.galgas", 638)) COMMA_SOURCE_FILE ("type-map.galgas", 638)).boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_insertOrReplaceDeclarationLocation_23985 ;
    object->mProperty_mInsertOrReplaceDeclarationListAST.method_first (var_insertOrReplaceDeclarationLocation_23985, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 640)) ;
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (var_insertOrReplaceDeclarationLocation_23985, GALGAS_string ("the insertOrReplace' setter cannot be declared : an insert setter or a remove setter has been declared with this name"), fixItArray5  COMMA_SOURCE_FILE ("type-map.galgas", 641)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map ").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-map.galgas", 645)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 645)), GALGAS_mapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 647)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (function_elementTypeNameSuffix (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 648)), inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 648)), object->mProperty_mMapTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("type-map.galgas", 648)), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 648)), object->mProperty_mMapTypeName, var_typedAttributeList_22034, object->mProperty_mInsertMethodList, object->mProperty_mSearchMethodList, object->mProperty_mRemoveMethodList, var_hasInsertOrReplaceModifier_23803  COMMA_SOURCE_FILE ("type-map.galgas", 646))  COMMA_SOURCE_FILE ("type-map.galgas", 644)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapDeclarationAST.mSlotID,
                                         extensionMethod_mapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapDeclarationAST_semanticAnalysis (defineExtensionMethod_mapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 679)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 680)), object->mProperty_mTypedAttributeList, object->mProperty_mSearchMethodList COMMA_SOURCE_FILE ("type-map.galgas", 678))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 685)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 686)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 687)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 688)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 689)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 690)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 691)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 692)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 693)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 694)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 695)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 696)) COMMA_SOURCE_FILE ("type-map.galgas", 684))), inCompiler  COMMA_SOURCE_FILE ("type-map.galgas", 684)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapTypeForGeneration appendDeclaration2'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                        const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                        GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                        GALGAS_string & outArgument_outHeader,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_26716 (object->mProperty_mTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_26716.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName_31_ (enumerator_26716.current_mPropertyTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 707)) ;
    enumerator_26716.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 711)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 712)), object->mProperty_mTypedAttributeList COMMA_SOURCE_FILE ("type-map.galgas", 710))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_ (void) {
  enterExtensionMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                              extensionMethod_mapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendDeclaration_32_ (defineExtensionMethod_mapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding extension method '@mapTypeForGeneration appendSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                               GALGAS_string & outArgument_outImplementation,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapTypeForGeneration * object = (const cPtr_mapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mElementTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 723)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 724)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map.galgas", 726)), object->mProperty_mTypedAttributeList, object->mProperty_mInsertMethodList, object->mProperty_mSearchMethodList, object->mProperty_mRemoveMethodList, object->mProperty_mHasInsertOrReplaceModifier COMMA_SOURCE_FILE ("type-map.galgas", 725))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapTypeForGeneration.mSlotID,
                                                     extensionMethod_mapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                            GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                            GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key_1326 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)), object->mProperty_mMapProxyTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_1326, temp_0, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_1326, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)), object->mProperty_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 22)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                                extensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                           const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                           const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum_2460 ;
  GALGAS_typedPropertyList var_mapTypedAttributeList_2518 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_2577 ;
  GALGAS_bool joker_2422_3 ; // Joker input parameter
  GALGAS_bool joker_2422_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2422_1 ; // Joker input parameter
  GALGAS_bool joker_2466_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2466_2 ; // Joker input parameter
  GALGAS_propertyMap joker_2466_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2524_10 ; // Joker input parameter
  GALGAS_getterMap joker_2524_9 ; // Joker input parameter
  GALGAS_setterMap joker_2524_8 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2524_7 ; // Joker input parameter
  GALGAS_classMethodMap joker_2524_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2524_5 ; // Joker input parameter
  GALGAS_operators joker_2524_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2524_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2524_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2524_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2583_6 ; // Joker input parameter
  GALGAS_bool joker_2583_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2583_4 ; // Joker input parameter
  GALGAS_string joker_2583_3 ; // Joker input parameter
  GALGAS_string joker_2583_2 ; // Joker input parameter
  GALGAS_headerKind joker_2583_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedMapTypeName, joker_2422_3, joker_2422_2, joker_2422_1, var_typeKindEnum_2460, joker_2466_3, joker_2466_2, joker_2466_1, var_mapTypedAttributeList_2518, joker_2524_10, joker_2524_9, joker_2524_8, joker_2524_7, joker_2524_6, joker_2524_5, joker_2524_4, joker_2524_3, joker_2524_2, joker_2524_1, var_searchMethodList_2577, joker_2583_6, joker_2583_5, joker_2583_4, joker_2583_3, joker_2583_2, joker_2583_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum_2460.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mAssociatedMapTypeName.getter_location (SOURCE_FILE ("type-map-proxy.galgas", 46)), GALGAS_string ("the @").add_operation (object->mProperty_mAssociatedMapTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)), fixItArray1  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList_2518 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap_2835 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap_2949 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_2949, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_setterMap_2967 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_3014 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap_3066 = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex_3241 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mAssociatedMapTypeName, var_associatedMapTypeIndex_3241 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_3370 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_3370 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 58)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_3502 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_3502 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 60)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy_3635 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, object->mProperty_mMapProxyTypeName, var_mapProxyTypeProxy_3635 COMMA_SOURCE_FILE ("type-map-proxy.galgas", 62)) ;
  }
  GALGAS_formalParameterSignature var_argList_3722 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 64)) ;
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 65)), var_associatedMapTypeIndex_3241, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 65)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 65)) ;
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 66)), var_lstringTypeIndex_3502, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 66)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 66)) ;
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 67)), var_mapProxyTypeProxy_3635, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 67)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 67)) ;
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 69))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 69)), var_argList_3722, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 68)) ;
  }
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeOptionalProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 74))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 74)), var_argList_3722, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 73)) ;
  }
  var_argList_3722 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 79)) ;
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 80)), var_associatedMapTypeIndex_3241, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("type-map-proxy.galgas", 80)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 80)) ;
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 81)), var_stringTypeIndex_3370, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-map-proxy.galgas", 81)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 81)) ;
  var_argList_3722.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 82)), var_mapProxyTypeProxy_3635, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-map-proxy.galgas", 82)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 82)) ;
  {
  var_classMethodMap_3066.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 84))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 84)), var_argList_3722, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 83)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_2835, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("null"), object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 93)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 89)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList_5021 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 97)) ;
  var_constructorAttributeTypeList_5021.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 98)), var_associatedMapTypeIndex_3241, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 98)) ;
  var_constructorAttributeTypeList_5021.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-map-proxy.galgas", 99)), var_lstringTypeIndex_3502, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 99)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5230 (var_searchMethodList_2577, kENUMERATION_UP) ;
  while (enumerator_5230.hasCurrentObject ()) {
    {
    var_constructorMap_2835.setter_insertKey (enumerator_5230.current_mSearchMethodName (HERE), var_constructorAttributeTypeList_5021, GALGAS_bool (true), var_mapProxyTypeProxy_3635, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 101)) ;
    }
    enumerator_5230.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 109)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 116)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 123)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 130)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 137)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_2949, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 144)) ;
  }
  GALGAS_getterMap var_inheritedGetterMap_6566 = var_getterMap_2949 ;
  cEnumerator_typedPropertyList enumerator_6612 (var_mapTypedAttributeList_2518, kENUMERATION_UP) ;
  while (enumerator_6612.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedGetterMap_6566.getter_hasKey (enumerator_6612.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-map-proxy.galgas", 154)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_6695 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6744 (var_inheritedGetterMap_6566.getter_keySet (SOURCE_FILE ("type-map-proxy.galgas", 156)), kENUMERATION_UP) ;
      while (enumerator_6744.hasCurrentObject ()) {
        var_s_6695.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_6744.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 157)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 157)), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 157)) ;
        if (enumerator_6744.hasNextObject ()) {
          var_s_6695.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 158)) ;
        }
        enumerator_6744.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (enumerator_6612.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-map-proxy.galgas", 160)), GALGAS_string ("the map has a associated map proxy, which has predefined getters: ").add_operation (var_s_6695, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 160)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 160)), fixItArray3  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 160)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap_2949.setter_insertKey (enumerator_6612.current_mPropertyName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-map-proxy.galgas", 165)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 166)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 167)), GALGAS_bool (true), enumerator_6612.current_mPropertyTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-map-proxy.galgas", 170)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 163)) ;
      }
    }
    enumerator_6612.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapProxyTypeName, var_getterMap_2949, var_setterMap_2967, var_instanceMethodMap_3014, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 176)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapProxyTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 191)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("type-map-proxy.galgas", 192)), GALGAS_bool (false), var_mapTypedAttributeList_2518, GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 195)), var_mapTypedAttributeList_2518, var_constructorMap_2835, var_getterMap_2949, var_setterMap_2967, var_instanceMethodMap_3014, var_classMethodMap_3066, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 202)), GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-map-proxy.galgas", 203)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 204)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-map-proxy.galgas", 205)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 206)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-map-proxy.galgas", 207)), var_searchMethodList_2577, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-map-proxy.galgas", 210)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mProperty_mMapProxyTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-map-proxy.galgas", 212)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 212)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("type-map-proxy.galgas", 213)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 187)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               extensionMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineExtensionMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_9225 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mMapProxyTypeName, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 230)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_9225, var_nameForUsefulness_9225, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 231)) ;
  }
  GALGAS_typedPropertyList var_listTypeAttributeList_9521 ;
  GALGAS_mapSearchMethodListAST var_searchMethodList_9580 ;
  GALGAS_bool joker_9469_7 ; // Joker input parameter
  GALGAS_bool joker_9469_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9469_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9469_4 ; // Joker input parameter
  GALGAS_bool joker_9469_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9469_2 ; // Joker input parameter
  GALGAS_propertyMap joker_9469_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9527_10 ; // Joker input parameter
  GALGAS_getterMap joker_9527_9 ; // Joker input parameter
  GALGAS_setterMap joker_9527_8 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9527_7 ; // Joker input parameter
  GALGAS_classMethodMap joker_9527_6 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9527_5 ; // Joker input parameter
  GALGAS_operators joker_9527_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9527_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9527_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9527_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9586_6 ; // Joker input parameter
  GALGAS_bool joker_9586_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9586_4 ; // Joker input parameter
  GALGAS_string joker_9586_3 ; // Joker input parameter
  GALGAS_string joker_9586_2 ; // Joker input parameter
  GALGAS_headerKind joker_9586_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mTypeMap (HERE).method_searchKey (object->mProperty_mAssociatedMapTypeName, joker_9469_7, joker_9469_6, joker_9469_5, joker_9469_4, joker_9469_3, joker_9469_2, joker_9469_1, var_listTypeAttributeList_9521, joker_9527_10, joker_9527_9, joker_9527_8, joker_9527_7, joker_9527_6, joker_9527_5, joker_9527_4, joker_9527_3, joker_9527_2, joker_9527_1, var_searchMethodList_9580, joker_9586_6, joker_9586_5, joker_9586_4, joker_9586_3, joker_9586_2, joker_9586_1, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 233)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mProperty_mMapProxyTypeName.getter_string (SOURCE_FILE ("type-map-proxy.galgas", 243)), inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 243)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 245)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 246)), var_listTypeAttributeList_9521, var_searchMethodList_9580  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 244))  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 242)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                         extensionMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineExtensionMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'mapProxyGenerationTemplate'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_mapProxyGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_mapProxyGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_mapProxyGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_mapProxyGenerationTemplate_0,
  0,
  gWrapperAllDirectories_mapProxyGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeHeader1'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                     const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                     const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map proxy"), inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_mapproxy.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_uniqueMapProxy {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'mapProxyGenerationTemplate mapProxyTypeSpecificImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                                 const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_string & in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER,
                                                                                                 const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                 const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
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
    "AC_GALGAS_uniqueMapProxy () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_null (LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.makeNullProxy (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeOptionalProxy (" ;
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
  result << " & outProxy\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outProxy.internalMakeOptionalProxy (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeProxy (" ;
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
  result << " & outProxy\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outProxy.internalMakeProxy (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::class_method_makeProxyFromString (" ;
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
  result << " & outProxy\n"
    "                                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  outProxy.internalMakeProxyFromString (ioMap, inKey COMMA_THERE) ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_2102_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2102 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2102.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 44)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 44)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n"
        "                                       " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n"
        "  GALGAS_" ;
      result << enumerator_2102.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 46)).stringValue () ;
      result << " result ;\n"
        "  const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) getAttributeListPointer (inCompiler, " ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 47)).stringValue () ;
      result << " COMMA_THERE) ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_2102.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 50)).stringValue () ;
      result << ";\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_2102_IDX.increment () ;
      enumerator_2102.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3042_IDX (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_3042 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_3042.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::constructor_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 58)).stringValue () ;
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
        "  result.internalMakeRegularProxyBySearchingKey (inMap, inKey, kSearchErrorMessage_" ;
      result << in_ASSOCIATED_5F_MAP_5F_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_3042.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_mapproxy.cpp.galgasTemplate", 63)).stringValue () ;
      result << ", inCompiler COMMA_THERE) ;\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_3042_IDX.increment () ;
      enumerator_3042.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding extension method '@mapProxyTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 287)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 288)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 286))) ;
  outArgument_outHeader.plusAssign_operation(GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 291)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 292)), object->mProperty_mTypeProxy.getter_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 293)), object->mProperty_mTypeProxy.getter_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 294)), object->mProperty_mTypeProxy.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 295)), object->mProperty_mTypeProxy.getter_mSetterMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 296)), object->mProperty_mTypeProxy.getter_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 297)), object->mProperty_mTypeProxy.getter_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 298)), object->mProperty_mTypeProxy.getter_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 299)), object->mProperty_mTypeProxy.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 300)), object->mProperty_mTypeProxy.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 301)), object->mProperty_mTypeProxy.getter_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 302)) COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290))), inCompiler  COMMA_SOURCE_FILE ("type-map-proxy.galgas", 290)) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                              extensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendDeclaration_31_ (defineExtensionMethod_mapProxyTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding extension method '@mapProxyTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyTypeForGeneration * object = (const cPtr_mapProxyTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyTypeForGeneration) ;
  extensionMethod_addHeaderFileName (object->mProperty_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 312)) ;
  extensionMethod_addHeaderFileName (object->mProperty_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 313)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mProperty_mTypeProxy.getter_key (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 315)), object->mProperty_mTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 316)), object->mProperty_mAssociatedMapTypeProxy.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("type-map-proxy.galgas", 317)), object->mProperty_mAssociatedMapTypedAttributeList, object->mProperty_mSearchMethodList COMMA_SOURCE_FILE ("type-map-proxy.galgas", 314))) ;
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_mapProxyTypeForGeneration.mSlotID,
                                                     extensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyTypeForGeneration_appendSpecificImplementation (defineExtensionMethod_mapProxyTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding extension method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                             GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                             GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                             GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                             GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                             GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key_12423 = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 322))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 322)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_12423, temp_0, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 323)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_12566 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_12566.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_12566.current_mPropertyTypeName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)), enumerator_12566.current_mPropertyTypeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 325))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 325)) ;
    }
    enumerator_12566.gotoNextObject () ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                                extensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Overriding extension getter '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string extensionGetter_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 332)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 332)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                          extensionGetter_sharedMapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gGetter_sharedMapDeclarationAST_keyRepresentation (defineExtensionGetter_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding extension method '@sharedMapDeclarationAST enterInSemanticContext'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                            const GALGAS_extensionMethodMapForBuildingContext constinArgument_inExtensionMethodMapForBuildingContext,
                                                                            const GALGAS_extensionGetterMapForBuildingContext constinArgument_inExtensionGetterMapForBuildingContext,
                                                                            const GALGAS_extensionSetterMapForBuildingContext constinArgument_inExtensionSetterMapForBuildingContext,
                                                                            GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex_13796 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex_13796 COMMA_SOURCE_FILE ("type-shared-map.galgas", 346)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex_13928 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex_13928 COMMA_SOURCE_FILE ("type-shared-map.galgas", 348)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex_14072 ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex_14072 COMMA_SOURCE_FILE ("type-shared-map.galgas", 350)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 352)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex_13928, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 352)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor_14153 = temp_0 ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch_14238 = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_14274 (object->mProperty_mAttributeList, kENUMERATION_UP) ;
  while (enumerator_14274.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_14274.current_mValue (HERE).getter_string (HERE).objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch_14238.boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_14274.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 358)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 358)) ;
      }
      var_usesSelectorsInInsertAndSearch_14238 = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (enumerator_14274.current_mValue (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 362)), GALGAS_string ("unknown attribute"), fixItArray4  COMMA_SOURCE_FILE ("type-shared-map.galgas", 362)) ;
    }
    enumerator_14274.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap_14550 = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 366)) ;
  GALGAS_getterMap var_getterMap_14640 ;
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioSemanticContext.mProperty_mTypeMap, var_getterMap_14640, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 367)) ;
  }
  GALGAS_setterMap var_setterMap_14665 = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 368)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap_14709 = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 369)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap_14550, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("emptyMap"), object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 375)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 371)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 379)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 386)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 393)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 402)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 411)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 418)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 425)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap_14640, ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 432)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_16614 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 440)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList_16678 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 441)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch_14238.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList_16678.addAssign_operation (temp_5.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 443)), var_lstringTypeIndex_13928, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 445)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 442)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList_16912 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 447)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch_14238.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList_16912.addAssign_operation (temp_7.getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 449)), var_lstringTypeIndex_13928, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 451)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 448)) ;
  cEnumerator_propertyInCollectionListAST enumerator_17113 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_17113.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_17225 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_17113.current_mPropertyTypeName (HERE), var_attributeTypeIndex_17225 COMMA_SOURCE_FILE ("type-shared-map.galgas", 454)) ;
    }
    GALGAS_bool var_hasGetter_17246 = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter_17273 = GALGAS_bool (true) ;
    var_typedAttributeList_16614.addAssign_operation (var_attributeTypeIndex_17225, enumerator_17113.current_mPropertyName (HERE), var_hasSetter_17273, var_hasGetter_17246  COMMA_SOURCE_FILE ("type-shared-map.galgas", 457)) ;
    var_enumerationDescriptor_14153.addAssign_operation (var_attributeTypeIndex_17225, enumerator_17113.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 458))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 458)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch_14238.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_17113.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 460)) ;
    }
    var_insertMethodFormalArgumentList_16678.addAssign_operation (temp_9, var_attributeTypeIndex_17225, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 462)), enumerator_17113.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 459)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch_14238.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_17113.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 465)) ;
    }
    var_removeMethodFormalArgumentList_16912.addAssign_operation (temp_11, var_attributeTypeIndex_17225, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 467)), enumerator_17113.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 464)) ;
    enumerator_17113.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_17913 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_17913.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_setterMap_14665.getter_hasKey (enumerator_17913.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 472)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 472)).boolEnum () ;
    if (kBoolTrue == test_13) {
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (enumerator_17913.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 473)), GALGAS_string ("the '").add_operation (enumerator_17913.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 473)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 473)), fixItArray14  COMMA_SOURCE_FILE ("type-shared-map.galgas", 473)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_setterMap_14665.setter_insertOrReplace (enumerator_17913.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 477)), var_insertMethodFormalArgumentList_16678, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 480)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 475)) ;
      }
    }
    enumerator_17913.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList_18402 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 486)) ;
  var_enterEdgeFormalArgumentList_18402.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 487)), var_lstringTypeIndex_13928, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 487)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 487)) ;
  var_enterEdgeFormalArgumentList_18402.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 488)), var_lstringTypeIndex_13928, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 488)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 488)) ;
  {
  var_setterMap_14665.setter_insertOrReplace (GALGAS_string ("enterEdge").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 490)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 491)), var_enterEdgeFormalArgumentList_18402, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 494)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 489)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList_18921 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 498)) ;
  var_topologicalSortFormalArgumentList_18921.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 499)), var_lstringlistTypeIndex_14072, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 499)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 499)) ;
  var_topologicalSortFormalArgumentList_18921.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 500)), var_lstringlistTypeIndex_14072, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("type-shared-map.galgas", 500)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 500)) ;
  {
  var_instanceMethodMap_14709.setter_insertKey (GALGAS_string ("topologicalSort").getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 502)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 503)), var_topologicalSortFormalArgumentList_18921, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 505)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 507)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 501)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 511)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19539 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
    while (enumerator_19539.hasCurrentObject ()) {
      {
      var_instanceMethodMap_14709.setter_insertKey (enumerator_19539.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 515)), var_removeMethodFormalArgumentList_16912, enumerator_19539.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 517)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 519)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 513)) ;
      }
      enumerator_19539.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_19855 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
    while (enumerator_19855.hasCurrentObject ()) {
      {
      var_setterMap_14665.setter_insertKey (enumerator_19855.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 527)), var_removeMethodFormalArgumentList_16912, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 530)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 525)) ;
      }
      enumerator_19855.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 536)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex_20317 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mProperty_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex_20317 COMMA_SOURCE_FILE ("type-shared-map.galgas", 537)) ;
    }
    {
    var_setterMap_14665.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 539))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 539)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 540)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 541)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 543)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 538)) ;
    }
    {
    var_setterMap_14665.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 547))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 547)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 548)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 549)), var_locationTypeIndex_20317, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 549)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 549)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 551)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 546)) ;
    }
    {
    var_setterMap_14665.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 555))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 555)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 556)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 557)), var_locationTypeIndex_20317, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 557)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 557)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("type-shared-map.galgas", 559)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 554)) ;
    }
    {
    var_instanceMethodMap_14709.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 563))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 563)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 564)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 565)), var_locationTypeIndex_20317, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("type-shared-map.galgas", 565)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 565)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 566)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 568)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 562)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_21571 (object->mProperty_mMapOverrideBlockListAST, kENUMERATION_UP) ;
    while (enumerator_21571.hasCurrentObject ()) {
      {
      var_setterMap_14665.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_21571.current_mOverrideBlockName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 573)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 573)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 573))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 573)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 574)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 575)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 577)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 572)) ;
      }
      enumerator_21571.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_21966 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_21966.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_21990 = GALGAS_lstring::constructor_new (enumerator_21966.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 584)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 584)), enumerator_21966.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 584))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 584)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_22177 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_21966.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22177 COMMA_SOURCE_FILE ("type-shared-map.galgas", 585)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 589)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 589)), var_stringTypeIndex_13796, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("type-shared-map.galgas", 589)) ;
    var_getterMap_14640.setter_insertOrReplace (var_accessorName_21990, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 588)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 590)), GALGAS_bool (true), var_attributeTypeIndex_22177, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 593)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 586)) ;
    }
    enumerator_21966.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_22577 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_22577.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName_22601 = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_22577.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 599)).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("type-shared-map.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 599)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 599)), enumerator_22577.current_mPropertyName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 599))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 599)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex_22833 ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_22577.current_mPropertyTypeName (HERE), var_attributeTypeIndex_22833 COMMA_SOURCE_FILE ("type-shared-map.galgas", 600)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList_22891 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 601)) ;
    var_accessorFormalArgumentList_22891.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 602)), var_attributeTypeIndex_22833, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 602)), enumerator_22577.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 602)) ;
    var_accessorFormalArgumentList_22891.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("type-shared-map.galgas", 603)), var_stringTypeIndex_13796, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("type-shared-map.galgas", 603)), enumerator_22577.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("type-shared-map.galgas", 603)) ;
    {
    var_setterMap_14665.setter_insertOrReplace (var_accessorName_22601, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("type-shared-map.galgas", 606)), var_accessorFormalArgumentList_22891, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("type-shared-map.galgas", 609)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("type-shared-map.galgas", 604)) ;
    }
    enumerator_22577.gotoNextObject () ;
  }
  {
  routine_addExtensions (constinArgument_inExtensionMethodMapForBuildingContext, constinArgument_inExtensionGetterMapForBuildingContext, constinArgument_inExtensionSetterMapForBuildingContext, ioArgument_ioSemanticContext, object->mProperty_mMapTypeName, var_getterMap_14640, var_setterMap_14665, var_instanceMethodMap_14709, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 614)) ;
  }
  {
  ioArgument_ioSemanticContext.mProperty_mTypeMap.setter_insertKey (object->mProperty_mMapTypeName, object->mProperty_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 629)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("type-shared-map.galgas", 630)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 632)), GALGAS_propertyMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 633)), var_typedAttributeList_16614, var_constructorMap_14550, var_getterMap_14640, var_setterMap_14665, var_instanceMethodMap_14709, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 639)), var_enumerationDescriptor_14153, GALGAS_operators::constructor_doNotGenererateObjectCompare (SOURCE_FILE ("type-shared-map.galgas", 641)).operator_or (GALGAS_operators::constructor_supportWithAccessor (SOURCE_FILE ("type-shared-map.galgas", 641)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 641)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 642)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 643)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 644)), object->mProperty_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 646)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("type-shared-map.galgas", 648)), GALGAS_string ("emptyMap"), GALGAS_string ("sharedmap-").add_operation (object->mProperty_mMapTypeName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("type-shared-map.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 650)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("type-shared-map.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 625)) ;
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               extensionMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineExtensionMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding extension method '@sharedMapDeclarationAST semanticAnalysis'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void extensionMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                      const GALGAS_string constinArgument_inProductDirectory,
                                                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                      const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                      GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_27380 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mMapTypeName, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 733)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_27380, var_nameForUsefulness_27380, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 734)) ;
  }
  GALGAS_lstring var_elementTypeNameForUsefulness_27538 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (object->mProperty_mMapTypeName.getter_string (HERE).add_operation (GALGAS_string ("-proxy"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 735)), object->mProperty_mMapTypeName.getter_location (SOURCE_FILE ("type-shared-map.galgas", 735))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 735)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 735)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27380, var_elementTypeNameForUsefulness_27538 COMMA_SOURCE_FILE ("type-shared-map.galgas", 736)) ;
  }
  GALGAS_mapAutomatonMessageKind var_shadowBehaviour_27759 = GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 738)) ;
  GALGAS_string var_shadowMessage_27792 = GALGAS_string::makeEmptyString () ;
  cEnumerator_sharedMapAttributeListAST enumerator_27869 (object->mProperty_mSharedMapAttributeListAST, kENUMERATION_UP) ;
  while (enumerator_27869.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, enumerator_27869.current_mAttributeName (HERE).getter_string (HERE).objectCompare (GALGAS_string ("shadow"))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (enumerator_27869.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 742)), GALGAS_string ("only %shadow attribute is allowed here"), fixItArray1  COMMA_SOURCE_FILE ("type-shared-map.galgas", 742)) ;
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_shadowBehaviour_27759.objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 743)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_27869.current_mAttributeName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 744)), GALGAS_string ("duplicated attribute"), fixItArray3  COMMA_SOURCE_FILE ("type-shared-map.galgas", 744)) ;
      }else if (kBoolFalse == test_2) {
        GALGAS_mapAutomatonMessageKind temp_4 ;
        const enumGalgasBool test_5 = enumerator_27869.current_mIsError (HERE).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_errorMessage (SOURCE_FILE ("type-shared-map.galgas", 746)) ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_mapAutomatonMessageKind::constructor_warningMessage (SOURCE_FILE ("type-shared-map.galgas", 746)) ;
        }
        var_shadowBehaviour_27759 = temp_4 ;
        {
        routine_check_5F_K_5F_L_5F_escapeCharacters (enumerator_27869.current_mMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 747)) ;
        }
        var_shadowMessage_27792 = enumerator_27869.current_mMessage (HERE).getter_string (HERE) ;
      }
    }
    enumerator_27869.gotoNextObject () ;
  }
  GALGAS_stringset var_initialStateSet_28326 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 752)) ;
  cEnumerator_insertMethodListAST enumerator_28372 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_28372.hasCurrentObject ()) {
    const enumGalgasBool test_6 = GALGAS_bool (kIsStrictSup, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 754)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_6) {
      const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_28372.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 755)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_28372.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 756)), GALGAS_string ("the '").add_operation (enumerator_28372.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 756)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 756)), fixItArray8  COMMA_SOURCE_FILE ("type-shared-map.galgas", 756)) ;
      }else if (kBoolFalse == test_7) {
        var_initialStateSet_28326.addAssign_operation (enumerator_28372.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 758))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 758)) ;
      }
    }else if (kBoolFalse == test_6) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_28372.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 760)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        TC_Array <C_FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (enumerator_28372.current_mInsertMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 761)), GALGAS_string ("the '").add_operation (enumerator_28372.current_mInsertMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)), fixItArray10  COMMA_SOURCE_FILE ("type-shared-map.galgas", 761)) ;
      }
    }
    enumerator_28372.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap_28908 = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 765)) ;
  cEnumerator_mapSearchMethodListAST enumerator_28943 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_28943.hasCurrentObject ()) {
    const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 767)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_11) {
      const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, enumerator_28943.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 768)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <C_FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_28943.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 769)), GALGAS_string ("the '").add_operation (enumerator_28943.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 769)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 769)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 769)), fixItArray13  COMMA_SOURCE_FILE ("type-shared-map.galgas", 769)) ;
      }else if (kBoolFalse == test_12) {
        const enumGalgasBool test_14 = var_mapAutomatonActionMap_28908.getter_hasKey (enumerator_28943.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 770)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 770)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 770)).boolEnum () ;
        if (kBoolTrue == test_14) {
          {
          var_mapAutomatonActionMap_28908.setter_insertKey (enumerator_28943.current_mActionName (HERE), var_mapAutomatonActionMap_28908.getter_count (SOURCE_FILE ("type-shared-map.galgas", 771)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 771)) ;
          }
        }
      }
    }else if (kBoolFalse == test_11) {
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_28943.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 773)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_15) {
        TC_Array <C_FixItDescription> fixItArray16 ;
        inCompiler->emitSemanticError (enumerator_28943.current_mSearchMethodName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 774)), GALGAS_string ("the '").add_operation (enumerator_28943.current_mSearchMethodName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 774)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 774)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 774)), fixItArray16  COMMA_SOURCE_FILE ("type-shared-map.galgas", 774)) ;
      }
    }
    enumerator_28943.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap_29554 = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 778)) ;
  cEnumerator_mapStateList enumerator_29585 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
  while (enumerator_29585.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap_29554.setter_insertKey (enumerator_29585.current_mStateName (HERE), var_mapAutomatonStateMap_29554.getter_count (SOURCE_FILE ("type-shared-map.galgas", 780)), enumerator_29585.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 780)) ;
    }
    enumerator_29585.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_29720 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
  while (enumerator_29720.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_29753 (enumerator_29720.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_29753.hasCurrentObject ()) {
      GALGAS_uint joker_29814_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_29814_1 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_29753.current_mTargetStateName (HERE), joker_29814_2, joker_29814_1, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 784)) ;
      enumerator_29753.gotoNextObject () ;
    }
    enumerator_29720.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions_29904 = var_mapAutomatonActionMap_28908.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 788)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList_29978 = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 789)) ;
  cEnumerator_mapStateList enumerator_30009 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
  while (enumerator_30009.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState_30050 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 791)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList_30118 = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 792)) ;
    cEnumerator_mapStateTransitionList enumerator_30153 (enumerator_30009.current_mTransitionList (HERE), kENUMERATION_UP) ;
    while (enumerator_30153.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex_30231 ;
      var_mapAutomatonActionMap_28908.method_searchKey (enumerator_30153.current_mActionName (HERE), var_actionIndex_30231, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 794)) ;
      const enumGalgasBool test_17 = var_actionsForCurrentState_30050.getter_hasKey (enumerator_30153.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 795)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 795)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_30153.current_mActionName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 796)), GALGAS_string ("the '").add_operation (enumerator_30153.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 796)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 796)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 796)), fixItArray18  COMMA_SOURCE_FILE ("type-shared-map.galgas", 796)) ;
      }
      var_actionsForCurrentState_30050.addAssign_operation (enumerator_30153.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 798))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 798)) ;
      GALGAS_uint var_targetStateIndex_30542 ;
      GALGAS_mapAutomatonMessageKind joker_30544 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_30153.current_mTargetStateName (HERE), var_targetStateIndex_30542, joker_30544, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 799)) ;
      var_mapStateTransitionSortedList_30118.addAssign_operation (var_actionIndex_30231, enumerator_30153.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 802)), var_targetStateIndex_30542, enumerator_30153.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 804)), enumerator_30153.current_mTransitionMessageKind (HERE), enumerator_30153.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 806))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 800)) ;
      enumerator_30153.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex_30843 ;
    GALGAS_mapAutomatonMessageKind joker_30845 ; // Joker input parameter
    var_mapAutomatonStateMap_29554.method_searchKey (enumerator_30009.current_mStateName (HERE), var_stateIndex_30843, joker_30845, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 808)) ;
    var_mapStateSortedList_29978.addAssign_operation (var_stateIndex_30843, enumerator_30009.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 811)), enumerator_30009.current_mStateMessageKind (HERE), enumerator_30009.current_mStateMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 813)), var_mapStateTransitionSortedList_30118  COMMA_SOURCE_FILE ("type-shared-map.galgas", 809)) ;
    GALGAS_stringset var_missingActions_31043 = var_allActions_29904.substract_operation (var_actionsForCurrentState_30050, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 815)) ;
    const enumGalgasBool test_19 = GALGAS_bool (kIsStrictSup, var_missingActions_31043.getter_count (SOURCE_FILE ("type-shared-map.galgas", 816)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_19) {
      GALGAS_string var_s_31136 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_31172 (var_missingActions_31043, kENUMERATION_UP) ;
      while (enumerator_31172.hasCurrentObject ()) {
        var_s_31136.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_31172.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 819)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 819)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 819)) ;
        if (enumerator_31172.hasNextObject ()) {
          var_s_31136.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 820)) ;
        }
        enumerator_31172.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray20 ;
      inCompiler->emitSemanticError (enumerator_30009.current_mStateName (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 822)), GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s_31136, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 822)), fixItArray20  COMMA_SOURCE_FILE ("type-shared-map.galgas", 822)) ;
    }
    enumerator_30009.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates_31417 = var_initialStateSet_28326 ;
  GALGAS_bool var_progress_31452 = GALGAS_bool (true) ;
  if (object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 828)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 828)).isValid ()) {
    uint32_t variant_31466 = object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 828)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 828)).uintValue () ;
    bool loop_31466 = true ;
    while (loop_31466) {
      loop_31466 = var_progress_31452.isValid () ;
      if (loop_31466) {
        loop_31466 = var_progress_31452.boolValue () ;
      }
      if (loop_31466 && (0 == variant_31466)) {
        loop_31466 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 828)) ;
      }
      if (loop_31466) {
        variant_31466 -- ;
        var_progress_31452 = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_31562 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
        while (enumerator_31562.hasCurrentObject ()) {
          const enumGalgasBool test_21 = var_accessibleStates_31417.getter_hasKey (enumerator_31562.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 831)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 831)).boolEnum () ;
          if (kBoolTrue == test_21) {
            cEnumerator_mapStateTransitionList enumerator_31660 (enumerator_31562.current_mTransitionList (HERE), kENUMERATION_UP) ;
            while (enumerator_31660.hasCurrentObject ()) {
              const enumGalgasBool test_22 = var_accessibleStates_31417.getter_hasKey (enumerator_31660.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 833)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 833)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 833)).boolEnum () ;
              if (kBoolTrue == test_22) {
                var_accessibleStates_31417.addAssign_operation (enumerator_31660.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 834))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 834)) ;
                var_progress_31452 = GALGAS_bool (true) ;
              }
              enumerator_31660.gotoNextObject () ;
            }
          }
          enumerator_31562.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates_31906 = var_mapAutomatonStateMap_29554.getter_keySet (SOURCE_FILE ("type-shared-map.galgas", 841)).substract_operation (var_accessibleStates_31417, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 841)) ;
  const enumGalgasBool test_23 = GALGAS_bool (kIsStrictSup, var_uselessStates_31906.getter_count (SOURCE_FILE ("type-shared-map.galgas", 842)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    GALGAS_string var_s_32003 = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_32036 (var_uselessStates_31906, kENUMERATION_UP) ;
    while (enumerator_32036.hasCurrentObject ()) {
      var_s_32003.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_32036.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 845)) ;
      if (enumerator_32036.hasNextObject ()) {
        var_s_32003.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 846)) ;
      }
      enumerator_32036.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray24 ;
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s_32003, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)), fixItArray24  COMMA_SOURCE_FILE ("type-shared-map.galgas", 848)) ;
  }
  GALGAS_stringset var_neededAssociations_32306 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 852)) ;
  GALGAS_stringset var_accessibilityGraph_32343 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 853)) ;
  cEnumerator_mapAutomatonStateMap enumerator_32396 (var_mapAutomatonStateMap_29554, kENUMERATION_UP) ;
  while (enumerator_32396.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates_32430 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 855)) ;
    var_reachableStates_32430.addAssign_operation (enumerator_32396.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 856))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 856)) ;
    var_progress_31452 = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap_29554.getter_count (SOURCE_FILE ("type-shared-map.galgas", 858)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)).isValid ()) {
      uint32_t variant_32520 = var_mapAutomatonStateMap_29554.getter_count (SOURCE_FILE ("type-shared-map.galgas", 858)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 858)).uintValue () ;
      bool loop_32520 = true ;
      while (loop_32520) {
        loop_32520 = var_progress_31452.isValid () ;
        if (loop_32520) {
          loop_32520 = var_progress_31452.boolValue () ;
        }
        if (loop_32520 && (0 == variant_32520)) {
          loop_32520 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("type-shared-map.galgas", 858)) ;
        }
        if (loop_32520) {
          variant_32520 -- ;
          var_progress_31452 = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_32626 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
          while (enumerator_32626.hasCurrentObject ()) {
            const enumGalgasBool test_25 = var_reachableStates_32430.getter_hasKey (enumerator_32626.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 861)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 861)).boolEnum () ;
            if (kBoolTrue == test_25) {
              cEnumerator_mapStateTransitionList enumerator_32727 (enumerator_32626.current_mTransitionList (HERE), kENUMERATION_UP) ;
              while (enumerator_32727.hasCurrentObject ()) {
                const enumGalgasBool test_26 = var_reachableStates_32430.getter_hasKey (enumerator_32727.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 863)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 863)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 863)).boolEnum () ;
                if (kBoolTrue == test_26) {
                  var_reachableStates_32430.addAssign_operation (enumerator_32727.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 864))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 864)) ;
                  var_accessibilityGraph_32343.addAssign_operation (enumerator_32396.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)).add_operation (enumerator_32727.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 865))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 865)) ;
                  var_progress_31452 = GALGAS_bool (true) ;
                }
                enumerator_32727.gotoNextObject () ;
              }
            }
            enumerator_32626.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_33089 (var_reachableStates_32430, kENUMERATION_UP) ;
    while (enumerator_33089.hasCurrentObject ()) {
      const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, enumerator_32396.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 873)).objectCompare (enumerator_33089.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_27) {
        var_neededAssociations_32306.addAssign_operation (enumerator_32396.current (HERE).getter_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 874)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 874)).add_operation (enumerator_33089.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 874))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 874)) ;
      }
      enumerator_33089.gotoNextObject () ;
    }
    enumerator_32396.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList_33284 = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 879)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_33326 (object->mProperty_mMapOverrideBlockListAST, kENUMERATION_UP) ;
  while (enumerator_33326.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations_33357 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 881)) ;
    GALGAS_stringset var_neededCombinaisons_33399 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 882)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31__33463 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 883)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33569 (enumerator_33326.current_mMapOverrideBlockDescriptor_31_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_33569.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex_33647 ;
      GALGAS_mapAutomatonMessageKind joker_33649 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_33569.current_mLeftState (HERE), var_startStateNameIndex_33647, joker_33649, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 885)) ;
      GALGAS_uint var_currentStateNameIndex_33729 ;
      GALGAS_mapAutomatonMessageKind joker_33731 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_33569.current_mRightState (HERE), var_currentStateNameIndex_33729, joker_33731, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 886)) ;
      GALGAS_string var_association_33763 = enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 887)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)).add_operation (enumerator_33569.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 887)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 887)) ;
      const enumGalgasBool test_28 = var_neededAssociations_32306.getter_hasKey (var_association_33763 COMMA_SOURCE_FILE ("type-shared-map.galgas", 888)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 888)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <C_FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticWarning (enumerator_33569.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 889)), GALGAS_string ("the '").add_operation (var_association_33763, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)), fixItArray29  COMMA_SOURCE_FILE ("type-shared-map.galgas", 889)) ;
      }
      const enumGalgasBool test_30 = var_handledAssociations_33357.getter_hasKey (var_association_33763 COMMA_SOURCE_FILE ("type-shared-map.galgas", 891)).boolEnum () ;
      if (kBoolTrue == test_30) {
        TC_Array <C_FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_33569.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 892)), GALGAS_string ("the '").add_operation (var_association_33763, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 893)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 893)), fixItArray31  COMMA_SOURCE_FILE ("type-shared-map.galgas", 892)) ;
      }
      var_handledAssociations_33357.addAssign_operation (var_association_33763  COMMA_SOURCE_FILE ("type-shared-map.galgas", 895)) ;
      GALGAS_uint var_finalStateNameIndex_34245 ;
      GALGAS_mapAutomatonMessageKind joker_34247 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_33569.current_mResultingState (HERE), var_finalStateNameIndex_34245, joker_34247, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 896)) ;
      const enumGalgasBool test_32 = GALGAS_bool (kIsNotEqual, enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 897)).objectCompare (enumerator_33569.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 897)))).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_neededCombinaisons_33399.addAssign_operation (enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 898)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 898)).add_operation (enumerator_33569.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 898)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 898))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 898)) ;
        var_neededCombinaisons_33399.addAssign_operation (enumerator_33569.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)).add_operation (enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 899)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 899))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 899)) ;
        const enumGalgasBool test_33 = var_accessibilityGraph_32343.getter_hasKey (enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 900)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)).add_operation (enumerator_33569.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 900)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 900)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 900)).boolEnum () ;
        if (kBoolTrue == test_33) {
          TC_Array <C_FixItDescription> fixItArray34 ;
          inCompiler->emitSemanticError (enumerator_33569.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 901)), GALGAS_string ("the '").add_operation (enumerator_33569.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)).add_operation (enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 902)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 902)), fixItArray34  COMMA_SOURCE_FILE ("type-shared-map.galgas", 901)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33569.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 905)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31__33463.addAssign_operation (var_startStateNameIndex_33647, enumerator_33569.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 908)), var_currentStateNameIndex_33729, enumerator_33569.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 910)), var_finalStateNameIndex_34245, enumerator_33569.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 912)), enumerator_33569.current_mMessageKind (HERE), enumerator_33569.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 914))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 906)) ;
      enumerator_33569.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations_35120 = var_neededAssociations_32306.substract_operation (var_handledAssociations_33357, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 916)) ;
    const enumGalgasBool test_35 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations_35120.getter_count (SOURCE_FILE ("type-shared-map.galgas", 917)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_35) {
      GALGAS_string var_s_35225 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_35268 (var_forgottenAssociations_35120, kENUMERATION_UP) ;
      while (enumerator_35268.hasCurrentObject ()) {
        var_s_35225.plusAssign_operation(GALGAS_string ("\n"
          "  - ").add_operation (enumerator_35268.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 920)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 920)) ;
        enumerator_35268.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray36 ;
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)), var_forgottenAssociations_35120.getter_count (SOURCE_FILE ("type-shared-map.galgas", 922)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)).add_operation (var_s_35225, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)), fixItArray36  COMMA_SOURCE_FILE ("type-shared-map.galgas", 922)) ;
    }
    GALGAS_stringset var_definedCombinaisons_35453 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("type-shared-map.galgas", 924)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32__35517 = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("type-shared-map.galgas", 925)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_35623 (enumerator_33326.current_mMapOverrideBlockDescriptor_32_AST (HERE), kENUMERATION_UP) ;
    while (enumerator_35623.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex_35696 ;
      GALGAS_mapAutomatonMessageKind joker_35698 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_35623.current_mLeftState (HERE), var_leftStateIndex_35696, joker_35698, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 927)) ;
      GALGAS_uint var_rightStateIndex_35772 ;
      GALGAS_mapAutomatonMessageKind joker_35774 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_35623.current_mRightState (HERE), var_rightStateIndex_35772, joker_35774, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 928)) ;
      GALGAS_string var_combinaison_35806 = enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 929)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)).add_operation (enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 929)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 929)) ;
      const enumGalgasBool test_37 = var_neededCombinaisons_33399.getter_hasKey (var_combinaison_35806 COMMA_SOURCE_FILE ("type-shared-map.galgas", 930)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 930)).boolEnum () ;
      if (kBoolTrue == test_37) {
        TC_Array <C_FixItDescription> fixItArray38 ;
        inCompiler->emitSemanticError (enumerator_35623.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 931)), GALGAS_string ("the '").add_operation (enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 932)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)).add_operation (enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 932)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 932)), fixItArray38  COMMA_SOURCE_FILE ("type-shared-map.galgas", 931)) ;
      }
      const enumGalgasBool test_39 = var_definedCombinaisons_35453.getter_hasKey (var_combinaison_35806 COMMA_SOURCE_FILE ("type-shared-map.galgas", 934)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <C_FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticError (enumerator_35623.current_mRightState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 935)), GALGAS_string ("the '").add_operation (enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 936)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)).add_operation (enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 936)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 936)), fixItArray40  COMMA_SOURCE_FILE ("type-shared-map.galgas", 935)) ;
      }
      var_definedCombinaisons_35453.addAssign_operation (var_combinaison_35806  COMMA_SOURCE_FILE ("type-shared-map.galgas", 938)) ;
      GALGAS_uint var_resultingStateNameIndex_36336 ;
      GALGAS_mapAutomatonMessageKind joker_36338 ; // Joker input parameter
      var_mapAutomatonStateMap_29554.method_searchKey (enumerator_35623.current_mResultingState (HERE), var_resultingStateNameIndex_36336, joker_36338, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 939)) ;
      const enumGalgasBool test_41 = GALGAS_bool (kIsNotEqual, enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 940)).objectCompare (enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 940)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)).objectCompare (enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 941)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 940)).operator_and (var_accessibilityGraph_32343.getter_hasKey (enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 942)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 942)).add_operation (enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 942)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 942)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 942)).operator_not (SOURCE_FILE ("type-shared-map.galgas", 942)) COMMA_SOURCE_FILE ("type-shared-map.galgas", 941)).boolEnum () ;
      if (kBoolTrue == test_41) {
        TC_Array <C_FixItDescription> fixItArray42 ;
        inCompiler->emitSemanticError (enumerator_35623.current_mResultingState (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 943)), GALGAS_string ("the '").add_operation (enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 944)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 944)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 944)).add_operation (enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 944)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 944)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 944)), fixItArray42  COMMA_SOURCE_FILE ("type-shared-map.galgas", 943)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_35623.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 946)) ;
      }
      const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_35623.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("type-shared-map.galgas", 947)))).boolEnum () ;
      if (kBoolTrue == test_43) {
        var_definedCombinaisons_35453.addAssign_operation (enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 948)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 948)).add_operation (enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 948))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 948)) ;
        var_branchBehaviourSortedListForMapOverride_32__35517.addAssign_operation (var_rightStateIndex_35772, enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 951)), var_leftStateIndex_35696, enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 953)), var_resultingStateNameIndex_36336, enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 955)), enumerator_35623.current_mMessageKind (HERE), enumerator_35623.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 957))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 949)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32__35517.addAssign_operation (var_leftStateIndex_35696, enumerator_35623.current_mLeftState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 961)), var_rightStateIndex_35772, enumerator_35623.current_mRightState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 963)), var_resultingStateNameIndex_36336, enumerator_35623.current_mResultingState (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 965)), enumerator_35623.current_mMessageKind (HERE), enumerator_35623.current_mTransitionMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 967))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 959)) ;
      enumerator_35623.gotoNextObject () ;
    }
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, var_forgottenAssociations_35120.getter_count (SOURCE_FILE ("type-shared-map.galgas", 969)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      GALGAS_stringset var_forgottenCombinaisons_37641 = var_neededCombinaisons_33399.substract_operation (var_definedCombinaisons_35453, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 970)) ;
      const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons_37641.getter_count (SOURCE_FILE ("type-shared-map.galgas", 971)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_45) {
        GALGAS_string var_s_37750 = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_37795 (var_forgottenCombinaisons_37641, kENUMERATION_UP) ;
        while (enumerator_37795.hasCurrentObject ()) {
          var_s_37750.plusAssign_operation(GALGAS_string ("\n"
            "  - ").add_operation (enumerator_37795.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 974)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 974)) ;
          enumerator_37795.gotoNextObject () ;
        }
        TC_Array <C_FixItDescription> fixItArray46 ;
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 976)), var_forgottenCombinaisons_37641.getter_count (SOURCE_FILE ("type-shared-map.galgas", 976)).getter_string (SOURCE_FILE ("type-shared-map.galgas", 976)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 976)).add_operation (var_s_37750, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 976)), fixItArray46  COMMA_SOURCE_FILE ("type-shared-map.galgas", 976)) ;
      }
    }
    var_mapOverrideList_33284.addAssign_operation (enumerator_33326.current_mOverrideBlockName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 980)), var_branchBehaviourSortedListForMapOverride_31__33463, var_branchBehaviourSortedListForMapOverride_32__35517  COMMA_SOURCE_FILE ("type-shared-map.galgas", 979)) ;
    enumerator_33326.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList_38189 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("type-shared-map.galgas", 985)) ;
  GALGAS_propertyIndexMap var_attributeMap_38227 = GALGAS_propertyIndexMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 986)) ;
  cEnumerator_propertyInCollectionListAST enumerator_38258 (object->mProperty_mPropertyList, kENUMERATION_UP) ;
  while (enumerator_38258.hasCurrentObject ()) {
    GALGAS_lstring var_propertyTypeNameForUsefulness_38299 = function_typeNameForUsefulEntitiesGraph (enumerator_38258.current_mPropertyTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 988)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_nameForUsefulness_27380, var_propertyTypeNameForUsefulness_38299 COMMA_SOURCE_FILE ("type-shared-map.galgas", 989)) ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_t_38451 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_38258.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 990)) ;
    GALGAS_bool var_hasSetter_38552 = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter_38577 = GALGAS_bool (true) ;
    var_typedAttributeList_38189.addAssign_operation (var_t_38451, enumerator_38258.current_mPropertyName (HERE), var_hasSetter_38552, var_hasGetter_38577  COMMA_SOURCE_FILE ("type-shared-map.galgas", 993)) ;
    {
    var_attributeMap_38227.setter_insertKey (enumerator_38258.current_mPropertyName (HERE), var_t_38451, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 998)) ;
    }
    enumerator_38258.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap_38790 = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1001)) ;
  cEnumerator_insertMethodListAST enumerator_38835 (object->mProperty_mInsertMethodList, kENUMERATION_UP) ;
  while (enumerator_38835.hasCurrentObject ()) {
    {
    var_insertMethodMap_38790.setter_insertKey (enumerator_38835.current (HERE).getter_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1003)) ;
    }
    cEnumerator_stringlist enumerator_39068 (enumerator_38835.current (HERE).getter_mErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1005)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1005)), kENUMERATION_UP) ;
    while (enumerator_39068.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39103 = enumerator_39068.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1006)) ;
      {
      GALGAS_string joker_39198 ; // Joker input parameter
      var_explodedArray_39103.setter_popFirst (joker_39198, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1007)) ;
      }
      cEnumerator_stringlist enumerator_39230 (var_explodedArray_39103, kENUMERATION_UP) ;
      while (enumerator_39230.hasCurrentObject ()) {
        const enumGalgasBool test_47 = GALGAS_bool (kIsStrictSup, enumerator_39230.current_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1009)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_char var_c_39291 = enumerator_39230.current_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1010)) ;
          const enumGalgasBool test_48 = GALGAS_bool (kIsNotEqual, var_c_39291.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_39291.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1011)).boolEnum () ;
          if (kBoolTrue == test_48) {
            TC_Array <C_FixItDescription> fixItArray49 ;
            inCompiler->emitSemanticError (enumerator_38835.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1012)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message"), fixItArray49  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1012)) ;
          }
        }
        enumerator_39230.gotoNextObject () ;
      }
      enumerator_39068.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_39720 (enumerator_38835.current (HERE).getter_mShadowErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1018)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1018)), kENUMERATION_UP) ;
    while (enumerator_39720.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_39755 = enumerator_39720.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1019)) ;
      {
      GALGAS_string joker_39856 ; // Joker input parameter
      var_explodedArray_39755.setter_popFirst (joker_39856, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1020)) ;
      }
      cEnumerator_stringlist enumerator_39895 (var_explodedArray_39755, kENUMERATION_UP) ;
      while (enumerator_39895.hasCurrentObject ()) {
        const enumGalgasBool test_50 = GALGAS_bool (kIsStrictSup, enumerator_39895.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1022)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_50) {
          GALGAS_char var_c_39966 = enumerator_39895.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1023)) ;
          const enumGalgasBool test_51 = GALGAS_bool (kIsNotEqual, var_c_39966.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c_39966.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1024)).boolEnum () ;
          if (kBoolTrue == test_51) {
            TC_Array <C_FixItDescription> fixItArray52 ;
            inCompiler->emitSemanticError (enumerator_38835.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1025)), GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message"), fixItArray52  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1025)) ;
          }
        }
        enumerator_39895.gotoNextObject () ;
      }
      enumerator_39720.gotoNextObject () ;
    }
    enumerator_38835.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap_40288 = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("type-shared-map.galgas", 1032)) ;
  cEnumerator_mapSearchMethodListAST enumerator_40333 (object->mProperty_mSearchMethodList, kENUMERATION_UP) ;
  while (enumerator_40333.hasCurrentObject ()) {
    const enumGalgasBool test_53 = GALGAS_bool (kIsEqual, object->mProperty_mMapStateList.getter_length (SOURCE_FILE ("type-shared-map.galgas", 1034)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_53) {
      {
      var_searchMethodMap_40288.setter_insertKey (enumerator_40333.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1035)) ;
      }
    }else if (kBoolFalse == test_53) {
      {
      var_searchMethodMap_40288.setter_insertKey (enumerator_40333.current (HERE).getter_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1037)) ;
      }
    }
    cEnumerator_stringlist enumerator_40694 (enumerator_40333.current (HERE).getter_mErrorMessage (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1040)).getter_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1040)), kENUMERATION_UP) ;
    while (enumerator_40694.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray_40729 = enumerator_40694.current (HERE).getter_mValue (HERE).getter_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("type-shared-map.galgas", 1041)) ;
      {
      GALGAS_string joker_40829 ; // Joker input parameter
      var_explodedArray_40729.setter_popFirst (joker_40829, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1042)) ;
      }
      cEnumerator_stringlist enumerator_40868 (var_explodedArray_40729, kENUMERATION_UP) ;
      while (enumerator_40868.hasCurrentObject ()) {
        const enumGalgasBool test_54 = GALGAS_bool (kIsStrictSup, enumerator_40868.current (HERE).getter_mValue (HERE).getter_length (SOURCE_FILE ("type-shared-map.galgas", 1044)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_54) {
          GALGAS_char var_c_40939 = enumerator_40868.current (HERE).getter_mValue (HERE).getter_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1045)) ;
          const enumGalgasBool test_55 = GALGAS_bool (kIsNotEqual, var_c_40939.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_55) {
            TC_Array <C_FixItDescription> fixItArray56 ;
            inCompiler->emitSemanticError (enumerator_40333.current (HERE).getter_mErrorMessage (HERE).getter_location (SOURCE_FILE ("type-shared-map.galgas", 1047)), GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message"), fixItArray56  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1047)) ;
          }
        }
        enumerator_40868.gotoNextObject () ;
      }
      enumerator_40694.gotoNextObject () ;
    }
    enumerator_40333.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1055)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1055)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1057)), object->mProperty_mMapTypeName, var_typedAttributeList_38189, object->mProperty_mInsertMethodList, object->mProperty_mSearchMethodList, var_mapAutomatonStateMap_29554, var_mapAutomatonActionMap_28908, var_mapStateSortedList_29978, var_mapOverrideList_33284, var_shadowBehaviour_27759, var_shadowMessage_27792  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1056))  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1054)) ;
  GALGAS_string var_graphFile_41705 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1070)).add_operation (object->mProperty_mMapTypeName.getter_string (SOURCE_FILE ("type-shared-map.galgas", 1070)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1070)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1070)) ;
  const enumGalgasBool test_57 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_57) {
    GALGAS_string var_theGraph_41874 = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_41927 (var_mapAutomatonStateMap_29554, kENUMERATION_UP) ;
    while (enumerator_41927.hasCurrentObject ()) {
      var_theGraph_41874.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_41927.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)).add_operation (enumerator_41927.current_lkey (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1074)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1074)) ;
      const enumGalgasBool test_58 = var_initialStateSet_28326.getter_hasKey (enumerator_41927.current_lkey (HERE).getter_string (HERE) COMMA_SOURCE_FILE ("type-shared-map.galgas", 1075)).boolEnum () ;
      if (kBoolTrue == test_58) {
        var_theGraph_41874.plusAssign_operation(GALGAS_string (" shape=box color=blue"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1076)) ;
      }else if (kBoolFalse == test_58) {
        var_theGraph_41874.plusAssign_operation(GALGAS_string (" shape=box"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1078)) ;
      }
      switch (enumerator_41927.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph_41874.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1083)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph_41874.plusAssign_operation(GALGAS_string (" fontcolor=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1085)) ;
        }
        break ;
      }
      var_theGraph_41874.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1087)) ;
      enumerator_41927.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_42405 (object->mProperty_mMapStateList, kENUMERATION_UP) ;
    while (enumerator_42405.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_42440 (enumerator_42405.current_mTransitionList (HERE), kENUMERATION_UP) ;
      while (enumerator_42440.hasCurrentObject ()) {
        var_theGraph_41874.plusAssign_operation(GALGAS_string ("\"").add_operation (enumerator_42405.current_mStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1091)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)).add_operation (enumerator_42440.current_mTargetStateName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1091)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)).add_operation (enumerator_42440.current_mActionName (HERE).getter_string (SOURCE_FILE ("type-shared-map.galgas", 1091)), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1091)) ;
        switch (enumerator_42440.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph_41874.plusAssign_operation(GALGAS_string (" fontcolor=\"orange\" color=\"orange\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1095)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph_41874.plusAssign_operation(GALGAS_string (" fontcolor=\"red\" color=\"red\""), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1097)) ;
          }
          break ;
        }
        var_theGraph_41874.plusAssign_operation(GALGAS_string ("];\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1099)) ;
        enumerator_42440.gotoNextObject () ;
      }
      enumerator_42405.gotoNextObject () ;
    }
    var_theGraph_41874.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("type-shared-map.galgas", 1102)) ;
    GALGAS_bool joker_42935 ; // Joker input parameter
    var_theGraph_41874.method_writeToFileWhenDifferentContents (var_graphFile_41705, joker_42935, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1103)) ;
  }else if (kBoolFalse == test_57) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile_41705, inCompiler COMMA_SOURCE_FILE ("type-shared-map.galgas", 1105)) ;
    }
  }
}

//---------------------------------------------------------------------------------------------------------------------*

static void defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         extensionMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineExtensionMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Filewrapper 'sharedMapGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_sharedMapGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_sharedMapGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_sharedMapGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_sharedMapGenerationTemplate_0,
  0,
  gWrapperAllDirectories_sharedMapGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader1'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                                       const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" unique map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_635_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_635 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_635.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_635.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_635_.increment () ;
      enumerator_635.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_uniqueMap {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeHeader2'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                                       const GALGAS_string & in_TYPE_5F_NAME,
                                                                                       const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                       const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public cMapElement {\n"
    "//--- Map attributes\n" ;
  GALGAS_uint index_698_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_698 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_698.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_698.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " mProperty_" ;
      result << enumerator_698.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 11)).stringValue () ;
      result << " ;\n" ;
      index_698_.increment () ;
      enumerator_698.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_964_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_964 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_964.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_964.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_964.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.h2.galgasTemplate", 17)).stringValue () ;
      index_964_.increment () ;
      enumerator_964.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- Virtual method for comparing elements\n"
    "  public : virtual typeComparisonResult compare (const cCollectionElement * inOperand) const ;\n"
    "\n"
    "//--- Virtual method that checks that all attributes are valid\n"
    "  public : virtual bool isValid (void) const ;\n"
    "\n"
    "//--- Virtual method that returns a copy of current object\n"
    "  public : virtual cMapElement * copy (void) ;\n"
    "\n"
    "//--- Description\n"
    " public : virtual void description (C_String & ioString, const int32_t inIndentation) const ;\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'sharedMapGenerationTemplate uniqueMapTypeSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                                   const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                                   const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                                   const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                                   const GALGAS_mapAutomatonStateMap & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP,
                                                                                                   const GALGAS_mapAutomatonActionMap & in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP,
                                                                                                   const GALGAS_mapStateSortedList & in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST,
                                                                                                   const GALGAS_mapOverrideList & in_MAP_5F_OVERRIDE_5F_LIST,
                                                                                                   const GALGAS_keySortedList & in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST,
                                                                                                   const GALGAS_mapAutomatonMessageKind & in_SHADOW_5F_BEHAVIOUR,
                                                                                                   const GALGAS_string & in_SHADOW_5F_MESSAGE
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_252_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_252 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_252.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_252.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_252.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 5)).stringValue () ;
      index_252_.increment () ;
      enumerator_252.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_470_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_470 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_470.hasCurrentObject ()) {
      result << ",\n"
        "mProperty_" ;
      result << enumerator_470.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_470.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_470_.increment () ;
      enumerator_470.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "bool cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::isValid (void) const {\n"
    "  return mProperty_lkey.isValid ()" ;
  GALGAS_uint index_849_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_849 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_849.hasCurrentObject ()) {
      result << " && mProperty_" ;
      result << enumerator_849.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_849_.increment () ;
      enumerator_849.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cMapElement * cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::copy (void) {\n"
    "  cMapElement * result = NULL ;\n"
    "  macroMyNew (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mProperty_lkey" ;
  GALGAS_uint index_1259_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1259 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_1259.hasCurrentObject ()) {
      result << ", mProperty_" ;
      result << enumerator_1259.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 32)).stringValue () ;
      index_1259_.increment () ;
      enumerator_1259.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_1798_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1798 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
      while (enumerator_1798.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_1798.current_mPropertyName (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mProperty_" ;
        result << enumerator_1798.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_1798_.increment () ;
        enumerator_1798.gotoNextObject () ;
      }
    }
  }
  result << "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_2517_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2517 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2517.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mProperty_" ;
      result << enumerator_2517.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mProperty_" ;
      result << enumerator_2517.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2517_.increment () ;
      enumerator_2517.gotoNextObject () ;
    }
  }
  result << "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_uniqueMap (" ;
  switch (in_SHADOW_5F_BEHAVIOUR.enumValue ()) {
  case GALGAS_mapAutomatonMessageKind::kNotBuilt :
    break ;
  case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
    {
      result << "kMapAutomatonNoIssue" ;
    }
    break ;
  case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
    {
      result << "kMapAutomatonIssueWarning" ;
    }
    break ;
  case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
    {
      result << "kMapAutomatonIssueError" ;
    }
    break ;
  }
  result << ", " ;
  result << in_SHADOW_5F_MESSAGE.getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 75)).stringValue () ;
  result << ") {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) :\n"
    "AC_GALGAS_uniqueMap (inSource) {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inSource) {\n"
    "  * ((AC_GALGAS_uniqueMap *) this) = inSource ;\n"
    "  return * this ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Map automaton states                                                                                               *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_4638_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonStateMap enumerator_4638 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_4638 = enumerator_4638.hasCurrentObject () ;
    if (nonEmpty_enumerator_4638) {
      result << "#ifndef DO_NOT_GENERATE_CHECKINGS\n"
        "  static const uint32_t kMapStateCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 107)).stringValue () ;
      result << " ;\n"
        "#endif\n" ;
    }
    while (enumerator_4638.hasCurrentObject ()) {
      result << "static const uint32_t kMapState_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_4638.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " = " ;
      result << enumerator_4638.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 110)).stringValue () ;
      result << " ;\n" ;
      index_4638_.increment () ;
      enumerator_4638.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Map automaton state names                                                                                          *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_5311_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.isValid ()) {
    cEnumerator_keySortedList enumerator_5311 (in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5311 = enumerator_5311.hasCurrentObject () ;
    if (nonEmpty_enumerator_5311) {
      result << "static const char * kMapStateNames_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_STATE_5F_MAP_5F_ORDERED_5F_LIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 120)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_5311.hasCurrentObject ()) {
      result << "  " ;
      result << enumerator_5311.current_mKey (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 122)).stringValue () ;
      if (enumerator_5311.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5311_.increment () ;
      enumerator_5311.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_5311) {
      result << "\n"
        "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Map automaton actions                                                                                              *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_5907_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.isValid ()) {
    cEnumerator_mapAutomatonActionMap enumerator_5907 (in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_5907 = enumerator_5907.hasCurrentObject () ;
    if (nonEmpty_enumerator_5907) {
      result << "static const uint32_t kMapActionCount_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " = " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 136)).stringValue () ;
      result << " ;\n" ;
    }
    while (enumerator_5907.hasCurrentObject ()) {
      result << "static const uint32_t kMapAction_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_5907.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " = " ;
      result << enumerator_5907.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 138)).stringValue () ;
      result << " ;\n" ;
      index_5907_.increment () ;
      enumerator_5907.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Map automaton transitions                                                                                          *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_6657_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_6657 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_6657 = enumerator_6657.hasCurrentObject () ;
    if (nonEmpty_enumerator_6657) {
      result << "static const cMapAutomatonTransition kMapTransitions_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 149)).stringValue () ;
      result << " * " ;
      result << in_MAP_5F_AUTOMATON_5F_ACTION_5F_MAP.getter_count (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 151)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_6657.hasCurrentObject ()) {
      result << "// State '" ;
      result << enumerator_6657.current_mStateName (HERE).stringValue () ;
      result << "', index " ;
      result << enumerator_6657.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 154)).stringValue () ;
      result << " \n" ;
      GALGAS_uint index_6751_ (0) ;
      if (enumerator_6657.current_mTransitionList (HERE).isValid ()) {
        cEnumerator_mapStateTransitionSortedList enumerator_6751 (enumerator_6657.current_mTransitionList (HERE), kENUMERATION_UP) ;
        while (enumerator_6751.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_6751.current_mTargetStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " /* " ;
          result << enumerator_6751.current_mTargetStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 156)).stringValue () ;
          result << " */, " ;
          switch (enumerator_6751.current_mTransitionMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt :
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
            {
              result << "kMapAutomatonNoIssue" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
            {
              result << "kMapAutomatonIssueWarning" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
            {
              result << "kMapAutomatonIssueError" ;
            }
            break ;
          }
          result << ", " ;
          result << enumerator_6751.current_mTransitionMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 166)).stringValue () ;
          result << "}, // for action '" ;
          result << enumerator_6751.current_mActionName (HERE).stringValue () ;
          result << "', (index " ;
          result << enumerator_6751.current_mActionIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 167)).stringValue () ;
          result << ")\n" ;
          index_6751_.increment () ;
          enumerator_6751.gotoNextObject () ;
        }
      }
      index_6657_.increment () ;
      enumerator_6657.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_6657) {
      result << "} ;\n" ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Map automaton final state issues                                                                                   *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_7810_ (0) ;
  if (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.isValid ()) {
    cEnumerator_mapStateSortedList enumerator_7810 (in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST, kENUMERATION_UP) ;
    const bool nonEmpty_enumerator_7810 = enumerator_7810.hasCurrentObject () ;
    if (nonEmpty_enumerator_7810) {
      result << "static const cMapAutomatonFinalIssue kMapAutomatonFinalIssue_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " [" ;
      result << in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 180)).stringValue () ;
      result << "] = {\n" ;
    }
    while (enumerator_7810.hasCurrentObject ()) {
      result << "  {" ;
      switch (enumerator_7810.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt :
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
        {
          result << "kMapAutomatonNoIssue" ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
        {
          result << "kMapAutomatonIssueWarning" ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
        {
          result << "kMapAutomatonIssueError" ;
        }
        break ;
      }
      result << ", " ;
      result << enumerator_7810.current_mStateMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 192)).stringValue () ;
      result << "},// state '" ;
      result << enumerator_7810.current_mStateName (HERE).stringValue () ;
      result << "' (index " ;
      result << enumerator_7810.current_mStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 193)).stringValue () ;
      result << ")\n" ;
      index_7810_.increment () ;
      enumerator_7810.gotoNextObject () ;
    }
    if (nonEmpty_enumerator_7810) {
      result << "} ;\n" ;
    }
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsStrictSup, in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 198)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::setter_closeBranch (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_location inErrorLocation,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  closeBranch (inErrorLocation,\n"
      "               kMapAutomatonFinalIssue_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ",\n"
      "               #ifndef DO_NOT_GENERATE_CHECKINGS\n"
      "                 kMapStateCount_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ",\n"
      "               #endif\n"
      "               inCompiler COMMA_THERE) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, in_MAP_5F_AUTOMATON_5F_DEFINITION_5F_SORTEDLIST.getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 212)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::method_checkAutomatonStates (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_location inErrorLocation,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const {\n"
      "  checkAutomatonStates (inErrorLocation, kMapAutomatonFinalIssue_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << ", inCompiler COMMA_THERE) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_2) {
  }
  GALGAS_uint index_9412_ (0) ;
  if (in_MAP_5F_OVERRIDE_5F_LIST.isValid ()) {
    cEnumerator_mapOverrideList enumerator_9412 (in_MAP_5F_OVERRIDE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_9412.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "//" ;
      result << GALGAS_string ("map override '").add_operation (enumerator_9412.current_mOverrideName (HERE), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 223)).stringValue () ;
      result << "*\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "static const cBranchOverrideTransformationDescriptor kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 228)).stringValue () ;
      result << " [" ;
      result << enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 229)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_10045_ (0) ;
      if (enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_10045 (enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_10045.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10045.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " /* " ;
          result << enumerator_10045.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 231)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10045.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " /* " ;
          result << enumerator_10045.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 232)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_10045.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " /* " ;
          result << enumerator_10045.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 233)).stringValue () ;
          result << " */, " ;
          switch (enumerator_10045.current_mBehaviourMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt :
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
            {
              result << "kMapAutomatonNoIssue" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
            {
              result << "kMapAutomatonIssueWarning" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
            {
              result << "kMapAutomatonIssueError" ;
            }
            break ;
          }
          result << ", " ;
          result << enumerator_10045.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 244)).stringValue () ;
          result << "},\n" ;
          index_10045_.increment () ;
          enumerator_10045.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "static const cBranchOverrideCompatibilityDescriptor kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 252)).stringValue () ;
      result << " [" ;
      result << enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 253)).stringValue () ;
      result << "] = {\n" ;
      GALGAS_uint index_11124_ (0) ;
      if (enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE).isValid ()) {
        cEnumerator_branchBehaviourSortedListForMapOverride enumerator_11124 (enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE), kENUMERATION_UP) ;
        while (enumerator_11124.hasCurrentObject ()) {
          result << "  {kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11124.current_mStartStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " /* " ;
          result << enumerator_11124.current_mStartStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 255)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11124.current_mCurrentStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " /* " ;
          result << enumerator_11124.current_mCurrentStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 256)).stringValue () ;
          result << " */, kMapState_" ;
          result << in_TYPE_5F_IDENTIFIER.stringValue () ;
          result << "_" ;
          result << enumerator_11124.current_mFinalStateName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " /* " ;
          result << enumerator_11124.current_mFinalStateIndex (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 257)).stringValue () ;
          result << " */, " ;
          switch (enumerator_11124.current_mBehaviourMessageKind (HERE).enumValue ()) {
          case GALGAS_mapAutomatonMessageKind::kNotBuilt :
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_noMessage :
            {
              result << "kMapAutomatonNoIssue" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage :
            {
              result << "kMapAutomatonIssueWarning" ;
            }
            break ;
          case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage :
            {
              result << "kMapAutomatonIssueError" ;
            }
            break ;
          }
          result << ", " ;
          result << enumerator_11124.current_mBehaviourMessage (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 268)).stringValue () ;
          result << "},\n" ;
          index_11124_.increment () ;
          enumerator_11124.gotoNextObject () ;
        }
      }
      result << "} ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_openOverrideFor" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 273)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  openOverride (kBranchBehaviourForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ", " ;
      result << enumerator_9412.current_mBranchBehaviourSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 275)).stringValue () ;
      result << ",\n"
        "                kBranchCombinationForOverride_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ", " ;
      result << enumerator_9412.current_mBranchCombinationSortedListForMapOverride (HERE).getter_length (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 276)).stringValue () ;
      result << ",\n"
        "                " ;
      result << enumerator_9412.current_mOverrideName (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 277)).stringValue () ;
      result << ",\n"
        "                inCompiler\n"
        "                COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_9412_.increment () ;
      enumerator_9412.gotoNextObject () ;
    }
  }
  result << "\n" ;
  GALGAS_uint index_12682_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_12682 (in_INSERT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_12682.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_" ;
      result << enumerator_12682.current_mInsertMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 286)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_12976_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_12976 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_12976.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_12976.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          result << " inArgument" ;
          result << index_12976_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 288)).stringValue () ;
          index_12976_IDX.increment () ;
          enumerator_12976.gotoNextObject () ;
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
      GALGAS_uint index_13308_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_13308 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_13308.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_13308_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 295)).stringValue () ;
          index_13308_IDX.increment () ;
          enumerator_13308.gotoNextObject () ;
        }
      }
      result << " COMMA_HERE)) ;\n"
        "  capCollectionElement attributes ;\n"
        "  attributes.setPointer (p) ;\n"
        "  macroDetachSharedObject (p) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const char * kInsertErrorMessage = " ;
      result << enumerator_12682.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 302)).stringValue () ;
      result << " ;\n" ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_12682.current_mInitialStateName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 303)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "insertInSharedMap (attributes,\n"
          "                   inCompiler,\n"
          "                   0,\n"
          "                   NULL,\n"
          "                   kInsertErrorMessage\n"
          "                   COMMA_THERE) ;\n" ;
      }else if (kBoolFalse == test_3) {
        result << "insertInSharedMap (attributes,\n"
          "                   inCompiler,\n"
          "                   kMapState_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_12682.current_mInitialStateName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 313)).stringValue () ;
        result << ",\n"
          "                   kMapStateNames_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " [kMapState_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_12682.current_mInitialStateName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 314)).stringValue () ;
        result << "],\n"
          "                   kInsertErrorMessage\n"
          "                   COMMA_THERE) ;\n" ;
      }
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_12682_.increment () ;
      enumerator_12682.gotoNextObject () ;
    }
  }
  GALGAS_uint index_14245_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_14245 (in_SEARCH_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_14245.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_14245.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " = " ;
      result << enumerator_14245.current_mErrorMessage (HERE).getter_string (HERE).getter_utf_38_Representation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 324)).stringValue () ;
      result << " ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::" ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_14245.current_mActionName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 327)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "method_" ;
      }else if (kBoolFalse == test_4) {
        result << "setter_" ;
      }
      result << enumerator_14245.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 332)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_14904_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_14904 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_14904.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_14904.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          result << " & outArgument" ;
          result << index_14904_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 334)).stringValue () ;
          index_14904_IDX.increment () ;
          enumerator_14904.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) " ;
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_14245.current_mActionName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 338)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_5) {
        result << "const " ;
      }else if (kBoolFalse == test_5) {
      }
      result << "{\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) performSearch (" ;
      columnMarker = result.currentColumn () ;
      result << "inKey,\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inCompiler,\n" ;
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_14245.current_mActionName (HERE).getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 345)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapAction_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "_" ;
        result << enumerator_14245.current_mActionName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 346)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapTransitions_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "kMapActionCount_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "#ifndef DO_NOT_GENERATE_CHECKINGS\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "  kMapStateCount_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "#endif\n" ;
      }else if (kBoolFalse == test_6) {
      }
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_14245.current_mSearchMethodName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 353)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_15832_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_15832 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_15832.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_15832_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 357)).stringValue () ;
          result << ".drop () ;\n" ;
          index_15832_IDX.increment () ;
          enumerator_15832.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_16017_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_16017 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
        while (enumerator_16017.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_16017_IDX.getter_string (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " = p->mProperty_" ;
          result << enumerator_16017.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 362)).stringValue () ;
          result << " ;\n" ;
          index_16017_IDX.increment () ;
          enumerator_16017.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_14245_.increment () ;
      enumerator_14245.gotoNextObject () ;
    }
  }
  GALGAS_uint index_16194_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_16194 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_16194.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_16194.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::getter_" ;
      result << enumerator_16194.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 371)).stringValue () ;
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
      result << enumerator_16194.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 376)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mProperty_" ;
      result << enumerator_16194.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 379)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_16194_IDX.increment () ;
      enumerator_16194.gotoNextObject () ;
    }
  }
  GALGAS_uint index_17218_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_17218 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_17218.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::setter_set" ;
      result << enumerator_17218.current_mPropertyName (HERE).getter_string (HERE).getter_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_17218.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 387)).stringValue () ;
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
        "  cCollectionElement * attributes = searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;\n"
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
      result << enumerator_17218.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 395)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_17218_IDX.increment () ;
      enumerator_17218.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << " *) searchForReadWriteAttribute (inKey, inCompiler COMMA_THERE) ;\n"
    "  macroNullOrValidSharedObject (result, cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mProperty_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_19534_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_19534 (in_ATTRIBUTE_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_19534.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_19534.current_mPropertyTypeProxy (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_19534.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 428)).stringValue () ;
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
      result << enumerator_19534.current_mPropertyName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("GALGAS_uniqueMap.cpp.galgasTemplate", 431)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_19534_IDX.increment () ;
      enumerator_19534.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

