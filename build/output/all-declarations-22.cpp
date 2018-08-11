#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

#include "all-declarations-22.h"

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@constructorExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_56437 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeOptionalProxy (ioArgument_ioTypeMap, object->mProperty_mTypeName, joker_56437 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 992)) ;
  }
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 993)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                         extensionMethod_constructorExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constructorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_constructorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@constructorExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_constructorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_constructorExpressionAST * object = (const cPtr_constructorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_constructorExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_57186 ;
  GALGAS_unifiedTypeMap_2D_proxy var_constructorType_57233 ;
  GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_57313 ;
  GALGAS_bool var_hasCompilerArgument_57348 ;
  {
  routine_analyzeConstructorInvocation (constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, object->mProperty_mTypeName, object->mProperty_mConstructorName, object->mProperty_mExpressions, var_returnedType_57186, var_constructorType_57233, var_constructorEffectiveParameterList_57313, var_hasCompilerArgument_57348, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1006)) ;
  }
  GALGAS_lstring var_constructorTypeUsefulnessName_57388 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_constructorType_57233.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1020)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_constructorTypeUsefulnessName_57388 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1021)) ;
  }
  GALGAS_lstring var_returnedTypeUsefulnessName_57594 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_returnedType_57186.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1022)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_returnedTypeUsefulnessName_57594 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1023)) ;
  }
  outArgument_outExpression = GALGAS_constructorExpressionForGeneration::constructor_new (var_returnedType_57186, object->mProperty_mConstructorName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1027)), var_constructorType_57233, object->mProperty_mConstructorName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1029)), var_constructorEffectiveParameterList_57313, var_hasCompilerArgument_57348  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1025)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_constructorExpressionAST.mSlotID,
                                                  extensionMethod_constructorExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_constructorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_constructorExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@getterCallExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiver.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1040)) ;
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressions, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1041)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                         extensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getterCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_getterCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@getterCallExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_getterCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_getterCallExpressionAST * object = (const cPtr_getterCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_getterCallExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_receiverExpression_59053 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiver.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1058)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_receiverExpression_59053, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1055)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_receiverType_59098 = var_receiverExpression_59053.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1063)) ;
  GALGAS_getterMap var_getterMap_59180 = var_receiverType_59098.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1065)) ;
  GALGAS_functionSignature var_getterFormalArgumentTypeList_59277 ;
  GALGAS_methodKind var_kind_59296 ;
  GALGAS_bool var_hasCompilerArgument_59324 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_59361 ;
  GALGAS_stringlist var_fieldList_59385 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1071)) ;
  const cMapElement_getterMap * objectArray_59397 = (const cMapElement_getterMap *) var_getterMap_59180.readAccessForWithInstruction (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1072))) ;
  if (NULL != objectArray_59397) {
      macroValidSharedObject (objectArray_59397, cMapElement_getterMap) ;
    var_getterFormalArgumentTypeList_59277 = objectArray_59397->mProperty_mArgumentTypeList ;
    var_hasCompilerArgument_59324 = objectArray_59397->mProperty_mHasCompilerArgument ;
    var_returnedType_59361 = objectArray_59397->mProperty_mReturnedType ;
    var_kind_59296 = objectArray_59397->mProperty_mKind ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, objectArray_59397->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)), objectArray_59397->mProperty_mErrorMessage, fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1078)) ;
    }
  }else{
    GALGAS_uint var_matchingReaderCount_59702 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_receiverType_59098.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1082)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_getterFormalArgumentTypeList_59277 = GALGAS_functionSignature::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1083)) ;
      var_hasCompilerArgument_59324 = GALGAS_bool (true) ;
      var_returnedType_59361 = GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1085)) ;
      var_kind_59296 = GALGAS_methodKind::constructor_definedAsExtension (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1086)) ;
      cEnumerator_typedPropertyList enumerator_59999 (var_receiverType_59098.getter_mCurrentTypedAttributeList (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1087)), kENUMERATION_UP) ;
      while (enumerator_59999.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType_60028 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (enumerator_59999.current_mPropertyTypeProxy (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1090)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1088)) ;
        GALGAS_getterMap var_aMap_60214 = var_attributeType_60028.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1092)) ;
        const cMapElement_getterMap * objectArray_60256 = (const cMapElement_getterMap *) var_aMap_60214.readAccessForWithInstruction (object->mProperty_mGetterName.getter_string (HERE)) ;
        if (NULL != objectArray_60256) {
            macroValidSharedObject (objectArray_60256, cMapElement_getterMap) ;
          const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType_60028.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1094)).objectCompare (enumerator_59999.current_mPropertyName (HERE).getter_string (HERE))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_matchingReaderCount_59702.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1095)) ;
            var_getterFormalArgumentTypeList_59277 = objectArray_60256->mProperty_mArgumentTypeList ;
            var_hasCompilerArgument_59324 = objectArray_60256->mProperty_mHasCompilerArgument ;
            var_returnedType_59361 = objectArray_60256->mProperty_mReturnedType ;
            var_kind_59296 = objectArray_60256->mProperty_mKind ;
            var_fieldList_59385.addAssign_operation (enumerator_59999.current_mPropertyName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1100)) ;
            const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, objectArray_60256->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_4) {
              TC_Array <C_FixItDescription> fixItArray5 ;
              inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)), objectArray_60256->mProperty_mErrorMessage, fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1102)) ;
            }
          }
        }
        enumerator_59999.gotoNextObject () ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_matchingReaderCount_59702.objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1108)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)).add_operation (GALGAS_string ("' getter, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1109)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1108)) ;
        var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
        var_returnedType_59361.drop () ; // Release error dropped variable
        var_kind_59296.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, var_matchingReaderCount_59702.objectCompare (GALGAS_uint ((uint32_t) 1U))).boolEnum () ;
        if (kBoolTrue == test_8) {
          GALGAS_string var_s_61115 = GALGAS_string::makeEmptyString () ;
          cEnumerator_stringlist enumerator_61148 (var_fieldList_59385, kENUMERATION_UP) ;
          while (enumerator_61148.hasCurrentObject ()) {
            var_s_61115.plusAssign_operation(enumerator_61148.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1115)) ;
            if (enumerator_61148.hasNextObject ()) {
              var_s_61115.plusAssign_operation(GALGAS_string (", "), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1116)) ;
            }
            enumerator_61148.gotoNextObject () ;
          }
          TC_Array <C_FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (GALGAS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (GALGAS_string ("' getter, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1119)).add_operation (var_s_61115, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)).add_operation (GALGAS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1120)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1118)) ;
          var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
          var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
          var_returnedType_59361.drop () ; // Release error dropped variable
          var_kind_59296.drop () ; // Release error dropped variable
        }
      }
    }else if (kBoolFalse == test_2) {
      const enumGalgasBool test_10 = GALGAS_bool (kIsEqual, var_getterMap_59180.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1123)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1124)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)).add_operation (GALGAS_string ("' type does not define any getter"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1125)), fixItArray11  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1124)) ;
        var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
        var_returnedType_59361.drop () ; // Release error dropped variable
        var_kind_59296.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_10) {
        TC_Array <C_FixItDescription> fixItArray12 ;
        appendFixItActions (fixItArray12, kFixItReplace, var_getterMap_59180.getter_keyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1131))) ;
        inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)), GALGAS_string ("the '@").add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (GALGAS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)).add_operation (GALGAS_string ("' getter "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1129)), fixItArray12  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1128)) ;
        var_getterFormalArgumentTypeList_59277.drop () ; // Release error dropped variable
        var_hasCompilerArgument_59324.drop () ; // Release error dropped variable
        var_returnedType_59361.drop () ; // Release error dropped variable
        var_kind_59296.drop () ; // Release error dropped variable
      }
    }
  }
  const enumGalgasBool test_13 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1135)).objectCompare (var_getterFormalArgumentTypeList_59277.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1135)))).boolEnum () ;
  if (kBoolTrue == test_13) {
    TC_Array <C_FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticError (object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), GALGAS_string ("calling the '").add_operation (object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' getter of '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (var_receiverType_59098.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (var_getterFormalArgumentTypeList_59277.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1137)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1138)), fixItArray14  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1136)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_13) {
    GALGAS_semanticExpressionListForGeneration var_constructorEffectiveParameterList_62438 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1140)) ;
    cEnumerator_actualOutputExpressionList enumerator_62506 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_62542 (var_getterFormalArgumentTypeList_59277, kENUMERATION_UP) ;
    while (enumerator_62506.hasCurrentObject () && enumerator_62542.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_62786 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_62506.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_62542.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_62786, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1142)) ;
      const enumGalgasBool test_15 = GALGAS_bool (kIsNotEqual, enumerator_62542.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_62506.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_15) {
        GALGAS_string temp_16 ;
        const enumGalgasBool test_17 = GALGAS_bool (kIsNotEqual, enumerator_62542.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_17) {
          temp_16 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_17) {
          temp_16 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_62506.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)), GALGAS_string ("the selector should be '!").add_operation (enumerator_62542.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)).add_operation (temp_16, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)), fixItArray18  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1151)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_62542.current_mFormalArgumentType (HERE), var_exp_62786.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)), enumerator_62506.current_mEndOfExpressionLocation (HERE), var_exp_62786, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1153)) ;
      }
      var_constructorEffectiveParameterList_62438.addAssign_operation (var_exp_62786  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1154)) ;
      enumerator_62506.gotoNextObject () ;
      enumerator_62542.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_returnedType_59361, object->mProperty_mGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1158)), var_kind_59296, var_receiverExpression_59053, var_fieldList_59385, object->mProperty_mGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1162)), var_constructorEffectiveParameterList_62438, var_hasCompilerArgument_59324  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1156)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_getterCallExpressionAST.mSlotID,
                                                  extensionMethod_getterCallExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_getterCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_getterCallExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@optionExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_optionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                  GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                  C_Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                         extensionMethod_optionExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_optionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@optionExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_optionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_optionExpressionAST * object = (const cPtr_optionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_optionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_64163 = function_optionNameForUsefulEntitiesGraph (object->mProperty_mOptionComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1185)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_64163 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1186)) ;
  }
  GALGAS_bool var_optionComponentIsPredefined_64465 ;
  GALGAS_commandLineOptionMap var_boolOptionMap_64510 ;
  GALGAS_commandLineOptionMap var_uintOptionMap_64555 ;
  GALGAS_commandLineOptionMap var_stringOptionMap_64602 ;
  GALGAS_commandLineOptionMap var_stringListOptionMap_64653 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mOptionComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mOptionComponentName, var_optionComponentIsPredefined_64465, var_boolOptionMap_64510, var_uintOptionMap_64555, var_stringOptionMap_64602, var_stringListOptionMap_64653, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1188)) ;
  GALGAS_bool var_found_64671 = var_boolOptionMap_64510.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1196)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1196)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  const enumGalgasBool test_0 = var_found_64671.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1198)).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_found_64671 = var_uintOptionMap_64555.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1199)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1199)) ;
    var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE) ;
  }
  const enumGalgasBool test_1 = var_found_64671.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1202)).boolEnum () ;
  if (kBoolTrue == test_1) {
    var_found_64671 = var_stringOptionMap_64602.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1203)) ;
    var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }
  const enumGalgasBool test_2 = var_found_64671.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1206)).boolEnum () ;
  if (kBoolTrue == test_2) {
    var_found_64671 = var_stringListOptionMap_64653.getter_hasKey (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1207)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1207)) ;
    var_returnedType_64760 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringListType (HERE) ;
  }
  const enumGalgasBool test_3 = var_found_64671.boolEnum () ;
  if (kBoolTrue == test_3) {
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1211)).objectCompare (GALGAS_string ("value"))).boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outExpression = GALGAS_optionValueExpressionForGeneration::constructor_new (var_returnedType_64760, object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1214)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1216)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1217))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1212)) ;
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1218)).objectCompare (GALGAS_string ("char"))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_optionCharExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mCharType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1221)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1223)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1224))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1219)) ;
      }else if (kBoolFalse == test_5) {
        const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1225)).objectCompare (GALGAS_string ("string"))).boolEnum () ;
        if (kBoolTrue == test_6) {
          outArgument_outExpression = GALGAS_optionStringExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1228)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1230)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1231))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1226)) ;
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, object->mProperty_mOptionGetterName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1232)).objectCompare (GALGAS_string ("comment"))).boolEnum () ;
          if (kBoolTrue == test_7) {
            outArgument_outExpression = GALGAS_optionCommentExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mOptionComponentName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1235)), var_optionComponentIsPredefined_64465, object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1237)), object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1238))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1233)) ;
          }else if (kBoolFalse == test_7) {
            TC_Array <C_FixItDescription> fixItArray8 ;
            inCompiler->emitSemanticError (object->mProperty_mOptionGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)), GALGAS_string ("only the 'value', 'char', 'string' and 'comment' getters are defined for an option"), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1240)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
      }
    }
  }else if (kBoolFalse == test_3) {
    GALGAS_stringlist var_s_66736 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1243)) ;
    cEnumerator_commandLineOptionMap enumerator_66769 (var_boolOptionMap_64510, kENUMERATION_UP) ;
    while (enumerator_66769.hasCurrentObject ()) {
      var_s_66736.addAssign_operation (enumerator_66769.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1245)) ;
      enumerator_66769.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_66825 (var_uintOptionMap_64555, kENUMERATION_UP) ;
    while (enumerator_66825.hasCurrentObject ()) {
      var_s_66736.addAssign_operation (enumerator_66825.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1248)) ;
      enumerator_66825.gotoNextObject () ;
    }
    cEnumerator_commandLineOptionMap enumerator_66883 (var_stringOptionMap_64602, kENUMERATION_UP) ;
    while (enumerator_66883.hasCurrentObject ()) {
      var_s_66736.addAssign_operation (enumerator_66883.current_lkey (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1251)) ;
      enumerator_66883.gotoNextObject () ;
    }
    TC_Array <C_FixItDescription> fixItArray9 ;
    appendFixItActions (fixItArray9, kFixItReplace, var_s_66736) ;
    inCompiler->emitSemanticError (object->mProperty_mOptionEntryName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)), GALGAS_string ("the '").add_operation (object->mProperty_mOptionComponentName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)).add_operation (GALGAS_string ("' option component does not define the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)).add_operation (object->mProperty_mOptionEntryName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)).add_operation (GALGAS_string ("' option"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1254)), fixItArray9  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1253)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_optionExpressionAST.mSlotID,
                                                  extensionMethod_optionExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_optionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_optionExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@orExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1265)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1266)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                         extensionMethod_orExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@orExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orExpressionAST * object = (const cPtr_orExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_68160 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_68160, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1279)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_68434 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_68160.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1291)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_68434, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1288)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_68506 = var_leftExpression_68160.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1297)) ;
  {
  routine_checkDiadicOperator (var_leftType_68506, var_rightExpression_68434.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1300)), var_leftType_68506.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1301)).getter_infixOrOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1301)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_68434, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1298)) ;
  }
  outArgument_outExpression = GALGAS_orExpressionForGeneration::constructor_new (var_leftType_68506, object->mProperty_mOperatorLocation, var_leftExpression_68160, var_rightExpression_68434  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1306)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orExpressionAST.mSlotID,
                                                  extensionMethod_orExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@orShortExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                   GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1319)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1320)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                         extensionMethod_orShortExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_orShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@orShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_orShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                            const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                            const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                            GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                            GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_orShortExpressionAST * object = (const cPtr_orShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_orShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_69927 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_69927, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1333)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_70201 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_69927.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1345)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_70201, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1342)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_70275 = var_leftExpression_69927.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1351)) ;
  {
  routine_checkDiadicOperator (var_leftType_70275, var_rightExpression_70201.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1354)), var_leftType_70275.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1355)).getter_infixOrOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1355)), GALGAS_string ("|"), object->mProperty_mOperatorLocation, var_rightExpression_70201, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1352)) ;
  }
  outArgument_outExpression = GALGAS_orShortExpressionForGeneration::constructor_new (var_leftType_70275, object->mProperty_mOperatorLocation, var_leftExpression_69927, var_rightExpression_70201  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1361)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_orShortExpressionAST.mSlotID,
                                                  extensionMethod_orShortExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_orShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_orShortExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@andExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1373)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1374)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                         extensionMethod_andExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@andExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andExpressionAST * object = (const cPtr_andExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_71715 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_71715, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1387)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_71989 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_71715.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1399)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_71989, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1396)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_72063 = var_leftExpression_71715.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1405)) ;
  {
  routine_checkDiadicOperator (var_leftType_72063, var_rightExpression_71989.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1408)), var_leftType_72063.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)).getter_infixAndOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1409)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_71989, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1406)) ;
  }
  outArgument_outExpression = GALGAS_andExpressionForGeneration::constructor_new (var_leftType_72063, object->mProperty_mOperatorLocation, var_leftExpression_71715, var_rightExpression_71989  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1415)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andExpressionAST.mSlotID,
                                                  extensionMethod_andExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@andShortExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1427)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1428)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                         extensionMethod_andShortExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andShortExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_andShortExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@andShortExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_andShortExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_andShortExpressionAST * object = (const cPtr_andShortExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_andShortExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_73510 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_73510, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1441)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_73784 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_73510.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1453)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_73784, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1450)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_73858 = var_leftExpression_73510.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1459)) ;
  {
  routine_checkDiadicOperator (var_leftType_73858, var_rightExpression_73784.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1462)), var_leftType_73858.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1463)).getter_infixAndOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1463)), GALGAS_string ("&"), object->mProperty_mOperatorLocation, var_rightExpression_73784, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1460)) ;
  }
  outArgument_outExpression = GALGAS_andShortExpressionForGeneration::constructor_new (var_leftType_73858, object->mProperty_mOperatorLocation, var_leftExpression_73510, var_rightExpression_73784  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1469)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_andShortExpressionAST.mSlotID,
                                                  extensionMethod_andShortExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_andShortExpressionAST_analyzeSemanticExpression (defineExtensionMethod_andShortExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@xorExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_xorExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1481)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1482)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                         extensionMethod_xorExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_xorExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@xorExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_xorExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_xorExpressionAST * object = (const cPtr_xorExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_xorExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_75300 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_75300, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1495)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_75574 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_75300.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1507)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_75574, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1504)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_75648 = var_leftExpression_75300.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1513)) ;
  {
  routine_checkDiadicOperator (var_leftType_75648, var_rightExpression_75574.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1516)), var_leftType_75648.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1517)).getter_infixXorOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1517)), GALGAS_string ("^"), object->mProperty_mOperatorLocation, var_rightExpression_75574, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1514)) ;
  }
  outArgument_outExpression = GALGAS_xorExpressionForGeneration::constructor_new (var_leftType_75648, object->mProperty_mOperatorLocation, var_leftExpression_75300, var_rightExpression_75574  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1523)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_xorExpressionAST.mSlotID,
                                                  extensionMethod_xorExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_xorExpressionAST_analyzeSemanticExpression (defineExtensionMethod_xorExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@closedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1536)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1537)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                         extensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_closedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@closedSliceExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_closedSliceExpressionAST * object = (const cPtr_closedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_closedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_77140 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_77140, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1551)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_77430 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_77430, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1560)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_77504 = var_leftExpression_77140.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1569)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_77504.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1570)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_leftExpression_77140.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1571)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1571)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_77709 = var_rightExpression_77430.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1573)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_77709.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1574)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_rightExpression_77430.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1575)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1575)) ;
  }
  outArgument_outExpression = GALGAS_closedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_77140.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1579)), object->mProperty_mOperatorLocation, var_leftExpression_77140, var_rightExpression_77430  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1578)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_closedSliceExpressionAST.mSlotID,
                                                  extensionMethod_closedSliceExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_closedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_closedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@openedSliceExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1591)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1592)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                         extensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_openedSliceExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@openedSliceExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inInferenceType */,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_openedSliceExpressionAST * object = (const cPtr_openedSliceExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_openedSliceExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_79253 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_79253, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1606)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_79543 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_79543, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1615)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_79617 = var_leftExpression_79253.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1624)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_leftType_79617.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1625)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (var_leftExpression_79253.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1626)), GALGAS_string ("the left expression or '...' operator should an @uint"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1626)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_79822 = var_rightExpression_79543.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1628)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_rightType_79822.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1629)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_rightExpression_79543.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1630)), GALGAS_string ("the right expression or '...' operator should an @uint"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1630)) ;
  }
  outArgument_outExpression = GALGAS_openedSliceExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("range"), var_leftExpression_79253.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1634)), object->mProperty_mOperatorLocation, var_leftExpression_79253, var_rightExpression_79543  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1633)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_openedSliceExpressionAST.mSlotID,
                                                  extensionMethod_openedSliceExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_openedSliceExpressionAST_analyzeSemanticExpression (defineExtensionMethod_openedSliceExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@equalExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_equalExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1646)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1647)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_equalExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                         extensionMethod_equalExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_equalExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_equalExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@equalExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_equalExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_equalExpressionAST * object = (const cPtr_equalExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_equalExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_81319 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_81319, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1661)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_81360 = var_leftExpression_81319.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1669)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_81642 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_81360, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_81642, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1671)) ;
  {
  routine_checkDiadicOperator (var_leftType_81360, var_rightExpression_81642.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1682)), GALGAS_bool (true), GALGAS_string ("=="), object->mProperty_mOperatorLocation, var_rightExpression_81642, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1680)) ;
  }
  outArgument_outExpression = GALGAS_equalExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_81319, var_rightExpression_81642  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1689)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_equalExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_equalExpressionAST.mSlotID,
                                                  extensionMethod_equalExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_equalExpressionAST_analyzeSemanticExpression (defineExtensionMethod_equalExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@notEqualExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1702)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1703)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                         extensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notEqualExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@notEqualExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_notEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notEqualExpressionAST * object = (const cPtr_notEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_83109 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_83109, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1716)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_83150 = var_leftExpression_83109.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1724)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_83431 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_83150, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_83431, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1726)) ;
  {
  routine_checkDiadicOperator (var_leftType_83150, var_rightExpression_83431.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1737)), GALGAS_bool (true), GALGAS_string ("!="), object->mProperty_mOperatorLocation, var_rightExpression_83431, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1735)) ;
  }
  outArgument_outExpression = GALGAS_notEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_83109, var_rightExpression_83431  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1744)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notEqualExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notEqualExpressionAST.mSlotID,
                                                  extensionMethod_notEqualExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notEqualExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@lowerOrEqualExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1757)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1758)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                         extensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lowerOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@lowerOrEqualExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lowerOrEqualExpressionAST * object = (const cPtr_lowerOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lowerOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_84909 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_84909, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1771)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_84950 = var_leftExpression_84909.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1779)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_85231 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_84950, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_85231, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1781)) ;
  {
  routine_checkDiadicOperator (var_leftType_84950, var_rightExpression_85231.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1792)), var_leftType_84950.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1793)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1793)), GALGAS_string ("<="), object->mProperty_mOperatorLocation, var_rightExpression_85231, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1790)) ;
  }
  outArgument_outExpression = GALGAS_lowerOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_84909, var_rightExpression_85231  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1799)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lowerOrEqualExpressionAST.mSlotID,
                                                  extensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lowerOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@greaterOrEqualExpressionAST enterExpressionInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1812)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1813)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                         extensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_greaterOrEqualExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@greaterOrEqualExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_greaterOrEqualExpressionAST * object = (const cPtr_greaterOrEqualExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_greaterOrEqualExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_86741 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_86741, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1826)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_86782 = var_leftExpression_86741.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1834)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_87063 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_86782, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_87063, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1836)) ;
  {
  routine_checkDiadicOperator (var_leftType_86782, var_rightExpression_87063.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1847)), var_leftType_86782.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1848)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1848)), GALGAS_string (">="), object->mProperty_mOperatorLocation, var_rightExpression_87063, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1845)) ;
  }
  outArgument_outExpression = GALGAS_greaterOrEqualExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_86741, var_rightExpression_87063  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1854)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_greaterOrEqualExpressionAST.mSlotID,
                                                  extensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression (defineExtensionMethod_greaterOrEqualExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@strictGreaterExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1867)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1868)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                         extensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_strictGreaterExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@strictGreaterExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictGreaterExpressionAST * object = (const cPtr_strictGreaterExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictGreaterExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_88573 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_88573, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1881)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_88614 = var_leftExpression_88573.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1889)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_88895 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_88614, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_88895, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1891)) ;
  {
  routine_checkDiadicOperator (var_leftType_88614, var_rightExpression_88895.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1902)), var_leftType_88614.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1903)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1903)), GALGAS_string (">"), object->mProperty_mOperatorLocation, var_rightExpression_88895, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1900)) ;
  }
  outArgument_outExpression = GALGAS_strictGreaterExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_88573, var_rightExpression_88895  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1909)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictGreaterExpressionAST.mSlotID,
                                                  extensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_strictGreaterExpressionAST_analyzeSemanticExpression (defineExtensionMethod_strictGreaterExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@strictLowerExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                       GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1922)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1923)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                         extensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_strictLowerExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@strictLowerExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_strictLowerExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                C_Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_strictLowerExpressionAST * object = (const cPtr_strictLowerExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_strictLowerExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_90399 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_90399, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1936)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_90440 = var_leftExpression_90399.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1944)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_90721 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftType_90440, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_90721, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1946)) ;
  {
  routine_checkDiadicOperator (var_leftType_90440, var_rightExpression_90721.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1957)), var_leftType_90440.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)).getter_isComparable (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1958)), GALGAS_string ("<"), object->mProperty_mOperatorLocation, var_rightExpression_90721, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1955)) ;
  }
  outArgument_outExpression = GALGAS_strictLowerExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation, var_leftExpression_90399, var_rightExpression_90721  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1964)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_strictLowerExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_strictLowerExpressionAST.mSlotID,
                                                  extensionMethod_strictLowerExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_strictLowerExpressionAST_analyzeSemanticExpression (defineExtensionMethod_strictLowerExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@rightShiftExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1977)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1978)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                         extensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_rightShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@rightShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_rightShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_rightShiftExpressionAST * object = (const cPtr_rightShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_rightShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_92221 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_92221, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 1992)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_92515 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_92515, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2001)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_92589 = var_leftExpression_92221.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2010)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_92658 = var_rightExpression_92515.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2011)) ;
  GALGAS_bool test_0 = GALGAS_bool (var_leftExpression_92221.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (var_rightExpression_92515.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration temp_2 ;
    if (var_leftExpression_92221.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_92221.ptr ())) {
        temp_2 = (cPtr_literalBigIntExpressionForGeneration *) var_leftExpression_92221.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_leftExpression_92221.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2014)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_left_92841 = temp_2 ;
    GALGAS_literalUIntExpressionForGeneration temp_3 ;
    if (var_rightExpression_92515.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_92515.ptr ())) {
        temp_3 = (cPtr_literalUIntExpressionForGeneration *) var_rightExpression_92515.ptr () ;
      }else{
        inCompiler->castError ("literalUIntExpressionForGeneration", var_rightExpression_92515.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2015)) ;
      }
    }
    GALGAS_literalUIntExpressionForGeneration var_right_92916 = temp_3 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), object->mProperty_mOperatorLocation, var_left_92841.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2019)).right_shift_operation (var_right_92916.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2019)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2019))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2016)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = var_leftType_92589.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)).getter_infixShiftOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2021)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_92589.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2023)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2022)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_rightType_92658.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2025)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_92658.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2027)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2026)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        outArgument_outExpression = GALGAS_rightShiftExpressionForGeneration::constructor_new (var_leftType_92589, object->mProperty_mOperatorLocation, var_leftExpression_92221, var_rightExpression_92515  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2031)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_rightShiftExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_rightShiftExpressionAST.mSlotID,
                                                  extensionMethod_rightShiftExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_rightShiftExpressionAST_analyzeSemanticExpression (defineExtensionMethod_rightShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@leftShiftExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2045)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2046)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                         extensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_leftShiftExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@leftShiftExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_leftShiftExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_leftShiftExpressionAST * object = (const cPtr_leftShiftExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_leftShiftExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_94829 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_94829, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2060)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_95123 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mUIntType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_95123, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2069)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_95197 = var_leftExpression_94829.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2078)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_rightType_95266 = var_rightExpression_95123.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2079)) ;
  GALGAS_bool test_0 = GALGAS_bool (var_leftExpression_94829.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration) ;
  if (kBoolTrue == test_0.boolEnum ()) {
    test_0 = GALGAS_bool (var_rightExpression_95123.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalUIntExpressionForGeneration) ;
  }
  const enumGalgasBool test_1 = test_0.boolEnum () ;
  if (kBoolTrue == test_1) {
    GALGAS_literalBigIntExpressionForGeneration temp_2 ;
    if (var_leftExpression_94829.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_leftExpression_94829.ptr ())) {
        temp_2 = (cPtr_literalBigIntExpressionForGeneration *) var_leftExpression_94829.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_leftExpression_94829.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2082)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_left_95449 = temp_2 ;
    GALGAS_literalUIntExpressionForGeneration temp_3 ;
    if (var_rightExpression_95123.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalUIntExpressionForGeneration *> (var_rightExpression_95123.ptr ())) {
        temp_3 = (cPtr_literalUIntExpressionForGeneration *) var_rightExpression_95123.ptr () ;
      }else{
        inCompiler->castError ("literalUIntExpressionForGeneration", var_rightExpression_95123.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2083)) ;
      }
    }
    GALGAS_literalUIntExpressionForGeneration var_right_95524 = temp_3 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBigIntType (HERE), object->mProperty_mOperatorLocation, var_left_95449.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087)).left_shift_operation (var_right_95524.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2087))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2084)) ;
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_4 = var_leftType_95197.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2089)).getter_infixShiftOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2089)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2089)).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("left operand type is '@").add_operation (var_leftType_95197.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)).add_operation (GALGAS_string ("' and does not support a shift operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2091)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2090)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_4) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_rightType_95266.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2093)).objectCompare (GALGAS_string ("uint"))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("for a shift operator, right operand type should be '@uint': it is '@").add_operation (var_rightType_95266.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2095)), fixItArray7  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2094)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_6) {
        outArgument_outExpression = GALGAS_leftShiftExpressionForGeneration::constructor_new (var_leftType_95197, object->mProperty_mOperatorLocation, var_leftExpression_94829, var_rightExpression_95123  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2099)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_leftShiftExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_leftShiftExpressionAST.mSlotID,
                                                  extensionMethod_leftShiftExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_leftShiftExpressionAST_analyzeSemanticExpression (defineExtensionMethod_leftShiftExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@addExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2113)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2114)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_addExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@addExpressionNoOverflowAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionNoOverflowAST * object = (const cPtr_addExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_97444 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_97444, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2128)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_97718 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_97444.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2140)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_97718, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2137)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_97792 = var_leftExpression_97444.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2146)) ;
  {
  routine_checkDiadicOperator (var_leftType_97792, var_rightExpression_97718.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2149)), var_leftType_97792.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)).getter_infixAddOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2150)), GALGAS_string ("&+"), object->mProperty_mOperatorLocation, var_rightExpression_97718, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2147)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionNoOverflowForGeneration::constructor_new (var_leftType_97792, object->mProperty_mOperatorLocation, var_leftExpression_97444, var_rightExpression_97718  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2156)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_addExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@addExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2169)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2170)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                         extensionMethod_addExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_addExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@addExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_addExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_addExpressionAST * object = (const cPtr_addExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_addExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_99248 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_99248, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2183)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_99522 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_99248.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2195)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_99522, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2192)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_99596 = var_leftExpression_99248.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2201)) ;
  {
  routine_checkDiadicOperator (var_leftType_99596, var_rightExpression_99522.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2204)), var_leftType_99596.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2205)).getter_infixAddOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2205)), GALGAS_string ("+"), object->mProperty_mOperatorLocation, var_rightExpression_99522, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2202)) ;
  }
  outArgument_outExpression = GALGAS_addExpressionForGeneration::constructor_new (var_leftType_99596, object->mProperty_mOperatorLocation, var_leftExpression_99248, var_rightExpression_99522  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2211)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_addExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_addExpressionAST.mSlotID,
                                                  extensionMethod_addExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_addExpressionAST_analyzeSemanticExpression (defineExtensionMethod_addExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@subExpressionNoOverflowAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2224)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2225)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_subExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@subExpressionNoOverflowAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionNoOverflowAST * object = (const cPtr_subExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_101056 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_101056, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2239)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_101330 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_101056.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2251)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_101330, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2248)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_101404 = var_leftExpression_101056.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2257)) ;
  {
  routine_checkDiadicOperator (var_leftType_101404, var_rightExpression_101330.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2260)), var_leftType_101404.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2261)).getter_infixSubOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2261)), GALGAS_string ("&-"), object->mProperty_mOperatorLocation, var_rightExpression_101330, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2258)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionNoOverflowForGeneration::constructor_new (var_leftType_101404, object->mProperty_mOperatorLocation, var_leftExpression_101056, var_rightExpression_101330  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2267)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_subExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_subExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@subExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_subExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2280)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2281)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_subExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                         extensionMethod_subExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_subExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_subExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@subExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_subExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_subExpressionAST * object = (const cPtr_subExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_subExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_102860 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_102860, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2294)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_103134 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_102860.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2306)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_103134, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2303)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_103208 = var_leftExpression_102860.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2312)) ;
  {
  routine_checkDiadicOperator (var_leftType_103208, var_rightExpression_103134.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2315)), var_leftType_103208.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2316)).getter_infixSubOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2316)), GALGAS_string ("-"), object->mProperty_mOperatorLocation, var_rightExpression_103134, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2313)) ;
  }
  outArgument_outExpression = GALGAS_subExpressionForGeneration::constructor_new (var_leftType_103208, object->mProperty_mOperatorLocation, var_leftExpression_102860, var_rightExpression_103134  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2322)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_subExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_subExpressionAST.mSlotID,
                                                  extensionMethod_subExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_subExpressionAST_analyzeSemanticExpression (defineExtensionMethod_subExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//        Overriding extension method '@multiplicationExpressionNoOverflowAST enterExpressionInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2335)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2336)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_multiplicationExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@multiplicationExpressionNoOverflowAST analyzeSemanticExpression'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionNoOverflowAST * object = (const cPtr_multiplicationExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_104690 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_104690, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2349)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_104964 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_104690.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2361)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_104964, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2358)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_105038 = var_leftExpression_104690.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2367)) ;
  {
  routine_checkDiadicOperator (var_leftType_105038, var_rightExpression_104964.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2370)), var_leftType_105038.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2371)).getter_infixMulOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2371)), GALGAS_string ("&*"), object->mProperty_mOperatorLocation, var_rightExpression_104964, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2368)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionNoOverflowForGeneration::constructor_new (var_leftType_105038, object->mProperty_mOperatorLocation, var_leftExpression_104690, var_rightExpression_104964  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2377)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_multiplicationExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@multiplicationExpressionAST enterExpressionInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                          GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2389)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2390)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                         extensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_multiplicationExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@multiplicationExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_multiplicationExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                   GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                   C_Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_multiplicationExpressionAST * object = (const cPtr_multiplicationExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_multiplicationExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_106524 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_106524, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2403)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_106798 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_106524.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2415)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_106798, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2412)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_106872 = var_leftExpression_106524.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2421)) ;
  {
  routine_checkDiadicOperator (var_leftType_106872, var_rightExpression_106798.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2424)), var_leftType_106872.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425)).getter_infixMulOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2425)), GALGAS_string ("*"), object->mProperty_mOperatorLocation, var_rightExpression_106798, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2422)) ;
  }
  outArgument_outExpression = GALGAS_multiplicationExpressionForGeneration::constructor_new (var_leftType_106872, object->mProperty_mOperatorLocation, var_leftExpression_106524, var_rightExpression_106798  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2431)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_multiplicationExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_multiplicationExpressionAST.mSlotID,
                                                  extensionMethod_multiplicationExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_multiplicationExpressionAST_analyzeSemanticExpression (defineExtensionMethod_multiplicationExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@divisionExpressionNoOverflowAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2443)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2444)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                         extensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext (defineExtensionMethod_divisionExpressionNoOverflowAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@divisionExpressionNoOverflowAST analyzeSemanticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionNoOverflowAST * object = (const cPtr_divisionExpressionNoOverflowAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionNoOverflowAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_108350 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_108350, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2457)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_108624 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_108350.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2469)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_108624, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2466)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_108698 = var_leftExpression_108350.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2475)) ;
  {
  routine_checkDiadicOperator (var_leftType_108698, var_rightExpression_108624.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2478)), var_leftType_108698.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2479)).getter_infixDivOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2479)), GALGAS_string ("&/"), object->mProperty_mOperatorLocation, var_rightExpression_108624, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2476)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionNoOverflowForGeneration::constructor_new (var_leftType_108698, object->mProperty_mOperatorLocation, var_leftExpression_108350, var_rightExpression_108624  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2485)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionNoOverflowAST.mSlotID,
                                                  extensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression (defineExtensionMethod_divisionExpressionNoOverflowAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@divisionExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                    GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                    C_Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2498)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2499)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                         extensionMethod_divisionExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_divisionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@divisionExpressionAST analyzeSemanticExpression'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_divisionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_divisionExpressionAST * object = (const cPtr_divisionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_divisionExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_110169 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_110169, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2512)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_110443 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_110169.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2524)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_110443, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2521)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_110517 = var_leftExpression_110169.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2530)) ;
  {
  routine_checkDiadicOperator (var_leftType_110517, var_rightExpression_110443.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2533)), var_leftType_110517.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2534)).getter_infixDivOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2534)), GALGAS_string ("/"), object->mProperty_mOperatorLocation, var_rightExpression_110443, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2531)) ;
  }
  outArgument_outExpression = GALGAS_divisionExpressionForGeneration::constructor_new (var_leftType_110517, object->mProperty_mOperatorLocation, var_leftExpression_110169, var_rightExpression_110443  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2540)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_divisionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_divisionExpressionAST.mSlotID,
                                                  extensionMethod_divisionExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_divisionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_divisionExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@moduloExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_moduloExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2552)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2553)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_moduloExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                         extensionMethod_moduloExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_moduloExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_moduloExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@moduloExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_moduloExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInferenceType,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_moduloExpressionAST * object = (const cPtr_moduloExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_moduloExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_leftExpression_111965 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mLeftExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inInferenceType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_leftExpression_111965, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2566)) ;
  GALGAS_semanticExpressionForGeneration var_rightExpression_112239 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mRightExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, var_leftExpression_111965.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2578)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_rightExpression_112239, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2575)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_leftType_112313 = var_leftExpression_111965.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2584)) ;
  {
  routine_checkDiadicOperator (var_leftType_112313, var_rightExpression_112239.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2587)), var_leftType_112313.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588)).getter_infixModOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2588)), GALGAS_string ("mod"), object->mProperty_mOperatorLocation, var_rightExpression_112239, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2585)) ;
  }
  outArgument_outExpression = GALGAS_moduloExpressionForGeneration::constructor_new (var_leftType_112313, object->mProperty_mOperatorLocation, var_leftExpression_111965, var_rightExpression_112239  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2594)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_moduloExpressionAST.mSlotID,
                                                  extensionMethod_moduloExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_moduloExpressionAST_analyzeSemanticExpression (defineExtensionMethod_moduloExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@unaryMinusNoOverflowExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2606)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                         extensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryMinusNoOverflowExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@unaryMinusNoOverflowExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusNoOverflowExpressionAST * object = (const cPtr_unaryMinusNoOverflowExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusNoOverflowExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_113530 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2623)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_113530, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2620)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_113794 = var_expression_113530.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2629)) ;
  const enumGalgasBool test_0 = var_type_113794.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).getter_prefixMinusOperatorNoOVF (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2630)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_113794.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2632)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2632)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2632)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2631)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outExpression = GALGAS_unaryMinusExpressionNoOverflowForGeneration::constructor_new (var_type_113794, object->mProperty_mOperatorLocation, var_expression_113530  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2636)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusNoOverflowExpressionAST.mSlotID,
                                                  extensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryMinusNoOverflowExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@unaryMinusExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2648)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                         extensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryMinusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@unaryMinusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryMinusExpressionAST * object = (const cPtr_unaryMinusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryMinusExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_115198 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2665)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_115198, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2662)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_115268 = var_expression_115198.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2671)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_expression_115198.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration temp_1 ;
    if (var_expression_115198.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_115198.ptr ())) {
        temp_1 = (cPtr_literalBigIntExpressionForGeneration *) var_expression_115198.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_expression_115198.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2673)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_exp_115372 = temp_1 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_115372.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2675)), var_exp_115372.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2676)), var_exp_115372.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2677)).operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2677))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2674)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_type_115268.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2679)).getter_prefixMinusOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2679)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2679)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_115268.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)).add_operation (GALGAS_string ("' and does not support the prefix minus operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2681)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2680)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_unaryMinusExpressionForGeneration::constructor_new (var_type_115268, object->mProperty_mOperatorLocation, var_expression_115198  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2685)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryMinusExpressionAST.mSlotID,
                                                  extensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryMinusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryMinusExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@unaryPlusExpressionAST enterExpressionInSemanticContext'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                     GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2698)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                         extensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_unaryPlusExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@unaryPlusExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                              const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                              GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                              const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                              const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                              GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                              GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_unaryPlusExpressionAST * object = (const cPtr_unaryPlusExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_unaryPlusExpressionAST) ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2714)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, outArgument_outExpression, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2711)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_116949 = outArgument_outExpression.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2720)) ;
  const enumGalgasBool test_0 = var_type_116949.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)).getter_prefixPlusOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2721)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_116949.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2723)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2723)).add_operation (GALGAS_string ("' and does not support the prefix '+' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2723)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2722)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_unaryPlusExpressionAST.mSlotID,
                                                  extensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_unaryPlusExpressionAST_analyzeSemanticExpression (defineExtensionMethod_unaryPlusExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@notExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_notExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                               GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2733)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                         extensionMethod_notExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_notExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@notExpressionAST analyzeSemanticExpression'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_notExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                        const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                        const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                        GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                        GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_notExpressionAST * object = (const cPtr_notExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_notExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_117988 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2750)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_117988, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2747)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_118252 = var_expression_117988.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2756)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_expression_117988.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_trueExpressionForGeneration).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outExpression = GALGAS_falseExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2758)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (var_expression_117988.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_falseExpressionForGeneration).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outExpression = GALGAS_trueExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mOperatorLocation  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2760)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_2 = var_type_118252.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)).getter_prefixNotOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2761)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <C_FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_118252.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)).add_operation (GALGAS_string ("' and does not support the 'not' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2763)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2762)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }else if (kBoolFalse == test_2) {
        outArgument_outExpression = GALGAS_notExpressionForGeneration::constructor_new (var_type_118252, object->mProperty_mOperatorLocation, var_expression_117988  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2767)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_notExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_notExpressionAST.mSlotID,
                                                  extensionMethod_notExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_notExpressionAST_analyzeSemanticExpression (defineExtensionMethod_notExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@structFieldAccessExpressionAST enterExpressionInSemanticContext'            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                             GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                             C_Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                         extensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_structFieldAccessExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@structFieldAccessExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                      const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_structFieldAccessExpressionAST * object = (const cPtr_structFieldAccessExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_structFieldAccessExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_119950 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2795)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_119950, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2792)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_120020 = var_expression_119950.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2801)) ;
  const enumGalgasBool test_0 = var_type_120020.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).getter_isStructType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).operator_and (var_type_120020.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2802)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mStructFieldName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2803)), GALGAS_string ("the '.' operator requires the receiver to be a struct or a class"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2803)) ;
  }
  GALGAS_propertyMap var_attributeMap_120261 = var_type_120020.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2805)) ;
  var_attributeMap_120261.method_searchKey (object->mProperty_mStructFieldName, var_type_120020, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2806)) ;
  outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_type_120020, object->mProperty_mOperatorLocation, var_expression_119950, object->mProperty_mStructFieldName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2808)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_structFieldAccessExpressionAST.mSlotID,
                                                  extensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_structFieldAccessExpressionAST_analyzeSemanticExpression (defineExtensionMethod_structFieldAccessExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@complementExpressionAST enterExpressionInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_complementExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2821)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_complementExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                         extensionMethod_complementExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_complementExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_complementExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                  Overriding extension method '@complementExpressionAST analyzeSemanticExpression'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_complementExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                               const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                               GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                               C_Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_complementExpressionAST * object = (const cPtr_complementExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_complementExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_121508 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2838)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_121508, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2835)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_121578 = var_expression_121508.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2844)) ;
  const enumGalgasBool test_0 = GALGAS_bool (var_expression_121508.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_literalBigIntExpressionForGeneration).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_literalBigIntExpressionForGeneration temp_1 ;
    if (var_expression_121508.isValid ()) {
      if (NULL != dynamic_cast <const cPtr_literalBigIntExpressionForGeneration *> (var_expression_121508.ptr ())) {
        temp_1 = (cPtr_literalBigIntExpressionForGeneration *) var_expression_121508.ptr () ;
      }else{
        inCompiler->castError ("literalBigIntExpressionForGeneration", var_expression_121508.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2846)) ;
      }
    }
    GALGAS_literalBigIntExpressionForGeneration var_exp_121682 = temp_1 ;
    outArgument_outExpression = GALGAS_literalBigIntExpressionForGeneration::constructor_new (var_exp_121682.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2848)), var_exp_121682.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2849)), var_exp_121682.getter_mValue (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2850)).operator_tilde (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2850))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2847)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = var_type_121578.getter_mHandledOperatorFlags (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2852)).getter_prefixTildeOperator (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2852)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2852)).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand type is '@").add_operation (var_type_121578.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)).add_operation (GALGAS_string ("' and does not support the '~' operator"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2854)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2853)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_tildeExpressionForGeneration::constructor_new (var_type_121578, object->mProperty_mOperatorLocation, var_expression_121508  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2858)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_complementExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_complementExpressionAST.mSlotID,
                                                  extensionMethod_complementExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_complementExpressionAST_analyzeSemanticExpression (defineExtensionMethod_complementExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@ifExpressionAST enterExpressionInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mIfExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2871)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mThenExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2872)) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mElseExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2873)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                         extensionMethod_ifExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_ifExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@ifExpressionAST analyzeSemanticExpression'                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_ifExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                       const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                       C_Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ifExpressionAST * object = (const cPtr_ifExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_ifExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_if_5F_expression_123369 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mIfExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_if_5F_expression_123369, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2887)) ;
  GALGAS_semanticExpressionForGeneration var_then_5F_expression_123456 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mThenExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_then_5F_expression_123456, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2897)) ;
  GALGAS_semanticExpressionForGeneration var_else_5F_expression_123726 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mElseExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_else_5F_expression_123726, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2907)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_if_5F_expression_123369.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2916)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2916)).objectCompare (GALGAS_string ("bool"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("the test expression type is '@").add_operation (var_if_5F_expression_123369.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)).add_operation (GALGAS_string ("', it should be '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2918)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2917)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_then_5F_expression_123456.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2920)).objectCompare (var_else_5F_expression_123726.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2920)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mOperatorLocation, GALGAS_string ("operand expression types are '@").add_operation (var_then_5F_expression_123456.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).add_operation (GALGAS_string ("' and '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).add_operation (var_else_5F_expression_123726.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)).add_operation (GALGAS_string ("': they should be the same"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2922)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2921)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      outArgument_outExpression = GALGAS_ifExpressionForGeneration::constructor_new (var_then_5F_expression_123456.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2927)), object->mProperty_mOperatorLocation, var_if_5F_expression_123369, var_then_5F_expression_123456, var_else_5F_expression_123726  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2926)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_ifExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_ifExpressionAST.mSlotID,
                                                  extensionMethod_ifExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_ifExpressionAST_analyzeSemanticExpression (defineExtensionMethod_ifExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@functionCallExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                        GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                        C_Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_124924 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
  while (enumerator_124924.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_124924.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2942)) ;
    enumerator_124924.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                         extensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionCallExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_functionCallExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@functionCallExpressionAST analyzeSemanticExpression'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionCallExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionCallExpressionAST * object = (const cPtr_functionCallExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionCallExpressionAST) ;
  GALGAS_lstring var_usefulnessName_125471 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2956)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_125471 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2957)) ;
  }
  GALGAS_functionSignature var_functionSignature_125765 ;
  GALGAS_unifiedTypeMap_2D_proxy var_resultType_125807 ;
  GALGAS_bool var_isInternal_125833 ;
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).method_searchKey (object->mProperty_mFunctionName, var_functionSignature_125765, var_resultType_125807, var_isInternal_125833, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2959)) ;
  const enumGalgasBool test_0 = var_isInternal_125833.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_procDeclarationLocation_125910 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFunctionMap (HERE).getter_locationForKey (object->mProperty_mFunctionName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2967)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFunctionName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)).objectCompare (var_procDeclarationLocation_125910.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2968)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), GALGAS_string ("this proc is internal to '").add_operation (var_procDeclarationLocation_125910.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2969)) ;
    }
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_functionSignature_125765.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2973)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2973)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2974)), GALGAS_string ("the '").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (GALGAS_string ("' function header declares "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (var_functionSignature_125765.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (GALGAS_string (" formal parameter(s), but this function call names "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2975)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)).add_operation (GALGAS_string (" effective argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2976)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2974)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_126614 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2980)) ;
    cEnumerator_functionSignature enumerator_126687 (var_functionSignature_125765, kENUMERATION_UP) ;
    cEnumerator_actualOutputExpressionList enumerator_126710 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    while (enumerator_126687.hasCurrentObject () && enumerator_126710.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_expression_126961 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_126710.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_126687.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_126961, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2982)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_126687.current_mFormalArgumentType (HERE), var_expression_126961.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)), enumerator_126710.current_mEndOfExpressionLocation (HERE), var_expression_126961, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2990)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_126687.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_126710.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_126687.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = enumerator_126687.current_mFormalSelector (HERE).getter_string (HERE).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)) ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_126710.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)), GALGAS_string ("the selector should be '!").add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2992)) ;
      }
      var_semanticExpressionListForGeneration_126614.addAssign_operation (var_expression_126961  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2994)) ;
      enumerator_126687.gotoNextObject () ;
      enumerator_126710.gotoNextObject () ;
    }
    outArgument_outExpression = GALGAS_functionCallExpressionForGeneration::constructor_new (var_resultType_125807, object->mProperty_mFunctionName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2998)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2999)), var_semanticExpressionListForGeneration_126614  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 2996)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_functionCallExpressionAST.mSlotID,
                                                  extensionMethod_functionCallExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionCallExpressionAST_analyzeSemanticExpression (defineExtensionMethod_functionCallExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@varInExpressionAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                 GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                         extensionMethod_varInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_varInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@varInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_varInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                          GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                          const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_varInExpressionAST * object = (const cPtr_varInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_varInExpressionAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_128372 ;
  GALGAS_string var_sourceVariableCppName_128411 ;
  GALGAS_string var_nameForCheckingFormalParameterUsing_128464 ;
  {
  ioArgument_ioVariableMap.setter_searchForReadAccess (object->mProperty_mVarName, var_type_128372, var_sourceVariableCppName_128411, var_nameForCheckingFormalParameterUsing_128464, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3021)) ;
  }
  outArgument_outExpression = GALGAS_varInExpressionForGeneration::constructor_new (var_type_128372, object->mProperty_mVarName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3029)), var_sourceVariableCppName_128411, var_nameForCheckingFormalParameterUsing_128464  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3027)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_varInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_varInExpressionAST.mSlotID,
                                                  extensionMethod_varInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_varInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_varInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@literalTypeInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                         GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  {
  GALGAS_unifiedTypeMap_2D_proxy joker_128930 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy::class_method_makeProxy (ioArgument_ioTypeMap, object->mProperty_mLiteralTypeName, joker_128930 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3040)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                         extensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_literalTypeInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@literalTypeInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_literalTypeInExpressionAST * object = (const cPtr_literalTypeInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_literalTypeInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_129415 = function_typeNameForUsefulEntitiesGraph (object->mProperty_mLiteralTypeName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3053)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_129415 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3054)) ;
  }
  GALGAS_bool joker_129666_25 ; // Joker input parameter
  GALGAS_bool joker_129666_24 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_129666_23 ; // Joker input parameter
  GALGAS_typeKindEnum joker_129666_22 ; // Joker input parameter
  GALGAS_bool joker_129666_21 ; // Joker input parameter
  GALGAS_typedPropertyList joker_129666_20 ; // Joker input parameter
  GALGAS_propertyMap joker_129666_19 ; // Joker input parameter
  GALGAS_typedPropertyList joker_129666_18 ; // Joker input parameter
  GALGAS_constructorMap joker_129666_17 ; // Joker input parameter
  GALGAS_getterMap joker_129666_16 ; // Joker input parameter
  GALGAS_setterMap joker_129666_15 ; // Joker input parameter
  GALGAS_instanceMethodMap joker_129666_14 ; // Joker input parameter
  GALGAS_classMethodMap joker_129666_13 ; // Joker input parameter
  GALGAS_enumerationDescriptorList joker_129666_12 ; // Joker input parameter
  GALGAS_operators joker_129666_11 ; // Joker input parameter
  GALGAS_functionSignature joker_129666_10 ; // Joker input parameter
  GALGAS_constantIndexMap joker_129666_9 ; // Joker input parameter
  GALGAS_enumConstantList joker_129666_8 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_129666_7 ; // Joker input parameter
  GALGAS_mapSearchMethodListAST joker_129666_6 ; // Joker input parameter
  GALGAS_bool joker_129666_5 ; // Joker input parameter
  GALGAS_unifiedTypeMap_2D_proxy joker_129666_4 ; // Joker input parameter
  GALGAS_string joker_129666_3 ; // Joker input parameter
  GALGAS_string joker_129666_2 ; // Joker input parameter
  GALGAS_headerKind joker_129666_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).method_searchKey (object->mProperty_mLiteralTypeName, joker_129666_25, joker_129666_24, joker_129666_23, joker_129666_22, joker_129666_21, joker_129666_20, joker_129666_19, joker_129666_18, joker_129666_17, joker_129666_16, joker_129666_15, joker_129666_14, joker_129666_13, joker_129666_12, joker_129666_11, joker_129666_10, joker_129666_9, joker_129666_8, joker_129666_7, joker_129666_6, joker_129666_5, joker_129666_4, joker_129666_3, joker_129666_2, joker_129666_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3056)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_129686 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mLiteralTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3058)) ;
  outArgument_outExpression = GALGAS_literalTypeInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("type"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3060)), object->mProperty_mLiteralTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3061)), var_type_129686  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3059)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_literalTypeInExpressionAST.mSlotID,
                                                  extensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_literalTypeInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_literalTypeInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@testDynamicClassInExpressionAST enterExpressionInSemanticContext'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3071)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                         extensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_testDynamicClassInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//              Overriding extension method '@testDynamicClassInExpressionAST analyzeSemanticExpression'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                       const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                       GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                       const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                       C_Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_testDynamicClassInExpressionAST * object = (const cPtr_testDynamicClassInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_testDynamicClassInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_130849 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3089)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_130849, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3086)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_castType_131097 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3095)) ;
  const enumGalgasBool test_0 = var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3097)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_131375 = var_castType_131097 ;
    GALGAS_bool var_found_131402 = GALGAS_bool (kIsEqual, var_t_131375.objectCompare (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3100)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).isValid ()) {
      uint32_t variant_131443 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)).uintValue () ;
      bool loop_131443 = true ;
      while (loop_131443) {
        loop_131443 = var_found_131402.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_and (var_t_131375.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).isValid () ;
        if (loop_131443) {
          loop_131443 = var_found_131402.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_and (var_t_131375.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3102)).boolValue () ;
        }
        if (loop_131443 && (0 == variant_131443)) {
          loop_131443 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3101)) ;
        }
        if (loop_131443) {
          variant_131443 -- ;
          var_t_131375 = var_t_131375.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3103)) ;
          var_found_131402 = GALGAS_bool (kIsEqual, var_t_131375.objectCompare (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3104)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_131402.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3106)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3107)), GALGAS_string ("the '@").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).add_operation (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3108)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3107)) ;
    }
  }else if (kBoolFalse == test_0) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (var_expression_130849.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3111)), GALGAS_string ("expression should be a class instance: it is an @").add_operation (var_expression_130849.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3112)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3112)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3111)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3112)), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3111)) ;
  }
  outArgument_outExpression = GALGAS_testDynamicClassInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE), object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3117)), var_expression_130849, object->mProperty_mTypeComparisonKind, var_castType_131097  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3115)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_testDynamicClassInExpressionAST.mSlotID,
                                                  extensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_testDynamicClassInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@castInExpressionAST enterExpressionInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_castInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3128)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_castInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                         extensionMethod_castInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_castInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_castInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@castInExpressionAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_castInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                           const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                           GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_castInExpressionAST * object = (const cPtr_castInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_castInExpressionAST) ;
  GALGAS_semanticExpressionForGeneration var_expression_133210 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mReceiverExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3145)), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_133210, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3142)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_133253 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3151)) ;
  const enumGalgasBool test_0 = var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3156)).getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3156)).getter_isClassType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3156)).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_t_133546 = var_type_133253 ;
    GALGAS_bool var_found_133569 = GALGAS_bool (kIsEqual, var_t_133546.objectCompare (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3159)))) ;
    if (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).isValid ()) {
      uint32_t variant_133610 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE).getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)).uintValue () ;
      bool loop_133610 = true ;
      while (loop_133610) {
        loop_133610 = var_found_133569.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_and (var_t_133546.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).isValid () ;
        if (loop_133610) {
          loop_133610 = var_found_133569.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_and (var_t_133546.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).getter_isNull (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)) COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3161)).boolValue () ;
        }
        if (loop_133610 && (0 == variant_133610)) {
          loop_133610 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3160)) ;
        }
        if (loop_133610) {
          variant_133610 -- ;
          var_t_133546 = var_t_133546.getter_mSuperType (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3162)) ;
          var_found_133569 = GALGAS_bool (kIsEqual, var_t_133546.objectCompare (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3163)))) ;
        }
      }
    }
    const enumGalgasBool test_1 = var_found_133569.operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3165)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)), GALGAS_string ("the '@").add_operation (object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_string ("' is not a descendant of the '@"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3167)).add_operation (GALGAS_string ("' type of the cast expression"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3168)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3166)) ;
    }
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3170)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3170)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (var_expression_133210.getter_mLocation (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3175)), GALGAS_string ("cast expression should be a class instance or an @object instance: it is an @").add_operation (var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3176)).add_operation (GALGAS_string (" instance"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3177)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3175)) ;
    }
  }
  const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_expression_133210.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3180)).objectCompare (GALGAS_string ("object"))).boolEnum () ;
  if (kBoolTrue == test_5) {
    outArgument_outExpression = GALGAS_extractObjectInExpressionForGeneration::constructor_new (var_type_133253, object->mProperty_mEndOfReceiverExpression, var_expression_133210, object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3185))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3181)) ;
  }else if (kBoolFalse == test_5) {
    outArgument_outExpression = GALGAS_castInExpressionForGeneration::constructor_new (var_type_133253, object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3189)), var_expression_133210, object->mProperty_mTypeName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3191)), var_type_133253  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3187)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_castInExpressionAST.mSlotID,
                                                  extensionMethod_castInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_castInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_castInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//    Overriding extension method '@filewrapperObjectInstanciationInExpressionAST enterExpressionInSemanticContext'    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                            GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                            C_Compiler * /* inCompiler */
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@filewrapperObjectInstanciationInExpressionAST analyzeSemanticExpression'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                                     const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                     const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                                     const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                     GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                                     C_Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperObjectInstanciationInExpressionAST * object = (const cPtr_filewrapperObjectInstanciationInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperObjectInstanciationInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_135557 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3214)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_135557 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3215)) ;
  }
  GALGAS_lstring var_filewrapperPath_135871 ;
  GALGAS_bool var_isInternal_135905 ;
  GALGAS_lstringlist joker_135877_4 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_135877_3 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_135877_2 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_135877_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, var_filewrapperPath_135871, joker_135877_4, joker_135877_3, joker_135877_2, joker_135877_1, var_isInternal_135905, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3217)) ;
  const enumGalgasBool test_0 = var_isInternal_135905.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_135989 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3225)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3226)).objectCompare (var_filewrapperDeclarationLocation_135989.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3226)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_135989.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3227)) ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperInExpressionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("filewrapper"), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3232))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3232)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3232)), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3233)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3234)), var_filewrapperPath_135871.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3235))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3231)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperObjectInstanciationInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperObjectInstanciationInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//         Overriding extension method '@filewrapperTemplateInExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  cEnumerator_actualOutputExpressionList enumerator_136876 (object->mProperty_mExpressions, kENUMERATION_UP) ;
  while (enumerator_136876.hasCurrentObject ()) {
    callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) enumerator_136876.current_mExpression (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3244)) ;
    enumerator_136876.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperTemplateInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@filewrapperTemplateInExpressionAST analyzeSemanticExpression'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                          const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperTemplateInExpressionAST * object = (const cPtr_filewrapperTemplateInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperTemplateInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_137432 = function_filewrapperTemplateNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, object->mProperty_mFilewrapperTemplateName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_137432 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3259)) ;
  }
  GALGAS_filewrapperTemplateMap var_filewrapperTemplateMap_137766 ;
  GALGAS_bool var_isInternal_137793 ;
  GALGAS_lstring joker_137707_4 ; // Joker input parameter
  GALGAS_lstringlist joker_137707_3 ; // Joker input parameter
  GALGAS_wrapperFileMap joker_137707_2 ; // Joker input parameter
  GALGAS_wrapperDirectoryMap joker_137707_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_137707_4, joker_137707_3, joker_137707_2, joker_137707_1, var_filewrapperTemplateMap_137766, var_isInternal_137793, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3261)) ;
  const enumGalgasBool test_0 = var_isInternal_137793.boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location var_filewrapperDeclarationLocation_137878 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3269)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3270)).objectCompare (var_filewrapperDeclarationLocation_137878.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3270)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_137878.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3271)) ;
    }
  }
  GALGAS_functionSignature var_templateSignature_138300 ;
  GALGAS_lstring joker_138302 ; // Joker input parameter
  var_filewrapperTemplateMap_137766.method_searchKey (object->mProperty_mFilewrapperTemplateName, var_templateSignature_138300, joker_138302, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3275)) ;
  GALGAS_semanticExpressionListForGeneration var_effectiveParameterList_138390 ;
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3278)).objectCompare (var_templateSignature_138300.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3278)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperTemplateName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3279)), GALGAS_string ("calling the '").add_operation (object->mProperty_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (GALGAS_string ("' template of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (GALGAS_string ("' filewrapper requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (var_templateSignature_138300.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3280)).add_operation (GALGAS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)).add_operation (object->mProperty_mExpressions.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3282)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3282)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3281)).add_operation (GALGAS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3282)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3279)) ;
    var_effectiveParameterList_138390.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_3) {
    var_effectiveParameterList_138390 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3285)) ;
    cEnumerator_actualOutputExpressionList enumerator_138880 (object->mProperty_mExpressions, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_138905 (var_templateSignature_138300, kENUMERATION_UP) ;
    while (enumerator_138880.hasCurrentObject () && enumerator_138905.hasCurrentObject ()) {
      const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, enumerator_138905.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_138880.current_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_string temp_6 ;
        const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, enumerator_138905.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          temp_6 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_7) {
          temp_6 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_138880.current_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)), GALGAS_string ("the selector should be '!").add_operation (enumerator_138905.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)).add_operation (temp_6, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3288)) ;
      }
      GALGAS_semanticExpressionForGeneration var_exp_139362 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_138880.current_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_138905.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_139362, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3290)) ;
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_138905.current_mFormalArgumentType (HERE), var_exp_139362.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3298)), enumerator_138880.current_mEndOfExpressionLocation (HERE), var_exp_139362, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3298)) ;
      }
      var_effectiveParameterList_138390.addAssign_operation (var_exp_139362  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3299)) ;
      enumerator_138880.gotoNextObject () ;
      enumerator_138905.gotoNextObject () ;
    }
  }
  outArgument_outExpression = GALGAS_filewrapperTemplateInExpressionForGeneration::constructor_new (constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE), object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3305)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3306)), object->mProperty_mFilewrapperTemplateName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3307)), var_effectiveParameterList_138390  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3303)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperTemplateInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperTemplateInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@filewrapperInExpressionAST enterExpressionInSemanticContext'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                         GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                         C_Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                         extensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_filewrapperInExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@filewrapperInExpressionAST analyzeSemanticExpression'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                  const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                  const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                  GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperInExpressionAST * object = (const cPtr_filewrapperInExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperInExpressionAST) ;
  GALGAS_lstring var_usefulnessName_140526 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3328)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_140526 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3329)) ;
  }
  GALGAS_stringlist var_directoryList_140724 ;
  GALGAS_string var_fileName_140743 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3333)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3334)), GALGAS_string ("path is empty"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3334)) ;
    var_directoryList_140724.drop () ; // Release error dropped variable
    var_fileName_140743.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_firstCharacterOrNul (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3335)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3336)), GALGAS_string ("the path should not begin with '/'"), fixItArray3  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3336)) ;
      var_directoryList_140724.drop () ; // Release error dropped variable
      var_fileName_140743.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_2) {
      var_directoryList_140724 = object->mProperty_mFilewrapperPath.getter_string (HERE).getter_componentsSeparatedByString (GALGAS_string ("/") COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3338)) ;
      {
      var_directoryList_140724.setter_popLast (var_fileName_140743, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3339)) ;
      }
    }
  }
  GALGAS_wrapperFileMap var_filewrapperFileMap_141305 ;
  GALGAS_wrapperDirectoryMap var_filewrapperDirectoryMap_141359 ;
  GALGAS_bool var_isInternal_141392 ;
  GALGAS_lstring joker_141253 ; // Joker input parameter
  GALGAS_lstringlist joker_141260 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_141365 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_141253, joker_141260, var_filewrapperFileMap_141305, var_filewrapperDirectoryMap_141359, joker_141365, var_isInternal_141392, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3342)) ;
  const enumGalgasBool test_4 = var_isInternal_141392.boolEnum () ;
  if (kBoolTrue == test_4) {
    GALGAS_location var_filewrapperDeclarationLocation_141476 = constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mFilewrapperMap (HERE).getter_locationForKey (object->mProperty_mFilewrapperName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3353)) ;
    const enumGalgasBool test_5 = GALGAS_bool (kIsNotEqual, object->mProperty_mFilewrapperName.getter_location (HERE).getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3354)).objectCompare (var_filewrapperDeclarationLocation_141476.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3354)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      TC_Array <C_FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)), GALGAS_string ("this filewrapper is internal to '").add_operation (var_filewrapperDeclarationLocation_141476.getter_file (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)).add_operation (GALGAS_string ("' file"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)), fixItArray6  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3355)) ;
    }
  }
  GALGAS_string var_builtPath_141830 = GALGAS_string::makeEmptyString () ;
  if (var_filewrapperDirectoryMap_141359.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).isValid ()) {
    uint32_t variant_141842 = var_filewrapperDirectoryMap_141359.getter_count (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).add_operation (GALGAS_uint ((uint32_t) 1U), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)).uintValue () ;
    bool loop_141842 = true ;
    while (loop_141842) {
      loop_141842 = GALGAS_bool (kIsStrictSup, var_directoryList_140724.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).isValid () ;
      if (loop_141842) {
        loop_141842 = GALGAS_bool (kIsStrictSup, var_directoryList_140724.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3361)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolValue () ;
      }
      if (loop_141842 && (0 == variant_141842)) {
        loop_141842 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3360)) ;
      }
      if (loop_141842) {
        variant_141842 -- ;
        GALGAS_string var_directoryName_141944 ;
        {
        var_directoryList_140724.setter_popFirst (var_directoryName_141944, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3363)) ;
        }
        var_builtPath_141830.plusAssign_operation(var_directoryName_141944.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3364)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3364)) ;
        const enumGalgasBool test_7 = var_filewrapperDirectoryMap_141359.getter_hasKey (var_directoryName_141944 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3365)).boolEnum () ;
        if (kBoolTrue == test_7) {
          GALGAS_uint joker_142254 ; // Joker input parameter
          var_filewrapperDirectoryMap_141359.method_searchKey (GALGAS_lstring::constructor_new (var_directoryName_141944, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3367))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3367)), var_filewrapperFileMap_141305, var_filewrapperDirectoryMap_141359, joker_142254, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3366)) ;
        }else if (kBoolFalse == test_7) {
          TC_Array <C_FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), GALGAS_string ("the '").add_operation (var_builtPath_141830, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)).add_operation (GALGAS_string ("' path does not exists for the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)), fixItArray8  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3373)) ;
          var_filewrapperFileMap_141305.drop () ; // Release error dropped variable
          var_directoryList_140724 = GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3374)) ;
        }
      }
    }
  }
  GALGAS_uint var_fileIndex_142514 ;
  GALGAS_bool var_isTextFile_142533 ;
  const enumGalgasBool test_9 = var_filewrapperFileMap_141305.getter_hasKey (var_fileName_140743 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3379)).boolEnum () ;
  if (kBoolTrue == test_9) {
    GALGAS_string joker_142659 ; // Joker input parameter
    GALGAS_uint joker_142674 ; // Joker input parameter
    var_filewrapperFileMap_141305.method_searchKey (GALGAS_lstring::constructor_new (var_fileName_140743, GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380)), joker_142659, var_isTextFile_142533, joker_142674, var_fileIndex_142514, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3380)) ;
  }else if (kBoolFalse == test_9) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3382)), GALGAS_string ("the '").add_operation (var_fileName_140743, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (GALGAS_string ("' file does not exist in the '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (var_builtPath_141830, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (GALGAS_string ("' directory of '"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)).add_operation (GALGAS_string ("' filewrapper"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3383)), fixItArray10  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3382)) ;
    var_fileIndex_142514.drop () ; // Release error dropped variable
    var_isTextFile_142533.drop () ; // Release error dropped variable
  }
  GALGAS_unifiedTypeMap_2D_proxy temp_11 ;
  const enumGalgasBool test_12 = var_isTextFile_142533.boolEnum () ;
  if (kBoolTrue == test_12) {
    temp_11 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  }else if (kBoolFalse == test_12) {
    temp_11 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("data"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3390))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3390)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3390)) ;
  }
  outArgument_outExpression = GALGAS_filewrapperStaticPathInExpressionForGeneration::constructor_new (temp_11, object->mProperty_mFilewrapperName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3392)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3393)), var_fileIndex_142514, var_isTextFile_142533  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3387)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_filewrapperInExpressionAST.mSlotID,
                                                  extensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperInExpressionAST_analyzeSemanticExpression (defineExtensionMethod_filewrapperInExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@lexiqueIntrospectionExpressionAST enterExpressionInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                         extensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext (defineExtensionMethod_lexiqueIntrospectionExpressionAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@lexiqueIntrospectionExpressionAST analyzeSemanticExpression'              *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                                         const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                         const GALGAS_unifiedTypeMap_2D_proxy /* constinArgument_inType */,
                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                         GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                         GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                                         C_Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueIntrospectionExpressionAST * object = (const cPtr_lexiqueIntrospectionExpressionAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueIntrospectionExpressionAST) ;
  GALGAS_lstring var_usefulnessName_144012 = function_lexiqueNameForUsefulEntitiesGraph (object->mProperty_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3415)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_144012 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3416)) ;
  }
  GALGAS_terminalMap joker_144308_3 ; // Joker input parameter
  GALGAS_indexingListAST joker_144308_2 ; // Joker input parameter
  GALGAS_lstring joker_144308_1 ; // Joker input parameter
  constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mLexiqueComponentName, joker_144308_3, joker_144308_2, joker_144308_1, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3418)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mLexiqueGetterName.getter_string (HERE).objectCompare (GALGAS_string ("symbols"))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLexiqueGetterName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3424)), GALGAS_string ("unknown getter"), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3424)) ;
  }
  outArgument_outExpression = GALGAS_lexiqueIntrospectionForGeneration::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), GALGAS_string ("stringlist").getter_nowhere (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3428)), inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3428)), object->mProperty_mLexiqueComponentName.getter_location (HERE), object->mProperty_mLexiqueComponentName.getter_string (HERE), object->mProperty_mLexiqueGetterName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3427)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_lexiqueIntrospectionExpressionAST.mSlotID,
                                                  extensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression (defineExtensionMethod_lexiqueIntrospectionExpressionAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@expressionCollectionValue enterInSemanticContext'                   *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                              GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                              C_Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3443)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                               extensionMethod_expressionCollectionValue_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionCollectionValue_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@expressionListCollectionValue enterInSemanticContext'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionListCollectionValue_enterInSemanticContext (const cPtr_abstractCollectionValueElement * inObject,
                                                                                  GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  extensionMethod_enterInSemanticContext (object->mProperty_mExpressionList, ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3449)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext (void) {
  enterExtensionMethod_enterInSemanticContext (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                               extensionMethod_expressionListCollectionValue_enterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionListCollectionValue_enterInSemanticContext (defineExtensionMethod_expressionListCollectionValue_enterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                          Overriding extension method '@expressionCollectionValue analyze'                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                               const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                               GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                               const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                               GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                               C_Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionCollectionValue * object = (const cPtr_expressionCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionCollectionValue) ;
  GALGAS_semanticExpressionForGeneration var_expression_146799 ;
  callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inElementType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_146799, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3472)) ;
  {
  routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inElementType, var_expression_146799.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3481)), object->mProperty_mExpressionLocation, var_expression_146799, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3481)) ;
  }
  ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionCollectionValueForGeneration::constructor_new (object->mProperty_mExpressionLocation, var_expression_146799  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3483))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3483)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionCollectionValue.mSlotID,
                                extensionMethod_expressionCollectionValue_analyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionCollectionValue_analyze (defineExtensionMethod_expressionCollectionValue_analyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                        Overriding extension method '@expressionListCollectionValue analyze'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_expressionListCollectionValue_analyze (const cPtr_abstractCollectionValueElement * inObject,
                                                                   const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                   const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inElementType,
                                                                   GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                   GALGAS_collectionValueElementListForGeneration & ioArgument_ioCollectionValueElementListForGeneration,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_expressionListCollectionValue * object = (const cPtr_expressionListCollectionValue *) inObject ;
  macroValidSharedObject (object, cPtr_expressionListCollectionValue) ;
  GALGAS_functionSignature var_formalParameterTypeList_147623 = constinArgument_inElementType.getter_mAddAssignOperatorArguments (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3495)) ;
  GALGAS_semanticExpressionListForGeneration var_semanticExpressionListForGeneration_147744 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_formalParameterTypeList_147623.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3497)).objectCompare (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3497)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mEndOfExpressionLocation, GALGAS_string ("element of of '@").add_operation (constinArgument_inElementType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)).add_operation (GALGAS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)).add_operation (var_formalParameterTypeList_147623.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)).add_operation (GALGAS_string (" parameter(s), while this list has "), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)).add_operation (object->mProperty_mExpressionList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3500)).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3499)).add_operation (GALGAS_string (" element(s)"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3500)), fixItArray1  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3498)) ;
    var_semanticExpressionListForGeneration_147744.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    var_semanticExpressionListForGeneration_147744 = GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3502)) ;
    cEnumerator_actualOutputExpressionList enumerator_148199 (object->mProperty_mExpressionList, kENUMERATION_UP) ;
    cEnumerator_functionSignature enumerator_148230 (var_formalParameterTypeList_147623, kENUMERATION_UP) ;
    while (enumerator_148199.hasCurrentObject () && enumerator_148230.hasCurrentObject ()) {
      GALGAS_semanticExpressionForGeneration var_exp_148485 ;
      callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) enumerator_148199.current (HERE).getter_mExpression (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_148230.current_mFormalArgumentType (HERE), constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_exp_148485, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3504)) ;
      const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, enumerator_148230.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_148199.current (HERE).getter_mActualSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_string temp_3 ;
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_148230.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_4) {
          temp_3 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_4) {
          temp_3 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_148199.current (HERE).getter_mActualSelector (HERE).getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3513)), GALGAS_string ("the selector should be '!").add_operation (enumerator_148230.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3514)), fixItArray5  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3513)) ;
      }
      {
      routine_checkAssignmentTypeWithImplicitGetterCall (enumerator_148230.current_mFormalArgumentType (HERE), var_exp_148485.getter_mResultType (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3516)), object->mProperty_mEndOfExpressionLocation, var_exp_148485, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3516)) ;
      }
      var_semanticExpressionListForGeneration_147744.addAssign_operation (var_exp_148485  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3517)) ;
      enumerator_148199.gotoNextObject () ;
      enumerator_148230.gotoNextObject () ;
    }
    ioArgument_ioCollectionValueElementListForGeneration.addAssign_operation (GALGAS_expressionListCollectionForGeneration::constructor_new (object->mProperty_mEndOfExpressionLocation, var_semanticExpressionListForGeneration_147744  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3519))  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3519)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_expressionListCollectionValue_analyze (void) {
  enterExtensionMethod_analyze (kTypeDescriptor_GALGAS_expressionListCollectionValue.mSlotID,
                                extensionMethod_expressionListCollectionValue_analyze) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_expressionListCollectionValue_analyze (defineExtensionMethod_expressionListCollectionValue_analyze, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@collectionValueAST enterExpressionInSemanticContext'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_collectionValueAST_enterExpressionInSemanticContext (const cPtr_semanticExpressionAST * inObject,
                                                                                 GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  cEnumerator_collectionValueElementList enumerator_150591 (object->mProperty_mElementList, kENUMERATION_UP) ;
  while (enumerator_150591.hasCurrentObject ()) {
    callExtensionMethod_enterInSemanticContext ((const cPtr_abstractCollectionValueElement *) enumerator_150591.current_mElement (HERE).ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3559)) ;
    enumerator_150591.gotoNextObject () ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext (void) {
  enterExtensionMethod_enterExpressionInSemanticContext (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                         extensionMethod_collectionValueAST_enterExpressionInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_collectionValueAST_enterExpressionInSemanticContext (defineExtensionMethod_collectionValueAST_enterExpressionInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@collectionValueAST analyzeSemanticExpression'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_collectionValueAST_analyzeSemanticExpression (const cPtr_semanticExpressionAST * inObject,
                                                                          const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inType,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_collectionValueAST * object = (const cPtr_collectionValueAST *) inObject ;
  macroValidSharedObject (object, cPtr_collectionValueAST) ;
  GALGAS_unifiedTypeMap_2D_proxy var_targetType_151135 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_targetType_151135 = constinArgument_inType ;
  }else if (kBoolFalse == test_0) {
    var_targetType_151135 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3578)) ;
  }
  const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_targetType_151135.objectCompare (GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3581)))).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3582)), GALGAS_string ("Cannot infer type"), fixItArray2  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3582)) ;
    outArgument_outExpression.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_1) {
    const enumGalgasBool test_3 = var_targetType_151135.getter_mSupportCollectionValue (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3583)).operator_not (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3583)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <C_FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (object->mProperty_mTypeName.getter_location (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)), GALGAS_string ("the @").add_operation (var_targetType_151135.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)).add_operation (GALGAS_string (" type does not support collection value"), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)), fixItArray4  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3584)) ;
      outArgument_outExpression.drop () ; // Release error dropped variable
    }else if (kBoolFalse == test_3) {
      GALGAS_lstring var_usefulnessName_151577 = function_typeNameForUsefulEntitiesGraph (GALGAS_lstring::constructor_new (var_targetType_151135.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3586)), object->mProperty_mEndOfCollectionValue  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3586)), inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3586)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (constinArgument_inUsefulnessCallerEntityName, var_usefulnessName_151577 COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3587)) ;
      }
      const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, object->mProperty_mElementList.getter_length (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3588)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
      if (kBoolTrue == test_5) {
        outArgument_outExpression = GALGAS_defaultConstructorExpressionForGeneration::constructor_new (var_targetType_151135, object->mProperty_mTypeName.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3589)) ;
      }else if (kBoolFalse == test_5) {
        GALGAS_collectionValueElementListForGeneration var_collectionValueElementListForGeneration_152007 = GALGAS_collectionValueElementListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3594)) ;
        cEnumerator_collectionValueElementList enumerator_152041 (object->mProperty_mElementList, kENUMERATION_UP) ;
        while (enumerator_152041.hasCurrentObject ()) {
          callExtensionMethod_analyze ((const cPtr_abstractCollectionValueElement *) enumerator_152041.current_mElement (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, var_targetType_151135, ioArgument_ioVariableMap, var_collectionValueElementListForGeneration_152007, inCompiler COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3596)) ;
          enumerator_152041.gotoNextObject () ;
        }
        outArgument_outExpression = GALGAS_expressionCollectionForGeneration::constructor_new (var_targetType_151135, object->mProperty_mEndOfCollectionValue, var_collectionValueElementListForGeneration_152007  COMMA_SOURCE_FILE ("semanticExpressionAnalysis.galgas", 3605)) ;
      }
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_collectionValueAST_analyzeSemanticExpression (void) {
  enterExtensionMethod_analyzeSemanticExpression (kTypeDescriptor_GALGAS_collectionValueAST.mSlotID,
                                                  extensionMethod_collectionValueAST_analyzeSemanticExpression) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_collectionValueAST_analyzeSemanticExpression (defineExtensionMethod_collectionValueAST_analyzeSemanticExpression, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'analyzeSemanticInstructionList'                                       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeSemanticInstructionList (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                             const GALGAS_localConstantList constinArgument_inLocalConstantList,
                                             const GALGAS_localInitializedVariableList constinArgument_inLocalInitializedVariableList,
                                             const GALGAS_semanticInstructionListAST constinArgument_inSemanticInstructionListAST,
                                             const GALGAS_location constinArgument_inEndOfBranchLocation,
                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                             GALGAS_semanticInstructionListForGeneration & outArgument_outInstructionListForGeneration,
                                             C_Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 59)) ;
  {
  ioArgument_ioVariableMap.setter_openBranch (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 61)) ;
  }
  cEnumerator_localConstantList enumerator_3961 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_3961.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_3961.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertUsedLocalConstant (enumerator_3961.current_mName (HERE), enumerator_3961.current_mType (HERE), enumerator_3961.current_mCppName (HERE), enumerator_3961.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 65)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      ioArgument_ioVariableMap.setter_insertLocalConstant (enumerator_3961.current_mName (HERE), enumerator_3961.current_mType (HERE), enumerator_3961.current_mCppName (HERE), enumerator_3961.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 67)) ;
      }
    }
    enumerator_3961.gotoNextObject () ;
  }
  cEnumerator_localInitializedVariableList enumerator_4250 (constinArgument_inLocalInitializedVariableList, kENUMERATION_UP) ;
  while (enumerator_4250.hasCurrentObject ()) {
    {
    ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (enumerator_4250.current_mName (HERE), enumerator_4250.current_mType (HERE), enumerator_4250.current_mCppName (HERE), enumerator_4250.current_mCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 72)) ;
    }
    enumerator_4250.gotoNextObject () ;
  }
  cEnumerator_semanticInstructionListAST enumerator_4405 (constinArgument_inSemanticInstructionListAST, kENUMERATION_UP) ;
  while (enumerator_4405.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_4405.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 76)) ;
    enumerator_4405.gotoNextObject () ;
  }
  {
  ioArgument_ioVariableMap.setter_closeBranch (constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 85)) ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@outputActualParameterAST checkAgainstFormalArgument'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                 const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                 const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                 const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                 const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                 GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                 GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                 GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                 C_Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)))).operator_and (GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 128)))) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 127)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 130)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 131)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 132)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 129)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 135)), GALGAS_string ("the selector should be '!").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 136)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 135)) ;
    }
    GALGAS_semanticExpressionForGeneration var_expression_7378 ;
    callExtensionMethod_analyzeSemanticExpression ((const cPtr_semanticExpressionAST *) object->mProperty_mOutputActualParameterExpression.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inFormalArgumentType, constinArgument_inAnalysisContext, ioArgument_ioVariableMap, var_expression_7378, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 138)) ;
    {
    routine_checkAssignmentTypeWithImplicitGetterCall (constinArgument_inFormalArgumentType, var_expression_7378.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 147)), object->mProperty_mEndOfExpressionLocation, var_expression_7378, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 147)) ;
    }
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_expression_7378  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 149))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 149)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                   extensionMethod_outputActualParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@outputInputActualParameterAST checkAgainstFormalArgument'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                      const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                      GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                      const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                      const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                      const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                      const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                      GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                      GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                      GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                      GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputActualParameterAST * object = (const cPtr_outputInputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 168)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 170)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 171)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 169)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 173)) ;
    }
  }
  GALGAS_string var_variableCppName_9093 ;
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_9211 ;
  {
  GALGAS_string joker_9230 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForReadWriteAccess (object->mProperty_mOutputInputActualParameterName, var_parameterType_9211, var_variableCppName_9093, joker_9230, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 177)) ;
  }
  GALGAS_unifiedTypeMapProxyList var_typeList_9247 = GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (var_parameterType_9211  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 178)) ;
  cEnumerator_lstringlist enumerator_9339 (object->mProperty_mStructAttributeList, kENUMERATION_UP) ;
  while (enumerator_9339.hasCurrentObject ()) {
    GALGAS_propertyMap var_attributeMap_9363 = var_parameterType_9211.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 180)) ;
    var_attributeMap_9363.method_searchKey (enumerator_9339.current_mValue (HERE), var_parameterType_9211, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 181)) ;
    var_typeList_9247.addAssign_operation (var_parameterType_9211  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 189)) ;
    enumerator_9339.gotoNextObject () ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_9211)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 193)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_9211.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 194)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 195)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 193)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mProperty_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 198)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mOutputInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 199)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mProperty_mOutputInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 202)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (var_parameterType_9211, var_variableCppName_9093, object->mProperty_mStructAttributeList, var_typeList_9247  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 204)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                   extensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputActualParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@outputInputSingleJokerParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputSingleJokerParameterAST * object = (const cPtr_outputInputSingleJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputSingleJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 224)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 226)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 227)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 225)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)), GALGAS_string ("the selector should be '!\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 229)) ;
    }
  }
  GALGAS_string var_defaultConstructorName_11800 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 231)) ;
  const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, var_defaultConstructorName_11800.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)), GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 233)) ;
  }
  GALGAS_string var_cppVarName_12073 = GALGAS_string ("joker_").add_operation (object->mProperty_mActualSelector.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 236)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_12073, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mProperty_mActualSelector.getter_location (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 241))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 237)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_12073, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 245)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 246))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 242))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 242)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputSingleJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@outputInputJokerParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputInputJokerParameterAST * object = (const cPtr_outputInputJokerParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputInputJokerParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 262)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 264)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 265)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 263)) ;
  }
  GALGAS_string var_defaultConstructorName_13739 = constinArgument_inFormalArgumentType.getter_mDefaultConstructorName (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 267)) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, var_defaultConstructorName_13739.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mQualifierLocation, GALGAS_string ("the formal parameter type @").add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)).add_operation (GALGAS_string (" should support the default constructor"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 269)) ;
  }
  GALGAS_string var_cppVarName_14015 = GALGAS_string ("joker_").add_operation (object->mProperty_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)).add_operation (object->mProperty_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 272)) ;
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableOrConstantDeclarationWithSourceExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, GALGAS_bool (false), var_cppVarName_14015, GALGAS_defaultConstructorExpressionForGeneration::constructor_new (constinArgument_inFormalArgumentType, object->mProperty_mQualifierLocation  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 277))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 273)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_outputInputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_14015, GALGAS_lstringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 281)), GALGAS_unifiedTypeMapProxyList::constructor_listWithValue (constinArgument_inFormalArgumentType  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 282))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 278)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                   extensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_checkAgainstFormalArgument (defineExtensionMethod_outputInputJokerParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@inputActualExistingVariableParameterAST checkAgainstFormalArgument'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                                const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                                GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                                const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                                const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                                GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                                GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualExistingVariableParameterAST * object = (const cPtr_inputActualExistingVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualExistingVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 298)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 299)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 300)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 301)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 299)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 303)) ;
    }
  }
  GALGAS_unifiedTypeMap_2D_proxy var_parameterType_15947 ;
  GALGAS_string var_targetVariableCppName_15978 ;
  {
  GALGAS_string joker_15984 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mInputActualParameterName, var_parameterType_15947, var_targetVariableCppName_15978, joker_15984, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 305)) ;
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_15947)).boolEnum () ;
  if (kBoolTrue == test_6) {
    TC_Array <C_FixItDescription> fixItArray7 ;
    inCompiler->emitSemanticError (object->mProperty_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 313)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_15947.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 314)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 315)), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 313)) ;
  }
  const enumGalgasBool test_8 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mProperty_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 318)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 319)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 319)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mProperty_mInputActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 322))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 322)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (var_parameterType_15947, var_targetVariableCppName_15978  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 324)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualExistingVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewVariableParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewVariableParameterAST * object = (const cPtr_inputActualNewVariableParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewVariableParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 344)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 345)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 346)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 346)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 347)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 345)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 349)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mProperty_mInputOptionalActualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_18113 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 354)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_18113)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 359)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_18113.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 360)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 361)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 359)) ;
    }
  }
  GALGAS_string var_targetVariableCppName_18574 = GALGAS_string ("var_").add_operation (object->mProperty_mInputActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)).add_operation (object->mProperty_mInputActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 365)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_18574, var_targetVariableCppName_18574, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 366)) ;
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_18574  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 373))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 373)) ;
  const enumGalgasBool test_9 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mProperty_mInputActualParameterName.getter_string (HERE) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 377)).boolEnum () ;
  if (kBoolTrue == test_9) {
    TC_Array <C_FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (object->mProperty_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 378)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray10  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 378)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mProperty_mInputActualParameterName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 381)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_18574  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 383))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 383)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewVariableParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@inputActualNewConstantParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & ioArgument_ioExclusiveVariableSet,
                                                                                           GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputActualNewConstantParameterAST * object = (const cPtr_inputActualNewConstantParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputActualNewConstantParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 403)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 404)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 405)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 406)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 404)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 408)) ;
    }
  }
  const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, object->mProperty_mInputOptionalActualTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_6) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_20885 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mInputOptionalActualTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 412)) ;
    const enumGalgasBool test_7 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentType.objectCompare (var_parameterType_20885)).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <C_FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (object->mProperty_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417)), GALGAS_string ("the parameter object has the '@").add_operation (var_parameterType_20885.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 418)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 418)).add_operation (GALGAS_string ("', it should be the same as the corresponding formal argument: '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 418)).add_operation (constinArgument_inFormalArgumentType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 419)), fixItArray8  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 417)) ;
    }
  }
  GALGAS_string var_targetVariableCppName_21346 = GALGAS_string ("var_").add_operation (object->mProperty_mInputActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)).add_operation (object->mProperty_mInputActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 423)) ;
  const enumGalgasBool test_9 = object->mProperty_mMarkedAsUnused.boolEnum () ;
  if (kBoolTrue == test_9) {
    {
    ioArgument_ioVariableMap.setter_insertUsedLocalConstant (object->mProperty_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_21346, var_targetVariableCppName_21346, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 425)) ;
    }
  }else if (kBoolFalse == test_9) {
    {
    ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mInputActualParameterName, constinArgument_inFormalArgumentType, var_targetVariableCppName_21346, var_targetVariableCppName_21346, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 432)) ;
    }
  }
  ioArgument_ioInstructionListForGeneration.addAssign_operation (GALGAS_localVariableDeclarationForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_21346  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 440))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 440)) ;
  const enumGalgasBool test_10 = ioArgument_ioExclusiveVariableSet.getter_hasKey (object->mProperty_mInputActualParameterName.getter_string (HERE) COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 445)).boolEnum () ;
  if (kBoolTrue == test_10) {
    TC_Array <C_FixItDescription> fixItArray11 ;
    inCompiler->emitSemanticError (object->mProperty_mInputActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)), GALGAS_string ("this variable is already named as input or output/input effective parameter"), fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 446)) ;
  }
  ioArgument_ioExclusiveVariableSet.addAssign_operation (object->mProperty_mInputActualParameterName.getter_string (HERE)  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 449)) ;
  ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputActualParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_targetVariableCppName_21346  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 451))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 451)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                   extensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputActualNewConstantParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@inputSingleJokerActualParameterAST checkAgainstFormalArgument'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                           const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                           GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                           const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                           const GALGAS_lstring constinArgument_inFormalSelector,
                                                                                           const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                           const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                           GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                           GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                           GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                           GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputSingleJokerActualParameterAST * object = (const cPtr_inputSingleJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputSingleJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 470)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)), GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 472)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 473)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 471)) ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (object->mProperty_mActualSelector.getter_string (HERE))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string temp_3 ;
      const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalSelector.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_string (":") ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_string::makeEmptyString () ;
      }
      TC_Array <C_FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (object->mProperty_mActualSelector.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)), GALGAS_string ("the selector should be '\?").add_operation (constinArgument_inFormalSelector.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)).add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 475)) ;
    }else if (kBoolFalse == test_2) {
      GALGAS_string var_cppVarName_23800 = GALGAS_string ("joker_").add_operation (object->mProperty_mActualSelector.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 477)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 477)) ;
      ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_23800  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 479))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 479)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputSingleJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@inputJokerActualParameterAST checkAgainstFormalArgument'                *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (const cPtr_actualParameterAST * inObject,
                                                                                     const GALGAS_lstring /* constinArgument_inUsefulnessCallerEntityName */,
                                                                                     GALGAS_usefulEntitiesGraph & /* ioArgument_ioUsefulEntitiesGraph */,
                                                                                     const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                     const GALGAS_lstring /* constinArgument_inFormalSelector */,
                                                                                     const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inFormalArgumentType,
                                                                                     const GALGAS_formalArgumentPassingModeAST constinArgument_inFormalArgumentPassingMode,
                                                                                     GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                     GALGAS_actualParameterListForGeneration & ioArgument_ioActualParameterListForGeneration,
                                                                                     GALGAS_stringset & /* ioArgument_ioExclusiveVariableSet */,
                                                                                     GALGAS_semanticInstructionListForGeneration & /* ioArgument_ioInstructionListForGeneration */,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputJokerActualParameterAST * object = (const cPtr_inputJokerActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_inputJokerActualParameterAST) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inFormalArgumentPassingMode.objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 498)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mQualifierLocation, GALGAS_string ("the corresponding formal argument has the '").add_operation (extensionGetter_string (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)).add_operation (GALGAS_string ("' passing mode: this parameter should be passed with '"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 500)).add_operation (extensionGetter_correspondingEffectiveParameterString (constinArgument_inFormalArgumentPassingMode, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 501)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 499)) ;
  }else if (kBoolFalse == test_0) {
    GALGAS_string var_cppVarName_25137 = GALGAS_string ("joker_").add_operation (object->mProperty_mQualifierLocation.getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 503)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 503)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 503)).add_operation (object->mProperty_mJokerIndex.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 503)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 503)) ;
    ioArgument_ioActualParameterListForGeneration.addAssign_operation (GALGAS_inputJokerParameterForGeneration::constructor_new (constinArgument_inFormalArgumentType, var_cppVarName_25137  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 505))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 505)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (void) {
  enterExtensionMethod_checkAgainstFormalArgument (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                   extensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_checkAgainstFormalArgument (defineExtensionMethod_inputJokerActualParameterAST_checkAgainstFormalArgument, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//       Overriding extension method '@inputActualExistingVariableParameterAST enterParameterInSemanticContext'        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                     GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualExistingVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualExistingVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewConstantParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewConstantParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewConstantParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@inputActualNewVariableParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputActualNewVariableParameterAST.mSlotID,
                                                        extensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputActualNewVariableParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@inputJokerActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@inputSingleJokerActualParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_inputSingleJokerActualParameterAST.mSlotID,
                                                        extensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_inputSingleJokerActualParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//               Overriding extension method '@outputActualParameterAST enterParameterInSemanticContext'               *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * inObject,
                                                                                      GALGAS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_outputActualParameterAST * object = (const cPtr_outputActualParameterAST *) inObject ;
  macroValidSharedObject (object, cPtr_outputActualParameterAST) ;
  callExtensionMethod_enterExpressionInSemanticContext ((const cPtr_semanticExpressionAST *) object->mProperty_mOutputActualParameterExpression.ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 544)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputActualParameterAST.mSlotID,
                                                        extensionMethod_outputActualParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//            Overriding extension method '@outputInputActualParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                           GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputActualParameterAST.mSlotID,
                                                        extensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputInputActualParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputActualParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//             Overriding extension method '@outputInputJokerParameterAST enterParameterInSemanticContext'             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                          GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputInputJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@outputInputSingleJokerParameterAST enterParameterInSemanticContext'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (const cPtr_actualParameterAST * /* inObject */,
                                                                                                GALGAS_unifiedTypeMap & /* ioArgument_ioTypeMap */,
                                                                                                C_Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (void) {
  enterExtensionMethod_enterParameterInSemanticContext (kTypeDescriptor_GALGAS_outputInputSingleJokerParameterAST.mSlotID,
                                                        extensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext (defineExtensionMethod_outputInputSingleJokerParameterAST_enterParameterInSemanticContext, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                          Routine 'analyzeRoutineArguments'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeRoutineArguments (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                      GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                      const GALGAS_analysisContext constinArgument_inAnalysisContext,
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
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576)).objectCompare (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 576)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inRoutineName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 577)), GALGAS_string ("the ").add_operation (constinArgument_inInvokedEntityName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)).add_operation (GALGAS_string (" defines "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)).add_operation (constinArgument_inRoutineSignature.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)).add_operation (GALGAS_string (" formal argument(s), but this invocation names "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 578)).add_operation (constinArgument_inActualParameterList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 580)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 580)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 579)).add_operation (GALGAS_string (" argument(s)"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 580)), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 577)) ;
    outArgument_outActualParameterListForGeneration.drop () ; // Release error dropped variable
  }else if (kBoolFalse == test_0) {
    outArgument_outActualParameterListForGeneration = GALGAS_actualParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 583)) ;
    GALGAS_stringset var_exclusiveVariableSet_28976 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 584)) ;
    cEnumerator_formalParameterSignature enumerator_29014 (constinArgument_inRoutineSignature, kENUMERATION_UP) ;
    cEnumerator_actualParameterListAST enumerator_29043 (constinArgument_inActualParameterList, kENUMERATION_UP) ;
    while (enumerator_29014.hasCurrentObject () && enumerator_29043.hasCurrentObject ()) {
      callExtensionMethod_checkAgainstFormalArgument ((const cPtr_actualParameterAST *) enumerator_29043.current_mActualParameter (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, enumerator_29014.current_mFormalSelector (HERE), enumerator_29014.current_mFormalArgumentType (HERE), enumerator_29014.current_mFormalArgumentPassingMode (HERE), ioArgument_ioVariableMap, outArgument_outActualParameterListForGeneration, var_exclusiveVariableSet_28976, ioArgument_ioInstructionListForGeneration, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 586)) ;
      enumerator_29014.gotoNextObject () ;
      enumerator_29043.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                         Routine 'checkExpressionIsBoolean'                                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkExpressionIsBoolean (const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                       const GALGAS_location constinArgument_inErrorLocation,
                                       const GALGAS_semanticExpressionForGeneration constinArgument_inExpression,
                                       GALGAS_semanticExpressionForGeneration & outArgument_outExpression,
                                       C_Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outExpression.drop () ; // Release 'out' argument
  GALGAS_unifiedTypeMap_2D_proxy var_expressionType_29804 = constinArgument_inExpression.getter_mResultType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 609)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_boolType_29866 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mBoolType (HERE) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, var_expressionType_29804.objectCompare (var_boolType_29866)).boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outExpression = constinArgument_inExpression ;
  }else if (kBoolFalse == test_0) {
    const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, var_expressionType_29804.getter_mTypeKindEnum (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 614)).objectCompare (GALGAS_typeKindEnum::constructor_structType (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 614)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const enumGalgasBool test_2 = var_expressionType_29804.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)).getter_hasKey (GALGAS_string ("bool") COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 615)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_unifiedTypeMap_2D_proxy var_attributeType_30288 ;
        var_expressionType_29804.getter_mAttributeMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)).method_searchKey (GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 617)), var_attributeType_30288, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 616)) ;
        const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, var_attributeType_30288.objectCompare (var_boolType_29866)).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outExpression = GALGAS_structFieldAccessExpressionForGeneration::constructor_new (var_boolType_29866, constinArgument_inErrorLocation, constinArgument_inExpression, GALGAS_string ("bool")  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 625)) ;
        }else if (kBoolFalse == test_3) {
          TC_Array <C_FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_29804.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)).add_operation (GALGAS_string ("' struct type defines an attribute named 'bool', but its type is not '@bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 632)), fixItArray4  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 631)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }else if (kBoolFalse == test_2) {
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the '@").add_operation (var_expressionType_29804.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 637)).add_operation (GALGAS_string ("' struct type does not define an attribute named 'bool'"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 637)), fixItArray5  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 636)) ;
        outArgument_outExpression.drop () ; // Release error dropped variable
      }
    }else if (kBoolFalse == test_1) {
      const cMapElement_getterMap * objectArray_31071 = (const cMapElement_getterMap *) var_expressionType_29804.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 641)).readAccessForWithInstruction (GALGAS_string ("bool")) ;
      if (NULL != objectArray_31071) {
          macroValidSharedObject (objectArray_31071, cMapElement_getterMap) ;
        const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, objectArray_31071->mProperty_mReturnedType.objectCompare (var_boolType_29866)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <C_FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter, but it does not return a '@bool' value"), fixItArray7  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 643)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_6) {
          const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, objectArray_31071->mProperty_mArgumentTypeList.getter_length (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 644)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <C_FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not @bool, it handles a 'bool' getter that requires argument(s)"), fixItArray9  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 645)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }else if (kBoolFalse == test_8) {
            const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, objectArray_31071->mProperty_mErrorMessage.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_10) {
              TC_Array <C_FixItDescription> fixItArray11 ;
              inCompiler->emitSemanticError (constinArgument_inErrorLocation, objectArray_31071->mProperty_mErrorMessage, fixItArray11  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 647)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }else if (kBoolFalse == test_10) {
              outArgument_outExpression = GALGAS_getterCallExpressionForGeneration::constructor_new (var_boolType_29866, constinArgument_inErrorLocation, objectArray_31071->mProperty_mKind, constinArgument_inExpression, GALGAS_stringlist::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 654)), GALGAS_string ("bool"), GALGAS_semanticExpressionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 656)), objectArray_31071->mProperty_mHasCompilerArgument  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 649)) ;
            }
          }
        }
      }else{
        const enumGalgasBool test_12 = GALGAS_bool (kIsEqual, var_expressionType_29804.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 660)).getter_count (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 660)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <C_FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_29804.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 662)), fixItArray13  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 661)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }else if (kBoolFalse == test_12) {
          TC_Array <C_FixItDescription> fixItArray14 ;
          appendFixItActions (fixItArray14, kFixItReplace, var_expressionType_29804.getter_mGetterMap (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668)).getter_keyList (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 668))) ;
          inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the expression type is not '@bool', but '@").add_operation (var_expressionType_29804.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)).add_operation (GALGAS_string ("', and this type does not define the 'bool' getter "), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 666)), fixItArray14  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 665)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * /* inCompiler */
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeGrammarInstructionSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//  Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                                                const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                const GALGAS_string /* constinArgument_inSyntaxDirectedTranslationResultVarName */,
                                                                                                                GALGAS_stringlist & /* ioArgument_ioAssignementList */,
                                                                                                                GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                                                C_Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 701)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 702)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeGrammarInstructionSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
// Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeGrammarInstructionSDT'  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                 const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                 const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                 GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                 GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                 C_Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 714)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 715)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_34582 ;
  GALGAS_string var_cppName_34603 ;
  {
  GALGAS_string joker_34605 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mActualParameterName, var_type_34582, var_cppName_34603, joker_34605, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 717)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_34626 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_34626.objectCompare (var_type_34582)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)).add_operation (var_type_34582.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 721)).add_operation (var_expectedType_34626.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 722)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 720)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (var_cppName_34603.add_operation (GALGAS_string (" = GALGAS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 724)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeGrammarInstructionSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                         const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                         GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                         C_Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 735)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 736)) ;
  }
  GALGAS_string var_cppName_35649 = GALGAS_string ("var_").add_operation (object->mProperty_mActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)).add_operation (object->mProperty_mActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 738)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_35773 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 739)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mActualParameterName, var_type_35773, var_cppName_35649, var_cppName_35649, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 740)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_35993 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_35993.objectCompare (var_type_35773)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (var_type_35773.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 744)).add_operation (var_expectedType_35993.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 745)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 743)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("GALGAS_string ").add_operation (var_cppName_35649, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 747)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 747)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 747)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 747))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 747)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeGrammarInstructionSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeGrammarInstructionSDT'*
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                                           const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                                           const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                                           const GALGAS_string constinArgument_inSyntaxDirectedTranslationResultVarName,
                                                                                                                           GALGAS_stringlist & ioArgument_ioAssignementList,
                                                                                                                           GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                                           C_Compiler * inCompiler
                                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 758)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 759)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 759)) ;
  }
  GALGAS_string var_cppName_37021 = GALGAS_string ("var_").add_operation (object->mProperty_mActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)).add_operation (object->mProperty_mActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)).getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 761)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_37145 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 762)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mActualParameterName, var_type_37145, var_cppName_37021, var_cppName_37021, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 763)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_37358 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_37358.objectCompare (var_type_37145)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)).add_operation (var_type_37145.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 767)).add_operation (var_expectedType_37358.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 768)), fixItArray3  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 766)) ;
  }
  ioArgument_ioAssignementList.addAssign_operation (GALGAS_string ("const GALGAS_string ").add_operation (var_cppName_37021, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)).add_operation (constinArgument_inSyntaxDirectedTranslationResultVarName, inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)).add_operation (GALGAS_string (") ;"), inCompiler COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770))  COMMA_SOURCE_FILE ("semanticInstructionsAnalysis.galgas", 770)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (void) {
  enterExtensionMethod_analyzeGrammarInstructionSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeGrammarInstructionSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'checkMethodSignatures'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkMethodSignatures (const GALGAS_formalParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_formalParameterSignature constinArgument_inReferenceSignature,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 26)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this method declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 27)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 27)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (GALGAS_string (" formal parameter(s), but overriden method declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 28)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 28)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 27)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 29)) ;
  }else if (kBoolFalse == test_0) {
    cEnumerator_formalParameterSignature enumerator_2762 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalParameterListForGeneration enumerator_2787 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_2762.hasCurrentObject () && enumerator_2787.hasCurrentObject ()) {
      const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalArgumentPassingMode (HERE).objectCompare (enumerator_2787.current_mFormalArgumentPassingMode (HERE))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 33)), GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2787.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)).add_operation (GALGAS_string (", but overriden method declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 35)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 34)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 33)) ;
        TC_Array <C_FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 36)) ;
      }
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_2762.current_mFormalSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_2762.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_2787.current_mFormalSelector (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 39)), GALGAS_string ("the selector should be '").add_operation (extensionGetter_string (enumerator_2762.current_mFormalArgumentPassingMode (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (enumerator_2762.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 39)) ;
      }
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)).objectCompare (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 41)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_2787.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 42)), GALGAS_string ("the '").add_operation (enumerator_2787.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (enumerator_2787.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)).add_operation (GALGAS_string ("' type, but overriden method declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (enumerator_2762.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 43)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 44)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 42)) ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden method is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 45)) ;
      }
      enumerator_2762.gotoNextObject () ;
      enumerator_2787.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Routine 'checkGetterSignatures'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_checkGetterSignatures (const GALGAS_formalInputParameterListForGeneration constinArgument_inTestedSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inReturnType,
                                    const GALGAS_location constinArgument_inErrorLocation,
                                    const GALGAS_functionSignature constinArgument_inReferenceSignature,
                                    const GALGAS_unifiedTypeMap_2D_proxy constinArgument_inInheritedReturnType,
                                    const GALGAS_location constinArgument_inReferenceLocation,
                                    C_Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)).objectCompare (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 64)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("the return type is '@").add_operation (constinArgument_inReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)).add_operation (GALGAS_string ("', but overriden getter names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (constinArgument_inInheritedReturnType.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 66)).add_operation (GALGAS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 67)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 65)) ;
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 68)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsNotEqual, constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)).objectCompare (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 70)))).boolEnum () ;
  if (kBoolTrue == test_3) {
    TC_Array <C_FixItDescription> fixItArray4 ;
    inCompiler->emitSemanticError (constinArgument_inErrorLocation, GALGAS_string ("this getter declares ").add_operation (constinArgument_inTestedSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 71)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)).add_operation (GALGAS_string (" formal parameter(s), but overriden getter declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)).add_operation (constinArgument_inReferenceSignature.getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 72)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 72)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 72)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 71)) ;
    TC_Array <C_FixItDescription> fixItArray5 ;
    inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 73)) ;
  }else if (kBoolFalse == test_3) {
    cEnumerator_functionSignature enumerator_5481 (constinArgument_inReferenceSignature, kENUMERATION_UP) ;
    cEnumerator_formalInputParameterListForGeneration enumerator_5506 (constinArgument_inTestedSignature, kENUMERATION_UP) ;
    while (enumerator_5481.hasCurrentObject () && enumerator_5506.hasCurrentObject ()) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (enumerator_5481.current_mFormalSelector (HERE).getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_6) {
        GALGAS_string temp_7 ;
        const enumGalgasBool test_8 = GALGAS_bool (kIsNotEqual, enumerator_5481.current_mFormalSelector (HERE).getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
        if (kBoolTrue == test_8) {
          temp_7 = GALGAS_string (":") ;
        }else if (kBoolFalse == test_8) {
          temp_7 = GALGAS_string::makeEmptyString () ;
        }
        TC_Array <C_FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_5506.current_mFormalSelector (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 77)), GALGAS_string ("the selector should be '\?").add_operation (enumerator_5481.current_mFormalSelector (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 78)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 78)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 79)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 77)) ;
      }
      const enumGalgasBool test_10 = GALGAS_bool (kIsNotEqual, enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)).objectCompare (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 81)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <C_FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticError (enumerator_5506.current_mFormalArgumentName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 82)), GALGAS_string ("the '").add_operation (enumerator_5506.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (enumerator_5506.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)).add_operation (GALGAS_string ("' type, but overriden getter declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (enumerator_5481.current_mFormalArgumentType (HERE).getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 83)).add_operation (GALGAS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 84)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 82)) ;
        TC_Array <C_FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GALGAS_string ("overriden getter is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 85)) ;
      }
      enumerator_5481.gotoNextObject () ;
      enumerator_5506.gotoNextObject () ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Routine 'buildLocalVariableMapAndSignature'                                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildLocalVariableMapAndSignature (const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                const GALGAS_formalParameterListAST constinArgument_inRoutineSignatureAST,
                                                GALGAS_variableMap & ioArgument_ioVariableMap,
                                                GALGAS_formalParameterListForGeneration & outArgument_outRoutineSignature,
                                                C_Compiler * inCompiler
                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 123)) ;
  cEnumerator_formalParameterListAST enumerator_8156 (constinArgument_inRoutineSignatureAST, kENUMERATION_UP) ;
  while (enumerator_8156.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_8172 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_8156.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 125)) ;
    GALGAS_string var_formalArgumentCppName_8295 ;
    switch (enumerator_8156.current_mFormalArgumentPassingMode (HERE).enumValue ()) {
    case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("inArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 129)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 129)) ;
        const enumGalgasBool test_0 = enumerator_8156.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 131)) ;
          }
        }else if (kBoolFalse == test_0) {
          {
          ioArgument_ioVariableMap.setter_insertInputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 133)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("outArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 136)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 136)) ;
        {
        ioArgument_ioVariableMap.setter_insertOutputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 137)) ;
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("ioArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 139)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 139)) ;
        const enumGalgasBool test_1 = enumerator_8156.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgumentDeclaredAsUnused (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 141)) ;
          }
        }else if (kBoolFalse == test_1) {
          {
          ioArgument_ioVariableMap.setter_insertInputOutputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 143)) ;
          }
        }
      }
      break ;
    case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
      {
        var_formalArgumentCppName_8295 = GALGAS_string ("constinArgument_").add_operation (enumerator_8156.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 146)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 146)) ;
        const enumGalgasBool test_2 = enumerator_8156.current_mIsUnused (HERE).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 148)) ;
          }
        }else if (kBoolFalse == test_2) {
          {
          ioArgument_ioVariableMap.setter_insertConstantInputFormalArgument (enumerator_8156.current_mFormalArgumentName (HERE), var_type_8172, var_formalArgumentCppName_8295, var_formalArgumentCppName_8295, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 150)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.addAssign_operation (enumerator_8156.current_mFormalSelector (HERE), enumerator_8156.current_mFormalArgumentPassingMode (HERE), var_type_8172, enumerator_8156.current_mFormalArgumentName (HERE), var_formalArgumentCppName_8295  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 153)) ;
    enumerator_8156.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'analyzeRoutineBody'                                             *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_analyzeRoutineBody (const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                 const GALGAS_analysisContext constinArgument_inAnalysisContext,
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
  GALGAS_variableMap var_variableMap_10856 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 173)) ;
  cEnumerator_localConstantList enumerator_10942 (constinArgument_inLocalConstantList, kENUMERATION_UP) ;
  while (enumerator_10942.hasCurrentObject ()) {
    const enumGalgasBool test_0 = enumerator_10942.current_mNoWarningIfUnused (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      var_variableMap_10856.setter_insertUsedLocalConstant (enumerator_10942.current_mName (HERE), enumerator_10942.current_mType (HERE), enumerator_10942.current_mCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 177)) ;
      }
    }else if (kBoolFalse == test_0) {
      {
      var_variableMap_10856.setter_insertLocalConstant (enumerator_10942.current_mName (HERE), enumerator_10942.current_mType (HERE), enumerator_10942.current_mCppName (HERE), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 179)) ;
      }
    }
    enumerator_10942.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_11297 (constinArgument_inNonMutableTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_11297.hasCurrentObject ()) {
    {
    var_variableMap_10856.setter_insertNonMutableAttribute (enumerator_11297.current_mPropertyName (HERE), enumerator_11297.current_mPropertyTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 187)).add_operation (enumerator_11297.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 187)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 187)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 187)), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 184)) ;
    }
    enumerator_11297.gotoNextObject () ;
  }
  cEnumerator_typedPropertyList enumerator_11630 (constinArgument_inMutableTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_11630.hasCurrentObject ()) {
    {
    var_variableMap_10856.setter_insertMutableAttribute (enumerator_11630.current_mPropertyName (HERE), enumerator_11630.current_mPropertyTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 196)).add_operation (enumerator_11630.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 196)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 196)), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 193)) ;
    }
    enumerator_11630.gotoNextObject () ;
  }
  {
  routine_buildLocalVariableMapAndSignature (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE), constinArgument_inRoutineSignatureAST, var_variableMap_10856, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 201)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 208)) ;
  cEnumerator_semanticInstructionListAST enumerator_12207 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_12207.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_12207.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10856, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 210)) ;
    enumerator_12207.gotoNextObject () ;
  }
  var_variableMap_10856.method_checkAutomatonStates (constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 219)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                    Overriding extension method '@externFunctionDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externFunctionDeclarationAST * object = (const cPtr_externFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externFunctionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_13043 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 233)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_13043, var_nameForUsefulness_13043, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 234)) ;
  }
  GALGAS_formalInputParameterListForGeneration var_formalArgumentList_13201 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 236)) ;
  cEnumerator_formalInputParameterListAST enumerator_13276 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_13276.hasCurrentObject ()) {
    var_formalArgumentList_13201.addAssign_operation (enumerator_13276.current_mFormalSelector (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_13276.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 240)), enumerator_13276.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 241)), enumerator_13276.current_mFormalArgumentName (HERE), enumerator_13276.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 238)) ;
    enumerator_13276.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern func ").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 246)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 246)), GALGAS_functionPrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mProperty_mFunctionName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 249)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 250)), var_formalArgumentList_13201, GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), object->mProperty_mResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 252))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 247))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 245)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externFunctionDeclarationAST.mSlotID,
                                         extensionMethod_externFunctionDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_externFunctionDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@externRoutineDeclarationAST semanticAnalysis'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_externRoutineDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                          GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                          GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                          const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                          const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                          const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                          GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_externRoutineDeclarationAST * object = (const cPtr_externRoutineDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_externRoutineDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_14432 = function_procedureNameForUsefulEntitiesGraph (object->mProperty_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 266)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_14432, var_nameForUsefulness_14432, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 267)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_14590 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 269)) ;
  cEnumerator_formalParameterListAST enumerator_14660 (object->mProperty_mFormalArgumentList, kENUMERATION_UP) ;
  while (enumerator_14660.hasCurrentObject ()) {
    var_formalArgumentList_14590.addAssign_operation (enumerator_14660.current_mFormalSelector (HERE), enumerator_14660.current_mFormalArgumentPassingMode (HERE), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_14660.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 274)), enumerator_14660.current_mFormalArgumentName (HERE), enumerator_14660.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 276))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 271)) ;
    enumerator_14660.gotoNextObject () ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("extern proc ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 279)), GALGAS_routinePrototypeDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mProperty_mRoutineName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 282)), object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 283)), var_formalArgumentList_14590  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 280))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 278)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_externRoutineDeclarationAST.mSlotID,
                                         extensionMethod_externRoutineDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_externRoutineDeclarationAST_semanticAnalysis (defineExtensionMethod_externRoutineDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@procDeclarationAST semanticAnalysis'                          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_procDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                 GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                 GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                 const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                 const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 C_Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_procDeclarationAST * object = (const cPtr_procDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_procDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_15725 = function_procedureNameForUsefulEntitiesGraph (object->mProperty_mRoutineName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 298)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_15725, var_nameForUsefulness_15725, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 299)) ;
  }
  GALGAS_formalParameterListForGeneration var_formalArgumentList_15900 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 301)) ;
  GALGAS_semanticInstructionListForGeneration var_instructionList_15994 ;
  GALGAS_analysisContext var_analysisContext_16016 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 306)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 308))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 303)) ;
  {
  routine_analyzeRoutineBody (var_nameForUsefulness_15725, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_16016, object->mProperty_mFormalArgumentList, GALGAS_localConstantList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 314)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 315)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 316)), GALGAS_string::makeEmptyString (), object->mProperty_mRoutineInstructionList, object->mProperty_mEndOfRoutineInstructionList, var_instructionList_15994, var_formalArgumentList_15900, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 309)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("proc ").add_operation (object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 325)), GALGAS_routineImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("proc-").add_operation (object->mProperty_mRoutineName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 328)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 328)), object->mProperty_mRoutineName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 329)), var_formalArgumentList_15900, GALGAS_bool (false), var_instructionList_15994  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 326))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 324)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_procDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_procDeclarationAST.mSlotID,
                                         extensionMethod_procDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_procDeclarationAST_semanticAnalysis (defineExtensionMethod_procDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                            Routine 'analyzeFunctionBody'                                            *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
                                  GALGAS_unifiedTypeMap_2D_proxy & outArgument_outReturnedType,
                                  GALGAS_string & outArgument_outResultVariableCppName,
                                  GALGAS_semanticInstructionListForGeneration & outArgument_outSemanticInstructionListForGeneration,
                                  C_Compiler * inCompiler
                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GALGAS_variableMap var_variableMap_17663 = GALGAS_variableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 353)) ;
  cEnumerator_typedPropertyList enumerator_17752 (constinArgument_inTypedAttributeList, kENUMERATION_UP) ;
  while (enumerator_17752.hasCurrentObject ()) {
    {
    var_variableMap_17663.setter_insertNonMutableAttribute (enumerator_17752.current_mPropertyName (HERE), enumerator_17752.current_mPropertyTypeProxy (HERE), constinArgument_inAttributeVariableNamePrefix.add_operation (GALGAS_string ("mProperty_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 359)).add_operation (enumerator_17752.current_mPropertyName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 359)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 359)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 359)), constinArgument_inAnalysisContext.getter_mSelfObjectCppName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 356)) ;
    }
    enumerator_17752.gotoNextObject () ;
  }
  outArgument_outSignatureForGeneration = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 364)) ;
  cEnumerator_formalInputParameterListAST enumerator_18139 (constinArgument_inFunctionSignature, kENUMERATION_UP) ;
  while (enumerator_18139.hasCurrentObject ()) {
    GALGAS_unifiedTypeMap_2D_proxy var_parameterType_18164 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), enumerator_18139.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 366)) ;
    const enumGalgasBool test_0 = enumerator_18139.current_mIsConstant (HERE).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_cppName_18320 = GALGAS_string ("constinArgument_").add_operation (enumerator_18139.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 368)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 368)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 368)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18139.current_mFormalSelector (HERE), var_parameterType_18164, var_cppName_18320, enumerator_18139.current_mFormalArgumentName (HERE), enumerator_18139.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 369)) ;
      const enumGalgasBool test_1 = enumerator_18139.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_variableMap_17663.setter_insertConstantInputFormalArgumentDeclaredAsUnused (enumerator_18139.current_mFormalArgumentName (HERE), var_parameterType_18164, var_cppName_18320, var_cppName_18320, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 376)) ;
        }
      }else if (kBoolFalse == test_1) {
        {
        var_variableMap_17663.setter_insertConstantInputFormalArgument (enumerator_18139.current_mFormalArgumentName (HERE), var_parameterType_18164, var_cppName_18320, var_cppName_18320, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 378)) ;
        }
      }
    }else if (kBoolFalse == test_0) {
      GALGAS_string var_cppName_18869 = GALGAS_string ("inArgument_").add_operation (enumerator_18139.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 381)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 381)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 381)) ;
      outArgument_outSignatureForGeneration.addAssign_operation (enumerator_18139.current_mFormalSelector (HERE), var_parameterType_18164, var_cppName_18869, enumerator_18139.current_mFormalArgumentName (HERE), enumerator_18139.current_mIsConstant (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 382)) ;
      const enumGalgasBool test_2 = enumerator_18139.current_mIsUnused (HERE).boolEnum () ;
      if (kBoolTrue == test_2) {
        {
        var_variableMap_17663.setter_insertInputFormalArgumentDeclaredAsUnused (enumerator_18139.current_mFormalArgumentName (HERE), var_parameterType_18164, var_cppName_18869, var_cppName_18869, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 389)) ;
        }
      }else if (kBoolFalse == test_2) {
        {
        var_variableMap_17663.setter_insertInputFormalArgument (enumerator_18139.current_mFormalArgumentName (HERE), var_parameterType_18164, var_cppName_18869, var_cppName_18869, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 391)) ;
        }
      }
    }
    enumerator_18139.gotoNextObject () ;
  }
  outArgument_outReturnedType = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), constinArgument_inResultTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 396)) ;
  outArgument_outResultVariableCppName = GALGAS_string ("result_").add_operation (constinArgument_inReturnVariableName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 397)) ;
  {
  var_variableMap_17663.setter_insertOutputFormalArgument (constinArgument_inReturnVariableName, outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 398)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GALGAS_semanticInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 400)) ;
  cEnumerator_semanticInstructionListAST enumerator_19891 (constinArgument_inInstructionList, kENUMERATION_UP) ;
  while (enumerator_19891.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) enumerator_19891.current_mInstruction (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, outArgument_outSemanticInstructionListForGeneration, var_variableMap_17663, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 402)) ;
    enumerator_19891.gotoNextObject () ;
  }
  var_variableMap_17663.method_checkAutomatonStates (constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 411)) ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                       Overriding extension method '@functionDeclarationAST semanticAnalysis'                        *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_functionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                     GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                     GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                     const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                     const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                     GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                     C_Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_functionDeclarationAST * object = (const cPtr_functionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_functionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_20709 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 425)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_20709, var_nameForUsefulness_20709, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 426)) ;
  }
  const enumGalgasBool test_0 = object->mProperty_mIsUsefull.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_20709  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 428)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_21021 ;
  GALGAS_formalInputParameterListForGeneration var_formalInputParameterList_21087 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_21122 ;
  GALGAS_string var_resultVariableCppName_21154 ;
  GALGAS_analysisContext var_analysisContext_21176 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 438)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 440))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 435)) ;
  {
  routine_analyzeFunctionBody (var_nameForUsefulness_20709, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_21176, object->mProperty_mFormalArgumentList, GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 446)), GALGAS_string::makeEmptyString (), object->mProperty_mFunctionInstructionList, object->mProperty_mResultVariableName, object->mProperty_mResultTypeName, object->mProperty_mEndOfFunctionInstructionList, var_formalInputParameterList_21087, var_returnType_21122, var_resultVariableCppName_21154, var_semanticInstructionListForGeneration_21021, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 441)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("function ").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 459)), GALGAS_functionImplementationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mProperty_mFunctionName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 462)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 462)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 463)), var_formalInputParameterList_21087, var_returnType_21122, var_resultVariableCppName_21154, var_semanticInstructionListForGeneration_21021  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 460))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 458)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_functionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_functionDeclarationAST.mSlotID,
                                         extensionMethod_functionDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_functionDeclarationAST_semanticAnalysis (defineExtensionMethod_functionDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@onceFunctionDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_onceFunctionDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                         GALGAS_lstringlist & ioArgument_ioUsefulnessRootEntities,
                                                                         GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                         const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                         const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                         const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                         GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                         C_Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_onceFunctionDeclarationAST * object = (const cPtr_onceFunctionDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_onceFunctionDeclarationAST) ;
  GALGAS_lstring var_nameForUsefulness_22629 = function_functionNameForUsefulEntitiesGraph (object->mProperty_mFunctionName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 482)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_22629, var_nameForUsefulness_22629, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 483)) ;
  }
  const enumGalgasBool test_0 = object->mProperty_mIsUsefull.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioUsefulnessRootEntities.addAssign_operation (var_nameForUsefulness_22629  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 485)) ;
  }
  GALGAS_semanticInstructionListForGeneration var_semanticInstructionListForGeneration_22941 ;
  GALGAS_unifiedTypeMap_2D_proxy var_returnType_22976 ;
  GALGAS_string var_resultVariableCppName_23008 ;
  GALGAS_analysisContext var_analysisContext_23030 = GALGAS_analysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 494)), GALGAS_string::makeEmptyString (), GALGAS_unifiedTypeMap_2D_proxy::constructor_null (SOURCE_FILE ("semanticAnalysis.galgas", 496))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 491)) ;
  {
  GALGAS_formalInputParameterListForGeneration joker_23459 ; // Joker input parameter
  routine_analyzeFunctionBody (var_nameForUsefulness_22629, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_23030, GALGAS_formalInputParameterListAST::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 501)), GALGAS_typedPropertyList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 502)), GALGAS_string::makeEmptyString (), object->mProperty_mFunctionInstructionList, object->mProperty_mResultVariableName, object->mProperty_mResultTypeName, object->mProperty_mEndOfFunctionInstructionList, joker_23459, var_returnType_22976, var_resultVariableCppName_23008, var_semanticInstructionListForGeneration_22941, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 497)) ;
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("once function ").add_operation (object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 515)), GALGAS_onceFunctionDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("func-").add_operation (object->mProperty_mFunctionName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 518)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 518)), object->mProperty_mFunctionName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 519)), var_returnType_22976, var_resultVariableCppName_23008, var_semanticInstructionListForGeneration_22941  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 516))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 514)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_onceFunctionDeclarationAST.mSlotID,
                                         extensionMethod_onceFunctionDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_onceFunctionDeclarationAST_semanticAnalysis (defineExtensionMethod_onceFunctionDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@filewrapperDeclarationAST semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_filewrapperDeclarationAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                        GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                        GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                        const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                        const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                        const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                        GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                        C_Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_filewrapperDeclarationAST * object = (const cPtr_filewrapperDeclarationAST *) inObject ;
  macroValidSharedObject (object, cPtr_filewrapperDeclarationAST) ;
  GALGAS_lstring var_filewrapperNameForUsefulness_24938 = function_filewrapperNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 540)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperNameForUsefulness_24938, var_filewrapperNameForUsefulness_24938, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 541)) ;
  }
  GALGAS_wrapperFileMap var_wrapperFileMap_25247 ;
  GALGAS_wrapperDirectoryMap var_wrapperDirectoryMap_25297 ;
  GALGAS_lstring joker_25199 ; // Joker input parameter
  GALGAS_lstringlist joker_25206 ; // Joker input parameter
  GALGAS_filewrapperTemplateMap joker_25303_2 ; // Joker input parameter
  GALGAS_bool joker_25303_1 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mFilewrapperMap (HERE).method_searchKey (object->mProperty_mFilewrapperName, joker_25199, joker_25206, var_wrapperFileMap_25247, var_wrapperDirectoryMap_25297, joker_25303_2, joker_25303_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 543)) ;
  GALGAS_string var_absoluteSourcePath_25363 ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mProperty_mFilewrapperPath.getter_string (HERE).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 553)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
  if (kBoolTrue == test_0) {
    var_absoluteSourcePath_25363 = object->mProperty_mFilewrapperPath.getter_string (HERE) ;
  }else if (kBoolFalse == test_0) {
    var_absoluteSourcePath_25363 = object->mProperty_mSourceFileAbsolutePath.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 556)).add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 556)).add_operation (object->mProperty_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 556)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 556)) ;
  }
  const enumGalgasBool test_1 = var_absoluteSourcePath_25363.getter_directoryExists (SOURCE_FILE ("semanticAnalysis.galgas", 558)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 558)).boolEnum () ;
  if (kBoolTrue == test_1) {
    TC_Array <C_FixItDescription> fixItArray2 ;
    inCompiler->emitSemanticError (object->mProperty_mFilewrapperPath.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 559)), GALGAS_string ("The '").add_operation (var_absoluteSourcePath_25363, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 559)).add_operation (GALGAS_string ("' directory does not exist"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 559)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 559)) ;
  }else if (kBoolFalse == test_1) {
    GALGAS_filewrapperTemplateListForGeneration var_filewrapperTemplateListForGeneration_25870 = GALGAS_filewrapperTemplateListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 562)) ;
    cEnumerator_filewrapperTemplateListAST enumerator_25914 (object->mProperty_mFilewrapperTemplateList, kENUMERATION_UP) ;
    while (enumerator_25914.hasCurrentObject ()) {
      GALGAS_lstring var_filewrapperTemplateNameForUsefulness_25964 = function_filewrapperTemplateNameForUsefulEntitiesGraph (object->mProperty_mFilewrapperName, enumerator_25914.current_mFilewrapperTemplateName (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 564)) ;
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_filewrapperTemplateNameForUsefulness_25964, var_filewrapperTemplateNameForUsefulness_25964, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 568)) ;
      }
      {
      ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_filewrapperTemplateNameForUsefulness_25964, var_filewrapperNameForUsefulness_24938 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 569)) ;
      }
      const enumGalgasBool test_3 = GALGAS_bool (kIsEqual, enumerator_25914.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 570)).getter_firstCharacterOrNul (SOURCE_FILE ("semanticAnalysis.galgas", 570)).objectCompare (GALGAS_char (TO_UNICODE (47)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (enumerator_25914.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 571)), GALGAS_string ("the path should not begin with a '/'; it is relative to filewrapper path '").add_operation (var_absoluteSourcePath_25363, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 572)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 571)) ;
      }
      GALGAS_string var_absoluteTemplatePath_26578 = var_absoluteSourcePath_25363.add_operation (GALGAS_string ("/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 574)).add_operation (enumerator_25914.current_mFilewrapperTemplatePath (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 574)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 574)) ;
      GALGAS_templateInstructionListAST var_resultingInstructionList_26829 ;
      var_resultingInstructionList_26829.drop () ;
      cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, GALGAS_lstring::constructor_new (var_absoluteTemplatePath_26578, enumerator_25914.current_mFilewrapperTemplatePath (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 576))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 576)), var_resultingInstructionList_26829  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 576)) ;
      GALGAS_templateVariableMap var_templateVariableMap_26913 = GALGAS_templateVariableMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 579)) ;
      GALGAS_formalInputParameterListForGeneration var_filewrapperTemplateFormalInputParameters_27004 = GALGAS_formalInputParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 580)) ;
      cEnumerator_formalTemplateInputParameterListAST enumerator_27067 (enumerator_25914.current_mFilewrapperTemplateFormalInputParameters (HERE), kENUMERATION_UP) ;
      while (enumerator_27067.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_type_27087 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_27067.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 582)) ;
        GALGAS_string var_cppVarName_27205 = GALGAS_string ("in_").add_operation (enumerator_27067.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 583)).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 583)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 583)) ;
        {
        var_templateVariableMap_26913.setter_insertKey (enumerator_27067.current_mFormalArgumentName (HERE), var_type_27087, var_cppVarName_27205, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 584)) ;
        }
        var_filewrapperTemplateFormalInputParameters_27004.addAssign_operation (enumerator_27067.current_mFormalTemplateSelector (HERE), var_type_27087, var_cppVarName_27205, enumerator_27067.current_mFormalArgumentName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 585)) ;
        enumerator_27067.gotoNextObject () ;
      }
      GALGAS_templateInstructionListForGeneration var_templateInstructionListForGeneration_27557 = GALGAS_templateInstructionListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 588)) ;
      GALGAS_templateAnalysisContext var_templateAnalysisContext_27633 = GALGAS_templateAnalysisContext::constructor_new (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_templateVariableMap_26913  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 589)) ;
      {
      routine_templateInstructionListAnalysis (var_filewrapperNameForUsefulness_24938, ioArgument_ioUsefulEntitiesGraph, var_templateAnalysisContext_27633, var_resultingInstructionList_26829, var_templateInstructionListForGeneration_27557, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 593)) ;
      }
      var_filewrapperTemplateListForGeneration_25870.addAssign_operation (enumerator_25914.current_mFilewrapperTemplateName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 602)), var_filewrapperTemplateFormalInputParameters_27004, var_templateInstructionListForGeneration_27557  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 601)) ;
      enumerator_25914.gotoNextObject () ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string ("filewrapper ").add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 608)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 608)), GALGAS_filewrapperDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("filewrapper-").add_operation (object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 611)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 611)), object->mProperty_mFilewrapperName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 612)), object->mProperty_mFilewrapperPath.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 613)), var_wrapperFileMap_25247, var_wrapperDirectoryMap_25297, var_filewrapperTemplateListForGeneration_25870  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 609))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 607)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_filewrapperDeclarationAST.mSlotID,
                                         extensionMethod_filewrapperDeclarationAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_filewrapperDeclarationAST_semanticAnalysis (defineExtensionMethod_filewrapperDeclarationAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                      Overriding extension method '@galgas3SyntaxComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                           GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                           GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                           const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                           const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                           const GALGAS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                           GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                           C_Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_SyntaxComponentAST * object = (const cPtr_galgas_33_SyntaxComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_SyntaxComponentAST) ;
  GALGAS_lstring var_nameForUsefulness_29200 = function_syntaxNameForUsefulEntitiesGraph (object->mProperty_mSyntaxComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 632)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_29200, var_nameForUsefulness_29200, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 633)) ;
  }
  GALGAS_terminalMap var_terminalMap_29516 ;
  GALGAS_indexingListAST var_indexingListAST_29558 ;
  GALGAS_lstring var_indexingDirectory_29594 ;
  constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (object->mProperty_mLexiqueName, var_terminalMap_29516, var_indexingListAST_29558, var_indexingDirectory_29594, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 635)) ;
  GALGAS_stringset var_indexNameSet_29686 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 642)) ;
  cEnumerator_indexingListAST enumerator_29719 (var_indexingListAST_29558, kENUMERATION_UP) ;
  while (enumerator_29719.hasCurrentObject ()) {
    var_indexNameSet_29686.addAssign_operation (enumerator_29719.current_mIndexName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 644)) ;
    enumerator_29719.gotoNextObject () ;
  }
  GALGAS_bool var_hasIndexing_29791 = var_indexingDirectory_29594.getter_location (HERE).getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 646)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 646)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 648)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_string var_lexiqueName_29955 = object->mProperty_mLexiqueName.getter_string (HERE) ;
    GALGAS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_30388 ;
    {
    routine_semanticAnalysisOfSyntaxComponent (var_nameForUsefulness_29200, ioArgument_ioUsefulEntitiesGraph, object->mProperty_mNonterminalDeclarationList, object->mProperty_mRuleList, object->mProperty_mSyntaxComponentName.getter_string (HERE), var_lexiqueName_29955, constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, var_terminalMap_29516, var_indexNameSet_29686, var_hasIndexing_29791, object->mProperty_mHasTranslateFeature, var_syntaxDeclarationForGeneration_30388, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 650)) ;
    }
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), var_syntaxDeclarationForGeneration_30388  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 665)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_SyntaxComponentAST.mSlotID,
                                         extensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_galgas_33_SyntaxComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_SyntaxComponentAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@galgas3GrammarComponentAST semanticAnalysis'                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                            GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                            GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                            const GALGAS_string constinArgument_inProductDirectory,
                                                                            const GALGAS_semanticContext constinArgument_inSemanticContext,
                                                                            const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                            GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                            C_Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_galgas_33_GrammarComponentAST * object = (const cPtr_galgas_33_GrammarComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_galgas_33_GrammarComponentAST) ;
  const enumGalgasBool test_0 = GALGAS_application::constructor_verboseOutput (SOURCE_FILE ("semanticAnalysis.galgas", 682)).boolEnum () ;
  if (kBoolTrue == test_0) {
    inCompiler->printMessage (GALGAS_string ("*** Analyzing '").add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 683)).add_operation (GALGAS_string ("' grammar\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 683))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 683)) ;
  }
  GALGAS_lstring var_grammarNameForUsefulness_31167 = function_grammarNameForUsefulEntitiesGraph (object->mProperty_mGrammarComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 686)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_31167, var_grammarNameForUsefulness_31167, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 687)) ;
  }
  GALGAS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_31470 = GALGAS_terminalSymbolsMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 689)) ;
  GALGAS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_31550 = GALGAS_nonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 690)) ;
  GALGAS_lstring var_lexiqueComponentName_31586 = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas", 691)) ;
  GALGAS_syntaxComponentListForGrammarAnalysis var_syntaxComponentListForGrammarAnalysis_31710 = GALGAS_syntaxComponentListForGrammarAnalysis::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 692)) ;
  GALGAS_nonTerminalToAddList var_nonTerminalToAddList_31760 = GALGAS_nonTerminalToAddList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 693)) ;
  GALGAS_uint var_addedNonTerminalCount_31795 = GALGAS_uint ((uint32_t) 0U) ;
  cEnumerator_lstringlist enumerator_31848 (object->mProperty_mSyntaxComponents, kENUMERATION_UP) ;
  while (enumerator_31848.hasCurrentObject ()) {
    GALGAS_lstring var_syntaxNameForUsefulness_31883 = function_syntaxNameForUsefulEntitiesGraph (enumerator_31848.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 696)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31167, var_syntaxNameForUsefulness_31883 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 697)) ;
    }
    GALGAS_uint var_addedNonTerminalCountRef_32069 = var_addedNonTerminalCount_31795 ;
    GALGAS_lstring var_lexiqueName_32224 ;
    GALGAS_nonterminalDeclarationListAST var_nonterminalDeclarationList_32293 ;
    GALGAS_syntaxRuleListAST var_ruleList_32332 ;
    GALGAS_bool var_hasTranslateFeature_32369 ;
    constinArgument_inSemanticContext.getter_mSyntaxComponentMapForSemanticAnalysis (HERE).method_searchKey (enumerator_31848.current_mValue (HERE), var_lexiqueName_32224, var_nonterminalDeclarationList_32293, var_ruleList_32332, var_hasTranslateFeature_32369, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 699)) ;
    GALGAS_lstring var_lexiqueNameForUsefulness_32408 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_32224, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 706)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_31167, var_lexiqueNameForUsefulness_32408 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 707)) ;
    }
    const enumGalgasBool test_1 = object->mProperty_mHasTranslateFeature.operator_and (var_hasTranslateFeature_32369.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 709)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 709)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (enumerator_31848.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 710)), GALGAS_string ("as '").add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 710)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)).add_operation (GALGAS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 710)) ;
    }else if (kBoolFalse == test_1) {
      const enumGalgasBool test_3 = var_hasTranslateFeature_32369.operator_and (object->mProperty_mHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 711)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 711)).boolEnum () ;
      if (kBoolTrue == test_3) {
        TC_Array <C_FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (object->mProperty_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 712)), GALGAS_string ("as '").add_operation (enumerator_31848.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 712)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 712)).add_operation (GALGAS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 712)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 712)) ;
      }
    }
    const enumGalgasBool test_5 = GALGAS_bool (kIsEqual, var_lexiqueComponentName_31586.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_5) {
      var_lexiqueComponentName_31586 = var_lexiqueName_32224 ;
    }else if (kBoolFalse == test_5) {
      const enumGalgasBool test_6 = GALGAS_bool (kIsNotEqual, var_lexiqueName_32224.getter_string (HERE).objectCompare (var_lexiqueComponentName_31586.getter_string (HERE))).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <C_FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_31848.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 718)), GALGAS_string ("this syntax component uses '").add_operation (var_lexiqueName_32224.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 718)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)).add_operation (GALGAS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)).add_operation (var_lexiqueComponentName_31586.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 719)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 719)).add_operation (GALGAS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 720)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 718)) ;
      }
    }
    {
    routine_handleNonTerminalDeclarations (var_nonTerminalMapForGrammarAnalysis_31550, var_nonterminalDeclarationList_32293, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 723)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList (var_nonTerminalMapForGrammarAnalysis_31550, var_ruleList_32332, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 728)) ;
    }
    {
    routine_buildRuleList (var_nonTerminalMapForGrammarAnalysis_31550, enumerator_31848.current_mValue (HERE), var_ruleList_32332, var_actuallyUsedTerminalSymbolMap_31470, var_syntaxComponentListForGrammarAnalysis_31710, var_addedNonTerminalCount_31795, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 733)) ;
    }
    GALGAS_uint var_i_34006 = GALGAS_uint ((uint32_t) 0U) ;
    if (var_addedNonTerminalCount_31795.isValid ()) {
      uint32_t variant_34019 = var_addedNonTerminalCount_31795.uintValue () ;
      bool loop_34019 = true ;
      while (loop_34019) {
        loop_34019 = GALGAS_bool (kIsStrictInf, var_i_34006.objectCompare (var_addedNonTerminalCount_31795.substract_operation (var_addedNonTerminalCountRef_32069, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)))).isValid () ;
        if (loop_34019) {
          loop_34019 = GALGAS_bool (kIsStrictInf, var_i_34006.objectCompare (var_addedNonTerminalCount_31795.substract_operation (var_addedNonTerminalCountRef_32069, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 742)))).boolValue () ;
        }
        if (loop_34019 && (0 == variant_34019)) {
          loop_34019 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas", 742)) ;
        }
        if (loop_34019) {
          variant_34019 -- ;
          var_nonTerminalToAddList_31760.addAssign_operation (enumerator_31848.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 743)), var_i_34006  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 743)) ;
          var_i_34006.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 744)) ;
        }
      }
    }
    enumerator_31848.gotoNextObject () ;
  }
  GALGAS_stringset var_lexiqueComponentSet_34315 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 748)) ;
  GALGAS_lstring var_inIndexingDirectory_34535 ;
  GALGAS_terminalMap joker_34423 ; // Joker input parameter
  GALGAS_indexingListAST joker_34459 ; // Joker input parameter
  constinArgument_inSemanticContext.getter_mLexiqueComponentMapForSemanticAnalysis (HERE).method_searchKey (var_lexiqueComponentName_31586, joker_34423, joker_34459, var_inIndexingDirectory_34535, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 749)) ;
  GALGAS_bool var_hasIndexing_34563 = var_inIndexingDirectory_34535.getter_location (HERE).getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 755)).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 755)) ;
  const enumGalgasBool test_8 = var_hasIndexing_34563.operator_and (object->mProperty_mHasIndexing.getter_bool (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 756)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 756)).boolEnum () ;
  if (kBoolTrue == test_8) {
    TC_Array <C_FixItDescription> fixItArray9 ;
    inCompiler->emitSemanticError (object->mProperty_mGrammarComponentName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 757)), GALGAS_string ("the grammar does not enable indexing, but the '").add_operation (var_lexiqueComponentName_31586.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 757)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)).add_operation (GALGAS_string ("' does"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 757)) ;
  }else if (kBoolFalse == test_8) {
    const enumGalgasBool test_10 = var_hasIndexing_34563.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 758)).operator_and (object->mProperty_mHasIndexing.getter_bool (HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 758)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <C_FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (object->mProperty_mHasIndexing.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 759)), GALGAS_string ("the grammar enables indexing, but the '").add_operation (var_lexiqueComponentName_31586.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 759)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 759)).add_operation (GALGAS_string ("' does not"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 759)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 759)) ;
    }
  }
  GALGAS_uint var_startSymbolIndex_35145 ;
  GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_35217 ;
  var_nonTerminalMapForGrammarAnalysis_31550.method_searchKey (object->mProperty_mStartSymbolName, var_startSymbolIndex_35145, var_startSymbolAltMap_35217, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 763)) ;
  {
  routine_checkLabelMap (object->mProperty_mStartSymbolName.getter_location (HERE), object->mProperty_mStartSymbolLabelList, var_nonTerminalMapForGrammarAnalysis_31550.getter_locationForKey (object->mProperty_mStartSymbolName.getter_string (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 772)), var_startSymbolAltMap_35217, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 769)) ;
  }
  GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_35597 = GALGAS_unusedNonTerminalSymbolMapForGrammarAnalysis::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 776)) ;
  cEnumerator_lstringlist enumerator_35637 (object->mProperty_mUnusedNonterminalList, kENUMERATION_UP) ;
  while (enumerator_35637.hasCurrentObject ()) {
    GALGAS_uint var_nonterminalIndex_35724 ;
    GALGAS_nonterminalSymbolLabelMapForGrammarAnalysis joker_35726 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_31550.method_searchKey (enumerator_35637.current_mValue (HERE), var_nonterminalIndex_35724, joker_35726, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 778)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_35597.setter_insertKey (enumerator_35637.current_mValue (HERE), var_nonterminalIndex_35724, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 779)) ;
    }
    enumerator_35637.gotoNextObject () ;
  }
  GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_36006 = GALGAS_nonTerminalSymbolSortedListForGrammarAnalysis::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 782)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36056 (var_nonTerminalMapForGrammarAnalysis_31550, kENUMERATION_UP) ;
  while (enumerator_36056.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_36006.addAssign_operation (enumerator_36056.current_lkey (HERE), enumerator_36056.current_mNonTerminalIndex (HERE), enumerator_36056.current_mNonterminalSymbolParametersMap (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 784)) ;
    enumerator_36056.gotoNextObject () ;
  }
  const enumGalgasBool test_12 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_emitSyntaxDiagrams.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_12) {
    {
    routine_emitProductionRulesInTexFile (constinArgument_inProductDirectory, object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 790)), var_nonTerminalMapForGrammarAnalysis_31550, var_syntaxComponentListForGrammarAnalysis_31710, object->mProperty_mStartSymbolName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 788)) ;
    }
  }
  GALGAS_stringset var_implementationFileHeader_36863 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 799)) ;
  cEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_36922 (var_nonTerminalMapForGrammarAnalysis_31550, kENUMERATION_UP) ;
  while (enumerator_36922.hasCurrentObject ()) {
    cEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_36983 (enumerator_36922.current (HERE).getter_mNonterminalSymbolParametersMap (HERE), kENUMERATION_UP) ;
    while (enumerator_36983.hasCurrentObject ()) {
      cEnumerator_signatureForGrammarAnalysis enumerator_37024 (enumerator_36983.current_mFormalParametersList (HERE), kENUMERATION_UP) ;
      while (enumerator_37024.hasCurrentObject ()) {
        switch (enumerator_37024.current_mFormalArgumentPassingModeForGrammarAnalysis (HERE).enumValue ()) {
        case GALGAS_formalArgumentPassingModeAST::kNotBuilt:
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentIn:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentConstantIn:
          {
            GALGAS_unifiedTypeMap_2D_proxy var_t_37149 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_37024.current_mGalgasTypeNameForGrammarAnalysis (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 805)) ;
            extensionMethod_addHeaderFileName (var_t_37149, var_implementationFileHeader_36863, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 806)) ;
          }
          break ;
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentInOut:
        case GALGAS_formalArgumentPassingModeAST::kEnum_argumentOut:
          {
          }
          break ;
        }
        enumerator_37024.gotoNextObject () ;
      }
      enumerator_36983.gotoNextObject () ;
    }
    enumerator_36922.gotoNextObject () ;
  }
  const enumGalgasBool test_13 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_generateOneHeader.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_13) {
    var_implementationFileHeader_36863 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 813)) ;
  }
  GALGAS_string var_HTMLFilePath_37582 = constinArgument_inProductDirectory.add_operation (GALGAS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 816)).add_operation (object->mProperty_mGrammarComponentName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 816)).add_operation (GALGAS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 816)) ;
  GALGAS_string var_grammarCppFile_38120 ;
  GALGAS_string var_grammarHTMLHelperContents_38163 ;
  {
  GALGAS_string temp_14 ;
  const enumGalgasBool test_15 = object->mProperty_mHasTranslateFeature.boolEnum () ;
  if (kBoolTrue == test_15) {
    temp_14 = function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 829)) ;
  }else if (kBoolFalse == test_15) {
    temp_14 = GALGAS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration (GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 818)), object->mProperty_mGrammarComponentName, object->mProperty_mGrammarClass, var_startSymbolIndex_35145, var_lexiqueComponentName_31586.getter_string (HERE), var_actuallyUsedTerminalSymbolMap_31470, var_syntaxComponentListForGrammarAnalysis_31710, var_unusedNonTerminalSymbolsForGrammar_35597, var_HTMLFilePath_37582, var_nonTerminalSymbolSortedListForGrammarAnalysis_36006, var_hasIndexing_34563, temp_14, var_grammarCppFile_38120, var_grammarHTMLHelperContents_38163, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 817)) ;
  }
  const enumGalgasBool test_16 = GALGAS_bool (gOption_galgas_5F_cli_5F_options_outputHTMLgrammarFile.getter_value ()).boolEnum () ;
  if (kBoolTrue == test_16) {
    var_HTMLFilePath_37582.getter_stringByDeletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas", 835)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 835)) ;
    GALGAS_bool joker_38476 ; // Joker input parameter
    var_grammarHTMLHelperContents_38163.method_writeToFileWhenDifferentContents (var_HTMLFilePath_37582, joker_38476, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 836)) ;
  }else if (kBoolFalse == test_16) {
    {
    GALGAS_string::class_method_deleteFileIfExists (var_HTMLFilePath_37582, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 838)) ;
    }
  }
  ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_grammarForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("grammar-").add_operation (object->mProperty_mGrammarComponentName.getter_string (HERE).getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 845)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 845)), object->mProperty_mGrammarComponentName.getter_string (HERE), var_lexiqueComponentName_31586.getter_string (HERE), var_nonTerminalMapForGrammarAnalysis_31550, var_nonTerminalToAddList_31760, var_hasIndexing_34563, object->mProperty_mSyntaxComponents, object->mProperty_mStartSymbolName.getter_string (HERE), object->mProperty_mHasTranslateFeature, var_grammarCppFile_38120  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 843))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 841)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_galgas_33_GrammarComponentAST.mSlotID,
                                         extensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_galgas_33_GrammarComponentAST_semanticAnalysis (defineExtensionMethod_galgas_33_GrammarComponentAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                         Overriding extension method '@lexiqueComponentAST semanticAnalysis'                         *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_lexiqueComponentAST_semanticAnalysis (const cPtr_semanticDeclarationAST * inObject,
                                                                  GALGAS_lstringlist & /* ioArgument_ioUsefulnessRootEntities */,
                                                                  GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GALGAS_string /* constinArgument_inProductDirectory */,
                                                                  const GALGAS_semanticContext /* constinArgument_inSemanticContext */,
                                                                  const GALGAS_predefinedTypes /* constinArgument_inPredefinedTypes */,
                                                                  GALGAS_semanticDeclarationListForGeneration & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  C_Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_lexiqueComponentAST * object = (const cPtr_lexiqueComponentAST *) inObject ;
  macroValidSharedObject (object, cPtr_lexiqueComponentAST) ;
  GALGAS_lstring var_nameForUsefulness_39545 = function_lexiqueNameForUsefulEntitiesGraph (object->mProperty_mLexiqueComponentName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 868)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_39545, var_nameForUsefulness_39545, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 869)) ;
  }
  GALGAS_lexicalTypeMap var_lexicalTypeMap_39790 = function_buildLexicalTypeMap (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 871)) ;
  GALGAS_lexicalRoutineMap var_lexicalRoutineMap_39921 ;
  {
  routine_buildLexicalRoutineMap (var_lexicalRoutineMap_39921, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 874)) ;
  }
  cEnumerator_externRoutineListAST enumerator_40061 (object->mProperty_mExternRoutineList, kENUMERATION_UP) ;
  while (enumerator_40061.hasCurrentObject ()) {
    GALGAS_lexicalRoutineFormalArgumentList var_lexicalRoutineFormalArgumentList_40105 = GALGAS_lexicalRoutineFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 877)) ;
    cEnumerator_lexicalExternRoutineFormalArgumentListAST enumerator_40191 (enumerator_40061.current_mLexicalRoutineFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_40191.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_40243 ;
      var_lexicalTypeMap_39790.method_searchKey (enumerator_40191.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_40243, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 880)) ;
      var_lexicalRoutineFormalArgumentList_40105.addAssign_operation (enumerator_40191.current_mPassingMode (HERE), var_lexicalFormalArgumentType_40243, enumerator_40191.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 881))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 881)) ;
      enumerator_40191.gotoNextObject () ;
    }
    {
    var_lexicalRoutineMap_39921.setter_insertKey (enumerator_40061.current_mRoutineName (HERE), var_lexicalRoutineFormalArgumentList_40105, enumerator_40061.current_mErrorMessageList (HERE), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 883)) ;
    }
    enumerator_40061.gotoNextObject () ;
  }
  GALGAS_lexicalFunctionMap var_lexicalFunctionMap_40666 ;
  {
  routine_buildLexicalFunctionMap (var_lexicalFunctionMap_40666, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 887)) ;
  }
  cEnumerator_externFunctionListAST enumerator_40810 (object->mProperty_mExternFunctionList, kENUMERATION_UP) ;
  while (enumerator_40810.hasCurrentObject ()) {
    GALGAS_lexicalFunctionFormalArgumentList var_lexicalFunctionFormalArgumentList_40886 = GALGAS_lexicalFunctionFormalArgumentList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 890)) ;
    cEnumerator_lexicalExternFunctionFormalArgumentListAST enumerator_40940 (enumerator_40810.current_mLexicalFunctionFormalArgumentList (HERE), kENUMERATION_UP) ;
    while (enumerator_40940.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_lexicalFormalArgumentType_40992 ;
      var_lexicalTypeMap_39790.method_searchKey (enumerator_40940.current_mLexicalTypeName (HERE), var_lexicalFormalArgumentType_40992, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 893)) ;
      var_lexicalFunctionFormalArgumentList_40886.addAssign_operation (var_lexicalFormalArgumentType_40992, enumerator_40940.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 894))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 894)) ;
      enumerator_40940.gotoNextObject () ;
    }
    GALGAS_lexicalTypeEnum var_returnedArgumentType_41220 ;
    var_lexicalTypeMap_39790.method_searchKey (enumerator_40810.current_mReturnedTypeName (HERE), var_returnedArgumentType_41220, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 897)) ;
    {
    var_lexicalFunctionMap_40666.setter_insertKey (enumerator_40810.current_mFunctionName (HERE), var_lexicalFunctionFormalArgumentList_40886, var_returnedArgumentType_41220, GALGAS_string::makeEmptyString (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 898)) ;
    }
    enumerator_40810.gotoNextObject () ;
  }
  GALGAS_stringset var_unicodeTestFunctions_41571 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis (object->mProperty_mLexicalFunctionListAST, var_unicodeTestFunctions_41571, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 901)) ;
  }
  GALGAS_lexiqueAnalysisContext var_lexiqueAnalysisContext_41662 = GALGAS_lexiqueAnalysisContext::constructor_new (object->mProperty_mLexiqueComponentName.getter_string (HERE), var_lexicalRoutineMap_39921, var_lexicalFunctionMap_40666, GALGAS_lexicalMessageMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 907)), GALGAS_terminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 908)), GALGAS_terminalList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 909)), GALGAS_lexicalAttributeMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 910)), GALGAS_lexicalExplicitTokenListMapMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 911)), GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 912)), GALGAS_templateDelimitorList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 913)), GALGAS_styleMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 914)), var_unicodeTestFunctions_41571  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 903)) ;
  GALGAS_uint var_styleIndex_42052 = GALGAS_uint ((uint32_t) 1U) ;
  cEnumerator_lexicalStyleListAST enumerator_42086 (object->mProperty_mLexicalStyleList, kENUMERATION_UP) ;
  while (enumerator_42086.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_41662.mProperty_mStyleMap.setter_insertKey (enumerator_42086.current_mName (HERE), enumerator_42086.current_mComment (HERE), var_styleIndex_42052, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 920)) ;
    }
    var_styleIndex_42052.increment_operation (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 921)) ;
    enumerator_42086.gotoNextObject () ;
  }
  {
  routine_buildLexicalAttributeMap (var_lexicalTypeMap_39790, object->mProperty_mLexicalAttributeList, var_lexiqueAnalysisContext_41662.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 924)) ;
  }
  cEnumerator_terminalDeclarationListAST enumerator_42486 (object->mProperty_mTerminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_42486.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_42518 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, enumerator_42486.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 932)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 932)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_lstring joker_42625 ; // Joker input parameter
      var_lexiqueAnalysisContext_41662.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 933)).method_searchKey (enumerator_42486.current_mStyle (HERE), joker_42625, var_terminalStyleIndex_42518, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 933)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_42680 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 935)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_42739 (enumerator_42486.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_42739.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_42786 ;
      var_lexiqueAnalysisContext_41662.getter_mLexicalAttributeMap (HERE).method_searchKey (enumerator_42739.current_mAttributeName (HERE), var_attributeLexicalType_42786, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 938)) ;
      var_argumentTypeList_42680.addAssign_operation (enumerator_42739.current_mFormalSelector (HERE), enumerator_42739.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_42786  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 939)) ;
      enumerator_42739.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_41662.mProperty_mTerminalMap.setter_insertKey (enumerator_42486.current_mName (HERE), var_argumentTypeList_42680, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 941)) ;
    }
    GALGAS_bool var_isEndOfTemplateMark_43089 = GALGAS_bool (false) ;
    GALGAS_bool var_atomicSelection_43121 = GALGAS_bool (true) ;
    cEnumerator_lstringlist enumerator_43154 (enumerator_42486.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_43154.hasCurrentObject ()) {
      const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_43154.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 945)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
      if (kBoolTrue == test_1) {
        const enumGalgasBool test_2 = var_atomicSelection_43121.boolEnum () ;
        if (kBoolTrue == test_2) {
          var_atomicSelection_43121 = GALGAS_bool (false) ;
        }else if (kBoolFalse == test_2) {
          TC_Array <C_FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (enumerator_43154.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 949)), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 949)) ;
        }
      }else if (kBoolFalse == test_1) {
        const enumGalgasBool test_4 = GALGAS_bool (kIsNotEqual, enumerator_43154.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 951)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
        if (kBoolTrue == test_4) {
          TC_Array <C_FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (enumerator_43154.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 952)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 952)) ;
        }else if (kBoolFalse == test_4) {
          const enumGalgasBool test_6 = var_isEndOfTemplateMark_43089.boolEnum () ;
          if (kBoolTrue == test_6) {
            TC_Array <C_FixItDescription> fixItArray7 ;
            inCompiler->emitSemanticError (enumerator_43154.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 954)), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 954)) ;
          }else if (kBoolFalse == test_6) {
            var_isEndOfTemplateMark_43089 = GALGAS_bool (true) ;
          }
        }
      }
      enumerator_43154.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_41662.mProperty_mTerminalList.addAssign_operation (enumerator_42486.current_mName (HERE), var_argumentTypeList_42680, enumerator_42486.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 962)), var_isEndOfTemplateMark_43089, var_atomicSelection_43121, var_terminalStyleIndex_42518  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 959)) ;
    enumerator_42486.gotoNextObject () ;
  }
  cEnumerator_lexicalListDeclarationListAST enumerator_43945 (object->mProperty_mLexicalListDeclarationList, kENUMERATION_UP) ;
  while (enumerator_43945.hasCurrentObject ()) {
    GALGAS_uint var_terminalStyleIndex_43977 = GALGAS_uint ((uint32_t) 0U) ;
    const enumGalgasBool test_8 = GALGAS_bool (kIsStrictSup, enumerator_43945.current_mStyle (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 969)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 969)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_lstring joker_44084 ; // Joker input parameter
      var_lexiqueAnalysisContext_41662.getter_mStyleMap (SOURCE_FILE ("semanticAnalysis.galgas", 970)).method_searchKey (enumerator_43945.current_mStyle (HERE), joker_44084, var_terminalStyleIndex_43977, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 970)) ;
    }
    GALGAS_lexicalSentValueList var_argumentTypeList_44139 = GALGAS_lexicalSentValueList::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 972)) ;
    cEnumerator_sentLexicalAttributeListAST enumerator_44198 (enumerator_43945.current_mSentAttributeList (HERE), kENUMERATION_UP) ;
    while (enumerator_44198.hasCurrentObject ()) {
      GALGAS_lexicalTypeEnum var_attributeLexicalType_44245 ;
      var_lexiqueAnalysisContext_41662.getter_mLexicalAttributeMap (HERE).method_searchKey (enumerator_44198.current_mAttributeName (HERE), var_attributeLexicalType_44245, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 975)) ;
      var_argumentTypeList_44139.addAssign_operation (enumerator_44198.current_mFormalSelector (HERE), enumerator_44198.current_mAttributeName (HERE).getter_string (HERE), var_attributeLexicalType_44245  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 976)) ;
      enumerator_44198.gotoNextObject () ;
    }
    GALGAS_lexicalExplicitTokenListMap var_lexicalTokenListMap_44469 = GALGAS_lexicalExplicitTokenListMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 978)) ;
    GALGAS_tokenSortedlist var_tokenSortedlist_44534 = GALGAS_tokenSortedlist::constructor_emptySortedList (SOURCE_FILE ("semanticAnalysis.galgas", 979)) ;
    cEnumerator_lexicalListEntryListAST enumerator_44595 (enumerator_43945.current_mEntryList (HERE), kENUMERATION_UP) ;
    while (enumerator_44595.hasCurrentObject ()) {
      GALGAS_string var_syntaxErrorMessage_44631 = enumerator_43945.current_mSyntaxErrorMessage (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 981)).getter_stringByReplacingStringByString (GALGAS_string ("%K"), enumerator_44595.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 981)) ;
      GALGAS_bool var_isEndOfTemplateMark_44760 = GALGAS_bool (false) ;
      GALGAS_bool var_atomicSelection_44794 = GALGAS_bool (true) ;
      cEnumerator_lstringlist enumerator_44830 (enumerator_44595.current_mFeatureList (HERE), kENUMERATION_UP) ;
      while (enumerator_44830.hasCurrentObject ()) {
        const enumGalgasBool test_9 = GALGAS_bool (kIsEqual, enumerator_44830.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 985)).objectCompare (GALGAS_string ("nonAtomicSelection"))).boolEnum () ;
        if (kBoolTrue == test_9) {
          const enumGalgasBool test_10 = var_atomicSelection_44794.boolEnum () ;
          if (kBoolTrue == test_10) {
            var_atomicSelection_44794 = GALGAS_bool (false) ;
          }else if (kBoolFalse == test_10) {
            TC_Array <C_FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_44830.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 989)), GALGAS_string ("the 'nonAtomicSelection' attribute is already set"), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 989)) ;
          }
        }else if (kBoolFalse == test_9) {
          const enumGalgasBool test_12 = GALGAS_bool (kIsNotEqual, enumerator_44830.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 991)).objectCompare (GALGAS_string ("templateEndMark"))).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <C_FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticError (enumerator_44830.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 992)), GALGAS_string ("only the 'templateEndMark' and 'nonAtomicSelection' attributes are allowed here"), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 992)) ;
          }else if (kBoolFalse == test_12) {
            const enumGalgasBool test_14 = var_isEndOfTemplateMark_44760.boolEnum () ;
            if (kBoolTrue == test_14) {
              TC_Array <C_FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (enumerator_44830.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 994)), GALGAS_string ("the 'templateEndMark' attribute is already set"), fixItArray15  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 994)) ;
            }else if (kBoolFalse == test_14) {
              var_isEndOfTemplateMark_44760 = GALGAS_bool (true) ;
            }
          }
        }
        enumerator_44830.gotoNextObject () ;
      }
      var_lexiqueAnalysisContext_41662.mProperty_mTerminalList.addAssign_operation (enumerator_44595.current_mTerminalSpelling (HERE), var_argumentTypeList_44139, var_syntaxErrorMessage_44631, var_isEndOfTemplateMark_44760, var_atomicSelection_44794, var_terminalStyleIndex_43977  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 999)) ;
      {
      var_lexiqueAnalysisContext_41662.mProperty_mTerminalMap.setter_insertKey (enumerator_44595.current_mTerminalSpelling (HERE), var_argumentTypeList_44139, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1006)) ;
      }
      {
      var_lexicalTokenListMap_44469.setter_insertKey (enumerator_44595.current_mEntrySpelling (HERE), enumerator_44595.current_mTerminalSpelling (HERE), enumerator_44595.current_mFeatureList (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1007)) ;
      }
      var_tokenSortedlist_44534.addAssign_operation (enumerator_44595.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1008)).getter_length (SOURCE_FILE ("semanticAnalysis.galgas", 1008)), enumerator_44595.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1008)), enumerator_44595.current_mTerminalSpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1008))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1008)) ;
      var_lexiqueAnalysisContext_41662.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_44595.current_mEntrySpelling (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1009))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1009)) ;
      enumerator_44595.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_41662.mProperty_mLexicalTokenListMap.setter_insertKey (enumerator_43945.current_mName (HERE), var_lexicalTokenListMap_44469, var_tokenSortedlist_44534, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1011)) ;
    }
    enumerator_43945.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageDeclarationListAST enumerator_46225 (object->mProperty_mLexicalMessageDeclarationList, kENUMERATION_UP) ;
  while (enumerator_46225.hasCurrentObject ()) {
    {
    var_lexiqueAnalysisContext_41662.mProperty_mLexicalMessageMap.setter_insertKey (enumerator_46225.current_mMessageName (HERE), enumerator_46225.current_mMessageValue (HERE), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1015)) ;
    }
    enumerator_46225.gotoNextObject () ;
  }
  cEnumerator_lexicalRuleListAST enumerator_46412 (object->mProperty_mLexicalRuleList, kENUMERATION_UP) ;
  while (enumerator_46412.hasCurrentObject ()) {
    callExtensionMethod_checkLexicalRule ((const cPtr_abstractLexicalRuleAST *) enumerator_46412.current_mLexicalRule (HERE).ptr (), var_lexiqueAnalysisContext_41662, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1019)) ;
    enumerator_46412.gotoNextObject () ;
  }
  cEnumerator_lexicalMessageMap enumerator_46604 (var_lexiqueAnalysisContext_41662.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1022)), kENUMERATION_UP) ;
  while (enumerator_46604.hasCurrentObject ()) {
    const enumGalgasBool test_16 = enumerator_46604.current_mMessageIsUsed (HERE).operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1023)).boolEnum () ;
    if (kBoolTrue == test_16) {
      TC_Array <C_FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticWarning (enumerator_46604.current_lkey (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1024)), GALGAS_string ("unused message"), fixItArray17  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1024)) ;
    }
    enumerator_46604.gotoNextObject () ;
  }
  cEnumerator_metamodelTemplateDelimitorListAST enumerator_46784 (object->mProperty_mTemplateDelimitorList, kENUMERATION_UP) ;
  while (enumerator_46784.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_41662.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_46784.current_mStartString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1029))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1029)) ;
    var_lexiqueAnalysisContext_41662.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_46784.current_mEndString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1030))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1030)) ;
    GALGAS_bool var_preservesStartDelimiter_46970 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_47003 (enumerator_46784.current_mOptionList (HERE), kENUMERATION_UP) ;
    while (enumerator_47003.hasCurrentObject ()) {
      const enumGalgasBool test_18 = GALGAS_bool (kIsNotEqual, enumerator_47003.current_mValue (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1033)).objectCompare (GALGAS_string ("preserved"))).boolEnum () ;
      if (kBoolTrue == test_18) {
        TC_Array <C_FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (enumerator_47003.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1034)), GALGAS_string ("only the 'preserved' attribute is allowed here"), fixItArray19  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1034)) ;
      }else if (kBoolFalse == test_18) {
        const enumGalgasBool test_20 = var_preservesStartDelimiter_46970.boolEnum () ;
        if (kBoolTrue == test_20) {
          TC_Array <C_FixItDescription> fixItArray21 ;
          inCompiler->emitSemanticError (enumerator_47003.current_mValue (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1036)), GALGAS_string ("the 'preserved' attribute is already set"), fixItArray21  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1036)) ;
        }else if (kBoolFalse == test_20) {
          var_preservesStartDelimiter_46970 = GALGAS_bool (true) ;
        }
      }
      enumerator_47003.gotoNextObject () ;
    }
    var_lexiqueAnalysisContext_41662.mProperty_mTemplateDelimitorList.addAssign_operation (enumerator_46784.current_mStartString (HERE), enumerator_46784.current_mEndString (HERE), var_preservesStartDelimiter_46970  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1041)) ;
    enumerator_46784.gotoNextObject () ;
  }
  const enumGalgasBool test_22 = object->mProperty_mIndexingDirectory.getter_location (HERE).getter_isNowhere (SOURCE_FILE ("semanticAnalysis.galgas", 1044)).boolEnum () ;
  if (kBoolTrue == test_22) {
    cEnumerator_indexingListAST enumerator_47538 (object->mProperty_mIndexingListAST, kENUMERATION_UP) ;
    while (enumerator_47538.hasCurrentObject ()) {
      TC_Array <C_FixItDescription> fixItArray23 ;
      inCompiler->emitSemanticError (enumerator_47538.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1046)), GALGAS_string ("indexing declaration requires one 'indexing in \"path\";' declaration"), fixItArray23  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1046)) ;
      enumerator_47538.gotoNextObject () ;
    }
  }
  GALGAS_stringset var_indexNameSet_47678 = GALGAS_stringset::constructor_emptySet (SOURCE_FILE ("semanticAnalysis.galgas", 1049)) ;
  cEnumerator_indexingListAST enumerator_47712 (object->mProperty_mIndexingListAST, kENUMERATION_UP) ;
  while (enumerator_47712.hasCurrentObject ()) {
    const enumGalgasBool test_24 = var_indexNameSet_47678.getter_hasKey (enumerator_47712.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1051)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1051)).boolEnum () ;
    if (kBoolTrue == test_24) {
      TC_Array <C_FixItDescription> fixItArray25 ;
      inCompiler->emitSemanticError (enumerator_47712.current_mIndexName (HERE).getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1052)), GALGAS_string ("the '").add_operation (enumerator_47712.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)).add_operation (GALGAS_string ("' index is already declared"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)), fixItArray25  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1052)) ;
    }
    var_indexNameSet_47678.addAssign_operation (enumerator_47712.current_mIndexName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1054))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1054)) ;
    enumerator_47712.gotoNextObject () ;
  }
  cEnumerator_templateReplacementListAST enumerator_48003 (object->mProperty_mTemplateReplacementList, kENUMERATION_UP) ;
  while (enumerator_48003.hasCurrentObject ()) {
    var_lexiqueAnalysisContext_41662.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48003.current_mMatchString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1058))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1058)) ;
    var_lexiqueAnalysisContext_41662.mProperty_mUnicodeStringToGenerate.addAssign_operation (enumerator_48003.current_mReplacementString (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1059))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1059)) ;
    enumerator_48003.gotoNextObject () ;
  }
  const enumGalgasBool test_26 = GALGAS_bool (kIsEqual, GALGAS_uint::constructor_errorCount (SOURCE_FILE ("semanticAnalysis.galgas", 1063)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_26) {
    GALGAS_string var_lexiqueClassName_48339 = object->mProperty_mLexiqueComponentName.getter_string (HERE) ;
    GALGAS_string var_headerContents_48407 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_32_ (inCompiler, var_lexiqueClassName_48339.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1067)), var_lexiqueAnalysisContext_41662, object->mProperty_mTemplateDelimitorList COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1066))) ;
    var_headerContents_48407.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newHeaderZone_33_ (inCompiler, var_lexiqueClassName_48339.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1072)), object->mProperty_mLexicalListDeclarationList, var_lexiqueAnalysisContext_41662, object->mProperty_mIndexingListAST, object->mProperty_mLexicalFunctionListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1071))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1071)) ;
    GALGAS_string var_cppContents_48869 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_newImplementationZone_32_Galgas_33_ (inCompiler, var_lexiqueClassName_48339.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1080)), var_lexiqueAnalysisContext_41662.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1081)), var_lexiqueAnalysisContext_41662.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1082)), var_lexiqueAnalysisContext_41662.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1083)), var_lexiqueAnalysisContext_41662.getter_mLexicalTokenListMap (SOURCE_FILE ("semanticAnalysis.galgas", 1084)), var_lexiqueAnalysisContext_41662.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1085)), object->mProperty_mLexicalRuleList, var_lexiqueAnalysisContext_41662, object->mProperty_mIndexingDirectory.getter_string (HERE), object->mProperty_mTemplateDelimitorList, var_lexiqueClassName_48339, object->mProperty_mTemplateReplacementList, object->mProperty_mLexicalStyleList, object->mProperty_mLexicalFunctionListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1079))) ;
    GALGAS_string var_cocoaHeader_49528 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_32_ (inCompiler, var_lexiqueClassName_48339, var_lexiqueAnalysisContext_41662, object->mProperty_mLexicalFunctionListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1096))) ;
    var_cocoaHeader_49528.plusAssign_operation(GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaHeaderZone_33_ (inCompiler, var_lexiqueClassName_48339, var_lexiqueAnalysisContext_41662 COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1101))), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1101)) ;
    GALGAS_string var_cocoaImplementation_49879 = GALGAS_string (filewrapperTemplate_lexiqueGenerationTemplates_cocoaImplementationZone_32_ (inCompiler, GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_48339.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1107)).add_operation (GALGAS_string ("-cocoa"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1107)), var_lexiqueClassName_48339, var_lexiqueAnalysisContext_41662.getter_mLexicalAttributeMap (SOURCE_FILE ("semanticAnalysis.galgas", 1109)), var_lexiqueAnalysisContext_41662.getter_mLexicalMessageMap (SOURCE_FILE ("semanticAnalysis.galgas", 1110)), var_lexiqueAnalysisContext_41662.getter_mTerminalList (SOURCE_FILE ("semanticAnalysis.galgas", 1111)), var_lexiqueAnalysisContext_41662.getter_mUnicodeStringToGenerate (SOURCE_FILE ("semanticAnalysis.galgas", 1112)), object->mProperty_mLexicalRuleList, var_lexiqueAnalysisContext_41662, object->mProperty_mTemplateReplacementList, object->mProperty_mIndexingDirectory.getter_string (HERE), object->mProperty_mIndexingListAST, object->mProperty_mLexicalStyleList, object->mProperty_mTemplateDelimitorList, object->mProperty_mLexicalFunctionListAST COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1106))) ;
    ioArgument_ioSemanticDeclarationListForGeneration.addAssign_operation (GALGAS_string::makeEmptyString (), GALGAS_lexiqueDeclarationForGeneration::constructor_new (GALGAS_bool (true), GALGAS_string ("lexique-").add_operation (var_lexiqueClassName_48339.getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1127)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1127)), var_lexiqueClassName_48339, var_headerContents_48407, var_cppContents_48869, var_cocoaHeader_49528, var_cocoaImplementation_49879  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1125))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1123)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_lexiqueComponentAST_semanticAnalysis (void) {
  enterExtensionMethod_semanticAnalysis (kTypeDescriptor_GALGAS_lexiqueComponentAST.mSlotID,
                                         extensionMethod_lexiqueComponentAST_semanticAnalysis) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_lexiqueComponentAST_semanticAnalysis (defineExtensionMethod_lexiqueComponentAST_semanticAnalysis, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                           Function 'buildPredefinedTypes'                                           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_predefinedTypes function_buildPredefinedTypes (const GALGAS_semanticContext & constinArgument_inSemanticContext,
                                                      C_Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_predefinedTypes result_outPredefinedTypes ; // Returned variable
  result_outPredefinedTypes = GALGAS_predefinedTypes::constructor_new (GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("location"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1145)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("bool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1146)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("char"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1147)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("string"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1148)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1149)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("sint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1150)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("uint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1151)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("sint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1152)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("double"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1153)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lbool"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1154)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lchar"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1155)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lstring"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1156)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("luint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1157)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lsint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1158)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("luint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1159)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lsint64"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1160)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("ldouble"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1161)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("stringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1162)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lbigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1163)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("bigint"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1164)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("stringset"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1165)), GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), GALGAS_lstring::constructor_new (GALGAS_string ("lstringlist"), GALGAS_location::constructor_here (inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1166))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1144)) ;
//---
  return result_outPredefinedTypes ;
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//  Function introspection                                                                                             *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static const C_galgas_type_descriptor * functionArgs_buildPredefinedTypes [2] = {
  & kTypeDescriptor_GALGAS_semanticContext,
  NULL
} ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_galgas_function_descriptor functionDescriptor_buildPredefinedTypes ("buildPredefinedTypes",
                                                                      functionWithGenericHeader_buildPredefinedTypes,
                                                                      & kTypeDescriptor_GALGAS_predefinedTypes,
                                                                      1,
                                                                      functionArgs_buildPredefinedTypes) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                     Filewrapper 'syntaxFileGenerationTemplate'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxFileImplementationGalgas3'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

GALGAS_string filewrapperTemplate_syntaxFileGenerationTemplate_syntaxFileImplementationGalgas_33_ (C_Compiler * /* inCompiler */,
                                                                                                   const GALGAS_stringset & in_INCLUSION_5F_SET
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  C_String result ;
  GALGAS_uint index_27_ (0) ;
  if (in_INCLUSION_5F_SET.isValid ()) {
    cEnumerator_stringset enumerator_27 (in_INCLUSION_5F_SET, kENUMERATION_UP) ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Filewrapper template 'syntaxFileGenerationTemplate syntaxAnalyserClassDeclaration'                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

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
  result << "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "//                                                                                                                     *\n"
    "//" ;
  result << GALGAS_string ("Parser class '").add_operation (in_COMPONENT_5F_NAME, inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).getter_stringByLeftAndRightPadding (GALGAS_uint ((uint32_t) 117U), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 3)).stringValue () ;
  result << "*\n"
    "//                                                                                                                     *\n"
    "//\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""\xE2""\x80""\x94""*\n"
    "\n"
    "class cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 7)).stringValue () ;
  result << " {\n"
    "//--- Virtual destructor\n"
    "  public : virtual ~ cParser_" ;
  result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 9)).stringValue () ;
  result << " (void) {}\n"
    "\n"
    "//--- Non terminal declarations\n" ;
  GALGAS_uint index_814_ (0) ;
  if (in_NONTERMINAL_5F_MAP.isValid ()) {
    cEnumerator_nonterminalMap enumerator_814 (in_NONTERMINAL_5F_MAP, kENUMERATION_UP) ;
    while (enumerator_814.hasCurrentObject ()) {
      GALGAS_uint index_848_ (0) ;
      if (enumerator_814.current_mLabelMap (HERE).isValid ()) {
        cEnumerator_nonterminalLabelMap enumerator_848 (enumerator_814.current_mLabelMap (HERE), kENUMERATION_UP) ;
        while (enumerator_848.hasCurrentObject ()) {
          result << "  protected : virtual void nt_" ;
          result << enumerator_814.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << "_" ;
          result << enumerator_848.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 14)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_1006_IDX (0) ;
          if (enumerator_848.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_1006 (enumerator_848.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_1006.hasCurrentObject ()) {
              const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 16)))).boolEnum () ;
              if (kBoolTrue == test_0) {
                result << "const class GALGAS_" ;
                result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
                result << " constinArgument" ;
                result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 17)).stringValue () ;
              }else if (kBoolFalse == test_0) {
                const enumGalgasBool test_1 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 18)))).boolEnum () ;
                if (kBoolTrue == test_1) {
                  result << "class GALGAS_" ;
                  result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 19)).stringValue () ;
                }else if (kBoolFalse == test_1) {
                  const enumGalgasBool test_2 = GALGAS_bool (kIsEqual, enumerator_1006.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 20)))).boolEnum () ;
                  if (kBoolTrue == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 21)).stringValue () ;
                  }else if (kBoolFalse == test_2) {
                    result << "class GALGAS_" ;
                    result << enumerator_1006.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
                    result << " inArgument" ;
                    result << index_1006_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 23)).stringValue () ;
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
      result << enumerator_814.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 33)).stringValue () ;
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
        result << enumerator_814.current_lkey (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 40)).stringValue () ;
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
    cEnumerator_ruleDeclarationList enumerator_2427 (in_RULE_5F_DECLARATION_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_2427.hasCurrentObject ()) {
      GALGAS_uint index_2467_ (0) ;
      if (enumerator_2427.current_mLabelImplementationList (HERE).isValid ()) {
        cEnumerator_ruleLabelImplementationList enumerator_2467 (enumerator_2427.current_mLabelImplementationList (HERE), kENUMERATION_UP) ;
        while (enumerator_2467.hasCurrentObject ()) {
          result << "  protected : void rule_" ;
          result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_i" ;
          result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << "_" ;
          result << enumerator_2467.current_mLabelName (HERE).getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 46)).stringValue () ;
          result << " (" ;
          columnMarker = result.currentColumn () ;
          GALGAS_uint index_2696_IDX (0) ;
          if (enumerator_2467.current_mSignature (HERE).isValid ()) {
            cEnumerator_formalParameterSignature enumerator_2696 (enumerator_2467.current_mSignature (HERE), kENUMERATION_UP) ;
            while (enumerator_2696.hasCurrentObject ()) {
              const enumGalgasBool test_6 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentConstantIn (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 48)))).boolEnum () ;
              if (kBoolTrue == test_6) {
                result << "const GALGAS_" ;
                result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
                result << " constinArgument" ;
                result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 49)).stringValue () ;
              }else if (kBoolFalse == test_6) {
                const enumGalgasBool test_7 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentInOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 50)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  result << "GALGAS_" ;
                  result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                  result << " & ioArgument" ;
                  result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 51)).stringValue () ;
                }else if (kBoolFalse == test_7) {
                  const enumGalgasBool test_8 = GALGAS_bool (kIsEqual, enumerator_2696.current_mFormalArgumentPassingMode (HERE).objectCompare (GALGAS_formalArgumentPassingModeAST::constructor_argumentOut (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 52)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                    result << " & outArgument" ;
                    result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 53)).stringValue () ;
                  }else if (kBoolFalse == test_8) {
                    result << "GALGAS_" ;
                    result << enumerator_2696.current_mFormalArgumentType (HERE).getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
                    result << " inArgument" ;
                    result << index_2696_IDX.getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 55)).stringValue () ;
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
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_" ;
      result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
      result << "_i" ;
      result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 64)).stringValue () ;
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
        result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_" ;
        result << enumerator_2427.current_mNonterminalName (HERE).getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
        result << "_i" ;
        result << enumerator_2427.current_mRuleIndex (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 70)).stringValue () ;
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
    cEnumerator_uintlist enumerator_4191 (in_SELECT_5F_METHOD_5F_LIST, kENUMERATION_UP) ;
    while (enumerator_4191.hasCurrentObject ()) {
      result << "  protected : virtual int32_t select_" ;
      result << in_COMPONENT_5F_NAME.getter_identifierRepresentation (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
      result << "_" ;
      result << enumerator_4191.current_mValue (HERE).getter_string (SOURCE_FILE ("syntax-analyser-class.galgasTemplate", 76)).stringValue () ;
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

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                 Routine 'enterNonterminalNonTerminalInMapAndCheck'                                  *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_enterNonterminalNonTerminalInMapAndCheck (const GALGAS_lstring constinArgument_inNonTerminalName,
                                                       const GALGAS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                       GALGAS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                       C_Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cMapElement_nonterminalMap * objectArray_57953 = (const cMapElement_nonterminalMap *) ioArgument_ioNonterminalDeclarationMap.readAccessForWithInstruction (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1254))) ;
  if (NULL != objectArray_57953) {
      macroValidSharedObject (objectArray_57953, cMapElement_nonterminalMap) ;
    GALGAS_stringset var_firstDeclarationLabelSet_58059 = objectArray_57953->mProperty_mLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1255)) ;
    GALGAS_stringset var_reDeclarationLabelSet_58121 = constinArgument_inNonterminalLabelMap.getter_keySet (SOURCE_FILE ("semanticAnalysis.galgas", 1256)) ;
    GALGAS_stringset var_missingLabelSet_58189 = var_firstDeclarationLabelSet_58059.substract_operation (var_reDeclarationLabelSet_58121, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1257)) ;
    const enumGalgasBool test_0 = GALGAS_bool (kIsStrictSup, var_missingLabelSet_58189.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1258)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_s_58296 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_58333 (var_missingLabelSet_58189, kENUMERATION_UP) ;
      while (enumerator_58333.hasCurrentObject ()) {
        var_s_58296.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_58333.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1261)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1261)) ;
        enumerator_58333.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inNonTerminalName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1263)), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1264)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)).add_operation (GALGAS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)).add_operation (var_s_58296, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1264)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1263)) ;
    }
    GALGAS_stringset var_newLabelSet_58546 = var_reDeclarationLabelSet_58121.substract_operation (var_firstDeclarationLabelSet_58059, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1266)) ;
    const enumGalgasBool test_2 = GALGAS_bool (kIsStrictSup, var_newLabelSet_58546.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1267)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
    if (kBoolTrue == test_2) {
      GALGAS_string var_s_58645 = GALGAS_string::makeEmptyString () ;
      cEnumerator_stringset enumerator_58678 (var_newLabelSet_58546, kENUMERATION_UP) ;
      while (enumerator_58678.hasCurrentObject ()) {
        var_s_58645.plusAssign_operation(GALGAS_string ("\n"
          "-  ").add_operation (enumerator_58678.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1270)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1270)) ;
        enumerator_58678.gotoNextObject () ;
      }
      TC_Array <C_FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inNonTerminalName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1272)), GALGAS_string ("the '").add_operation (constinArgument_inNonTerminalName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1273)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)).add_operation (GALGAS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)).add_operation (var_s_58645, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1273)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1272)) ;
    }
    const enumGalgasBool test_4 = GALGAS_bool (kIsEqual, var_missingLabelSet_58189.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1275)).objectCompare (GALGAS_uint ((uint32_t) 0U))).operator_and (GALGAS_bool (kIsEqual, var_newLabelSet_58546.getter_count (SOURCE_FILE ("semanticAnalysis.galgas", 1275)).objectCompare (GALGAS_uint ((uint32_t) 0U))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1275)).boolEnum () ;
    if (kBoolTrue == test_4) {
      cEnumerator_nonterminalLabelMap enumerator_58953 (objectArray_57953->mProperty_mLabelMap, kENUMERATION_UP) ;
      cEnumerator_nonterminalLabelMap enumerator_58987 (constinArgument_inNonterminalLabelMap, kENUMERATION_UP) ;
      while (enumerator_58953.hasCurrentObject () && enumerator_58987.hasCurrentObject ()) {
        GALGAS_formalParameterSignature var_newSignature_59037 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1277)) ;
        cEnumerator_formalParameterSignature enumerator_59075 (enumerator_58987.current_mSignature (HERE), kENUMERATION_UP) ;
        while (enumerator_59075.hasCurrentObject ()) {
          var_newSignature_59037.addAssign_operation (enumerator_59075.current_mFormalSelector (HERE), enumerator_59075.current_mFormalArgumentType (HERE), enumerator_59075.current_mFormalArgumentPassingMode (HERE), enumerator_59075.current_mFormalArgumentName (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1279)) ;
          enumerator_59075.gotoNextObject () ;
        }
        {
        routine_checkMethodSignatures (enumerator_58953.current (HERE).getter_mSignatureForGeneration (HERE), enumerator_58953.current (HERE).getter_mEndOfArgumentLocation (HERE), var_newSignature_59037, enumerator_58987.current_mEndOfArgumentLocation (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1281)) ;
        }
        enumerator_58953.gotoNextObject () ;
        enumerator_58987.gotoNextObject () ;
      }
    }
  }else{
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1290)) ;
    }
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                                      Routine 'buildNonterminalDeclarationsMap'                                      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

