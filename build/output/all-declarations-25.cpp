#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//----------------------------------------------------------------------------------------------------------------------

#include "all-declarations-25.h"

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & ioArgument_ioExtensionSettierListMap,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                       GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                       C_Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterAST * object = (const cPtr_extensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterAST) ;
  const GALGAS_extensionSetterAST temp_0 = object ;
  const GALGAS_extensionSetterAST temp_1 = object ;
  ioArgument_ioExtensionSettierListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-setter.galgas", 208)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_extensionSetterAST.mSlotID,
                                               extensionMethod_extensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterAST_buildExtensionListMaps (defineExtensionMethod_extensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@extensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_extensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("extension-setter.galgas", 229)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_extensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                   extensionGetter_extensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_extensionSetterForGeneration_headerKind (defineExtensionGetter_extensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendDeclaration1'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                                GALGAS_string & outArgument_outHeader,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_extensionSetterForGeneration temp_1 = object ;
    test_0 = temp_1.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_extensionSetterForGeneration temp_2 = object ;
      const GALGAS_extensionSetterForGeneration temp_3 = object ;
      const GALGAS_extensionSetterForGeneration temp_4 = object ;
      outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterAsFunctionDeclaration (inCompiler, extensionGetter_key (temp_2.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 239)), temp_3.readProperty_mExtensionSetterName (), temp_4.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 238))) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_extensionSetterForGeneration temp_5 = object ;
    const GALGAS_extensionSetterForGeneration temp_6 = object ;
    const GALGAS_extensionSetterForGeneration temp_7 = object ;
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionSetterDeclaration (inCompiler, extensionGetter_key (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 245)), temp_6.readProperty_mExtensionSetterName (), temp_7.readProperty_mExtensionSetterFormalParameterList () COMMA_SOURCE_FILE ("extension-setter.galgas", 244))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_ (void) {
  enterExtensionMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                              extensionMethod_extensionSetterForGeneration_appendDeclaration_31_) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendDeclaration_31_ (defineExtensionMethod_extensionSetterForGeneration_appendDeclaration_31_, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@extensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_extensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                       const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                       GALGAS_string & outArgument_outImplementation,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_extensionSetterForGeneration * object = (const cPtr_extensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_extensionSetterForGeneration) ;
  const GALGAS_extensionSetterForGeneration temp_0 = object ;
  cEnumerator_formalParameterListForGeneration enumerator_11952 (temp_0.readProperty_mExtensionSetterFormalParameterList (), kENUMERATION_UP) ;
  while (enumerator_11952.hasCurrentObject ()) {
    extensionMethod_addHeaderFileName (enumerator_11952.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 260)) ;
    enumerator_11952.gotoNextObject () ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_extensionSetterForGeneration temp_2 = object ;
    test_1 = temp_2.readProperty_mImplementedAsFunction ().boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_extensionSetterForGeneration temp_3 = object ;
      GALGAS_formalParameterListForGeneration var_extensionSetterFormalParameterList_12148 = temp_3.readProperty_mExtensionSetterFormalParameterList () ;
      {
      const GALGAS_extensionSetterForGeneration temp_4 = object ;
      var_extensionSetterFormalParameterList_12148.setter_insertAtIndex (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("extension-setter.galgas", 265)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("extension-setter.galgas", 266)), temp_4.readProperty_mReceiverType (), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 268))  COMMA_SOURCE_FILE ("extension-setter.galgas", 268)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 264)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_5 = object ;
      const GALGAS_extensionSetterForGeneration temp_6 = object ;
      ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_key (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272)).add_operation (temp_6.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 272))  COMMA_SOURCE_FILE ("extension-setter.galgas", 272)) ;
      GALGAS_string var_code_13046 ;
      {
      const GALGAS_extensionSetterForGeneration temp_7 = object ;
      const GALGAS_extensionSetterForGeneration temp_8 = object ;
      routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("extensionSetter_").add_operation (temp_7.readProperty_mExtensionSetterName ().getter_identifierRepresentation (SOURCE_FILE ("extension-setter.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 275)), ioArgument_ioInclusionSet, var_extensionSetterFormalParameterList_12148, temp_8.readProperty_mSemanticInstructionListForGeneration (), GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code_13046, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 273)) ;
      }
      const GALGAS_extensionSetterForGeneration temp_9 = object ;
      const GALGAS_extensionSetterForGeneration temp_10 = object ;
      outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionMethodAsFunctionImplementation (inCompiler, extensionGetter_key (temp_9.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 287)), temp_10.readProperty_mExtensionSetterName (), var_code_13046 COMMA_SOURCE_FILE ("extension-setter.galgas", 286))) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_extensionSetterForGeneration temp_11 = object ;
    GALGAS_unifiedTypeMap_2D_entry var_baseType_13295 = temp_11.readProperty_mReceiverType () ;
    GALGAS_bool var_searching_13340 = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 294)).isValid ()) {
      uint32_t variant_13356 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-setter.galgas", 294)).uintValue () ;
      bool loop_13356 = true ;
      while (loop_13356) {
        loop_13356 = var_searching_13340.isValid () ;
        if (loop_13356) {
          loop_13356 = var_searching_13340.boolValue () ;
        }
        if (loop_13356 && (0 == variant_13356)) {
          loop_13356 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-setter.galgas", 294)) ;
        }
        if (loop_13356) {
          variant_13356 -- ;
          enumGalgasBool test_12 = kBoolTrue ;
          if (kBoolTrue == test_12) {
            test_12 = extensionGetter_mSuperType (var_baseType_13295, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 295)).getter_isNull (SOURCE_FILE ("extension-setter.galgas", 295)).operator_not (SOURCE_FILE ("extension-setter.galgas", 295)).boolEnum () ;
            if (kBoolTrue == test_12) {
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                const GALGAS_extensionSetterForGeneration temp_14 = object ;
                test_13 = extensionGetter_mSetterMap (extensionGetter_mSuperType (var_baseType_13295, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 296)).getter_hasKey (temp_14.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-setter.galgas", 296)).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_baseType_13295 = extensionGetter_mSuperType (var_baseType_13295, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 297)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_searching_13340 = GALGAS_bool (false) ;
              }
            }
          }
          if (kBoolFalse == test_12) {
            var_searching_13340 = GALGAS_bool (false) ;
          }
        }
      }
    }
    const GALGAS_extensionSetterForGeneration temp_15 = object ;
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_key (var_baseType_13295, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305)).getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305)).add_operation (temp_15.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-setter.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 305))  COMMA_SOURCE_FILE ("extension-setter.galgas", 305)) ;
    extensionMethod_addHeaderFileName (var_baseType_13295, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 306)) ;
    GALGAS_string var_setterImplementation_14127 ;
    {
    const GALGAS_extensionSetterForGeneration temp_16 = object ;
    const GALGAS_extensionSetterForGeneration temp_17 = object ;
    const GALGAS_extensionSetterForGeneration temp_18 = object ;
    const GALGAS_extensionSetterForGeneration temp_19 = object ;
    routine_generateExtensionSetter (extensionGetter_key (temp_16.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 308)), GALGAS_string::makeEmptyString (), temp_17.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_18.readProperty_mExtensionSetterFormalParameterList (), temp_19.readProperty_mSemanticInstructionListForGeneration (), var_setterImplementation_14127, inCompiler  COMMA_SOURCE_FILE ("extension-setter.galgas", 307)) ;
    }
    const GALGAS_extensionSetterForGeneration temp_20 = object ;
    const GALGAS_extensionSetterForGeneration temp_21 = object ;
    const GALGAS_extensionSetterForGeneration temp_22 = object ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_extensionsetterImplementation (inCompiler, extensionGetter_key (temp_20.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-setter.galgas", 317)), temp_21.readProperty_mExtensionSetterName (), temp_22.readProperty_mExtensionSetterFormalParameterList (), var_setterImplementation_14127 COMMA_SOURCE_FILE ("extension-setter.galgas", 316))) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_extensionSetterForGeneration.mSlotID,
                                                     extensionMethod_extensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_extensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_extensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 85)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 85)).add_operation (temp_1.readProperty_mAbstractExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 85)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 98)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionGetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6096 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 129)) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_6187 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_1.readProperty_mAbstractExtensionGetterReturnedTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 131)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = extensionGetter_mTypeKindEnum (var_selfType_6096, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 133)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_3 = object ;
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_key (var_selfType_6096, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)), fixItArray4  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 134)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = extensionGetter_mIsConcrete (var_selfType_6096, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 135)).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_overridingAbstractExtensionGetterAST temp_6 = object ;
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension getter: '@").add_operation (extensionGetter_key (var_selfType_6096, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)), fixItArray7  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 136)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6725 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6768 = extensionGetter_mSuperType (var_selfType_6096, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 140)) ;
  GALGAS_functionSignature var_inheritedSignature_6836 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 141)) ;
  GALGAS_unifiedTypeMap_2D_entry var_inheritedReturnType_6889 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 142)) ;
  GALGAS_location var_inheritedDeclarationLocation_6944 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 143)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).isValid ()) {
    uint32_t variant_6968 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)).uintValue () ;
    bool loop_6968 = true ;
    while (loop_6968) {
      loop_6968 = var_superType_6768.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6725.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).isValid () ;
      if (loop_6968) {
        loop_6968 = var_superType_6768.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_not (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6725.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 145)).boolValue () ;
      }
      if (loop_6968 && (0 == variant_6968)) {
        loop_6968 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 144)) ;
      }
      if (loop_6968) {
        variant_6968 -- ;
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          const GALGAS_overridingAbstractExtensionGetterAST temp_9 = object ;
          test_8 = extensionGetter_mGetterMap (var_superType_6768, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 146)).getter_hasKey (temp_9.readProperty_mAbstractExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 146)).boolEnum () ;
          if (kBoolTrue == test_8) {
            GALGAS_methodQualifier var_qualifier_7377 ;
            const GALGAS_overridingAbstractExtensionGetterAST temp_10 = object ;
            GALGAS_methodKind joker_7247 ; // Joker input parameter
            GALGAS_bool joker_7324 ; // Joker input parameter
            GALGAS_string joker_7387 ; // Joker input parameter
            extensionGetter_mGetterMap (var_superType_6768, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 147)).method_searchKey (temp_10.readProperty_mAbstractExtensionGetterName (), joker_7247, var_inheritedSignature_6836, var_inheritedDeclarationLocation_6944, joker_7324, var_inheritedReturnType_6889, var_qualifier_7377, joker_7387, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 147)) ;
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7377.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 157)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                var_baseTypeName_6725 = extensionGetter_key (var_superType_6768, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 158)) ;
              }
            }
          }
        }
        var_superType_6768 = extensionGetter_mSuperType (var_superType_6768, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 161)) ;
      }
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (kIsEqual, var_baseTypeName_6725.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_overridingAbstractExtensionGetterAST temp_13 = object ;
      TC_Array <C_FixItDescription> fixItArray14 ;
      inCompiler->emitSemanticError (temp_13.readProperty_mAbstractExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray14  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 164)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6725.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_7773 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 168)) ;
      const GALGAS_overridingAbstractExtensionGetterAST temp_16 = object ;
      cEnumerator_formalInputParameterListAST enumerator_7900 (temp_16.readProperty_mAbstractExtensionGetterFormalInputParameterList (), kENUMERATION_UP) ;
      while (enumerator_7900.hasCurrentObject ()) {
        var_formalParameterListForGeneration_7773.addAssign_operation (enumerator_7900.current_mFormalSelector (HERE), extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), enumerator_7900.current_mFormalArgumentTypeName (HERE), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 172)), enumerator_7900.current_mFormalArgumentName (HERE).readProperty_string (), enumerator_7900.current_mFormalArgumentName (HERE), enumerator_7900.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 170)) ;
        enumerator_7900.gotoNextObject () ;
      }
      {
      const GALGAS_overridingAbstractExtensionGetterAST temp_17 = object ;
      routine_checkGetterSignatures (var_formalParameterListForGeneration_7773, var_returnType_6187, temp_17.readProperty_mAbstractExtensionGetterName ().readProperty_location (), var_inheritedSignature_6836, var_inheritedReturnType_6889, var_inheritedDeclarationLocation_6944, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 177)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionGetterListMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionGetterAST * object = (const cPtr_overridingAbstractExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionGetterAST) ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionGetterAST temp_1 = object ;
  ioArgument_ioOverridingAbstractExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mAbstractExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-getter.galgas", 205)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 68)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 68)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 68)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 82)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionMethodAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5732 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 114)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_mTypeKindEnum (var_selfType_5732, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 116)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_key (var_selfType_5732, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 117)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_mIsConcrete (var_selfType_5732, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 118)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionMethodAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension method: '@").add_operation (extensionGetter_key (var_selfType_5732, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 119)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6243 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6286 = extensionGetter_mSuperType (var_selfType_5732, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 123)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6335 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 124)) ;
  GALGAS_location var_inheritedDeclarationLocation_6411 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 125)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).isValid ()) {
    uint32_t variant_6435 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)).uintValue () ;
    bool loop_6435 = true ;
    while (loop_6435) {
      loop_6435 = var_superType_6286.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6243.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).isValid () ;
      if (loop_6435) {
        loop_6435 = var_superType_6286.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_not (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6243.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 127)).boolValue () ;
      }
      if (loop_6435 && (0 == variant_6435)) {
        loop_6435 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 126)) ;
      }
      if (loop_6435) {
        variant_6435 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionMethodAST temp_8 = object ;
          test_7 = extensionGetter_mInstanceMethodMap (var_superType_6286, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 128)).getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 128)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_6835 ;
            const GALGAS_overridingAbstractExtensionMethodAST temp_9 = object ;
            GALGAS_methodKind joker_6734 ; // Joker input parameter
            GALGAS_bool joker_6811 ; // Joker input parameter
            GALGAS_instanceMethodMutability joker_6845_2 ; // Joker input parameter
            GALGAS_string joker_6845_1 ; // Joker input parameter
            extensionGetter_mInstanceMethodMap (var_superType_6286, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 129)).method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_6734, var_inheritedSignature_6335, var_inheritedDeclarationLocation_6411, joker_6811, var_qualifier_6835, joker_6845_2, joker_6845_1, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 129)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6835.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 138)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6243 = extensionGetter_key (var_superType_6286, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 139)) ;
              }
            }
          }
        }
        var_superType_6286 = extensionGetter_mSuperType (var_superType_6286, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 142)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6243.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionMethodAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 145)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_7195 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("extension-overriding-abstract-method.galgas", 148)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7399 ;
  {
  const GALGAS_overridingAbstractExtensionMethodAST temp_14 = object ;
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, temp_14.readProperty_mOverridingExtensionMethodFormalParameterList (), var_variableMap_7195, var_formalParameterListForGeneration_7399, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 149)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6243.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionMethodAST temp_16 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_7399, temp_16.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_6335, var_inheritedDeclarationLocation_6411, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 157)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionMethodListMap,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionMethodAST * object = (const cPtr_overridingAbstractExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionMethodAST) ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionMethodAST temp_1 = object ;
  ioArgument_ioOverridingAbstractExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-method.galgas", 184)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingAbstractExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 66)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 66)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 66)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingAbstractExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingAbstractExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                          GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                          GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                          GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                          GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                          GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 80)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                         const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                         const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                         const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                         GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingAbstractExtensionSetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                                   GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                   const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                                   const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                                   const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                                   GALGAS_semanticDeclarationListForGeneration & /* ioArgument_ioSemanticDeclarationListForGeneration */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_5567 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_0.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 111)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = extensionGetter_mTypeKindEnum (var_selfType_5567, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).getter_isClassType (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 113)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_2 = object ;
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_key (var_selfType_5567, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)), fixItArray3  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 114)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = extensionGetter_mIsConcrete (var_selfType_5567, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 115)).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_overridingAbstractExtensionSetterAST temp_5 = object ;
        TC_Array <C_FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare an abstract extension setter: '@").add_operation (extensionGetter_key (var_selfType_5567, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)).add_operation (GALGAS_string ("' is not an abstract class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 116)) ;
      }
    }
  }
  GALGAS_string var_baseTypeName_6078 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6121 = extensionGetter_mSuperType (var_selfType_5567, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 120)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6170 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 121)) ;
  GALGAS_location var_inheritedDeclarationLocation_6236 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 122)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).isValid ()) {
    uint32_t variant_6260 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)).uintValue () ;
    bool loop_6260 = true ;
    while (loop_6260) {
      loop_6260 = var_superType_6121.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6078.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).isValid () ;
      if (loop_6260) {
        loop_6260 = var_superType_6121.getter_isNull (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_not (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6078.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 124)).boolValue () ;
      }
      if (loop_6260 && (0 == variant_6260)) {
        loop_6260 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 123)) ;
      }
      if (loop_6260) {
        variant_6260 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingAbstractExtensionSetterAST temp_8 = object ;
          test_7 = extensionGetter_mSetterMap (var_superType_6121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 125)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_6566 ;
            const GALGAS_overridingAbstractExtensionSetterAST temp_9 = object ;
            GALGAS_methodKind joker_6527 ; // Joker input parameter
            GALGAS_bool joker_6550 ; // Joker input parameter
            GALGAS_string joker_6568 ; // Joker input parameter
            extensionGetter_mSetterMap (var_superType_6121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)).method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_6527, var_inheritedSignature_6170, joker_6550, var_qualifier_6566, joker_6568, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 126)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_6566.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 127)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6078 = extensionGetter_key (var_superType_6121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 128)) ;
              }
            }
          }
        }
        var_superType_6121 = extensionGetter_mSuperType (var_superType_6121, inCompiler COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 131)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6078.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingAbstractExtensionSetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 134)) ;
    }
  }
  GALGAS_localVarManager var_variableMap_6909 = GALGAS_localVarManager::constructor_default (SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 137)) ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_7113 ;
  {
  const GALGAS_overridingAbstractExtensionSetterAST temp_14 = object ;
  routine_buildLocalVariableMapAndSignature (constinArgument_inSemanticContext, temp_14.readProperty_mOverridingExtensionSetterFormalParameterList (), var_variableMap_6909, var_formalParameterListForGeneration_7113, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 138)) ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6078.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      const GALGAS_overridingAbstractExtensionSetterAST temp_16 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_7113, temp_16.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6170, var_inheritedDeclarationLocation_6236, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 146)) ;
      }
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingAbstractExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingAbstractExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingAbstractExtensionSetterListMap,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                         GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractExtensionSetterAST * object = (const cPtr_overridingAbstractExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractExtensionSetterAST) ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingAbstractExtensionSetterAST temp_1 = object ;
  ioArgument_ioOverridingAbstractExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-abstract-setter.galgas", 172)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingAbstractExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingAbstractExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 111)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                                extensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionGetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionGetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionGetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingExtensionGetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension getter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)).add_operation (temp_1.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 119)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                          extensionGetter_overridingExtensionGetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionGetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionGetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionGetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingExtensionGetterAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6638 = function_getterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 147)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6638, var_nameForUsefulness_6638, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 148)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6830 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 149)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6830, var_nameForUsefulness_6638 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 150)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_7011 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 152)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_mTypeKindEnum (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 154)).getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 154)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 154)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionGetterAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension getter: '@").add_operation (extensionGetter_key (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 155)) ;
    }
  }
  GALGAS_string var_baseTypeName_7336 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_7379 = extensionGetter_mSuperType (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 159)) ;
  GALGAS_functionSignature var_inheritedSignature_7447 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 160)) ;
  GALGAS_unifiedTypeMap_2D_entry var_inheritedReturnType_7478 = GALGAS_unifiedTypeMap_2D_entry::constructor_null (SOURCE_FILE ("extension-overriding-getter.galgas", 161)) ;
  GALGAS_location var_inheritedDeclarationLocation_7554 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 162)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 163)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 163)).isValid ()) {
    uint32_t variant_7578 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-getter.galgas", 163)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 163)).uintValue () ;
    bool loop_7578 = true ;
    while (loop_7578) {
      loop_7578 = var_superType_7379.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_7336.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 164)).isValid () ;
      if (loop_7578) {
        loop_7578 = var_superType_7379.getter_isNull (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_not (SOURCE_FILE ("extension-overriding-getter.galgas", 164)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_7336.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 164)).boolValue () ;
      }
      if (loop_7578 && (0 == variant_7578)) {
        loop_7578 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-getter.galgas", 163)) ;
      }
      if (loop_7578) {
        variant_7578 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionGetterAST temp_8 = object ;
          test_7 = extensionGetter_mGetterMap (var_superType_7379, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)).getter_hasKey (temp_8.readProperty_mOverridingExtensionGetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 165)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_8008 ;
            const GALGAS_overridingExtensionGetterAST temp_9 = object ;
            GALGAS_methodKind joker_7861 ; // Joker input parameter
            GALGAS_bool joker_7938 ; // Joker input parameter
            GALGAS_string joker_8018 ; // Joker input parameter
            extensionGetter_mGetterMap (var_superType_7379, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)).method_searchKey (temp_9.readProperty_mOverridingExtensionGetterName (), joker_7861, var_inheritedSignature_7447, var_inheritedDeclarationLocation_7554, joker_7938, var_inheritedReturnType_7478, var_qualifier_8008, joker_8018, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 166)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_8008.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-getter.galgas", 176)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_7336 = extensionGetter_key (var_superType_7379, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 177)) ;
              }
            }
          }
        }
        var_superType_7379 = extensionGetter_mSuperType (var_superType_7379, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 180)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_7336.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionGetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionGetterName ().readProperty_location (), GALGAS_string ("this getter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 183)) ;
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_14 = object ;
  GALGAS_analysisContext var_analysisContext_8367 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_7011, GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 190)), GALGAS_string ("object."), temp_14.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 186)) ;
  GALGAS_formalInputParameterListForGeneration var_formalParameterListForGeneration_9254 ;
  GALGAS_unifiedTypeMap_2D_entry var_returnType_9296 ;
  GALGAS_string var_returnVariableCppName_9335 ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_9419 ;
  {
  const GALGAS_overridingExtensionGetterAST temp_15 = object ;
  GALGAS_typedPropertyList temp_16 ;
  const enumGalgasBool test_17 = extensionGetter_mTypeKindEnum (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 199)).getter_isClassType (SOURCE_FILE ("extension-overriding-getter.galgas", 199)).operator_or (GALGAS_bool (kIsEqual, extensionGetter_mTypeKindEnum (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 199)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-getter.galgas", 199)))) COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 199)).boolEnum () ;
  if (kBoolTrue == test_17) {
    temp_16 = extensionGetter_mAllTypedPropertyList (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 200)) ;
  }else if (kBoolFalse == test_17) {
    temp_16 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-getter.galgas", 201)) ;
  }
  const GALGAS_overridingExtensionGetterAST temp_18 = object ;
  const GALGAS_overridingExtensionGetterAST temp_19 = object ;
  const GALGAS_overridingExtensionGetterAST temp_20 = object ;
  const GALGAS_overridingExtensionGetterAST temp_21 = object ;
  routine_analyzeFunctionBody (var_nameForUsefulness_6638, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_8367, temp_15.readProperty_mOverridingExtensionGetterFormalInputParameterList (), temp_16, GALGAS_string ("object->"), temp_18.readProperty_mOverridingExtensionGetterInstructionList (), temp_19.readProperty_mOverridingExtensionGetterReturnedVariableName (), temp_20.readProperty_mOverridingExtensionGetterReturnedTypeName (), temp_21.readProperty_mEndOfReaderLocation (), var_formalParameterListForGeneration_9254, var_returnType_9296, var_returnVariableCppName_9335, var_semanticInstructionListForGeneration_9419, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 194)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, var_baseTypeName_7336.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionGetterAST temp_23 = object ;
      routine_checkGetterSignatures (var_formalParameterListForGeneration_9254, var_returnType_9296, temp_23.readProperty_mOverridingExtensionGetterName ().readProperty_location (), var_inheritedSignature_7447, var_inheritedReturnType_7478, var_inheritedDeclarationLocation_7554, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 215)) ;
      }
    }
  }
  const GALGAS_overridingExtensionGetterAST temp_24 = object ;
  const GALGAS_overridingExtensionGetterAST temp_25 = object ;
  const GALGAS_overridingExtensionGetterAST temp_26 = object ;
  const GALGAS_overridingExtensionGetterAST temp_27 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension getter ").add_operation (temp_24.readProperty_mOverridingExtensionGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 226)), GALGAS_overrideExtensionGetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("getter-").add_operation (temp_25.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)).add_operation (temp_26.readProperty_mOverridingExtensionGetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-getter.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 229)), var_selfType_7011, var_baseTypeName_7336, temp_27.readProperty_mOverridingExtensionGetterName ().readProperty_string (), var_returnType_9296, var_returnVariableCppName_9335, var_formalParameterListForGeneration_9254, extensionGetter_mAllTypedPropertyList (var_selfType_7011, inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 236)), var_semanticInstructionListForGeneration_9419  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 227))  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 225)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                         extensionMethod_overridingExtensionGetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionGetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionGetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionGetterListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionGetterAST * object = (const cPtr_overridingExtensionGetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionGetterAST) ;
  const GALGAS_overridingExtensionGetterAST temp_0 = object ;
  const GALGAS_overridingExtensionGetterAST temp_1 = object ;
  ioArgument_ioOverridingExtensionGetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionGetterName ()  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 258)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionGetterAST.mSlotID,
                                               extensionMethod_overridingExtensionGetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionGetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionGetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overrideExtensionGetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overrideExtensionGetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-getter.galgas", 281)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                   extensionGetter_overrideExtensionGetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overrideExtensionGetterForGeneration_headerKind (defineExtensionGetter_overrideExtensionGetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overrideExtensionGetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                               const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                               GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                               GALGAS_string & outArgument_outImplementation,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overrideExtensionGetterForGeneration * object = (const cPtr_overrideExtensionGetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overrideExtensionGetterForGeneration) ;
  GALGAS_string var_extensionReaderCode_13454 ;
  {
  const GALGAS_overrideExtensionGetterForGeneration temp_0 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_1 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_2 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_3 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_4 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_5 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_6 = object ;
  routine_generateExtensionGetter (temp_0.readProperty_mReceiverType (), temp_1.readProperty_mBaseTypeName (), ioArgument_ioInclusionSet, temp_2.readProperty_mOverridingExtensionGetterName (), temp_3.readProperty_mOverridingExtensionGetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), GALGAS_string ("C_Compiler"), extensionGetter_key (temp_5.readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 299)), temp_6.readProperty_mResultVarCppName (), var_extensionReaderCode_13454, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 291)) ;
  }
  const GALGAS_overrideExtensionGetterForGeneration temp_7 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_8 = object ;
  const GALGAS_overrideExtensionGetterForGeneration temp_9 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionGetterImplementation (inCompiler, extensionGetter_key (temp_7.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 304)), temp_8.readProperty_mOverridingExtensionGetterName (), temp_9.readProperty_mResultType (), var_extensionReaderCode_13454 COMMA_SOURCE_FILE ("extension-overriding-getter.galgas", 303))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overrideExtensionGetterForGeneration.mSlotID,
                                                     extensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overrideExtensionGetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionMethodAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingExtensionMethodAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension method @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)).add_operation (temp_1.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 83)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                          extensionGetter_overridingExtensionMethodAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionMethodAST_keyRepresentation (defineExtensionGetter_overridingExtensionMethodAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 97)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                                extensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionMethodAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionMethodAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingExtensionMethodAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6021 = function_methodNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 123)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6021, var_nameForUsefulness_6021, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 124)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6213 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 125)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6213, var_nameForUsefulness_6021 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 126)) ;
  }
  const GALGAS_overridingExtensionMethodAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6394 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 128)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_mTypeKindEnum (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 130)).getter_isClassType (SOURCE_FILE ("extension-overriding-method.galgas", 130)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 130)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionMethodAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("cannot declare a extension method: '@").add_operation (extensionGetter_key (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 131)) ;
    }
  }
  GALGAS_string var_baseTypeName_6719 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6762 = extensionGetter_mSuperType (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 135)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6811 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 136)) ;
  GALGAS_location var_inheritedDeclarationLocation_6887 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 137)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 138)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 138)).isValid ()) {
    uint32_t variant_6911 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-method.galgas", 138)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 138)).uintValue () ;
    bool loop_6911 = true ;
    while (loop_6911) {
      loop_6911 = var_superType_6762.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6719.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 139)).isValid () ;
      if (loop_6911) {
        loop_6911 = var_superType_6762.getter_isNull (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_not (SOURCE_FILE ("extension-overriding-method.galgas", 139)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6719.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 139)).boolValue () ;
      }
      if (loop_6911 && (0 == variant_6911)) {
        loop_6911 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-method.galgas", 138)) ;
      }
      if (loop_6911) {
        variant_6911 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionMethodAST temp_8 = object ;
          test_7 = extensionGetter_mInstanceMethodMap (var_superType_6762, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 140)).getter_hasKey (temp_8.readProperty_mOverridingExtensionMethodName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 140)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7311 ;
            const GALGAS_overridingExtensionMethodAST temp_9 = object ;
            GALGAS_methodKind joker_7210 ; // Joker input parameter
            GALGAS_bool joker_7287 ; // Joker input parameter
            GALGAS_instanceMethodMutability joker_7321_2 ; // Joker input parameter
            GALGAS_string joker_7321_1 ; // Joker input parameter
            extensionGetter_mInstanceMethodMap (var_superType_6762, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 141)).method_searchKey (temp_9.readProperty_mOverridingExtensionMethodName (), joker_7210, var_inheritedSignature_6811, var_inheritedDeclarationLocation_6887, joker_7287, var_qualifier_7311, joker_7321_2, joker_7321_1, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 141)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7311.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-method.galgas", 150)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6719 = extensionGetter_key (var_superType_6762, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 151)) ;
              }
            }
          }
        }
        var_superType_6762 = extensionGetter_mSuperType (var_superType_6762, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 154)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6719.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionMethodAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionMethodName ().readProperty_location (), GALGAS_string ("this method is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 157)) ;
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_14 = object ;
  GALGAS_analysisContext var_analysisContext_7671 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_6394, GALGAS_bool (false), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 164)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 160)) ;
  GALGAS_bool var_isRefClass_7955 = GALGAS_bool (false) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    GALGAS_bool var_reference_8036 ;
    const bool optionalResult8008 = extensionGetter_mTypeKindEnum (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 169)).optional_classType (var_reference_8036) ;
    if (!optionalResult8008) {
      test_15 = kBoolFalse ;
    }
    if (kBoolTrue == test_15) {
      var_isRefClass_7955 = var_reference_8036 ;
    }
  }
  GALGAS_typedPropertyList var_mutableProperties_8099 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 172)) ;
  GALGAS_typedPropertyList var_nonMutableProperties_8150 = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-method.galgas", 173)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (kIsEqual, extensionGetter_mTypeKindEnum (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 174)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("extension-overriding-method.galgas", 174)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      var_nonMutableProperties_8150 = extensionGetter_mAllTypedPropertyList (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 175)) ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      GALGAS_bool var_isReference_8362 ;
      const bool optionalResult8332 = extensionGetter_mTypeKindEnum (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 176)).optional_classType (var_isReference_8362) ;
      if (!optionalResult8332) {
        test_17 = kBoolFalse ;
      }
      if (kBoolTrue == test_17) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = var_isReference_8362.boolEnum () ;
          if (kBoolTrue == test_18) {
            var_mutableProperties_8099 = extensionGetter_mAllTypedPropertyList (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 178)) ;
          }
        }
        if (kBoolFalse == test_18) {
          var_nonMutableProperties_8150 = extensionGetter_mAllTypedPropertyList (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 180)) ;
        }
      }
    }
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8910 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8952 ;
  {
  const GALGAS_overridingExtensionMethodAST temp_19 = object ;
  const GALGAS_overridingExtensionMethodAST temp_20 = object ;
  const GALGAS_overridingExtensionMethodAST temp_21 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6021, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7671, temp_19.readProperty_mOverridingExtensionMethodFormalParameterList (), var_nonMutableProperties_8150, var_mutableProperties_8099, temp_20.readProperty_mOverridingExtensionMethodInstructionList (), temp_21.readProperty_mEndOfMethodLocation (), var_semanticInstructionListForGeneration_8910, var_formalParameterListForGeneration_8952, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 183)) ;
  }
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6719.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_22) {
      {
      const GALGAS_overridingExtensionMethodAST temp_23 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_8952, temp_23.readProperty_mOverridingExtensionMethodName ().readProperty_location (), var_inheritedSignature_6811, var_inheritedDeclarationLocation_6887, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 197)) ;
      }
    }
  }
  const GALGAS_overridingExtensionMethodAST temp_24 = object ;
  const GALGAS_overridingExtensionMethodAST temp_25 = object ;
  const GALGAS_overridingExtensionMethodAST temp_26 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("override extension method ").add_operation (temp_24.readProperty_mOverridingExtensionMethodName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 206)), GALGAS_overridingExtensionMethodForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("method-").add_operation (extensionGetter_key (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)).getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)).add_operation (temp_25.readProperty_mOverridingExtensionMethodName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-method.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 209)), var_selfType_6394, var_baseTypeName_6719, temp_26.readProperty_mOverridingExtensionMethodName ().readProperty_string (), var_formalParameterListForGeneration_8952, extensionGetter_mAllTypedPropertyList (var_selfType_6394, inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 214)), var_semanticInstructionListForGeneration_8910  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 207))  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 205)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                         extensionMethod_overridingExtensionMethodAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_semanticAnalysis (defineExtensionMethod_overridingExtensionMethodAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionMethodListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodAST * object = (const cPtr_overridingExtensionMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodAST) ;
  const GALGAS_overridingExtensionMethodAST temp_0 = object ;
  const GALGAS_overridingExtensionMethodAST temp_1 = object ;
  ioArgument_ioOverridingExtensionMethodListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionMethodName ()  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 236)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionMethodAST.mSlotID,
                                               extensionMethod_overridingExtensionMethodAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionMethodAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionMethodForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overridingExtensionMethodForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-method.galgas", 257)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionMethodForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionMethodForGeneration_headerKind (defineExtensionGetter_overridingExtensionMethodForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionMethodForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionMethodForGeneration * object = (const cPtr_overridingExtensionMethodForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionMethodForGeneration) ;
  GALGAS_string var_methodImplementation_12697 ;
  {
  const GALGAS_overridingExtensionMethodForGeneration temp_0 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_1 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_2 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_3 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_4 = object ;
  routine_generateExtensionMethod (temp_0.readProperty_mReceiverType (), temp_1.readProperty_mBaseTypeName (), ioArgument_ioInclusionSet, temp_2.readProperty_mExtensionMethodName (), temp_3.readProperty_mExtensionMethodFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12697, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 266)) ;
  }
  const GALGAS_overridingExtensionMethodForGeneration temp_5 = object ;
  const GALGAS_overridingExtensionMethodForGeneration temp_6 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionMethodImplementation (inCompiler, extensionGetter_key (temp_5.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 276)), temp_6.readProperty_mExtensionMethodName (), var_methodImplementation_12697 COMMA_SOURCE_FILE ("extension-overriding-method.galgas", 275))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionMethodForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionMethodForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 89)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                                extensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterDeclarationInGraph (defineExtensionMethod_overridingExtensionSetterAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_overridingExtensionSetterAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingExtensionSetterAST temp_1 = object ;
  result_result = GALGAS_string ("overriding extension setter @").add_operation (temp_0.readProperty_mTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 97)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 97)).add_operation (temp_1.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                          extensionGetter_overridingExtensionSetterAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionSetterAST_keyRepresentation (defineExtensionGetter_overridingExtensionSetterAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * /* inObject */,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & /* ioArgument_ioSemanticContext */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_enterInSemanticContext (defineExtensionMethod_overridingExtensionSetterAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST semanticAnalysis'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingExtensionSetterAST temp_1 = object ;
  GALGAS_lstring var_nameForUsefulness_6028 = function_setterNameForUsefulEntitiesGraph (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 124)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_6028, var_nameForUsefulness_6028, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 125)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_2 = object ;
  GALGAS_lstring var_typeNameForUsefulness_6220 = function_typeNameForUsefulEntitiesGraph (temp_2.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 126)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_typeNameForUsefulness_6220, var_nameForUsefulness_6028 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 127)) ;
  }
  const GALGAS_overridingExtensionSetterAST temp_3 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_selfType_6401 = extensionGetter_searchKey (constinArgument_inSemanticContext.readProperty_mTypeMap (), temp_3.readProperty_mTypeName (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 129)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = extensionGetter_mTypeKindEnum (var_selfType_6401, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 131)).getter_isClassType (SOURCE_FILE ("extension-overriding-setter.galgas", 131)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 131)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_overridingExtensionSetterAST temp_5 = object ;
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("cannot declare a extension setter: '@").add_operation (extensionGetter_key (var_selfType_6401, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)).add_operation (GALGAS_string ("' is not a class"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)), fixItArray6  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 132)) ;
    }
  }
  GALGAS_string var_baseTypeName_6726 = GALGAS_string::makeEmptyString () ;
  GALGAS_unifiedTypeMap_2D_entry var_superType_6769 = extensionGetter_mSuperType (var_selfType_6401, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 136)) ;
  GALGAS_formalParameterSignature var_inheritedSignature_6818 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 137)) ;
  GALGAS_location var_inheritedDeclarationLocation_6894 = GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 138)) ;
  if (constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 139)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 139)).isValid ()) {
    uint32_t variant_6918 = constinArgument_inSemanticContext.readProperty_mTypeMap ().getter_count (SOURCE_FILE ("extension-overriding-setter.galgas", 139)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 139)).uintValue () ;
    bool loop_6918 = true ;
    while (loop_6918) {
      loop_6918 = var_superType_6769.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6726.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 140)).isValid () ;
      if (loop_6918) {
        loop_6918 = var_superType_6769.getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 140)).operator_and (GALGAS_bool (kIsEqual, var_baseTypeName_6726.objectCompare (GALGAS_string::makeEmptyString ())) COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 140)).boolValue () ;
      }
      if (loop_6918 && (0 == variant_6918)) {
        loop_6918 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 139)) ;
      }
      if (loop_6918) {
        variant_6918 -- ;
        enumGalgasBool test_7 = kBoolTrue ;
        if (kBoolTrue == test_7) {
          const GALGAS_overridingExtensionSetterAST temp_8 = object ;
          test_7 = extensionGetter_mSetterMap (var_superType_6769, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 141)).getter_hasKey (temp_8.readProperty_mOverridingExtensionSetterName ().readProperty_string () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 141)).boolEnum () ;
          if (kBoolTrue == test_7) {
            GALGAS_methodQualifier var_qualifier_7224 ;
            const GALGAS_overridingExtensionSetterAST temp_9 = object ;
            GALGAS_methodKind joker_7185 ; // Joker input parameter
            GALGAS_bool joker_7208 ; // Joker input parameter
            GALGAS_string joker_7226 ; // Joker input parameter
            extensionGetter_mSetterMap (var_superType_6769, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 142)).method_searchKey (temp_9.readProperty_mOverridingExtensionSetterName (), joker_7185, var_inheritedSignature_6818, joker_7208, var_qualifier_7224, joker_7226, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 142)) ;
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (kIsInfOrEqual, var_qualifier_7224.objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("extension-overriding-setter.galgas", 143)))).boolEnum () ;
              if (kBoolTrue == test_10) {
                var_baseTypeName_6726 = extensionGetter_key (var_superType_6769, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 144)) ;
              }
            }
          }
        }
        var_superType_6769 = extensionGetter_mSuperType (var_superType_6769, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 147)) ;
      }
    }
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (kIsEqual, var_baseTypeName_6726.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_overridingExtensionSetterAST temp_12 = object ;
      TC_Array <C_FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mOverridingExtensionSetterName ().readProperty_location (), GALGAS_string ("this setter is not declared by a super class"), fixItArray13  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 150)) ;
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_14 = object ;
  GALGAS_analysisContext var_analysisContext_7567 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_string ("object"), GALGAS_selfAvailability::constructor_available (var_selfType_6401, GALGAS_bool (true), GALGAS_bool (true)  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 157)), GALGAS_string ("object->"), temp_14.readProperty_requiresSelfForAccessingProperty ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 153)) ;
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_8235 ;
  GALGAS_formalParameterListForGeneration var_formalParameterListForGeneration_8277 ;
  {
  const GALGAS_overridingExtensionSetterAST temp_15 = object ;
  const GALGAS_overridingExtensionSetterAST temp_16 = object ;
  const GALGAS_overridingExtensionSetterAST temp_17 = object ;
  routine_analyzeRoutineBody (var_nameForUsefulness_6028, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_7567, temp_15.readProperty_mOverridingExtensionSetterFormalParameterList (), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("extension-overriding-setter.galgas", 166)), extensionGetter_mAllTypedPropertyList (var_selfType_6401, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 167)), temp_16.readProperty_mOverridingExtensionSetterInstructionList (), temp_17.readProperty_mEndOfSetterDeclarationLocation (), var_semanticInstructionListForGeneration_8235, var_formalParameterListForGeneration_8277, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 161)) ;
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (kIsNotEqual, var_baseTypeName_6726.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      const GALGAS_overridingExtensionSetterAST temp_19 = object ;
      routine_checkMethodSignatures (var_formalParameterListForGeneration_8277, temp_19.readProperty_mOverridingExtensionSetterName ().readProperty_location (), var_inheritedSignature_6818, var_inheritedDeclarationLocation_6894, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 175)) ;
      }
    }
  }
  const GALGAS_overridingExtensionSetterAST temp_20 = object ;
  const GALGAS_overridingExtensionSetterAST temp_21 = object ;
  const GALGAS_overridingExtensionSetterAST temp_22 = object ;
  const GALGAS_overridingExtensionSetterAST temp_23 = object ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string (" overriding extension setter ").add_operation (temp_20.readProperty_mOverridingExtensionSetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 184)), GALGAS_overridingExtensionSetterForGeneration::constructor_new (GALGAS_bool (false), GALGAS_string ("setter-").add_operation (temp_21.readProperty_mTypeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)).add_operation (temp_22.readProperty_mOverridingExtensionSetterName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 187)), var_selfType_6401, var_baseTypeName_6726, temp_23.readProperty_mOverridingExtensionSetterName ().readProperty_string (), var_formalParameterListForGeneration_8277, extensionGetter_mAllTypedPropertyList (var_selfType_6401, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 192)), var_semanticInstructionListForGeneration_8235  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 185))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 183)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                         extensionMethod_overridingExtensionSetterAST_semanticAnalysis) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_semanticAnalysis (defineExtensionMethod_overridingExtensionSetterAST_semanticAnalysis, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterAST buildExtensionListMaps'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionSettierListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & ioArgument_ioOverridingExtensionSetterListMap,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionSetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionMethodListMapAST */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionMethodListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioAbstractExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingExtensionGetterListMap */,
                                                                                 GALGAS_genericExtensionMethodListMap & /* ioArgument_ioOverridingAbstractExtensionGetterListMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterAST * object = (const cPtr_overridingExtensionSetterAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterAST) ;
  const GALGAS_overridingExtensionSetterAST temp_0 = object ;
  const GALGAS_overridingExtensionSetterAST temp_1 = object ;
  ioArgument_ioOverridingExtensionSetterListMap.addAssign_operation (temp_0.readProperty_mTypeName ().readProperty_string (), temp_1.readProperty_mOverridingExtensionSetterName ()  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 215)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps (void) {
  enterExtensionMethod_buildExtensionListMaps (kTypeDescriptor_GALGAS_overridingExtensionSetterAST.mSlotID,
                                               extensionMethod_overridingExtensionSetterAST_buildExtensionListMaps) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterAST_buildExtensionListMaps (defineExtensionMethod_overridingExtensionSetterAST_buildExtensionListMaps, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@overridingExtensionSetterForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_overridingExtensionSetterForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("extension-overriding-setter.galgas", 236)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                   extensionGetter_overridingExtensionSetterForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_overridingExtensionSetterForGeneration_headerKind (defineExtensionGetter_overridingExtensionSetterForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@overridingExtensionSetterForGeneration appendSpecificImplementation'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                 const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                                 GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                                 GALGAS_string & outArgument_outImplementation,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingExtensionSetterForGeneration * object = (const cPtr_overridingExtensionSetterForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_overridingExtensionSetterForGeneration) ;
  GALGAS_string var_methodImplementation_12031 ;
  {
  const GALGAS_overridingExtensionSetterForGeneration temp_0 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_1 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_2 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_3 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_4 = object ;
  routine_generateExtensionSetter (extensionGetter_key (temp_0.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 246)), temp_1.readProperty_mBaseTypeName (), temp_2.readProperty_mExtensionSetterName (), ioArgument_ioInclusionSet, temp_3.readProperty_mExtensionSetterFormalParameterList (), temp_4.readProperty_mSemanticInstructionListForGeneration (), var_methodImplementation_12031, inCompiler  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 245)) ;
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_5 = object ;
  GALGAS_unifiedTypeMap_2D_entry var_baseType_12072 = temp_5.readProperty_mReceiverType () ;
  GALGAS_bool var_searching_12115 = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 256)).isValid ()) {
    uint32_t variant_12129 = GALGAS_uint::constructor_max (SOURCE_FILE ("extension-overriding-setter.galgas", 256)).uintValue () ;
    bool loop_12129 = true ;
    while (loop_12129) {
      loop_12129 = var_searching_12115.isValid () ;
      if (loop_12129) {
        loop_12129 = var_searching_12115.boolValue () ;
      }
      if (loop_12129 && (0 == variant_12129)) {
        loop_12129 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("extension-overriding-setter.galgas", 256)) ;
      }
      if (loop_12129) {
        variant_12129 -- ;
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = extensionGetter_mSuperType (var_baseType_12072, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 257)).getter_isNull (SOURCE_FILE ("extension-overriding-setter.galgas", 257)).operator_not (SOURCE_FILE ("extension-overriding-setter.galgas", 257)).boolEnum () ;
          if (kBoolTrue == test_6) {
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              const GALGAS_overridingExtensionSetterForGeneration temp_8 = object ;
              test_7 = extensionGetter_mSetterMap (extensionGetter_mSuperType (var_baseType_12072, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)).getter_hasKey (temp_8.readProperty_mExtensionSetterName () COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 258)).boolEnum () ;
              if (kBoolTrue == test_7) {
                var_baseType_12072 = extensionGetter_mSuperType (var_baseType_12072, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 259)) ;
              }
            }
            if (kBoolFalse == test_7) {
              var_searching_12115 = GALGAS_bool (false) ;
            }
          }
        }
        if (kBoolFalse == test_6) {
          var_searching_12115 = GALGAS_bool (false) ;
        }
      }
    }
  }
  const GALGAS_overridingExtensionSetterForGeneration temp_9 = object ;
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (extensionGetter_key (var_baseType_12072, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)).getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)).add_operation (temp_9.readProperty_mExtensionSetterName ().getter_fileNameRepresentation (SOURCE_FILE ("extension-overriding-setter.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267))  COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 267)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_10 = object ;
  extensionMethod_addHeaderFileName (temp_10.readProperty_mReceiverType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 268)) ;
  const GALGAS_overridingExtensionSetterForGeneration temp_11 = object ;
  const GALGAS_overridingExtensionSetterForGeneration temp_12 = object ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingExtensionSetterImplementation (inCompiler, extensionGetter_key (temp_11.readProperty_mReceiverType (), inCompiler COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 270)), temp_12.readProperty_mExtensionSetterName (), var_methodImplementation_12031 COMMA_SOURCE_FILE ("extension-overriding-setter.galgas", 269))) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (void) {
  enterExtensionMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_overridingExtensionSetterForGeneration.mSlotID,
                                                     extensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation (defineExtensionMethod_overridingExtensionSetterForGeneration_appendSpecificImplementation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'generateFewHeaderFiles'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool onceFunction_generateFewHeaderFiles (C_Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}



//----------------------------------------------------------------------------------------------------------------------
//  Function implementation                                                                      
//----------------------------------------------------------------------------------------------------------------------

static bool gOnceFunctionResultAvailable_generateFewHeaderFiles = false ;
static GALGAS_bool gOnceFunctionResult_generateFewHeaderFiles ;

//----------------------------------------------------------------------------------------------------------------------

GALGAS_bool function_generateFewHeaderFiles (class C_Compiler * inCompiler
              COMMA_LOCATION_ARGS) {
  if (! gOnceFunctionResultAvailable_generateFewHeaderFiles) {
    gOnceFunctionResult_generateFewHeaderFiles = onceFunction_generateFewHeaderFiles (inCompiler COMMA_THERE) ;
    gOnceFunctionResultAvailable_generateFewHeaderFiles = true ;
  }
  return gOnceFunctionResult_generateFewHeaderFiles ;
}

//----------------------------------------------------------------------------------------------------------------------

static void releaseOnceFunctionResult_generateFewHeaderFiles (void) {
  gOnceFunctionResult_generateFewHeaderFiles.drop () ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gEpilogueForOnceFunction_generateFewHeaderFiles (NULL,
                                                                    releaseOnceFunctionResult_generateFewHeaderFiles) ;

//----------------------------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//----------------------------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_generateFewHeaderFiles [1] = {
  NULL
} ;

//----------------------------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_generateFewHeaderFiles (C_Compiler * inCompiler,
                                                                       const cObjectArray & /* inEffectiveParameterArray */,
                                                                       const GALGAS_location & /* inErrorLocation */
                                                                       COMMA_LOCATION_ARGS) {
  return function_generateFewHeaderFiles (inCompiler COMMA_THERE).getter_object (THERE) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_generateFewHeaderFiles ("generateFewHeaderFiles",
                                                                        functionWithGenericHeader_generateFewHeaderFiles,
                                                                        & kTypeDescriptor_GALGAS_bool,
                                                                        0,
                                                                        functionArgs_generateFewHeaderFiles) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getEnumerationList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                           GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                           GALGAS_string & outArgument_outEnumeratedType,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_1734 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_1734, inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 25)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 26)) ;
  outArgument_outEnumerationList.addAssign_operation (var_stringTypeIndex_1734, GALGAS_string ("key")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 27)) ;
  outArgument_outEnumeratedType = GALGAS_string ("string") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                           extensionMethod_stringsetPredefinedTypeAST_getEnumerationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getEnumerationList (defineExtensionMethod_stringsetPredefinedTypeAST_getEnumerationList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getEnumerationList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getEnumerationList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_enumerationDescriptorList & outArgument_outEnumerationList,
                                                                      GALGAS_string & outArgument_outEnumeratedType,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_uintTypeIndex_2209 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), var_uintTypeIndex_2209, inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 38)) ;
  }
  outArgument_outEnumerationList = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 39)) ;
  outArgument_outEnumerationList.addAssign_operation (var_uintTypeIndex_2209, GALGAS_string ("data")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 40)) ;
  outArgument_outEnumeratedType = GALGAS_string ("uint") ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList (void) {
  enterExtensionMethod_getEnumerationList (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                           extensionMethod_dataPredefinedTypeAST_getEnumerationList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getEnumerationList (defineExtensionMethod_dataPredefinedTypeAST_getEnumerationList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_setterMap & outArgument_outSetterMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_stringType_2884 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_2884, inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 54)) ;
  }
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeFeatures.galgas", 55)) ;
  {
  outArgument_outSetterMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("removeKey"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 57))  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 57)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsTypeFeatures.galgas", 58)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)), var_stringType_2884, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)), GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 59)), GALGAS_bool (false), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsTypeFeatures.galgas", 61)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 56)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@applicationPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 73)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_applicationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@bigintPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 79)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 79)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 79)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 79)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 79)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 79)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 80)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 81)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 82)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 83)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 85)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 84)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 85)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 85)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_bigintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@timerPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 91)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                                  extensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_timerPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_timerPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@objectPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 97)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                                  extensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_objectPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_objectPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 103)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 104)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stringPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@charPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 110)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 110)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 110)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                                  extensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_charPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_charPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@boolPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_prefixNotOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 116)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 117)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                                  extensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_boolPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_boolPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uintPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 123)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 124)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 125)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 126)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 127)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 128)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 129)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_uintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sintPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 135)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 136)).operator_or (GALGAS_operators::constructor_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 137)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 138)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 139)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 140)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 142)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 141)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 142)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 142)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                                  extensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sintPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sintPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@uint64PredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 148)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 149)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 150)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 151)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 152)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 154)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 153)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 154)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 154)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_uint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sint64PredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 160)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 161)).operator_or (GALGAS_operators::constructor_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 162)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_incDecOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 163)).operator_or (GALGAS_operators::constructor_incDecOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_infixAddOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 164)).operator_or (GALGAS_operators::constructor_infixSubOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_infixMulOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 165)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 167)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 166)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 167)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 167)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                                  extensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_sint_36__34_PredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@doublePredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAddOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_infixMulOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_infixDivOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_prefixPlusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 173)).operator_or (GALGAS_operators::constructor_prefixMinusOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_infixModOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_infixDivOperatorNoOVF (SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 174)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 175)).operator_or (GALGAS_operators::constructor_minusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)).operator_or (GALGAS_operators::constructor_mulEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 177)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 176)).operator_or (GALGAS_operators::constructor_divEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 177)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 177)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                                  extensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_doublePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_doublePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@stringsetPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixSubOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 183)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 184)).operator_or (GALGAS_operators::constructor_plusEqualOperatorWithExpression (SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (GALGAS_operators::constructor_generateEnumerationHelperMethods (SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 185)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)).operator_or (GALGAS_operators::constructor_generateCopyConstructorAndAssignmentOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 187)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 186)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_stringsetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@binarysetPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_infixAndOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_infixOrOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_infixXorOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_prefixTildeOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 193)).operator_or (GALGAS_operators::constructor_infixShiftOperator (SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 194)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 195)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                                  extensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_binarysetPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@typePredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 201)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 201)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 201)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                                  extensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_typePredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_typePredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@dataPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 207)).operator_or (GALGAS_operators::constructor_generateEnumerationHelperMethods (SOURCE_FILE ("semanticsTypeFeatures.galgas", 207)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 207)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                                  extensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_dataPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_dataPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@functionPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 213)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                                  extensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_functionPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_functionPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@locationPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 219)).operator_or (GALGAS_operators::constructor_isComparable (SOURCE_FILE ("semanticsTypeFeatures.galgas", 219)) COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 219)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                                  extensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_locationPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_locationPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperPredefinedTypeAST getSupportedOperatorFlags'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_operators extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_operators result_result ; // Returned variable
  result_result = GALGAS_operators::constructor_generateDescriptionGetterUtilityMethod (SOURCE_FILE ("semanticsTypeFeatures.galgas", 225)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (void) {
  enterExtensionGetter_getSupportedOperatorFlags (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                                  extensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags (defineExtensionGetter_filewrapperPredefinedTypeAST_getSupportedOperatorFlags, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getAddAssignArgumentList'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (const cPtr_predefinedTypeAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                                 GALGAS_functionSignature & outArgument_outAddAssignArgumentList,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_stringTypeIndex_12546 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringTypeIndex_12546, inCompiler COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 234)) ;
  }
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)), var_stringTypeIndex_12546, GALGAS_string ("inString")  COMMA_SOURCE_FILE ("semanticsTypeFeatures.galgas", 235)) ;
  outArgument_outAddAssignArgumentList = temp_0 ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (void) {
  enterExtensionMethod_getAddAssignArgumentList (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                                 extensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList (defineExtensionMethod_stringsetPredefinedTypeAST_getAddAssignArgumentList, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithoutArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                              GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                              const GALGAS_string constinArgument_inConstructorName,
                                              const GALGAS_string constinArgument_inReturnedTypeName,
                                              const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_1413 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1413, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 24)) ;
  }
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 29)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 30)), constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_1413 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 28)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWithArgument (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                           GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                           const GALGAS_string constinArgument_inConstructorName,
                                           const GALGAS_string constinArgument_inArgument_31_TypeName,
                                           const GALGAS_string constinArgument_inArgument_31_Name,
                                           const GALGAS_string constinArgument_inReturnedTypeName,
                                           const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_2131 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2131, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 47)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_t_2202 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_2202, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 48)) ;
  }
  {
  GALGAS_functionSignature temp_0 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 51)) ;
  temp_0.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 51)), var_t_2202, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 51)) ;
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 50))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 50)), temp_0, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_2131 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 49)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_32_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_3042 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3042, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 70)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_3066 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 71)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_3120 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3120, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 73)) ;
  }
  var_argumentTypeList_3066.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 74)), var_t_3120, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 74)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_3120, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 75)) ;
  }
  var_argumentTypeList_3066.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 76)), var_t_3120, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 76)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 78)), var_argumentTypeList_3066, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_3042 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 77)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_33_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                const GALGAS_string constinArgument_inArgument_33_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_4255 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4255, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 100)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_t_4326 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4326, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 101)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_4369 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 102)) ;
  var_argumentTypeList_4369.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 103)), var_t_4326, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 103)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4326, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 104)) ;
  }
  var_argumentTypeList_4369.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 105)), var_t_4326, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 105)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_4326, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 106)) ;
  }
  var_argumentTypeList_4369.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 107)), var_t_4326, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 107)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 109)), var_argumentTypeList_4369, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_4255 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 108)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterConstructorWith4Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterConstructorWith_34_Arguments (GALGAS_constructorMap & ioArgument_ioConstructorMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inConstructorName,
                                                const GALGAS_string constinArgument_inArgument_31_SelectorName,
                                                const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                const GALGAS_string constinArgument_inArgument_31_Name,
                                                const GALGAS_string constinArgument_inArgument_32_SelectorName,
                                                const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                const GALGAS_string constinArgument_inArgument_32_Name,
                                                const GALGAS_string constinArgument_inArgument_33_SelectorName,
                                                const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                const GALGAS_string constinArgument_inArgument_33_Name,
                                                const GALGAS_string constinArgument_inArgument_34_SelectorName,
                                                const GALGAS_string constinArgument_inArgument_34_TypeName,
                                                const GALGAS_string constinArgument_inArgument_34_Name,
                                                const GALGAS_string constinArgument_inReturnedTypeName,
                                                const GALGAS_bool constinArgument_inHasLexiqueArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_5861 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5861, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 137)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_t_5932 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5932, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 138)) ;
  }
  GALGAS_functionSignature var_argumentTypeList_5975 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsConstructors.galgas", 139)) ;
  var_argumentTypeList_5975.addAssign_operation (constinArgument_inArgument_31_SelectorName.getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 140)), var_t_5932, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 140)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_5932, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 141)) ;
  }
  var_argumentTypeList_5975.addAssign_operation (constinArgument_inArgument_32_SelectorName.getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 142)), var_t_5932, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 142)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_5932, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 143)) ;
  }
  var_argumentTypeList_5975.addAssign_operation (constinArgument_inArgument_33_SelectorName.getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 144)), var_t_5932, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 144)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_34_TypeName, var_t_5932, inCompiler COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 145)) ;
  }
  var_argumentTypeList_5975.addAssign_operation (constinArgument_inArgument_34_SelectorName.getter_nowhere (SOURCE_FILE ("semanticsConstructors.galgas", 146)), var_t_5932, constinArgument_inArgument_34_Name  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 146)) ;
  {
  ioArgument_ioConstructorMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inConstructorName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 148))  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 148)), var_argumentTypeList_5975, constinArgument_inHasLexiqueArgument, var_returnedTypeIndex_5861 COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 147)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_locationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 161)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("location"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 162)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 169)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("next"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 176)) ;
  }
  {
  routine_enterConstructorWith_34_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("location"), GALGAS_string ("fromFilePath"), GALGAS_string ("string"), GALGAS_string ("inFile"), GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_string ("inLine"), GALGAS_string ("startColumn"), GALGAS_string ("uint"), GALGAS_string ("inStartColumn"), GALGAS_string ("lastColumn"), GALGAS_string ("uint"), GALGAS_string ("inLastColumn"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 183)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                          extensionMethod_locationPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_locationPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 210)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("homeDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 211)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("newWithStdIn"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 218)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("retrieveAndResetTemplateString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 225)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("separatorString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 232)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSymbolicLinkContents"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 239)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSourceFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 248)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 255)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 262)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithCurrentDateTime"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 271)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariable"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 278)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithEnvironmentVariableOrEmpty"), GALGAS_string ("string"), GALGAS_string ("inVariableName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 287)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppLineComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 296)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppSpaceComment"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 303)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppTitleComment"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 310)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 319)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("CppChar"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 328)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsJoinedByString"), GALGAS_string ("stringlist"), GALGAS_string ("inComponents"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 337)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRepeatingString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 348)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringWithSequenceOfCharacters"), GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 359)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_applicationPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_constructorMap & outArgument_outMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 377)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 378)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("verboseOutput"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 385)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("projectVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 392)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("galgasVersionString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 399)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 406)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandLineArgumentAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 413)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 423)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 430)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 441)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 452)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("boolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 463)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 475)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 482)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 493)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 504)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 515)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionNameList"), GALGAS_string ("2stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 527)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationCharacter"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 534)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionInvocationString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 545)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionCommentString"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 556)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inOptionComponentName"), GALGAS_string ("string"), GALGAS_string ("inOptionName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 567)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordIdentifierSet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 579)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("keywordListForIdentifier"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 586)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getConstructorMap (defineExtensionMethod_applicationPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_charPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 603)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("replacementCharacter"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 604)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterWithUnsigned"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 611)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeCharacterFromRawKeyboard"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 620)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_charPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                          extensionMethod_charPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getConstructorMap (defineExtensionMethod_charPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 634)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compilationMode"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 635)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("random"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 642)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 649)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("errorCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 656)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("warningCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 663)) ;
  }
  {
  routine_enterConstructorWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueWithMask"), GALGAS_string ("uint"), GALGAS_string ("inLowerIndex"), GALGAS_string ("uint"), GALGAS_string ("inUpperIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 670)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_uintPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 688)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 689)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 696)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                          extensionMethod_sintPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_sintPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 710)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 711)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64MaskWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 718)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64BaseValueWithCompressedBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 727)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64WithBitString"), GALGAS_string ("string"), GALGAS_string ("inBitString"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 736)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                             GALGAS_constructorMap & outArgument_outMap,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 752)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("max"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 753)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("min"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 760)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                          extensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getConstructorMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 774)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptySet"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 775)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithString"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 782)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithStringList"), GALGAS_string ("stringlist"), GALGAS_string ("inStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 791)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setWithLStringList"), GALGAS_string ("lstringlist"), GALGAS_string ("inLStringList"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 800)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringsetPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_stringsetPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_constructorMap & outArgument_outMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 816)) ;
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithBit"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 817)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 826)) ;
  }
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fullBinarySet"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 833)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithPredicateString"), GALGAS_string ("string"), GALGAS_string ("inPredicateString"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 840)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 849)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 862)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 875)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 888)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 901)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualComparison"), GALGAS_string ("uint"), GALGAS_string ("inLeftFirstIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_string ("inRightFirstIndex"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 914)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 927)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithNotEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 940)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictLowerThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 953)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithStrictGreaterThanConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 966)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithLowerOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 979)) ;
  }
  {
  routine_enterConstructorWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetWithGreaterOrEqualToConstant"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_string ("inConstant"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 992)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getConstructorMap (defineExtensionMethod_binarysetPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1012)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("typeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1013)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                          extensionMethod_typePredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getConstructorMap (defineExtensionMethod_typePredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1028)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("zero"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1029)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                          extensionMethod_bigintPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getConstructorMap (defineExtensionMethod_bigintPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_constructorMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1044)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("emptyData"), GALGAS_string ("data"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1045)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dataWithContentsOfFile"), GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1052)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                          extensionMethod_dataPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getConstructorMap (defineExtensionMethod_dataPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                         GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                         GALGAS_constructorMap & outArgument_outMap,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1068)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionList"), GALGAS_string ("functionlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1069)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("functionWithName"), GALGAS_string ("string"), GALGAS_string ("inName"), GALGAS_string ("function"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1076)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFunctionDefined"), GALGAS_string ("string"), GALGAS_string ("inFunctionName"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1085)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                          extensionMethod_functionPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getConstructorMap (defineExtensionMethod_functionPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_doublePredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_constructorMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1102)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pi"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1103)) ;
  }
  {
  routine_enterConstructorWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleWithBinaryImage"), GALGAS_string ("uint64"), GALGAS_string ("inBinaryImage"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1110)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                          extensionMethod_doublePredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getConstructorMap (defineExtensionMethod_doublePredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getConstructorMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getConstructorMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                      GALGAS_constructorMap & outArgument_outMap,
                                                                      C_Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("semanticsConstructors.galgas", 1127)) ;
  {
  routine_enterConstructorWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("start"), GALGAS_string ("timer"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsConstructors.galgas", 1128)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap (void) {
  enterExtensionMethod_getConstructorMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                          extensionMethod_timerPredefinedTypeAST_getConstructorMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getConstructorMap (defineExtensionMethod_timerPredefinedTypeAST_getConstructorMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inGetterName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_1437 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_1437, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 25)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 27))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 27)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 28)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 29)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 30)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_1437, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 33)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 26)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inGetterName,
                                                  const GALGAS_string constinArgument_inReturnedTypeName,
                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_2179 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_2179, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 46)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 48))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 48)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 49)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 50)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 51)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_2179, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 54)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 47)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasCompilerArgument,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_3016 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_3016, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 70)) ;
  }
  GALGAS_functionSignature var_argList_3050 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 71)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_3125 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_3125, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 72)) ;
  }
  var_argList_3050.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 73)), var_t_3125, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 73)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 75))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 75)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 76)), var_argList_3050, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 78)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_3016, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 81)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 74)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInheritedGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInheritedGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_4021 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_4021, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 99)) ;
  }
  GALGAS_functionSignature var_argList_4055 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 100)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_4148 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_4148, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 101)) ;
  }
  var_argList_4055.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 102)), var_t_4148, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 102)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_4148, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 103)) ;
  }
  var_argList_4055.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 104)), var_t_4148, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 104)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 106))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 106)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 107)), var_argList_4055, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 109)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_4021, GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("semanticsGetters.galgas", 112)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 105)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithoutArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inGetterName,
                                             const GALGAS_string constinArgument_inReturnedTypeName,
                                             const GALGAS_bool constinArgument_inHasCompilerArgument,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_5022 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5022, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 126)) ;
  }
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 128))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 128)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 129)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 130)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 131)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5022, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 134)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 127)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                          const GALGAS_string constinArgument_inGetterName,
                                          const GALGAS_string constinArgument_inArgument_31_TypeName,
                                          const GALGAS_string constinArgument_inArgument_31_Name,
                                          const GALGAS_string constinArgument_inReturnedTypeName,
                                          const GALGAS_bool constinArgument_inHasCompilerArgument,
                                          C_Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_5820 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_5820, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 150)) ;
  }
  GALGAS_functionSignature var_argList_5854 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 151)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_5929 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_5929, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 152)) ;
  }
  var_argList_5854.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 153)), var_t_5929, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 153)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 155)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 156)), var_argList_5854, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 158)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_5820, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 161)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 154)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWithArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWithArgument (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasCompilerArgument,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_6765 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_6765, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 177)) ;
  }
  GALGAS_functionSignature var_argList_6799 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 178)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_6874 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_6874, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 179)) ;
  }
  var_argList_6799.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 180)), var_t_6874, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 180)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 182))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 182)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 183)), var_argList_6799, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 185)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_6765, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 188)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 181)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                               GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                               const GALGAS_string constinArgument_inGetterName,
                                               const GALGAS_string constinArgument_inArgument_31_TypeName,
                                               const GALGAS_string constinArgument_inArgument_31_Name,
                                               const GALGAS_string constinArgument_inArgument_32_TypeName,
                                               const GALGAS_string constinArgument_inArgument_32_Name,
                                               const GALGAS_string constinArgument_inReturnedTypeName,
                                               const GALGAS_bool constinArgument_inHasCompilerArgument,
                                               C_Compiler * inCompiler
                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_7766 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_7766, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 206)) ;
  }
  GALGAS_functionSignature var_argList_7800 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 207)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_7893 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_7893, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 208)) ;
  }
  var_argList_7800.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 209)), var_t_7893, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 209)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_7893, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 210)) ;
  }
  var_argList_7800.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 211)), var_t_7893, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 211)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 213))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 213)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 214)), var_argList_7800, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 216)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_7766, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsGetters.galgas", 219)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 212)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith2Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_32_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_8910 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_8910, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 237)) ;
  }
  GALGAS_functionSignature var_argList_8944 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 238)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_9037 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_9037, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 239)) ;
  }
  var_argList_8944.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 240)), var_t_9037, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 240)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_9037, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 241)) ;
  }
  var_argList_8944.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 242)), var_t_9037, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 242)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 244))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 244)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 245)), var_argList_8944, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 247)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_8910, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 250)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 243)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterBaseFinalGetterWith3Arguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterBaseFinalGetterWith_33_Arguments (GALGAS_getterMap & ioArgument_ioGetterMap,
                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                    const GALGAS_string constinArgument_inGetterName,
                                                    const GALGAS_string constinArgument_inArgument_31_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_31_Name,
                                                    const GALGAS_string constinArgument_inArgument_32_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_32_Name,
                                                    const GALGAS_string constinArgument_inArgument_33_TypeName,
                                                    const GALGAS_string constinArgument_inArgument_33_Name,
                                                    const GALGAS_string constinArgument_inReturnedTypeName,
                                                    const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                    C_Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_returnedTypeIndex_10114 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inReturnedTypeName, var_returnedTypeIndex_10114, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 270)) ;
  }
  GALGAS_functionSignature var_argList_10148 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticsGetters.galgas", 271)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_10241 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_31_TypeName, var_t_10241, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 272)) ;
  }
  var_argList_10148.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 273)), var_t_10241, constinArgument_inArgument_31_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 273)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_32_TypeName, var_t_10241, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 274)) ;
  }
  var_argList_10148.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 275)), var_t_10241, constinArgument_inArgument_32_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 275)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgument_33_TypeName, var_t_10241, inCompiler COMMA_SOURCE_FILE ("semanticsGetters.galgas", 276)) ;
  }
  var_argList_10148.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsGetters.galgas", 277)), var_t_10241, constinArgument_inArgument_33_Name  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 277)) ;
  {
  ioArgument_ioGetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inGetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 279))  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 279)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsGetters.galgas", 280)), var_argList_10148, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 282)), constinArgument_inHasCompilerArgument, var_returnedTypeIndex_10114, GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("semanticsGetters.galgas", 285)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsGetters.galgas", 278)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'commonGetterMapForAllTypes'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_commonGetterMapForAllTypes (GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                         GALGAS_getterMap & outArgument_outMap,
                                         C_Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMap.drop () ; // Release 'out' argument
  outArgument_outMap = GALGAS_getterMap::constructor_emptyMap (SOURCE_FILE ("semanticsGetters.galgas", 294)) ;
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("description"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 295)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("staticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 302)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("dynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 309)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("object"), GALGAS_string ("object"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 316)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@locationPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_locationPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 330)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 331)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("locationIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 338)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("file"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 345)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("line"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 352)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("column"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 359)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isNowhere"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 366)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("union"), GALGAS_string ("location"), GALGAS_string ("inOtherLocation"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 373)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_locationPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_locationPredefinedTypeAST.mSlotID,
                                     extensionMethod_locationPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_locationPredefinedTypeAST_getGetterMap (defineExtensionMethod_locationPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 388)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastCharacter"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 389)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nowhere"), GALGAS_string ("lstring"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 396)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("here"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 403)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doesEnvironmentVariableExist"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 410)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 417)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("range"), GALGAS_string ("range"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 424)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithUnicodeEscaping"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 431)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("assemblerRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 438)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileNameRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 445)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nameRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 452)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 459)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 466)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decodedStringFromRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 473)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("HTMLRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 480)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 487)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationWithoutDelimiters"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 494)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 501)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32Representation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 508)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByTrimmingWhiteSpaces"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 515)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("md5"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 522)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsignedNumber"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 529)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsignedNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 536)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalUnsigned64Number"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 543)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalUnsigned64Number"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 550)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedNumber"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 557)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 564)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSigned64Number"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 571)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSigned64Number"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 578)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("decimalSignedBigInt"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 585)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDecimalSignedBigInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 592)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isDoubleNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 599)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("doubleNumber"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 606)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("capacity"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 613)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isSymbolicLink"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 620)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 627)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExists"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 634)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("pathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 641)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nativePathWithUnixPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 648)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unixPathWithNativePath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 655)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 662)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingPathExtension"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 669)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByCapitalizingFirstCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 676)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("firstCharacterOrNul"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 683)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByDeletingLastPathComponent"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 690)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByStandardizingPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 697)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 704)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uppercaseString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 711)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("reversedString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 718)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentColumn"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 725)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("system"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 732)) ;
  }
  {
  routine_enterBaseGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("popen"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 739)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8RepresentationEnclosedWithin"), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 746)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("commandWithArguments"), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 753)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenCommandWithArguments"), GALGAS_string ("stringlist"), GALGAS_string ("inArguments"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 760)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("characterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("char"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 767)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacter"), GALGAS_string ("char"), GALGAS_string ("inCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 774)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsCharacterInRange"), GALGAS_string ("char"), GALGAS_string ("inFirstCharacter"), GALGAS_string ("char"), GALGAS_string ("inLastCharacter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 781)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRemovingCharacterAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 792)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subStringFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 799)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("rightSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 806)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("leftSubString"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 813)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("subString"), GALGAS_string ("uint"), GALGAS_string ("inStart"), GALGAS_string ("uint"), GALGAS_string ("inLength"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 820)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 827)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("relativePathFromPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 834)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("componentsSeparatedByString"), GALGAS_string ("string"), GALGAS_string ("inSeparator"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 841)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 848)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 855)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByLeftAndRightPadding"), GALGAS_string ("uint"), GALGAS_string ("inPaddedStringLength"), GALGAS_string ("char"), GALGAS_string ("inPaddingChar"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 862)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringByReplacingStringByString"), GALGAS_string ("string"), GALGAS_string ("inSearchedString"), GALGAS_string ("string"), GALGAS_string ("inReplacementString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 869)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 876)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hiddenFiles"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 885)) ;
  }
  {
  routine_enterBaseGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directories"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 892)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 899)) ;
  }
  {
  routine_enterBaseGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("regularFilesWithExtensions"), GALGAS_string ("bool"), GALGAS_string ("inRecursiveSearch"), GALGAS_string ("stringlist"), GALGAS_string ("inExtensionList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 906)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@charPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_charPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 920)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 921)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf8Length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 928)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("utf32CharConstantRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 935)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 942)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalnum"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 949)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isalpha"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 956)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("iscntrl"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 963)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 970)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("islower"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 977)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isupper"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 984)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isxdigit"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 991)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeLetter"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 998)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeMark"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1005)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeNumber"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1012)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSeparator"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1019)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeCommand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1026)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodePunctuation"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1033)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeSymbol"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1040)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeName"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1047)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToLower"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1054)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("unicodeToUpper"), GALGAS_string ("char"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1061)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_charPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_charPredefinedTypeAST.mSlotID,
                                     extensionMethod_charPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_charPredefinedTypeAST_getGetterMap (defineExtensionMethod_charPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@boolPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_boolPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1075)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1076)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ocString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1083)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1090)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1097)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1111)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1118)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_boolPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_boolPredefinedTypeAST.mSlotID,
                                     extensionMethod_boolPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_boolPredefinedTypeAST_getGetterMap (defineExtensionMethod_boolPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1132)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1133)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1140)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1147)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1154)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1161)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lsbIndex"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1168)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1175)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("oneBitCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1182)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1189)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1196)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1203)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1210)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1221)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isUnicodeValueAssigned"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1228)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isInRange"), GALGAS_string ("range"), GALGAS_string ("inRange"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1235)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1243)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1250)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1257)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1264)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                     extensionMethod_uintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getGetterMap (defineExtensionMethod_uintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sintPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1278)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1279)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1286)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1293)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1300)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1307)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1314)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1321)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1328)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1339)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1347)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1354)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1361)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1368)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sintPredefinedTypeAST.mSlotID,
                                     extensionMethod_sintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sintPredefinedTypeAST_getGetterMap (defineExtensionMethod_sintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uint64PredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1383)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1384)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1391)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1398)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1404)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1411)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uintSlice"), GALGAS_string ("uint"), GALGAS_string ("inStartBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1418)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("alphaString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1427)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1434)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1441)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1448)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1459)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1467)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1474)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1481)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("uint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1488)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_uint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_uint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@sint64PredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_getterMap & outArgument_outMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1502)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("double"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1503)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1510)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1517)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1524)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1531)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1538)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1545)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1552)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1563)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canAdd"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1571)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canSubstract"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1578)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canMultiply"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1585)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("canDivide"), GALGAS_string ("sint64"), GALGAS_string ("inOperand"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1592)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_sint_36__34_PredefinedTypeAST.mSlotID,
                                     extensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_sint_36__34_PredefinedTypeAST_getGetterMap (defineExtensionMethod_sint_36__34_PredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@doublePredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_doublePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1606)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1607)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1614)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1621)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1628)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1635)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cos"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1642)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sin"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1649)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tan"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1656)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log10"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1663)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("log2"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1670)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("logn"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1677)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("exp"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1684)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cosDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1691)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sinDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1698)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("tanDegree"), GALGAS_string ("double"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1705)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sqrt"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1712)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("power"), GALGAS_string ("double"), GALGAS_string ("inExponant"), GALGAS_string ("double"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1719)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryImage"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1726)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_doublePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_doublePredefinedTypeAST.mSlotID,
                                     extensionMethod_doublePredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_doublePredefinedTypeAST_getGetterMap (defineExtensionMethod_doublePredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringsetPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringsetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1740)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inString"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1741)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1748)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("anyString"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1755)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringList"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1762)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_stringsetPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringsetPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringsetPredefinedTypeAST_getGetterMap (defineExtensionMethod_stringsetPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_getterMap & outArgument_outMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1776)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isFull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1777)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("nodeCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1784)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isEmpty"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1791)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("significantVariableCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1798)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("ITE"), GALGAS_string ("binaryset"), GALGAS_string ("inTHENoperand"), GALGAS_string ("binaryset"), GALGAS_string ("inELSEoperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1805)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("print"), GALGAS_string ("stringlist"), GALGAS_string ("inVariableList"), GALGAS_string ("uintlist"), GALGAS_string ("inBDDCount"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1814)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphvizDump"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1823)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("graphviz"), GALGAS_string ("stringlist"), GALGAS_string ("inBitNameList"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1830)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transformedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransformationArray"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1838)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1846)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("forAllOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1854)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1861)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existOnBitIndexAndBeyond"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1868)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("valueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1875)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigValueCount"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bigint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1884)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedValueCount"), GALGAS_string ("uint64"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1893)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64ValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1900)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1907)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("stringValueListWithNameList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_string ("inNameList"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1914)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("predicateStringValue"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1921)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("compressedStringValueList"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1928)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap10"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1935)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap021"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1942)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap102"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1949)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap120"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1956)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap201"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1963)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("swap210"), GALGAS_string ("uint"), GALGAS_string ("inBitCount1"), GALGAS_string ("uint"), GALGAS_string ("inBitCount2"), GALGAS_string ("uint"), GALGAS_string ("inBitCount3"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1970)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transposedBy"), GALGAS_string ("uintlist"), GALGAS_string ("inTransposeVector"), GALGAS_string ("binaryset"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1977)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("transitiveClosure"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1984)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("accessibleStates"), GALGAS_string ("binaryset"), GALGAS_string ("inInitialStateSet"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1991)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("implies"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 1998)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("equalTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2005)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("notEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2012)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("lowerOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2019)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("greaterOrEqualTo"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2026)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictGreaterThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2033)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("strictLowerThan"), GALGAS_string ("binaryset"), GALGAS_string ("inOperand"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2040)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binarySetByTranslatingFromIndex"), GALGAS_string ("uint"), GALGAS_string ("inFirstIndexToTranslate"), GALGAS_string ("uint"), GALGAS_string ("inTranslation"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2047)) ;
  }
  {
  routine_enterBaseFinalGetterWith_33_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("containsValue"), GALGAS_string ("uint64"), GALGAS_string ("inValue"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2054)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("existsOnBitRange"), GALGAS_string ("uint"), GALGAS_string ("inFirstBit"), GALGAS_string ("uint"), GALGAS_string ("inBitCount"), GALGAS_string ("binaryset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2061)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                     extensionMethod_binarysetPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getGetterMap (defineExtensionMethod_binarysetPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@typePredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_typePredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2075)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2076)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hasSuperclass"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2083)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("superclass"), GALGAS_string ("type"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2090)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_typePredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_typePredefinedTypeAST.mSlotID,
                                     extensionMethod_typePredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_typePredefinedTypeAST_getGetterMap (defineExtensionMethod_typePredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_getterMap & outArgument_outMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2104)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("length"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2105)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("cStringRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2112)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getGetterMap (defineExtensionMethod_dataPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@functionPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_functionPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                    GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                    GALGAS_getterMap & outArgument_outMap,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2126)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("name"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2127)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("resultType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2134)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("formalParameterTypeList"), GALGAS_string ("typelist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2141)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("invoke"), GALGAS_string ("objectlist"), GALGAS_string ("inParameters"), GALGAS_string ("location"), GALGAS_string ("inErrorLocation"), GALGAS_string ("object"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2148)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_functionPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_functionPredefinedTypeAST.mSlotID,
                                     extensionMethod_functionPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_functionPredefinedTypeAST_getGetterMap (defineExtensionMethod_functionPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@objectPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_objectPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2162)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectStaticType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2163)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("objectDynamicType"), GALGAS_string ("type"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2170)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_objectPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_objectPredefinedTypeAST.mSlotID,
                                     extensionMethod_objectPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_objectPredefinedTypeAST_getGetterMap (defineExtensionMethod_objectPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_getterMap & outArgument_outMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2184)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allTextFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2185)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allBinaryFilePathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2192)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allDirectoryPathes"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2199)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("currentDirectory"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2206)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("allFilePathesWithExtension"), GALGAS_string ("string"), GALGAS_string ("inExtension"), GALGAS_string ("stringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2213)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoryExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2220)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fileExistsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2227)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2234)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFileContentsAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("data"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2241)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("absolutePathForPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2248)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("directoriesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2255)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("binaryFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2262)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("textFilesAtPath"), GALGAS_string ("string"), GALGAS_string ("inPath"), GALGAS_string ("stringlist"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2269)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getGetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                 GALGAS_getterMap & outArgument_outMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2284)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("msFromStart"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2285)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2292)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isRunning"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2299)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getGetterMap (defineExtensionMethod_timerPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getGetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getGetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_getterMap & outArgument_outMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_commonGetterMapForAllTypes (ioArgument_ioUnifiedTypeMap, outArgument_outMap, inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2314)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2315)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2322)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInUInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2329)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("fitsInSInt64"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2336)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2343)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("spacedString"), GALGAS_string ("uint"), GALGAS_string ("inSeparation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2350)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2358)) ;
  }
  {
  routine_enterBaseFinalGetterWith_32_Arguments (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("hexStringSeparatedBy"), GALGAS_string ("char"), GALGAS_string ("inSeparator"), GALGAS_string ("uint"), GALGAS_string ("inGroupCount"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2365)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("xString"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2376)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForSignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2383)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitCountForUnsignedRepresentation"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2390)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("uint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2397)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint"), GALGAS_string ("sint"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2404)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint64"), GALGAS_string ("uint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2411)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sint64"), GALGAS_string ("sint64"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2418)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("abs"), GALGAS_string ("bigint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2425)) ;
  }
  {
  routine_enterBaseFinalGetterWithArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bitAtIndex"), GALGAS_string ("uint"), GALGAS_string ("inBitIndex"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2432)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("isZero"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2440)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("sign"), GALGAS_string ("sint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2447)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2454)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract8ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2461)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForUnsignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2468)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract32ForSignedRepresentation"), GALGAS_string ("uintlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2475)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForUnsignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2482)) ;
  }
  {
  routine_enterBaseFinalGetterWithoutArgument (outArgument_outMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("extract64ForSignedRepresentation"), GALGAS_string ("uint64list"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsGetters.galgas", 2489)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap (void) {
  enterExtensionMethod_getGetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getGetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getGetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getGetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithInputArgument (GALGAS_setterMap & ioArgument_ioSetterMap,
                                             GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                             const GALGAS_string constinArgument_inInputArgumentTypeName,
                                             const GALGAS_string constinArgument_inInputArgumentName,
                                             const GALGAS_string constinArgument_inSetterName,
                                             const GALGAS_bool constinArgument_inHasCompilerArgument,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_1472 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_1472, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_1513 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 27)) ;
  var_argList_1513.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 28)), var_argumentTypeIndex_1472, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 28)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 28)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 30)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 31)), var_argList_1513, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 34)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 29)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithOutputAndInputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithOutputAndInputArguments (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                       const GALGAS_string constinArgument_inOutputArgumentTypeName,
                                                       const GALGAS_string constinArgument_inOutputArgumentName,
                                                       const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                       const GALGAS_string constinArgument_inInputArgumentName,
                                                       const GALGAS_string constinArgument_inSetterName,
                                                       const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_outputArgumentTypeIndex_2438 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inOutputArgumentTypeName, var_outputArgumentTypeIndex_2438, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 51)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_inputArgumentTypeIndex_2534 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_inputArgumentTypeIndex_2534, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 52)) ;
  }
  GALGAS_formalParameterSignature var_argList_2575 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 53)) ;
  var_argList_2575.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 54)), var_outputArgumentTypeIndex_2438, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsSetters.galgas", 54)), constinArgument_inOutputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 54)) ;
  var_argList_2575.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 55)), var_inputArgumentTypeIndex_2534, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 55)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 55)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 57)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 58)), var_argList_2575, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 61)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 56)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWith2InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWith_32_InputArguments (GALGAS_setterMap & ioArgument_ioSetterMap,
                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                  const GALGAS_string constinArgument_inInputArgument_31_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_31_Name,
                                                  const GALGAS_string constinArgument_inInputArgument_32_TypeName,
                                                  const GALGAS_string constinArgument_inInputArgument_32_Name,
                                                  const GALGAS_string constinArgument_inSetterName,
                                                  const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                  C_Compiler * inCompiler
                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList_3510 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 78)) ;
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_3624 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_31_TypeName, var_argumentTypeIndex_3624, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 79)) ;
  }
  var_argList_3510.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 80)), var_argumentTypeIndex_3624, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 80)), constinArgument_inInputArgument_31_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 80)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgument_32_TypeName, var_argumentTypeIndex_3624, inCompiler COMMA_SOURCE_FILE ("semanticsSetters.galgas", 81)) ;
  }
  var_argList_3510.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsSetters.galgas", 82)), var_argumentTypeIndex_3624, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsSetters.galgas", 82)), constinArgument_inInputArgument_32_Name  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 82)) ;
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 84))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 84)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 85)), var_argList_3510, constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 88)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 83)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterModifierWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterModifierWithoutArgument (GALGAS_setterMap & ioArgument_ioSetterMap,
                                           const GALGAS_string constinArgument_inSetterName,
                                           const GALGAS_bool constinArgument_inHasCompilerArgument,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioSetterMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inSetterName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 101))  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 101)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsSetters.galgas", 102)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsSetters.galgas", 103)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsSetters.galgas", 105)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("semanticsSetters.galgas", 100)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_setterMap & outArgument_outSetterMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 116)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inCapacity"), GALGAS_string ("setCapacity"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 117)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("incIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 125)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inAmount"), GALGAS_string ("decIndentation"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 133)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inColumnIndex"), GALGAS_string ("appendSpacesUntilColumn"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 141)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 149)) ;
  }
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("inChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("insertCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 159)) ;
  }
  {
  routine_enterModifierWithOutputAndInputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("char"), GALGAS_string ("outChar"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("removeCharacterAtIndex"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 169)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                     extensionMethod_stringPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getSetterMap (defineExtensionMethod_stringPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                GALGAS_setterMap & outArgument_outSetterMap,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 186)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendByte"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 187)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortBE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 195)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendShortLE"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 203)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntBE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 211)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_string ("appendUIntLE"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 219)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_string ("appendUTF8String"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 227)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("data"), GALGAS_string ("inValue"), GALGAS_string ("appendData"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 235)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                     extensionMethod_dataPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getSetterMap (defineExtensionMethod_dataPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_setterMap & outArgument_outSetterMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 251)) ;
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inDirectoryPath"), GALGAS_string ("setCurrentDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 252)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_filewrapperPredefinedTypeAST.mSlotID,
                                     extensionMethod_filewrapperPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperPredefinedTypeAST_getSetterMap (defineExtensionMethod_filewrapperPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                  GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                  GALGAS_setterMap & outArgument_outSetterMap,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 268)) ;
  {
  routine_enterModifierWith_32_InputArguments (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), GALGAS_string ("inBit"), GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("setBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 269)) ;
  }
  {
  routine_enterModifierWithInputArgument (outArgument_outSetterMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("uint"), GALGAS_string ("inIndex"), GALGAS_string ("complementBitAtIndex"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 279)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                     extensionMethod_bigintPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getSetterMap (defineExtensionMethod_bigintPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@timerPredefinedTypeAST getSetterMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_timerPredefinedTypeAST_getSetterMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioUnifiedTypeMap */,
                                                                 GALGAS_setterMap & outArgument_outSetterMap,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSetterMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("semanticsSetters.galgas", 295)) ;
  {
  routine_enterModifierWithoutArgument (outArgument_outSetterMap, GALGAS_string ("stop"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 296)) ;
  }
  {
  routine_enterModifierWithoutArgument (outArgument_outSetterMap, GALGAS_string ("resume"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsSetters.galgas", 301)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_timerPredefinedTypeAST_getSetterMap (void) {
  enterExtensionMethod_getSetterMap (kTypeDescriptor_GALGAS_timerPredefinedTypeAST.mSlotID,
                                     extensionMethod_timerPredefinedTypeAST_getSetterMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_timerPredefinedTypeAST_getSetterMap (defineExtensionMethod_timerPredefinedTypeAST_getSetterMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithoutArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithoutArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                 const GALGAS_string constinArgument_inInstanceMethodName,
                                                 const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                 C_Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 24)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 25)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 26)), GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 27)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 29)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 30)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 23)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterInstanceMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterInstanceMethodWithInputArgument (GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                                                   GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                   const GALGAS_string constinArgument_inInputArgumentTypeName,
                                                   const GALGAS_string constinArgument_inInputArgumentName,
                                                   const GALGAS_string constinArgument_inInstanceMethodName,
                                                   const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                   C_Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_2044 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inInputArgumentTypeName, var_argumentTypeIndex_2044, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 45)) ;
  }
  GALGAS_formalParameterSignature var_argList_2085 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 46)) ;
  var_argList_2085.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)), var_argumentTypeIndex_2044, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)), constinArgument_inInputArgumentName  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 47)) ;
  {
  ioArgument_ioInstanceMethodMap.setter_insertKey (constinArgument_inInstanceMethodName.getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 49)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 50)), var_argList_2085, GALGAS_location::constructor_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 52)), constinArgument_inHasCompilerArgument, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 54)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 55)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 48)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@dataPredefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                        GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                        GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 65)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 66)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 74)) ;
  }
  GALGAS_formalParameterSignature var_argList_3189 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 82)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_3271 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_3271, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 83)) ;
  }
  var_argList_3189.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 84)), var_t_3271, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 84)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 84)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_3271, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 85)) ;
  }
  var_argList_3189.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 86)), var_t_3271, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 86)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 86)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 88))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 88)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 89)), var_argList_3189, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 91)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 93)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 94)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 87)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_dataPredefinedTypeAST.mSlotID,
                                             extensionMethod_dataPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_dataPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_dataPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 105)) ;
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 106)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("writeToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 114)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 122)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeDirectoryAndWriteToExecutableFile"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 130)) ;
  }
  {
  routine_enterInstanceMethodWithInputArgument (outArgument_outInstanceMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), GALGAS_string ("inFilePath"), GALGAS_string ("makeSymbolicLinkWithPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 138)) ;
  }
  {
  routine_enterInstanceMethodWithoutArgument (outArgument_outInstanceMethodMap, GALGAS_string ("makeDirectory"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 146)) ;
  }
  GALGAS_formalParameterSignature var_argList_5363 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 152)) ;
  GALGAS_unifiedTypeMap_2D_entry var_t_5445 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_t_5445, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 153)) ;
  }
  var_argList_5363.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 154)), var_t_5445, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 154)), GALGAS_string ("inFilePath")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 154)) ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_t_5445, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 155)) ;
  }
  var_argList_5363.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 156)), var_t_5445, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 156)), GALGAS_string ("outFileModified")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 156)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 158))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 158)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 159)), var_argList_5363, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 161)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 163)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 164)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 157)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("writeToExecutableFileWhenDifferentContents"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 168))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 168)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 169)), var_argList_5363, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 171)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 173)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 174)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 167)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                             extensionMethod_stringPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@bigintPredefinedTypeAST getInstanceMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_instanceMethodMap & outArgument_outInstanceMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsInstanceMethods.galgas", 185)) ;
  GALGAS_unifiedTypeMap_2D_entry var_bigIntType_6615 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bigint"), var_bigIntType_6615, inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 187)) ;
  }
  GALGAS_formalParameterSignature var_argList_6656 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsInstanceMethods.galgas", 188)) ;
  var_argList_6656.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 189)), var_bigIntType_6615, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsInstanceMethods.galgas", 189)), GALGAS_string ("inDivisor")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 189)) ;
  var_argList_6656.addAssign_operation (GALGAS_string ("quotient").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)), var_bigIntType_6615, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)), GALGAS_string ("outQuotient")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 190)) ;
  var_argList_6656.addAssign_operation (GALGAS_string ("remainder").getter_nowhere (SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)), var_bigIntType_6615, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)), GALGAS_string ("outRemainder")  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 191)) ;
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("divideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 193))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 193)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 194)), var_argList_6656, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 196)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 198)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 199)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 192)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("floorDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 203))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 203)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 204)), var_argList_6656, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 206)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 208)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 209)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 202)) ;
  }
  {
  outArgument_outInstanceMethodMap.setter_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("ceilDivideBy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213))  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 213)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("semanticsInstanceMethods.galgas", 214)), var_argList_6656, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 216)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticsInstanceMethods.galgas", 218)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticsInstanceMethods.galgas", 219)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticsInstanceMethods.galgas", 212)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap (void) {
  enterExtensionMethod_getInstanceMethodMap (kTypeDescriptor_GALGAS_bigintPredefinedTypeAST.mSlotID,
                                             extensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_bigintPredefinedTypeAST_getInstanceMethodMap (defineExtensionMethod_bigintPredefinedTypeAST_getInstanceMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                const GALGAS_string constinArgument_inClassMethodName,
                                                const GALGAS_string constinArgument_inArgumentTypeName,
                                                const GALGAS_string constinArgument_inArgumentName,
                                                const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_1484 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName, var_argumentTypeIndex_1484, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 26)) ;
  }
  GALGAS_formalParameterSignature var_argList_1525 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 27)) ;
  var_argList_1525.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), var_argumentTypeIndex_1484, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 28)), constinArgument_inArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 28)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 30)), var_argList_1525, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 29)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWith3InputArguments'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWith_33_InputArguments (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                     const GALGAS_string constinArgument_inClassMethodName,
                                                     const GALGAS_string constinArgument_inArgumentTypeName_31_,
                                                     const GALGAS_string constinArgument_inArgumentName_31_,
                                                     const GALGAS_string constinArgument_inArgumentTypeName_32_,
                                                     const GALGAS_string constinArgument_inArgumentName_32_,
                                                     const GALGAS_string constinArgument_inArgumentTypeName_33_,
                                                     const GALGAS_string constinArgument_inArgumentName_33_,
                                                     const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                     C_Compiler * inCompiler
                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_formalParameterSignature var_argList_2371 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 50)) ;
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_31__2479 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_31_, var_argumentTypeIndex_31__2479, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 52)) ;
  }
  var_argList_2371.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 53)), var_argumentTypeIndex_31__2479, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 53)), constinArgument_inArgumentName_31_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 53)) ;
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_32__2668 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_32_, var_argumentTypeIndex_32__2668, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 55)) ;
  }
  var_argList_2371.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 56)), var_argumentTypeIndex_32__2668, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 56)), constinArgument_inArgumentName_32_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 56)) ;
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_33__2857 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, constinArgument_inArgumentTypeName_33_, var_argumentTypeIndex_33__2857, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 58)) ;
  }
  var_argList_2371.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 59)), var_argumentTypeIndex_33__2857, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 59)), constinArgument_inArgumentName_33_  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 59)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61)), var_argList_2371, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 61)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Routine 'enterClassMethodWithStringInputArgument'
