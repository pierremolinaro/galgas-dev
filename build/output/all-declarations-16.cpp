#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "all-declarations-16.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'analyzeRoutineArguments'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineArguments (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                      const GALGAS_lstring constinArgument_inRoutineName,
                                      const GALGAS_string constinArgument_inInvokedEntityName,
                                      const GALGAS_formalParameterSignature constinArgument_inRoutineSignature,
                                      const GALGAS_actualParameterListAST constinArgument_inActualParameterList,
                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                      GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                      GALGAS_actualParameterListForGeneration & outArgument_outActualParameterListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outActualParameterListForGeneration.drop () ; // Release 'out' argument
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1025)).objectCompare (constinArgument_inActualParameterList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1025)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (constinArgument_inRoutineName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)).add_operation (constinArgument_inRoutineSignature.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1027)).add_operation (constinArgument_inActualParameterList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1029)).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1029)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1028)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1029))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1026)) ;
    outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1032)) ;
    GALGAS_stringset var_exclusiveVariableSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1033)) ;
    cEnumerator_formalParameterSignature enumerator_46947 (constinArgument_inRoutineSignature, kEnumeration_up) ;
    cEnumerator_actualParameterListAST enumerator_46976 (constinArgument_inActualParameterList, kEnumeration_up) ;
    while (enumerator_46947.hasCurrentObject () && enumerator_46976.hasCurrentObject ()) {
      callCategoryMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_46976.current_mActualParameter (HERE).ptr (), constinArgument_inAnalysisContext, enumerator_46947.current_mFormalSelector (HERE), enumerator_46947.current_mFormalArgumentType (HERE), enumerator_46947.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1035)) ;
      enumerator_46947.gotoNextObject () ;
      enumerator_46976.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Function 'checkMethodImplementationInSuperClasses'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_checkMethodImplementationInSuperClasses (const GALGAS_lstring & constinArgument_inMethodName,
                                                                const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSuperClass,
                                                                C_Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inSuperClass.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1214)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    GALGAS_methodQualifier var_qualifier ;
    GALGAS_methodKind joker_53458 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_53461 ; // Joker input parameter
    GALGAS_location joker_53464 ; // Joker input parameter
    GALGAS_bool joker_53467 ; // Joker input parameter
    GALGAS_string joker_53502 ; // Joker input parameter
    constinArgument_inSuperClass.reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1217)).method_searchKey (constinArgument_inMethodName, joker_53458, joker_53461, joker_53464, joker_53467, var_qualifier, joker_53502, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1217)) ;
    switch (var_qualifier.enumValue ()) {
    case GALGAS_methodQualifier::kNotBuilt:
      break ;
    case GALGAS_methodQualifier::kEnum_isAbstract:
      {
        result_outResult = GALGAS_string::makeEmptyString () ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isBasic:
    case GALGAS_methodQualifier::kEnum_isBasicFinal:
    case GALGAS_methodQualifier::kEnum_isOverriding:
      {
        result_outResult = constinArgument_inSuperClass.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1222)) ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isInherited:
    case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
      {
        result_outResult = function_checkMethodImplementationInSuperClasses (constinArgument_inMethodName, constinArgument_inSuperClass.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1224)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1224)) ;
      }
      break ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkMethodImplementationInSuperClasses [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkMethodImplementationInSuperClasses (C_Compiler * inCompiler,
                                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                                        const GALGAS_location & /* §§ inErrorLocation */
                                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_checkMethodImplementationInSuperClasses (operand0,
                                                           operand1,
                                                           inCompiler
                                                           COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkMethodImplementationInSuperClasses ("checkMethodImplementationInSuperClasses",
                                                                                         functionWithGenericHeader_checkMethodImplementationInSuperClasses,
                                                                                         & kTypeDescriptor_GALGAS_string,
                                                                                         2,
                                                                                         functionArgs_checkMethodImplementationInSuperClasses) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                Function 'checkModifierImplementationInSuperClasses'                                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string function_checkModifierImplementationInSuperClasses (const GALGAS_lstring & constinArgument_inModifierName,
                                                                  const GALGAS_unifiedTypeMap_2D_proxy & constinArgument_inSuperClass,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outResult ; // Returned variable
  const enumGalgasBool test_0 = constinArgument_inSuperClass.reader_isNull (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1386)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result_outResult = GALGAS_string::makeEmptyString () ;
  }else if (kBoolFalse == test_0) {
    GALGAS_methodQualifier var_qualifier ;
    GALGAS_methodKind joker_59403_3 ; // Joker input parameter
    GALGAS_formalParameterSignature joker_59403_2 ; // Joker input parameter
    GALGAS_bool joker_59403_1 ; // Joker input parameter
    GALGAS_string joker_59418 ; // Joker input parameter
    constinArgument_inSuperClass.reader_mModifierMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1390)).method_searchKey (constinArgument_inModifierName, joker_59403_3, joker_59403_2, joker_59403_1, var_qualifier, joker_59418, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1390)) ;
    switch (var_qualifier.enumValue ()) {
    case GALGAS_methodQualifier::kNotBuilt:
      break ;
    case GALGAS_methodQualifier::kEnum_isAbstract:
      {
        result_outResult = GALGAS_string::makeEmptyString () ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isBasic:
    case GALGAS_methodQualifier::kEnum_isBasicFinal:
    case GALGAS_methodQualifier::kEnum_isOverriding:
      {
        result_outResult = constinArgument_inSuperClass.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1395)) ;
      }
      break ;
    case GALGAS_methodQualifier::kEnum_isInherited:
    case GALGAS_methodQualifier::kEnum_isOverridingAbstract:
      {
        result_outResult = function_checkModifierImplementationInSuperClasses (constinArgument_inModifierName, constinArgument_inSuperClass.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1397)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1397)) ;
      }
      break ;
    }
  }
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_checkModifierImplementationInSuperClasses [3] = {
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_unifiedTypeMap_2D_proxy,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_checkModifierImplementationInSuperClasses (C_Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* §§ inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_unifiedTypeMap_2D_proxy operand1 = GALGAS_unifiedTypeMap_2D_proxy::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                 inCompiler
                                                                                                 COMMA_THERE) ;
  return function_checkModifierImplementationInSuperClasses (operand0,
                                                             operand1,
                                                             inCompiler
                                                             COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_checkModifierImplementationInSuperClasses ("checkModifierImplementationInSuperClasses",
                                                                                           functionWithGenericHeader_checkModifierImplementationInSuperClasses,
                                                                                           & kTypeDescriptor_GALGAS_string,
                                                                                           2,
                                                                                           functionArgs_checkModifierImplementationInSuperClasses) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'checkExpressionIsBoolean'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType = constinArgument_inExpression.reader_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1990)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType = constinArgument_inAnalysisContext.mAttribute_mPredefinedTypes.mAttribute_mBoolType ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expressionType.objectCompare (var_boolType)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outExpression = constinArgument_inExpression ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionType.reader_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1995)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1995)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_expressionType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1996)).reader_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1996)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType ;
        var_expressionType.reader_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1998))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1998)), var_attributeType, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 1997)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType.objectCompare (var_boolType)).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_boolType, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2006)) ;
        }else if (kBoolFalse == test_3) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2013)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2013)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2013))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2012)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }else if (kBoolFalse == test_2) {
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2018)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2018)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2018))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2017)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_84725 = (const cMapElement_getterMap *) var_expressionType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2022)).readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_84725) {
          macroValidSharedObject (objectArray_84725, cMapElement_getterMap) ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_84725->mAttribute_mReturnedType.objectCompare (var_boolType)).boolEnum () ;
        if (kBoolTrue == test_4) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' reader, but it does not return a '@bool' value")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2024)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsStrictSup, objectArray_84725->mAttribute_mArgumentTypeList.reader_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2025)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_5) {
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' reader that requires argument(s)")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2026)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_5) {
            const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, objectArray_84725->mAttribute_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_6) {
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_84725->mAttribute_mErrorMessage  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2028)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_6) {
              outArgument_outExpression = GALGAS_readerCallExpressionForGeneration::constructor_new (var_boolType, constinArgument_inErrorLocation, objectArray_84725->mAttribute_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2035)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2037)), objectArray_84725->mAttribute_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2030)) ;
            }
          }
        }
      }else{
        const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, var_expressionType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2041)).reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2041)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_7) {
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2043)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2043)).add_operation (GALGAS_string ("', and this type does not define the 'bool' reader"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2043))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2042)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_7) {
          GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
          cEnumerator_getterMap enumerator_85888 (var_expressionType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2047)), kEnumeration_up) ;
          while (enumerator_85888.hasCurrentObject ()) {
            var_s.dotAssign_operation (GALGAS_string ("\n"
              "  - ").add_operation (enumerator_85888.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2048)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2048))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2048)) ;
            cEnumerator_functionSignature enumerator_85960 (enumerator_85888.current_mArgumentTypeList (HERE), kEnumeration_up) ;
            while (enumerator_85960.hasCurrentObject ()) {
              GALGAS_string temp_8 ;
              const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, enumerator_85960.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_9) {
                temp_8 = enumerator_85960.current_mFormalSelector (HERE).mAttribute_string.add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050)) ;
              }else if (kBoolFalse == test_9) {
                temp_8 = GALGAS_string::makeEmptyString () ;
              }
              var_s.dotAssign_operation (GALGAS_string (" \?").add_operation (temp_8, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050)).add_operation (GALGAS_string ("@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050)).add_operation (enumerator_85960.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2050)) ;
              enumerator_85960.gotoNextObject () ;
            }
            var_s.dotAssign_operation (GALGAS_string (" -> @").add_operation (enumerator_85888.current_mReturnedType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2052)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2052))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2052)) ;
            enumerator_85888.gotoNextObject () ;
          }
          GALGAS_string temp_10 ;
          const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, var_expressionType.reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2056)).reader_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2056)).objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
          if (kBoolTrue == test_11) {
            temp_10 = GALGAS_string ("readers are") ;
          }else if (kBoolFalse == test_11) {
            temp_10 = GALGAS_string ("reader is") ;
          }
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2055)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2055)).add_operation (GALGAS_string ("', and this type does not define the 'bool' reader; available "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2055)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2055)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2056)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2057))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 2054)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkMethodSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).objectCompare (constinArgument_inReferenceSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 28)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)).add_operation (constinArgument_inReferenceSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 29)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 29))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)) ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 30)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_3004 (constinArgument_inReferenceSignature, kEnumeration_up) ;
    cEnumerator_formalParameterListForGeneration enumerator_3029 (constinArgument_inTestedSignature, kEnumeration_up) ;
    while (enumerator_3004.hasCurrentObject () && enumerator_3029.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, enumerator_3004.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_3029.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_location location_2 (enumerator_3029.current_mFormalArgumentName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_2, GALGAS_string ("the '").add_operation (enumerator_3029.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (categoryReader_formalArgumentMessage (enumerator_3029.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)).add_operation (categoryReader_formalArgumentMessage (enumerator_3004.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)) ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 37)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_3029.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_3004.current_mFormalSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_3) {
        GALGAS_string temp_4 ;
        const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_3004.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_5) {
          temp_4 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_5) {
          temp_4 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_6 (enumerator_3029.current_mFormalSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_6, GALGAS_string ("the selector should be '").add_operation (categoryReader_string (enumerator_3004.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (enumerator_3004.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (temp_4, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 40)) ;
      }
      const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_3029.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).objectCompare (enumerator_3004.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        GALGAS_location location_8 (enumerator_3029.current_mFormalArgumentName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_8, GALGAS_string ("the '").add_operation (enumerator_3029.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (enumerator_3029.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)).add_operation (enumerator_3004.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 45))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)) ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 46)) ;
      }
      enumerator_3004.gotoNextObject () ;
      enumerator_3029.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Routine 'checkReaderSignatures'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_checkReaderSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)).objectCompare (constinArgument_inInheritedReturnType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (constinArgument_inReturnType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)).add_operation (constinArgument_inInheritedReturnType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 68)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 68))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)) ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 69)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 71)).objectCompare (constinArgument_inReferenceSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 71)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 72)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)).add_operation (constinArgument_inReferenceSignature.reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 73)).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 73)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 73))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)) ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 74)) ;
  }else if (kBoolFalse == test_1) {
    cEnumerator_functionSignature enumerator_5723 (constinArgument_inReferenceSignature, kEnumeration_up) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5748 (constinArgument_inTestedSignature, kEnumeration_up) ;
    while (enumerator_5723.hasCurrentObject () && enumerator_5748.hasCurrentObject ()) {
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_5748.current_mFormalSelector (HERE).mAttribute_string.objectCompare (enumerator_5723.current_mFormalSelector (HERE).mAttribute_string)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_5723.current_mFormalSelector (HERE).mAttribute_string.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        GALGAS_location location_5 (enumerator_5748.current_mFormalSelector (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_5, GALGAS_string ("the selector should be '\?").add_operation (enumerator_5723.current_mFormalSelector (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5748.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 80)).objectCompare (enumerator_5723.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 80)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_location location_7 (enumerator_5748.current_mFormalArgumentName (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
        inCompiler->emitSemanticError (location_7, GALGAS_string ("the '").add_operation (enumerator_5748.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 81)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)).add_operation (enumerator_5748.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (enumerator_5723.current_mFormalArgumentType (HERE).reader_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)) ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)) ;
      }
      enumerator_5723.gotoNextObject () ;
      enumerator_5748.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'check_K_escapeCharacters'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_check_5F_K_5F_escapeCharacters (GALGAS_lstring inArgument_inString,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_stringlist enumerator_14014 (inArgument_inString.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 253)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 253)), kEnumeration_up) ;
  while (enumerator_14014.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray = enumerator_14014.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 254)) ;
    {
    GALGAS_string joker_14123 ; // Joker input parameter
    var_explodedArray.modifier_popFirst (joker_14123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 255)) ;
    }
    cEnumerator_stringlist enumerator_14153 (var_explodedArray, kEnumeration_up) ;
    while (enumerator_14153.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_14153.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 257)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_char var_c = enumerator_14153.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 258)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (inArgument_inString.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("only '%K' and '%%' escape sequences are allowed in this error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 260)) ;
        }
      }
      enumerator_14153.gotoNextObject () ;
    }
    enumerator_14014.gotoNextObject () ;
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
  cEnumerator_stringlist enumerator_14693 (inArgument_inString.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 272)).reader_componentsSeparatedByString (GALGAS_string ("%%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 272)), kEnumeration_up) ;
  while (enumerator_14693.hasCurrentObject ()) {
    GALGAS_stringlist var_explodedArray = enumerator_14693.current_mValue (HERE).reader_componentsSeparatedByString (GALGAS_string ("%") COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 273)) ;
    {
    GALGAS_string joker_14802 ; // Joker input parameter
    var_explodedArray.modifier_popFirst (joker_14802, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)) ;
    }
    cEnumerator_stringlist enumerator_14832 (var_explodedArray, kEnumeration_up) ;
    while (enumerator_14832.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_14832.current_mValue (HERE).reader_length (SOURCE_FILE ("semanticAnalysis.galgas", 276)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_char var_c = enumerator_14832.current_mValue (HERE).reader_characterAtIndex (GALGAS_uint ((uint32_t) 0U), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 277)) ;
        const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (75)))).operator_and (GALGAS_bool (kIsNotEqual, var_c.objectCompare (GALGAS_char (TO_UNICODE (76)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 278)).boolEnum () ;
        if (kBoolTrue == test_1) {
          GALGAS_location location_2 (inArgument_inString.reader_location (HERE)) ; // Implicit use of 'location' reader
          inCompiler->emitSemanticError (location_2, GALGAS_string ("only '%K', '%L' and '%%' escape sequences are allowed in this error message")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)) ;
        }
      }
      enumerator_14832.gotoNextObject () ;
    }
    enumerator_14693.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Once function 'forbiddenKeysForMap'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_stringset onceFunction_forbiddenKeysForMap (C_Compiler * /* inCompiler */
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outResult ; // Returned variable
  result_outResult = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 289)) ;
  result_outResult.addAssign_operation (GALGAS_string ("lkey")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 290)) ;
  result_outResult.addAssign_operation (GALGAS_string ("description")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 291)) ;
  result_outResult.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 292)) ;
//---
  return result_outResult ;
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
  return function_forbiddenKeysForMap (inCompiler COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_forbiddenKeysForMap ("forbiddenKeysForMap",
                                                                     functionWithGenericHeader_forbiddenKeysForMap,
                                                                     & kTypeDescriptor_GALGAS_stringset,
                                                                     0,
                                                                     functionArgs_forbiddenKeysForMap) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 391)) ;
  cEnumerator_formalParameterListAST enumerator_19534 (constinArgument_inRoutineSignatureAST, kEnumeration_up) ;
  while (enumerator_19534.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_19534.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 393)) ;
    GALGAS_string var_formalArgumentCppName ;
    switch (enumerator_19534.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName = GALGAS_string ("inArgument_").add_operation (enumerator_19534.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 397)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 397)) ;
        const enumGalgasBool test_0 = enumerator_19534.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioVariableMap.modifier_insertInputFormalArgumentDeclaredAsUnused (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 399)) ;
          }
        }else if (kBoolFalse == test_0) {
          {
          ioArgument_ioVariableMap.modifier_insertInputFormalArgument (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 401)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName = GALGAS_string ("outArgument_").add_operation (enumerator_19534.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 404)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 404)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 404)) ;
        {
        ioArgument_ioVariableMap.modifier_insertOutputFormalArgument (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 405)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName = GALGAS_string ("ioArgument_").add_operation (enumerator_19534.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 407)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 407)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 407)) ;
        const enumGalgasBool test_1 = enumerator_19534.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioVariableMap.modifier_insertInputOutputFormalArgumentDeclaredAsUnused (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 409)) ;
          }
        }else if (kBoolFalse == test_1) {
          {
          ioArgument_ioVariableMap.modifier_insertInputOutputFormalArgument (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 411)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName = GALGAS_string ("constinArgument_").add_operation (enumerator_19534.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 414)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 414)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 414)) ;
        const enumGalgasBool test_2 = enumerator_19534.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.modifier_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 416)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.modifier_insertConstantInputFormalArgument (enumerator_19534.current_mFormalArgumentName (HERE), var_type, var_formalArgumentCppName, var_formalArgumentCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 418)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_19534.current_mFormalSelector (HERE), enumerator_19534.current_mFormalArgumentPassingMode (HERE), var_type, enumerator_19534.current_mFormalArgumentName (HERE), var_formalArgumentCppName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 421)) ;
    enumerator_19534.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineBody'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeRoutineBody (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                 const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                 const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                 const GALGAS_typedPropertyList constinArgument_inNonMutableTypedAttributeList,
                                 const GALGAS_typedPropertyList constinArgument_inMutableTypedAttributeList,
                                 const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                 const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                 const GALGAS_location constinArgument_inEndOfMethodLocation,
                                 GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                 GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                 C_Compiler * inCompiler
                                 COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 438)) ;
  cEnumerator_localConstantList enumerator_22228 (constinArgument_inLocalConstantList, kEnumeration_up) ;
  while (enumerator_22228.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_22228.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_variableMap.modifier_insertUsedLocalConstant (enumerator_22228.current_mName (HERE), enumerator_22228.current_mType (HERE), enumerator_22228.current_mCppName (HERE), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 442)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      var_variableMap.modifier_insertLocalConstant (enumerator_22228.current_mName (HERE), enumerator_22228.current_mType (HERE), enumerator_22228.current_mCppName (HERE), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 444)) ;
      }
    }
    enumerator_22228.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_22583 (constinArgument_inNonMutableTypedAttributeList, kEnumeration_up) ;
  while (enumerator_22583.hasCurrentObject ()) {
    {
    var_variableMap.modifier_insertNonMutableAttribute (enumerator_22583.current_mAttributeName (HERE), enumerator_22583.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 452)).add_operation (enumerator_22583.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 452)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 452)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 452)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 449)) ;
    }
    enumerator_22583.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_22920 (constinArgument_inMutableTypedAttributeList, kEnumeration_up) ;
  while (enumerator_22920.hasCurrentObject ()) {
    {
    var_variableMap.modifier_insertMutableAttribute (enumerator_22920.current_mAttributeName (HERE), enumerator_22920.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 461)).add_operation (enumerator_22920.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 461)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 461)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 461)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 458)) ;
    }
    enumerator_22920.gotoNextObject () ;
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inRoutineSignatureAST, var_variableMap, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 466)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 473)) ;
  cEnumerator_semanticInstructionListAST enumerator_23509 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_23509.hasCurrentObject ()) {
    callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_23509.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 475)) ;
    enumerator_23509.gotoNextObject () ;
  }
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 482)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeFunctionBody (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                  const GALGAS_formalInputParameterListAST constinArgument_inFunctionSignature,
                                  const GALGAS_typedPropertyList constinArgument_inTypedAttributeList,
                                  const GALGAS_string constinArgument_inAttributeVariableNamePrefix,
                                  const GALGAS_semanticInstructionListAST constinArgument_inInstructionList,
                                  const GALGAS_lstring constinArgument_inReturnVariableName,
                                  const GALGAS_lstring constinArgument_inResultTypeName,
                                  const GALGAS_location constinArgument_inEndOfFunctionLocation,
                                  GALGAS_formalInputParameterListForGeneration & outArgument_outSignatureForGeneration,
                                  GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 689)) ;
  cEnumerator_typedPropertyList enumerator_31517 (constinArgument_inTypedAttributeList, kEnumeration_up) ;
  while (enumerator_31517.hasCurrentObject ()) {
    {
    var_variableMap.modifier_insertNonMutableAttribute (enumerator_31517.current_mAttributeName (HERE), enumerator_31517.current_mAttributeTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mAttribute_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 695)).add_operation (enumerator_31517.current_mAttributeName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 695)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 695)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 695)), constinArgument_inAnalysisContext.mAttribute_mSelfObjectCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 692)) ;
    }
    enumerator_31517.gotoNextObject () ;
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 700)) ;
  cEnumerator_formalInputParameterListAST enumerator_31916 (constinArgument_inFunctionSignature, kEnumeration_up) ;
  while (enumerator_31916.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, enumerator_31916.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 702)) ;
    const enumGalgasBool test_0 = enumerator_31916.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_cppName = GALGAS_string ("constinArgument_").add_operation (enumerator_31916.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 704)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 704)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 704)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_31916.current_mFormalSelector (HERE), var_parameterType, var_cppName, enumerator_31916.current_mFormalArgumentName (HERE), enumerator_31916.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 705)) ;
      const enumGalgasBool test_1 = enumerator_31916.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_variableMap.modifier_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_31916.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 712)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        var_variableMap.modifier_insertConstantInputFormalArgument (enumerator_31916.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 714)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_cppName = GALGAS_string ("inArgument_").add_operation (enumerator_31916.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 717)).reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 717)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_31916.current_mFormalSelector (HERE), var_parameterType, var_cppName, enumerator_31916.current_mFormalArgumentName (HERE), enumerator_31916.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)) ;
      const enumGalgasBool test_2 = enumerator_31916.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_variableMap.modifier_insertInputFormalArgumentDeclaredAsUnused (enumerator_31916.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 725)) ;
        }
      }else if (kBoolFalse == test_2) {
        {
        var_variableMap.modifier_insertInputFormalArgument (enumerator_31916.current_mFormalArgumentName (HERE), var_parameterType, var_cppName, var_cppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 727)) ;
        }
      }
    }
    enumerator_31916.gotoNextObject () ;
  }
  outArgument_outReturnedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.mAttribute_mSemanticContext.mAttribute_mTypeMap, constinArgument_inResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 732)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 733)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)) ;
  {
  var_variableMap.modifier_insertOutputFormalArgument (constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 734)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 736)) ;
  cEnumerator_semanticInstructionListAST enumerator_33676 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_33676.hasCurrentObject ()) {
    callCategoryMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_33676.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 738)) ;
    enumerator_33676.gotoNextObject () ;
  }
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 745)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                           Function 'buildPredefinedTypes'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2182)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2183))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2183)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2183)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2184)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2185))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2185)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2185)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2186))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2186)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2186)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2187))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2187)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2187)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2188))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2188)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2188)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2189))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2189)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2189)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2190))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2190)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2190)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2191))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2191)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2191)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2192))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2192)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2192)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2193))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2193)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2193)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2194))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2194)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2194)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2195)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2196))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2196)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2196)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2197))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2197)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2197)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2198))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2198)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2198)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2199))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2199)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2199)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2200))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2200)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2200)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2201))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2201)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2201))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2181)) ;
//---
  return result_outPredefinedTypes ;
}