void routine_buildNonterminalDeclarationsMap (const GALGAS_nonterminalDeclarationListAST constinArgument_inNonterminalDeclarationList,
                                              const GALGAS_semanticContext constinArgument_inSemanticContext,
                                              GALGAS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                              C_Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GALGAS_nonterminalMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1300)) ;
  cEnumerator_nonterminalDeclarationListAST enumerator_59957 (constinArgument_inNonterminalDeclarationList, kENUMERATION_UP) ;
  while (enumerator_59957.hasCurrentObject ()) {
    GALGAS_nonterminalLabelMap var_nonterminalLabelMap_59988 = GALGAS_nonterminalLabelMap::constructor_emptyMap (SOURCE_FILE ("semanticAnalysis.galgas", 1303)) ;
    cEnumerator_nonTerminalLabelListAST enumerator_60035 (enumerator_59957.current_mLabels (HERE), kENUMERATION_UP) ;
    while (enumerator_60035.hasCurrentObject ()) {
      GALGAS_formalParameterListForGeneration var_signatureForGeneration_60071 = GALGAS_formalParameterListForGeneration::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1305)) ;
      GALGAS_formalParameterSignature var_signature_60129 = GALGAS_formalParameterSignature::constructor_emptyList (SOURCE_FILE ("semanticAnalysis.galgas", 1306)) ;
      cEnumerator_formalParameterListAST enumerator_60195 (enumerator_60035.current_mFormalArgumentList (HERE), kENUMERATION_UP) ;
      while (enumerator_60195.hasCurrentObject ()) {
        GALGAS_unifiedTypeMap_2D_proxy var_t_60212 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inSemanticContext.getter_mTypeMap (HERE), enumerator_60195.current_mFormalArgumentTypeName (HERE), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1308)) ;
        var_signatureForGeneration_60071.addAssign_operation (enumerator_60195.current_mFormalSelector (HERE), enumerator_60195.current_mFormalArgumentPassingMode (HERE), var_t_60212, enumerator_60195.current_mFormalArgumentName (HERE), enumerator_60195.current_mFormalArgumentName (HERE).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1309))  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1309)) ;
        var_signature_60129.addAssign_operation (enumerator_60195.current_mFormalSelector (HERE), var_t_60212, enumerator_60195.current_mFormalArgumentPassingMode (HERE), enumerator_60195.current_mFormalArgumentName (HERE).getter_string (HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1310)) ;
        enumerator_60195.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_59988.setter_insertKey (enumerator_60035.current_mLabelName (HERE), var_signatureForGeneration_60071, var_signature_60129, enumerator_60035.current_mEndOfArgumentLocation (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1312)) ;
      }
      enumerator_60035.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck (enumerator_59957.current_mNonterminalName (HERE), var_nonterminalLabelMap_59988, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1314)) ;
    }
    enumerator_59957.gotoNextObject () ;
  }
}