//
//----------------------------------------------------------------------------------------------------------------------

void routine_enterClassMethodWithStringInputArgument (GALGAS_classMethodMap & ioArgument_ioClassMethodMap,
                                                      GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                      const GALGAS_string constinArgument_inClassMethodName,
                                                      const GALGAS_string constinArgument_inStringArgumentName,
                                                      const GALGAS_bool constinArgument_inHasCompilerArgument,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_unifiedTypeMap_2D_entry var_argumentTypeIndex_3518 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_argumentTypeIndex_3518, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 73)) ;
  }
  GALGAS_formalParameterSignature var_argList_3559 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 74)) ;
  var_argList_3559.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 75)), var_argumentTypeIndex_3518, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 75)), constinArgument_inStringArgumentName  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 75)) ;
  {
  ioArgument_ioClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (constinArgument_inClassMethodName, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 77))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 77)), var_argList_3559, constinArgument_inHasCompilerArgument COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 76)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@uintPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_uintPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                     GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                     GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 89)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setRandomSeed"), GALGAS_string ("uint"), GALGAS_string ("inSeed"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 90)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_uintPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_uintPredefinedTypeAST.mSlotID,
                                          extensionMethod_uintPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_uintPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_uintPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@applicationPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_applicationPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                            GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                            GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 106)) ;
  {
  routine_enterClassMethodWith_33_InputArguments (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setBoolOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("bool"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 107)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setUIntOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("uint"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 119)) ;
  }
  {
  routine_enterClassMethodWith_33_InputArguments (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setStringOptionValue"), GALGAS_string ("string"), GALGAS_string ("inDomain"), GALGAS_string ("string"), GALGAS_string ("inIdentifier"), GALGAS_string ("string"), GALGAS_string ("inValue"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 131)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_applicationPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_applicationPredefinedTypeAST.mSlotID,
                                          extensionMethod_applicationPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_applicationPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_applicationPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@stringPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_stringPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                       GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                       GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 151)) ;
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFile"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 152)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("deleteFileIfExists"), GALGAS_string ("inFilePath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 159)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeEmptyDirectory"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 166)) ;
  }
  {
  routine_enterClassMethodWithStringInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("removeDirectoryRecursively"), GALGAS_string ("inDirectoryPath"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 173)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_stringType_6555 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("string"), var_stringType_6555, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 180)) ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_boolType_6642 ;
  {
  extensionSetter_makeEntryFromString (ioArgument_ioUnifiedTypeMap, GALGAS_string ("bool"), var_boolType_6642, inCompiler COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 181)) ;
  }
  GALGAS_formalParameterSignature var_argList_6702 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 183)) ;
  var_argList_6702.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 184)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 184)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 184)) ;
  var_argList_6702.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 185)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 185)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 185)) ;
  var_argList_6702.addAssign_operation (GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 186)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 186)), GALGAS_string ("inContents")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 186)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFile"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 188))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 188)), var_argList_6702, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 187)) ;
  }
  var_argList_6702 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticsTypeMethods.galgas", 193)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("startPath").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 194)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 194)), GALGAS_string ("inStartPath")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 194)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("fileName").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 195)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 195)), GALGAS_string ("inFileName")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 195)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("lineComment").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 196)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 196)), GALGAS_string ("inLineCommentPrefix")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 196)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("header").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 197)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 197)), GALGAS_string ("inHeader")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 197)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("defaultUserZone1").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 198)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 198)), GALGAS_string ("inDefaultUserZone1")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 198)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("generatedZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 199)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 199)), GALGAS_string ("inGeneratedZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 199)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("defaultUserZone2").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 200)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 200)), GALGAS_string ("inDefaultUserZone2")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 200)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("generatedZone3").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 201)), var_stringType_6555, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 201)), GALGAS_string ("inGeneratedZone3")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 201)) ;
  var_argList_6702.addAssign_operation (GALGAS_string ("makeExecutable").getter_nowhere (SOURCE_FILE ("semanticsTypeMethods.galgas", 202)), var_boolType_6642, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticsTypeMethods.galgas", 202)), GALGAS_string ("inMakeExecutable")  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 202)) ;
  {
  outArgument_outClassMethodMap.setter_insertOrReplace (GALGAS_lstring::constructor_new (GALGAS_string ("generateFileWithPattern"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 204))  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 204)), var_argList_6702, GALGAS_bool (true) COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 203)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_stringPredefinedTypeAST.mSlotID,
                                          extensionMethod_stringPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_stringPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_stringPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@binarysetPredefinedTypeAST getClassMethodMap'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (const cPtr_predefinedTypeAST * /* inObject */,
                                                                          GALGAS_unifiedTypeMap & ioArgument_ioUnifiedTypeMap,
                                                                          GALGAS_classMethodMap & outArgument_outClassMethodMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outClassMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("semanticsTypeMethods.galgas", 216)) ;
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setNodeTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 217)) ;
  }
  {
  routine_enterClassMethodWithInputArgument (outArgument_outClassMethodMap, ioArgument_ioUnifiedTypeMap, GALGAS_string ("setAndTableSize"), GALGAS_string ("uint"), GALGAS_string ("inTableSize"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("semanticsTypeMethods.galgas", 225)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap (void) {
  enterExtensionMethod_getClassMethodMap (kTypeDescriptor_GALGAS_binarysetPredefinedTypeAST.mSlotID,
                                          extensionMethod_binarysetPredefinedTypeAST_getClassMethodMap) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_binarysetPredefinedTypeAST_getClassMethodMap (defineExtensionMethod_binarysetPredefinedTypeAST_getClassMethodMap, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'compilerCppName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_compilerCppName (C_Compiler * /* inCompiler */
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

static GALGAS_string onceFunction_syntaxDirectedTranslationResultVarName (C_Compiler * /* inCompiler */
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

static GALGAS_string extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  result_result = GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 290)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                          extensionGetter_galgas_33_GrammarComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_galgas_33_GrammarComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_GrammarComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@galgas3SyntaxComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  result_result = GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 297)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                          extensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_galgas_33_SyntaxComponentAST_keyRepresentation (defineExtensionGetter_galgas_33_SyntaxComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@lexiqueComponentAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_lexiqueComponentAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  result_result = GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 304)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_lexiqueComponentAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                          extensionGetter_lexiqueComponentAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_lexiqueComponentAST_keyRepresentation (defineExtensionGetter_lexiqueComponentAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@predefinedTypeAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_predefinedTypeAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_predefinedTypeAST * object = (const cPtr_predefinedTypeAST *) inObject ;
  macroValidSharedObject (object, cPtr_predefinedTypeAST) ;
  const GALGAS_predefinedTypeAST temp_0 = object ;
  result_result = GALGAS_string ("predefined type @").add_operation (temp_0.readProperty_mPredefinedTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 311)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_predefinedTypeAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_predefinedTypeAST.mSlotID,
                                          extensionGetter_predefinedTypeAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_predefinedTypeAST_keyRepresentation (defineExtensionGetter_predefinedTypeAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@mapEntryDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_mapEntryDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_mapEntryDeclarationAST * object = (const cPtr_mapEntryDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapEntryDeclarationAST) ;
  const GALGAS_mapEntryDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("map entry @").add_operation (temp_0.readProperty_mMapEntryTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 317)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_mapEntryDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_mapEntryDeclarationAST.mSlotID,
                                          extensionGetter_mapEntryDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_mapEntryDeclarationAST_keyRepresentation (defineExtensionGetter_mapEntryDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@enumDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_enumDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_enumDeclarationAST * object = (const cPtr_enumDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_enumDeclarationAST) ;
  const GALGAS_enumDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("enum @").add_operation (temp_0.readProperty_mEnumTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 324)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_enumDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_enumDeclarationAST.mSlotID,
                                          extensionGetter_enumDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_enumDeclarationAST_keyRepresentation (defineExtensionGetter_enumDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@sortedListDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_sortedListDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_sortedListDeclarationAST * object = (const cPtr_sortedListDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sortedListDeclarationAST) ;
  const GALGAS_sortedListDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("sorted list @").add_operation (temp_0.readProperty_mSortedListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 331)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_sortedListDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_sortedListDeclarationAST.mSlotID,
                                          extensionGetter_sortedListDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_sortedListDeclarationAST_keyRepresentation (defineExtensionGetter_sortedListDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_listDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_listDeclarationAST * object = (const cPtr_listDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listDeclarationAST) ;
  const GALGAS_listDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("list @").add_operation (temp_0.readProperty_mListTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 338)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_listDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listDeclarationAST.mSlotID,
                                          extensionGetter_listDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_listDeclarationAST_keyRepresentation (defineExtensionGetter_listDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@arrayDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_arrayDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_arrayDeclarationAST * object = (const cPtr_arrayDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_arrayDeclarationAST) ;
  const GALGAS_arrayDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("array @").add_operation (temp_0.readProperty_mArrayTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 345)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_arrayDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_arrayDeclarationAST.mSlotID,
                                          extensionGetter_arrayDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_arrayDeclarationAST_keyRepresentation (defineExtensionGetter_arrayDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@listmapDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_listmapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_listmapDeclarationAST * object = (const cPtr_listmapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_listmapDeclarationAST) ;
  const GALGAS_listmapDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("listmap @").add_operation (temp_0.readProperty_mListmapTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 352)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_listmapDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_listmapDeclarationAST.mSlotID,
                                          extensionGetter_listmapDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_listmapDeclarationAST_keyRepresentation (defineExtensionGetter_listmapDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@filewrapperDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_filewrapperDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("filewrapper @").add_operation (temp_0.readProperty_mFilewrapperName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 359)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                          extensionGetter_filewrapperDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_filewrapperDeclarationAST_keyRepresentation (defineExtensionGetter_filewrapperDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@optionComponentDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_optionComponentDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_optionComponentDeclarationAST * object = (const cPtr_optionComponentDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionComponentDeclarationAST) ;
  const GALGAS_optionComponentDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("option ").add_operation (temp_0.readProperty_mOptionComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 366)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_optionComponentDeclarationAST.mSlotID,
                                          extensionGetter_optionComponentDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_optionComponentDeclarationAST_keyRepresentation (defineExtensionGetter_optionComponentDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@graphDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_graphDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_graphDeclarationAST * object = (const cPtr_graphDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_graphDeclarationAST) ;
  const GALGAS_graphDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("graph @").add_operation (temp_0.readProperty_mGraphTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 373)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_graphDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_graphDeclarationAST.mSlotID,
                                          extensionGetter_graphDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_graphDeclarationAST_keyRepresentation (defineExtensionGetter_graphDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externTypeDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externTypeDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_externTypeDeclarationAST * object = (const cPtr_externTypeDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externTypeDeclarationAST) ;
  const GALGAS_externTypeDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("extern @").add_operation (temp_0.readProperty_mExternTypeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 380)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externTypeDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externTypeDeclarationAST.mSlotID,
                                          extensionGetter_externTypeDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externTypeDeclarationAST_keyRepresentation (defineExtensionGetter_externTypeDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@onceFunctionDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_onceFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("once function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 387)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                          extensionGetter_onceFunctionDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_onceFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_onceFunctionDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externFunctionDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externFunctionDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("extern function ").add_operation (temp_0.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 394)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                          extensionGetter_externFunctionDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externFunctionDeclarationAST_keyRepresentation (defineExtensionGetter_externFunctionDeclarationAST_keyRepresentation, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@externRoutineDeclarationAST keyRepresentation'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_externRoutineDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  result_result = GALGAS_string ("extern routine ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 401)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation (void) {
  enterExtensionGetter_keyRepresentation (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                          extensionGetter_externRoutineDeclarationAST_keyRepresentation) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_externRoutineDeclarationAST_keyRepresentation (defineExtensionGetter_externRoutineDeclarationAST_keyRepresentation, NULL) ;

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
                            GALGAS_getterMap & ioArgument_ioGetterMap,
                            GALGAS_setterMap & ioArgument_ioSetterMap,
                            GALGAS_instanceMethodMap & ioArgument_ioInstanceMethodMap,
                            const GALGAS_bool constinArgument_inAcceptSetters,
                            C_Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inExtensionGetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 422)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_extensionGetterMapForType var_extensionGetterMapForType_19047 ;
      constinArgument_inExtensionGetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionGetterMapForType_19047, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 423)) ;
      cEnumerator_extensionGetterMapForType enumerator_19104 (var_extensionGetterMapForType_19047, kENUMERATION_UP) ;
      while (enumerator_19104.hasCurrentObject ()) {
        GALGAS_functionSignature var_formalArgumentList_19185 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 425)) ;
        cEnumerator_formalInputParameterListAST enumerator_19265 (enumerator_19104.current_mInputFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_19265.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_typeIndex_19387 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_19265.current_mFormalArgumentTypeName (HERE), var_typeIndex_19387, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 427)) ;
          }
          var_formalArgumentList_19185.addAssign_operation (enumerator_19265.current_mFormalSelector (HERE), var_typeIndex_19387, enumerator_19265.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 428)) ;
          enumerator_19265.gotoNextObject () ;
        }
        GALGAS_unifiedTypeMap_2D_entry var_returnedType_19566 ;
        {
        extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_19104.current_mResultTypeName (HERE), var_returnedType_19566, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 430)) ;
        }
        {
        ioArgument_ioGetterMap.setter_insertKey (enumerator_19104.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 433)), var_formalArgumentList_19185, enumerator_19104.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), var_returnedType_19566, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 438)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 431)) ;
        }
        enumerator_19104.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inExtensionMethodMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 444)).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_extensionMethodMapForType var_extensionMethodMapForType_20045 ;
      constinArgument_inExtensionMethodMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionMethodMapForType_20045, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 445)) ;
      cEnumerator_extensionMethodMapForType enumerator_20081 (var_extensionMethodMapForType_20045, kENUMERATION_UP) ;
      while (enumerator_20081.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_20143 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 447)) ;
        cEnumerator_formalParameterListAST enumerator_20274 (enumerator_20081.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_20274.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_typeIndex_20432 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_20274.current_mFormalArgumentTypeName (HERE), var_typeIndex_20432, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 449)) ;
          }
          var_formalArgumentList_20143.addAssign_operation (enumerator_20274.current_mFormalSelector (HERE), var_typeIndex_20432, enumerator_20274.current_mFormalArgumentPassingMode (HERE), enumerator_20274.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 453)) ;
          enumerator_20274.gotoNextObject () ;
        }
        {
        ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_20081.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 457)), var_formalArgumentList_20143, enumerator_20081.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 461)), GALGAS_instanceMethodMutability::constructor_constantMethod (SOURCE_FILE ("semanticContext.galgas", 462)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 455)) ;
        }
        enumerator_20081.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inExtensionSetterMapForBuildingContext.getter_hasKey (constinArgument_inTypeName.readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 468)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_extensionSetterMapForType var_extensionSetterMapForType_21055 ;
      constinArgument_inExtensionSetterMapForBuildingContext.method_searchKey (constinArgument_inTypeName, var_extensionSetterMapForType_21055, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 469)) ;
      cEnumerator_extensionSetterMapForType enumerator_21091 (var_extensionSetterMapForType_21055, kENUMERATION_UP) ;
      while (enumerator_21091.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_formalArgumentList_21179 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 471)) ;
        cEnumerator_formalParameterListAST enumerator_21284 (enumerator_21091.current_mFormalParameterList (HERE), kENUMERATION_UP) ;
        while (enumerator_21284.hasCurrentObject ()) {
          GALGAS_unifiedTypeMap_2D_entry var_typeIndex_21401 ;
          {
          extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_21284.current_mFormalArgumentTypeName (HERE), var_typeIndex_21401, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 473)) ;
          }
          var_formalArgumentList_21179.addAssign_operation (enumerator_21284.current_mFormalSelector (HERE), var_typeIndex_21401, enumerator_21284.current_mFormalArgumentPassingMode (HERE), enumerator_21284.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 474)) ;
          enumerator_21284.gotoNextObject () ;
        }
        {
        ioArgument_ioSetterMap.setter_insertKey (enumerator_21091.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 478)), var_formalArgumentList_21179, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 481)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 476)) ;
        }
        {
        ioArgument_ioInstanceMethodMap.setter_insertKey (enumerator_21091.current_lkey (HERE), GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticContext.galgas", 486)), var_formalArgumentList_21179, enumerator_21091.current_lkey (HERE).readProperty_location (), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("semanticContext.galgas", 490)), GALGAS_instanceMethodMutability::constructor_mutatingMethod (SOURCE_FILE ("semanticContext.galgas", 491)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 484)) ;
        }
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = constinArgument_inAcceptSetters.operator_not (SOURCE_FILE ("semanticContext.galgas", 494)).boolEnum () ;
          if (kBoolTrue == test_3) {
            TC_Array <C_FixItDescription> fixItArray4 ;
            inCompiler->emitSemanticError (enumerator_21091.current_lkey (HERE).readProperty_location (), GALGAS_string ("a refclass does not accept any setter; use method instead"), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 495)) ;
          }
        }
        enumerator_21091.gotoNextObject () ;
      }
    }
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Once function 'elementTypeNameSuffix'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string onceFunction_elementTypeNameSuffix (C_Compiler * /* inCompiler */
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
  GALGAS_uint var_currentDirectoryIndex_24610 = ioArgument_ioWrapperDirectoryIndex ;
  ioArgument_ioWrapperDirectoryIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 560)) ;
  GALGAS_stringlist var_files_24721 = constinArgument_inAbsoluteSourcePath.getter_regularFiles (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 562)) ;
  outArgument_outWrapperFileMap = GALGAS_wrapperFileMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 563)) ;
  cEnumerator_stringlist enumerator_24805 (var_files_24721, kENUMERATION_UP) ;
  while (enumerator_24805.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inTextFileExtensionMap.getter_hasKey (enumerator_24805.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 565)) COMMA_SOURCE_FILE ("semanticContext.galgas", 565)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_absoluteFilePath_24921 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 566)).add_operation (enumerator_24805.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 566)) ;
        {
        outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_24805.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 568))  COMMA_SOURCE_FILE ("semanticContext.galgas", 568)), var_absoluteFilePath_24921, GALGAS_bool (true), var_currentDirectoryIndex_24610, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 567)) ;
        }
        ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 574)) ;
      }
    }
    if (kBoolFalse == test_0) {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = constinArgument_inBinaryFileExtensionMap.getter_hasKey (enumerator_24805.current_mValue (HERE).getter_pathExtension (SOURCE_FILE ("semanticContext.galgas", 575)) COMMA_SOURCE_FILE ("semanticContext.galgas", 575)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_string var_absoluteFilePath_25301 = constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 576)).add_operation (enumerator_24805.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 576)) ;
          {
          outArgument_outWrapperFileMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_24805.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 578))  COMMA_SOURCE_FILE ("semanticContext.galgas", 578)), var_absoluteFilePath_25301, GALGAS_bool (false), var_currentDirectoryIndex_24610, ioArgument_ioWrapperFileIndex, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 577)) ;
          }
          ioArgument_ioWrapperFileIndex.plusAssign_operation(GALGAS_uint ((uint32_t) 1U), inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 584)) ;
        }
      }
    }
    enumerator_24805.gotoNextObject () ;
  }
  GALGAS_stringlist var_directories_25656 = constinArgument_inAbsoluteSourcePath.getter_directories (GALGAS_bool (false) COMMA_SOURCE_FILE ("semanticContext.galgas", 588)) ;
  outArgument_outWrapperDirectoryMap = GALGAS_wrapperDirectoryMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 589)) ;
  cEnumerator_stringlist enumerator_25744 (var_directories_25656, kENUMERATION_UP) ;
  while (enumerator_25744.hasCurrentObject ()) {
    GALGAS_uint var_theDirectoryIndex_25795 = ioArgument_ioWrapperDirectoryIndex ;
    GALGAS_wrapperFileMap var_internalWrapperFileMap_26036 ;
    GALGAS_wrapperDirectoryMap var_internalWrapperDirectoryMap_26075 ;
    {
    routine_recursivelyEnumerateDirectories (constinArgument_inAbsoluteSourcePath.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 593)).add_operation (enumerator_25744.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 593)), constinArgument_inPathInWrapper.add_operation (enumerator_25744.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 594)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 594)), constinArgument_inTextFileExtensionMap, constinArgument_inBinaryFileExtensionMap, var_internalWrapperFileMap_26036, var_internalWrapperDirectoryMap_26075, ioArgument_ioWrapperFileIndex, ioArgument_ioWrapperDirectoryIndex, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 592)) ;
    }
    {
    outArgument_outWrapperDirectoryMap.setter_insertKey (GALGAS_lstring::constructor_new (enumerator_25744.current_mValue (HERE), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 603))  COMMA_SOURCE_FILE ("semanticContext.galgas", 603)), var_internalWrapperFileMap_26036, var_internalWrapperDirectoryMap_26075, var_theDirectoryIndex_25795, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 602)) ;
    }
    enumerator_25744.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                              const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                              const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                              const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                              GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_26901 = GALGAS_filewrapperTemplateMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 620)) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  cEnumerator_filewrapperTemplateListAST enumerator_27005 (temp_0.readProperty_mFilewrapperTemplateList (), kENUMERATION_UP) ;
  while (enumerator_27005.hasCurrentObject ()) {
    GALGAS_functionSignature var_templateSignature_27087 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 622)) ;
    cEnumerator_formalTemplateInputParameterListAST enumerator_27171 (enumerator_27005.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
    while (enumerator_27171.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_27316 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_27171.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_27316, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 624)) ;
      }
      var_templateSignature_27087.addAssign_operation (enumerator_27171.current_mFormalTemplateSelector (HERE), var_parameterTypeIndex_27316, enumerator_27171.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 625)) ;
      enumerator_27171.gotoNextObject () ;
    }
    {
    var_filewrapperTemplateMap_26901.setter_insertKey (enumerator_27005.current_mFilewrapperTemplateName (HERE), var_templateSignature_27087, enumerator_27005.current_mFilewrapperTemplatePath (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 627)) ;
    }
    enumerator_27005.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_textExtensionMap_27645 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 634)) ;
  const GALGAS_filewrapperDeclarationAST temp_1 = object ;
  cEnumerator_lstringlist enumerator_27664 (temp_1.readProperty_mFilewrapperTextFileExtensionList (), kENUMERATION_UP) ;
  while (enumerator_27664.hasCurrentObject ()) {
    {
    var_textExtensionMap_27645.setter_insertKey (enumerator_27664.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 636)) ;
    }
    enumerator_27664.gotoNextObject () ;
  }
  GALGAS_wrapperExtensionMap var_binaryFileExtensionMap_27846 = GALGAS_wrapperExtensionMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 639)) ;
  const GALGAS_filewrapperDeclarationAST temp_2 = object ;
  cEnumerator_lstringlist enumerator_27865 (temp_2.readProperty_mFilewrapperBinaryFileExtensionList (), kENUMERATION_UP) ;
  while (enumerator_27865.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = var_textExtensionMap_27645.getter_hasKey (enumerator_27865.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("semanticContext.galgas", 641)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_27865.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_27865.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)).add_operation (GALGAS_string ("' extension is already used for text files"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 642)), fixItArray4  COMMA_SOURCE_FILE ("semanticContext.galgas", 642)) ;
      }
    }
    if (kBoolFalse == test_3) {
      {
      var_binaryFileExtensionMap_27846.setter_insertKey (enumerator_27865.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 644)) ;
      }
    }
    enumerator_27865.gotoNextObject () ;
  }
  GALGAS_wrapperFileMap var_regularRootFileMap_28195 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_28242 ;
  GALGAS_string var_absoluteSourcePath_28275 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_6 = object ;
    test_5 = GALGAS_bool (kIsEqual, temp_6.readProperty_mFilewrapperPath ().readProperty_string ().getter_firstCharacterOrNul (SOURCE_FILE ("semanticContext.galgas", 651)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_filewrapperDeclarationAST temp_7 = object ;
      var_absoluteSourcePath_28275 = temp_7.readProperty_mFilewrapperPath ().readProperty_string () ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_filewrapperDeclarationAST temp_8 = object ;
    const GALGAS_filewrapperDeclarationAST temp_9 = object ;
    var_absoluteSourcePath_28275 = temp_8.readProperty_mSourceFileAbsolutePath ().getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticContext.galgas", 654)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 654)).add_operation (temp_9.readProperty_mFilewrapperPath ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 654)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_absoluteSourcePath_28275.getter_directoryExists (SOURCE_FILE ("semanticContext.galgas", 656)).operator_not (SOURCE_FILE ("semanticContext.galgas", 656)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_filewrapperDeclarationAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mFilewrapperPath ().readProperty_location (), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_28275, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 657)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 657)), fixItArray12  COMMA_SOURCE_FILE ("semanticContext.galgas", 657)) ;
      var_regularRootFileMap_28195.drop () ; // Release error dropped variable
      var_wrapperDirectoryMap_28242.drop () ; // Release error dropped variable
    }
  }
  if (kBoolFalse == test_10) {
    GALGAS_uint var_wrapperFileIndex_28790 = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_uint var_wrapperDirectoryIndex_28830 = GALGAS_uint ((uint32_t) 0U) ;
    {
    routine_recursivelyEnumerateDirectories (var_absoluteSourcePath_28275, GALGAS_string ("/"), var_textExtensionMap_27645, var_binaryFileExtensionMap_27846, var_regularRootFileMap_28195, var_wrapperDirectoryMap_28242, var_wrapperFileIndex_28790, var_wrapperDirectoryIndex_28830, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 663)) ;
    }
  }
  {
  const GALGAS_filewrapperDeclarationAST temp_13 = object ;
  const GALGAS_filewrapperDeclarationAST temp_14 = object ;
  const GALGAS_filewrapperDeclarationAST temp_15 = object ;
  const GALGAS_filewrapperDeclarationAST temp_16 = object ;
  ioArgument_ioSemanticContext.mProperty_mFilewrapperMap.setter_insertKey (temp_13.readProperty_mFilewrapperName (), temp_14.readProperty_mFilewrapperPath (), temp_15.readProperty_mFilewrapperTextFileExtensionList (), var_regularRootFileMap_28195, var_wrapperDirectoryMap_28242, var_filewrapperTemplateMap_26901, temp_16.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 675)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                               extensionMethod_filewrapperDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterInSemanticContext (defineExtensionMethod_filewrapperDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externRoutineDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_29899 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 694)) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  cEnumerator_formalParameterListAST enumerator_30026 (temp_0.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_30026.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_30152 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_30026.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_30152, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 696)) ;
    }
    var_routineSignature_29899.addAssign_operation (enumerator_30026.current_mFormalSelector (HERE), var_parameterTypeIndex_30152, enumerator_30026.current_mFormalArgumentPassingMode (HERE), enumerator_30026.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 697)) ;
    enumerator_30026.gotoNextObject () ;
  }
  {
  const GALGAS_externRoutineDeclarationAST temp_1 = object ;
  const GALGAS_externRoutineDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (temp_1.readProperty_mRoutineName (), var_routineSignature_29899, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 700)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                               extensionMethod_externRoutineDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterInSemanticContext (defineExtensionMethod_externRoutineDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@procDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_procDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                       const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                       const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                       const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                       GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  GALGAS_formalParameterSignature var_routineSignature_30968 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 715)) ;
  const GALGAS_procDeclarationAST temp_0 = object ;
  cEnumerator_formalParameterListAST enumerator_31095 (temp_0.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_31095.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_31221 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_31095.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_31221, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 717)) ;
    }
    var_routineSignature_30968.addAssign_operation (enumerator_31095.current_mFormalSelector (HERE), var_parameterTypeIndex_31221, enumerator_31095.current_mFormalArgumentPassingMode (HERE), enumerator_31095.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 718)) ;
    enumerator_31095.gotoNextObject () ;
  }
  const GALGAS_procDeclarationAST temp_1 = object ;
  extensionMethod_enterInstructionListInSemanticContext (temp_1.readProperty_mRoutineInstructionList (), ioArgument_ioSemanticContext.mProperty_mTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 721)) ;
  {
  const GALGAS_procDeclarationAST temp_2 = object ;
  const GALGAS_procDeclarationAST temp_3 = object ;
  ioArgument_ioSemanticContext.mProperty_mRoutineMap.setter_insertKey (temp_2.readProperty_mRoutineName (), var_routineSignature_30968, temp_3.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 723)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_procDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                               extensionMethod_procDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_procDeclarationAST_enterInSemanticContext (defineExtensionMethod_procDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_functionSignature var_functionSignature_32222 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 738)) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  cEnumerator_formalInputParameterListAST enumerator_32299 (temp_0.readProperty_mFormalArgumentList (), kENUMERATION_UP) ;
  while (enumerator_32299.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_entry var_parameterTypeIndex_32425 ;
    {
    extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_32299.current_mFormalArgumentTypeName (HERE), var_parameterTypeIndex_32425, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 740)) ;
    }
    var_functionSignature_32222.addAssign_operation (enumerator_32299.current_mFormalSelector (HERE), var_parameterTypeIndex_32425, enumerator_32299.current_mFormalArgumentTypeName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 741)) ;
    enumerator_32299.gotoNextObject () ;
  }
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeIndex_32629 ;
  {
  const GALGAS_externFunctionDeclarationAST temp_1 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_1.readProperty_mResultTypeName (), var_resultTypeIndex_32629, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 744)) ;
  }
  {
  const GALGAS_externFunctionDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_2.readProperty_mFunctionName (), var_functionSignature_32222, var_resultTypeIndex_32629, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 746)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externFunctionDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                               extensionMethod_externFunctionDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterInSemanticContext (defineExtensionMethod_externFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                               const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                               const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                               const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_entry var_resultTypeIndex_33443 ;
  {
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, temp_0.readProperty_mResultTypeName (), var_resultTypeIndex_33443, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 762)) ;
  }
  {
  const GALGAS_onceFunctionDeclarationAST temp_1 = object ;
  const GALGAS_onceFunctionDeclarationAST temp_2 = object ;
  ioArgument_ioSemanticContext.mProperty_mFunctionMap.setter_insertKey (temp_1.readProperty_mFunctionName (), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 764)), var_resultTypeIndex_33443, temp_2.readProperty_mIsInternal (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 764)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                               extensionMethod_onceFunctionDeclarationAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterInSemanticContext (defineExtensionMethod_onceFunctionDeclarationAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                 const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                 const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                 const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = object ;
  ioArgument_ioSemanticContext.mProperty_mSyntaxComponentMapForSemanticAnalysis.setter_insertKey (temp_0.readProperty_mSyntaxComponentName (), temp_1.readProperty_mLexiqueName (), temp_2.readProperty_mNonterminalDeclarationList (), temp_3.readProperty_mRuleList (), temp_4.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 775)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                               extensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext (defineExtensionMethod_galgas_33_SyntaxComponentAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                                  const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                                  const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                                  const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  GALGAS_grammarLabelMap var_grammarLabelMap_34887 = GALGAS_grammarLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 793)) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  cEnumerator_nonTerminalLabelListAST enumerator_34932 (temp_0.readProperty_mStartSymbolLabelList (), kENUMERATION_UP) ;
  while (enumerator_34932.hasCurrentObject ()) {
    GALGAS_formalParameterSignature var_formalArgumentList_35044 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 796)) ;
    cEnumerator_formalParameterListAST enumerator_35147 (enumerator_34932.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_35147.hasCurrentObject ()) {
      GALGAS_unifiedTypeMap_2D_entry var_argumentType_35264 ;
      {
      extensionSetter_makeEntry (ioArgument_ioSemanticContext.mProperty_mTypeMap, enumerator_35147.current_mFormalArgumentTypeName (HERE), var_argumentType_35264, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 798)) ;
      }
      var_formalArgumentList_35044.addAssign_operation (enumerator_35147.current_mFormalSelector (HERE), var_argumentType_35264, enumerator_35147.current_mFormalArgumentPassingMode (HERE), enumerator_35147.current_mFormalArgumentName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 799)) ;
      enumerator_35147.gotoNextObject () ;
    }
    {
    var_grammarLabelMap_34887.setter_insertKey (enumerator_34932.current_mLabelName (HERE), var_formalArgumentList_35044, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 805)) ;
    }
    enumerator_34932.gotoNextObject () ;
  }
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = object ;
  ioArgument_ioSemanticContext.mProperty_mGrammarMap.setter_insertGrammar (temp_1.readProperty_mGrammarComponentName (), var_grammarLabelMap_34887, temp_2.readProperty_mHasIndexing ().readProperty_bool (), temp_3.readProperty_mHasTranslateFeature (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 811)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                               extensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterInSemanticContext (defineExtensionMethod_galgas_33_GrammarComponentAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueComponentAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                        const GALGAS_extensionMethodMapForBuildingContext /* constinArgument_inExtensionMethodMapForBuildingContext */,
                                                                        const GALGAS_extensionGetterMapForBuildingContext /* constinArgument_inExtensionGetterMapForBuildingContext */,
                                                                        const GALGAS_extensionSetterMapForBuildingContext /* constinArgument_inExtensionSetterMapForBuildingContext */,
                                                                        GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lexicalTypeMap var_lexicalTypeMap_36314 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 827)) ;
  GALGAS_lexicalAttributeMap var_lexicalAttributeMap_36386 = GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 828)) ;
  {
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_36314, temp_0.readProperty_mLexicalAttributeList (), var_lexicalAttributeMap_36386, inCompiler  COMMA_SOURCE_FILE ("semanticContext.galgas", 829)) ;
  }
  GALGAS_terminalMap var_terminalMap_36572 = GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticContext.galgas", 835)) ;
  const GALGAS_lexiqueComponentAST temp_1 = object ;
  cEnumerator_terminalDeclarationListAST enumerator_36615 (temp_1.readProperty_mTerminalDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_36615.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_36677 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 837)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_36744 (enumerator_36615.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_36744.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_36849 ;
      var_lexicalAttributeMap_36386.method_searchKey (enumerator_36744.current_mAttributeName (HERE), var_attributeLexicalType_36849, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 839)) ;
      var_argumentTypeList_36677.addAssign_operation (enumerator_36744.current_mFormalSelector (HERE), enumerator_36744.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_36849  COMMA_SOURCE_FILE ("semanticContext.galgas", 840)) ;
      enumerator_36744.gotoNextObject () ;
    }
    {
    var_terminalMap_36572.setter_insertKey (enumerator_36615.current_mName (HERE), var_argumentTypeList_36677, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 842)) ;
    }
    enumerator_36615.gotoNextObject () ;
  }
  const GALGAS_lexiqueComponentAST temp_2 = object ;
  cEnumerator_lexicalListDeclarationListAST enumerator_37055 (temp_2.readProperty_mLexicalListDeclarationList (), kENUMERATION_UP) ;
  while (enumerator_37055.hasCurrentObject ()) {
    GALGAS_lexicalSentValueList var_argumentTypeList_37120 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticContext.galgas", 846)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_37187 (enumerator_37055.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_37187.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_37292 ;
      var_lexicalAttributeMap_36386.method_searchKey (enumerator_37187.current_mAttributeName (HERE), var_attributeLexicalType_37292, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 848)) ;
      var_argumentTypeList_37120.addAssign_operation (enumerator_37187.current_mFormalSelector (HERE), enumerator_37187.current_mAttributeName (HERE).readProperty_string (), var_attributeLexicalType_37292  COMMA_SOURCE_FILE ("semanticContext.galgas", 849)) ;
      enumerator_37187.gotoNextObject () ;
    }
    cEnumerator_lexicalListEntryListAST enumerator_37420 (enumerator_37055.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_37420.hasCurrentObject ()) {
      {
      var_terminalMap_36572.setter_insertKey (enumerator_37420.current_mTerminalSpelling (HERE), var_argumentTypeList_37120, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 852)) ;
      }
      enumerator_37420.gotoNextObject () ;
    }
    enumerator_37055.gotoNextObject () ;
  }
  {
  const GALGAS_lexiqueComponentAST temp_3 = object ;
  const GALGAS_lexiqueComponentAST temp_4 = object ;
  const GALGAS_lexiqueComponentAST temp_5 = object ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_3.readProperty_mLexiqueComponentName (), var_terminalMap_36572, temp_4.readProperty_mIndexingListAST (), temp_5.readProperty_mIndexingDirectory (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 856)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueComponentAST_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                               extensionMethod_lexiqueComponentAST_enterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterInSemanticContext (defineExtensionMethod_lexiqueComponentAST_enterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3GrammarComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                   GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                   GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                   GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                   GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                   GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const GALGAS_galgas_33_GrammarComponentAST temp_0 = object ;
  const GALGAS_galgas_33_GrammarComponentAST temp_1 = object ;
  GALGAS_lstring var_key_39614 = GALGAS_lstring::constructor_new (GALGAS_string ("grammar ").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 895)), temp_1.readProperty_mGrammarComponentName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 895)) ;
  {
  const GALGAS_galgas_33_GrammarComponentAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_39614, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 896)) ;
  }
  const GALGAS_galgas_33_GrammarComponentAST temp_3 = object ;
  cEnumerator_lstringlist enumerator_39773 (temp_3.readProperty_mSyntaxComponents (), kENUMERATION_UP) ;
  while (enumerator_39773.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_39614, GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (enumerator_39773.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 898)), enumerator_39773.current_mValue (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 898)) COMMA_SOURCE_FILE ("semanticContext.galgas", 898)) ;
    }
    enumerator_39773.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                                extensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph (defineExtensionMethod_galgas_33_GrammarComponentAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@galgas3SyntaxComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_0 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_1 = object ;
  GALGAS_lstring var_key_40507 = GALGAS_lstring::constructor_new (GALGAS_string ("syntax ").add_operation (temp_0.readProperty_mSyntaxComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 910)), temp_1.readProperty_mSyntaxComponentName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 910)) ;
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_40507, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 911)) ;
  }
  {
  const GALGAS_galgas_33_SyntaxComponentAST temp_3 = object ;
  const GALGAS_galgas_33_SyntaxComponentAST temp_4 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_40507, GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 912)), temp_4.readProperty_mLexiqueName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 912)) COMMA_SOURCE_FILE ("semanticContext.galgas", 912)) ;
  }
  const GALGAS_galgas_33_SyntaxComponentAST temp_5 = object ;
  cEnumerator_syntaxRuleListAST enumerator_40799 (temp_5.readProperty_mRuleList (), kENUMERATION_UP) ;
  while (enumerator_40799.hasCurrentObject ()) {
    cEnumerator_syntaxRuleLabelListAST enumerator_40855 (enumerator_40799.current_mLabelList (HERE), kENUMERATION_UP) ;
    while (enumerator_40855.hasCurrentObject ()) {
      cEnumerator_formalParameterListAST enumerator_40941 (enumerator_40855.current_mFormalArguments (HERE), kENUMERATION_UP) ;
      while (enumerator_40941.hasCurrentObject ()) {
        switch (enumerator_40941.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
          {
            {
            ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_40507, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_40941.current_mFormalArgumentTypeName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 917)), enumerator_40941.current_mFormalArgumentTypeName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 917)) COMMA_SOURCE_FILE ("semanticContext.galgas", 917)) ;
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
        enumerator_40941.gotoNextObject () ;
      }
      enumerator_40855.gotoNextObject () ;
    }
    enumerator_40799.gotoNextObject () ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                                extensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph (defineExtensionMethod_galgas_33_SyntaxComponentAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@lexiqueComponentAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_lexiqueComponentAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                         GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                         GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                         GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                         GALGAS_semanticDeclarationListAST & /* ioArgument_ioExtensionOverrideDefinitionList */,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  const GALGAS_lexiqueComponentAST temp_0 = object ;
  const GALGAS_lexiqueComponentAST temp_1 = object ;
  GALGAS_lstring var_key_41863 = GALGAS_lstring::constructor_new (GALGAS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 933)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticContext.galgas", 933)) ;
  {
  const GALGAS_lexiqueComponentAST temp_2 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_41863, temp_2, inCompiler COMMA_SOURCE_FILE ("semanticContext.galgas", 934)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_lexiqueComponentAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                                extensionMethod_lexiqueComponentAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_lexiqueComponentAST_enterDeclarationInGraph (defineExtensionMethod_lexiqueComponentAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externFunctionDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                  GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                  GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                  GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                  GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                  GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  const GALGAS_externFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 945)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                                extensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@onceFunctionDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  const GALGAS_onceFunctionDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 956)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                                extensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_onceFunctionDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@externRoutineDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                                 GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                                 GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                                 GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                                 GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                                 GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  const GALGAS_externRoutineDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 967)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                                extensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_externRoutineDeclarationAST_enterDeclarationInGraph, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@filewrapperDeclarationAST enterDeclarationInGraph'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                               GALGAS_semanticTypePrecedenceGraph & /* ioArgument_ioSemanticTypePrecedenceGraph */,
                                                                               GALGAS_extensionMethodMapForBuildingContext & /* ioArgument_ioExtensionMethodMapForBuildingContext */,
                                                                               GALGAS_extensionGetterMapForBuildingContext & /* ioArgument_ioExtensionGetterMapForBuildingContext */,
                                                                               GALGAS_extensionSetterMapForBuildingContext & /* ioArgument_ioExtensionSetterMapForBuildingContext */,
                                                                               GALGAS_semanticDeclarationListAST & ioArgument_ioExtensionOverrideDefinitionList,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  const GALGAS_filewrapperDeclarationAST temp_0 = object ;
  ioArgument_ioExtensionOverrideDefinitionList.addAssign_operation (temp_0  COMMA_SOURCE_FILE ("semanticContext.galgas", 978)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph (void) {
  enterExtensionMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                                extensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_enterDeclarationInGraph (defineExtensionMethod_filewrapperDeclarationAST_enterDeclarationInGraph, NULL) ;

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
  ioArgument_ioGeneratedCode.setter_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 28)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_1632 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_1632.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_1632.current (HERE).readProperty_mInstruction ().ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 30)) ;
    enumerator_1632.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 38)) ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_semanticTypeForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  result_result = extensionGetter_mHeaderFileName (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 248)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                                  extensionGetter_semanticTypeForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_implementationCppFileName (defineExtensionGetter_semanticTypeForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticTypeForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (true) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                         extensionGetter_semanticTypeForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_hasCppHeaderFile (defineExtensionGetter_semanticTypeForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticTypeForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  result_result = extensionGetter_mIsPredefined (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 260)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                     extensionGetter_semanticTypeForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_isPredefined (defineExtensionGetter_semanticTypeForGeneration_isPredefined, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticTypeForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_semanticTypeForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  const cPtr_semanticTypeForGeneration * object = (const cPtr_semanticTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticTypeForGeneration) ;
  const GALGAS_semanticTypeForGeneration temp_0 = object ;
  result_result = extensionGetter_mHeaderKind (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas", 266)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticTypeForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_semanticTypeForGeneration.mSlotID,
                                   extensionGetter_semanticTypeForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticTypeForGeneration_headerKind (defineExtensionGetter_semanticTypeForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration implementationCppFileName'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_string extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                           C_Compiler * /* inCompiler */
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_result ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = object ;
  result_result = temp_0.readProperty_mImplementationCppFileName () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (void) {
  enterExtensionGetter_implementationCppFileName (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                                  extensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_implementationCppFileName, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  const cPtr_semanticDeclarationWithHeaderForGeneration * object = (const cPtr_semanticDeclarationWithHeaderForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_semanticDeclarationWithHeaderForGeneration) ;
  const GALGAS_semanticDeclarationWithHeaderForGeneration temp_0 = object ;
  result_result = temp_0.readProperty_mHasHeader () ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (void) {
  enterExtensionGetter_hasCppHeaderFile (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                         extensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_hasCppHeaderFile, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_headerKind extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_result ; // Returned variable
  result_result = GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas", 295)) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind (void) {
  enterExtensionGetter_headerKind (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                   extensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_headerKind (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_headerKind, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//----------------------------------------------------------------------------------------------------------------------

static GALGAS_bool extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_result ; // Returned variable
  result_result = GALGAS_bool (false) ;
//---
  return result_result ;
}


//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (void) {
  enterExtensionGetter_isPredefined (kTypeDescriptor_GALGAS_semanticDeclarationWithHeaderForGeneration.mSlotID,
                                     extensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gGetter_semanticDeclarationWithHeaderForGeneration_isPredefined (defineExtensionGetter_semanticDeclarationWithHeaderForGeneration_isPredefined, NULL) ;

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
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 62)) ;
  }
  {
  routine_analyzeSemanticInstructionListWithoutBranch (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, constinArgument_inLocalConstantList, constinArgument_inLocalInitializedVariableList, constinArgument_inLocalInitializedVariableListNoWarns, constinArgument_inSemanticInstructionListAST, ioArgument_ioVariableMap, outArgument_outInstructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 64)) ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 76)) ;
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
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 92)) ;
  cEnumerator_localConstantList enumerator_4527 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_4527.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = enumerator_4527.current_mNoWarningIfUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        {
        extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, enumerator_4527.current_mName (HERE), enumerator_4527.current_mType (HERE), enumerator_4527.current_mCppName (HERE), enumerator_4527.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 96)) ;
        }
      }
    }
    if (kBoolFalse == test_0) {
      {
      extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, enumerator_4527.current_mName (HERE), enumerator_4527.current_mType (HERE), enumerator_4527.current_mCppName (HERE), enumerator_4527.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 98)) ;
      }
    }
    enumerator_4527.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4836 (constinArgument_inLocalInitializedVariableList, kENUMERATION_UP) ;
  while (enumerator_4836.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_4836.current_mName (HERE), GALGAS_bool (true), enumerator_4836.current_mType (HERE), enumerator_4836.current_mCppName (HERE), enumerator_4836.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 103)) ;
    }
    enumerator_4836.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_5020 (constinArgument_inLocalInitializedVariableListNoWarns, kENUMERATION_UP) ;
  while (enumerator_5020.hasCurrentObject ()) {
    {
    extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, enumerator_5020.current_mName (HERE), GALGAS_bool (false), enumerator_5020.current_mType (HERE), enumerator_5020.current_mCppName (HERE), enumerator_5020.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 106)) ;
    }
    enumerator_5020.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_5226 (constinArgument_inSemanticInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_5226.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_5226.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 110)) ;
    enumerator_5226.gotoNextObject () ;
  }
}