//---------------------------------------------------------------------------------------------------------------------*
//  Function introspection                                                                                             *
//---------------------------------------------------------------------------------------------------------------------*

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_object functionWithGenericHeader_buildPredefinedTypes (C_Compiler * inCompiler,
                                                                     const cObjectArray & inEffectiveParameterArray,
                                                                     const GALGAS_location & /* §§ inErrorLocation */
                                                                     COMMA_LOCATION_ARGS) {
  const GALGAS_semanticContext operand0 = GALGAS_semanticContext::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                 inCompiler
                                                                                 COMMA_THERE) ;
  return function_buildPredefinedTypes (operand0,
                                        inCompiler
                                        COMMA_THERE).reader_object (THERE) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'performSemanticAnalysis'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_performSemanticAnalysis (const GALGAS_string constinArgument_inProductDirectory,
                                      const GALGAS_semanticDeclarationListAST constinArgument_inDeclarationList,
                                      const GALGAS_semanticContext constinArgument_inSemanticContext,
                                      GALGAS_semanticDeclarationSortedListForGeneration & outArgument_outDecoratedDeclarationListForGeneration,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDecoratedDeclarationListForGeneration.drop () ; // Release 'out' argument
  cEnumerator_lstringlist enumerator_96645 (constinArgument_inSemanticContext.mAttribute_mTypeMap.reader_unsolvedProxyList (SOURCE_FILE ("semanticAnalysis.galgas", 2217)), kEnumeration_up) ;
  while (enumerator_96645.hasCurrentObject ()) {
    GALGAS_location location_0 (enumerator_96645.current_mValue (HERE).reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_0, GALGAS_string ("the '@").add_operation (enumerator_96645.current_mValue (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2218)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2218)).add_operation (GALGAS_string ("' type is undefined"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2218))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2218)) ;
    enumerator_96645.gotoNextObject () ;
  }
  GALGAS_semanticDeclarationListAST var_semanticDeclarationList = constinArgument_inDeclarationList ;
  cEnumerator_semanticDeclarationListAST enumerator_96887 (constinArgument_inDeclarationList, kEnumeration_up) ;
  while (enumerator_96887.hasCurrentObject ()) {
    callCategoryMethod_addAssociatedElement ((const cPtr_semanticDeclarationAST *) enumerator_96887.current_mSemanticDeclaration (HERE).ptr (), var_semanticDeclarationList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2223)) ;
    enumerator_96887.gotoNextObject () ;
  }
  outArgument_outDecoratedDeclarationListForGeneration = GALGAS_semanticDeclarationSortedListForGeneration::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 2226)) ;
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 2227)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_predefinedTypes var_predefinedTypes = function_buildPredefinedTypes (constinArgument_inSemanticContext, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2228)) ;
    cEnumerator_semanticDeclarationListAST enumerator_97237 (var_semanticDeclarationList, kEnumeration_up) ;
    while (enumerator_97237.hasCurrentObject ()) {
      callCategoryMethod_semanticAnalysis ((const cPtr_semanticDeclarationAST *) enumerator_97237.current_mSemanticDeclaration (HERE).ptr (), constinArgument_inProductDirectory, constinArgument_inSemanticContext, var_predefinedTypes, outArgument_outDecoratedDeclarationListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2230)) ;
      enumerator_97237.gotoNextObject () ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeader'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeader (C_Compiler * /* inCompiler */,
                                                                                 const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                 const GALGAS_string & in_LEXIQUE_5F_NAME,
                                                                                 const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "#define " ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/predefined-types.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"" ;
  result << in_LEXIQUE_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_559_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_559 (in_IMPORTED_5F_COMPONENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_559.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_559.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_559_.increment () ;
      enumerator_559.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Filewrapper template 'syntaxFileGenerationTemplate syntaxFileHeaderGalgas3'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileHeaderGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                           const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                           const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#ifndef " ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "#define " ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << "_ENTITIES_DEFINED\n"
    "\n"
    "//-----------------------------------------------------------------------------*\n"
    "\n"
    "#include <stdint.h>\n"
    "\n"
    "//-----------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_299_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_299 (in_INCLUSION_5F_SET, kEnumeration_up) ;
    while (enumerator_299.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_299.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_299_.increment () ;
      enumerator_299.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_27_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_27 (in_INCLUSION_5F_SET, kEnumeration_up) ;
    while (enumerator_27.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_27.current_key (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_27_.increment () ;
      enumerator_27.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementation (C_Compiler * /* inCompiler */,
                                                                                         const GALGAS_string & in_COMPONENT_5F_NAME,
                                                                                         const GALGAS_stringlist & in_IMPORTED_5F_COMPONENT_5F_LIST
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "#include \"" ;
  result << in_COMPONENT_5F_NAME.stringValue () ;
  result << ".h\"\n"
    "#include \"galgas2/C_galgas_CLI_Options.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_275_ (0) ;
  if (in_IMPORTED_5F_COMPONENT_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_275 (in_IMPORTED_5F_COMPONENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_275.hasCurrentObject ()) {
      result << "#include \"" ;
      result << enumerator_275.current_mValue (HERE).stringValue () ;
      result << ".h\"\n" ;
      index_275_.increment () ;
      enumerator_275.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public : virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_814_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_814 (in_NONTERMINAL_5F_MAP, kEnumeration_up) ;
    while (enumerator_814.hasCurrentObject ()) {
      GALGAS_uint index_848_ (0) ;
      if (enumerator_814.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_848 (enumerator_814.current_mLabelMap (HERE), kEnumeration_up) ;
        while (enumerator_848.hasCurrentObject ()) {
          result << "  protected : virtual void nt_" ;
          result << enumerator_814.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_848.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1006_IDX (0) ;
          if (enumerator_848.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_1006 (enumerator_848.current_mSignature (HERE), kEnumeration_up) ;
            while (enumerator_1006.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << enumerator_1006.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_1006_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << enumerator_1006.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_1006_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_1006_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_1006_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_1006_IDX.increment () ;
              enumerator_1006.gotoNextObject () ;
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
          index_848_.increment () ;
          enumerator_848.gotoNextObject () ;
        }
      }
      result << "  protected : virtual void nt_" ;
      result << enumerator_814.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
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
        result << "  protected : virtual void nt_" ;
        result << enumerator_814.current_lkey (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
        result << "_indexing (class C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) = 0 ;\n"
          "\n" ;
      }else if (kBoolFalse == test_5) {
      }
      index_814_.increment () ;
      enumerator_814.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Rule declarations\n" ;
  GALGAS_uint index_2427_ (0) ;
  if (in_RULE_5F_DECLARATION_5F_LIST.isValid ()) {
    cEnumerator_ruleDeclarationList enumerator_2427 (in_RULE_5F_DECLARATION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2427.hasCurrentObject ()) {
      GALGAS_uint index_2467_ (0) ;
      if (enumerator_2427.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2467 (enumerator_2427.current_mLabelImplementationList (HERE), kEnumeration_up) ;
        while (enumerator_2467.hasCurrentObject ()) {
          result << "  protected : void rule_" ;
          result << in_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2427.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2427.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2467.current_mLabelName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2696_IDX (0) ;
          if (enumerator_2467.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2696 (enumerator_2467.current_mSignature (HERE), kEnumeration_up) ;
            while (enumerator_2696.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << enumerator_2696.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2696_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << enumerator_2696.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2696_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2696_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2696_IDX.reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                  }
                }
              }
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              index_2696_IDX.increment () ;
              enumerator_2696.gotoNextObject () ;
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
          index_2467_.increment () ;
          enumerator_2467.gotoNextObject () ;
        }
      }
      result << "  protected : void rule_" ;
      result << in_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2427.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2427.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
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
        result << "  protected : void rule_" ;
        result << in_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2427.current_mNonterminalName (HERE).reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2427.current_mRuleIndex (HERE).reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_indexing (C_Lexique_" ;
        result << in_LEXIQUE_5F_NAME.stringValue () ;
        result << " * inLexique) ;\n"
          "\n" ;
      }else if (kBoolFalse == test_11) {
      }
      index_2427_.increment () ;
      enumerator_2427.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "//--- Select methods\n" ;
  GALGAS_uint index_4191_ (0) ;
  if (in_SELECT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_uintlist enumerator_4191 (in_SELECT_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_4191.hasCurrentObject ()) {
      result << "  protected : virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_4191.current_mValue (HERE).reader_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << " (C_Lexique_" ;
      result << in_LEXIQUE_5F_NAME.stringValue () ;
      result << " *) = 0 ;\n"
        "\n" ;
      index_4191_.increment () ;
      enumerator_4191.gotoNextObject () ;
    }
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                 Routine 'enterNonterminalNonTerminalInMapAndCheck'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_102386 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2345))) ;
  if (NULL != objectArray_102386) {
      macroValidSharedObject (objectArray_102386, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet = objectArray_102386->mAttribute_mLabelMap.reader_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 2346)) ;
    GALGAS_stringset var_reDeclarationLabelSet = constinArgument_inNonterminalLabelMap.reader_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 2347)) ;
    GALGAS_stringset var_missingLabelSet = var_firstDeclarationLabelSet.substract_operation (var_reDeclarationLabelSet, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2348)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2349)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_102766 (var_missingLabelSet, kEnumeration_up) ;
      while (enumerator_102766.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "-  ").add_operation (enumerator_102766.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2352))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2352)) ;
        enumerator_102766.gotoNextObject () ;
      }
      GALGAS_location location_1 (constinArgument_inNonTerminalName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_1, GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2355)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2355)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2355)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2355))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2354)) ;
    }
    GALGAS_stringset var_newLabelSet = var_reDeclarationLabelSet.substract_operation (var_firstDeclarationLabelSet, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2357)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2358)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_103115 (var_newLabelSet, kEnumeration_up) ;
      while (enumerator_103115.hasCurrentObject ()) {
        var_s.dotAssign_operation (GALGAS_string ("\n"
          "-  ").add_operation (enumerator_103115.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2361))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2361)) ;
        enumerator_103115.gotoNextObject () ;
      }
      GALGAS_location location_3 (constinArgument_inNonTerminalName.reader_location (HERE)) ; // Implicit use of 'location' reader
      inCompiler->emitSemanticError (location_3, GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2364)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2364)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2364)).add_operation (var_s, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2364))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2363)) ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2366)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet.reader_count (SOURCE_FILE ("semanticAnalysis.galgas", 2366)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2366)).boolEnum () ;
    if (kBoolTrue == test_4) {
      cEnumerator_nonterminalLabelMap enumerator_103386 (objectArray_102386->mAttribute_mLabelMap, kEnumeration_up) ;
      cEnumerator_nonterminalLabelMap enumerator_103420 (constinArgument_inNonterminalLabelMap, kEnumeration_up) ;
      while (enumerator_103386.hasCurrentObject () && enumerator_103420.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_newSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2368)) ;
        cEnumerator_formalParameterSignature enumerator_103520 (enumerator_103420.current_mSignature (HERE), kEnumeration_up) ;
        while (enumerator_103520.hasCurrentObject ()) {
          var_newSignature.addAssign_operation (enumerator_103520.current_mFormalSelector (HERE), enumerator_103520.current_mFormalArgumentType (HERE), enumerator_103520.current_mFormalArgumentPassingMode (HERE), enumerator_103520.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2370)) ;
          enumerator_103520.gotoNextObject () ;
        }
        {
        routine_checkMethodSignatures (enumerator_103386.current_mSignatureForGeneration (HERE), enumerator_103386.current_mEndOfArgumentLocation (HERE), var_newSignature, enumerator_103420.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2372)) ;
        }
        enumerator_103386.gotoNextObject () ;
        enumerator_103420.gotoNextObject () ;
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.modifier_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2381)) ;
    }
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'buildNonterminalDeclarationsMap'                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2391)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_104395 (constinArgument_inNonterminalDeclarationList, kEnumeration_up) ;
  while (enumerator_104395.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 2394)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_104481 (enumerator_104395.current_mLabels (HERE), kEnumeration_up) ;
    while (enumerator_104481.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2396)) ;
      GALGAS_formalParameterSignature var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2397)) ;
      cEnumerator_formalParameterListAST enumerator_104659 (enumerator_104481.current_mFormalArgumentList (HERE), kEnumeration_up) ;
      while (enumerator_104659.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_t = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_104659.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2399)) ;
        var_signatureForGeneration.addAssign_operation (enumerator_104659.current_mFormalSelector (HERE), enumerator_104659.current_mFormalArgumentPassingMode (HERE), var_t, enumerator_104659.current_mFormalArgumentName (HERE), enumerator_104659.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 2400))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2400)) ;
        var_signature.addAssign_operation (enumerator_104659.current_mFormalSelector (HERE), var_t, enumerator_104659.current_mFormalArgumentPassingMode (HERE), enumerator_104659.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2401)) ;
        enumerator_104659.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap.modifier_insertKey (enumerator_104481.current_mLabelName (HERE), var_signatureForGeneration, var_signature, enumerator_104481.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2403)) ;
      }
      enumerator_104481.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_104395.current_mNonterminalName (HERE), var_nonterminalLabelMap, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2405)) ;
    }
    enumerator_104395.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                       Routine 'analyzeSyntaxInstructionList'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_analyzeSyntaxInstructionList (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                           const GALGAS_terminalMap constinArgument_inTerminalMap,
                                           const GALGAS_string constinArgument_inLexiqueName,
                                           const GALGAS_nonterminalMap constinArgument_inNonterminalMap,
                                           const GALGAS_string constinArgument_inComponentName,
                                           const GALGAS_syntaxInstructionList constinArgument_inSyntaxInstructionListAST,
                                           const GALGAS_location constinArgument_inEndOfBranchLocation,
                                           const GALGAS_stringset constinArgument_inIndexNameSet,
                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                           GALGAS_uint & ioArgument_ioSelectMethodCount,
                                           GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                           C_Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 2951)) ;
  {
  ioArgument_ioVariableMap.modifier_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2953)) ;
  }
  cEnumerator_syntaxInstructionList enumerator_130206 (constinArgument_inSyntaxInstructionListAST, kEnumeration_up) ;
  while (enumerator_130206.hasCurrentObject ()) {
    callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_130206.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2956)) ;
    enumerator_130206.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.modifier_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 2970)) ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Routine 'semanticAnalysisOfRuleLabel'                                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfRuleLabel (const GALGAS_formalParameterListAST constinArgument_inFormalArguments,
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
  GALGAS_variableMap var_variableMap = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 3540)) ;
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.mAttribute_mSemanticContext, constinArgument_inFormalArguments, var_variableMap, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3541)) ;
  }
  outArgument_outSignature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3548)) ;
  cEnumerator_formalParameterListForGeneration enumerator_153020 (outArgument_outSignatureForGeneration, kEnumeration_up) ;
  while (enumerator_153020.hasCurrentObject ()) {
    outArgument_outSignature.addAssign_operation (enumerator_153020.current_mFormalSelector (HERE), enumerator_153020.current_mFormalArgumentType (HERE), enumerator_153020.current_mFormalArgumentPassingMode (HERE), enumerator_153020.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3550)) ;
    enumerator_153020.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3553)) ;
  GALGAS_stringlist var_localVariableCppNameList = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3554)) ;
  cEnumerator_syntaxInstructionList enumerator_153363 (constinArgument_inSyntaxInstructionList, kEnumeration_up) ;
  while (enumerator_153363.hasCurrentObject ()) {
    callCategoryMethod_analyzeSyntaxInstruction ((const cPtr_syntaxInstructionAST *) enumerator_153363.current_mInstruction (HERE).ptr (), constinArgument_inAnalysisContext, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3556)) ;
    enumerator_153363.gotoNextObject () ;
  }
  var_variableMap.method_checkAutomatonStates (constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3570)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                     Routine 'semanticAnalysisOfSyntaxComponent'                                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_semanticAnalysisOfSyntaxComponent (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                                const GALGAS_syntaxRuleListAST constinArgument_inRuleList,
                                                const GALGAS_string constinArgument_inComponentName,
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
  GALGAS_nonterminalMap var_nonterminalMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 3592)) ;
  {
  routine_buildNonterminalDeclarationsMap (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, var_nonterminalMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3593)) ;
  }
  cEnumerator_syntaxRuleListAST enumerator_155072 (constinArgument_inRuleList, kEnumeration_up) ;
  while (enumerator_155072.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 3600)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_155161 (enumerator_155072.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_155161.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3602)) ;
      GALGAS_formalParameterSignature var_signature = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3603)) ;
      cEnumerator_formalParameterListAST enumerator_155336 (enumerator_155161.current_mFormalArguments (HERE), kEnumeration_up) ;
      while (enumerator_155336.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.mAttribute_mTypeMap, enumerator_155336.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3605)) ;
        var_signatureForGeneration.addAssign_operation (enumerator_155336.current_mFormalSelector (HERE), enumerator_155336.current_mFormalArgumentPassingMode (HERE), var_type, enumerator_155336.current_mFormalArgumentName (HERE), GALGAS_string ("argument_").add_operation (enumerator_155336.current_mFormalArgumentName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3606)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3606))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3606)) ;
        var_signature.addAssign_operation (enumerator_155336.current_mFormalSelector (HERE), var_type, enumerator_155336.current_mFormalArgumentPassingMode (HERE), enumerator_155336.current_mFormalArgumentName (HERE).mAttribute_string  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3607)) ;
        enumerator_155336.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap.modifier_insertKey (enumerator_155161.current_mLabelName (HERE), var_signatureForGeneration, var_signature, enumerator_155161.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3609)) ;
      }
      enumerator_155161.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_155072.current_mNonterminalName (HERE), var_nonterminalLabelMap, var_nonterminalMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3611)) ;
    }
    enumerator_155072.gotoNextObject () ;
  }
  GALGAS_analysisContext var_analysisContext = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3617)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 3619))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3614)) ;
  GALGAS_uint var_selectMethodCount = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_ruleDeclarationList var_ruleDeclarationList = GALGAS_ruleDeclarationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3622)) ;
  GALGAS_uint var_newRuleIndex = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_syntaxRuleListAST enumerator_156271 (constinArgument_inRuleList, kEnumeration_up) ;
  while (enumerator_156271.hasCurrentObject ()) {
    GALGAS_ruleLabelImplementationList var_ruleLabelImplementationList = GALGAS_ruleLabelImplementationList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 3625)) ;
    GALGAS_uint var_localSelectMethodCount = var_selectMethodCount ;
    GALGAS_nonterminalLabelMap joker_156455 ; // Joker input parameter
    var_nonterminalMap.method_searchKey (enumerator_156271.current_mNonterminalName (HERE), joker_156455, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3627)) ;
    cEnumerator_syntaxRuleLabelListAST enumerator_156482 (enumerator_156271.current_mLabelList (HERE), kEnumeration_up) ;
    while (enumerator_156482.hasCurrentObject ()) {
      var_localSelectMethodCount = var_selectMethodCount ;
      GALGAS_formalParameterListForGeneration var_signatureForGeneration ;
      GALGAS_formalParameterSignature var_signature ;
      GALGAS_semanticInstructionListForGeneration var_instructionListForGeneration ;
      {
      routine_semanticAnalysisOfRuleLabel (enumerator_156482.current_mFormalArguments (HERE), enumerator_156482.current_mSyntaxInstructionList (HERE), var_analysisContext, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.reader_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 3639)), var_nonterminalMap, constinArgument_inComponentName, enumerator_156482.current_mEndOfInstructionList (HERE), constinArgument_inIndexNameSet, var_localSelectMethodCount, var_signatureForGeneration, var_signature, var_instructionListForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3633)) ;
      }
      var_ruleLabelImplementationList.addAssign_operation (enumerator_156482.current_mLabelName (HERE), var_signatureForGeneration, var_signature, enumerator_156482.current_mEndOfArgumentLocation (HERE), var_instructionListForGeneration  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3649)) ;
      enumerator_156482.gotoNextObject () ;
    }
    var_selectMethodCount = var_localSelectMethodCount ;
    GALGAS_nonterminalLabelMap joker_157452 ; // Joker input parameter
    var_nonterminalMap.method_searchKey (enumerator_156271.current_mNonterminalName (HERE), joker_157452, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3657)) ;
    var_ruleDeclarationList.addAssign_operation (enumerator_156271.current_mNonterminalName (HERE).reader_string (SOURCE_FILE ("semanticAnalysis.galgas", 3659)), var_newRuleIndex, var_ruleLabelImplementationList  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3658)) ;
    var_newRuleIndex.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3662)) ;
    enumerator_156271.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GALGAS_syntaxDeclarationForGeneration::constructor_new (constinArgument_inComponentName, constinArgument_inLexiqueName, var_nonterminalMap, var_ruleDeclarationList, var_selectMethodCount, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 3665)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateProcedure'                                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateProcedure (const GALGAS_bool constinArgument_inGenerateStatic,
                                const GALGAS_string constinArgument_inProcedureName,
                                GALGAS_stringset & ioArgument_ioInclusionSet,
                                GALGAS_formalParameterListForGeneration inArgument_inFormalArgumentList,
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
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 251)) ;
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    var_unusedVariableCppNameSet.addAssign_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 253))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 253)) ;
  }
  const enumGalgasBool test_1 = constinArgument_inGenerateResetTemplateString.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 255)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 256))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 256)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_11811 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_11811.hasCurrentObject ()) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_11811.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticGeneration.galgas", 259)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_unusedVariableCppNameSet.addAssign_operation (enumerator_11811.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 260)) ;
    }
    enumerator_11811.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 266)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_12112 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_12112.hasCurrentObject ()) {
    callCategoryMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_12112.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 268)) ;
    enumerator_12112.gotoNextObject () ;
  }
  {
  var_routineBody.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 276)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_12415 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_12415.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_12415.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 279)) ;
    enumerator_12415.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  const enumGalgasBool test_3 = constinArgument_inGenerateStatic.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("static ")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 284)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("void ").add_operation (constinArgument_inProcedureName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 286)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.reader_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 287)) ;
  cEnumerator_formalParameterListForGeneration enumerator_12744 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_12744.hasCurrentObject ()) {
    switch (enumerator_12744.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 292)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 294)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 296)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_12744.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 298)) ;
      }
      break ;
    }
    const enumGalgasBool test_4 = var_unusedVariableCppNameSet.reader_hasKey (enumerator_12744.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (enumerator_12744.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 301)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.dotAssign_operation (enumerator_12744.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 303)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 305)) ;
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 306)) ;
    }
    enumerator_12744.gotoNextObject () ;
  }
  const enumGalgasBool test_5 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_5) {
    const enumGalgasBool test_6 = var_unusedVariableCppNameSet.reader_hasKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_6) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("C_String & /* ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)).add_operation (GALGAS_string (" */,\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 311)) ;
    }else if (kBoolFalse == test_6) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("C_String & ").add_operation (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 313)) ;
    }
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 315)) ;
    }
  }
  outArgument_outGeneratedCode.dotAssign_operation (constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 318))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 318)) ;
  const enumGalgasBool test_7 = var_unusedVariableCppNameSet.reader_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 319)).boolEnum () ;
  if (kBoolTrue == test_7) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 320)) ;
  }else if (kBoolFalse == test_7) {
    outArgument_outGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 322))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 322)) ;
  }
  const enumGalgasBool test_8 = constinArgument_inGenerateLocationArgs.boolEnum () ;
  if (kBoolTrue == test_8) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 325)) ;
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 326)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 327)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (")")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 329)) ;
  const enumGalgasBool test_9 = constinArgument_inProcedureIsConst.boolEnum () ;
  if (kBoolTrue == test_9) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (" const")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 331)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (" {\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 333)) ;
  cEnumerator_formalParameterListForGeneration enumerator_14619 (inArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_14619.hasCurrentObject ()) {
    switch (enumerator_14619.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (enumerator_14619.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)).add_operation (GALGAS_string (".drop () ; // Release 'out' argument\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 338)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
      }
      break ;
    }
    enumerator_14619.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (var_routineBody  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 343)) ;
  const enumGalgasBool test_10 = constinArgument_inGenerateResetTemplateString.boolEnum () ;
  if (kBoolTrue == test_10) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)).add_operation (GALGAS_string ("->resetTemplateString () ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 346)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n"
    "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 349)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                             Routine 'generateFunction'                                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateFunction (const GALGAS_string constinArgument_inFunctionCppRepresentationName,
                               GALGAS_stringset & ioArgument_ioInclusionSet,
                               const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                               const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                               const GALGAS_string constinArgument_inCompilerTypeName,
                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inResultType,
                               const GALGAS_string constinArgument_inResultVariableCppName,
                               const GALGAS_bool constinArgument_inIsStatic,
                               GALGAS_string & outArgument_outGeneratedCode,
                               C_Compiler * inCompiler
                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  outArgument_outGeneratedCode = GALGAS_string::makeEmptyString () ;
  categoryMethod_addHeaderFileName (constinArgument_inResultType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 369)) ;
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 371)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 372))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 372)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_16361 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_16361.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_16361.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 375)) ;
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_16361.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 376)) ;
    enumerator_16361.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 381)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_16634 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_16634.hasCurrentObject ()) {
    callCategoryMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_16634.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 383)) ;
    enumerator_16634.gotoNextObject () ;
  }
  {
  var_routineBody.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 390)) ;
  }
  const enumGalgasBool test_0 = constinArgument_inIsStatic.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("static ")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 393)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (constinArgument_inResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 395)) ;
  outArgument_outGeneratedCode.dotAssign_operation (constinArgument_inFunctionCppRepresentationName.add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 396))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 396)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.reader_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 397)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_17197 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_17197.hasCurrentObject ()) {
    const enumGalgasBool test_1 = enumerator_17197.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (enumerator_17197.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 401)) ;
    }else if (kBoolFalse == test_1) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_17197.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 403)) ;
    }
    const enumGalgasBool test_2 = var_unusedVariableCppNameSet.reader_hasKey (enumerator_17197.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 405)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (enumerator_17197.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 406)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 406))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 406)) ;
    }else if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.dotAssign_operation (enumerator_17197.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 408)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 410)) ;
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 411)) ;
    }
    enumerator_17197.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 414)) ;
  const enumGalgasBool test_3 = var_unusedVariableCppNameSet.reader_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 415)).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 416)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 418)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 420)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 421)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 422)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (" {\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 423)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultType.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 426)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 426))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 425)) ;
  outArgument_outGeneratedCode.dotAssign_operation (var_routineBody  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 428)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("//---\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 430)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 431)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n"
    "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 433)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                         Routine 'generateCategoryModifier'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryModifier (const GALGAS_string constinArgument_inClassName,
                                       const GALGAS_string constinArgument_inBaseClassName,
                                       const GALGAS_string constinArgument_inMethodName,
                                       GALGAS_stringset & ioArgument_ioInclusionSet,
                                       const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                       const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                       GALGAS_string & outArgument_outGeneratedCode,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 451)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 452))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 452)) ;
  var_unusedVariableCppNameSet.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 453)) ;
  cEnumerator_formalParameterListForGeneration enumerator_19633 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_19633.hasCurrentObject ()) {
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_19633.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 455)) ;
    enumerator_19633.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 460)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_19839 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_19839.hasCurrentObject ()) {
    callCategoryMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_19839.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 462)) ;
    enumerator_19839.gotoNextObject () ;
  }
  {
  var_routineBody.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 470)) ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void categoryModifier_").add_operation (constinArgument_inClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)).add_operation (constinArgument_inMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 472)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.reader_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 473)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("cPtr_").add_operation (constinArgument_inClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 475)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 475))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 475)) ;
  }else if (kBoolFalse == test_0) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("cPtr_").add_operation (constinArgument_inBaseClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 477)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 477))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 477)) ;
  }
  GALGAS_bool var_currentObjectIsUnused = var_unusedVariableCppNameSet.reader_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 479)) ;
  const enumGalgasBool test_1 = var_currentObjectIsUnused.boolEnum () ;
  if (kBoolTrue == test_1) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* inObject */")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 481)) ;
  }else if (kBoolFalse == test_1) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("inObject")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 483)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_20766 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_20766.hasCurrentObject ()) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 487)) ;
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 488)) ;
    }
    switch (enumerator_20766.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (enumerator_20766.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 491)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_20766.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 493)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_20766.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 495)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_20766.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 497)) ;
      }
      break ;
    }
    const enumGalgasBool test_2 = var_unusedVariableCppNameSet.reader_hasKey (enumerator_20766.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 499)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (enumerator_20766.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 500)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 500))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 500)) ;
    }else if (kBoolFalse == test_2) {
      outArgument_outGeneratedCode.dotAssign_operation (enumerator_20766.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 502)) ;
    }
    enumerator_20766.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 506)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 507)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("C_Compiler * ")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 508)) ;
  const enumGalgasBool test_3 = var_unusedVariableCppNameSet.reader_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 509)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 509)).boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 510)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 512)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 514)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 515)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 516)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 517)) ;
  const enumGalgasBool test_4 = var_currentObjectIsUnused.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 519)).boolEnum () ;
  if (kBoolTrue == test_4) {
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 521)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 521)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  cPtr_").add_operation (constinArgument_inClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523)).add_operation (GALGAS_string (" * object = (cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523)).add_operation (constinArgument_inClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 523)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 523)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (constinArgument_inClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 525)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 525)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (var_routineBody  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 527)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("}")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 529)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryMethod'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryMethod (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReceiverType,
                                     const GALGAS_string constinArgument_inBaseClassName,
                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                     const GALGAS_string constinArgument_inMethodName,
                                     const GALGAS_formalParameterListForGeneration constinArgument_inFormalArgumentList,
                                     const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                     GALGAS_string & outArgument_outGeneratedCode,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className = constinArgument_inReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 546)) ;
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 548)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 549))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 549)) ;
  var_unusedVariableCppNameSet.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 550)) ;
  cEnumerator_formalParameterListForGeneration enumerator_23769 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_23769.hasCurrentObject ()) {
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_23769.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 552)) ;
    enumerator_23769.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 557)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_23981 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_23981.hasCurrentObject ()) {
    callCategoryMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_23981.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 559)) ;
    enumerator_23981.gotoNextObject () ;
  }
  {
  var_routineBody.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 567)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = constinArgument_inReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 571)).isValid ()) {
    uint32_t variant_24341 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 571)).uintValue () ;
    bool loop_24341 = true ;
    while (loop_24341) {
      loop_24341 = var_searching.isValid () ;
      if (loop_24341) {
        loop_24341 = var_searching.boolValue () ;
      }
      if (loop_24341 && (0 == variant_24341)) {
        loop_24341 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 571)) ;
      }
      if (loop_24341) {
        variant_24341 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 572)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 572)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 572)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 573)).reader_mInstanceMethodMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 573)).reader_hasKey (constinArgument_inMethodName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 573)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 574)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("method-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)).add_operation (constinArgument_inMethodName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 582)) ;
  categoryMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 583)) ;
  cEnumerator_formalParameterListForGeneration enumerator_24793 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_24793.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_24793.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 585)) ;
    enumerator_24793.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static void categoryMethod_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (constinArgument_inMethodName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 588)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.reader_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 589)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 591)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 591)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 591))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 591)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 593)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 593)) ;
  }
  GALGAS_bool var_currentObjectIsUnused = var_unusedVariableCppNameSet.reader_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 595)) ;
  const enumGalgasBool test_3 = var_currentObjectIsUnused.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* inObject */")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 597)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("inObject")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 599)) ;
  }
  cEnumerator_formalParameterListForGeneration enumerator_25543 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_25543.hasCurrentObject ()) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 603)) ;
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 604)) ;
    }
    switch (enumerator_25543.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (enumerator_25543.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 607)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_25543.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 609)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_25543.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 611)) ;
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_25543.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 613)) ;
      }
      break ;
    }
    const enumGalgasBool test_4 = var_unusedVariableCppNameSet.reader_hasKey (enumerator_25543.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 615)).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (enumerator_25543.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 616)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.dotAssign_operation (enumerator_25543.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 618)) ;
    }
    enumerator_25543.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 622)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 623)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("C_Compiler * ")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 624)) ;
  const enumGalgasBool test_5 = var_unusedVariableCppNameSet.reader_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 625)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 625)).boolEnum () ;
  if (kBoolTrue == test_5) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 626)) ;
  }else if (kBoolFalse == test_5) {
    outArgument_outGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 628)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 630)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 631)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 632)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (") {\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 633)) ;
  const enumGalgasBool test_6 = var_currentObjectIsUnused.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 635)).boolEnum () ;
  if (kBoolTrue == test_6) {
    const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  const cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 637)) ;
    }else if (kBoolFalse == test_7) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  const cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 639)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 639)).add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 639)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 639))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 639)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 641)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 641))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 641)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (var_routineBody  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 643)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("}")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 645)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateCategoryReader'                                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateCategoryReader (const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReceiverType,
                                     const GALGAS_string constinArgument_inBaseClassName,
                                     GALGAS_stringset & ioArgument_ioInclusionSet,
                                     const GALGAS_string constinArgument_inReaderName,
                                     const GALGAS_formalInputParameterListForGeneration constinArgument_inFormalArgumentList,
                                     const GALGAS_semanticInstructionListForGeneration constinArgument_inInstructionList,
                                     const GALGAS_string constinArgument_inCompilerTypeName,
                                     const GALGAS_string constinArgument_inResultTypeName,
                                     const GALGAS_string constinArgument_inResultVariableCppName,
                                     GALGAS_string & outArgument_outGeneratedCode,
                                     C_Compiler * inCompiler
                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedCode.drop () ; // Release 'out' argument
  GALGAS_string var_className = constinArgument_inReceiverType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 665)) ;
  GALGAS_stringset var_unusedVariableCppNameSet = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticGeneration.galgas", 667)) ;
  var_unusedVariableCppNameSet.addAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 668)) ;
  var_unusedVariableCppNameSet.addAssign_operation (GALGAS_string ("object")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 669)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_28709 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_28709.hasCurrentObject ()) {
    var_unusedVariableCppNameSet.addAssign_operation (enumerator_28709.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 671)) ;
    enumerator_28709.gotoNextObject () ;
  }
  GALGAS_uint var_temporaryVariableIndex = GALGAS_uint ((uint32_t) 0U) ;
  GALGAS_string var_routineBody = GALGAS_string::makeEmptyString () ;
  {
  var_routineBody.modifier_incIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 676)) ;
  }
  cEnumerator_semanticInstructionListForGeneration enumerator_28921 (constinArgument_inInstructionList, kEnumeration_up) ;
  while (enumerator_28921.hasCurrentObject ()) {
    callCategoryMethod_generateInstruction ((const cPtr_semanticInstructionForGeneration *) enumerator_28921.current_mInstruction (HERE).ptr (), ioArgument_ioInclusionSet, var_temporaryVariableIndex, var_unusedVariableCppNameSet, GALGAS_bool (false), var_routineBody, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 678)) ;
    enumerator_28921.gotoNextObject () ;
  }
  {
  var_routineBody.modifier_decIndentation (GALGAS_uint ((uint32_t) 2U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 686)) ;
  }
  categoryMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 688)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_baseType = constinArgument_inReceiverType ;
  GALGAS_bool var_searching = GALGAS_bool (true) ;
  if (GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 691)).isValid ()) {
    uint32_t variant_29335 = GALGAS_uint::constructor_max (SOURCE_FILE ("semanticGeneration.galgas", 691)).uintValue () ;
    bool loop_29335 = true ;
    while (loop_29335) {
      loop_29335 = var_searching.isValid () ;
      if (loop_29335) {
        loop_29335 = var_searching.boolValue () ;
      }
      if (loop_29335 && (0 == variant_29335)) {
        loop_29335 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticGeneration.galgas", 691)) ;
      }
      if (loop_29335) {
        variant_29335 -- ;
        const enumGalgasBool test_0 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 692)).reader_isNull (SOURCE_FILE ("semanticGeneration.galgas", 692)).operator_not (SOURCE_FILE ("semanticGeneration.galgas", 692)).boolEnum () ;
        if (kBoolTrue == test_0) {
          const enumGalgasBool test_1 = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)).reader_mReaderMap (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)).reader_hasKey (constinArgument_inReaderName COMMA_SOURCE_FILE ("semanticGeneration.galgas", 693)).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_baseType = var_baseType.reader_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 694)) ;
          }else if (kBoolFalse == test_1) {
            var_searching = GALGAS_bool (false) ;
          }
        }else if (kBoolFalse == test_0) {
          var_searching = GALGAS_bool (false) ;
        }
      }
    }
  }
  ioArgument_ioInclusionSet.addAssign_operation (GALGAS_string ("getter-").add_operation (var_baseType.reader_key (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)).add_operation (GALGAS_string ("-"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)).add_operation (constinArgument_inReaderName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 702)) ;
  categoryMethod_addHeaderFileName (constinArgument_inReceiverType, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 703)) ;
  cEnumerator_formalInputParameterListForGeneration enumerator_29779 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_29779.hasCurrentObject ()) {
    categoryMethod_addHeaderFileName (enumerator_29779.current_mFormalArgumentType (HERE), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 705)) ;
    enumerator_29779.gotoNextObject () ;
  }
  outArgument_outGeneratedCode = GALGAS_string ("static GALGAS_").add_operation (constinArgument_inResultTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 708)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)).add_operation (GALGAS_string (" categoryReader_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 708)) ;
  outArgument_outGeneratedCode.dotAssign_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 709)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709)).add_operation (constinArgument_inReaderName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 709)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 709)) ;
  GALGAS_uint var_colRef = outArgument_outGeneratedCode.reader_currentColumn (SOURCE_FILE ("semanticGeneration.galgas", 710)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 712)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 712))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 712)) ;
  }else if (kBoolFalse == test_2) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const cPtr_").add_operation (constinArgument_inBaseClassName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 714)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 714)).add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 714))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 714)) ;
  }
  GALGAS_bool var_currentObjectIsUnused = var_unusedVariableCppNameSet.reader_hasKey (GALGAS_string ("object") COMMA_SOURCE_FILE ("semanticGeneration.galgas", 716)) ;
  const enumGalgasBool test_3 = var_currentObjectIsUnused.boolEnum () ;
  if (kBoolTrue == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* inObject */")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 718)) ;
  }else if (kBoolFalse == test_3) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("inObject")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 720)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 722)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 723)) ;
  }
  cEnumerator_formalInputParameterListForGeneration enumerator_30686 (constinArgument_inFormalArgumentList, kEnumeration_up) ;
  while (enumerator_30686.hasCurrentObject ()) {
    const enumGalgasBool test_4 = enumerator_30686.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("const GALGAS_").add_operation (enumerator_30686.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 727)).add_operation (GALGAS_string (" & "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 727))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 727)) ;
    }else if (kBoolFalse == test_4) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("GALGAS_").add_operation (enumerator_30686.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 729)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 729))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 729)) ;
    }
    const enumGalgasBool test_5 = var_unusedVariableCppNameSet.reader_hasKey (enumerator_30686.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 731)).boolEnum () ;
    if (kBoolTrue == test_5) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (enumerator_30686.current_mFormalArgumentCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 732)) ;
    }else if (kBoolFalse == test_5) {
      outArgument_outGeneratedCode.dotAssign_operation (enumerator_30686.current_mFormalArgumentCppName (HERE)  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 734)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (",\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 736)) ;
    {
    outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 737)) ;
    }
    enumerator_30686.gotoNextObject () ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (constinArgument_inCompilerTypeName.add_operation (GALGAS_string (" * "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 740))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 740)) ;
  const enumGalgasBool test_6 = var_unusedVariableCppNameSet.reader_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)) COMMA_SOURCE_FILE ("semanticGeneration.galgas", 741)).boolEnum () ;
  if (kBoolTrue == test_6) {
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("/* ").add_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 742)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 742)).add_operation (GALGAS_string (" */"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 742))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 742)) ;
  }else if (kBoolFalse == test_6) {
    outArgument_outGeneratedCode.dotAssign_operation (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 744))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 744)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 746)) ;
  {
  outArgument_outGeneratedCode.modifier_appendSpacesUntilColumn (var_colRef, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 747)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("COMMA_UNUSED_LOCATION_ARGS)")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 748)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string (" {\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 749)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  GALGAS_").add_operation (constinArgument_inResultTypeName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 751)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 751)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 751)).add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 752)).add_operation (GALGAS_string (" ; // Returned variable\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 752))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 751)) ;
  const enumGalgasBool test_7 = var_currentObjectIsUnused.operator_not (SOURCE_FILE ("semanticGeneration.galgas", 754)).boolEnum () ;
  if (kBoolTrue == test_7) {
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, constinArgument_inBaseClassName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_8) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  const cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 756)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 756)).add_operation (GALGAS_string (" * object = inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 756))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 756)) ;
    }else if (kBoolFalse == test_8) {
      outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  const cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 758)).add_operation (GALGAS_string (" * object = (const cPtr_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 758)).add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 758)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 758)).add_operation (GALGAS_string (" *) inObject ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 758))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 758)) ;
    }
    outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  macroValidSharedObject (object, cPtr_").add_operation (var_className.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 760)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 760)).add_operation (GALGAS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 760))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 760)) ;
  }
  outArgument_outGeneratedCode.dotAssign_operation (var_routineBody  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 762)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("//---\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 764)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("  return ").add_operation (constinArgument_inResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 765)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 765))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 765)) ;
  outArgument_outGeneratedCode.dotAssign_operation (GALGAS_string ("}\n"
    "\n")  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 767)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                        Filewrapper 'typeGenerationTemplate'                                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

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


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'typeGenerationTemplate unifiedClassBodyForType'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_unifiedClassBodyForType (C_Compiler * inCompiler,
                                                                                  const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                  const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                  const GALGAS_bool & /* in_IS_5F_CONCRETE */,
                                                                                  const GALGAS_constructorMap & in_CONSTRUCTOR_5F_MAP,
                                                                                  const GALGAS_getterMap & in_READER_5F_MAP,
                                                                                  const GALGAS_setterMap & in_MODIFIER_5F_MAP,
                                                                                  const GALGAS_instanceMethodMap & in_INSTANCE_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_classMethodMap & in_CLASS_5F_METHOD_5F_MAP,
                                                                                  const GALGAS_enumerationDescriptorList & in_ENUMERATION_5F_DESCRIPTOR_5F_LIST,
                                                                                  const GALGAS_uint & in_SUPPORTED_5F_OPERATORS,
                                                                                  const GALGAS_functionSignature & in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy & in_ENUMERATED_5F_OBJECT_5F_TYPE
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//-- Start of generic part --*\n"
    "\n"
    "//--------------------------------- Object cloning\n"
    "  protected : virtual AC_GALGAS_root * clonedObject (void) const ;\n"
    "\n"
    "//--------------------------------- Object extraction\n"
    "  public : static GALGAS_" ;
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_CONSTRUCTOR_5F_MAP.reader_count (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 12)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "//--------------------------------- GALGAS constructors\n" ;
    GALGAS_uint index_515_ (0) ;
    if (in_CONSTRUCTOR_5F_MAP.isValid ()) {
      cEnumerator_constructorMap enumerator_515 (in_CONSTRUCTOR_5F_MAP, kEnumeration_up) ;
      while (enumerator_515.hasCurrentObject ()) {
        result << "  public : static GALGAS_" ;
        result << enumerator_515.current_mReturnedType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " constructor_" ;
        result << enumerator_515.current_lkey (HERE).reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).reader_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 15)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        GALGAS_uint index_701_IDX (0) ;
        if (enumerator_515.current_mArgumentTypeList (HERE).isValid ()) {
          cEnumerator_functionSignature enumerator_701 (enumerator_515.current_mArgumentTypeList (HERE), kEnumeration_up) ;
          while (enumerator_701.hasCurrentObject ()) {
            result << "const class GALGAS_" ;
            result << enumerator_701.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            result << " & inOperand" ;
            result << index_701_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 17)).stringValue () ;
            if (enumerator_701.hasNextObject ()) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
            }
            index_701_IDX.increment () ;
            enumerator_701.gotoNextObject () ;
          }
        }
        const enumGalgasBool test_1 = enumerator_515.current_mHasCompilerArgument (HERE).operator_and (GALGAS_bool (kIsStrictSup, enumerator_515.current_mArgumentTypeList (HERE).reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 20)).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "class C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS) ;\n"
            "\n" ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = enumerator_515.current_mHasCompilerArgument (HERE).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "C_Compiler * inCompiler\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
            result << "COMMA_LOCATION_ARGS) ;\n"
              "\n" ;
          }else if (kBoolFalse == test_2) {
            const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, enumerator_515.current_mArgumentTypeList (HERE).reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
        index_515_.increment () ;
        enumerator_515.gotoNextObject () ;
      }
    }
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_generateCopyConstructorAndAssignmentOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 34)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--------------------------------- Handle copy\n"
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
  }else if (kBoolFalse == test_4) {
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryShiftOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_5) {
    result << "//--------------------------------- << and >> shift operators\n"
      "public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " left_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n"
      "public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " right_shift_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_uint inShiftOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_5) {
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_plusEqualOperatorWithExpression (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 48)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//--------------------------------- += operator (with expression)\n"
      "  public : VIRTUAL_IN_DEBUG void dotAssign_operation (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " inOperand\n"
      "                                                      COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_6) {
  }
  const enumGalgasBool test_7 = GALGAS_bool (kIsStrictSup, in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 54)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//--------------------------------- += operator (with list of field expressions)\n"
      "  public : VIRTUAL_IN_DEBUG void addAssign_operation (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2583_IDX (0) ;
    if (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_functionSignature enumerator_2583 (in_ADD_5F_ASSIGN_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_2583.hasCurrentObject ()) {
        result << "const class GALGAS_" ;
        result << enumerator_2583.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 58)).stringValue () ;
        result << " & inOperand" ;
        result << index_2583_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 58)).stringValue () ;
        if (enumerator_2583.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_2583_IDX.increment () ;
        enumerator_2583.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_plusEqualOperatorWithFieldListNeedsCompilerArg (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 61)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 61)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler" ;
    }else if (kBoolFalse == test_8) {
    }
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n" ;
  }else if (kBoolFalse == test_7) {
  }
  const enumGalgasBool test_9 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryAndOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 68)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 68)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_9) {
    result << "//--------------------------------- & operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_and (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_9) {
  }
  const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryOrOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 74)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 74)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_10) {
    result << "//--------------------------------- | operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_or (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_10) {
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryXorOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 80)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 80)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "//--------------------------------- ^ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_xor (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_11) {
  }
  const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_unaryNotOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 86)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 86)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "//--------------------------------- not operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_not (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_12) {
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_unaryTildeOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 91)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << "//--------------------------------- ~ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_tilde (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_13) {
  }
  const enumGalgasBool test_14 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryConcatOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 96)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 96)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//--------------------------------- . (concat) operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_concat (" ;
    columnMarker = result.currentColumn () ;
    result << "const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryAddOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 102)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 102)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_15) {
    result << "//--------------------------------- + operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  }else if (kBoolFalse == test_15) {
  }
  const enumGalgasBool test_16 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryAddOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 109)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 109)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//--------------------------------- &+ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " add_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binarySubOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 114)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 114)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_17) {
    result << "//--------------------------------- &- operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " substract_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_17) {
  }
  const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binarySubOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 119)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 119)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_18) {
    result << "//--------------------------------- - operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  }else if (kBoolFalse == test_18) {
  }
  const enumGalgasBool test_19 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryMulOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 126)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_19) {
    result << "//--------------------------------- * operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  }else if (kBoolFalse == test_19) {
  }
  const enumGalgasBool test_20 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryMulOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 133)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_20) {
    result << "//--------------------------------- &* operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " multiply_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_20) {
  }
  const enumGalgasBool test_21 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryDivOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 138)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_21) {
    result << "//--------------------------------- / operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  }else if (kBoolFalse == test_21) {
  }
  const enumGalgasBool test_22 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryDivOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 145)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 145)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_22) {
    result << "//--------------------------------- &/ operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " divide_operation_no_ovf (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_22) {
  }
  const enumGalgasBool test_23 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_binaryModOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 150)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_23) {
    result << "//--------------------------------- mod operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
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
  }else if (kBoolFalse == test_23) {
  }
  const enumGalgasBool test_24 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_unaryMinusOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 157)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_24) {
    result << "//--------------------------------- unary - operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_24) {
  }
  const enumGalgasBool test_25 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_unaryMinusOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 163)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 163)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_25) {
    result << "//--------------------------------- unary &- operator\n"
      "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " operator_unary_minus_no_ovf (void) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_25) {
  }
  const enumGalgasBool test_26 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_incDecOperator (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 168)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 168)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_26) {
    result << "//--------------------------------- ++, -- operators\n"
      "  public : VIRTUAL_IN_DEBUG void increment_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n"
      "  public : VIRTUAL_IN_DEBUG void decrement_operation (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_26) {
  }
  const enumGalgasBool test_27 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_incDecOperatorNoOVF (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 175)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 175)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_27) {
    result << "//--------------------------------- &++, &-- operators\n"
      "  public : VIRTUAL_IN_DEBUG void increment_operation_no_overflow (void) ;\n"
      "\n"
      "  public : VIRTUAL_IN_DEBUG void decrement_operation_no_overflow (void) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_27) {
  }
  const enumGalgasBool test_28 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_generateDescriptionReaderUtilityMethod (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 180)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 180)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_28) {
    result << "//--------------------------------- Implementation of reader 'description'\n"
      "  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
      "                                              const int32_t inIndentation) const ;\n" ;
  }else if (kBoolFalse == test_28) {
  }
  const enumGalgasBool test_29 = GALGAS_bool (kIsEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_doNotGenererateObjectCompare (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 186)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 186)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_29) {
    result << "//--------------------------------- Comparison\n"
      "  public : typeComparisonResult objectCompare (const GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " & inOperand) const ;\n" ;
  }else if (kBoolFalse == test_29) {
  }
  result << "\n"
    "//--------------------------------- Setters\n" ;
  GALGAS_uint index_8850_ (0) ;
  if (in_MODIFIER_5F_MAP.isValid ()) {
    cEnumerator_setterMap enumerator_8850 (in_MODIFIER_5F_MAP, kEnumeration_up) ;
    while (enumerator_8850.hasCurrentObject ()) {
      const enumGalgasBool test_30 = GALGAS_bool (kIsEqual, enumerator_8850.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 196)))).boolEnum () ;
      if (kBoolTrue == test_30) {
        const enumGalgasBool test_31 = GALGAS_bool (kIsEqual, enumerator_8850.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_8850.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)))).operator_or (GALGAS_bool (kIsEqual, enumerator_8850.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)).operator_or (GALGAS_bool (kIsEqual, enumerator_8850.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 197)).boolEnum () ;
        if (kBoolTrue == test_31) {
          result << "  public : VIRTUAL_IN_DEBUG void modifier_" ;
          result << enumerator_8850.current_lkey (HERE).reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 198)).reader_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 198)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_9220_IDX (0) ;
          if (enumerator_8850.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_9220 (enumerator_8850.current_mParameterList (HERE), kEnumeration_up) ;
            while (enumerator_9220.hasCurrentObject ()) {
              const enumGalgasBool test_32 = GALGAS_bool (kIsEqual, enumerator_9220.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 200)))).boolEnum () ;
              if (kBoolTrue == test_32) {
                result << "class GALGAS_" ;
                result << enumerator_9220.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 201)).stringValue () ;
                result << " constinArgument" ;
                result << index_9220_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 201)).stringValue () ;
              }else if (kBoolFalse == test_32) {
                const enumGalgasBool test_33 = GALGAS_bool (kIsEqual, enumerator_9220.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 202)))).boolEnum () ;
                if (kBoolTrue == test_33) {
                  result << "class GALGAS_" ;
                  result << enumerator_9220.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 203)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_9220_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 203)).stringValue () ;
                }else if (kBoolFalse == test_33) {
                  const enumGalgasBool test_34 = GALGAS_bool (kIsEqual, enumerator_9220.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 204)))).boolEnum () ;
                  if (kBoolTrue == test_34) {
                    result << "class GALGAS_" ;
                    result << enumerator_9220.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 205)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_9220_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 205)).stringValue () ;
                  }else if (kBoolFalse == test_34) {
                    result << "class GALGAS_" ;
                    result << enumerator_9220.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 207)).stringValue () ;
                    result << " inArgument" ;
                    result << index_9220_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 207)).stringValue () ;
                  }
                }
              }
              if (enumerator_9220.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_9220_IDX.increment () ;
              enumerator_9220.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_35 = GALGAS_bool (kIsEqual, enumerator_8850.current_mParameterList (HERE).reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 211)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_35) {
            const enumGalgasBool test_36 = enumerator_8850.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_36) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_36) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_35) {
            const enumGalgasBool test_37 = enumerator_8850.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_37) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_37) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") ;\n"
            "\n" ;
        }else if (kBoolFalse == test_31) {
        }
      }else if (kBoolFalse == test_30) {
      }
      index_8850_.increment () ;
      enumerator_8850.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Instance Methods\n" ;
  GALGAS_uint index_10526_ (0) ;
  if (in_INSTANCE_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_instanceMethodMap enumerator_10526 (in_INSTANCE_5F_METHOD_5F_MAP, kEnumeration_up) ;
    while (enumerator_10526.hasCurrentObject ()) {
      const enumGalgasBool test_38 = GALGAS_bool (kIsEqual, enumerator_10526.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 234)))).boolEnum () ;
      if (kBoolTrue == test_38) {
        const enumGalgasBool test_39 = GALGAS_bool (kIsEqual, enumerator_10526.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_10526.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)))).operator_or (GALGAS_bool (kIsEqual, enumerator_10526.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).operator_or (GALGAS_bool (kIsEqual, enumerator_10526.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 235)).boolEnum () ;
        if (kBoolTrue == test_39) {
          result << "  public : VIRTUAL_IN_DEBUG void method_" ;
          result << enumerator_10526.current_lkey (HERE).reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 236)).reader_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 236)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_10894_IDX (0) ;
          if (enumerator_10526.current_mParameterList (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_10894 (enumerator_10526.current_mParameterList (HERE), kEnumeration_up) ;
            while (enumerator_10894.hasCurrentObject ()) {
              const enumGalgasBool test_40 = GALGAS_bool (kIsEqual, enumerator_10894.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 238)))).boolEnum () ;
              if (kBoolTrue == test_40) {
                result << "class GALGAS_" ;
                result << enumerator_10894.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 239)).stringValue () ;
                result << " constinArgument" ;
                result << index_10894_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 239)).stringValue () ;
              }else if (kBoolFalse == test_40) {
                const enumGalgasBool test_41 = GALGAS_bool (kIsEqual, enumerator_10894.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 240)))).boolEnum () ;
                if (kBoolTrue == test_41) {
                  result << "class GALGAS_" ;
                  result << enumerator_10894.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 241)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_10894_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 241)).stringValue () ;
                }else if (kBoolFalse == test_41) {
                  const enumGalgasBool test_42 = GALGAS_bool (kIsEqual, enumerator_10894.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 242)))).boolEnum () ;
                  if (kBoolTrue == test_42) {
                    result << "class GALGAS_" ;
                    result << enumerator_10894.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 243)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_10894_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 243)).stringValue () ;
                  }else if (kBoolFalse == test_42) {
                    result << "class GALGAS_" ;
                    result << enumerator_10894.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 245)).stringValue () ;
                    result << " inArgument" ;
                    result << index_10894_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 245)).stringValue () ;
                  }
                }
              }
              if (enumerator_10894.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_10894_IDX.increment () ;
              enumerator_10894.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_43 = GALGAS_bool (kIsEqual, enumerator_10526.current_mParameterList (HERE).reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 249)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_43) {
            const enumGalgasBool test_44 = enumerator_10526.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_44) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_44) {
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_43) {
            const enumGalgasBool test_45 = enumerator_10526.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_45) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_45) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") const ;\n"
            "\n" ;
        }else if (kBoolFalse == test_39) {
        }
      }else if (kBoolFalse == test_38) {
      }
      index_10526_.increment () ;
      enumerator_10526.gotoNextObject () ;
    }
  }
  result << "//--------------------------------- Class Methods\n" ;
  GALGAS_uint index_12199_ (0) ;
  if (in_CLASS_5F_METHOD_5F_MAP.isValid ()) {
    cEnumerator_classMethodMap enumerator_12199 (in_CLASS_5F_METHOD_5F_MAP, kEnumeration_up) ;
    while (enumerator_12199.hasCurrentObject ()) {
      result << "  public : static void class_method_" ;
      result << enumerator_12199.current_lkey (HERE).reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).reader_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 271)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      GALGAS_uint index_12327_IDX (0) ;
      if (enumerator_12199.current_mParameterList (HERE).isValid ()) {
        cEnumerator_formalParameterSignature enumerator_12327 (enumerator_12199.current_mParameterList (HERE), kEnumeration_up) ;
        while (enumerator_12327.hasCurrentObject ()) {
          const enumGalgasBool test_46 = GALGAS_bool (kIsEqual, enumerator_12327.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 273)))).boolEnum () ;
          if (kBoolTrue == test_46) {
            result << "class GALGAS_" ;
            result << enumerator_12327.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 274)).stringValue () ;
            result << " constinArgument" ;
            result << index_12327_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 274)).stringValue () ;
          }else if (kBoolFalse == test_46) {
            const enumGalgasBool test_47 = GALGAS_bool (kIsEqual, enumerator_12327.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 275)))).boolEnum () ;
            if (kBoolTrue == test_47) {
              result << "class GALGAS_" ;
              result << enumerator_12327.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 276)).stringValue () ;
              result << " & ioArgument" ;
              result << index_12327_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 276)).stringValue () ;
            }else if (kBoolFalse == test_47) {
              const enumGalgasBool test_48 = GALGAS_bool (kIsEqual, enumerator_12327.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 277)))).boolEnum () ;
              if (kBoolTrue == test_48) {
                result << "class GALGAS_" ;
                result << enumerator_12327.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 278)).stringValue () ;
                result << " & outArgument" ;
                result << index_12327_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 278)).stringValue () ;
              }else if (kBoolFalse == test_48) {
                result << "class GALGAS_" ;
                result << enumerator_12327.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 280)).stringValue () ;
                result << " inArgument" ;
                result << index_12327_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 280)).stringValue () ;
              }
            }
          }
          if (enumerator_12327.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_12327_IDX.increment () ;
          enumerator_12327.gotoNextObject () ;
        }
      }
      const enumGalgasBool test_49 = GALGAS_bool (kIsEqual, enumerator_12199.current_mParameterList (HERE).reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 284)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_49) {
        const enumGalgasBool test_50 = enumerator_12199.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_50) {
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_50) {
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "LOCATION_ARGS" ;
        }
      }else if (kBoolFalse == test_49) {
        const enumGalgasBool test_51 = enumerator_12199.current_mHasCompilerArgument (HERE).boolEnum () ;
        if (kBoolTrue == test_51) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "C_Compiler * inCompiler\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }else if (kBoolFalse == test_51) {
          result << "\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "COMMA_LOCATION_ARGS" ;
        }
      }
      result << ") ;\n"
        "\n" ;
      index_12199_.increment () ;
      enumerator_12199.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Getters\n" ;
  GALGAS_uint index_13493_ (0) ;
  if (in_READER_5F_MAP.isValid ()) {
    cEnumerator_getterMap enumerator_13493 (in_READER_5F_MAP, kEnumeration_up) ;
    while (enumerator_13493.hasCurrentObject ()) {
      const enumGalgasBool test_52 = GALGAS_bool (kIsEqual, enumerator_13493.current_mKind (HERE).objectCompare (GALGAS_methodKind::constructor_definedAsMember (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 305)))).boolEnum () ;
      if (kBoolTrue == test_52) {
        const enumGalgasBool test_53 = GALGAS_bool (kIsEqual, enumerator_13493.current_mErrorMessage (HERE).objectCompare (GALGAS_string::makeEmptyString ())).operator_and (GALGAS_bool (kIsEqual, enumerator_13493.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isAbstract (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)))).operator_or (GALGAS_bool (kIsEqual, enumerator_13493.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasic (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)).operator_or (GALGAS_bool (kIsEqual, enumerator_13493.current_mQualifier (HERE).objectCompare (GALGAS_methodQualifier::constructor_isBasicFinal (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)))) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 306)).boolEnum () ;
        if (kBoolTrue == test_53) {
          result << "  public : VIRTUAL_IN_DEBUG class GALGAS_" ;
          result << enumerator_13493.current_mReturnedType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).stringValue () ;
          result << " reader_" ;
          result << enumerator_13493.current_lkey (HERE).reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).reader_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 307)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_13928_IDX (0) ;
          if (enumerator_13493.current_mArgumentTypeList (HERE).isValid ()) {
            cEnumerator_functionSignature enumerator_13928 (enumerator_13493.current_mArgumentTypeList (HERE), kEnumeration_up) ;
            while (enumerator_13928.hasCurrentObject ()) {
              result << "const class GALGAS_" ;
              result << enumerator_13928.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).stringValue () ;
              result << " & constinOperand" ;
              result << index_13928_IDX.reader_string (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 309)).stringValue () ;
              if (enumerator_13928.hasNextObject ()) {
                result << ",\n" ;
                result.appendSpacesUntilColumn (columnMarker) ;
              }
              index_13928_IDX.increment () ;
              enumerator_13928.gotoNextObject () ;
            }
          }
          const enumGalgasBool test_54 = GALGAS_bool (kIsEqual, enumerator_13493.current_mArgumentTypeList (HERE).reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 312)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_54) {
            const enumGalgasBool test_55 = enumerator_13493.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_55) {
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_55) {
              result << "LOCATION_ARGS" ;
            }
          }else if (kBoolFalse == test_54) {
            const enumGalgasBool test_56 = enumerator_13493.current_mHasCompilerArgument (HERE).boolEnum () ;
            if (kBoolTrue == test_56) {
              result << ",\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "C_Compiler * inCompiler\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }else if (kBoolFalse == test_56) {
              result << "\n" ;
              result.appendSpacesUntilColumn (columnMarker) ;
              result << "COMMA_LOCATION_ARGS" ;
            }
          }
          result << ") const ;\n"
            "\n" ;
        }else if (kBoolFalse == test_53) {
        }
      }else if (kBoolFalse == test_52) {
      }
      index_13493_.increment () ;
      enumerator_13493.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--------------------------------- Introspection\n"
    "  public : VIRTUAL_IN_DEBUG const C_galgas_type_descriptor * staticTypeDescriptor (void) const ;\n" ;
  const enumGalgasBool test_57 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_generateEnumerationHelperMethods (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 334)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_57) {
    result << "//--------------------------------- Enumeration helper methods\n"
      "  protected : VIRTUAL_IN_DEBUG void populateEnumerationArray (capCollectionElementArray & inEnumerationArray,\n"
      "                                                              const typeEnumerationOrder inOrder) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_57) {
  }
  const enumGalgasBool test_58 = GALGAS_bool (kIsNotEqual, in_SUPPORTED_5F_OPERATORS.operator_and (function_supportWithAccessor (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 341)) COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 341)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_58) {
    result << "  public : VIRTUAL_IN_DEBUG cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " * readWriteAccessForWithInstruction (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_string & inKey\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_58) {
  }
  const enumGalgasBool test_59 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 347)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_59) {
    result << "//--------------------------------- Friend\n"
      "\n"
      "  friend class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n" ;
  }else if (kBoolFalse == test_59) {
  }
  result << " \n"
    "} ; // End of GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " class\n"
    "\n" ;
  const enumGalgasBool test_60 = GALGAS_bool (kIsStrictSup, in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.reader_length (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 354)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_60) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "//   Enumerator declaration                                                                                            *\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "class cEnumerator_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " : public cGenericAbstractEnumerator {\n"
      "  public : cEnumerator_" ;
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
    GALGAS_uint index_16190_ (0) ;
    if (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST.isValid ()) {
      cEnumerator_enumerationDescriptorList enumerator_16190 (in_ENUMERATION_5F_DESCRIPTOR_5F_LIST, kEnumeration_up) ;
      while (enumerator_16190.hasCurrentObject ()) {
        result << "  public : class GALGAS_" ;
        result << enumerator_16190.current_mEnumeratedType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 365)).stringValue () ;
        result << " current_" ;
        result << enumerator_16190.current_mEnumerationName (HERE).reader_identifierRepresentation (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 365)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
        index_16190_.increment () ;
        enumerator_16190.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_61 = in_ENUMERATED_5F_OBJECT_5F_TYPE.reader_isNull (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 367)).operator_not (SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 367)).boolEnum () ;
    if (kBoolTrue == test_61) {
      result << "//--- Current element access\n"
        "  public : class GALGAS_" ;
      result << in_ENUMERATED_5F_OBJECT_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("unified-class-body-for-type.h.galgasTemplate", 369)).stringValue () ;
      result << " current (LOCATION_ARGS) const ;\n" ;
    }else if (kBoolFalse == test_61) {
    }
    result << "} ;\n" ;
  }else if (kBoolFalse == test_60) {
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "extern const C_galgas_type_descriptor kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'typeGenerationTemplate genericTypeImplementation'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_genericTypeImplementation (C_Compiler * inCompiler,
                                                                                    const GALGAS_string & in_TYPE_5F_NAME,
                                                                                    const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_SUPER_5F_TYPE_5F_INDEX,
                                                                                    const GALGAS_uint & /* in_SUPPORTED_5F_OPERATORS */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" type"), inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  const enumGalgasBool test_0 = in_SUPER_5F_TYPE_5F_INDEX.reader_isNull (SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "NULL" ;
  }else if (kBoolFalse == test_0) {
    result << "& kTypeDescriptor_GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_INDEX.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("generic-type.cpp.galgasTemplate", 9)).stringValue () ;
  }
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "const C_galgas_type_descriptor * GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::staticTypeDescriptor (void) const {\n"
    "  return & kTypeDescriptor_GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate externTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_externTypeHeader_31_ (C_Compiler * inCompiler,
                                                                               const GALGAS_string & in_TYPE_5F_NAME,
                                                                               const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                               const GALGAS_string & in_PRE_5F_DECLARATION,
                                                                               const GALGAS_string & in_CODE
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" extern type"), inCompiler COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_extern_type.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Predeclarations (from GALGAS extern type declaration                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_PRE_5F_DECLARATION.stringValue () ;
  result << "\n"
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
    "//---\n"
    "  public : virtual bool isValid (void) const ;\n"
    "  public : virtual void drop (void) ;\n"
    "\n"
    "//--- For log instruction\n"
    "  public : virtual void description (C_String & ioString,\n"
    "                                     const int32_t inIndentation) const ;\n"
    "\n"
    "//--- Code (from GALGAS extern type declaration)\n" ;
  result << in_CODE.stringValue () ;
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate graphTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_graph.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_graph {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate graphTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_graphTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & /* in_TYPE */,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy & in_ASSOCIATED_5F_LIST_5F_TYPE,
                                                                                          const GALGAS_graphInsertModifierList & in_INSERT_5F_MODIFIER_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("'@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("' graph"), inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "AC_GALGAS_graph () {\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_996_ (0) ;
  if (in_INSERT_5F_MODIFIER_5F_LIST.isValid ()) {
    cEnumerator_graphInsertModifierList enumerator_996 (in_INSERT_5F_MODIFIER_5F_LIST, kEnumeration_up) ;
    while (enumerator_996.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::modifier_" ;
      result << enumerator_996.current_mInsertModifierName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 22)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_1313_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)).isValid ()) {
        cEnumerator_functionSignature enumerator_1313 (in_ASSOCIATED_5F_LIST_5F_TYPE.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 23)), kEnumeration_up) ;
        while (enumerator_1313.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_1313.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          result << " inArgument_" ;
          result << index_1313_IDX.reader_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 24)).stringValue () ;
          index_1313_IDX.increment () ;
          enumerator_1313.gotoNextObject () ;
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n"
        "  capCollectionElement attributes ;\n"
        "  GALGAS_" ;
      result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 29)).stringValue () ;
      result << "::makeAttributesFromObjects (attributes" ;
      GALGAS_uint index_1693_IDX (0) ;
      if (in_ASSOCIATED_5F_LIST_5F_TYPE.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)).isValid ()) {
        cEnumerator_functionSignature enumerator_1693 (in_ASSOCIATED_5F_LIST_5F_TYPE.reader_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 30)), kEnumeration_up) ;
        while (enumerator_1693.hasCurrentObject ()) {
          result << ", inArgument_" ;
          result << index_1693_IDX.reader_string (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 31)).stringValue () ;
          index_1693_IDX.increment () ;
          enumerator_1693.gotoNextObject () ;
        }
      }
      result << " COMMA_THERE) ;\n"
        "  const char * kErrorMessage = " ;
      result << enumerator_996.current_mInsertErrorMessage (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 34)).stringValue () ;
      result << " ;\n"
        "  internalAddNode (inKey, kErrorMessage, attributes, inCompiler COMMA_THERE) ;\n"
        "}\n"
        "\n" ;
      index_996_.increment () ;
      enumerator_996.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_topologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 43)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 45)).stringValue () ;
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
    "  cSharedList * sortedList = NULL ;\n"
    "  cSharedList * unsortedList = NULL ;\n"
    "  internalTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 52)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (unsortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 54)).stringValue () ;
  result << "::detachSharedList (sortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 55)).stringValue () ;
  result << "::detachSharedList (unsortedList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_depthFirstTopologicalSort (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 60)).stringValue () ;
  result << " & outSortedList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outSortedKeyList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 62)).stringValue () ;
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
    "  cSharedList * sortedList = NULL ;\n"
    "  cSharedList * unsortedList = NULL ;\n"
    "  internalDepthFirstTopologicalSort (sortedList, outSortedKeyList, unsortedList, outUnsortedKeyList, inCompiler COMMA_THERE) ;\n"
    "  outSortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 69)).stringValue () ;
  result << " (sortedList) ;\n"
    "  outUnsortedList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 70)).stringValue () ;
  result << " (unsortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 71)).stringValue () ;
  result << "::detachSharedList (sortedList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 72)).stringValue () ;
  result << "::detachSharedList (unsortedList) ;\n"
    "}\n"
    "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_reversedGraph (LOCATION_ARGS) const {\n"
    "  GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " result ;\n"
    "  result.reversedGraphFromGraph (*this COMMA_THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_circularities (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 86)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  cSharedList * infoList = NULL ;\n"
    "  internalFindCircularities (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 91)).stringValue () ;
  result << " (infoList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 92)).stringValue () ;
  result << "::detachSharedList (infoList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoSuccessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 97)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  cSharedList * infoList = NULL ;\n"
    "  internalNodesWithNoSuccessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 102)).stringValue () ;
  result << " (infoList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 103)).stringValue () ;
  result << "::detachSharedList (infoList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::method_nodesWithNoPredecessor (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 108)).stringValue () ;
  result << " & outInfoList,\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "GALGAS_lstringlist & outKeyList\n"
    "                       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) const {\n"
    "  cSharedList * infoList = NULL ;\n"
    "  internalNodesWithNoPredecessor (infoList, outKeyList COMMA_THERE) ;\n"
    "  outInfoList = GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 113)).stringValue () ;
  result << " (infoList) ;\n"
    "  GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_graph.cpp.galgasTemplate", 114)).stringValue () ;
  result << "::detachSharedList (infoList) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_subgraphFromNodes (" ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_lstringlist GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_accessibleNodesFromNodes (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstringlist & inStartKeyList,\n"
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
    "            GALGAS_stringset::constructor_emptySet (HERE),\n"
    "            inCompiler\n"
    "            COMMA_THERE) ;\n"
    "  if (resultingGraph.isValid ()) {\n"
    "    result = resultingGraph.reader_lkeyList (THERE) ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate arrayTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & /* in_ELEMENT_5F_TYPE_5F_IDENTIFIER */,
                                                                              const GALGAS_uint & /* in_DIMENSION */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_array.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_root {\n"
    "//--------------------------------- Default constructor\n"
    "  public : inline GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n"
    "  mSharedObject (NULL) {\n"
    "  }\n"
    "\n"
    "//--------------------------------- Virtual destructor\n"
    "  public : virtual ~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- Handle copy\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject) ;\n"
    "\n"
    "//--- Insulate\n"
    "  private : VIRTUAL_IN_DEBUG void insulate (LOCATION_ARGS) ;\n"
    "\n"
    "//--- isValid\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const {\n"
    "    return NULL != mSharedObject ;\n"
    "  }\n"
    "\n"
    "//--- Drop\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--- Private attribute\n"
    "  private : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mSharedObject ;\n"
    "\n"
    "//--- Drop\n"
    "  public : VIRTUAL_IN_DEBUG void description (C_String & ioString,\n"
    "                                              const int32_t inIndentation) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate arrayTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_arrayTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_ELEMENT_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_uint & in_DIMENSION,
                                                                                          const GALGAS_stringlist & in_DIMENSION_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" array"), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public C_SharedObject {\n"
    "  private : GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * mObjectArray ;\n" ;
  GALGAS_uint index_704_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_704 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_704.hasCurrentObject ()) {
      result << "  private : uint32_t mSize" ;
      result << enumerator_704.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_704_.increment () ;
      enumerator_704.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_839_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_839 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_839.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_839.current_mValue (HERE).stringValue () ;
      if (enumerator_839.hasNextObject ()) {
        result << ",\n" ;
      }
      index_839_.increment () ;
      enumerator_839.gotoNextObject () ;
    }
  }
  result << "\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "  public : cPtr_" ;
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
    "  public : virtual ~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "  private : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & operator = (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " &) ;\n"
    "\n"
    "//--- Comparison\n"
    "  public : VIRTUAL_IN_DEBUG typeComparisonResult objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const ;\n"
    "\n"
    "//--- \n" ;
  GALGAS_uint index_1454_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1454 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_1454.hasCurrentObject ()) {
      result << "  public : inline uint32_t size" ;
      result << enumerator_1454.current_mValue (HERE).stringValue () ;
      result << " (void) const { return mSize" ;
      result << enumerator_1454.current_mValue (HERE).stringValue () ;
      result << " ; }\n" ;
      index_1454_.increment () ;
      enumerator_1454.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n"
    "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " objectAtAbsoluteIndex (const int32_t inIndex) const ;\n"
    "\n"
    "  public : VIRTUAL_IN_DEBUG void setObjectAtAbsoluteIndex (const GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " & inObject,\n"
    "                                                           const int32_t inIndex) ;\n"
    "\n"
    "//--- \n"
    "  public : VIRTUAL_IN_DEBUG int32_t indexForIndexes (" ;
  GALGAS_uint index_1961_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1961 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_1961 = enumerator_1961.hasCurrentObject () ;
    if (nonEmpty_enumerator_1961) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_1961.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_1961.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_1961_.increment () ;
      enumerator_1961.gotoNextObject () ;
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
    "  public : VIRTUAL_IN_DEBUG void setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_2152_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2152 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2152.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_2152.current_mValue (HERE).stringValue () ;
      if (enumerator_2152.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2152_.increment () ;
      enumerator_2152.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_2443_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2443 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2443.hasCurrentObject ()) {
      result << "const uint32_t inSize" ;
      result << enumerator_2443.current_mValue (HERE).stringValue () ;
      if (enumerator_2443.hasNextObject ()) {
        result << ",\n"
          "                                                      " ;
      }
      index_2443_.increment () ;
      enumerator_2443.gotoNextObject () ;
    }
  }
  result << "    " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "C_SharedObject (THERE),\n"
    "mObjectArray (NULL),\n" ;
  GALGAS_uint index_2657_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2657 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2657.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_2657.current_mValue (HERE).stringValue () ;
      result << " (inSize" ;
      result << enumerator_2657.current_mValue (HERE).stringValue () ;
      result << ")" ;
      if (enumerator_2657.hasNextObject ()) {
        result << ",\n" ;
      }
      index_2657_.increment () ;
      enumerator_2657.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  macroMyNewArray (mObjectArray, GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ", " ;
  GALGAS_uint index_2816_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_2816 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_2816.hasCurrentObject ()) {
      result << " inSize" ;
      result << enumerator_2816.current_mValue (HERE).stringValue () ;
      if (enumerator_2816.hasNextObject ()) {
        result << " * " ;
      }
      index_2816_.increment () ;
      enumerator_2816.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  GALGAS_uint index_3185_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3185 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_3185.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3185.current_mValue (HERE).stringValue () ;
      result << " (inPointer->size" ;
      result << enumerator_3185.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_3185.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3185_.increment () ;
      enumerator_3185.gotoNextObject () ;
    }
  }
  result << " {\n"
    "  const uint32_t size = " ;
  GALGAS_uint index_3312_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3312 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_3312.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_3312.current_mValue (HERE).stringValue () ;
      if (enumerator_3312.hasNextObject ()) {
        result << " * " ;
      }
      index_3312_.increment () ;
      enumerator_3312.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static inline uint32_t " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_3734_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_3734 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_3734.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_3734.current_mValue (HERE).stringValue () ;
      if (enumerator_3734.hasNextObject ()) {
        result << ",\n" ;
      }
      index_3734_.increment () ;
      enumerator_3734.gotoNextObject () ;
    }
  }
  GALGAS_uint index_3839_ (0) ;
  if (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)).isValid ()) {
    cEnumerator_stringlist enumerator_3839 (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 106)), kEnumeration_up) ;
    while (enumerator_3839.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_3839.current_mValue (HERE).stringValue () ;
      index_3839_.increment () ;
      enumerator_3839.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "  uint32_t idx = inIndex0 ;\n" ;
  GALGAS_uint index_3966_ (0) ;
  if (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)).isValid ()) {
    cEnumerator_stringlist enumerator_3966 (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 112)), kEnumeration_up) ;
    while (enumerator_3966.hasCurrentObject ()) {
      result << "  idx *= inSize" ;
      result << enumerator_3966.current_mValue (HERE).stringValue () ;
      result << " ;\n"
        "  idx += inIndex" ;
      result << enumerator_3966.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_3966_.increment () ;
      enumerator_3966.gotoNextObject () ;
    }
  }
  result << "  return idx ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "int32_t cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_4258_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4258 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_4258.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inIndex" ;
      result << enumerator_4258.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_4258_.increment () ;
      enumerator_4258.gotoNextObject () ;
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
  GALGAS_uint index_4424_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4424 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_4424.hasCurrentObject ()) {
      result << "if (inIndex" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " >= size" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " ()) {\n"
        "    C_String s ;\n"
        "    s << \"array index " ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " : \" << cStringWithUnsigned (inIndex" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << ") << \" >= size \" << cStringWithUnsigned (size" ;
      result << enumerator_4424.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n"
        "    inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
      if (enumerator_4424.hasNextObject ()) {
        result << "  }else " ;
      }
      index_4424_.increment () ;
      enumerator_4424.gotoNextObject () ;
    }
  }
  result << "  }else{\n"
    "    result = (int32_t) " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_4799_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_4799 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_4799.hasCurrentObject ()) {
      result << "inIndex" ;
      result << enumerator_4799.current_mValue (HERE).stringValue () ;
      if (enumerator_4799.hasNextObject ()) {
        result << ", " ;
      }
      index_4799_.increment () ;
      enumerator_4799.gotoNextObject () ;
    }
  }
  GALGAS_uint index_4883_ (0) ;
  if (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)).isValid ()) {
    cEnumerator_stringlist enumerator_4883 (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 139)), kEnumeration_up) ;
    while (enumerator_4883.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_4883.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_4883_.increment () ;
      enumerator_4883.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectAtAbsoluteIndex (const int32_t inIndex) const {\n"
    "  return mObjectArray [inIndex] ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroMyDeleteArray (mObjectArray) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_5937_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_5937 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_5937.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const uint32_t inSize" ;
      result << enumerator_5937.current_mValue (HERE).stringValue () ;
      if (enumerator_5937.hasNextObject ()) {
        result << ",\n" ;
      }
      index_5937_.increment () ;
      enumerator_5937.gotoNextObject () ;
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
  GALGAS_uint index_6165_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6165 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6165.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_6165.current_mValue (HERE).stringValue () ;
      if (enumerator_6165.hasNextObject ()) {
        result << " * " ;
      }
      index_6165_.increment () ;
      enumerator_6165.gotoNextObject () ;
    }
  }
  result << ") ;\n" ;
  GALGAS_uint index_6234_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6234 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6234.hasCurrentObject ()) {
      result << "  uint32_t min" ;
      result << enumerator_6234.current_mValue (HERE).stringValue () ;
      result << " = uimin32 (size" ;
      result << enumerator_6234.current_mValue (HERE).stringValue () ;
      result << " (), inSize" ;
      result << enumerator_6234.current_mValue (HERE).stringValue () ;
      result << ") ;\n" ;
      index_6234_.increment () ;
      enumerator_6234.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6342_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6342 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6342.hasCurrentObject ()) {
      result << "  for (uint32_t i" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << "=0 ; i" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << "<min" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << " ; i" ;
      result << enumerator_6342.current_mValue (HERE).stringValue () ;
      result << "++) {\n" ;
      index_6342_.increment () ;
      enumerator_6342.gotoNextObject () ;
    }
  }
  result << "        const uint32_t idxSource = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6521_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6521 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6521.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6521.current_mValue (HERE).stringValue () ;
      if (enumerator_6521.hasNextObject ()) {
        result << ", " ;
      }
      index_6521_.increment () ;
      enumerator_6521.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6599_ (0) ;
  if (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)).isValid ()) {
    cEnumerator_stringlist enumerator_6599 (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 180)), kEnumeration_up) ;
    while (enumerator_6599.hasCurrentObject ()) {
      result << ", size" ;
      result << enumerator_6599.current_mValue (HERE).stringValue () ;
      result << " ()" ;
      index_6599_.increment () ;
      enumerator_6599.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        const uint32_t idxTarget = " ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "_computeIndex (" ;
  GALGAS_uint index_6726_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6726 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6726.hasCurrentObject ()) {
      result << "i" ;
      result << enumerator_6726.current_mValue (HERE).stringValue () ;
      if (enumerator_6726.hasNextObject ()) {
        result << ", " ;
      }
      index_6726_.increment () ;
      enumerator_6726.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6804_ (0) ;
  if (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)).isValid ()) {
    cEnumerator_stringlist enumerator_6804 (in_DIMENSION_5F_LIST.reader_subListFromIndex (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 181)), kEnumeration_up) ;
    while (enumerator_6804.hasCurrentObject ()) {
      result << ", inSize" ;
      result << enumerator_6804.current_mValue (HERE).stringValue () ;
      index_6804_.increment () ;
      enumerator_6804.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "        p [idxTarget] = mObjectArray [idxSource] ;\n" ;
  GALGAS_uint index_6912_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6912 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6912.hasCurrentObject ()) {
      result << "  }\n" ;
      index_6912_.increment () ;
      enumerator_6912.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6952_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_6952 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_6952.hasCurrentObject ()) {
      result << "  mSize" ;
      result << enumerator_6952.current_mValue (HERE).stringValue () ;
      result << " = inSize" ;
      result << enumerator_6952.current_mValue (HERE).stringValue () ;
      result << " ;\n" ;
      index_6952_.increment () ;
      enumerator_6952.gotoNextObject () ;
    }
  }
  result << "  macroMyDeleteArray (mObjectArray) ;\n"
    "  mObjectArray = p ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::~ GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::drop (void) {\n"
    "  macroDetachSharedObject (mSharedObject) ;\n"
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
  result << " & inSourceObject) :\n"
    "AC_GALGAS_root (),\n"
    "mSharedObject (NULL) {\n"
    "  macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
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
  result << " & inSourceObject) {\n"
    "  if (this != & inSourceObject) {\n"
    "    macroAssignSharedObject (mSharedObject, inSourceObject.mSharedObject) ;\n"
    "  }\n"
    "  return *this ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::constructor_new (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_8455_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8455 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_8455.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inSize" ;
      result << enumerator_8455.current_mValue (HERE).stringValue () ;
      if (enumerator_8455.hasNextObject ()) {
        result << ",\n" ;
      }
      index_8455_.increment () ;
      enumerator_8455.gotoNextObject () ;
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
  GALGAS_uint index_8616_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8616 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_8616.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8616.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      if (enumerator_8616.hasNextObject ()) {
        result << " && " ;
      }
      index_8616_.increment () ;
      enumerator_8616.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroMyNew (result.mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  GALGAS_uint index_8762_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_8762 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_8762.hasCurrentObject ()) {
      result << "inSize" ;
      result << enumerator_8762.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_8762.hasNextObject ()) {
        result << ", " ;
      }
      index_8762_.increment () ;
      enumerator_8762.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE)) ;\n"
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
  GALGAS_uint index_9321_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_9321 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_9321.hasCurrentObject ()) {
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "<< cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_9321.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_9321.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_9321_.increment () ;
      enumerator_9321.gotoNextObject () ;
    }
  }
  result << "             << \"] of @uint\" ;\n"
    "  }\n"
    "  ioString << \">\" ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_axisCount (UNUSED_LOCATION_ARGS) const {\n"
    "  GALGAS_uint result ;\n"
    "  if (isValid ()) {\n"
    "    result = GALGAS_uint (" ;
  result << in_DIMENSION.reader_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 263)).stringValue () ;
  result << ") ;\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_range GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_rangeForAxis (" ;
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
  result << in_DIMENSION.reader_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 276)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"reader @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_10452_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_10452 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_10452.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_10452.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_range (GALGAS_uint (0), GALGAS_uint (mSharedObject->size" ;
      result << enumerator_10452.current_mValue (HERE).stringValue () ;
      result << " ())) ;\n" ;
      index_10452_.increment () ;
      enumerator_10452.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_uint GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_sizeForAxis (" ;
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
  result << in_DIMENSION.reader_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 297)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"reader @ptrint sizeForAxis: argument >= dimension\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n" ;
  GALGAS_uint index_11284_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11284 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_11284.hasCurrentObject ()) {
      result << "    }else if (" ;
      result << enumerator_11284.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) {\n"
        "      result = GALGAS_uint (mSharedObject->size" ;
      result << enumerator_11284.current_mValue (HERE).stringValue () ;
      result << " ()) ;\n" ;
      index_11284_.increment () ;
      enumerator_11284.gotoNextObject () ;
    }
  }
  result << "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_bool GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_isValueValidAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_11653_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11653 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_11653.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_11653.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_11653_.increment () ;
      enumerator_11653.gotoNextObject () ;
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
  GALGAS_uint index_11838_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_11838 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_11838.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_11838.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_11838_.increment () ;
      enumerator_11838.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12038_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12038 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_12038.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_12038.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_12038_.increment () ;
      enumerator_12038.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_valueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_12593_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12593 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_12593.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint & inIndex" ;
      result << enumerator_12593.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_12593_.increment () ;
      enumerator_12593.gotoNextObject () ;
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
  GALGAS_uint index_12800_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_12800 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_12800.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_12800.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_12800_.increment () ;
      enumerator_12800.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_13000_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13000 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_13000.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_13000.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_13000_.increment () ;
      enumerator_13000.gotoNextObject () ;
    }
  }
  result << "                                                         inCompiler\n"
    "                                                         COMMA_THERE) ;\n"
    "    if (idx >= 0) {\n"
    "      result = mSharedObject->objectAtAbsoluteIndex (idx) ;\n"
    "      if (! result.isValid ()) {\n"
    "        C_String s ;\n"
    "        s << \"reader @ptrint valueAtIndex: object at index (\"" ;
  GALGAS_uint index_13407_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_13407 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_13407.hasCurrentObject ()) {
      result << "\n"
        "             << cStringWithUnsigned (mSharedObject->size" ;
      result << enumerator_13407.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_13407.hasNextObject ()) {
        result << " << \", \"" ;
      }
      index_13407_.increment () ;
      enumerator_13407.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::insulate (LOCATION_ARGS) {\n"
    "  if (isValid () && (mSharedObject->retainCount () > 1)) {\n"
    "    cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * p = NULL ;\n"
    "    macroMyNew (p, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (mSharedObject COMMA_THERE)) ;\n"
    "    macroAssignSharedObject (mSharedObject, p) ;\n"
    "    macroDetachSharedObject (p) ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::modifier_setValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_14460_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14460 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_14460.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_14460.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_14460_.increment () ;
      enumerator_14460.gotoNextObject () ;
    }
  }
  result << "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_14639_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14639 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_14639.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_14639.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_14639_.increment () ;
      enumerator_14639.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_14981_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_14981 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_14981.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_14981.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_14981_.increment () ;
      enumerator_14981.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::modifier_forceValueAtIndex (" ;
  columnMarker = result.currentColumn () ;
  result << "GALGAS_" ;
  result << in_ELEMENT_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " inValue,\n" ;
  GALGAS_uint index_15518_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15518 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_15518.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inIndex" ;
      result << enumerator_15518.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_15518_.increment () ;
      enumerator_15518.gotoNextObject () ;
    }
  }
  result << " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inValue.isValid ()" ;
  GALGAS_uint index_15692_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_15692 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_15692.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_15692.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_15692_.increment () ;
      enumerator_15692.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "  //--- Resize \?\n"
    "    const bool resize = " ;
  GALGAS_uint index_16016_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16016 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16016.hasCurrentObject ()) {
      result << "(inIndex" ;
      result << enumerator_16016.current_mValue (HERE).stringValue () ;
      result << ".uintValue () >= mSharedObject->size" ;
      result << enumerator_16016.current_mValue (HERE).stringValue () ;
      result << " ())" ;
      if (enumerator_16016.hasNextObject ()) {
        result << " || " ;
      }
      index_16016_.increment () ;
      enumerator_16016.gotoNextObject () ;
    }
  }
  result << " ;\n"
    "    if (resize) {\n" ;
  GALGAS_uint index_16155_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16155 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16155.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_16155.current_mValue (HERE).stringValue () ;
      result << " = uimax32 (mSharedObject->size" ;
      result << enumerator_16155.current_mValue (HERE).stringValue () ;
      result << " (), inIndex" ;
      result << enumerator_16155.current_mValue (HERE).stringValue () ;
      result << ".uintValue () + 1) ;\n" ;
      index_16155_.increment () ;
      enumerator_16155.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_16342_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16342 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16342.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_16342.current_mValue (HERE).stringValue () ;
      if (enumerator_16342.hasNextObject ()) {
        result << ", " ;
      }
      index_16342_.increment () ;
      enumerator_16342.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  //---\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_16494_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_16494 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_16494.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_16494.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_16494_.increment () ;
      enumerator_16494.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::modifier_setSizeForAxis (" ;
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
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "  //--- \n"
    "    const uint32_t axisIndex = inAxisIndex.uintValue () ;\n"
    "    if (axisIndex >= " ;
  result << in_DIMENSION.reader_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 451)).stringValue () ;
  result << ") {\n"
    "      C_String s ;\n"
    "      s << \"setter @ptrint setSizeForAxis: axis index (\"\n"
    "        << cStringWithUnsigned (axisIndex) << \") >= dimension (" ;
  result << in_DIMENSION.reader_string (SOURCE_FILE ("GALGAS_array.cpp.galgasTemplate", 454)).stringValue () ;
  result << ")\" ;\n"
    "      inCompiler->onTheFlyRunTimeError (s COMMA_THERE) ;\n"
    "    }else{\n" ;
  GALGAS_uint index_17744_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17744 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_17744.hasCurrentObject ()) {
      result << "      const uint32_t newSize" ;
      result << enumerator_17744.current_mValue (HERE).stringValue () ;
      result << " = (" ;
      result << enumerator_17744.current_mValue (HERE).stringValue () ;
      result << " == axisIndex) \? inNewSize.uintValue () : mSharedObject->size" ;
      result << enumerator_17744.current_mValue (HERE).stringValue () ;
      result << " () ;\n" ;
      index_17744_.increment () ;
      enumerator_17744.gotoNextObject () ;
    }
  }
  result << "      mSharedObject->setSize (" ;
  GALGAS_uint index_17939_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_17939 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_17939.hasCurrentObject ()) {
      result << "newSize" ;
      result << enumerator_17939.current_mValue (HERE).stringValue () ;
      if (enumerator_17939.hasNextObject ()) {
        result << ", " ;
      }
      index_17939_.increment () ;
      enumerator_17939.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::modifier_invalidateValueAtIndex (" ;
  GALGAS_uint index_18232_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18232 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    const bool nonEmpty_enumerator_18232 = enumerator_18232.hasCurrentObject () ;
    if (nonEmpty_enumerator_18232) {
      columnMarker = result.currentColumn () ;
    }
    while (enumerator_18232.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "GALGAS_uint inIndex" ;
      result << enumerator_18232.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_18232_.increment () ;
      enumerator_18232.gotoNextObject () ;
    }
  }
  result << "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_18391_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18391 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_18391.hasCurrentObject ()) {
      result << " && inIndex" ;
      result << enumerator_18391.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_18391_.increment () ;
      enumerator_18391.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "    const int32_t idx = mSharedObject->indexForIndexes (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_18733_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_18733 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_18733.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inIndex" ;
      result << enumerator_18733.current_mValue (HERE).stringValue () ;
      result << ".uintValue (),\n" ;
      index_18733_.increment () ;
      enumerator_18733.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::modifier_setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19244_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19244 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_19244.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_uint inNewSize" ;
      result << enumerator_19244.current_mValue (HERE).stringValue () ;
      result << ",\n" ;
      index_19244_.increment () ;
      enumerator_19244.gotoNextObject () ;
    }
  }
  result << "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * /* inCompiler */\n"
    "   " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid ()" ;
  GALGAS_uint index_19405_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19405 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_19405.hasCurrentObject ()) {
      result << " && inNewSize" ;
      result << enumerator_19405.current_mValue (HERE).stringValue () ;
      result << ".isValid ()" ;
      index_19405_.increment () ;
      enumerator_19405.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    insulate (THERE) ;\n"
    "    macroValidSharedObject (mSharedObject, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "    MF_Assert (mSharedObject->retainCount () == 1, \"retainCount () == %lld != 1\", mSharedObject->retainCount (), 0) ;\n"
    "    mSharedObject->setSize (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_19721_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_19721 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_19721.hasCurrentObject ()) {
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "inNewSize" ;
      result << enumerator_19721.current_mValue (HERE).stringValue () ;
      result << ".uintValue ()" ;
      if (enumerator_19721.hasNextObject ()) {
        result << ",\n" ;
      }
      index_19721_.increment () ;
      enumerator_19721.gotoNextObject () ;
    }
  }
  result << "\n"
    "                            COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typeComparisonResult cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::objectCompare (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inOperand) const {\n"
    "  typeComparisonResult result =  kOperandEqual ;\n" ;
  GALGAS_uint index_20140_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20140 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_20140.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    if (mSize" ;
      result << enumerator_20140.current_mValue (HERE).stringValue () ;
      result << " < inOperand->mSize" ;
      result << enumerator_20140.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandLowerThanSecond ;\n"
        "    }else if (mSize" ;
      result << enumerator_20140.current_mValue (HERE).stringValue () ;
      result << " > inOperand->mSize" ;
      result << enumerator_20140.current_mValue (HERE).stringValue () ;
      result << ") {\n"
        "      result = kFirstOperandGreaterThanSecond ;\n"
        "    }\n"
        "  }\n" ;
      index_20140_.increment () ;
      enumerator_20140.gotoNextObject () ;
    }
  }
  result << "  for (uint32_t i=0 ; (i<(" ;
  GALGAS_uint index_20455_ (0) ;
  if (in_DIMENSION_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_20455 (in_DIMENSION_5F_LIST, kEnumeration_up) ;
    while (enumerator_20455.hasCurrentObject ()) {
      result << "mSize" ;
      result << enumerator_20455.current_mValue (HERE).stringValue () ;
      if (enumerator_20455.hasNextObject ()) {
        result << "*" ;
      }
      index_20455_.increment () ;
      enumerator_20455.gotoNextObject () ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'typeGenerationTemplate listmapTypeHeader1'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                                const GALGAS_string & in_TYPE_5F_NAME,
                                                                                const GALGAS_string & in_TYPE_5F_IDENTIFIER
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" list map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_listmap.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_listmap {\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'typeGenerationTemplate listmapTypeSpecificImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_listmapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_string & in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER,
                                                                                            const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
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
    "AC_GALGAS_listmap () {\n"
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
    "  result.makeNewEmptyListMap (THERE) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey" ;
  GALGAS_uint index_767_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_767 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_767.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_767.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      result << " & inOperand" ;
      result << index_767_IDX.reader_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 19)).stringValue () ;
      index_767_IDX.increment () ;
      enumerator_767.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (isValid () && inKey.isValid ()" ;
  GALGAS_uint index_984_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_984 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_984.hasCurrentObject ()) {
      result << " && inOperand" ;
      result << index_984_IDX.reader_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 24)).stringValue () ;
      result << ".isValid ()" ;
      index_984_IDX.increment () ;
      enumerator_984.gotoNextObject () ;
    }
  }
  result << ") {\n"
    "    capCollectionElement attributes ;\n"
    "    GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::makeAttributesFromObjects (attributes" ;
  GALGAS_uint index_1213_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1213 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1213.hasCurrentObject ()) {
      result << ", inOperand" ;
      result << index_1213_IDX.reader_string (SOURCE_FILE ("GALGAS_listmap.cpp.galgasTemplate", 30)).stringValue () ;
      index_1213_IDX.increment () ;
      enumerator_1213.gotoNextObject () ;
    }
  }
  result << " COMMA_THERE) ;\n"
    "    addObjectInListMap (inKey.stringValue (), attributes) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_listForKey (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_string & inKey\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) const {\n"
    "  return GALGAS_" ;
  result << in_ASSOCIATED_5F_LIST_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (listForKey (inKey)) ;\n"
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
    "cGenericAbstractEnumerator () {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_string cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_key (LOCATION_ARGS) const {\n"
    "  const cListMapElement * p = (const cListMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cListMapElement) ;\n"
    "  return GALGAS_string (p->mKey) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader1'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_31_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & /* in_ATTRIBUTE_5F_LIST */,
                                                                            const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " ;\n"
    "\n" ;
  GALGAS_uint index_628_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_628 (in_SEARCH_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_628.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "extern const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_628.current_mSearchMethodName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h1.galgasTemplate", 12)).stringValue () ;
      result << " ;\n"
        "\n" ;
      index_628_.increment () ;
      enumerator_628.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public AC_GALGAS_map {\n"
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
//                            Filewrapper template 'typeGenerationTemplate mapTypeHeader2'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeHeader_32_ (C_Compiler * inCompiler,
                                                                            const GALGAS_string & in_TYPE_5F_NAME,
                                                                            const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                            const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Class for element of '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).add_operation (GALGAS_string ("' map"), inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 3)).stringValue () ;
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
    cEnumerator_typedPropertyList enumerator_698 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_698.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_698.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
      result << " mAttribute_" ;
      result << enumerator_698.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 11)).stringValue () ;
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
  GALGAS_uint index_967_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_967 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_967.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_967.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      result << " & in_" ;
      result << enumerator_967.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.h2.galgasTemplate", 17)).stringValue () ;
      index_967_.increment () ;
      enumerator_967.gotoNextObject () ;
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
//                     Filewrapper template 'typeGenerationTemplate mapTypeSpecificImplementation'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_mapTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                        const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                        const GALGAS_typedPropertyList & in_ATTRIBUTE_5F_LIST,
                                                                                        const GALGAS_insertMethodListAST & in_INSERT_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapSearchMethodListAST & in_SEARCH_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_mapRemoveMethodListAST & in_REMOVE_5F_METHOD_5F_LIST,
                                                                                        const GALGAS_bool & in_HAS_5F_INSERT_5F_OR_5F_REPLACE
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
    cEnumerator_typedPropertyList enumerator_252 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_252.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_252.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      result << " & in_" ;
      result << enumerator_252.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 5)).stringValue () ;
      index_252_.increment () ;
      enumerator_252.gotoNextObject () ;
    }
  }
  result << "\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) :\n"
    "cMapElement (inKey COMMA_THERE)" ;
  GALGAS_uint index_472_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_472 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_472.hasCurrentObject ()) {
      result << ",\n"
        "mAttribute_" ;
      result << enumerator_472.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << " (in_" ;
      result << enumerator_472.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 11)).stringValue () ;
      result << ")" ;
      index_472_.increment () ;
      enumerator_472.gotoNextObject () ;
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
    "  return mAttribute_lkey.isValid ()" ;
  GALGAS_uint index_855_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_855 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_855.hasCurrentObject ()) {
      result << " && mAttribute_" ;
      result << enumerator_855.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 21)).stringValue () ;
      result << ".isValid ()" ;
      index_855_.increment () ;
      enumerator_855.gotoNextObject () ;
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
  result << " (mAttribute_lkey" ;
  GALGAS_uint index_1268_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_1268 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1268.hasCurrentObject ()) {
      result << ", mAttribute_" ;
      result << enumerator_1268.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 32)).stringValue () ;
      index_1268_.increment () ;
      enumerator_1268.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 40)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & /* ioString */, const int32_t /* inIndentation */) const {\n" ;
  }else if (kBoolFalse == test_0) {
    result << "void cMapElement_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::description (C_String & ioString, const int32_t inIndentation) const {\n" ;
    GALGAS_uint index_1809_ (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1809 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_1809.hasCurrentObject ()) {
        result << "  ioString << \"\\n\" ;\n"
          "  ioString.writeStringMultiple (\"| \", inIndentation) ;\n"
          "  ioString << " ;
        result << enumerator_1809.current_mAttributeName (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 47)).stringValue () ;
        result << " \":\" ;\n"
          "  mAttribute_" ;
        result << enumerator_1809.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".description (ioString, inIndentation) ;\n" ;
        index_1809_.increment () ;
        enumerator_1809.gotoNextObject () ;
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
    "  typeComparisonResult result = mAttribute_lkey.objectCompare (operand->mAttribute_lkey) ;\n" ;
  GALGAS_uint index_2533_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_2533 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_2533.hasCurrentObject ()) {
      result << "  if (kOperandEqual == result) {\n"
        "    result = mAttribute_" ;
      result << enumerator_2533.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ".objectCompare (operand->mAttribute_" ;
      result << enumerator_2533.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 60)).stringValue () ;
      result << ") ;\n"
        "  }\n" ;
      index_2533_.increment () ;
      enumerator_2533.gotoNextObject () ;
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
    "AC_GALGAS_map () {\n"
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
    "AC_GALGAS_map (inSource) {\n"
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
    "  * ((AC_GALGAS_map *) this) = inSource ;\n"
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::reader_overriddenMap (" ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::addAssign_operation (" ;
  columnMarker = result.currentColumn () ;
  result << "const GALGAS_lstring & inKey" ;
  GALGAS_uint index_4942_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4942 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_4942.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_4942.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      result << " & inArgument" ;
      result << index_4942_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 115)).stringValue () ;
      index_4942_IDX.increment () ;
      enumerator_4942.gotoNextObject () ;
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
  GALGAS_uint index_5259_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_5259 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_5259.hasCurrentObject ()) {
      result << ", inArgument" ;
      result << index_5259_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 122)).stringValue () ;
      index_5259_IDX.increment () ;
      enumerator_5259.gotoNextObject () ;
    }
  }
  result << " COMMA_HERE)) ;\n"
    "  capCollectionElement attributes ;\n"
    "  attributes.setPointer (p) ;\n"
    "  macroDetachSharedObject (p) ;\n" ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
  }
  result << "const char * kInsertErrorMessage = \"@" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " insert error: '%K' already in map\" ;\n"
    "const char * kShadowErrorMessage = \"\" ;\n"
    "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
  }
  result << "}\n"
    "\n" ;
  GALGAS_uint index_5719_ (0) ;
  if (in_INSERT_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_insertMethodListAST enumerator_5719 (in_INSERT_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_5719.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::modifier_" ;
      result << enumerator_5719.current_mInsertMethodName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 137)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_6015_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6015 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_6015.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_6015.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          result << " inArgument" ;
          result << index_6015_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 139)).stringValue () ;
          index_6015_IDX.increment () ;
          enumerator_6015.gotoNextObject () ;
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
      GALGAS_uint index_6348_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_6348 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_6348.hasCurrentObject ()) {
          result << ", inArgument" ;
          result << index_6348_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 146)).stringValue () ;
          index_6348_IDX.increment () ;
          enumerator_6348.gotoNextObject () ;
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
      result << enumerator_5719.current_mErrorMessage (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 153)).stringValue () ;
      result << " ;\n"
        "const char * kShadowErrorMessage = " ;
      result << enumerator_5719.current_mShadowErrorMessage (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 154)).stringValue () ;
      result << " ;\n"
        "performInsert (attributes, inCompiler, kInsertErrorMessage, kShadowErrorMessage COMMA_THERE) ;\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_5719_.increment () ;
      enumerator_5719.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6860_ (0) ;
  if (in_SEARCH_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapSearchMethodListAST enumerator_6860 (in_SEARCH_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_6860.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "const char * kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_6860.current_mSearchMethodName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " = " ;
      result << enumerator_6860.current_mErrorMessage (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 162)).stringValue () ;
      result << " ;\n"
        "\n"
        "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::method_" ;
      result << enumerator_6860.current_mSearchMethodName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 164)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_7433_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7433 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_7433.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_7433.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          result << " & outArgument" ;
          result << index_7433_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 166)).stringValue () ;
          index_7433_IDX.increment () ;
          enumerator_7433.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) const {\n" ;
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
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "kSearchErrorMessage_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "_" ;
      result << enumerator_6860.current_mSearchMethodName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 173)).stringValue () ;
      result << "\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_THERE) ;\n"
        "if (NULL == p) {\n" ;
      GALGAS_uint index_7957_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_7957 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_7957.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_7957_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 177)).stringValue () ;
          result << ".drop () ;\n" ;
          index_7957_IDX.increment () ;
          enumerator_7957.gotoNextObject () ;
        }
      }
      result << "}else{\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_8142_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8142 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_8142.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_8142_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).stringValue () ;
          result << " = p->mAttribute_" ;
          result << enumerator_8142.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 182)).stringValue () ;
          result << " ;\n" ;
          index_8142_IDX.increment () ;
          enumerator_8142.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_6860_.increment () ;
      enumerator_6860.gotoNextObject () ;
    }
  }
  GALGAS_uint index_8316_ (0) ;
  if (in_REMOVE_5F_METHOD_5F_LIST.isValid ()) {
    cEnumerator_mapRemoveMethodListAST enumerator_8316 (in_REMOVE_5F_METHOD_5F_LIST, kEnumeration_up) ;
    while (enumerator_8316.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::modifier_" ;
      result << enumerator_8316.current_mMethodName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 192)).stringValue () ;
      result << " (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_lstring inKey" ;
      GALGAS_uint index_8606_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_8606 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_8606.hasCurrentObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
          result << "GALGAS_" ;
          result << enumerator_8606.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 194)).stringValue () ;
          result << " & outArgument" ;
          result << index_8606_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 194)).stringValue () ;
          index_8606_IDX.increment () ;
          enumerator_8606.gotoNextObject () ;
        }
      }
      result << ",\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "C_Compiler * inCompiler\n"
        " " ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "COMMA_LOCATION_ARGS) {\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
      }
      result << "const char * kRemoveErrorMessage = " ;
      result << enumerator_8316.current_mErrorMessage (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 199)).stringValue () ;
      result << " ;\n"
        "capCollectionElement attributes ;\n"
        "performRemove (inKey, attributes, inCompiler, kRemoveErrorMessage COMMA_THERE) ;\n"
        "cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) attributes.ptr () ;\n"
        "if (NULL != p) {\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n" ;
      GALGAS_uint index_9247_IDX (0) ;
      if (in_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9247 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_9247.hasCurrentObject ()) {
          result << "  outArgument" ;
          result << index_9247_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue () ;
          result << " = p->mAttribute_" ;
          result << enumerator_9247.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 206)).stringValue () ;
          result << " ;\n" ;
          index_9247_IDX.increment () ;
          enumerator_9247.gotoNextObject () ;
        }
      }
      result << "}\n" ;
      if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
        result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
      }
      result << "}\n"
        "\n" ;
      index_8316_.increment () ;
      enumerator_8316.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_1 = in_HAS_5F_INSERT_5F_OR_5F_REPLACE.boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "void GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::modifier_insertOrReplace (" ;
    columnMarker = result.currentColumn () ;
    result << "GALGAS_lstring inKey" ;
    GALGAS_uint index_9678_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9678 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_9678.hasCurrentObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "GALGAS_" ;
        result << enumerator_9678.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 217)).stringValue () ;
        result << " inArgument" ;
        result << index_9678_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 217)).stringValue () ;
        index_9678_IDX.increment () ;
        enumerator_9678.gotoNextObject () ;
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
    GALGAS_uint index_9972_IDX (0) ;
    if (in_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9972 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_9972.hasCurrentObject ()) {
        result << ", inArgument" ;
        result << index_9972_IDX.reader_string (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 223)).stringValue () ;
        index_9972_IDX.increment () ;
        enumerator_9972.gotoNextObject () ;
      }
    }
    result << " COMMA_HERE)) ;\n"
      "  capCollectionElement attributes ;\n"
      "  attributes.setPointer (p) ;\n"
      "  macroDetachSharedObject (p) ;\n"
      "  performInsertOrReplace (attributes) ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  GALGAS_uint index_10243_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_10243 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_10243.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_10243.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 235)).stringValue () ;
      result << " GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::reader_" ;
      result << enumerator_10243.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 235)).stringValue () ;
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
      result << enumerator_10243.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 240)).stringValue () ;
      result << " result ;\n"
        "  if (NULL != p) {\n"
        "    macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "    result = p->mAttribute_" ;
      result << enumerator_10243.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 243)).stringValue () ;
      result << " ;\n"
        "  }\n"
        "  return result ;\n"
        "}\n"
        "\n" ;
      index_10243_IDX.increment () ;
      enumerator_10243.gotoNextObject () ;
    }
  }
  GALGAS_uint index_11272_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_11272 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_11272.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "void GALGAS_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::modifier_set" ;
      result << enumerator_11272.current_mAttributeName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).stringValue () ;
      result << "ForKey (" ;
      columnMarker = result.currentColumn () ;
      result << "GALGAS_" ;
      result << enumerator_11272.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 251)).stringValue () ;
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
        "    p->mAttribute_" ;
      result << enumerator_11272.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 259)).stringValue () ;
      result << " = inAttributeValue ;\n"
        "  }\n"
        "}\n"
        "\n" ;
      index_11272_IDX.increment () ;
      enumerator_11272.gotoNextObject () ;
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
    "cGenericAbstractEnumerator () {\n"
    "  inEnumeratedObject.populateEnumerationArray (mEnumerationArray, inOrder) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  result << "_2D_element (p->mAttribute_lkey" ;
  GALGAS_uint index_13698_ (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_13698 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_13698.hasCurrentObject ()) {
      result << ", p->mAttribute_" ;
      result << enumerator_13698.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 291)).stringValue () ;
      index_13698_.increment () ;
      enumerator_13698.gotoNextObject () ;
    }
  }
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_lstring cEnumerator_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::current_lkey (LOCATION_ARGS) const {\n"
    "  const cMapElement * p = (const cMapElement *) currentObjectPtr (THERE) ;\n"
    "  macroValidSharedObject (p, cMapElement) ;\n"
    "  return p->mAttribute_lkey ;\n"
    "}\n"
    "\n" ;
  GALGAS_uint index_14170_IDX (0) ;
  if (in_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_14170 (in_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_14170.hasCurrentObject ()) {
      result << "//---------------------------------------------------------------------------------------------------------------------*\n"
        "\n"
        "GALGAS_" ;
      result << enumerator_14170.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue () ;
      result << " cEnumerator_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << "::current_" ;
      result << enumerator_14170.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 306)).stringValue () ;
      result << " (LOCATION_ARGS) const {\n"
        "  const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " * p = (const cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << " *) currentObjectPtr (THERE) ;\n"
        "  macroValidSharedObject (p, cMapElement_" ;
      result << in_TYPE_5F_IDENTIFIER.stringValue () ;
      result << ") ;\n"
        "  return p->mAttribute_" ;
      result << enumerator_14170.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_map.cpp.galgasTemplate", 309)).stringValue () ;
      result << " ;\n"
        "}\n"
        "\n" ;
      index_14170_IDX.increment () ;
      enumerator_14170.gotoNextObject () ;
    }
  }
  result << "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Filewrapper template 'typeGenerationTemplate classTypeHeader1'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_31_ (C_Compiler * inCompiler,
                                                                              const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                              const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                              const GALGAS_typedPropertyList & /* in_ALL_5F_ATTRIBUTE_5F_LIST */,
                                                                              const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                              const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@").add_operation (in_TYPE_5F_IDENTIFIER, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " : public " ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "AC_GALGAS_class" ;
  }else if (kBoolFalse == test_0) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " {\n"
    "//--- Constructor\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 11)) COMMA_SOURCE_FILE ("GALGAS_class.h1.galgasTemplate", 11)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--------------------------------- Default GALGAS constructor\n"
      "  public : static GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " constructor_default (LOCATION_ARGS) ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//---\n"
    "  public : inline const class cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * ptr (void) const { return (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " *) mObjectPtr ; }\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public : GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (const cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " * inSourcePtr) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part1'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_31_ (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & in_TYPE_5F_NAME,
                                                                                      const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_typedPropertyList & /* in_CURRENT_5F_ATTRIBUTE_5F_LIST */,
                                                                                      const GALGAS_typedPropertyList & /* in_ALL_5F_ATTRIBUTE_5F_LIST */,
                                                                                      const GALGAS_bool & /* in_IS_5F_ABSTRACT */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_class.h2-part1.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
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

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'typeGenerationTemplate classTypeHeader2part2'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeHeader_32_part_32_ (C_Compiler * inCompiler,
                                                                                      const GALGAS_string & /* in_TYPE_5F_NAME */,
                                                                                      const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                      const GALGAS_string & /* in_SUPER_5F_TYPE_5F_IDENTIFIER */,
                                                                                      const GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                      const GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                      const GALGAS_bool & in_IS_5F_ABSTRACT
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//--- Attributes\n" ;
  GALGAS_uint index_55_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_55 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_55.hasCurrentObject ()) {
      result << "  public : GALGAS_" ;
      result << enumerator_55.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " mAttribute_" ;
      result << enumerator_55.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 4)).stringValue () ;
      result << " ;\n" ;
      index_55_.increment () ;
      enumerator_55.gotoNextObject () ;
    }
  }
  result << "\n"
    "//--- Constructor\n"
    "  public : cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_293_ (0) ;
  if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_293 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_293.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_293.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      result << " & in_" ;
      result << enumerator_293.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 10)).stringValue () ;
      if (enumerator_293.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_293_.increment () ;
      enumerator_293.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 13)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_0) {
    result << "LOCATION_ARGS" ;
  }
  result << ") ;\n"
    "\n" ;
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 20)).boolEnum () ;
  if (kBoolTrue == test_1) {
    result << "//--- Duplication\n"
      "  public : virtual acPtr_class * duplicate (LOCATION_ARGS) const ;\n"
      "\n" ;
  }else if (kBoolFalse == test_1) {
  }
  result << "//--- Attribute accessors\n" ;
  GALGAS_uint index_729_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_729 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_729.hasCurrentObject ()) {
      const enumGalgasBool test_2 = enumerator_729.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        result << "  public : VIRTUAL_IN_DEBUG GALGAS_" ;
        result << enumerator_729.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 29)).stringValue () ;
        result << " reader_" ;
        result << enumerator_729.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 29)).stringValue () ;
        result << " (LOCATION_ARGS) const ;\n" ;
      }else if (kBoolFalse == test_2) {
      }
      const enumGalgasBool test_3 = enumerator_729.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  public : VIRTUAL_IN_DEBUG void modifier_set" ;
        result << enumerator_729.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).stringValue () ;
        result << " (GALGAS_" ;
        result << enumerator_729.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.h2-part2.galgasTemplate", 32)).stringValue () ;
        result << " inValue COMMA_LOCATION_ARGS) ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_729_.increment () ;
      enumerator_729.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_4 = in_IS_5F_ABSTRACT.boolEnum () ;
  if (kBoolTrue == test_4) {
    result << "//--- Description\n"
      "  public : virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const = 0 ;\n"
      "\n"
      "  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const = 0 ;\n"
      "\n"
      "  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const = 0 ;\n" ;
  }else if (kBoolFalse == test_4) {
    result << "//--- Description\n"
      "  public : virtual void description (" ;
    columnMarker = result.currentColumn () ;
    result << "C_String & ioString,\n"
      "                           " ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const int32_t inIndentation) const ;\n"
      "\n"
      "  public : virtual typeComparisonResult dynamicObjectCompare (const acPtr_class * inOperandPtr) const ;\n"
      "\n"
      "  public : virtual const C_galgas_type_descriptor * classDescriptor (void) const ;\n" ;
  }
  result << "\n"
    "} ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'typeGenerationTemplate classTypeSpecificImplementation'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_typeGenerationTemplate_classTypeSpecificImplementation (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_TYPE_5F_NAME,
                                                                                          const GALGAS_string & in_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_string & in_SUPER_5F_TYPE_5F_IDENTIFIER,
                                                                                          const GALGAS_typedPropertyList & in_CURRENT_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_typedPropertyList & in_ALL_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_typedPropertyList & in_INHERITED_5F_ATTRIBUTE_5F_LIST,
                                                                                          const GALGAS_bool & in_IS_5F_ABSTRACT,
                                                                                          const GALGAS_bool & in_HAS_5F_DEFAULT_5F_CONSTRUCTOR
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//   Object comparison                                                                                                 *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 6)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "typeComparisonResult cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::dynamicObjectCompare (const acPtr_class * /* inOperandPtr */) const {\n"
      "  return kOperandEqual ;\n"
      "}\n"
      "\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n" ;
  }else if (kBoolFalse == test_0) {
  }
  const enumGalgasBool test_1 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 14)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 14)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 14)).boolEnum () ;
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
    GALGAS_uint index_1097_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_1097 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_1097.hasCurrentObject ()) {
        result << "  if (kOperandEqual == result) {\n"
          "    result = mAttribute_" ;
        result << enumerator_1097.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ".objectCompare (p->mAttribute_" ;
        result << enumerator_1097.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 21)).stringValue () ;
        result << ") ;\n"
          "  }\n" ;
        index_1097_.increment () ;
        enumerator_1097.gotoNextObject () ;
      }
    }
    result << "  return result ;\n"
      "}\n"
      "\n"
      "//---------------------------------------------------------------------------------------------------------------------*\n" ;
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
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::GALGAS_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (void) :\n" ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "AC_GALGAS_class" ;
  }else if (kBoolFalse == test_2) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " () {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_3 = in_HAS_5F_DEFAULT_5F_CONSTRUCTOR.operator_and (in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 52)) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 52)).boolEnum () ;
  if (kBoolTrue == test_3) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    const enumGalgasBool test_4 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 57)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_4) {
      GALGAS_uint index_2786_ (0) ;
      if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_2786 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_2786.hasCurrentObject ()) {
          result << "GALGAS_" ;
          result << enumerator_2786.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 59)).stringValue () ;
          result << "::constructor_" ;
          result << enumerator_2786.current_mAttributeTypeProxy (HERE).reader_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 59)).reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 59)).stringValue () ;
          result << " (HERE)" ;
          if (enumerator_2786.hasNextObject ()) {
            result << ",\n" ;
            result.appendSpacesUntilColumn (columnMarker) ;
          }
          index_2786_.increment () ;
          enumerator_2786.gotoNextObject () ;
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
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
    result << "AC_GALGAS_class" ;
  }else if (kBoolFalse == test_5) {
    result << "GALGAS_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (inSourcePtr) {\n"
    "  macroNullOrValidSharedObject (inSourcePtr, cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_6 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 77)).operator_and (GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 77)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 77)).boolEnum () ;
  if (kBoolTrue == test_6) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
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
  const enumGalgasBool test_7 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 86)).operator_and (GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 86)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 86)).boolEnum () ;
  if (kBoolTrue == test_7) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::constructor_new (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_4178_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4178 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_4178.hasCurrentObject ()) {
        result << "const GALGAS_" ;
        result << enumerator_4178.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 90)).stringValue () ;
        result << " & inAttribute_" ;
        result << enumerator_4178.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 90)).stringValue () ;
        if (enumerator_4178.hasNextObject ()) {
          result << ",\n" ;
          result.appendSpacesUntilColumn (columnMarker) ;
        }
        index_4178_.increment () ;
        enumerator_4178.gotoNextObject () ;
      }
    }
    const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 93)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
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
    GALGAS_uint index_4530_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4530 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_4530.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4530.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 102)).stringValue () ;
        result << ".isValid ()" ;
        if (enumerator_4530.hasNextObject ()) {
          result << " && " ;
        }
        index_4530_.increment () ;
        enumerator_4530.gotoNextObject () ;
      }
    }
    result << ") {\n"
      "    macroMyNew (result.mObjectPtr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_4740_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_4740 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      while (enumerator_4740.hasCurrentObject ()) {
        result << "inAttribute_" ;
        result << enumerator_4740.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 108)).stringValue () ;
        if (enumerator_4740.hasNextObject ()) {
          result << ", " ;
        }
        index_4740_.increment () ;
        enumerator_4740.gotoNextObject () ;
      }
    }
    result << " COMMA_THERE)) ;\n"
      "  }\n"
      "  return result ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_7) {
  }
  GALGAS_uint index_4934_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_4934 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_4934.hasCurrentObject ()) {
      const enumGalgasBool test_9 = enumerator_4934.current_mHasGetter (HERE).boolEnum () ;
      if (kBoolTrue == test_9) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_4934.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 120)).stringValue () ;
        result << " GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::reader_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 120)).stringValue () ;
        result << " (UNUSED_LOCATION_ARGS) const {\n"
          "  GALGAS_" ;
        result << enumerator_4934.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 121)).stringValue () ;
        result << " result ;\n"
          "  if (NULL != mObjectPtr) {\n"
          "    const cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " * p = (const cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << " *) mObjectPtr ;\n"
          "    macroValidSharedObject (p, cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << ") ;\n"
          "    result = p->mAttribute_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 125)).stringValue () ;
        result << " ;\n"
          "  }\n"
          "  return result ;\n"
          "}\n"
          "\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "GALGAS_" ;
        result << enumerator_4934.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 130)).stringValue () ;
        result << " cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::reader_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 130)).stringValue () ;
        result << " (UNUSED_LOCATION_ARGS) const {\n"
          "  return mAttribute_" ;
        result << enumerator_4934.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 131)).stringValue () ;
        result << " ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_9) {
      }
      index_4934_.increment () ;
      enumerator_4934.gotoNextObject () ;
    }
  }
  GALGAS_uint index_6104_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_6104 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_6104.hasCurrentObject ()) {
      const enumGalgasBool test_10 = enumerator_6104.current_mHasSetter (HERE).boolEnum () ;
      if (kBoolTrue == test_10) {
        result << "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "void GALGAS_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::modifier_set" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 139)).reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 139)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6104.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 139)).stringValue () ;
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
          "    p->mAttribute_" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 145)).stringValue () ;
        result << " = inValue ;\n"
          "  }\n"
          "}\n"
          "\n"
          "//---------------------------------------------------------------------------------------------------------------------*\n"
          "\n"
          "void cPtr_" ;
        result << in_TYPE_5F_IDENTIFIER.stringValue () ;
        result << "::modifier_set" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.reader_stringByCapitalizingFirstCharacter (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 149)).reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 149)).stringValue () ;
        result << " (" ;
        columnMarker = result.currentColumn () ;
        result << "GALGAS_" ;
        result << enumerator_6104.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 149)).stringValue () ;
        result << " inValue\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
          "  mAttribute_" ;
        result << enumerator_6104.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 151)).stringValue () ;
        result << " = inValue ;\n"
          "}\n"
          "\n" ;
      }else if (kBoolFalse == test_10) {
      }
      index_6104_.increment () ;
      enumerator_6104.gotoNextObject () ;
    }
  }
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//" ;
  result << GALGAS_string ("Pointer class for @").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).add_operation (GALGAS_string (" class"), inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 157)).stringValue () ;
  result << "*\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << "::cPtr_" ;
  result << in_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_7761_ (0) ;
  if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_7761 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_7761.hasCurrentObject ()) {
      result << "const GALGAS_" ;
      result << enumerator_7761.current_mAttributeTypeProxy (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 162)).stringValue () ;
      result << " & in_" ;
      result << enumerator_7761.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 162)).stringValue () ;
      if (enumerator_7761.hasNextObject ()) {
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_7761_.increment () ;
      enumerator_7761.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_11 = GALGAS_bool (kIsStrictSup, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 165)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_11) {
    result << "\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS" ;
  }else if (kBoolFalse == test_11) {
    result << "LOCATION_ARGS" ;
  }
  result << ") :\n" ;
  const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, in_SUPER_5F_TYPE_5F_IDENTIFIER.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_12) {
    result << "acPtr_class" ;
  }else if (kBoolFalse == test_12) {
    result << "cPtr_" ;
    result << in_SUPER_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  }
  result << " (" ;
  GALGAS_uint index_8150_ (0) ;
  if (in_INHERITED_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8150 (in_INHERITED_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8150.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_8150.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 173)).stringValue () ;
      if (enumerator_8150.hasNextObject ()) {
        result << ", " ;
      }
      index_8150_.increment () ;
      enumerator_8150.gotoNextObject () ;
    }
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsStrictSup, in_INHERITED_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 176)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_13) {
    result << " COMMA_THERE" ;
  }else if (kBoolFalse == test_13) {
    result << "THERE" ;
  }
  result << ")" ;
  GALGAS_uint index_8359_ (0) ;
  if (in_CURRENT_5F_ATTRIBUTE_5F_LIST.isValid ()) {
    cEnumerator_typedPropertyList enumerator_8359 (in_CURRENT_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
    while (enumerator_8359.hasCurrentObject ()) {
      result << ",\n"
        "mAttribute_" ;
      result << enumerator_8359.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 183)).stringValue () ;
      result << " (in_" ;
      result << enumerator_8359.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 183)).stringValue () ;
      result << ")" ;
      index_8359_.increment () ;
      enumerator_8359.gotoNextObject () ;
    }
  }
  result << " {\n"
    "}\n"
    "\n" ;
  const enumGalgasBool test_14 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 189)).boolEnum () ;
  if (kBoolTrue == test_14) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "const C_galgas_type_descriptor * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::classDescriptor (void) const {\n"
      "  return & kTypeDescriptor_GALGAS_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " ;\n"
      "}\n"
      "\n" ;
    const enumGalgasBool test_15 = GALGAS_bool (kIsEqual, in_ALL_5F_ATTRIBUTE_5F_LIST.reader_length (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 194)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_15) {
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
    }else if (kBoolFalse == test_15) {
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
      GALGAS_uint index_9301_ (0) ;
      if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
        cEnumerator_typedPropertyList enumerator_9301 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
        while (enumerator_9301.hasCurrentObject ()) {
          result << "  mAttribute_" ;
          result << enumerator_9301.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 204)).stringValue () ;
          result << ".description (ioString, inIndentation+1) ;\n" ;
          if (enumerator_9301.hasNextObject ()) {
            result << "  ioString << \", \" ;\n" ;
          }
          index_9301_.increment () ;
          enumerator_9301.gotoNextObject () ;
        }
      }
      result << "  ioString << \"]\" ;\n"
        "}\n"
        "\n" ;
    }
  }else if (kBoolFalse == test_14) {
  }
  const enumGalgasBool test_16 = in_IS_5F_ABSTRACT.operator_not (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 212)).boolEnum () ;
  if (kBoolTrue == test_16) {
    result << "//---------------------------------------------------------------------------------------------------------------------*\n"
      "\n"
      "acPtr_class * cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << "::duplicate (LOCATION_ARGS) const {\n"
      "  acPtr_class * ptr = NULL ;\n"
      "  macroMyNew (ptr, cPtr_" ;
    result << in_TYPE_5F_IDENTIFIER.stringValue () ;
    result << " (" ;
    GALGAS_uint index_9834_ (0) ;
    if (in_ALL_5F_ATTRIBUTE_5F_LIST.isValid ()) {
      cEnumerator_typedPropertyList enumerator_9834 (in_ALL_5F_ATTRIBUTE_5F_LIST, kEnumeration_up) ;
      const bool nonEmpty_enumerator_9834 = enumerator_9834.hasCurrentObject () ;
      while (enumerator_9834.hasCurrentObject ()) {
        result << "mAttribute_" ;
        result << enumerator_9834.current_mAttributeName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("GALGAS_class.cpp.galgasTemplate", 219)).stringValue () ;
        if (enumerator_9834.hasNextObject ()) {
          result << ", " ;
        }
        index_9834_.increment () ;
        enumerator_9834.gotoNextObject () ;
      }
      if (nonEmpty_enumerator_9834) {
        result << " COMMA_" ;
      }
    }
    result << "THERE)) ;\n"
      "  return ptr ;\n"
      "}\n"
      "\n" ;
  }else if (kBoolFalse == test_16) {
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                  Filewrapper 'semanticComponentGenerationTemplate'                                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_semanticComponentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_semanticComponentGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_semanticComponentGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_semanticComponentGenerationTemplate_0,
  0,
  gWrapperAllDirectories_semanticComponentGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryReaderDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderDeclaration (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                         const GALGAS_string & in_READER_5F_NAME,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract category reader '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef class GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 7)).stringValue () ;
  result << " (*categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_893_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_893 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_893.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_893.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_893.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 12)).stringValue () ;
        result << " & constinArgument" ;
        result << index_893_IDX.reader_string (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_893.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 14)).stringValue () ;
        result << " inArgument" ;
        result << index_893_IDX.reader_string (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 14)).stringValue () ;
      }
      index_893_IDX.increment () ;
      enumerator_893.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 22)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 23)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 23)).stringValue () ;
  result << " inMethod) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 27)).stringValue () ;
  result << " callCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 27)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 27)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1946_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1946 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1946.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_1 = enumerator_1946.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "const GALGAS_" ;
        result << enumerator_1946.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 31)).stringValue () ;
        result << " & constin_" ;
        result << enumerator_1946.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 31)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << "GALGAS_" ;
        result << enumerator_1946.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_1946.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.h.galgasTemplate", 33)).stringValue () ;
      }
      index_1946_.increment () ;
      enumerator_1946.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryReaderImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryReaderImplementation (C_Compiler * inCompiler,
                                                                                                            const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                            const GALGAS_string & in_READER_5F_NAME,
                                                                                                            const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract category reader '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inReader) {\n"
    "  gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 29)).stringValue () ;
  result << " callCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2429_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_2429 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2429.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_2429.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2429.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 33)).stringValue () ;
        result << " & in_" ;
        result << enumerator_2429.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << enumerator_2429.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 35)).stringValue () ;
        result << " in_" ;
        result << enumerator_2429.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 35)).stringValue () ;
      }
      index_2429_.increment () ;
      enumerator_2429.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 40)).stringValue () ;
  result << " result ;\n"
    "//--- Find Reader\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 43)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 46)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 46)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 47)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 48)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 48)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 53)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 53)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 54)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 54)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 58)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY READER CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      result = f (inObject, " ;
  GALGAS_uint index_4348_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_4348 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4348.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_4348.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-reader.cpp.galgasTemplate", 65)).stringValue () ;
      result << ", " ;
      index_4348_.increment () ;
      enumerator_4348.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate categoryReaderDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderDeclaration (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const GALGAS_string & in_READER_5F_NAME,
                                                                                                 const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                 const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category reader '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef class GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 7)).stringValue () ;
  result << " (*categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_884_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_884 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_884.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_884.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_884.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 12)).stringValue () ;
        result << " & constinArgument" ;
        result << index_884_IDX.reader_string (SOURCE_FILE ("category-reader.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_884.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 14)).stringValue () ;
        result << " inArgument" ;
        result << index_884_IDX.reader_string (SOURCE_FILE ("category-reader.h.galgasTemplate", 14)).stringValue () ;
      }
      index_884_IDX.increment () ;
      enumerator_884.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 22)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 23)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 23)).stringValue () ;
  result << " inReader) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 27)).stringValue () ;
  result << " callCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 27)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 27)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1925_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1925 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1925.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_1 = enumerator_1925.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "const GALGAS_" ;
        result << enumerator_1925.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 31)).stringValue () ;
        result << " & constin_" ;
        result << enumerator_1925.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 31)).stringValue () ;
      }else if (kBoolFalse == test_1) {
        result << "GALGAS_" ;
        result << enumerator_1925.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.h.galgasTemplate", 33)).stringValue () ;
        result << " in_" ;
        result << enumerator_1925.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-reader.h.galgasTemplate", 33)).stringValue () ;
      }
      index_1925_.increment () ;
      enumerator_1925.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryReaderImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderImplementation (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const GALGAS_string & in_READER_5F_NAME,
                                                                                                    const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                    const GALGAS_unifiedTypeMap_2D_proxy & in_RETURN_5F_TYPE,
                                                                                                    const GALGAS_string & in_READER_5F_IMPLEMENTATION
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category reader '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inReader) {\n"
    "  gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inReader, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 18)).stringValue () ;
  result << " callCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1696_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1696 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1696.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_1696.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1696.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 22)).stringValue () ;
        result << " & in_" ;
        result << enumerator_1696.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "GALGAS_" ;
        result << enumerator_1696.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 24)).stringValue () ;
        result << " in_" ;
        result << enumerator_1696.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 24)).stringValue () ;
      }
      index_1696_.increment () ;
      enumerator_1696.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  GALGAS_" ;
  result << in_RETURN_5F_TYPE.reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader.cpp.galgasTemplate", 29)).stringValue () ;
  result << " result ;\n"
    "//--- Find Reader\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 32)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    categoryReaderSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 35)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 35)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 36)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 36)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 37)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 37)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 42)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 42)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 43)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 43)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 47)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY READER CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      result = f (inObject, " ;
  GALGAS_uint index_3615_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_3615 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3615.hasCurrentObject ()) {
      result << "in_" ;
      result << enumerator_3615.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 54)).stringValue () ;
      result << ", " ;
      index_3615_.increment () ;
      enumerator_3615.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "  return result ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_READER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 67)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 67)).stringValue () ;
  result << " (void) {\n"
    "  enterCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 68)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 69)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 69)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 74)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 74)).stringValue () ;
  result << " (void) {\n"
    "  gCategoryReaderTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 75)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 75)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 80)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 80)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 80)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 80)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 81)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader.cpp.galgasTemplate", 81)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryReaderImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryReaderImplementation (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const GALGAS_string & in_READER_5F_NAME,
                                                                                                              const GALGAS_unifiedTypeMap_2D_proxy & /* in_RETURN_5F_TYPE */,
                                                                                                              const GALGAS_string & in_READER_5F_IMPLEMENTATION
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Overriding category reader '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_READER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterCategoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineCategoryReader_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-reader.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryModifierDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierDeclaration (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                           const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                           const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract category setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef void (*categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_843_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_843 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_843_IDX.increment () ;
      enumerator_843.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "  " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2302_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2302 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2302.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2302.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2302.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2302.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2302.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2302.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2302.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2302.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2302.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2302.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2302.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2302.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2302_.increment () ;
      enumerator_2302.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryModifierImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryModifierImplementation (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                              const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract category setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2425_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2425 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2425.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2425.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_2425.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2425.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2425.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2425.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2425.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2425_.increment () ;
      enumerator_2425.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3359_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3359 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3359.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3359.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3359.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3359_.increment () ;
      enumerator_3359.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 53)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 56)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 56)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 58)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4932_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4932 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4932.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4932.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 72)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4932.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 73)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4932.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 74)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4932.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 75)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4932.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 76)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4932.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 77)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4932.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-modifier.cpp.galgasTemplate", 79)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4932_.increment () ;
      enumerator_4932.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryModifierDeclaration'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierDeclaration (C_Compiler * inCompiler,
                                                                                                   const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                   const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                   const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef void (*categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_834_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_834 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_834.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-modifier.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_834_IDX.reader_string (SOURCE_FILE ("category-modifier.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-modifier.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_834_IDX.reader_string (SOURCE_FILE ("category-modifier.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-modifier.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_834_IDX.reader_string (SOURCE_FILE ("category-modifier.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_834_IDX.reader_string (SOURCE_FILE ("category-modifier.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_834_IDX.increment () ;
      enumerator_834.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 27)).stringValue () ;
  result << " inModifier) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2306_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2306 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2306.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2306.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-modifier.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2306.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2306.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2306.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-modifier.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2306.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2306.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2306.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-modifier.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2306.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2306.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2306.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2306.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2306_.increment () ;
      enumerator_2306.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate categoryModifierImplementation'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierImplementation (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                      const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                      const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                      const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inModifier) {\n"
    "  gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inModifier, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1676_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1676 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1676.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1676.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1676.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1676.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1676.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_1676.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1676.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1676.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1676.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1676.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1676.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1676.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1676_.increment () ;
      enumerator_1676.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_2610_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2610 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2610.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2610.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 36)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2610.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 37)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2610_.increment () ;
      enumerator_2610.gotoNextObject () ;
    }
  }
  result << "//--- Find setter\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 42)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    categoryModifierSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 45)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 45)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 46)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 46)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 47)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 47)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 52)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 52)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 53)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 53)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    f (inObject, " ;
  GALGAS_uint index_4183_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4183 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4183.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 61)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4183.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 62)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 63)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4183.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 64)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4183.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 65)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4183.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 66)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4183.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 68)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4183_.increment () ;
      enumerator_4183.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 81)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 81)).stringValue () ;
  result << " (void) {\n"
    "  enterCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 82)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 82)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 83)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 83)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 88)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 88)).stringValue () ;
  result << " (void) {\n"
    "  gCategoryModifierTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 89)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 89)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 94)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 95)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier.cpp.galgasTemplate", 95)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryModifierImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryModifierImplementation (C_Compiler * inCompiler,
                                                                                                                const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                                const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Overriding category setter '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterCategoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineCategoryModifier_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-modifier.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryMethodDeclaration'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodDeclaration (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                         const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                         const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract category method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef void (*categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_843_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_843 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_843.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_843.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_843.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_843_IDX.reader_string (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_843_IDX.increment () ;
      enumerator_843.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 27)).stringValue () ;
  result << " inMethod) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2307_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2307 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2307.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2307.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2307.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2307.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2307.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2307.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2307.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2307.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2307.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2307.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2307.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2307.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2307_.increment () ;
      enumerator_2307.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate abstractCategoryMethodImplementation'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_abstractCategoryMethodImplementation (C_Compiler * inCompiler,
                                                                                                            const GALGAS_unifiedTypeMap_2D_proxy & in_RECEIVER_5F_TYPE,
                                                                                                            const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                            const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Abstract category method '@").add_operation (in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 3)), inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <categoryMethodSignature_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 7)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 7)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryMethodSignature_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 12)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inMethod) {\n"
    "  gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 13)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeCategoryMethod_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 18)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (void) {\n"
    "  gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 19)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 19)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 19)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gMethod_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 24)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 24)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 24)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeCategoryMethod_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 25)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 25)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 25)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 29)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 29)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2475_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2475 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2475.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_2475.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 32)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_2475.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 33)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2475.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 33)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_2475.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 34)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_2475.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 35)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2475.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 35)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_2475.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 36)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2475.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 37)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2475.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 37)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_2475.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 39)).stringValue () ;
            result << " in_" ;
            result << enumerator_2475.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 39)).stringValue () ;
          }
        }
      }
      index_2475_.increment () ;
      enumerator_2475.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "//--- Drop output arguments\n" ;
  GALGAS_uint index_3409_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_3409 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3409.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_3409.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_3409.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 48)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_3409_.increment () ;
      enumerator_3409.gotoNextObject () ;
    }
  }
  result << "//--- Find method\n"
    "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 53)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 53)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    categoryMethodSignature_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 56)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 56)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 56)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 57)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 57)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 57)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 58)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 58)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 58)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 63)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 63)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 63)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 64)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 64)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 64)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gCategoryMethodTable_" ;
  result << in_RECEIVER_5F_TYPE.reader_key (inCompiler COMMA_SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 68)).reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 68)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 68)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY METHOD CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      f (inObject, " ;
  GALGAS_uint index_5133_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_5133 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_5133.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_5133.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 75)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_5133.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 76)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_5133.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 77)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_5133.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 78)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_5133.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 79)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_5133.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 80)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_5133.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("abstract-category-method.cpp.galgasTemplate", 82)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_5133_.increment () ;
      enumerator_5133.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate categoryMethodDeclaration'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodDeclaration (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                 const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                 const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef void (*categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 7)).stringValue () ;
  result << ") (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 8)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_834_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_834 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_834.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-method.h.galgasTemplate", 11)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 12)).stringValue () ;
        result << " constinArgument" ;
        result << index_834_IDX.reader_string (SOURCE_FILE ("category-method.h.galgasTemplate", 12)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-method.h.galgasTemplate", 13)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 14)).stringValue () ;
          result << " & ioArgument" ;
          result << index_834_IDX.reader_string (SOURCE_FILE ("category-method.h.galgasTemplate", 14)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_834.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-method.h.galgasTemplate", 15)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 16)).stringValue () ;
            result << " & outArgument" ;
            result << index_834_IDX.reader_string (SOURCE_FILE ("category-method.h.galgasTemplate", 16)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_834.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 18)).stringValue () ;
            result << " inArgument" ;
            result << index_834_IDX.reader_string (SOURCE_FILE ("category-method.h.galgasTemplate", 18)).stringValue () ;
          }
        }
      }
      index_834_IDX.increment () ;
      enumerator_834.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 26)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 27)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 27)).stringValue () ;
  result << " inMethod) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 31)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 31)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_2298_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2298 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2298.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2298.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-method.h.galgasTemplate", 34)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "const GALGAS_" ;
        result << enumerator_2298.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 35)).stringValue () ;
        result << " constin_" ;
        result << enumerator_2298.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 35)).stringValue () ;
      }else if (kBoolFalse == test_3) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_2298.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-method.h.galgasTemplate", 36)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          result << "GALGAS_" ;
          result << enumerator_2298.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 37)).stringValue () ;
          result << " & io_" ;
          result << enumerator_2298.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 37)).stringValue () ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_2298.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-method.h.galgasTemplate", 38)))).boolEnum () ;
          if (kBoolTrue == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2298.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 39)).stringValue () ;
            result << " & out_" ;
            result << enumerator_2298.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 39)).stringValue () ;
          }else if (kBoolFalse == test_5) {
            result << "GALGAS_" ;
            result << enumerator_2298.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.h.galgasTemplate", 41)).stringValue () ;
            result << " in_" ;
            result << enumerator_2298.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.h.galgasTemplate", 41)).stringValue () ;
          }
        }
      }
      index_2298_.increment () ;
      enumerator_2298.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Filewrapper template 'semanticComponentGenerationTemplate categoryMethodImplementation'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodImplementation (C_Compiler * inCompiler,
                                                                                                    const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                    const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                    const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                    const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static TC_UniqueArray <categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "> gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 7)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void enterCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const int32_t inClassIndex,\n"
    "               " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << " inMethod) {\n"
    "  gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 13)).stringValue () ;
  result << ".forceObjectAtIndex (inClassIndex, inMethod, NULL COMMA_HERE) ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void callCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 18)).stringValue () ;
  result << " * inObject" ;
  GALGAS_uint index_1652_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_1652 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1652.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1652.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-method.cpp.galgasTemplate", 21)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const GALGAS_" ;
        result << enumerator_1652.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 22)).stringValue () ;
        result << " constin_" ;
        result << enumerator_1652.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 22)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1652.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-method.cpp.galgasTemplate", 23)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "GALGAS_" ;
          result << enumerator_1652.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 24)).stringValue () ;
          result << " & io_" ;
          result << enumerator_1652.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 24)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1652.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-method.cpp.galgasTemplate", 25)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1652.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 26)).stringValue () ;
            result << " & out_" ;
            result << enumerator_1652.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 26)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "GALGAS_" ;
            result << enumerator_1652.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method.cpp.galgasTemplate", 28)).stringValue () ;
            result << " in_" ;
            result << enumerator_1652.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 28)).stringValue () ;
          }
        }
      }
      index_1652_.increment () ;
      enumerator_1652.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n" ;
  GALGAS_uint index_2558_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_2558 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_2558.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_2558.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-method.cpp.galgasTemplate", 35)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        result << "  out_" ;
        result << enumerator_2558.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 36)).stringValue () ;
        result << ".drop () ;\n" ;
      }else if (kBoolFalse == test_3) {
      }
      index_2558_.increment () ;
      enumerator_2558.gotoNextObject () ;
    }
  }
  result << "  if (NULL != inObject) {\n"
    "    macroValidSharedObject (inObject, cPtr_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 40)).stringValue () ;
  result << ") ;\n"
    "    const C_galgas_type_descriptor * info = inObject->classDescriptor () ;\n"
    "    const int32_t classIndex = info->mSlotID ;\n"
    "    categoryMethodSignature_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 43)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 43)).stringValue () ;
  result << " f = NULL ;\n"
    "    if (classIndex < gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 44)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 44)).stringValue () ;
  result << ".count ()) {\n"
    "      f = gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 45)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 45)).stringValue () ;
  result << " (classIndex COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "       const C_galgas_type_descriptor * p = info->mSuperclassDescriptor ;\n"
    "       while ((NULL == f) && (NULL != p)) {\n"
    "         if (p->mSlotID < gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 50)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 50)).stringValue () ;
  result << ".count ()) {\n"
    "           f = gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 51)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 51)).stringValue () ;
  result << " (p->mSlotID COMMA_HERE) ;\n"
    "         }\n"
    "         p = p->mSuperclassDescriptor ;\n"
    "       }\n"
    "       gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 55)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 55)).stringValue () ;
  result << ".forceObjectAtIndex (classIndex, f, NULL COMMA_HERE) ;\n"
    "    }\n"
    "    if (NULL == f) {\n"
    "      fatalError (\"FATAL CATEGORY METHOD CALL ERROR\", __FILE__, __LINE__) ;\n"
    "    }else{\n"
    "      f (inObject, " ;
  GALGAS_uint index_4201_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_4201 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_4201.hasCurrentObject ()) {
      const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, enumerator_4201.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-method.cpp.galgasTemplate", 62)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        result << "constin_" ;
        result << enumerator_4201.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 63)).stringValue () ;
      }else if (kBoolFalse == test_4) {
        const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, enumerator_4201.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-method.cpp.galgasTemplate", 64)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          result << "io_" ;
          result << enumerator_4201.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 65)).stringValue () ;
        }else if (kBoolFalse == test_5) {
          const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_4201.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-method.cpp.galgasTemplate", 66)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            result << "out_" ;
            result << enumerator_4201.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 67)).stringValue () ;
          }else if (kBoolFalse == test_6) {
            result << "in_" ;
            result << enumerator_4201.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 69)).stringValue () ;
          }
        }
      }
      result << ", " ;
      index_4201_.increment () ;
      enumerator_4201.gotoNextObject () ;
    }
  }
  result << "inCompiler COMMA_THERE) ;\n"
    "    }\n"
    "  }\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineCategoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 83)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 83)).stringValue () ;
  result << " (void) {\n"
    "  enterCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 84)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 84)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 85)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 85)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void freeCategoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 90)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 90)).stringValue () ;
  result << " (void) {\n"
    "  gCategoryMethodTable_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 91)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 91)).stringValue () ;
  result << ".free () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "defineCategoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 96)).stringValue () ;
  result << ",\n"
    "       " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "freeCategoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 97)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method.cpp.galgasTemplate", 97)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate overridingCategoryMethodImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_overridingCategoryMethodImplementation (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & in_CLASS_5F_NAME,
                                                                                                              const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                              const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Overriding category method '@").add_operation (in_CLASS_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void defineCategoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 10)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 10)).stringValue () ;
  result << " (void) {\n"
    "  enterCategoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "kTypeDescriptor_GALGAS_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 11)).stringValue () ;
  result << ".mSlotID,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "categoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 12)).stringValue () ;
  result << ") ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 17)).stringValue () ;
  result << " (defineCategoryMethod_" ;
  result << in_CLASS_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 17)).stringValue () ;
  result << "_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("overriding-category-method.cpp.galgasTemplate", 17)).stringValue () ;
  result << ", NULL) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate filewrapperDeclaration'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperDeclaration (C_Compiler * inCompiler,
                                                                                              const GALGAS_stringlist & in_FILE_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_stringlist & in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST,
                                                                                              const GALGAS_string & in_FILEWRAPPER_5F_NAME
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_625_idx (0) ;
  if (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_625 (in_TEXT_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_625.hasCurrentObject ()) {
      result << "extern const char * gWrapperFileContent_" ;
      result << enumerator_625.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 8)).stringValue () ;
      result << " ;\n" ;
      index_625_idx.increment () ;
      enumerator_625.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_913_idx (0) ;
  if (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_913 (in_BINARY_5F_CONTENT_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_913.hasCurrentObject ()) {
      result << "extern const uint8_t gWrapperFileContent_" ;
      result << enumerator_913.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 14)).stringValue () ;
      result << " [] ;\n" ;
      index_913_idx.increment () ;
      enumerator_913.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1195_idx (0) ;
  if (in_FILE_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1195 (in_FILE_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_1195.hasCurrentObject ()) {
      result << "extern const cRegularFileWrapper gWrapperFile_" ;
      result << enumerator_1195.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 20)).stringValue () ;
      result << " ;\n" ;
      index_1195_idx.increment () ;
      enumerator_1195.gotoNextObject () ;
    }
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1474_ (0) ;
  if (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST.isValid ()) {
    cEnumerator_stringlist enumerator_1474 (in_DIRECTORY_5F_INDEX_5F_STRING_5F_LIST, kEnumeration_up) ;
    while (enumerator_1474.hasCurrentObject ()) {
      result << "extern const cDirectoryWrapper gWrapperDirectory_" ;
      result << enumerator_1474.current_mValue (HERE).stringValue () ;
      result << "_" ;
      result << in_FILEWRAPPER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-declaration.h.galgasTemplate", 26)).stringValue () ;
      result << " ;\n" ;
      index_1474_.increment () ;
      enumerator_1474.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate filewrapperImplementation'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperImplementation (C_Compiler * inCompiler,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                 const GALGAS_string & in_FILEWRAPPER_5F_IMPLEMENTATION
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FILEWRAPPER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate categoryReaderAsFunctionDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                           const GALGAS_string & in_READER_5F_NAME,
                                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category Getter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("' (as function)"), inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " categoryReader_" ;
  result << in_READER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " & inObject" ;
  GALGAS_uint index_820_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_820 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_820.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = enumerator_820.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_820.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
        result << " & constinArgument" ;
        result << index_820_IDX.reader_string (SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_820.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
        result << " inArgument" ;
        result << index_820_IDX.reader_string (SOURCE_FILE ("category-reader-as-function-declaration.h.galgasTemplate", 13)).stringValue () ;
      }
      index_820_IDX.increment () ;
      enumerator_820.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryReaderAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryReaderAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const GALGAS_string & in_READER_5F_NAME,
                                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category Reader '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (in_READER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-reader-as-function-implementation.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-reader-as-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Filewrapper template 'semanticComponentGenerationTemplate categoryMethodAsFunctionDeclaration'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                           const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                           const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                           const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void categoryMethod_" ;
  result << in_METHOD_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "const class GALGAS_" ;
  result << in_TYPE_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " inObject" ;
  GALGAS_uint index_760_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_760 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_760.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_760.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_760.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_760.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_760.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_760.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_760.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_760.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_760.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_760.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_760.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_760.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-method-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_760_.increment () ;
      enumerator_760.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryMethodAsFunctionImplementation'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMethodAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                              const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                              const GALGAS_string & in_METHOD_5F_NAME,
                                                                                                              const GALGAS_string & in_METHOD_5F_IMPLEMENTATION
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category method '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-method-as-function.cpp.galgasTemplate", 3)).add_operation (in_METHOD_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-method-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-method-as-function.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-method-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_METHOD_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//          Filewrapper template 'semanticComponentGenerationTemplate categoryModifierAsFunctionDeclaration'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryModifierAsFunctionDeclaration (C_Compiler * inCompiler,
                                                                                                             const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                             const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                             const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void categoryModifier_" ;
  result << in_MODIFIER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class GALGAS_" ;
  result << in_TYPE_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 7)).stringValue () ;
  result << " & ioObject" ;
  GALGAS_uint index_762_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_762 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_762.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 10)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_762.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 11)).stringValue () ;
        result << " constin_" ;
        result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 11)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 12)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_762.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 13)).stringValue () ;
          result << " & io_" ;
          result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 13)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_762.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 14)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_762.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 15)).stringValue () ;
            result << " & out_" ;
            result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 15)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_762.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 17)).stringValue () ;
            result << " in_" ;
            result << enumerator_762.current_mFormalArgumentName (HERE).mAttribute_string.reader_identifierRepresentation (SOURCE_FILE ("category-modifier-as-function.h.galgasTemplate", 17)).stringValue () ;
          }
        }
      }
      index_762_.increment () ;
      enumerator_762.gotoNextObject () ;
    }
  }
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//        Filewrapper template 'semanticComponentGenerationTemplate categoryMmodifierAsFunctionImplementation'         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_categoryMmodifierAsFunctionImplementation (C_Compiler * inCompiler,
                                                                                                                 const GALGAS_string & in_TYPE_5F_NAME,
                                                                                                                 const GALGAS_string & in_MODIFIER_5F_NAME,
                                                                                                                 const GALGAS_string & in_MODIFIER_5F_IMPLEMENTATION
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Category setter '@").add_operation (in_TYPE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.cpp.galgasTemplate", 3)).add_operation (in_MODIFIER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("category-modifier-as-function.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("category-modifier-as-function.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_MODIFIER_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Filewrapper template 'semanticComponentGenerationTemplate functionDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionDeclaration (C_Compiler * inCompiler,
                                                                                           const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                           const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                           const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_707_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_707 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_707.hasCurrentObject ()) {
      const enumGalgasBool test_0 = enumerator_707.current_mIsConstant (HERE).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_707.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " & constinArgument" ;
        result << index_707_IDX.reader_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }else if (kBoolFalse == test_0) {
        result << "class GALGAS_" ;
        result << enumerator_707.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << " inArgument" ;
        result << index_707_IDX.reader_string (SOURCE_FILE ("function-declaration.h.galgasTemplate", 12)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
      }
      index_707_IDX.increment () ;
      enumerator_707.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate functionImplementation'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_functionImplementation (C_Compiler * inCompiler,
                                                                                              const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                              const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                              const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                              const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Function introspection                                                                                             *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).reader_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 12)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_1142_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_1142 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_1142.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << enumerator_1142.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 15)).stringValue () ;
      result << ",\n" ;
      index_1142_.increment () ;
      enumerator_1142.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 23)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  return function_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 28)).stringValue () ;
    result << " (inCompiler COMMA_THERE).reader_object (THERE) ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 31)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* \xC2""\xA7""\xC2""\xA7"" inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_2393_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2393 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_2393.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << enumerator_2393.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " operand" ;
        result << index_2393_IDX.reader_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << " = GALGAS_" ;
        result << enumerator_2393.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
        result << "::extractObject (" ;
        columnMarker = result.currentColumn () ;
        result << "inEffectiveParameterArray.objectAtIndex (" ;
        result << index_2393_IDX.reader_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 37)).stringValue () ;
        result << " COMMA_HERE),\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "inCompiler\n"
          "  " ;
        result.appendSpacesUntilColumn (columnMarker) ;
        result << "COMMA_THERE) ;\n" ;
        index_2393_IDX.increment () ;
        enumerator_2393.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 41)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    GALGAS_uint index_2803_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_2803 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_2803.hasCurrentObject ()) {
        result << "operand" ;
        result << index_2803_IDX.reader_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 43)).stringValue () ;
        result << ",\n" ;
        result.appendSpacesUntilColumn (columnMarker) ;
        index_2803_IDX.increment () ;
        enumerator_2803.gotoNextObject () ;
      }
    }
    result << "inCompiler\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_THERE).reader_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_galgas_function_descriptor functionDescriptor_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << in_FUNCTION_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 51)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionWithGenericHeader_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 52)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "& kTypeDescriptor_GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).reader_string (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionArgs_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("function-implementation.cpp.galgasTemplate", 55)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Filewrapper template 'semanticComponentGenerationTemplate routineDeclaration'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineDeclaration (C_Compiler * inCompiler,
                                                                                          const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                          const GALGAS_formalParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "void routine_" ;
  result << in_ROUTINE_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  GALGAS_uint index_669_IDX (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalParameterListForGeneration enumerator_669 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_669.hasCurrentObject ()) {
      const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_669.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 9)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        result << "const class GALGAS_" ;
        result << enumerator_669.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
        result << " constinArgument" ;
        result << index_669_IDX.reader_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 10)).stringValue () ;
      }else if (kBoolFalse == test_0) {
        const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_669.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 11)))).boolEnum () ;
        if (kBoolTrue == test_1) {
          result << "class GALGAS_" ;
          result << enumerator_669.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
          result << " & ioArgument" ;
          result << index_669_IDX.reader_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 12)).stringValue () ;
        }else if (kBoolFalse == test_1) {
          const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_669.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 13)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_669.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
            result << " & outArgument" ;
            result << index_669_IDX.reader_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 14)).stringValue () ;
          }else if (kBoolFalse == test_2) {
            result << "class GALGAS_" ;
            result << enumerator_669.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
            result << " inArgument" ;
            result << index_669_IDX.reader_string (SOURCE_FILE ("routine-declaration.h.galgasTemplate", 16)).stringValue () ;
          }
        }
      }
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      index_669_IDX.increment () ;
      enumerator_669.gotoNextObject () ;
    }
  }
  result << "class C_Compiler * inCompiler\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'semanticComponentGenerationTemplate routineImplementation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_routineImplementation (C_Compiler * inCompiler,
                                                                                             const GALGAS_string & in_ROUTINE_5F_NAME,
                                                                                             const GALGAS_string & in_ROUTINE_5F_IMPLEMENTATION
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Routine '").add_operation (in_ROUTINE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("routine-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_ROUTINE_5F_IMPLEMENTATION.stringValue () ;
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'semanticComponentGenerationTemplate onceFunctionImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_onceFunctionImplementation (C_Compiler * inCompiler,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_NAME,
                                                                                                  const GALGAS_string & in_FUNCTION_5F_IMPLEMENTATION,
                                                                                                  const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                  const GALGAS_string & in_RETURN_5F_TYPE_5F_IDENTIFIER
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Once function '").add_operation (in_FUNCTION_5F_NAME, inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  result << in_FUNCTION_5F_IMPLEMENTATION.stringValue () ;
  result << "\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Function implementation                                                                                            *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static bool gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 13)).stringValue () ;
  result << " = false ;\n"
    "static GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 14)).stringValue () ;
  result << " ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << " function_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 18)).stringValue () ;
  result << " (" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "class C_Compiler * inCompiler\n"
    "              " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) {\n"
    "  if (! gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 20)).stringValue () ;
  result << ") {\n"
    "    gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result << " = onceFunction_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 21)).stringValue () ;
  result << " (inCompiler COMMA_THERE) ;\n"
    "    gOnceFunctionResultAvailable_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 22)).stringValue () ;
  result << " = true ;\n"
    "  }\n"
    "  return gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 24)).stringValue () ;
  result << " ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static void releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 29)).stringValue () ;
  result << " (void) {\n"
    "  gOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 30)).stringValue () ;
  result << ".drop () ;\n"
    "}\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_PrologueEpilogue gEpilogueForOnceFunction_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 35)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "NULL,\n"
    "        " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "releaseOnceFunctionResult_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 36)).stringValue () ;
  result << ") ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//  Function introspection                                                                                             *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "static const C_galgas_type_descriptor * functionArgs_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << " [" ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).reader_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 42)).stringValue () ;
  result << "] = {\n" ;
  GALGAS_uint index_3003_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_3003 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_3003.hasCurrentObject ()) {
      result << "  & kTypeDescriptor_GALGAS_" ;
      result << enumerator_3003.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 45)).stringValue () ;
      result << ",\n" ;
      index_3003_.increment () ;
      enumerator_3003.gotoNextObject () ;
    }
  }
  result << "  NULL\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 53)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 54)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & /* inEffectiveParameterArray */,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* inErrorLocation */\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n"
      "  return function_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 58)).stringValue () ;
    result << " (inCompiler COMMA_THERE).reader_object (THERE) ;\n"
      "}\n" ;
  }else if (kBoolFalse == test_0) {
    result << "static GALGAS_object functionWithGenericHeader_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 61)).stringValue () ;
    result << " (" ;
    columnMarker = result.currentColumn () ;
    result << "C_Compiler * inCompiler,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const cObjectArray & inEffectiveParameterArray,\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "const GALGAS_location & /* \xC2""\xA7""\xC2""\xA7"" inErrorLocation*/\n" ;
    result.appendSpacesUntilColumn (columnMarker) ;
    result << "COMMA_LOCATION_ARGS) {\n" ;
    GALGAS_uint index_4253_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4253 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_4253.hasCurrentObject ()) {
        result << "  const GALGAS_" ;
        result << enumerator_4253.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " operand" ;
        result << index_4253_IDX.reader_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " = GALGAS_" ;
        result << enumerator_4253.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << "::extractObject (inEffectiveParameterArray.objectAtIndex (" ;
        result << index_4253_IDX.reader_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 66)).stringValue () ;
        result << " COMMA_HERE), inCompiler COMMA_THERE) ;\n" ;
        index_4253_IDX.increment () ;
        enumerator_4253.gotoNextObject () ;
      }
    }
    result << "  return function_" ;
    result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 68)).stringValue () ;
    result << " (" ;
    GALGAS_uint index_4640_IDX (0) ;
    if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
      cEnumerator_formalInputParameterListForGeneration enumerator_4640 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
      while (enumerator_4640.hasCurrentObject ()) {
        result << "operand" ;
        result << index_4640_IDX.reader_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 70)).stringValue () ;
        result << ", " ;
        index_4640_IDX.increment () ;
        enumerator_4640.gotoNextObject () ;
      }
    }
    result << "inCompiler COMMA_THERE).reader_object (THERE) ;\n"
      "}\n" ;
  }
  result << "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "C_galgas_function_descriptor functionDescriptor_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << in_FUNCTION_5F_NAME.reader_utf_38_Representation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 78)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionWithGenericHeader_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 79)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "& kTypeDescriptor_GALGAS_" ;
  result << in_RETURN_5F_TYPE_5F_IDENTIFIER.stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << in_FORMAL_5F_ARGUMENT_5F_LIST.reader_length (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).reader_string (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 81)).stringValue () ;
  result << ",\n" ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "functionArgs_" ;
  result << in_FUNCTION_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("once-function-implementation.cpp.galgasTemplate", 82)).stringValue () ;
  result << ") ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateDeclaration'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateDeclaration (C_Compiler * inCompiler,
                                                                                                      const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                      const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                      const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "class C_Compiler * inCompiler" ;
  GALGAS_uint index_798_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_798 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_798.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const class GALGAS_" ;
      result << enumerator_798.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.h.galgasTemplate", 9)).stringValue () ;
      result << " & " ;
      result << enumerator_798.current_mFormalArgumentCppName (HERE).stringValue () ;
      index_798_.increment () ;
      enumerator_798.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Filewrapper template 'semanticComponentGenerationTemplate filewrapperTemplateImplementation'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_semanticComponentGenerationTemplate_filewrapperTemplateImplementation (C_Compiler * inCompiler,
                                                                                                         const GALGAS_string & in_FILEWRAPPER_5F_NAME,
                                                                                                         const GALGAS_string & in_TEMPLATE_5F_NAME,
                                                                                                         const GALGAS_formalInputParameterListForGeneration & in_FORMAL_5F_ARGUMENT_5F_LIST,
                                                                                                         const GALGAS_stringset & in_UNUSED_5F_VAR_5F_SET,
                                                                                                         const GALGAS_bool & in_USES_5F_COLUMN_5F_MARKER,
                                                                                                         const GALGAS_string & in_GENERATED_5F_INSTRUCTION_5F_STRING
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  uint32_t columnMarker = 0 ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Filewrapper template '").add_operation (in_FILEWRAPPER_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (in_TEMPLATE_5F_NAME, inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "GALGAS_string filewrapperTemplate_" ;
  result << in_FILEWRAPPER_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result << "_" ;
  result << in_TEMPLATE_5F_NAME.reader_identifierRepresentation (SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 7)).stringValue () ;
  result << " (" ;
  columnMarker = result.currentColumn () ;
  result << "C_Compiler * " ;
  const enumGalgasBool test_0 = in_UNUSED_5F_VAR_5F_SET.reader_hasKey (function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 8)).boolEnum () ;
  if (kBoolTrue == test_0) {
    result << "/* " ;
    result << function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 9)).stringValue () ;
    result << " */" ;
  }else if (kBoolFalse == test_0) {
    result << function_compilerCppName (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 11)).stringValue () ;
  }
  GALGAS_uint index_907_ (0) ;
  if (in_FORMAL_5F_ARGUMENT_5F_LIST.isValid ()) {
    cEnumerator_formalInputParameterListForGeneration enumerator_907 (in_FORMAL_5F_ARGUMENT_5F_LIST, kEnumeration_up) ;
    while (enumerator_907.hasCurrentObject ()) {
      result << ",\n" ;
      result.appendSpacesUntilColumn (columnMarker) ;
      result << "const GALGAS_" ;
      result << enumerator_907.current_mFormalArgumentType (HERE).reader_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 14)).stringValue () ;
      result << " & " ;
      const enumGalgasBool test_1 = in_UNUSED_5F_VAR_5F_SET.reader_hasKey (enumerator_907.current_mFormalArgumentCppName (HERE) COMMA_SOURCE_FILE ("filewrapper-template.cpp.galgasTemplate", 15)).boolEnum () ;
      if (kBoolTrue == test_1) {
        result << "/* " ;
        result << enumerator_907.current_mFormalArgumentCppName (HERE).stringValue () ;
        result << " */" ;
      }else if (kBoolFalse == test_1) {
        result << enumerator_907.current_mFormalArgumentCppName (HERE).stringValue () ;
      }
      index_907_.increment () ;
      enumerator_907.gotoNextObject () ;
    }
  }
  result << "\n"
    " " ;
  result.appendSpacesUntilColumn (columnMarker) ;
  result << "COMMA_UNUSED_LOCATION_ARGS) {\n"
    "  C_String result ;\n" ;
  const enumGalgasBool test_2 = in_USES_5F_COLUMN_5F_MARKER.boolEnum () ;
  if (kBoolTrue == test_2) {
    result << "  uint32_t columnMarker = 0 ;\n" ;
  }else if (kBoolFalse == test_2) {
  }
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ()) ;
  }
  result << in_GENERATED_5F_INSTRUCTION_5F_STRING.stringValue () ;
  if (GALGAS_uint ((uint32_t) 2U).isValid ()) {
    result.incIndentation (- ((int32_t) GALGAS_uint ((uint32_t) 2U).uintValue ())) ;
  }
  result << "  return GALGAS_string (result) ;\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                      Routine 'recursivlyEnumerateRegularFile'                                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_recursivlyEnumerateRegularFile (const GALGAS_wrapperFileMap constinArgument_inFilewrapperFileMap,
                                             const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                             GALGAS_stringlist & ioArgument_ioRegularFileIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioDirectoryIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularTextContentIndexStringList,
                                             GALGAS_stringlist & ioArgument_ioRegularBinaryContentIndexStringList,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioDirectoryIndexStringList.addAssign_operation (ioArgument_ioDirectoryIndexStringList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 2319)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2319))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2319)) ;
  cEnumerator_wrapperFileMap enumerator_90441 (constinArgument_inFilewrapperFileMap, kEnumeration_up) ;
  while (enumerator_90441.hasCurrentObject ()) {
    ioArgument_ioRegularFileIndexStringList.addAssign_operation (ioArgument_ioRegularFileIndexStringList.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 2321)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2321))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2321)) ;
    const enumGalgasBool test_0 = enumerator_90441.current_mIsTextFile (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioRegularTextContentIndexStringList.addAssign_operation (enumerator_90441.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2323))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2323)) ;
    }else if (kBoolFalse == test_0) {
      ioArgument_ioRegularBinaryContentIndexStringList.addAssign_operation (enumerator_90441.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2325))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2325)) ;
    }
    enumerator_90441.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_90761 (constinArgument_inFilewrapperDirectoryMap, kEnumeration_up) ;
  while (enumerator_90761.hasCurrentObject ()) {
    {
    routine_recursivlyEnumerateRegularFile (enumerator_90761.current_mRegularFileMap (HERE), enumerator_90761.current_mDirectoryMap (HERE), ioArgument_ioRegularFileIndexStringList, ioArgument_ioDirectoryIndexStringList, ioArgument_ioRegularTextContentIndexStringList, ioArgument_ioRegularBinaryContentIndexStringList, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2329)) ;
    }
    enumerator_90761.gotoNextObject () ;
  }
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                          Routine 'generateWrapperContents'                                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

