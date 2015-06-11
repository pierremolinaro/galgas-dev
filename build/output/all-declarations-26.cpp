#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-26.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@categoryModifierForGeneration headerKind'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_headerKind categoryReader_categoryModifierForGeneration_headerKind (const cPtr_semanticDeclarationForGeneration * /* inObject */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_headerKind result_outResult ; // Returned variable
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2078)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2088)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2087))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2094)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2093))) ;
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
    var_categoryModifierFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2110)), GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticGeneration.galgas", 2111)), object->mAttribute_mReceiverType, GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2113))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2113)), GALGAS_string ("ioObject"), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2109)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2117)) ;
    GALGAS_string var_code ;
    {
    routine_generateProcedure (GALGAS_bool (false), GALGAS_string ("categoryModifier_").add_operation (object->mAttribute_mCategoryModifierName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2120)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2120)), ioArgument_ioInclusionSet, var_categoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_bool (false), GALGAS_string ("C_Compiler"), GALGAS_bool (true), GALGAS_bool (false), GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2118)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2132)), object->mAttribute_mCategoryModifierName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2131))) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2139)).isValid ()) {
      uint32_t variant_83790 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2139)).uintValue () ;
      bool loop_83790 = true ;
      while (loop_83790) {
        loop_83790 = var_searching.isValid () ;
        if (loop_83790) {
          loop_83790 = var_searching.boolValue () ;
        }
        if (loop_83790 && (0 == variant_83790)) {
          loop_83790 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2139)) ;
        }
        if (loop_83790) {
          variant_83790 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2140)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2140)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2140)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2141)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2141)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2141)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2142)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2150)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2150)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2150)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2150))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2150)) ;
    categoryMethod_addHeaderFileName (var_baseType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2151)) ;
    GALGAS_string var_modifierImplementation ;
    {
    routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2153)), GALGAS_string::makeEmptyString (), object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_modifierImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2152)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2162)), object->mAttribute_mCategoryModifierName, object->mAttribute_mCategoryModifierFormalParameterList, var_modifierImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2161))) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2173)) ;
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
  routine_generateCategoryModifier (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2183)), object->mAttribute_mBaseTypeName, object->mAttribute_mCategoryModifierName, ioArgument_ioInclusionSet, object->mAttribute_mCategoryModifierFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, var_methodImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2182)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2193)).isValid ()) {
    uint32_t variant_85637 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2193)).uintValue () ;
    bool loop_85637 = true ;
    while (loop_85637) {
      loop_85637 = var_searching.isValid () ;
      if (loop_85637) {
        loop_85637 = var_searching.boolValue () ;
      }
      if (loop_85637 && (0 == variant_85637)) {
        loop_85637 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2193)) ;
      }
      if (loop_85637) {
        variant_85637 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2194)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2194)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2194)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2195)).reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2195)).reader_hasKey (object->mAttribute_mCategoryModifierName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2195)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2196)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("setter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2204)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2204)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2204)).add_operation (object->mAttribute_mCategoryModifierName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2204))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2204)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2205)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2207)), object->mAttribute_mCategoryModifierName, var_methodImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2206))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2220)) ;
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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2230)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2229))) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244)).add_operation (object->mAttribute_mAbstractCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2244)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2245)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2246)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_87683 (object->mAttribute_mAbstractCategoryReaderFormalParameterList, kEnumeration_up) ;
  while (enumerator_87683.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_87683.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2248)) ;
    enumerator_87683.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2251)), object->mAttribute_mAbstractCategoryReaderName, object->mAttribute_mAbstractCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2250))) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2261)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2271)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2274)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2270))) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2278)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2277))) ;
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
    var_categoryReaderFormalParameterList.modifier_insertAtIndex (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("semanticGeneration.galgas", 2295)), object->mAttribute_mReceiverType, GALGAS_string ("inObject"), GALGAS_lstring::constructor_new (GALGAS_string ("self"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2298))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2298)), GALGAS_bool (true), GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2294)) ;
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2302)) ;
    GALGAS_string var_code ;
    {
    routine_generateFunction (GALGAS_string ("categoryReader_").add_operation (object->mAttribute_mCategoryReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2304)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2304)), ioArgument_ioInclusionSet, var_categoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType, object->mAttribute_mResultVarCppName, GALGAS_bool (false), var_code, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2303)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2315)), object->mAttribute_mCategoryReaderName, var_code COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2314))) ;
  }else if (kBoolFalse == test_0) {
    categoryMethod_addHeaderFileName (object->mAttribute_mResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2320)) ;
    categoryMethod_addHeaderFileName (object->mAttribute_mReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_90392 (object->mAttribute_mCategoryReaderFormalParameterList, kEnumeration_up) ;
    while (enumerator_90392.hasCurrentObject ()) {
      categoryMethod_addHeaderFileName (enumerator_90392.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2323)) ;
      enumerator_90392.gotoNextObject () ;
    }
    GALGAS_unifiedTypeMap_2D_proxy var_baseType = object->mAttribute_mReceiverType ;
    GALGAS_bool var_searching = GALGAS_bool (true) ;
    if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2327)).isValid ()) {
      uint32_t variant_90553 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 2327)).uintValue () ;
      bool loop_90553 = true ;
      while (loop_90553) {
        loop_90553 = var_searching.isValid () ;
        if (loop_90553) {
          loop_90553 = var_searching.boolValue () ;
        }
        if (loop_90553 && (0 == variant_90553)) {
          loop_90553 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 2327)) ;
        }
        if (loop_90553) {
          variant_90553 -- ;
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2328)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 2328)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2328)).boolEnum () ;
          if (kBoolTrue == test_1) {
            const enumGalgasBool test_2 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2329)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2329)).reader_hasKey (object->mAttribute_mCategoryReaderName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2329)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2330)) ;
            }else if (kBoolFalse == test_2) {
              var_searching = GALGAS_bool (false) ;
            }
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }
      }
    }
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2338)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2338)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2338)).add_operation (object->mAttribute_mCategoryReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2338))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2338)) ;
    GALGAS_string var_categoryReaderCode ;
    {
    routine_generateCategoryReader (object->mAttribute_mReceiverType, GALGAS_string::makeEmptyString (), ioArgument_ioInclusionSet, object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2347)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2339)) ;
    }
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2352)), object->mAttribute_mCategoryReaderName, object->mAttribute_mCategoryReaderFormalParameterList, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2351))) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2364)) ;
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
  routine_generateCategoryReader (object->mAttribute_mReceiverType, object->mAttribute_mBaseTypeName, ioArgument_ioInclusionSet, object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mOverridingCategoryReaderFormalParameterList, object->mAttribute_mSemanticInstructionListForGeneration, GALGAS_string ("C_Compiler"), object->mAttribute_mResultType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2381)), object->mAttribute_mResultVarCppName, var_categoryReaderCode, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2373)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (inCompiler, object->mAttribute_mReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2386)), object->mAttribute_mOverridingCategoryReaderName, object->mAttribute_mResultType, var_categoryReaderCode COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2385))) ;
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
    temp_0 = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2406)) ;
  }else if (kBoolFalse == test_1) {
    temp_0 = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2406)) ;
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
    outArgument_outHeader = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderZone_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2417))) ;
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
    ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436)) ;
    outArgument_outImplementation = GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationGalgas_33_ (inCompiler, object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2437))) ;
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
  GALGAS_bool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticGeneration.galgas", 2453)).objectCompare (GALGAS_uint ((uint32_t) 0U))) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = object->mAttribute_mIsPredefined.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 2453)) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2457)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2457)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_32_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2461))), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionHeaderCocoaZone_33_ (inCompiler, object->mAttribute_mOptionComponentName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2465))), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2455)) ;
    }
    ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2471)) ;
    {
    GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2474)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2474)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
      "\n"), GALGAS_string (filewrapperTemplate_optionGenerationTemplates_optionImplementationCocoa (inCompiler, GALGAS_string ("option-").add_operation (object->mAttribute_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2479)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2479)), object->mAttribute_mOptionComponentName, object->mAttribute_mBoolOptionMap, object->mAttribute_mUIntOptionMap, object->mAttribute_mStringOptionMap, object->mAttribute_mStringListOptionMap COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2478))), GALGAS_string ("\n"
      "\n"), GALGAS_string ("\n"
      "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2472)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2498)) ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2515))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2515)) ;
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
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2525)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2525))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2525)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2528)).add_operation (GALGAS_string ("-cocoa.h"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2528)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaHeader, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2526)) ;
  }
  ioArgument_ioAllProductFileSet.addAssign_operation (GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2539)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2539))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2539)) ;
  {
  GALGAS_string::class_method_generateFileWithPattern (constinArgument_inProductDirectory, GALGAS_string ("lexique-").add_operation (object->mAttribute_mLexiqueName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2542)).add_operation (GALGAS_string ("-cocoa.m"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2542)), GALGAS_string ("//"), GALGAS_string::makeEmptyString (), GALGAS_string ("\n"
    "\n"), object->mAttribute_mCocoaImplementation, GALGAS_string ("\n"
    "\n"), GALGAS_string ("\n"
    "\n"), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2540)) ;
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
  result_outResult = GALGAS_headerKind::constructor_noHeader (SOURCE_FILE ("semanticGeneration.galgas", 2558)) ;
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
  ioArgument_ioInclusionSet.dotAssign_operation (object->mAttribute_mInclusionSet  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2567)) ;
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
  result_outResult = GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("semanticGeneration.galgas", 2578)) ;
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
  GALGAS_stringlist var_regularFileIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2616)) ;
  GALGAS_stringlist var_regularBinaryContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2617)) ;
  GALGAS_stringlist var_regularTextContentIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2618)) ;
  GALGAS_stringlist var_directoryIndexStringList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticGeneration.galgas", 2619)) ;
  {
  routine_recursivlyEnumerateRegularFile (object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2620)) ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (inCompiler, var_regularFileIndexStringList, var_directoryIndexStringList, var_regularTextContentIndexStringList, var_regularBinaryContentIndexStringList, object->mAttribute_mFilewrapperName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2628))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_101837 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_101837.hasCurrentObject ()) {
    outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (inCompiler, object->mAttribute_mFilewrapperName, enumerator_101837.current_mFilewrapperTemplateName (HERE), enumerator_101837.current_mFilewrapperTemplateFormalInputParameters (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2637)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2637)) ;
    enumerator_101837.gotoNextObject () ;
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
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("filewrapper-").add_operation (object->mAttribute_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2737))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2737)) ;
  GALGAS_string var_filewrapperImplementation = GALGAS_string::makeEmptyString () ;
  {
  routine_generateWrapperContents (object->mAttribute_mFilewrapperName, GALGAS_string::makeEmptyString (), GALGAS_uint ((uint32_t) 0U), object->mAttribute_mFilewrapperFileMap, object->mAttribute_mFilewrapperDirectoryMap, var_filewrapperImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2739)) ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (inCompiler, object->mAttribute_mFilewrapperName, var_filewrapperImplementation COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2747))) ;
  cEnumerator_filewrapperTemplateListForGeneration enumerator_107286 (object->mAttribute_mFilewrapperTemplateListForGeneration, kEnumeration_up) ;
  while (enumerator_107286.hasCurrentObject ()) {
    GALGAS_string var_generatedCodeForInstructionList = GALGAS_string::makeEmptyString () ;
    GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
    GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 2756)) ;
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2757))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2757)) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_107588 (enumerator_107286.current_mFilewrapperTemplateFormalInputParameters (HERE), kEnumeration_up) ;
    while (enumerator_107588.hasCurrentObject ()) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_107588.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2759)) ;
      enumerator_107588.gotoNextObject () ;
    }
    GALGAS_bool var_useColumnMarker = GALGAS_bool (false) ;
    {
    routine_templateCodeGenerationForListInstruction (enumerator_107286.current_mTemplateInstructionListForGeneration (HERE), var_generatedCodeForInstructionList, ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, var_useColumnMarker, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2762)) ;
    }
    outArgument_outImplementation.dotAssign_operation (GALGAS_string (filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (inCompiler, object->mAttribute_mFilewrapperName, enumerator_107286.current_mFilewrapperTemplateName (HERE), enumerator_107286.current_mFilewrapperTemplateFormalInputParameters (HERE), var_unusedVariableCppNameSet, var_useColumnMarker, var_generatedCodeForInstructionList COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2771)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2771)) ;
    enumerator_107286.gotoNextObject () ;
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
  switch (object->mAttribute_mKind.enumValue ()) {
  case GALGAS_predefinedTypeKindEnum::kNotBuilt:
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_object:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2839))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2841))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_uint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2843))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2845))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_sint_36__34_:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2847))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_char:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2849))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_double:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2851))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_string:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2853))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_stringset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2855))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_bool:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2857))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_binaryset:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2859))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_function:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2861))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_location:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2863))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_type:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2865))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_data:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2867))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_filewrapper:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2869))) ;
    }
    break ;
  case GALGAS_predefinedTypeKindEnum::kEnum_predefined_5F_application:
    {
      result_outHeader = GALGAS_string (filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2871))) ;
    }
    break ;
  }
  result_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2874)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2875)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2876)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2877)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2878)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2879)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2880)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2881)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2882)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2883)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2884)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2885)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2873)))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2873)) ;
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
//                    Overriding category method '@sharedMapDeclarationAST enterDeclarationInGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                            GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                            GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                            GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                            GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 266)), object->mAttribute_mMapTypeName.reader_location (SOURCE_FILE ("shared-map.galgas", 266))  COMMA_SOURCE_FILE ("shared-map.galgas", 266)) ;
  {
  const GALGAS_sharedMapDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 267)) ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_10928 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_10928.hasCurrentObject ()) {
    {
    ioArgument_ioSemanticTypePrecedenceGraph.modifier_noteNode (GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (enumerator_10928.current_mPropertyTypeName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 269)), enumerator_10928.current_mPropertyTypeName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 269))  COMMA_SOURCE_FILE ("shared-map.galgas", 269)) COMMA_SOURCE_FILE ("shared-map.galgas", 269)) ;
    }
    enumerator_10928.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                               categoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_sharedMapDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category reader '@sharedMapDeclarationAST keyRepresentation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_string categoryReader_sharedMapDeclarationAST_keyRepresentation (const cPtr_semanticDeclarationAST * inObject,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outString ; // Returned variable
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  result_outString = GALGAS_string ("shared map @").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 278)) ;
//---
  return result_outString ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_sharedMapDeclarationAST_keyRepresentation (void) {
  enterCategoryReader_keyRepresentation (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                         categoryReader_sharedMapDeclarationAST_keyRepresentation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_sharedMapDeclarationAST_keyRepresentation (defineCategoryReader_sharedMapDeclarationAST_keyRepresentation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@sharedMapDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                           const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                           const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                           const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                           GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 292)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 294)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringlistTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstringlist"), var_lstringlistTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 296)) ;
  }
  GALGAS_enumerationDescriptorList temp_0 = GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 298)) ;
  temp_0.addAssign_operation (var_lstringTypeIndex, GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("shared-map.galgas", 298)) ;
  GALGAS_enumerationDescriptorList var_enumerationDescriptor = temp_0 ;
  GALGAS_stringlist var_enumerationVariants = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 299)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("up")  COMMA_SOURCE_FILE ("shared-map.galgas", 300)) ;
  var_enumerationVariants.addAssign_operation (GALGAS_string ("down")  COMMA_SOURCE_FILE ("shared-map.galgas", 301)) ;
  GALGAS_bool var_usesSelectorsInInsertAndSearch = GALGAS_bool (false) ;
  cEnumerator_lstringlist enumerator_12738 (object->mAttribute_mAttributeList, kEnumeration_up) ;
  while (enumerator_12738.hasCurrentObject ()) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_12738.current_mValue (HERE).mAttribute_string.objectCompare (GALGAS_string ("selectors"))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_location location_3 (enumerator_12738.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_3, GALGAS_string ("duplicated attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 307)) ;
      }
      var_usesSelectorsInInsertAndSearch = GALGAS_bool (true) ;
    }else if (kBoolFalse == test_1) {
      GALGAS_location location_4 (enumerator_12738.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_4, GALGAS_string ("unknown attribute")  COMMA_SOURCE_FILE ("shared-map.galgas", 311)) ;
    }
    enumerator_12738.gotoNextObject () ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 315)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 316)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 317)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 318)) ;
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("emptyMap"), object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 320)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 320)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeys"), GALGAS_string ("stringset"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 322)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("allKeyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 329)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("hasKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 336)) ;
  }
  {
  routine_enterInheritedGetterWithArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("locationForKey"), GALGAS_string ("string"), GALGAS_string ("inKey"), GALGAS_string ("location"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 345)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("count"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 354)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyCount"), GALGAS_string ("uint"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 361)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("unsolvedProxyList"), GALGAS_string ("lstringlist"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 368)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("edgeGraphvizRepresentation"), GALGAS_string ("string"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 375)) ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 383)) ;
  GALGAS_formalParameterSignature var_insertMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 384)) ;
  GALGAS_string temp_5 ;
  const enumGalgasBool test_6 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_6) {
    temp_5 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_6) {
    temp_5 = GALGAS_string::makeEmptyString () ;
  }
  var_insertMethodFormalArgumentList.addAssign_operation (temp_5.reader_nowhere (SOURCE_FILE ("shared-map.galgas", 386)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 388)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 385)) ;
  GALGAS_formalParameterSignature var_removeMethodFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 390)) ;
  GALGAS_string temp_7 ;
  const enumGalgasBool test_8 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
  if (kBoolTrue == test_8) {
    temp_7 = GALGAS_string ("lkey") ;
  }else if (kBoolFalse == test_8) {
    temp_7 = GALGAS_string::makeEmptyString () ;
  }
  var_removeMethodFormalArgumentList.addAssign_operation (temp_7.reader_nowhere (SOURCE_FILE ("shared-map.galgas", 392)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 394)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 391)) ;
  cEnumerator_propertyInCollectionListAST enumerator_15350 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_15350.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_15350.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 398)) ;
    }
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_attributeTypeIndex, enumerator_15350.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 401)) ;
    var_enumerationDescriptor.addAssign_operation (var_attributeTypeIndex, enumerator_15350.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 402))  COMMA_SOURCE_FILE ("shared-map.galgas", 402)) ;
    GALGAS_lstring temp_9 ;
    const enumGalgasBool test_10 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_10) {
      temp_9 = enumerator_15350.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_10) {
      temp_9 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 404)) ;
    }
    var_insertMethodFormalArgumentList.addAssign_operation (temp_9, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 406)), enumerator_15350.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 403)) ;
    GALGAS_lstring temp_11 ;
    const enumGalgasBool test_12 = var_usesSelectorsInInsertAndSearch.boolEnum () ;
    if (kBoolTrue == test_12) {
      temp_11 = enumerator_15350.current_mPropertyName (HERE) ;
    }else if (kBoolFalse == test_12) {
      temp_11 = GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 409)) ;
    }
    var_removeMethodFormalArgumentList.addAssign_operation (temp_11, var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 411)), enumerator_15350.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 408)) ;
    enumerator_15350.gotoNextObject () ;
  }
  cEnumerator_insertMethodListAST enumerator_16191 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_16191.hasCurrentObject ()) {
    const enumGalgasBool test_13 = var_modifierMap.reader_hasKey (enumerator_16191.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 416)) COMMA_SOURCE_FILE ("shared-map.galgas", 416)).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_location location_14 (enumerator_16191.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the '").add_operation (enumerator_16191.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 417)).add_operation (GALGAS_string ("' insert method is already declared"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 417))  COMMA_SOURCE_FILE ("shared-map.galgas", 417)) ;
    }else if (kBoolFalse == test_13) {
      {
      var_modifierMap.modifier_insertOrReplace (enumerator_16191.current_mInsertMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 421)), var_insertMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 424)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 419)) ;
      }
    }
    enumerator_16191.gotoNextObject () ;
  }
  GALGAS_formalParameterSignature var_enterEdgeFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 430)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 431)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 431)), GALGAS_string ("inSource")  COMMA_SOURCE_FILE ("shared-map.galgas", 431)) ;
  var_enterEdgeFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 432)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 432)), GALGAS_string ("inTarget")  COMMA_SOURCE_FILE ("shared-map.galgas", 432)) ;
  {
  var_modifierMap.modifier_insertOrReplace (GALGAS_string ("enterEdge").reader_nowhere (SOURCE_FILE ("shared-map.galgas", 434)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 435)), var_enterEdgeFormalArgumentList, GALGAS_bool (false), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 438)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 433)) ;
  }
  GALGAS_formalParameterSignature var_topologicalSortFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 442)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 443)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 443)), GALGAS_string ("outSortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 443)) ;
  var_topologicalSortFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 444)), var_lstringlistTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("shared-map.galgas", 444)), GALGAS_string ("outUnsortedLKeys")  COMMA_SOURCE_FILE ("shared-map.galgas", 444)) ;
  {
  var_instanceMethodMap.modifier_insertKey (GALGAS_string ("topologicalSort").reader_nowhere (SOURCE_FILE ("shared-map.galgas", 446)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 447)), var_topologicalSortFormalArgumentList, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 449)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 451)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 445)) ;
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 455)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_17843 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_17843.hasCurrentObject ()) {
      {
      var_instanceMethodMap.modifier_insertKey (enumerator_17843.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 459)), var_removeMethodFormalArgumentList, enumerator_17843.current_mSearchMethodName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 461)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 463)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 457)) ;
      }
      enumerator_17843.gotoNextObject () ;
    }
  }else if (kBoolFalse == test_15) {
    cEnumerator_mapSearchMethodListAST enumerator_18159 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
    while (enumerator_18159.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (enumerator_18159.current_mSearchMethodName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 471)), var_removeMethodFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 474)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 469)) ;
      }
      enumerator_18159.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 480)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    GALGAS_unifiedTypeMap_2D_proxy var_locationTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("location"), var_locationTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 482)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 484))  COMMA_SOURCE_FILE ("shared-map.galgas", 484)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 485)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 486)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 488)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 483)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeBranch"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 492))  COMMA_SOURCE_FILE ("shared-map.galgas", 492)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 493)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 494)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 494)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 494)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 496)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 491)) ;
    }
    {
    var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("closeOverride"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 500))  COMMA_SOURCE_FILE ("shared-map.galgas", 500)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 501)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 502)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 502)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 502)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isInherited (SOURCE_FILE ("shared-map.galgas", 504)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 499)) ;
    }
    {
    var_instanceMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("checkAutomatonStates"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 508))  COMMA_SOURCE_FILE ("shared-map.galgas", 508)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 509)), GALGAS_formalParameterSignature::constructor_listWithValue (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 510)), var_locationTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("shared-map.galgas", 510)), GALGAS_string ("inErrorLocation")  COMMA_SOURCE_FILE ("shared-map.galgas", 510)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 511)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 513)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 507)) ;
    }
    cEnumerator_mapOverrideBlockListAST enumerator_19926 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
    while (enumerator_19926.hasCurrentObject ()) {
      {
      var_modifierMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("openOverrideFor").add_operation (enumerator_19926.current_mOverrideBlockName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 518)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 518))  COMMA_SOURCE_FILE ("shared-map.galgas", 518)), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 519)), GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 520)), GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 522)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 517)) ;
      }
      enumerator_19926.gotoNextObject () ;
    }
  }
  cEnumerator_propertyInCollectionListAST enumerator_20324 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20324.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (enumerator_20324.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 529)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 529)), enumerator_20324.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 529))  COMMA_SOURCE_FILE ("shared-map.galgas", 529)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20324.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 531)) ;
    }
    {
    GALGAS_functionSignature temp_17 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 535)) ;
    temp_17.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 535)), var_stringTypeIndex, GALGAS_string ("inKey")  COMMA_SOURCE_FILE ("shared-map.galgas", 535)) ;
    var_getterMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 534)), temp_17, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 536)), GALGAS_bool (true), var_attributeTypeIndex, GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 539)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 532)) ;
    }
    enumerator_20324.gotoNextObject () ;
  }
  cEnumerator_propertyInCollectionListAST enumerator_20978 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_20978.hasCurrentObject ()) {
    GALGAS_lstring var_accessorName = GALGAS_lstring::constructor_new (GALGAS_string ("set").add_operation (enumerator_20978.current_mPropertyName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 545)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("shared-map.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)).add_operation (GALGAS_string ("ForKey"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 545)), enumerator_20978.current_mPropertyName (HERE).reader_location (SOURCE_FILE ("shared-map.galgas", 545))  COMMA_SOURCE_FILE ("shared-map.galgas", 545)) ;
    GALGAS_unifiedTypeMap_2D_proxy var_attributeTypeIndex ;
    {
    GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, enumerator_20978.current_mPropertyTypeName (HERE), var_attributeTypeIndex COMMA_SOURCE_FILE ("shared-map.galgas", 546)) ;
    }
    GALGAS_formalParameterSignature var_accessorFormalArgumentList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 547)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 548)), var_attributeTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 548)), enumerator_20978.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 548)) ;
    var_accessorFormalArgumentList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("shared-map.galgas", 549)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("shared-map.galgas", 549)), enumerator_20978.current_mPropertyName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("shared-map.galgas", 549)) ;
    {
    var_modifierMap.modifier_insertOrReplace (var_accessorName, GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("shared-map.galgas", 552)), var_accessorFormalArgumentList, GALGAS_bool (true), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("shared-map.galgas", 555)), GALGAS_string::makeEmptyString () COMMA_SOURCE_FILE ("shared-map.galgas", 550)) ;
    }
    enumerator_20978.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 560)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 575)), GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("shared-map.galgas", 576)), GALGAS_bool (false), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 578)), GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 579)), var_typedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 585)), var_enumerationDescriptor, var_enumerationVariants, function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 588)).operator_or (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 588)) COMMA_SOURCE_FILE ("shared-map.galgas", 588)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 589)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 590)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 591)), object->mAttribute_mSearchMethodList, GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 593)), GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("shared-map.galgas", 595)), GALGAS_string ("emptyMap"), GALGAS_string ("uniquemap-").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 597)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 597)), GALGAS_headerKind::constructor_twoHeaders (SOURCE_FILE ("shared-map.galgas", 598)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 571)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                              categoryMethod_sharedMapDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_enterInSemanticContext (defineCategoryMethod_sharedMapDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@sharedMapDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     const GALGAS_string constinArgument_inProductDirectory,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                     GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapDeclarationAST * object = (const cPtr_sharedMapDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapDeclarationAST) ;
  GALGAS_stringset var_initialStateSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 678)) ;
  cEnumerator_insertMethodListAST enumerator_25816 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_25816.hasCurrentObject ()) {
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 680)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 681)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_25816.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_25816.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 682)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 682)).add_operation (GALGAS_string ("' insert method should name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 682))  COMMA_SOURCE_FILE ("shared-map.galgas", 682)) ;
      }else if (kBoolFalse == test_1) {
        var_initialStateSet.addAssign_operation (enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 684))  COMMA_SOURCE_FILE ("shared-map.galgas", 684)) ;
      }
    }else if (kBoolFalse == test_0) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_25816.current_mInitialStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 686)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_location location_4 (enumerator_25816.current_mInsertMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_4, GALGAS_string ("the '").add_operation (enumerator_25816.current_mInsertMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 687)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 687)).add_operation (GALGAS_string ("' insert method should not name an automaton state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 687))  COMMA_SOURCE_FILE ("shared-map.galgas", 687)) ;
      }
    }
    enumerator_25816.gotoNextObject () ;
  }
  GALGAS_mapAutomatonActionMap var_mapAutomatonActionMap = GALGAS_mapAutomatonActionMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 691)) ;
  cEnumerator_mapSearchMethodListAST enumerator_26387 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_26387.hasCurrentObject ()) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 693)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 694)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_26387.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_26387.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 695)).add_operation (GALGAS_string ("' search method should name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 695))  COMMA_SOURCE_FILE ("shared-map.galgas", 695)) ;
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = var_mapAutomatonActionMap.reader_hasKey (enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 696)) COMMA_SOURCE_FILE ("shared-map.galgas", 696)).operator_not (SOURCE_FILE ("shared-map.galgas", 696)).boolEnum () ;
        if (kBoolTrue == test_8) {
          {
          var_mapAutomatonActionMap.modifier_insertKey (enumerator_26387.current_mActionName (HERE), var_mapAutomatonActionMap.reader_count (SOURCE_FILE ("shared-map.galgas", 698)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 698)) ;
          }
        }
      }
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_26387.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 702)).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_location location_10 (enumerator_26387.current_mSearchMethodName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_10, GALGAS_string ("the '").add_operation (enumerator_26387.current_mSearchMethodName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 703)).add_operation (GALGAS_string ("' search method should not name an automaton action"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 703))  COMMA_SOURCE_FILE ("shared-map.galgas", 703)) ;
      }
    }
    enumerator_26387.gotoNextObject () ;
  }
  GALGAS_mapAutomatonStateMap var_mapAutomatonStateMap = GALGAS_mapAutomatonStateMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 707)) ;
  cEnumerator_mapStateList enumerator_27168 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27168.hasCurrentObject ()) {
    {
    var_mapAutomatonStateMap.modifier_insertKey (enumerator_27168.current_mStateName (HERE), var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 709)), enumerator_27168.current_mStateMessageKind (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 709)) ;
    }
    enumerator_27168.gotoNextObject () ;
  }
  cEnumerator_mapStateList enumerator_27303 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27303.hasCurrentObject ()) {
    cEnumerator_mapStateTransitionList enumerator_27336 (enumerator_27303.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_27336.hasCurrentObject ()) {
      GALGAS_uint joker_27397_2 ; // Joker input parameter
      GALGAS_mapAutomatonMessageKind joker_27397_1 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_27336.current_mTargetStateName (HERE), joker_27397_2, joker_27397_1, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 713)) ;
      enumerator_27336.gotoNextObject () ;
    }
    enumerator_27303.gotoNextObject () ;
  }
  GALGAS_stringset var_allActions = var_mapAutomatonActionMap.reader_keySet (SOURCE_FILE ("shared-map.galgas", 717)) ;
  GALGAS_mapStateSortedList var_mapStateSortedList = GALGAS_mapStateSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 718)) ;
  cEnumerator_mapStateList enumerator_27592 (object->mAttribute_mMapStateList, kEnumeration_up) ;
  while (enumerator_27592.hasCurrentObject ()) {
    GALGAS_stringset var_actionsForCurrentState = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 720)) ;
    GALGAS_mapStateTransitionSortedList var_mapStateTransitionSortedList = GALGAS_mapStateTransitionSortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 721)) ;
    cEnumerator_mapStateTransitionList enumerator_27736 (enumerator_27592.current_mTransitionList (HERE), kEnumeration_up) ;
    while (enumerator_27736.hasCurrentObject ()) {
      GALGAS_uint var_actionIndex ;
      var_mapAutomatonActionMap.method_searchKey (enumerator_27736.current_mActionName (HERE), var_actionIndex, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 723)) ;
      const enumGalgasBool test_11 = var_actionsForCurrentState.reader_hasKey (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 724)) COMMA_SOURCE_FILE ("shared-map.galgas", 724)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_location location_12 (enumerator_27736.current_mActionName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_12, GALGAS_string ("the '").add_operation (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 725)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 725)).add_operation (GALGAS_string ("' action is already used for this state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 725))  COMMA_SOURCE_FILE ("shared-map.galgas", 725)) ;
      }
      var_actionsForCurrentState.addAssign_operation (enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 727))  COMMA_SOURCE_FILE ("shared-map.galgas", 727)) ;
      GALGAS_uint var_targetStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_28127 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_27736.current_mTargetStateName (HERE), var_targetStateIndex, joker_28127, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 728)) ;
      var_mapStateTransitionSortedList.addAssign_operation (var_actionIndex, enumerator_27736.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 731)), var_targetStateIndex, enumerator_27736.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 733)), enumerator_27736.current_mTransitionMessageKind (HERE), enumerator_27736.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 735))  COMMA_SOURCE_FILE ("shared-map.galgas", 729)) ;
      enumerator_27736.gotoNextObject () ;
    }
    GALGAS_uint var_stateIndex ;
    GALGAS_mapAutomatonMessageKind joker_28428 ; // Joker input parameter
    var_mapAutomatonStateMap.method_searchKey (enumerator_27592.current_mStateName (HERE), var_stateIndex, joker_28428, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 737)) ;
    var_mapStateSortedList.addAssign_operation (var_stateIndex, enumerator_27592.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 740)), enumerator_27592.current_mStateMessageKind (HERE), enumerator_27592.current_mStateMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 742)), var_mapStateTransitionSortedList  COMMA_SOURCE_FILE ("shared-map.galgas", 738)) ;
    GALGAS_stringset var_missingActions = var_allActions.substract_operation (var_actionsForCurrentState, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 744)) ;
    const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, var_missingActions.reader_count (SOURCE_FILE ("shared-map.galgas", 745)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_13) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_28755 (var_missingActions, kEnumeration_up) ;
      while (enumerator_28755.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_28755.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 748)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 748))  COMMA_SOURCE_FILE ("shared-map.galgas", 748)) ;
        if (enumerator_28755.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("shared-map.galgas", 749)) ;
        }
        enumerator_28755.gotoNextObject () ;
      }
      GALGAS_location location_14 (enumerator_27592.current_mStateName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_14, GALGAS_string ("the following actions are not named in a transition from this state: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 751))  COMMA_SOURCE_FILE ("shared-map.galgas", 751)) ;
    }
    enumerator_27592.gotoNextObject () ;
  }
  GALGAS_stringset var_accessibleStates = var_initialStateSet ;
  GALGAS_bool var_progress = GALGAS_bool (true) ;
  if (object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 757)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 757)).isValid ()) {
    uint32_t variant_29049 = object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 757)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 757)).uintValue () ;
    bool loop_29049 = true ;
    while (loop_29049) {
      loop_29049 = var_progress.isValid () ;
      if (loop_29049) {
        loop_29049 = var_progress.boolValue () ;
      }
      if (loop_29049 && (0 == variant_29049)) {
        loop_29049 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 757)) ;
      }
      if (loop_29049) {
        variant_29049 -- ;
        var_progress = GALGAS_bool (false) ;
        cEnumerator_mapStateList enumerator_29145 (object->mAttribute_mMapStateList, kEnumeration_up) ;
        while (enumerator_29145.hasCurrentObject ()) {
          const enumGalgasBool test_15 = var_accessibleStates.reader_hasKey (enumerator_29145.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 760)) COMMA_SOURCE_FILE ("shared-map.galgas", 760)).boolEnum () ;
          if (kBoolTrue == test_15) {
            cEnumerator_mapStateTransitionList enumerator_29243 (enumerator_29145.current_mTransitionList (HERE), kEnumeration_up) ;
            while (enumerator_29243.hasCurrentObject ()) {
              const enumGalgasBool test_16 = var_accessibleStates.reader_hasKey (enumerator_29243.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 762)) COMMA_SOURCE_FILE ("shared-map.galgas", 762)).operator_not (SOURCE_FILE ("shared-map.galgas", 762)).boolEnum () ;
              if (kBoolTrue == test_16) {
                var_accessibleStates.addAssign_operation (enumerator_29243.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 763))  COMMA_SOURCE_FILE ("shared-map.galgas", 763)) ;
                var_progress = GALGAS_bool (true) ;
              }
              enumerator_29243.gotoNextObject () ;
            }
          }
          enumerator_29145.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_stringset var_uselessStates = var_mapAutomatonStateMap.reader_keySet (SOURCE_FILE ("shared-map.galgas", 770)).substract_operation (var_accessibleStates, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 770)) ;
  const enumGalgasBool test_17 = GALGAS_bool (kIsStrictSup, var_uselessStates.reader_count (SOURCE_FILE ("shared-map.galgas", 771)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
    cEnumerator_stringset enumerator_29619 (var_uselessStates, kEnumeration_up) ;
    while (enumerator_29619.hasCurrentObject ()) {
      var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_29619.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 774)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 774))  COMMA_SOURCE_FILE ("shared-map.galgas", 774)) ;
      if (enumerator_29619.hasNextObject ()) {
        var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("shared-map.galgas", 775)) ;
      }
      enumerator_29619.gotoNextObject () ;
    }
    inCompiler->emitSemanticWarning (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 777)), GALGAS_string ("the following map automaton states are useless: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 777))  COMMA_SOURCE_FILE ("shared-map.galgas", 777)) ;
  }
  GALGAS_stringset var_neededAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 781)) ;
  GALGAS_stringset var_accessibilityGraph = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 782)) ;
  cEnumerator_mapAutomatonStateMap enumerator_29964 (var_mapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_29964.hasCurrentObject ()) {
    GALGAS_stringset var_reachableStates = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 784)) ;
    var_reachableStates.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 785))  COMMA_SOURCE_FILE ("shared-map.galgas", 785)) ;
    GALGAS_bool var_progress = GALGAS_bool (true) ;
    if (var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 787)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 787)).isValid ()) {
      uint32_t variant_30076 = var_mapAutomatonStateMap.reader_count (SOURCE_FILE ("shared-map.galgas", 787)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 787)).uintValue () ;
      bool loop_30076 = true ;
      while (loop_30076) {
        loop_30076 = var_progress.isValid () ;
        if (loop_30076) {
          loop_30076 = var_progress.boolValue () ;
        }
        if (loop_30076 && (0 == variant_30076)) {
          loop_30076 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("shared-map.galgas", 787)) ;
        }
        if (loop_30076) {
          variant_30076 -- ;
          var_progress = GALGAS_bool (false) ;
          cEnumerator_mapStateList enumerator_30182 (object->mAttribute_mMapStateList, kEnumeration_up) ;
          while (enumerator_30182.hasCurrentObject ()) {
            const enumGalgasBool test_18 = var_reachableStates.reader_hasKey (enumerator_30182.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 790)) COMMA_SOURCE_FILE ("shared-map.galgas", 790)).boolEnum () ;
            if (kBoolTrue == test_18) {
              cEnumerator_mapStateTransitionList enumerator_30283 (enumerator_30182.current_mTransitionList (HERE), kEnumeration_up) ;
              while (enumerator_30283.hasCurrentObject ()) {
                const enumGalgasBool test_19 = var_reachableStates.reader_hasKey (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 792)) COMMA_SOURCE_FILE ("shared-map.galgas", 792)).operator_not (SOURCE_FILE ("shared-map.galgas", 792)).boolEnum () ;
                if (kBoolTrue == test_19) {
                  var_reachableStates.addAssign_operation (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 793))  COMMA_SOURCE_FILE ("shared-map.galgas", 793)) ;
                  var_accessibilityGraph.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 794)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 794)).add_operation (enumerator_30283.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 794)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 794))  COMMA_SOURCE_FILE ("shared-map.galgas", 794)) ;
                  var_progress = GALGAS_bool (true) ;
                }
                enumerator_30283.gotoNextObject () ;
              }
            }
            enumerator_30182.gotoNextObject () ;
          }
        }
      }
    }
    cEnumerator_stringset enumerator_30627 (var_reachableStates, kEnumeration_up) ;
    while (enumerator_30627.hasCurrentObject ()) {
      const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 802)).objectCompare (enumerator_30627.current_key (HERE))).boolEnum () ;
      if (kBoolTrue == test_20) {
        var_neededAssociations.addAssign_operation (enumerator_29964.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 803)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 803)).add_operation (enumerator_30627.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 803))  COMMA_SOURCE_FILE ("shared-map.galgas", 803)) ;
      }
      enumerator_30627.gotoNextObject () ;
    }
    enumerator_29964.gotoNextObject () ;
  }
  GALGAS_mapOverrideList var_mapOverrideList = GALGAS_mapOverrideList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 808)) ;
  cEnumerator_mapOverrideBlockListAST enumerator_30828 (object->mAttribute_mMapOverrideBlockListAST, kEnumeration_up) ;
  while (enumerator_30828.hasCurrentObject ()) {
    GALGAS_stringset var_handledAssociations = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 810)) ;
    GALGAS_stringset var_neededCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 811)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_31_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 812)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_31087 (enumerator_30828.current_mMapOverrideBlockDescriptor_31_AST (HERE), kEnumeration_up) ;
    while (enumerator_31087.hasCurrentObject ()) {
      GALGAS_uint var_startStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31167 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mLeftState (HERE), var_startStateNameIndex, joker_31167, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 814)) ;
      GALGAS_uint var_currentStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31249 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mRightState (HERE), var_currentStateNameIndex, joker_31249, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 815)) ;
      GALGAS_string var_association = enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 816)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 816)).add_operation (enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 816)) ;
      const enumGalgasBool test_21 = var_neededAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 817)).operator_not (SOURCE_FILE ("shared-map.galgas", 817)).boolEnum () ;
      if (kBoolTrue == test_21) {
        GALGAS_location location_22 (enumerator_31087.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticWarning (location_22, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 818)).add_operation (GALGAS_string ("' association is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 818))  COMMA_SOURCE_FILE ("shared-map.galgas", 818)) ;
      }
      const enumGalgasBool test_23 = var_handledAssociations.reader_hasKey (var_association COMMA_SOURCE_FILE ("shared-map.galgas", 820)).boolEnum () ;
      if (kBoolTrue == test_23) {
        GALGAS_location location_24 (enumerator_31087.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_24, GALGAS_string ("the '").add_operation (var_association, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 822)).add_operation (GALGAS_string ("' association is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 822))  COMMA_SOURCE_FILE ("shared-map.galgas", 821)) ;
      }
      var_handledAssociations.addAssign_operation (var_association  COMMA_SOURCE_FILE ("shared-map.galgas", 824)) ;
      GALGAS_uint var_finalStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_31765 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_31087.current_mResultingState (HERE), var_finalStateNameIndex, joker_31765, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 825)) ;
      const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 826)).objectCompare (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 826)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_neededCombinaisons.addAssign_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 827)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 827)).add_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 827)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 827))  COMMA_SOURCE_FILE ("shared-map.galgas", 827)) ;
        var_neededCombinaisons.addAssign_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 828)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 828)).add_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 828)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 828))  COMMA_SOURCE_FILE ("shared-map.galgas", 828)) ;
        const enumGalgasBool test_26 = var_accessibilityGraph.reader_hasKey (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 829)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 829)).add_operation (enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 829)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 829)) COMMA_SOURCE_FILE ("shared-map.galgas", 829)).operator_not (SOURCE_FILE ("shared-map.galgas", 829)).boolEnum () ;
        if (kBoolTrue == test_26) {
          GALGAS_location location_27 (enumerator_31087.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_27, GALGAS_string ("the '").add_operation (enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (GALGAS_string ("' state is not reachable from '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 831)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 831))  COMMA_SOURCE_FILE ("shared-map.galgas", 830)) ;
        }
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_31087.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 834)) ;
      }
      var_branchBehaviourSortedListForMapOverride_31_.addAssign_operation (var_startStateNameIndex, enumerator_31087.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 837)), var_currentStateNameIndex, enumerator_31087.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 839)), var_finalStateNameIndex, enumerator_31087.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 841)), enumerator_31087.current_mMessageKind (HERE), enumerator_31087.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 843))  COMMA_SOURCE_FILE ("shared-map.galgas", 835)) ;
      enumerator_31087.gotoNextObject () ;
    }
    GALGAS_stringset var_forgottenAssociations = var_neededAssociations.substract_operation (var_handledAssociations, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 845)) ;
    const enumGalgasBool test_28 = GALGAS_bool (kIsStrictSup, var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 846)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_28) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_32787 (var_forgottenAssociations, kEnumeration_up) ;
      while (enumerator_32787.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "  - ").add_operation (enumerator_32787.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 849))  COMMA_SOURCE_FILE ("shared-map.galgas", 849)) ;
        enumerator_32787.gotoNextObject () ;
      }
      inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 851)), var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 851)).reader_string (SOURCE_FILE ("shared-map.galgas", 851)).add_operation (GALGAS_string (" associations should be defined:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 851)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 851))  COMMA_SOURCE_FILE ("shared-map.galgas", 851)) ;
    }
    GALGAS_stringset var_definedCombinaisons = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("shared-map.galgas", 853)) ;
    GALGAS_branchBehaviourSortedListForMapOverride var_branchBehaviourSortedListForMapOverride_32_ = GALGAS_branchBehaviourSortedListForMapOverride::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 854)) ;
    cEnumerator_mapOverrideBlockDescriptorAST enumerator_33150 (enumerator_30828.current_mMapOverrideBlockDescriptor_32_AST (HERE), kEnumeration_up) ;
    while (enumerator_33150.hasCurrentObject ()) {
      GALGAS_uint var_leftStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_33225 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mLeftState (HERE), var_leftStateIndex, joker_33225, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 856)) ;
      GALGAS_uint var_rightStateIndex ;
      GALGAS_mapAutomatonMessageKind joker_33301 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mRightState (HERE), var_rightStateIndex, joker_33301, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 857)) ;
      GALGAS_string var_combinaison = enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 858)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 858)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 858)) ;
      const enumGalgasBool test_29 = var_neededCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 859)).operator_not (SOURCE_FILE ("shared-map.galgas", 859)).boolEnum () ;
      if (kBoolTrue == test_29) {
        GALGAS_location location_30 (enumerator_33150.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_30, GALGAS_string ("the '").add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 861)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861)).add_operation (GALGAS_string ("' combinaison is useless"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 861))  COMMA_SOURCE_FILE ("shared-map.galgas", 860)) ;
      }
      const enumGalgasBool test_31 = var_definedCombinaisons.reader_hasKey (var_combinaison COMMA_SOURCE_FILE ("shared-map.galgas", 863)).boolEnum () ;
      if (kBoolTrue == test_31) {
        GALGAS_location location_32 (enumerator_33150.current_mRightState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_32, GALGAS_string ("the '").add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 865)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865)).add_operation (GALGAS_string ("' combinaison is already defined"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 865))  COMMA_SOURCE_FILE ("shared-map.galgas", 864)) ;
      }
      var_definedCombinaisons.addAssign_operation (var_combinaison  COMMA_SOURCE_FILE ("shared-map.galgas", 867)) ;
      GALGAS_uint var_resultingStateNameIndex ;
      GALGAS_mapAutomatonMessageKind joker_33865 ; // Joker input parameter
      var_mapAutomatonStateMap.method_searchKey (enumerator_33150.current_mResultingState (HERE), var_resultingStateNameIndex, joker_33865, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 868)) ;
      const enumGalgasBool test_33 = GALGAS_bool (kIsNotEqual, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 869)).objectCompare (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 869)))).operator_and (GALGAS_bool (kIsNotEqual, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 870)).objectCompare (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 870)))) COMMA_SOURCE_FILE ("shared-map.galgas", 869)).operator_and (var_accessibilityGraph.reader_hasKey (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 871)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 871)).add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 871)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 871)) COMMA_SOURCE_FILE ("shared-map.galgas", 871)).operator_not (SOURCE_FILE ("shared-map.galgas", 871)) COMMA_SOURCE_FILE ("shared-map.galgas", 870)).boolEnum () ;
      if (kBoolTrue == test_33) {
        GALGAS_location location_34 (enumerator_33150.current_mResultingState (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_34, GALGAS_string ("the '").add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (GALGAS_string ("' state cannot be reached from the '"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 873)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873)).add_operation (GALGAS_string ("' state"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 873))  COMMA_SOURCE_FILE ("shared-map.galgas", 872)) ;
      }
      {
      routine_check_5F_K_5F_escapeCharacters (enumerator_33150.current_mTransitionMessage (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 875)) ;
      }
      const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_33150.current_mMessageKind (HERE).objectCompare (GALGAS_mapAutomatonMessageKind::constructor_noMessage (SOURCE_FILE ("shared-map.galgas", 876)))).boolEnum () ;
      if (kBoolTrue == test_35) {
        var_definedCombinaisons.addAssign_operation (enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 877)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 877)).add_operation (enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 877)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 877))  COMMA_SOURCE_FILE ("shared-map.galgas", 877)) ;
        var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_rightStateIndex, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 880)), var_leftStateIndex, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 882)), var_resultingStateNameIndex, enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 884)), enumerator_33150.current_mMessageKind (HERE), enumerator_33150.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 886))  COMMA_SOURCE_FILE ("shared-map.galgas", 878)) ;
      }
      var_branchBehaviourSortedListForMapOverride_32_.addAssign_operation (var_leftStateIndex, enumerator_33150.current_mLeftState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 890)), var_rightStateIndex, enumerator_33150.current_mRightState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 892)), var_resultingStateNameIndex, enumerator_33150.current_mResultingState (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 894)), enumerator_33150.current_mMessageKind (HERE), enumerator_33150.current_mTransitionMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 896))  COMMA_SOURCE_FILE ("shared-map.galgas", 888)) ;
      enumerator_33150.gotoNextObject () ;
    }
    const enumGalgasBool test_36 = GALGAS_bool (kIsEqual, var_forgottenAssociations.reader_count (SOURCE_FILE ("shared-map.galgas", 898)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_36) {
      GALGAS_stringset var_forgottenCombinaisons = var_neededCombinaisons.substract_operation (var_definedCombinaisons, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 899)) ;
      const enumGalgasBool test_37 = GALGAS_bool (kIsStrictSup, var_forgottenCombinaisons.reader_count (SOURCE_FILE ("shared-map.galgas", 900)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_37) {
        GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
        cEnumerator_stringset enumerator_35323 (var_forgottenCombinaisons, kEnumeration_up) ;
        while (enumerator_35323.hasCurrentObject ()) {
          var_s.dotAssign_operation (GALGAS_string ("\n"
            "  - ").add_operation (enumerator_35323.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 903))  COMMA_SOURCE_FILE ("shared-map.galgas", 903)) ;
          enumerator_35323.gotoNextObject () ;
        }
        inCompiler->emitSemanticError (GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 905)), var_forgottenCombinaisons.reader_count (SOURCE_FILE ("shared-map.galgas", 905)).reader_string (SOURCE_FILE ("shared-map.galgas", 905)).add_operation (GALGAS_string (" combinaisons are forgotten:"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 905)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 905))  COMMA_SOURCE_FILE ("shared-map.galgas", 905)) ;
      }
    }
    var_mapOverrideList.addAssign_operation (enumerator_30828.current_mOverrideBlockName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 909)), var_branchBehaviourSortedListForMapOverride_31_, var_branchBehaviourSortedListForMapOverride_32_  COMMA_SOURCE_FILE ("shared-map.galgas", 908)) ;
    enumerator_30828.gotoNextObject () ;
  }
  GALGAS_typedPropertyList var_typedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("shared-map.galgas", 914)) ;
  GALGAS_attributeIndexMap var_attributeMap = GALGAS_attributeIndexMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 915)) ;
  cEnumerator_propertyInCollectionListAST enumerator_35787 (object->mAttribute_mPropertyList, kEnumeration_up) ;
  while (enumerator_35787.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_35787.current_mPropertyTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 917)) ;
    GALGAS_bool var_hasSetter = GALGAS_bool (true) ;
    GALGAS_bool var_hasGetter = GALGAS_bool (true) ;
    var_typedAttributeList.addAssign_operation (var_t, enumerator_35787.current_mPropertyName (HERE), var_hasSetter, var_hasGetter  COMMA_SOURCE_FILE ("shared-map.galgas", 920)) ;
    {
    var_attributeMap.modifier_insertKey (enumerator_35787.current_mPropertyName (HERE), var_t, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 925)) ;
    }
    enumerator_35787.gotoNextObject () ;
  }
  GALGAS_insertMethodMap var_insertMethodMap = GALGAS_insertMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 928)) ;
  cEnumerator_insertMethodListAST enumerator_36176 (object->mAttribute_mInsertMethodList, kEnumeration_up) ;
  while (enumerator_36176.hasCurrentObject ()) {
    {
    var_insertMethodMap.modifier_insertKey (enumerator_36176.current_mInsertMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 930)) ;
    }
    cEnumerator_stringlist enumerator_36369 (enumerator_36176.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 932)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 932)), kEnumeration_up) ;
    while (enumerator_36369.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36369.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 933)) ;
      {
      GALGAS_string joker_36482 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_36482, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 934)) ;
      }
      cEnumerator_stringlist enumerator_36514 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_36514.hasCurrentObject ()) {
        const enumGalgasBool test_38 = GALGAS_bool (kIsStrictSup, enumerator_36514.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 936)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_38) {
          GALGAS_char var_c = enumerator_36514.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 937)) ;
          const enumGalgasBool test_39 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 938)).boolEnum () ;
          if (kBoolTrue == test_39) {
            GALGAS_location location_40 (enumerator_36176.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_40, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in an insert error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 939)) ;
          }
        }
        enumerator_36514.gotoNextObject () ;
      }
      enumerator_36369.gotoNextObject () ;
    }
    cEnumerator_stringlist enumerator_36958 (enumerator_36176.current_mShadowErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 945)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 945)), kEnumeration_up) ;
    while (enumerator_36958.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_36958.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 946)) ;
      {
      GALGAS_string joker_37071 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_37071, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 947)) ;
      }
      cEnumerator_stringlist enumerator_37103 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37103.hasCurrentObject ()) {
        const enumGalgasBool test_41 = GALGAS_bool (kIsStrictSup, enumerator_37103.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 949)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_41) {
          GALGAS_char var_c = enumerator_37103.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 950)) ;
          const enumGalgasBool test_42 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("shared-map.galgas", 951)).boolEnum () ;
          if (kBoolTrue == test_42) {
            GALGAS_location location_43 (enumerator_36176.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_43, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in a shadow error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 952)) ;
          }
        }
        enumerator_37103.gotoNextObject () ;
      }
      enumerator_36958.gotoNextObject () ;
    }
    enumerator_36176.gotoNextObject () ;
  }
  GALGAS_searchMethodMap var_searchMethodMap = GALGAS_searchMethodMap::constructor_emptyMap (SOURCE_FILE ("shared-map.galgas", 959)) ;
  cEnumerator_mapSearchMethodListAST enumerator_37498 (object->mAttribute_mSearchMethodList, kEnumeration_up) ;
  while (enumerator_37498.hasCurrentObject ()) {
    const enumGalgasBool test_44 = GALGAS_bool (kIsEqual, object->mAttribute_mMapStateList.reader_length (SOURCE_FILE ("shared-map.galgas", 961)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_37498.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 962)) ;
      }
    }else if (kBoolFalse == test_44) {
      {
      var_searchMethodMap.modifier_insertKey (enumerator_37498.current_mSearchMethodName (HERE), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 964)) ;
      }
    }
    cEnumerator_stringlist enumerator_37805 (enumerator_37498.current_mErrorMessage (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 967)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("shared-map.galgas", 967)), kEnumeration_up) ;
    while (enumerator_37805.hasCurrentObject ()) {
      GALGAS_stringlist var_explodedArray = enumerator_37805.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("shared-map.galgas", 968)) ;
      {
      GALGAS_string joker_37918 ; // Joker input parameter
      var_explodedArray.modifier_popFirst (joker_37918, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 969)) ;
      }
      cEnumerator_stringlist enumerator_37950 (var_explodedArray, kEnumeration_up) ;
      while (enumerator_37950.hasCurrentObject ()) {
        const enumGalgasBool test_45 = GALGAS_bool (kIsStrictSup, enumerator_37950.current_mValue (HERE).reader_length (SOURCE_FILE ("shared-map.galgas", 971)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_45) {
          GALGAS_char var_c = enumerator_37950.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 972)) ;
          const enumGalgasBool test_46 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
          if (kBoolTrue == test_46) {
            GALGAS_location location_47 (enumerator_37498.current_mErrorMessage (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
            inCompiler->emitSemanticError (location_47, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in a search error message")  COMMA_SOURCE_FILE ("shared-map.galgas", 974)) ;
          }
        }
        enumerator_37950.gotoNextObject () ;
      }
      enumerator_37805.gotoNextObject () ;
    }
    enumerator_37498.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("shared map ").add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 982)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 982)), GALGAS_sharedMapTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapTypeName, inCompiler  COMMA_SOURCE_FILE ("shared-map.galgas", 984)), object->mAttribute_mMapTypeName, var_typedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, var_mapAutomatonStateMap, var_mapAutomatonActionMap, var_mapStateSortedList, var_mapOverrideList  COMMA_SOURCE_FILE ("shared-map.galgas", 983)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("shared-map.galgas", 981)) ;
  GALGAS_string var_graphFile = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/shared-map-"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)).add_operation (object->mAttribute_mMapTypeName.reader_string (SOURCE_FILE ("shared-map.galgas", 996)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)).add_operation (GALGAS_string (".dot"), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 996)) ;
  const enumGalgasBool test_48 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateSharedMapAutomatonDotFiles.reader_value ()).boolEnum () ;
  if (kBoolTrue == test_48) {
    GALGAS_string var_theGraph = GALGAS_string ("digraph G {\n") ;
    cEnumerator_mapAutomatonStateMap enumerator_38940 (var_mapAutomatonStateMap, kEnumeration_up) ;
    while (enumerator_38940.hasCurrentObject ()) {
      var_theGraph.dotAssign_operation (GALGAS_string ("\"").add_operation (enumerator_38940.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (enumerator_38940.current_lkey (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1000))  COMMA_SOURCE_FILE ("shared-map.galgas", 1000)) ;
      const enumGalgasBool test_49 = var_initialStateSet.reader_hasKey (enumerator_38940.current_lkey (HERE).mAttribute_string COMMA_SOURCE_FILE ("shared-map.galgas", 1001)).boolEnum () ;
      if (kBoolTrue == test_49) {
        var_theGraph.dotAssign_operation (GALGAS_string (" shape=box color=blue")  COMMA_SOURCE_FILE ("shared-map.galgas", 1002)) ;
      }else if (kBoolFalse == test_49) {
        var_theGraph.dotAssign_operation (GALGAS_string (" shape=box")  COMMA_SOURCE_FILE ("shared-map.galgas", 1004)) ;
      }
      switch (enumerator_38940.current_mStateMessageKind (HERE).enumValue ()) {
      case GALGAS_mapAutomatonMessageKind::kNotBuilt:
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
        {
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
        {
          var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"orange\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1009)) ;
        }
        break ;
      case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
        {
          var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"red\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1011)) ;
        }
        break ;
      }
      var_theGraph.dotAssign_operation (GALGAS_string ("];\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1013)) ;
      enumerator_38940.gotoNextObject () ;
    }
    cEnumerator_mapStateList enumerator_39418 (object->mAttribute_mMapStateList, kEnumeration_up) ;
    while (enumerator_39418.hasCurrentObject ()) {
      cEnumerator_mapStateTransitionList enumerator_39453 (enumerator_39418.current_mTransitionList (HERE), kEnumeration_up) ;
      while (enumerator_39453.hasCurrentObject ()) {
        var_theGraph.dotAssign_operation (GALGAS_string ("\"").add_operation (enumerator_39418.current_mStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (enumerator_39453.current_mTargetStateName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\" [label=\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (enumerator_39453.current_mActionName (HERE).reader_string (SOURCE_FILE ("shared-map.galgas", 1017)), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1017))  COMMA_SOURCE_FILE ("shared-map.galgas", 1017)) ;
        switch (enumerator_39453.current_mTransitionMessageKind (HERE).enumValue ()) {
        case GALGAS_mapAutomatonMessageKind::kNotBuilt:
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_noMessage:
          {
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_warningMessage:
          {
            var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"orange\" color=\"orange\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1021)) ;
          }
          break ;
        case GALGAS_mapAutomatonMessageKind::kEnum_errorMessage:
          {
            var_theGraph.dotAssign_operation (GALGAS_string (" fontcolor=\"red\" color=\"red\"")  COMMA_SOURCE_FILE ("shared-map.galgas", 1023)) ;
          }
          break ;
        }
        var_theGraph.dotAssign_operation (GALGAS_string ("];\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1025)) ;
        enumerator_39453.gotoNextObject () ;
      }
      enumerator_39418.gotoNextObject () ;
    }
    var_theGraph.dotAssign_operation (GALGAS_string ("}\n")  COMMA_SOURCE_FILE ("shared-map.galgas", 1028)) ;
    GALGAS_bool joker_39948 ; // Joker input parameter
    var_theGraph.method_writeToFileWhenDifferentContents (var_graphFile, joker_39948, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1029)) ;
  }else if (kBoolFalse == test_48) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_graphFile, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1031)) ;
    }
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_sharedMapDeclarationAST.mSlotID,
                                        categoryMethod_sharedMapDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapDeclarationAST_semanticAnalysis (defineCategoryMethod_sharedMapDeclarationAST_semanticAnalysis, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sharedMapTypeForGeneration appendDeclaration1'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  cEnumerator_typedPropertyList enumerator_42161 (object->mAttribute_mTypedAttributeList, kEnumeration_up) ;
  while (enumerator_42161.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName_31_ (enumerator_42161.current_mAttributeTypeProxy (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1086)) ;
    enumerator_42161.gotoNextObject () ;
  }
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1090)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1091)), object->mAttribute_mTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("shared-map.galgas", 1089))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1096)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1097)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1098)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1099)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1100)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1101)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1102)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1103)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1104)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1105)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1106)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1107)) COMMA_SOURCE_FILE ("shared-map.galgas", 1095)))  COMMA_SOURCE_FILE ("shared-map.galgas", 1095)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (void) {
  enterCategoryMethod_appendDeclaration_31_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                             categoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_31_ (defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_31_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@sharedMapTypeForGeneration appendDeclaration2'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                             const GALGAS_bool /* constinArgument_inGenerateForGalgas_33_ */,
                                                                             const GALGAS_string /* constinArgument_inOutputDirectory */,
                                                                             GALGAS_stringset & /* ioArgument_ioInclusionSet */,
                                                                             GALGAS_string & outArgument_outHeader,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeHeader_32_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1119)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1120)), object->mAttribute_mTypedAttributeList COMMA_SOURCE_FILE ("shared-map.galgas", 1118))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (void) {
  enterCategoryMethod_appendDeclaration_32_ (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                             categoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendDeclaration_32_ (defineCategoryMethod_sharedMapTypeForGeneration_appendDeclaration_32_, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@sharedMapTypeForGeneration appendSpecificImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation (const cPtr_semanticDeclarationForGeneration * inObject,
                                                                                    const GALGAS_unifiedTypeMap /* constinArgument_inTypeMap */,
                                                                                    GALGAS_stringset & ioArgument_ioInclusionSet,
                                                                                    GALGAS_string & outArgument_outImplementation,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_sharedMapTypeForGeneration * object = (const cPtr_sharedMapTypeForGeneration *) inObject ;
  macroValidSharedObject (object, cPtr_sharedMapTypeForGeneration) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1131)) ;
  GALGAS_keySortedList var_keySortedList = GALGAS_keySortedList::constructor_emptySortedList (SOURCE_FILE ("shared-map.galgas", 1132)) ;
  cEnumerator_mapAutomatonStateMap enumerator_43856 (object->mAttribute_mMapAutomatonStateMap, kEnumeration_up) ;
  while (enumerator_43856.hasCurrentObject ()) {
    var_keySortedList.addAssign_operation (enumerator_43856.current_lkey (HERE).mAttribute_string, enumerator_43856.current_mStateIndex (HERE)  COMMA_SOURCE_FILE ("shared-map.galgas", 1134)) ;
    enumerator_43856.gotoNextObject () ;
  }
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_sharedMapGenerationTemplate_uniqueMapTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("shared-map.galgas", 1137)), object->mAttribute_mTypedAttributeList, object->mAttribute_mInsertMethodList, object->mAttribute_mSearchMethodList, object->mAttribute_mMapAutomatonStateMap, object->mAttribute_mMapAutomatonActionMap, object->mAttribute_mMapStateSortedList, object->mAttribute_mMapOverrideList, var_keySortedList COMMA_SOURCE_FILE ("shared-map.galgas", 1136))) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation (void) {
  enterCategoryMethod_appendSpecificImplementation (kTypeDescriptor_GALGAS_sharedMapTypeForGeneration.mSlotID,
                                                    categoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_sharedMapTypeForGeneration_appendSpecificImplementation (defineCategoryMethod_sharedMapTypeForGeneration_appendSpecificImplementation, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@mapProxyDeclarationAST enterDeclarationInGraph'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                           GALGAS_categoryMethodMapForBuildingContext & /* ioArgument_ioCategoryMethodMapForBuildingContext */,
                                                                           GALGAS_categoryReaderMapForBuildingContext & /* ioArgument_ioCategoryReaderMapForBuildingContext */,
                                                                           GALGAS_categoryModifierMapForBuildingContext & /* ioArgument_ioCategoryModifierMapForBuildingContext */,
                                                                           GALGAS_semanticDeclarationListAST & /* ioArgument_ioCategoryOverrideDefinitionList */,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_lstring var_key = GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 20)), object->mAttribute_mMapProxyTypeName.reader_location (SOURCE_FILE ("map-proxy.galgas", 20))  COMMA_SOURCE_FILE ("map-proxy.galgas", 20)) ;
  {
  const GALGAS_mapProxyDeclarationAST temp_0 = object ;
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addNode (var_key, temp_0, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 21)) ;
  }
  {
  ioArgument_ioSemanticTypePrecedenceGraph.modifier_addEdge (var_key, GALGAS_lstring::constructor_new (GALGAS_string ("@").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 22)), object->mAttribute_mAssociatedMapTypeName.reader_location (SOURCE_FILE ("map-proxy.galgas", 22))  COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) COMMA_SOURCE_FILE ("map-proxy.galgas", 22)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph (void) {
  enterCategoryMethod_enterDeclarationInGraph (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                               categoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterDeclarationInGraph (defineCategoryMethod_mapProxyDeclarationAST_enterDeclarationInGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@mapProxyDeclarationAST enterInSemanticContext'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_enterInSemanticContext (const cPtr_semanticDeclarationAST * inObject,
                                                                          const GALGAS_categoryMethodMapForBuildingContext constinArgument_inCategoryMethodMapForBuildingContext,
                                                                          const GALGAS_categoryReaderMapForBuildingContext constinArgument_inCategoryReaderMapForBuildingContext,
                                                                          const GALGAS_categoryModifierMapForBuildingContext constinArgument_inCategoryModifierMapForBuildingContext,
                                                                          GALGAS_semanticContext & ioArgument_ioSemanticContext,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typeKindEnum var_typeKindEnum ;
  GALGAS_typedPropertyList var_mapTypedAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_2417_3 ; // Joker input parameter
  GALGAS_bool joker_2417_2 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2417_1 ; // Joker input parameter
  GALGAS_bool joker_2461_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_2461_2 ; // Joker input parameter
  GALGAS_attributeMap joker_2461_1 ; // Joker input parameter
  GALGAS_constructorMap joker_2519_11 ; // Joker input parameter
  GALGAS_getterMap joker_2519_10 ; // Joker input parameter
  GALGAS_setterMap joker_2519_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_2519_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_2519_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_2519_6 ; // Joker input parameter
  GALGAS_stringlist joker_2519_5 ; // Joker input parameter
  GALGAS_uint joker_2519_4 ; // Joker input parameter
  GALGAS_functionSignature joker_2519_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_2519_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_2519_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_2578_6 ; // Joker input parameter
  GALGAS_bool joker_2578_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_2578_4 ; // Joker input parameter
  GALGAS_string joker_2578_3 ; // Joker input parameter
  GALGAS_string joker_2578_2 ; // Joker input parameter
  GALGAS_headerKind joker_2578_1 ; // Joker input parameter
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_2417_3, joker_2417_2, joker_2417_1, var_typeKindEnum, joker_2461_3, joker_2461_2, joker_2461_1, var_mapTypedAttributeList, joker_2519_11, joker_2519_10, joker_2519_9, joker_2519_8, joker_2519_7, joker_2519_6, joker_2519_5, joker_2519_4, joker_2519_3, joker_2519_2, joker_2519_1, var_searchMethodList, joker_2578_6, joker_2578_5, joker_2578_4, joker_2578_3, joker_2578_2, joker_2578_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 35)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_typeKindEnum.objectCompare (GALGAS_typeKindEnum::constructor_uniqueMapType (SOURCE_FILE ("map-proxy.galgas", 45)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mAssociatedMapTypeName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the @").add_operation (object->mAttribute_mAssociatedMapTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46)).add_operation (GALGAS_string (" should be an unique map type"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 46))  COMMA_SOURCE_FILE ("map-proxy.galgas", 46)) ;
    var_mapTypedAttributeList = GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 47)) ;
  }
  GALGAS_constructorMap var_constructorMap = GALGAS_constructorMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 50)) ;
  GALGAS_getterMap var_getterMap ;
  {
  routine_commonReaderMapForAllTypes (ioArgument_ioSemanticContext.mAttribute_mTypeMap, var_getterMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 51)) ;
  }
  GALGAS_setterMap var_modifierMap = GALGAS_setterMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 52)) ;
  GALGAS_instanceMethodMap var_instanceMethodMap = GALGAS_instanceMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 53)) ;
  GALGAS_classMethodMap var_classMethodMap = GALGAS_classMethodMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 54)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_associatedMapTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, var_associatedMapTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 56)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_stringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("string"), var_stringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 59)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_lstringTypeIndex ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxyFromString (ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lstring"), var_lstringTypeIndex COMMA_SOURCE_FILE ("map-proxy.galgas", 62)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_mapProxyTypeProxy ;
  {
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, var_mapProxyTypeProxy COMMA_SOURCE_FILE ("map-proxy.galgas", 65)) ;
  }
  GALGAS_formalParameterSignature var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 67)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 68)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 68)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 68)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 69)), var_lstringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 69)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 69)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 70)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 70)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 70)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxy"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 72))  COMMA_SOURCE_FILE ("map-proxy.galgas", 72)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 71)) ;
  }
  var_argList = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 77)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 78)), var_associatedMapTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("map-proxy.galgas", 78)), GALGAS_string ("ioMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 78)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 79)), var_stringTypeIndex, GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("map-proxy.galgas", 79)), GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 79)) ;
  var_argList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 80)), var_mapProxyTypeProxy, GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("map-proxy.galgas", 80)), GALGAS_string ("outProxy")  COMMA_SOURCE_FILE ("map-proxy.galgas", 80)) ;
  {
  var_classMethodMap.modifier_insertKey (GALGAS_lstring::constructor_new (GALGAS_string ("makeProxyFromString"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 82))  COMMA_SOURCE_FILE ("map-proxy.galgas", 82)), var_argList, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 81)) ;
  }
  {
  routine_enterConstructorWithoutArgument (var_constructorMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("null"), object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 87)), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 87)) ;
  }
  GALGAS_functionSignature var_constructorAttributeTypeList = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 89)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 90)), var_associatedMapTypeIndex, GALGAS_string ("inMap")  COMMA_SOURCE_FILE ("map-proxy.galgas", 90)) ;
  var_constructorAttributeTypeList.addAssign_operation (GALGAS_string::makeEmptyString ().reader_nowhere (SOURCE_FILE ("map-proxy.galgas", 91)), var_lstringTypeIndex, GALGAS_string ("inLKey")  COMMA_SOURCE_FILE ("map-proxy.galgas", 91)) ;
  cEnumerator_mapSearchMethodListAST enumerator_5240 (var_searchMethodList, kEnumeration_up) ;
  while (enumerator_5240.hasCurrentObject ()) {
    {
    var_constructorMap.modifier_insertKey (enumerator_5240.current_mSearchMethodName (HERE), var_constructorAttributeTypeList, GALGAS_bool (true), var_mapProxyTypeProxy, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 93)) ;
    }
    enumerator_5240.gotoNextObject () ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isSolved"), GALGAS_string ("bool"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 101)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isNull"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 108)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("isRegular"), GALGAS_string ("bool"), GALGAS_bool (false), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 115)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("lkey"), GALGAS_string ("lstring"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 122)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("key"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 129)) ;
  }
  {
  routine_enterInheritedGetterWithoutArgument (var_getterMap, ioArgument_ioSemanticContext.mAttribute_mTypeMap, GALGAS_string ("identifierRepresentation"), GALGAS_string ("string"), GALGAS_bool (true), inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 136)) ;
  }
  GALGAS_getterMap var_inheritedReaderMap = var_getterMap ;
  cEnumerator_typedPropertyList enumerator_6502 (var_mapTypedAttributeList, kEnumeration_up) ;
  while (enumerator_6502.hasCurrentObject ()) {
    const enumGalgasBool test_2 = var_inheritedReaderMap.reader_hasKey (enumerator_6502.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("map-proxy.galgas", 146)) COMMA_SOURCE_FILE ("map-proxy.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_6635 (var_inheritedReaderMap.reader_keySet (SOURCE_FILE ("map-proxy.galgas", 148)), kEnumeration_up) ;
      while (enumerator_6635.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("'").add_operation (enumerator_6635.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 149)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 149))  COMMA_SOURCE_FILE ("map-proxy.galgas", 149)) ;
        if (enumerator_6635.hasNextObject ()) {
          var_s.dotAssign_operation (GALGAS_string (", ")  COMMA_SOURCE_FILE ("map-proxy.galgas", 150)) ;
        }
        enumerator_6635.gotoNextObject () ;
      }
      GALGAS_location location_3 (enumerator_6502.current_mAttributeName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the map has a associated map proxy, which has predefined readers: ").add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 152)).add_operation (GALGAS_string ("; you cannot use theses names for naming an attribute of this map"), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 152))  COMMA_SOURCE_FILE ("map-proxy.galgas", 152)) ;
    }else if (kBoolFalse == test_2) {
      {
      var_getterMap.modifier_insertKey (enumerator_6502.current_mAttributeName (HERE), GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("map-proxy.galgas", 157)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 158)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 159)), GALGAS_bool (true), enumerator_6502.current_mAttributeTypeProxy (HERE), GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("map-proxy.galgas", 162)), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 155)) ;
      }
    }
    enumerator_6502.gotoNextObject () ;
  }
  {
  routine_addCategories (constinArgument_inCategoryMethodMapForBuildingContext, constinArgument_inCategoryReaderMapForBuildingContext, constinArgument_inCategoryModifierMapForBuildingContext, ioArgument_ioSemanticContext, object->mAttribute_mMapProxyTypeName, var_getterMap, var_modifierMap, var_instanceMethodMap, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 168)) ;
  }
  {
  ioArgument_ioSemanticContext.mAttribute_mTypeMap.modifier_insertKey (object->mAttribute_mMapProxyTypeName, object->mAttribute_mIsPredefined, GALGAS_bool (true), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 183)), GALGAS_typeKindEnum::constructor_mapProxyType (SOURCE_FILE ("map-proxy.galgas", 184)), GALGAS_bool (false), var_mapTypedAttributeList, GALGAS_attributeMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 187)), var_mapTypedAttributeList, var_constructorMap, var_getterMap, var_modifierMap, var_instanceMethodMap, var_classMethodMap, GALGAS_enumerationDescriptorList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 194)), GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 195)), function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 196)), GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 197)), GALGAS_constantIndexMap::constructor_emptyMap (SOURCE_FILE ("map-proxy.galgas", 198)), GALGAS_enumConstantList::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 199)), GALGAS_mapSearchMethodListAST::constructor_emptyList (SOURCE_FILE ("map-proxy.galgas", 200)), var_searchMethodList, GALGAS_bool (false), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("map-proxy.galgas", 203)), GALGAS_string ("null"), GALGAS_string ("mapproxy-").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 205)), GALGAS_headerKind::constructor_oneHeader (SOURCE_FILE ("map-proxy.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 179)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_enterInSemanticContext (void) {
  enterCategoryMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                              categoryMethod_mapProxyDeclarationAST_enterInSemanticContext) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_enterInSemanticContext (defineCategoryMethod_mapProxyDeclarationAST_enterInSemanticContext, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@mapProxyDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_mapProxyDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                    const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                    const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                    const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                    GALGAS_semanticDeclarationSortedListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                    C_Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_mapProxyDeclarationAST * object = (const cPtr_mapProxyDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_mapProxyDeclarationAST) ;
  GALGAS_typedPropertyList var_listTypeAttributeList ;
  GALGAS_mapSearchMethodListAST var_searchMethodList ;
  GALGAS_bool joker_9128_7 ; // Joker input parameter
  GALGAS_bool joker_9128_6 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9128_5 ; // Joker input parameter
  GALGAS_typeKindEnum joker_9128_4 ; // Joker input parameter
  GALGAS_bool joker_9128_3 ; // Joker input parameter
  GALGAS_typedPropertyList joker_9128_2 ; // Joker input parameter
  GALGAS_attributeMap joker_9128_1 ; // Joker input parameter
  GALGAS_constructorMap joker_9186_11 ; // Joker input parameter
  GALGAS_getterMap joker_9186_10 ; // Joker input parameter
  GALGAS_setterMap joker_9186_9 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_9186_8 ; // Joker input parameter
  GALGAS_classMethodMap joker_9186_7 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_9186_6 ; // Joker input parameter
  GALGAS_stringlist joker_9186_5 ; // Joker input parameter
  GALGAS_uint joker_9186_4 ; // Joker input parameter
  GALGAS_functionSignature joker_9186_3 ; // Joker input parameter
  GALGAS_constantIndexMap joker_9186_2 ; // Joker input parameter
  GALGAS_enumConstantList joker_9186_1 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_9245_6 ; // Joker input parameter
  GALGAS_bool joker_9245_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_9245_4 ; // Joker input parameter
  GALGAS_string joker_9245_3 ; // Joker input parameter
  GALGAS_string joker_9245_2 ; // Joker input parameter
  GALGAS_headerKind joker_9245_1 ; // Joker input parameter
  constinArgument_inSemanticContext.mAttribute_mTypeMap.method_searchKey (object->mAttribute_mAssociatedMapTypeName, joker_9128_7, joker_9128_6, joker_9128_5, joker_9128_4, joker_9128_3, joker_9128_2, joker_9128_1, var_listTypeAttributeList, joker_9186_11, joker_9186_10, joker_9186_9, joker_9186_8, joker_9186_7, joker_9186_6, joker_9186_5, joker_9186_4, joker_9186_3, joker_9186_2, joker_9186_1, var_searchMethodList, joker_9245_6, joker_9245_5, joker_9245_4, joker_9245_3, joker_9245_2, joker_9245_1, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 220)) ;
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("map proxy ").add_operation (object->mAttribute_mMapProxyTypeName.reader_string (SOURCE_FILE ("map-proxy.galgas", 230)), inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 230)), GALGAS_mapProxyTypeForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mMapProxyTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 232)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, object->mAttribute_mAssociatedMapTypeName, inCompiler  COMMA_SOURCE_FILE ("map-proxy.galgas", 233)), var_listTypeAttributeList, var_searchMethodList  COMMA_SOURCE_FILE ("map-proxy.galgas", 231)), GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("map-proxy.galgas", 229)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_mapProxyDeclarationAST_semanticAnalysis (void) {
  enterCategoryMethod_semanticAnalysis (kTypeDescriptor_GALGAS_mapProxyDeclarationAST.mSlotID,
                                        categoryMethod_mapProxyDeclarationAST_semanticAnalysis) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_mapProxyDeclarationAST_semanticAnalysis (defineCategoryMethod_mapProxyDeclarationAST_semanticAnalysis, NULL) ;

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
  outArgument_outHeader = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeHeader_31_ (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 274)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 275)) COMMA_SOURCE_FILE ("map-proxy.galgas", 273))) ;
  outArgument_outHeader.dotAssign_operation (GALGAS_string (filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 278)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 279)), object->mAttribute_mTypeProxy.reader_mIsConcrete (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 280)), object->mAttribute_mTypeProxy.reader_mConstructorMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 281)), object->mAttribute_mTypeProxy.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 282)), object->mAttribute_mTypeProxy.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 283)), object->mAttribute_mTypeProxy.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 284)), object->mAttribute_mTypeProxy.reader_mClassMethodMap (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 285)), object->mAttribute_mTypeProxy.reader_mEnumerationDescriptor (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 286)), object->mAttribute_mTypeProxy.reader_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 287)), object->mAttribute_mTypeProxy.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 288)), object->mAttribute_mTypeProxy.reader_mTypeForEnumeratedElement (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 289)) COMMA_SOURCE_FILE ("map-proxy.galgas", 277)))  COMMA_SOURCE_FILE ("map-proxy.galgas", 277)) ;
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
  categoryMethod_addHeaderFileName (object->mAttribute_mTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 299)) ;
  categoryMethod_addHeaderFileName (object->mAttribute_mAssociatedMapTypeProxy, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 300)) ;
  outArgument_outImplementation = GALGAS_string (filewrapperTemplate_mapProxyGenerationTemplate_mapProxyTypeSpecificImplementation (inCompiler, object->mAttribute_mTypeProxy.reader_key (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 302)), object->mAttribute_mTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 303)), object->mAttribute_mAssociatedMapTypeProxy.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("map-proxy.galgas", 304)), object->mAttribute_mAssociatedMapTypedAttributeList, object->mAttribute_mSearchMethodList COMMA_SOURCE_FILE ("map-proxy.galgas", 301))) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_nonterminalInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, constinArgument_inPosfix, GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 49)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 50))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 45)) ;
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
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_terminalCheckInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, object->mAttribute_mLexiqueIdentifier, GALGAS_terminalCheckAssignementList::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 64)), object->mAttribute_mIndexingKeyList, GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 66)), GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone::constructor_new (SOURCE_FILE ("syntaxSignature.galgas", 67))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 60)) ;
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
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_4763 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_4763.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_4763.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 81)), enumerator_4763.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 80)) ;
    enumerator_4763.gotoNextObject () ;
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
  GALGAS_listOfSemanticInstructionListForGeneration var_listOfSemanticInstructionListForGeneration = GALGAS_listOfSemanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("syntaxSignature.galgas", 100)) ;
  cEnumerator_listOfSemanticInstructionListForGeneration enumerator_5641 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
  while (enumerator_5641.hasCurrentObject ()) {
    var_listOfSemanticInstructionListForGeneration.addAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, enumerator_5641.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 103)), enumerator_5641.current_mEndOfInstructionList (HERE)  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 102)) ;
    enumerator_5641.gotoNextObject () ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_selectInstructionForGeneration::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mSyntaxComponentName, object->mAttribute_mChoiceIndex, var_listOfSemanticInstructionListForGeneration  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 106)) ;
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
  GALGAS_location joker_6420 ; // Joker input parameter
  object->mAttribute_mListOfSemanticInstructionListForGeneration.method_first (var_instructionList, joker_6420, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 119)) ;
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, var_instructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 120)) ;
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
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 128)) ;
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
  ioArgument_ioInstructionListForGeneration.dotAssign_operation (function_syntaxSignatureOfInstructionList (constinArgument_inPosfix, object->mAttribute_mInstructionList, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 136)) ;
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
      GALGAS_terminalCheckInstructionForGeneration cast_10092_si ((cPtr_terminalCheckInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 192)).objectCompare (cast_10092_si.reader_mTerminalName (SOURCE_FILE ("syntaxSignature.galgas", 192)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 192)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 193)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_10092_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 194)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 195))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 194)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_10391_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_10391_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 198)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '$").add_operation (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("syntaxSignature.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199)).add_operation (GALGAS_string ("$' terminal check"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 199))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 198)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 202)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 205)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 206)) ;
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
      GALGAS_nonterminalInstructionForGeneration cast_11108_si ((cPtr_nonterminalInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (kIsEqual, object->mAttribute_mNonterminalName.objectCompare (cast_11108_si.reader_mNonterminalName (SOURCE_FILE ("syntaxSignature.galgas", 218)))) ;
      const enumGalgasBool test_0 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 219)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_11108_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 220)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 221))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 220)) ;
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_11406_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_11406_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 224)), GALGAS_string ("syntax signature error; the expected syntax instruction here is the '<").add_operation (object->mAttribute_mNonterminalName, inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225)).add_operation (GALGAS_string (">' nonterminal invocation"), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 225))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 224)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 228)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_1 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 231)).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 232)) ;
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
      GALGAS_repeatInstructionForGeneration cast_12124_si ((cPtr_repeatInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = function_compareSyntaxSignature (object->mAttribute_m_5F_repeated_5F_instructionList, cast_12124_si.reader_m_5F_repeated_5F_instructionList (SOURCE_FILE ("syntaxSignature.galgas", 244)), cast_12124_si.reader_mEndOfRepeatedInstructions (SOURCE_FILE ("syntaxSignature.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 244)) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 245)).objectCompare (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 245)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 245)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 245)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_12124_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 246)), GALGAS_string ("syntax signature error; the reference 'repeat' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 248)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 247)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 248)).add_operation (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 250)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 250)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 250)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 249))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 246)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12805 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_12867 (cast_12124_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 253)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
        while (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_12805.current_mInstructionList (HERE), enumerator_12867.current_mInstructionList (HERE), enumerator_12867.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 254)) ;
          enumerator_12805.gotoNextObject () ;
          enumerator_12867.gotoNextObject () ;
          if (enumerator_12805.hasCurrentObject () && enumerator_12867.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_13051_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_13051_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 257)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'repeat' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 257)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 261)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 264)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 265)) ;
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
      GALGAS_selectInstructionForGeneration cast_13736_si ((cPtr_selectInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      result_outOk = GALGAS_bool (true) ;
      const enumGalgasBool test_0 = result_outOk.operator_and (GALGAS_bool (kIsNotEqual, object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 278)).objectCompare (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 278)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 278)))) COMMA_SOURCE_FILE ("syntaxSignature.galgas", 278)).boolEnum () ;
      if (kBoolTrue == test_0) {
        inCompiler->emitSemanticError (cast_13736_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 279)), GALGAS_string ("syntax signature error; the reference 'select' instruction has ").add_operation (object->mAttribute_mListOfSemanticInstructionListForGeneration.reader_length (SOURCE_FILE ("syntaxSignature.galgas", 281)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 280)).add_operation (GALGAS_string (" 'while' branche(s), but this instruction has "), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 281)).add_operation (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 283)).reader_length (SOURCE_FILE ("syntaxSignature.galgas", 283)).reader_string (SOURCE_FILE ("syntaxSignature.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 282))  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 279)) ;
        result_outOk = GALGAS_bool (false) ;
      }
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14303 (object->mAttribute_mListOfSemanticInstructionListForGeneration, kEnumeration_up) ;
      cEnumerator_listOfSemanticInstructionListForGeneration enumerator_14365 (cast_13736_si.reader_mListOfSemanticInstructionListForGeneration (SOURCE_FILE ("syntaxSignature.galgas", 286)), kEnumeration_up) ;
      bool bool_1 = result_outOk.isValidAndTrue () ;
      if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
        while (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject () && bool_1) {
          result_outOk = function_compareSyntaxSignature (enumerator_14303.current_mInstructionList (HERE), enumerator_14365.current_mInstructionList (HERE), enumerator_14365.current_mEndOfInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("syntaxSignature.galgas", 287)) ;
          enumerator_14303.gotoNextObject () ;
          enumerator_14365.gotoNextObject () ;
          if (enumerator_14303.hasCurrentObject () && enumerator_14365.hasCurrentObject ()) {
            bool_1 = result_outOk.isValidAndTrue () ;
          }
        }
      }
    }else if (NULL != dynamic_cast <const cPtr_syntaxInstructionForGeneration *> (constinArgument_inTestedInstruction.ptr ())) {
      GALGAS_syntaxInstructionForGeneration cast_14549_si ((cPtr_syntaxInstructionForGeneration *) constinArgument_inTestedInstruction.ptr ()) ;
      inCompiler->emitSemanticError (cast_14549_si.reader_mInstructionLocation (SOURCE_FILE ("syntaxSignature.galgas", 290)), GALGAS_string ("syntax signature error; the expected syntax instruction here is a 'select' instruction")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 290)) ;
      result_outOk = GALGAS_bool (false) ;
    }else{
      inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("internal error")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 294)) ;
      result_outOk = GALGAS_bool (false) ;
    }
  }
  const enumGalgasBool test_2 = result_outOk.operator_not (SOURCE_FILE ("syntaxSignature.galgas", 297)).boolEnum () ;
  if (kBoolTrue == test_2) {
    inCompiler->emitSemanticError (object->mAttribute_mInstructionLocation, GALGAS_string ("reference syntax instruction is here")  COMMA_SOURCE_FILE ("syntaxSignature.galgas", 298)) ;
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
  const cMapElement_terminalSymbolsMapForGrammarAnalysis * objectArray_10071 = (const cMapElement_terminalSymbolsMapForGrammarAnalysis *) ioArgument_ioActuallyUsedTerminalSymbolMap.readAccessForWithInstruction (object->mAttribute_mTerminalName.reader_string (SOURCE_FILE ("grammarCompilation.galgas", 194))) ;
  if (NULL != objectArray_10071) {
      macroValidSharedObject (objectArray_10071, cMapElement_terminalSymbolsMapForGrammarAnalysis) ;
    var_terminalSymbolIndex = objectArray_10071->mAttribute_mTerminalIndex ;
  }else{
    var_terminalSymbolIndex = ioArgument_ioActuallyUsedTerminalSymbolMap.reader_count (SOURCE_FILE ("grammarCompilation.galgas", 197)) ;
    {
    ioArgument_ioActuallyUsedTerminalSymbolMap.modifier_insertKey (object->mAttribute_mTerminalName, var_terminalSymbolIndex, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 198)) ;
    }
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_terminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mTerminalName, var_terminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 200)) ;
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
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_11105 ; // Joker input parameter
  constinArgument_inNonTerminalSymbolMap.method_searchKey (object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex, joker_11105, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 214)) ;
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_nonTerminalInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, object->mAttribute_mNonterminalName, var_nonTerminalSymbolIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 215)) ;
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
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 229)) ;
  GALGAS_syntaxInstructionListForGrammarAnalysis var_repeatedInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 231)) ;
  {
  routine_transformInstructionList (object->mAttribute_mRepeatedInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_repeatedInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 232)) ;
  }
  GALGAS_branchListForGrammarAnalysis var_repeatBranchList = GALGAS_branchListForGrammarAnalysis::constructor_listWithValue (var_repeatedInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 239)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_12292 (object->mAttribute_mRepeatBranchList, kEnumeration_up) ;
  while (enumerator_12292.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 242)) ;
    {
    routine_transformInstructionList (enumerator_12292.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 243)) ;
    }
    var_repeatBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 250)) ;
    enumerator_12292.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_repeatInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_repeatBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 253)) ;
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
  ioArgument_ioAddedNonTerminalIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 267)) ;
  GALGAS_branchListForGrammarAnalysis var_selectBranchList = GALGAS_branchListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 269)) ;
  cEnumerator_listOfSyntaxInstructionList enumerator_13509 (object->mAttribute_mSelectBranchList, kEnumeration_up) ;
  while (enumerator_13509.hasCurrentObject ()) {
    GALGAS_syntaxInstructionListForGrammarAnalysis var_syntaxInstructionList = GALGAS_syntaxInstructionListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("grammarCompilation.galgas", 271)) ;
    {
    routine_transformInstructionList (enumerator_13509.current_mSyntaxInstructionList (HERE), ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, var_syntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 272)) ;
    }
    var_selectBranchList.addAssign_operation (var_syntaxInstructionList  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 279)) ;
    enumerator_13509.gotoNextObject () ;
  }
  ioArgument_ioSyntaxInstructionList.addAssign_operation (GALGAS_selectInstructionForGrammarAnalysis::constructor_new (object->mAttribute_mInstructionLocation, var_selectBranchList, var_addedNonTerminalIndex  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282))  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 282)) ;
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
  GALGAS_location joker_14649 ; // Joker input parameter
  object->mAttribute_mParseRewindBranchList.method_first (var_syntaxInstructionList, joker_14649, inCompiler COMMA_SOURCE_FILE ("grammarCompilation.galgas", 296)) ;
  {
  routine_transformInstructionList (var_syntaxInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 298)) ;
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
  routine_transformInstructionList (object->mAttribute_mElseInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 314)) ;
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
  routine_transformInstructionList (object->mAttribute_mDoInstructionList, ioArgument_ioActuallyUsedTerminalSymbolMap, constinArgument_inNonTerminalSymbolMap, ioArgument_ioAddedNonTerminalIndex, ioArgument_ioSyntaxInstructionList, inCompiler  COMMA_SOURCE_FILE ("grammarCompilation.galgas", 330)) ;
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
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.mach-o.executable\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 65)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 66))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 64)) ;
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
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)).add_operation (GALGAS_string (" = {isa = PBXFileReference; explicitFileType = \"compiled.wrapper.application\"; includeInIndex = 0; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 84)).add_operation (GALGAS_string ("; sourceTree = BUILT_PRODUCTS_DIR; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 85))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 83)) ;
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
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.cpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 97)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 99)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 98)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 99))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 96)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_cppSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_cppSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_hSourceFile buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_hSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.h; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 111)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 113)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 112)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 113))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 110)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_hSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_hSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_pchSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_pchSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.pch; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 125)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 127)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 126)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 127))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 124)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pchSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pchSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_mSourceFile buildXcodeProject'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                       GALGAS_string & ioArgument_outString,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_mSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.c.obj; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 139)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 141)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 140)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 141))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 138)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@Xcode_PBXFileReference_mmSourceFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                        GALGAS_string & ioArgument_outString,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_mmSourceFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = sourcecode.cpp.objcpp; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 153)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 154)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 155))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 152)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_mmSourceFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_mmSourceFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_gifFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_gifFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_gifFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_gifFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.gif; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 167)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 168)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 169))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 166)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_gifFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_gifFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_tiffFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                    GALGAS_string & ioArgument_outString,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_tiffFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_tiffFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.tiff; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 181)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 183)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 182)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 183))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_tiffFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_tiffFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_pngFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_pngFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_pngFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_pngFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.png; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 195)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 197)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 196)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 197))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 194)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_pngFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_pngFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@Xcode_PBXFileReference_plistFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                     GALGAS_string & ioArgument_outString,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_plistFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_plistFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_plistFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; fileEncoding = 4; lastKnownFileType = text.plist; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 209)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 211)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 210)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 211))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 208)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@Xcode_PBXFileReference_frameworkFile buildXcodeProject'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                         GALGAS_string & ioArgument_outString,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_frameworkFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = wrapper.framework; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 223)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 225)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 224)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 225))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 222)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_frameworkFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_frameworkFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_icnsFile buildXcodeProject'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                    GALGAS_string & ioArgument_outString,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_icnsFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_icnsFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = image.icns; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 237)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)).add_operation (object->mAttribute_mFileName.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 239)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 238)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 239))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 236)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_icnsFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_icnsFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@Xcode_PBXFileReference_xibFile buildXcodeProject'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                   GALGAS_string & ioArgument_outString,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_xibFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_xibFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_xibFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = wrapper.xib; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 252)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)).add_operation (object->mAttribute_mFilePath.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 254)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 253)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 254))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 251)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_xibFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_xibFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@Xcode_PBXFileReference_plistStringFile buildXcodeProject'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (const cPtr_Xcode_5F_PBXFileReference_5F_abstract * inObject,
                                                                                           GALGAS_string & ioArgument_outString,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile * object = (const cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile *) inObject ;
  macroValidSharedObject (object, cPtr_Xcode_5F_PBXFileReference_5F_plistStringFile) ;
  ioArgument_outString.dotAssign_operation (GALGAS_string ("\t\t").add_operation (function_getPBXFileReferenceKey (object->mAttribute_mSequenceNumber, inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).add_operation (GALGAS_string (" /* "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)).add_operation (GALGAS_string (" */ = {isa = PBXFileReference; lastKnownFileType = text.plist.strings; name = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)).add_operation (object->mAttribute_mFileName.reader_lastPathComponent (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)).reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 267)).add_operation (GALGAS_string ("; path = "), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)).add_operation (object->mAttribute_mFilePath.reader_utf_38_Representation (SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 268)).add_operation (GALGAS_string ("; sourceTree = \"<group>\"; };\n"), inCompiler COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 269))  COMMA_SOURCE_FILE ("baseForXcodeProjectGeneration.galgas", 266)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (void) {
  enterCategoryMethod_buildXcodeProject (kTypeDescriptor_GALGAS_Xcode_5F_PBXFileReference_5F_plistStringFile.mSlotID,
                                         categoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject (defineCategoryMethod_Xcode_5F_PBXFileReference_5F_plistStringFile_buildXcodeProject, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@abstractCategoryModifierAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryModifierListMapAST,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryModifierAST * object = (const cPtr_abstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryModifierAST) ;
  ioArgument_ioAbstractCategoryModifierListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 61)), object->mAttribute_mAbstractCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 60)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryModifierAST.mSlotID,
                                             categoryMethod_abstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Overriding category method '@categoryModifierAST buildCategoryListMaps'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryModifierListMap,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                      C_Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryModifierAST * object = (const cPtr_categoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryModifierAST) ;
  ioArgument_ioCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 81)), object->mAttribute_mCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 80)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryModifierAST.mSlotID,
                                             categoryMethod_categoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryModifierAST_buildCategoryListMaps (defineCategoryMethod_categoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@overridingCategoryModifierAST buildCategoryListMaps'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryModifierListMap,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryModifierAST * object = (const cPtr_overridingCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryModifierAST) ;
  ioArgument_ioOverridingCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 101)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 100)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@overridingAbstractCategoryModifierAST buildCategoryListMaps'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryModifierListMap,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                        GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryModifierAST * object = (const cPtr_overridingAbstractCategoryModifierAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryModifierAST) ;
  ioArgument_ioOverridingAbstractCategoryModifierListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 121)), object->mAttribute_mOverridingCategoryModifierName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 120)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryModifierAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryModifierAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryMethodAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryMethodListMapAST,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryMethodAST * object = (const cPtr_abstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryMethodAST) ;
  ioArgument_ioAbstractCategoryMethodListMapAST.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 141)), object->mAttribute_mAbstractCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 140)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryMethodAST.mSlotID,
                                             categoryMethod_abstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryMethodAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryMethodListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryMethodAST * object = (const cPtr_categoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryMethodAST) ;
  ioArgument_ioCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 161)), object->mAttribute_mCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 160)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryMethodAST.mSlotID,
                                             categoryMethod_categoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryMethodAST_buildCategoryListMaps (defineCategoryMethod_categoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryMethodAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryMethodListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryMethodAST * object = (const cPtr_overridingCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryMethodAST) ;
  ioArgument_ioOverridingCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 181)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 180)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryMethodAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryMethodListMap,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryMethodAST * object = (const cPtr_overridingAbstractCategoryMethodAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryMethodAST) ;
  ioArgument_ioOverridingAbstractCategoryMethodListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 201)), object->mAttribute_mOverridingCategoryMethodName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 200)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryMethodAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryMethodAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@abstractCategoryReaderAST buildCategoryListMaps'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & ioArgument_ioAbstractCategoryReaderListMap,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                            GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                            C_Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_abstractCategoryReaderAST * object = (const cPtr_abstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_abstractCategoryReaderAST) ;
  ioArgument_ioAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 221)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 220)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_abstractCategoryReaderAST.mSlotID,
                                             categoryMethod_abstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_abstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_abstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@categoryReaderAST buildCategoryListMaps'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_categoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & ioArgument_ioCategoryReaderListMap,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                    GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                    C_Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_categoryReaderAST * object = (const cPtr_categoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_categoryReaderAST) ;
  ioArgument_ioCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 241)), object->mAttribute_mCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 240)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_categoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_categoryReaderAST.mSlotID,
                                             categoryMethod_categoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_categoryReaderAST_buildCategoryListMaps (defineCategoryMethod_categoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@overridingCategoryReaderAST buildCategoryListMaps'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                              GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingCategoryReaderListMap,
                                                                              GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryReaderListMap */,
                                                                              C_Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingCategoryReaderAST * object = (const cPtr_overridingCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingCategoryReaderAST) ;
  ioArgument_ioOverridingCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 261)), object->mAttribute_mOverridingCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 260)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingCategoryReaderAST_buildCategoryListMaps, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@overridingAbstractCategoryReaderAST buildCategoryListMaps'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (const cPtr_semanticDeclarationAST * inObject,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryModifierListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryModifierListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryMethodListMapAST */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingAbstractCategoryMethodListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioAbstractCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & /* ioArgument_ioOverridingCategoryReaderListMap */,
                                                                                      GALGAS_genericCategoryMethodListMap & ioArgument_ioOverridingAbstractCategoryReaderListMap,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_overridingAbstractCategoryReaderAST * object = (const cPtr_overridingAbstractCategoryReaderAST *) inObject ;
  macroValidSharedObject (object, cPtr_overridingAbstractCategoryReaderAST) ;
  ioArgument_ioOverridingAbstractCategoryReaderListMap.addAssign_operation (object->mAttribute_mTypeName.reader_string (SOURCE_FILE ("projectGlobalCheckings.galgas", 281)), object->mAttribute_mAbstractCategoryReaderName  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas", 280)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (void) {
  enterCategoryMethod_buildCategoryListMaps (kTypeDescriptor_GALGAS_overridingAbstractCategoryReaderAST.mSlotID,
                                             categoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps (defineCategoryMethod_overridingAbstractCategoryReaderAST_buildCategoryListMaps, NULL) ;