//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                   Overriding extension method '@semanticInstructionAST analyzeSyntaxInstruction'                    *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (const cPtr_syntaxInstructionAST * inObject,
                                                                             const GALGAS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                             GALGAS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                             const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                             const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                             const GALGAS_terminalMap /* constinArgument_inTerminalMap */,
                                                                             const GALGAS_string /* constinArgument_inLexiqueName */,
                                                                             const GALGAS_nonterminalMap /* constinArgument_inNonterminalMap */,
                                                                             const GALGAS_string /* constinArgument_inComponentName */,
                                                                             const GALGAS_stringset /* constinArgument_inIndexNameSet */,
                                                                             GALGAS_semanticInstructionListForGeneration & ioArgument_ioInstructionListForGeneration,
                                                                             GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                             GALGAS_uint & /* ioArgument_ioSelectMethodCount */,
                                                                             C_Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_semanticInstructionAST * object = (const cPtr_semanticInstructionAST *) inObject ;
  macroValidSharedObject (object, cPtr_semanticInstructionAST) ;
  const GALGAS_semanticInstructionAST temp_0 = object ;
  callExtensionMethod_analyzeSemanticInstruction ((const cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1354)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction (void) {
  enterExtensionMethod_analyzeSyntaxInstruction (kTypeDescriptor_GALGAS_semanticInstructionAST.mSlotID,
                                                 extensionMethod_semanticInstructionAST_analyzeSyntaxInstruction) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_semanticInstructionAST_analyzeSyntaxInstruction (defineExtensionMethod_semanticInstructionAST_analyzeSyntaxInstruction, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                Overriding extension method '@inputParameterAnonymousVariable analyzeInputParameter'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (const cPtr_abstractInputParameter * /* inObject */,
                                                                                   const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                   const GALGAS_lexicalTypeEnum /* constinArgument_inRequiredLexicalType */,
                                                                                   const GALGAS_string /* constinArgument_inLexicalAttributeName */,
                                                                                   GALGAS_terminalCheckAssignementList & /* ioArgument_ioTerminalCheckAssignementList */,
                                                                                   GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterAnonymousVariable.mSlotID,
                                              extensionMethod_inputParameterAnonymousVariable_analyzeInputParameter) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputParameterAnonymousVariable_analyzeInputParameter (defineExtensionMethod_inputParameterAnonymousVariable_analyzeInputParameter, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                     Overriding extension method '@inputParameterVariable analyzeInputParameter'                     *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputParameterVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                          const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                          const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                          const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                          GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                          GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                          C_Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterVariable * object = (const cPtr_inputParameterVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_64184 ;
  GALGAS_string var_cppName_64205 ;
  {
  GALGAS_string joker_64207 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mActualParameterName, var_type_64184, var_cppName_64205, joker_64207, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1390)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_64246 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLCharType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLDoubleType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_64246 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLBigIntType (HERE) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, var_expectedType_64246.objectCompare (var_type_64184)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1403)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)).add_operation (var_type_64184.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1404)).add_operation (var_expectedType_64246.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1405)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1403)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (GALGAS_string::makeEmptyString (), var_cppName_64205, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1407)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputParameterVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterVariable.mSlotID,
                                              extensionMethod_inputParameterVariable_analyzeInputParameter) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputParameterVariable_analyzeInputParameter (defineExtensionMethod_inputParameterVariable_analyzeInputParameter, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredVariable analyzeInputParameter'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredVariable * object = (const cPtr_inputParameterDeclaredVariable *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredVariable) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_65846 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLCharType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLDoubleType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_65846 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLBigIntType (HERE) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mActualParameterTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_66703 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1435)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_65846.objectCompare (var_type_66703)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1437)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)).add_operation (var_type_66703.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1438)).add_operation (var_expectedType_65846.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1439)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1437)) ;
    }
  }
  GALGAS_string var_cppName_67092 = GALGAS_string ("var_").add_operation (object->mProperty_mActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1443)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1443)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1443)).add_operation (object->mProperty_mActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1443)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1443)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1443)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mActualParameterName, var_expectedType_65846, var_cppName_67092, var_cppName_67092, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1444)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_65846.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1446)), var_cppName_67092, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1445)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredVariable.mSlotID,
                                              extensionMethod_inputParameterDeclaredVariable_analyzeInputParameter) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputParameterDeclaredVariable_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredVariable_analyzeInputParameter, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//                 Overriding extension method '@inputParameterDeclaredConstant analyzeInputParameter'                 *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (const cPtr_abstractInputParameter * inObject,
                                                                                  const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                  const GALGAS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                                  const GALGAS_string constinArgument_inLexicalAttributeName,
                                                                                  GALGAS_terminalCheckAssignementList & ioArgument_ioTerminalCheckAssignementList,
                                                                                  GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                  C_Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_inputParameterDeclaredConstant * object = (const cPtr_inputParameterDeclaredConstant *) inObject ;
  macroValidSharedObject (object, cPtr_inputParameterDeclaredConstant) ;
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_67882 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GALGAS_lexicalTypeEnum::kNotBuilt:
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_string:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLStringType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_char:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLCharType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLUInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSIntType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLSInt_36__34_Type (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_double:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLDoubleType (HERE) ;
    }
    break ;
  case GALGAS_lexicalTypeEnum::kEnum_lexicalType_5F_bigint:
    {
      var_expectedType_67882 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mLBigIntType (HERE) ;
    }
    break ;
  }
  const enumGalgasBool test_0 = GALGAS_bool (kIsNotEqual, object->mProperty_mActualParameterTypeName.getter_string (HERE).objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_unifiedTypeMap_2D_proxy var_type_68739 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1473)) ;
    const enumGalgasBool test_1 = GALGAS_bool (kIsNotEqual, var_expectedType_67882.objectCompare (var_type_68739)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <C_FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1475)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1476)).add_operation (GALGAS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1476)).add_operation (var_type_68739.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1476)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1476)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1476)).add_operation (var_expectedType_67882.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1477)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1475)) ;
    }
  }
  GALGAS_string var_cppName_69128 = GALGAS_string ("var_").add_operation (object->mProperty_mActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1481)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1481)).add_operation (object->mProperty_mActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1481)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1481)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mActualParameterName, var_expectedType_67882, var_cppName_69128, var_cppName_69128, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1482)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.addAssign_operation (var_expectedType_67882.getter_key (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1485)), var_cppName_69128, constinArgument_inLexicalAttributeName  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1484)) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter (void) {
  enterExtensionMethod_analyzeInputParameter (kTypeDescriptor_GALGAS_inputParameterDeclaredConstant.mSlotID,
                                              extensionMethod_inputParameterDeclaredConstant_analyzeInputParameter) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_inputParameterDeclaredConstant_analyzeInputParameter (defineExtensionMethod_inputParameterDeclaredConstant_analyzeInputParameter, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool /* constinArgument_inHasTranslateFeature */,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_analyzeSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//           Overriding extension method '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                              const GALGAS_analysisContext /* constinArgument_inAnalysisContext */,
                                                                                              const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                              GALGAS_variableMap & /* ioArgument_ioVariableMap */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationDropResult *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationDropResult) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1511)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mLocation, GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1512)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationDropResult.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationDropResult_analyzeSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'           *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                               const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                               const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                               GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1522)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1523)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1523)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_type_71162 ;
  {
  GALGAS_string joker_71164 ; // Joker input parameter
  GALGAS_string joker_71167 ; // Joker input parameter
  ioArgument_ioVariableMap.setter_searchForWriteAccess (object->mProperty_mActualParameterName, var_type_71162, joker_71164, joker_71167, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1525)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_71188 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_71188.objectCompare (var_type_71162)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1528)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (var_type_71162.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1529)).add_operation (var_expectedType_71188.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1530)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1530)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1530)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1528)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInVar_analyzeSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//      Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'       *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                       const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                       GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1540)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1541)), GALGAS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1541)) ;
  }
  GALGAS_string var_cppName_72005 = GALGAS_string ("var_").add_operation (object->mProperty_mActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1543)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).add_operation (object->mProperty_mActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1543)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1543)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_72129 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1544)) ;
  {
  ioArgument_ioVariableMap.setter_insertDefinedLocalVariable (object->mProperty_mActualParameterName, var_type_72129, var_cppName_72005, var_cppName_72005, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1545)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_72348 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_72348.objectCompare (var_type_72129)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1548)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)).add_operation (var_type_72129.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1549)).add_operation (var_expectedType_72348.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1550)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1548)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar_analyzeSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//     Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'      *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * inObject,
                                                                                                         const GALGAS_analysisContext constinArgument_inAnalysisContext,
                                                                                                         const GALGAS_bool constinArgument_inHasTranslateFeature,
                                                                                                         GALGAS_variableMap & ioArgument_ioVariableMap,
                                                                                                         C_Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst * object = (const cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst *) inObject ;
  macroValidSharedObject (object, cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst) ;
  const enumGalgasBool test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas", 1560)).boolEnum () ;
  if (kBoolTrue == test_0) {
    TC_Array <C_FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1561)), GALGAS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1561)) ;
  }
  GALGAS_string var_cppName_73158 = GALGAS_string ("var_").add_operation (object->mProperty_mActualParameterName.getter_string (HERE).getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas", 1563)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).add_operation (object->mProperty_mActualParameterName.getter_location (HERE).getter_locationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1563)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1563)) ;
  GALGAS_unifiedTypeMap_2D_proxy var_type_73282 = GALGAS_unifiedTypeMap_2D_proxy::constructor_searchKey (constinArgument_inAnalysisContext.getter_mSemanticContext (HERE).getter_mTypeMap (HERE), object->mProperty_mActualParameterTypeName, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1564)) ;
  {
  ioArgument_ioVariableMap.setter_insertLocalConstant (object->mProperty_mActualParameterName, var_type_73282, var_cppName_73158, var_cppName_73158, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1565)) ;
  }
  GALGAS_unifiedTypeMap_2D_proxy var_expectedType_73494 = constinArgument_inAnalysisContext.getter_mPredefinedTypes (HERE).getter_mStringType (HERE) ;
  const enumGalgasBool test_2 = GALGAS_bool (kIsNotEqual, var_expectedType_73494.objectCompare (var_type_73282)).boolEnum () ;
  if (kBoolTrue == test_2) {
    TC_Array <C_FixItDescription> fixItArray3 ;
    inCompiler->emitSemanticError (object->mProperty_mActualParameterName.getter_location (SOURCE_FILE ("semanticAnalysis.galgas", 1568)), GALGAS_string ("the '").add_operation (object->mProperty_mActualParameterName.getter_string (SOURCE_FILE ("semanticAnalysis.galgas", 1569)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1569)).add_operation (GALGAS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1569)).add_operation (var_type_73282.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1569)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1569)).add_operation (GALGAS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1569)).add_operation (var_expectedType_73494.getter_identifierRepresentation (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1570)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1570)).add_operation (GALGAS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1570)), fixItArray3  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1568)) ;
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (void) {
  enterExtensionMethod_analyzeSDT (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst.mSlotID,
                                   extensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst_analyzeSDT, NULL) ;

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*
//                                                                                                                     *
//          Overriding extension method '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'          *
//                                                                                                                     *
//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (const cPtr_abstractGrammarInstructionSyntaxDirectedTranslationResult * /* inObject */,
                                                                                                const GALGAS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                                const GALGAS_string constinArgument_inAccessMethodName,
                                                                                                GALGAS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                                GALGAS_string & ioArgument_ioGeneratedCode,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const enumGalgasBool test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGeneratedCode.plusAssign_operation(function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)).add_operation (GALGAS_string (" << "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)).add_operation (GALGAS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1590)) ;
    {
    ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_syntaxDirectedTranslationResultVarName (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas", 1591)) ;
    }
  }
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

static void defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (void) {
  enterExtensionMethod_generateCode (kTypeDescriptor_GALGAS_grammarInstructionSyntaxDirectedTranslationResultNone.mSlotID,
                                     extensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode) ;
}

//—————————————————————————————————————————————————————————————————————————————————————————————————————————————————————*

C_PrologueEpilogue gMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode (defineExtensionMethod_grammarInstructionSyntaxDirectedTranslationResultNone_generateCode, NULL) ;