void routine_generateWrapperContents (const GALGAS_string constinArgument_inFilewrapperName,
                                      const GALGAS_string constinArgument_inFilewrapperDirectory,
                                      const GALGAS_uint constinArgument_inFilewrapperDirectoryIndex,
                                      const GALGAS_wrapperFileMap constinArgument_inFilewrapperRegularFileMap,
                                      const GALGAS_wrapperDirectoryMap constinArgument_inFilewrapperDirectoryMap,
                                      GALGAS_string & ioArgument_ioImplementation,
                                      C_Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_wrapperFileMap enumerator_92779 (constinArgument_inFilewrapperRegularFileMap, kEnumeration_up) ;
  while (enumerator_92779.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_92779.current_mIsTextFile (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_contents = GALGAS_string::constructor_stringWithContentsOfFile (enumerator_92779.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2386)) ;
      ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (enumerator_92779.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2387)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (GALGAS_string ("const char * gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)).add_operation (enumerator_92779.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2389)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2388)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2389)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2390)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2389)).add_operation (GALGAS_string (" = "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2390)).add_operation (var_contents.reader_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2391)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2390)).add_operation (GALGAS_string (" ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2391)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2391)).add_operation (enumerator_92779.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2392)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2393)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2392)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2393)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2393)).add_operation (enumerator_92779.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2394)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2394)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2394)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2394)).add_operation (enumerator_92779.current_lkey (HERE).mAttribute_string.reader_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 2395)).reader_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2395)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (GALGAS_string ("  true, // Text file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2395)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2396)).add_operation (var_contents.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 2397)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2397)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2397)).add_operation (GALGAS_string (", // Text length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2397)).add_operation (GALGAS_string ("  gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2397)).add_operation (enumerator_92779.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2398)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2398)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2398)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2398)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2398)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2398)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2398))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2387)) ;
    }else if (kBoolFalse == test_0) {
      GALGAS_data var_contents = GALGAS_data::constructor_dataWithContentsOfFile (enumerator_92779.current_mAbsoluteFilePath (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2401)) ;
      ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("//--- File '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (enumerator_92779.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2402)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (GALGAS_string ("'\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (GALGAS_string ("const uint8_t gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)).add_operation (enumerator_92779.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2404)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2403)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2404)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2404)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2405)).add_operation (var_contents.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 2405)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2405)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2405)).add_operation (GALGAS_string ("] = {"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2405)).add_operation (var_contents.reader_cStringRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2406)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2405)).add_operation (GALGAS_string ("} ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2406)).add_operation (GALGAS_string ("const cRegularFileWrapper gWrapperFile_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2406)).add_operation (enumerator_92779.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2407)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2407)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2407)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2408)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2407)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2408)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2408)).add_operation (enumerator_92779.current_lkey (HERE).mAttribute_string.reader_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2409)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2409)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2409)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2409)).add_operation (enumerator_92779.current_lkey (HERE).mAttribute_string.reader_pathExtension (SOURCE_FILE ("semanticGeneration.galgas", 2410)).reader_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2410)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (GALGAS_string ("  false, // binary file\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2410)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2411)).add_operation (var_contents.reader_length (SOURCE_FILE ("semanticGeneration.galgas", 2412)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2412)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2412)).add_operation (GALGAS_string (", // Length\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2412)).add_operation (GALGAS_string ("  (const char *) gWrapperFileContent_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2412)).add_operation (enumerator_92779.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2413)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413)).add_operation (GALGAS_string (") ;\n"
        "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2413))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2402)) ;
    }
    enumerator_92779.gotoNextObject () ;
  }
  cEnumerator_wrapperDirectoryMap enumerator_94652 (constinArgument_inFilewrapperDirectoryMap, kEnumeration_up) ;
  while (enumerator_94652.hasCurrentObject ()) {
    {
    routine_generateWrapperContents (constinArgument_inFilewrapperName, enumerator_94652.current_lkey (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2421)), enumerator_94652.current_mWrapperDirectoryIndex (HERE), enumerator_94652.current_mRegularFileMap (HERE), enumerator_94652.current_mDirectoryMap (HERE), ioArgument_ioImplementation, inCompiler  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2419)) ;
    }
    enumerator_94652.gotoNextObject () ;
  }
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("//--- All files of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)).add_operation (GALGAS_string ("static const cRegularFileWrapper * gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2431)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2430)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)).add_operation (constinArgument_inFilewrapperDirectoryIndex.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2431)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2431)).add_operation (constinArgument_inFilewrapperRegularFileMap.reader_count (SOURCE_FILE ("semanticGeneration.galgas", 2432)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2432)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2432)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2432)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2432))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2429)) ;
  cEnumerator_wrapperFileMap enumerator_95232 (constinArgument_inFilewrapperRegularFileMap, kEnumeration_up) ;
  while (enumerator_95232.hasCurrentObject ()) {
    ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("  & gWrapperFile_").add_operation (enumerator_95232.current_mWrapperFileIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2434)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2434)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2434)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2434)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2434)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2434))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2434)) ;
    enumerator_95232.gotoNextObject () ;
  }
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2436)) ;
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("//--- All sub-directories of '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)).add_operation (GALGAS_string ("' directory\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)).add_operation (GALGAS_string ("static const cDirectoryWrapper * gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2441)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2440)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)).add_operation (constinArgument_inFilewrapperDirectoryIndex.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2441)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)).add_operation (GALGAS_string (" ["), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2441)).add_operation (constinArgument_inFilewrapperDirectoryMap.reader_count (SOURCE_FILE ("semanticGeneration.galgas", 2442)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2442)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2442)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2442)).add_operation (GALGAS_string ("] = {\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2442))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2439)) ;
  cEnumerator_wrapperDirectoryMap enumerator_95829 (constinArgument_inFilewrapperDirectoryMap, kEnumeration_up) ;
  while (enumerator_95829.hasCurrentObject ()) {
    ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("  & gWrapperDirectory_").add_operation (enumerator_95829.current_mWrapperDirectoryIndex (HERE).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2444)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2444)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2444)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2444)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2444)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2444))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2444)) ;
    enumerator_95829.gotoNextObject () ;
  }
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("  NULL\n").add_operation (GALGAS_string ("} ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2446)) ;
  ioArgument_ioImplementation.dotAssign_operation (GALGAS_string ("//--- Directory '").add_operation (constinArgument_inFilewrapperDirectory, inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)).add_operation (GALGAS_string ("'\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)).add_operation (GALGAS_string ("const cDirectoryWrapper gWrapperDirectory_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)).add_operation (constinArgument_inFilewrapperDirectoryIndex.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2450)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2450)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2450)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2451)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2450)).add_operation (GALGAS_string (" (\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2451)).add_operation (constinArgument_inFilewrapperDirectory.reader_utf_38_Representation (SOURCE_FILE ("semanticGeneration.galgas", 2452)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2452)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2452)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2452)).add_operation (constinArgument_inFilewrapperRegularFileMap.reader_count (SOURCE_FILE ("semanticGeneration.galgas", 2453)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2453)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (GALGAS_string ("  gWrapperAllFiles_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2453)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2454)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)).add_operation (constinArgument_inFilewrapperDirectoryIndex.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2454)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)).add_operation (GALGAS_string ("  "), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2454)).add_operation (constinArgument_inFilewrapperDirectoryMap.reader_count (SOURCE_FILE ("semanticGeneration.galgas", 2455)).reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2455)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2455)).add_operation (GALGAS_string (",\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2455)).add_operation (GALGAS_string ("  gWrapperAllDirectories_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2455)).add_operation (constinArgument_inFilewrapperName.reader_identifierRepresentation (SOURCE_FILE ("semanticGeneration.galgas", 2456)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2456)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2456)).add_operation (constinArgument_inFilewrapperDirectoryIndex.reader_string (SOURCE_FILE ("semanticGeneration.galgas", 2456)), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2456)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2456)).add_operation (GALGAS_string (") ;\n"
    "\n"), inCompiler COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2456))  COMMA_SOURCE_FILE ("semanticGeneration.galgas", 2449)) ;
}


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                                   Filewrapper 'predefinedTypeGenerationTemplate'                                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