//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 159)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 160)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 159)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 162)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 164)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 163)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 164)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 161)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_7786 = GALGAS_string ("!").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 167)) ;
        const GALGAS_outputActualParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_7786) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_7786, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)) ;
      }
    }
    GALGAS_semanticExpressionForGeneration var_expression_8251 ;
    const GALGAS_outputActualParameterAST temp_9 = object ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) temp_9.readProperty_mOutputActualParameterExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_8251, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)) ;
    {
    const GALGAS_outputActualParameterAST temp_10 = object ;
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_8251.readProperty_mResultType (), temp_10.readProperty_mEndOfExpressionLocation (), var_expression_8251, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 179)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_8251  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                   extensionMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 200)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 203)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 201)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_9796 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 205)) ;
        const GALGAS_outputInputActualParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_9796) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_9796, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 206)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_parameterType_10283 ;
  GALGAS_string var_variableCppName_10304 ;
  {
  const GALGAS_outputInputActualParameterAST temp_9 = object ;
  GALGAS_string joker_10306 ; // Joker input parameter
  extensionSetter_searchForReadWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mOutputInputActualParameterName (), var_parameterType_10283, var_variableCppName_10304, joker_10306, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 210)) ;
  }
  GALGAS_unifiedTypeMap_2D_entryList var_typeList_10323 = GALGAS_unifiedTypeMap_2D_entryList::constructor_listWithValue (var_parameterType_10283  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 211)) ;
  const GALGAS_outputInputActualParameterAST temp_10 = object ;
  cEnumerator_lstringlist enumerator_10396 (temp_10.readProperty_mStructAttributeList (), kENUMERATION_UP) ;
  while (enumerator_10396.hasCurrentObject ()) {
    GALGAS_propertyMap var_propertyMap_10449 = extensionGetter_mPropertyMap (var_parameterType_10283, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 213)) ;
    GALGAS_bool var_isPublic_10541 ;
    GALGAS_bool var_isConstant_10563 ;
    var_propertyMap_10449.method_searchKey (enumerator_10396.current_mValue (HERE), var_isPublic_10541, var_isConstant_10563, var_parameterType_10283, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 214)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_isPublic_10541.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 220)).boolEnum () ;
      if (kBoolTrue == test_11) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (enumerator_10396.current_mValue (HERE).readProperty_location (), GALGAS_string (" inaccessible property (due to its 'private' qualifier)"), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 221)) ;
      }
    }
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = var_isConstant_10563.boolEnum () ;
      if (kBoolTrue == test_13) {
        TC_Array <C_FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (enumerator_10396.current_mValue (HERE).readProperty_location (), GALGAS_string ("a constant property cannot be modified"), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)) ;
      }
    }
    var_typeList_10323.addAssign_operation (var_parameterType_10283  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)) ;
    enumerator_10396.gotoNextObject () ;
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_10283)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_outputInputActualParameterAST temp_16 = object ;
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_key (var_parameterType_10283, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)).add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 232)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 232)), fixItArray17  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 230)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_outputInputActualParameterAST temp_19 = object ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mOutputInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 235)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_outputInputActualParameterAST temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mOutputInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)) ;
    }
  }
  const GALGAS_outputInputActualParameterAST temp_22 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mOutputInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 239)) ;
  const GALGAS_outputInputActualParameterAST temp_23 = object ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_10283, var_variableCppName_10304, temp_23.readProperty_mStructAttributeList (), var_typeList_10323  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                   extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputSingleJokerParameterAST * object = (const cPtr_outputInputSingleJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputSingleJokerParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 261)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputSingleJokerParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputSingleJokerParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_12826 = GALGAS_string ("!\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 266)) ;
        const GALGAS_outputInputSingleJokerParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_12826) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_12826, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)) ;
      }
    }
  }
  GALGAS_string var_defaultConstructorName_13184 = extensionGetter_mDefaultConstructorName (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 270)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (kIsEqual, var_defaultConstructorName_13184.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_outputInputSingleJokerParameterAST temp_10 = object ;
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the formal parameter type @").add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
    }
  }
  const GALGAS_outputInputSingleJokerParameterAST temp_12 = object ;
  GALGAS_string var_cppVarName_13462 = GALGAS_string ("joker_").add_operation (temp_12.readProperty_mActualSelector ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 275)) ;
  const GALGAS_outputInputSingleJokerParameterAST temp_13 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_13462, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, temp_13.readProperty_mActualSelector ().readProperty_location ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 280))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 276))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 276)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_13462, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 284)), GALGAS_unifiedTypeMap_2D_entryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 285))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputJokerParameterAST * object = (const cPtr_outputInputJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputJokerParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_outputInputJokerParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 304)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 302)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_15148 = extensionGetter_mDefaultConstructorName (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 306)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (kIsEqual, var_defaultConstructorName_15148.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_outputInputJokerParameterAST temp_4 = object ;
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mQualifierLocation (), GALGAS_string ("the formal parameter type @").add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 308)) ;
    }
  }
  const GALGAS_outputInputJokerParameterAST temp_6 = object ;
  const GALGAS_outputInputJokerParameterAST temp_7 = object ;
  GALGAS_string var_cppVarName_15429 = GALGAS_string ("joker_").add_operation (temp_6.readProperty_mQualifierLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)).add_operation (temp_7.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 311)) ;
  const GALGAS_outputInputJokerParameterAST temp_8 = object ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_15429, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, temp_8.readProperty_mQualifierLocation ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 316))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 312))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 312)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_15429, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 320)), GALGAS_unifiedTypeMap_2D_entryList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 321))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 317))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 317)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                                const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                                GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                                GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                                GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 337)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualExistingVariableParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 339)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 340)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 338)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualExistingVariableParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 342)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_17171 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 342)) ;
        const GALGAS_inputActualExistingVariableParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_17171) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_17171, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 343)) ;
      }
    }
  }
  GALGAS_unifiedTypeMap_2D_entry var_parameterType_17598 ;
  GALGAS_string var_targetVariableCppName_17629 ;
  {
  const GALGAS_inputActualExistingVariableParameterAST temp_9 = object ;
  GALGAS_string joker_17635 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_9.readProperty_mInputActualParameterName (), var_parameterType_17598, var_targetVariableCppName_17629, joker_17635, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 346)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_17598)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_inputActualExistingVariableParameterAST temp_11 = object ;
      TC_Array <C_FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_key (var_parameterType_17598, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 355)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 355)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 355)).add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 356)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 356)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 356)), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 354)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    const GALGAS_inputActualExistingVariableParameterAST temp_14 = object ;
    test_13 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_14.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 359)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_inputActualExistingVariableParameterAST temp_15 = object ;
      TC_Array <C_FixItDescription> fixItArray16 ;
      inCompiler->emitSemanticError (temp_15.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray16  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)) ;
    }
  }
  const GALGAS_inputActualExistingVariableParameterAST temp_17 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_17.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 363)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_17598, var_targetVariableCppName_17629  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                            const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                            GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                            const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                            const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                            const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                            GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                            GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                            GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                            GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualSelfPropertyParameterAST * object = (const cPtr_inputActualSelfPropertyParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualSelfPropertyParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 385)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 387)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 387)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 388)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 388)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 386)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualSelfPropertyParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 390)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_19537 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 390)) ;
        const GALGAS_inputActualSelfPropertyParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_19537) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_19537, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 391)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 391)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 391)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    GALGAS_unifiedTypeMap_2D_entry var_selfType_19791 ;
    GALGAS_bool var_selfIsMutable_19819 ;
    GALGAS_bool var_unused_0_19841 ;
    const bool optionalResult19771 = constinArgument_inAnalysisContext.readProperty_selfType ().optional_available (var_selfType_19791, var_selfIsMutable_19819, var_unused_0_19841) ;
    if (!optionalResult19771) {
      test_9 = kBoolFalse ;
    }
    if (kBoolTrue == test_9) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_selfIsMutable_19819.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 395)).boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_11 = object ;
          TC_Array <C_FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not mutable in this context"), fixItArray12  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 396)) ;
        }
      }
      GALGAS_propertyMap var_propertyMap_19990 = extensionGetter_mPropertyMap (var_selfType_19791, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 398)) ;
      GALGAS_unifiedTypeMap_2D_entry var_parameterType_20101 ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_13 = object ;
      GALGAS_bool joker_20080_2 ; // Joker input parameter
      GALGAS_bool joker_20080_1 ; // Joker input parameter
      var_propertyMap_19990.method_searchKey (temp_13.readProperty_mInputActualSelfPropertyName (), joker_20080_2, joker_20080_1, var_parameterType_20101, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 399)) ;
      const GALGAS_inputActualSelfPropertyParameterAST temp_14 = object ;
      GALGAS_string var_targetVariableCppName_20132 = constinArgument_inAnalysisContext.readProperty_mSelfObjectCppPrefixForAccessingProperty ().add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 400)).add_operation (temp_14.readProperty_mInputActualSelfPropertyName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 401)) ;
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_20101)).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_inputActualSelfPropertyParameterAST temp_16 = object ;
          TC_Array <C_FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (temp_16.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_key (var_parameterType_20101, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)).add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)), fixItArray17  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 404)) ;
        }
      }
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_20101, var_targetVariableCppName_20132  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 409)) ;
    }
  }
  if (kBoolFalse == test_9) {
    const GALGAS_inputActualSelfPropertyParameterAST temp_18 = object ;
    TC_Array <C_FixItDescription> fixItArray19 ;
    inCompiler->emitSemanticError (temp_18.readProperty_mInputActualSelfPropertyName ().readProperty_location (), GALGAS_string ("'self' not available in this context"), fixItArray19  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 415)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST.mSlotID,
                                                   extensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualSelfPropertyParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 458)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewVariableParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 460)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 461)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 459)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewVariableParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 463)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_23098 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 463)) ;
        const GALGAS_inputActualNewVariableParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_23098) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_23098, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 464)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewVariableParameterAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewVariableParameterAST temp_11 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_parameterType_23533 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_23533)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewVariableParameterAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_key (var_parameterType_23533, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 474)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_15 = object ;
  const GALGAS_inputActualNewVariableParameterAST temp_16 = object ;
  GALGAS_string var_targetVariableCppName_23963 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 478)) ;
  {
  const GALGAS_inputActualNewVariableParameterAST temp_17 = object ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_17.readProperty_mInputActualParameterName (), GALGAS_bool (true), constinArgument_inFormalArgumentType, var_targetVariableCppName_23963, var_targetVariableCppName_23963, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 479)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_23963  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 487))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 487)) ;
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    const GALGAS_inputActualNewVariableParameterAST temp_19 = object ;
    test_18 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_19.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 491)).boolEnum () ;
    if (kBoolTrue == test_18) {
      const GALGAS_inputActualNewVariableParameterAST temp_20 = object ;
      TC_Array <C_FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray21  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 492)) ;
    }
  }
  const GALGAS_inputActualNewVariableParameterAST temp_22 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_22.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 495)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_23963  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 497))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 497)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_localVarManager & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 517)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputActualNewConstantParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 519)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 519)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 520)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 518)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputActualNewConstantParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_26124 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 522)) ;
        const GALGAS_inputActualNewConstantParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_26124) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_26124, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 523)) ;
      }
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_inputActualNewConstantParameterAST temp_10 = object ;
    test_9 = GALGAS_bool (kIsNotEqual, temp_10.readProperty_mInputOptionalActualTypeName ().readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_inputActualNewConstantParameterAST temp_11 = object ;
      GALGAS_unifiedTypeMap_2D_entry var_parameterType_26558 = extensionGetter_searchKey (constinArgument_inAnalysisContext.readProperty_mSemanticContext ().readProperty_mTypeMap (), temp_11.readProperty_mInputOptionalActualTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 528)) ;
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_26558)).boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_inputActualNewConstantParameterAST temp_13 = object ;
          TC_Array <C_FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("the parameter object has the '@").add_operation (extensionGetter_key (var_parameterType_26558, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 531)).add_operation (extensionGetter_key (constinArgument_inFormalArgumentType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 532)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 532)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 532)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 530)) ;
        }
      }
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_15 = object ;
  const GALGAS_inputActualNewConstantParameterAST temp_16 = object ;
  GALGAS_string var_targetVariableCppName_26988 = GALGAS_string ("var_").add_operation (temp_15.readProperty_mInputActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)).add_operation (temp_16.readProperty_mInputActualParameterName ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 536)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    const GALGAS_inputActualNewConstantParameterAST temp_18 = object ;
    test_17 = temp_18.readProperty_mMarkedAsUnused ().boolEnum () ;
    if (kBoolTrue == test_17) {
      {
      const GALGAS_inputActualNewConstantParameterAST temp_19 = object ;
      extensionSetter_insertUsedLocalConstant (ioArgument_ioVariableMap, temp_19.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_26988, var_targetVariableCppName_26988, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 538)) ;
      }
    }
  }
  if (kBoolFalse == test_17) {
    {
    const GALGAS_inputActualNewConstantParameterAST temp_20 = object ;
    extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_20.readProperty_mInputActualParameterName (), constinArgument_inFormalArgumentType, var_targetVariableCppName_26988, var_targetVariableCppName_26988, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 545)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_26988  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 553)) ;
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    const GALGAS_inputActualNewConstantParameterAST temp_22 = object ;
    test_21 = ioArgument_ioExclusiveVariableSet.getter_hasKey (temp_22.readProperty_mInputActualParameterName ().readProperty_string () COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 558)).boolEnum () ;
    if (kBoolTrue == test_21) {
      const GALGAS_inputActualNewConstantParameterAST temp_23 = object ;
      TC_Array <C_FixItDescription> fixItArray24 ;
      inCompiler->emitSemanticError (temp_23.readProperty_mInputActualParameterName ().readProperty_location (), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray24  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 559)) ;
    }
  }
  const GALGAS_inputActualNewConstantParameterAST temp_25 = object ;
  ioArgument_ioExclusiveVariableSet.addAssign_operation (temp_25.readProperty_mInputActualParameterName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 562)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_26988  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 564))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 564)) ;
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 583)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputSingleJokerActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 585)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 585)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 585)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 584)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_4 = object ;
      test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (temp_4.readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_5 ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_6) {
          temp_5 = constinArgument_inFormalSelector.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588)) ;
        }else if (kBoolFalse == test_6) {
          temp_5 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_string var_s_29361 = GALGAS_string ("\?").add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 588)) ;
        const GALGAS_inputSingleJokerActualParameterAST temp_7 = object ;
        TC_Array <C_FixItDescription> fixItArray8 ;
        appendFixItActions (fixItArray8, kFixItReplace, var_s_29361) ;
        inCompiler->emitSemanticError (temp_7.readProperty_mActualSelector ().readProperty_location (), GALGAS_string ("the selector should be '").add_operation (var_s_29361, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 589)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 589)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 589)) ;
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_inputSingleJokerActualParameterAST temp_9 = object ;
      GALGAS_string var_cppVarName_29709 = GALGAS_string ("joker_").add_operation (temp_9.readProperty_mActualSelector ().readProperty_location ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 592)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_29709  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 594)) ;
    }
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_entry constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_localVarManager & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 613)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_inputJokerActualParameterAST temp_1 = object ;
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mQualifierLocation (), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)), fixItArray2  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 614)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_inputJokerActualParameterAST temp_3 = object ;
    const GALGAS_inputJokerActualParameterAST temp_4 = object ;
    GALGAS_string var_cppVarName_31059 = GALGAS_string ("joker_").add_operation (temp_3.readProperty_mQualifierLocation ().getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)).add_operation (temp_4.readProperty_mJokerIndex ().getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 618)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_31059  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 620))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 620)) ;
  }
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualSelfPropertyParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualSelfPropertyParameterAST.mSlotID,
                                                        extensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualSelfPropertyParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//----------------------------------------------------------------------------------------------------------------------
//
//Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'
//
//----------------------------------------------------------------------------------------------------------------------

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//----------------------------------------------------------------------------------------------------------------------

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//----------------------------------------------------------------------------------------------------------------------

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