//--- All files of '' directory

static const cRegularFileWrapper * gWrapperAllFiles_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- All sub-directories of '' directory

static const cDirectoryWrapper * gWrapperAllDirectories_predefinedTypeGenerationTemplate_0 [1] = {
  NULL
} ;

//--- Directory ''

const cDirectoryWrapper gWrapperDirectory_0_predefinedTypeGenerationTemplate (
  "",
  0,
  gWrapperAllFiles_predefinedTypeGenerationTemplate_0,
  0,
  gWrapperAllDirectories_predefinedTypeGenerationTemplate_0
) ;


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypesImplementation'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypesImplementation (C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/predefined-types.h\"\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_Compiler.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "cMapElement::cMapElement (const GALGAS_lstring & inLKey\n"
    "                          COMMA_LOCATION_ARGS) :\n"
    "cCollectionElement (THERE),\n"
    "mAttribute_lkey (inLKey) {\n"
    "}\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Filewrapper template 'predefinedTypeGenerationTemplate primitiveTypesHeaderPrologue'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_primitiveTypesHeaderPrologue (C_Compiler * /* inCompiler */,
                                                                                                 const GALGAS_stringset & in_TYPE_5F_LIST
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "\n"
    "#ifndef GALGAS2_INCLUDED_DEFINITIONS\n"
    "#define GALGAS2_INCLUDED_DEFINITIONS\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"strings/C_String.h\"\n"
    "#include \"time/C_Timer.h\"\n"
    "#include \"galgas2/AC_GALGAS_root.h\"\n"
    "#include \"galgas2/C_galgas_type_descriptor.h\"\n"
    "#include \"galgas2/typeComparisonResult.h\"\n"
    "#include \"galgas2/cGenericAbstractEnumerator.h\"\n"
    "#include \"galgas2/cEnumerator_range.h\"\n"
    "#include \"galgas2/AC_GALGAS_list.h\"\n"
    "#include \"galgas2/AC_GALGAS_sortedlist.h\"\n"
    "#include \"galgas2/AC_GALGAS_map.h\"\n"
    "#include \"galgas2/AC_GALGAS_uniqueMap.h\"\n"
    "#include \"galgas2/AC_GALGAS_class.h\"\n"
    "#include \"galgas2/AC_GALGAS_enumAssociatedValues.h\"\n"
    "#include \"galgas2/AC_GALGAS_graph.h\"\n"
    "#include \"galgas2/acPtr_class.h\"\n"
    "#include \"command_line_interface/C_BoolCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_UIntCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringCommandLineOption.h\"\n"
    "#include \"command_line_interface/C_StringListCommandLineOption.h\"\n"
    "#include \"utilities/C_PrologueEpilogue.h\"\n"
    "#include \"utilities/C_BigInt.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_Compiler ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n" ;
  GALGAS_uint index_1388_ (0) ;
  if (in_TYPE_5F_LIST.isValid ()) {
    cEnumerator_stringset enumerator_1388 (in_TYPE_5F_LIST, kEnumeration_up) ;
    while (enumerator_1388.hasCurrentObject ()) {
      result << "class GALGAS_" ;
      result << enumerator_1388.current_key (HERE).reader_identifierRepresentation (SOURCE_FILE ("predefined-types-file-header.h.galgasTemplate", 37)).stringValue () ;
      result << " ;\n" ;
      index_1388_.increment () ;
      enumerator_1388.gotoNextObject () ;
    }
  }
  result << "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Filewrapper template 'predefinedTypeGenerationTemplate predefinedTypeSeparation'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_predefinedTypeSeparation (C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/cCollectionElement.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cMapElement : public cCollectionElement {\n"
    "//--- Attribut\n"
    "  public : GALGAS_lstring mAttribute_lkey ;\n"
    "\n"
    "//--- Default constructor\n"
    "  public : cMapElement (const GALGAS_lstring & inLKey\n"
    "                        COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cMapElement (const cMapElement &) ;\n"
    "  private : cMapElement & operator = (const cMapElement &) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/cSortedListElement.h\"\n"
    "#include \"galgas2/capSortedListElement.h\"\n"
    "#include \"galgas2/C_galgas_function_descriptor.h\"\n"
    "#include \"galgas2/cObjectArray.h\"\n"
    "\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate sint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@sint type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("sint-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_sint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : int32_t mSIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline int32_t intValue (void) const { return mSIntValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_sint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_sint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_sint (const int32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate sint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_sint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@sint64 type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("sint64-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_sint_36__34_ : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : int64_t mSInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline int64_t int64Value (void) const { return mSInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_sint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_sint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_sint_36__34_ (const int64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate object_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_object_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@object type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("object-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cPtr_object ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_object : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private : cPtr_object * mSharedObject ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedObject != NULL ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Constructor from pointer\n"
    "  public : GALGAS_object (AC_GALGAS_root * inObjectPointer\n"
    "                          COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_object (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_object (const GALGAS_object & inSource) ;\n"
    "  public : GALGAS_object & operator = (const GALGAS_object & inSource) ;\n"
    "\n"
    "//--------------------------------- Embedded Object\n"
    "  public : const AC_GALGAS_root * embeddedObject (void) const ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate uint_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@uint type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("uint-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_uint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : uint32_t mUIntValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline uint32_t uintValue (void) const { return mUIntValue ; }\n"
    "  public : inline void increment (void) { mUIntValue ++ ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_uint (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_uint constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public : GALGAS_uint (const uint32_t inValue) ;\n"
    "  public : GALGAS_uint (const bool inValid, const uint32_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate uint64_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_uint_36__34__5F_type (C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@uint64 type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("uint64-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_uint_36__34_ : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : uint64_t mUInt64Value ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline uint64_t uint64Value (void) const { return mUInt64Value ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_uint_36__34_ (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_uint_36__34_ constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_uint_36__34_ (const uint64_t inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate bool_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bool_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@bool type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("bool-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "typedef enum {kBoolNotValid, kBoolFalse, kBoolTrue} enumGalgasBool ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_bool : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : bool mBoolValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : inline bool isValidAndTrue (void) const { return mIsValid && mBoolValue ; }\n"
    "  public : inline bool boolValue (void) const { return mBoolValue ; }\n"
    "  public : enumGalgasBool boolEnum (void) const ;\n"
    "\n"
    "//--------------------------------- Drop\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_bool (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_bool constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public : GALGAS_bool (const bool inValue) ; // Is built\n"
    "  public : GALGAS_bool (const bool inBuilt, const bool inValue) ;\n"
    "\n"
    "//--------------------------------- Constructor for comparison result\n"
    "  public : GALGAS_bool (const typeComparisonKind inComparisonKind,\n"
    "                        const typeComparisonResult inComparisonResult) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate binaryset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_binaryset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@binaryset type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("binaryset-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"bdd/C_BDD.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_binaryset : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : C_BDD mBDD ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline C_BDD bddValue (void) const { return mBDD ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_binaryset (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_binaryset (const C_BDD & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate function_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_function_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@function type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("function-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_galgas_function_descriptor ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_function : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data member\n"
    "  private : const C_galgas_function_descriptor * mFunctionDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mFunctionDescriptor ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mFunctionDescriptor = NULL ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline const C_galgas_function_descriptor * functionValue (void) const { return mFunctionDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_function (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_function (const GALGAS_function & inSource) ;\n"
    "  public : GALGAS_function & operator = (const GALGAS_function & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_function (const C_galgas_function_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate type_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_type_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@type type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("type-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_type : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : const C_galgas_type_descriptor * mTypeDescriptor ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return NULL != mTypeDescriptor ; }\n"
    "  public : inline void drop (void) { mTypeDescriptor = NULL ; }\n"
    "  public : inline const C_galgas_type_descriptor * typeValue (void) const { return mTypeDescriptor ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_type (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_type (const GALGAS_type & inSource) ;\n"
    "  public : GALGAS_type & operator = (const GALGAS_type & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_type (const C_galgas_type_descriptor * inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Filewrapper template 'predefinedTypeGenerationTemplate location_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_location_5F_type (C_Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@location type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("location-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class C_SourceTextInString ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "#include \"galgas2/C_LocationInSource.h\"\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_location : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : C_LocationInSource mStartLocationInSource ;\n"
    "  private : C_LocationInSource mEndLocationInSource ;\n"
    "  private : C_SourceTextInString * mSourceText ;\n"
    "  private : bool mIsValid ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG bool isValidAndNotNowhere (void) const ;\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public : C_LocationInSource startLocation (void) const { return mStartLocationInSource ; }\n"
    "  public : C_LocationInSource endLocation (void) const { return mEndLocationInSource ; }\n"
    "  public : C_SourceTextInString * sourceText (void) const { return mSourceText ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_location (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_location (const GALGAS_location & inSource) ;\n"
    "  public : GALGAS_location & operator = (const GALGAS_location & inSource) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_location (const C_LocationInSource & inStartLocationInSource,\n"
    "                            const C_LocationInSource & inEndLocationInSource,\n"
    "                            C_SourceTextInString * inSourceText) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate data_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_data_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@data type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("data-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_data : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : C_Data mData ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline C_Data dataValue (void) const { return mData ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_data (void) ;\n"
    "\n"
    "//--------------------------------- Native constructors\n"
    "  public : GALGAS_data (const C_Data & inData) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Filewrapper template 'predefinedTypeGenerationTemplate char_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_char_5F_type (C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@char type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("char-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_char : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : utf32 mCharValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline utf32 charValue (void) const { return mCharValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_char (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_char constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_char (const utf32 inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate double_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_double_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@double type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("double-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_double : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : double mDoubleValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mIsValid = false ; }\n"
    "  public : inline double doubleValue (void) const { return mDoubleValue ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_double (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_double constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_double (const double inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate string_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_string_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@string type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("string-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_string & inString) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "AC_OutputStream & operator << (AC_OutputStream & inStream,\n"
    "                               const GALGAS_lstring & inString) ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_string : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : bool mIsValid ;\n"
    "  private : C_String mString ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "  public : inline C_String stringValue (void) const { return mString ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_string (void) ;\n"
    "\n"
    "//--------------------------------- Default GALGAS constructor\n"
    "  public : static GALGAS_string constructor_default (LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Constructor for making an empty string\n"
    "  public : static GALGAS_string makeEmptyString (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_string (const C_String & inValue) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Filewrapper template 'predefinedTypeGenerationTemplate stringset_type'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_stringset_5F_type (C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@stringset type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("stringset-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cSharedStringsetRoot ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_stringset : public AC_GALGAS_root\n"
    " {\n"
    "//--------------------------------- Private data members\n"
    "  private : cSharedStringsetRoot * mSharedRoot ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return mSharedRoot != NULL ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_stringset (void) ;\n"
    "\n"
    "//--------------------------------- In debug mode : check method\n"
    "  #ifndef DO_NOT_GENERATE_CHECKINGS\n"
    "    protected : void checkStringset (LOCATION_ARGS) const ;\n"
    "  #endif\n"
    "\n"
    "//--------------------------------- Insulate\n"
    "  protected : void insulate (LOCATION_ARGS) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate filewrapper_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_filewrapper_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@filewrapper type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("filewrapper-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cRegularFileWrapper {\n"
    "  public : const char * mName ;\n"
    "  public : const char * mExtension ;\n"
    "  public : const bool mIsTextFile ; // True: text file, false: binary file\n"
    "  public : const uint32_t mFileLength ;\n"
    "  public : const char * mContents ;\n"
    "\n"
    "//--- Constructor\n"
    "  public : cRegularFileWrapper (const char * inName,\n"
    "                                const char * inExtension,\n"
    "                                const bool inIsTextFile,\n"
    "                                const uint32_t inFileLength,\n"
    "                                const char * inContents) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cRegularFileWrapper (const cRegularFileWrapper &) ;\n"
    "  private : cRegularFileWrapper & operator = (const cRegularFileWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class cDirectoryWrapper {\n"
    "  public : const char * mDirectoryName ;\n"
    "  public : const uint32_t mFileCount ;\n"
    "  public : const cRegularFileWrapper * * const mFiles ;\n"
    "  public : const uint32_t mDirectoryCount ;\n"
    "  public : const cDirectoryWrapper * * mDirectories ;\n"
    "\n"
    "//--- Constructor\n"
    "  public : cDirectoryWrapper (const char * inDirectoryName,\n"
    "                              const uint32_t inFileCount,\n"
    "                              const cRegularFileWrapper * * const inFiles,\n"
    "                              const uint32_t inDirectoryCount,\n"
    "                              const cDirectoryWrapper * * inDirectories) ;\n"
    "\n"
    "//--- No copy\n"
    "  private : cDirectoryWrapper (const cDirectoryWrapper &) ;\n"
    "  private : cDirectoryWrapper & operator = (const cDirectoryWrapper &) ;\n"
    "} ;\n"
    "\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_filewrapper : public AC_GALGAS_root {\n"
    "//--------------------------------- Private data members\n"
    "  private : const cDirectoryWrapper * mRootDirectoryPtr ;\n"
    "  private : C_String mCurrentDirectory ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : VIRTUAL_IN_DEBUG inline bool isValid (void) const { return NULL != mRootDirectoryPtr ; }\n"
    "  public : VIRTUAL_IN_DEBUG inline void drop (void) { mRootDirectoryPtr = NULL ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_filewrapper (void) ;\n"
    "\n"
    "//--------------------------------- Native constructor\n"
    "  public : GALGAS_filewrapper (const cDirectoryWrapper & inRootDirectory) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_filewrapper (const GALGAS_filewrapper & inSource) ;\n"
    "  public : GALGAS_filewrapper & operator = (const GALGAS_filewrapper & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Filewrapper template 'predefinedTypeGenerationTemplate application_type'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_application_5F_type (C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@application type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("application-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_application : public AC_GALGAS_root {\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return false ; }\n"
    "  public : inline void drop (void) { }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Destructor (virtual in debug mode)\n"
    "  public : VIRTUAL_IN_DEBUG ~ GALGAS_application (void) ;\n"
    "\n"
    "//--------------------------------- Handle copy\n"
    "  public : GALGAS_application (const GALGAS_application & inSource) ;\n"
    "  public : GALGAS_application & operator = (const GALGAS_application & inSource) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate bigint_type'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_bigint_5F_type (C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@bigint type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("bigint-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_bigint : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private : bool mIsValid ;\n"
    "  private : C_BigInt mValue ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) ;\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_bigint (void) ;\n"
    "\n"
    "//--------------------------------- Constructor\n"
    "  public : GALGAS_bigint (const C_BigInt & inValue) ;\n"
    "  public : GALGAS_bigint (const char * inDecimalString, C_Compiler * inCompiler COMMA_LOCATION_ARGS) ;\n"
    "\n"
    "//--------------------------------- Destructor\n"
    "  public : virtual ~ GALGAS_bigint (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Filewrapper template 'predefinedTypeGenerationTemplate timer_type'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

GALGAS_string filewrapperTemplate_predefinedTypeGenerationTemplate_timer_5F_type (C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  result << "//---------------------------------------------------------------------------------------------------------------------*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("@timer type").reader_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("timer-type.h.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//---------------------------------------------------------------------------------------------------------------------*\n"
    "\n"
    "class GALGAS_timer : public AC_GALGAS_root {\n"
    "//--------------------------------- Private properties\n"
    "  private : bool mIsValid ;\n"
    "  private : C_Timer mTimer ;\n"
    "\n"
    "//--------------------------------- Accessors\n"
    "  public : inline bool isValid (void) const { return mIsValid ; }\n"
    "  public : VIRTUAL_IN_DEBUG void drop (void) { mIsValid = false ; }\n"
    "\n"
    "//--------------------------------- Default constructor\n"
    "  public : GALGAS_timer (void) ;\n"
    "\n" ;
  return GALGAS_string (result) ;
}

