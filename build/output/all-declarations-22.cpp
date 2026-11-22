#include "all-declarations-22.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST enterExpressionInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_enterExpressionInSemanticContext (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionAST temp_0 = this ;
  callExtensionMethod_enterExpressionInSemanticContext ((cPtr_semanticExpressionAST *) temp_0.readProperty_mReceiver ().ptr (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 30)) ;
  const GGS_getterCallExpressionAST temp_1 = this ;
  extensionMethod_enterInSemanticContext (temp_1.readProperty_mActualArgumentList (), ioArgument_ioTypeMap, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionAST analyzeSemanticExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionAST::method_analyzeSemanticExpression (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_unifiedTypeMapEntry /* constinArgument__5F_inType */,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                     GGS_semanticExpressionForGeneration & outArgument_outExpression,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_getterCallExpressionAST temp_1 = this ;
    test_0 = GGS_bool (nullptr != dynamic_cast <const cPtr_selfInExpressionAST *> (temp_1.readProperty_mReceiver ().ptr ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_getterCallExpressionAST temp_2 = this ;
      extensionMethod_checkSelfObjectIsFullyInitialized (ioArgument_ioVariableMap, temp_2.readProperty_mGetterName ().readProperty_location (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 46)) ;
    }
  }
  GGS_semanticExpressionForGeneration var_receiverExpression_2972 ;
  const GGS_getterCallExpressionAST temp_3 = this ;
  callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) temp_3.readProperty_mReceiver ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 52)), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_receiverExpression_2972, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 49)) ;
  GGS_unifiedTypeMapEntry var_receiverType_3026 = var_receiverExpression_2972.readProperty_mResultType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_getterCallExpressionAST temp_5 = this ;
    const GGS_getterMap_2E_element var_aGetter_3138 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubcript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 60)).readProperty_getterMap ().readSubcript__3F_ (temp_5.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_4 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_getterCallExpressionAST temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          appendFixItActions (fixItArray8, EnumFixItKind::fixItReplace, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ()) ;
          inCompiler->emitSemanticError (temp_7.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray8  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 62)) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionAST temp_10 = this ;
        GGS_bool test_11 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)).readProperty_propertyMap ().getter_contains (temp_10.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 66)) ;
        if (GalgasBool::boolTrue == test_11.boolEnum ()) {
          const GGS_getterCallExpressionAST temp_12 = this ;
          test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 67)).objectCompare (GGS_uint (uint32_t (0U)))) ;
        }
        test_9 = test_11.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionAST temp_13 = this ;
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray14  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 68)) ;
        }
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_getterCallExpressionAST temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, temp_16.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)).objectCompare (var_aGetter_3138.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 71)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_getterCallExpressionAST temp_17 = this ;
          const GGS_getterCallExpressionAST temp_18 = this ;
          const GGS_getterCallExpressionAST temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_18.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (var_aGetter_3138.readProperty_mArgumentTypeList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 74)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 73)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 73)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (temp_19.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 75)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 74)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 74)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 75)), fixItArray20  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 72)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_15) {
        GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_4120 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
        const GGS_getterCallExpressionAST temp_21 = this ;
        UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_4187 (temp_21.readProperty_mActualArgumentList ()) ;
        UpEnumerator__5B_functionSignatureElement_5D_ enumerator_4226 (var_aGetter_3138.readProperty_mArgumentTypeList ()) ;
        while (enumerator_4187.hasCurrentObject () && enumerator_4226.hasCurrentObject ()) {
          GGS_semanticExpressionForGeneration var_exp_4599 ;
          callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_4187.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_4226.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_4599, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 79)) ;
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_bool (ComparisonKind::notEqual, enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_4187.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              GGS_string temp_23 ;
              const GalgasBool test_24 = GGS_bool (ComparisonKind::notEqual, enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_24) {
                temp_23 = enumerator_4226.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              }else if (GalgasBool::boolFalse == test_24) {
                temp_23 = GGS_string::makeEmptyString () ;
              }
              GGS_string var_s_4720 = GGS_string ("!").add_operation (temp_23, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 89)) ;
              GenericArray <FixItDescription> fixItArray25 ;
              appendFixItActions (fixItArray25, EnumFixItKind::fixItReplace, var_s_4720) ;
              inCompiler->emitSemanticError (enumerator_4187.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_4720, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)), fixItArray25  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 90)) ;
            }
          }
          {
          routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_4226.current (HERE).readProperty_mFormalArgumentType (), var_exp_4599.readProperty_mResultType (), enumerator_4187.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_4599, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 92)) ;
          }
          var_constructorEffectiveParameterList_4120.plusPlusAssignOperation (var_exp_4599  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 93)) ;
          enumerator_4187.gotoNextObject () ;
          enumerator_4226.gotoNextObject () ;
        }
        const GGS_getterCallExpressionAST temp_26 = this ;
        GGS_string temp_27 ;
        const GalgasBool test_28 = GGS_bool (ComparisonKind::equal, var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          const GGS_getterCallExpressionAST temp_29 = this ;
          temp_27 = temp_29.readProperty_mGetterName ().readProperty_string () ;
        }else if (GalgasBool::boolFalse == test_28) {
          temp_27 = var_aGetter_3138.readProperty_mGetterNameThatObsoletesInvokationName () ;
        }
        outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_aGetter_3138.readProperty_mReturnedType (), temp_26.readProperty_mGetterName ().readProperty_location (), var_aGetter_3138.readProperty_mKind (), var_receiverExpression_2972, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), temp_27, var_constructorEffectiveParameterList_4120, var_aGetter_3138.readProperty_mHasCompilerArgument (), inCompiler COMMA_HERE) ;
        GalgasBool test_30 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_30) {
          const GGS_getterCallExpressionAST temp_31 = this ;
          test_30 = GGS_bool (ComparisonKind::equal, temp_31.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_30) {
            const GGS_getterCallExpressionAST temp_32 = this ;
            GenericArray <FixItDescription> fixItArray33 ;
            fixItArray33.appendObject (FixItDescription (EnumFixItKind::fixItRemove, "")) ;
            inCompiler->emitSemanticError (temp_32.readProperty_mExpressionLocation (), GGS_string ("func with no argument, remove parenthesis"), fixItArray33  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 106)) ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      const GGS_getterCallExpressionAST temp_35 = this ;
      test_34 = GGS_bool (ComparisonKind::equal, temp_35.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 110)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        const GGS_getterCallExpressionAST temp_36 = this ;
        test_34 = extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).readProperty_propertyMap ().getter_contains (temp_36.readProperty_mGetterName ().readProperty_string () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 110)).boolEnum () ;
        if (GalgasBool::boolTrue == test_34) {
          const GGS_getterCallExpressionAST temp_37 = this ;
          GenericArray <FixItDescription> fixItArray38 ;
          inCompiler->emitSemanticError (temp_37.readProperty_mExpressionLocation (), GGS_string ("use dot notation, instead of func call"), fixItArray38  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 111)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
    if (GalgasBool::boolFalse == test_34) {
      GGS_uint var_matchingReaderCount_6158 = GGS_uint (uint32_t (0U)) ;
      GalgasBool test_39 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_39) {
        test_39 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 115)).readProperty_typeKind ().objectCompare (GGS_typeKindEnum::class_func_structType (SOURCE_FILE ("expression-getter-call.galgas4", 115)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_39) {
          GGS__5B_functionSignatureElement_5D_ var_getterFormalArgumentTypeList_6284 = GGS__5B_functionSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
          GGS_bool var_hasCompilerArgument_6331 = GGS_bool (true) ;
          GGS_unifiedTypeMapEntry var_returnedType_6370 = GGS_unifiedTypeMapEntry::class_func_null (SOURCE_FILE ("expression-getter-call.galgas4", 118)) ;
          GGS_methodKind var_kind_6423 = GGS_methodKind::class_func_definedAsExtension (SOURCE_FILE ("expression-getter-call.galgas4", 119)) ;
          GGS__5B_string_5D_ var_fieldList_6483 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
          GGS_string var_obsoletedByGetter_6511 = GGS_string::makeEmptyString () ;
          UpEnumerator__5B_typedProperty_5D_ enumerator_6582 (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 122)).readProperty_currentTypedPropertyList ()) ;
          while (enumerator_6582.hasCurrentObject ()) {
            GGS_unifiedTypeMapEntry var_propertyType_6624 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, GGS_lstring::init_21__21_ (extensionGetter_definition (enumerator_6582.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)).readProperty_typeName ().readProperty_string (), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 123)) ;
            GGS_getterMap var_aMap_6741 = extensionGetter_definition (var_propertyType_6624, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 124)).readProperty_getterMap () ;
            GalgasBool test_40 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_40) {
              const GGS_getterCallExpressionAST temp_41 = this ;
              const GGS_getterMap_2E_element var_entry_6799 = var_aMap_6741.readSubcript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
              if (!var_aMap_6741.readSubcript__3F_ (temp_41.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
                test_40 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_40) {
                GalgasBool test_42 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_42) {
                  test_42 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (enumerator_6582.current (HERE).readProperty_typeEntry (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 126)).readProperty_typeName ().readProperty_string ().objectCompare (enumerator_6582.current (HERE).readProperty_name ().readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_42) {
                    var_matchingReaderCount_6158.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 127)) ;
                    var_getterFormalArgumentTypeList_6284 = var_entry_6799.readProperty_mArgumentTypeList () ;
                    var_hasCompilerArgument_6331 = var_entry_6799.readProperty_mHasCompilerArgument () ;
                    var_returnedType_6370 = var_entry_6799.readProperty_mReturnedType () ;
                    const GGS_getterCallExpressionAST temp_43 = this ;
                    var_receiverExpression_2972 = GGS_propertyAccessExpressionForGeneration::init_21__21__21__21_ (var_returnedType_6370, temp_43.readProperty_mGetterName ().readProperty_location (), var_receiverExpression_2972, enumerator_6582.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_HERE) ;
                    var_kind_6423 = var_entry_6799.readProperty_mKind () ;
                    var_obsoletedByGetter_6511 = var_entry_6799.readProperty_mGetterNameThatObsoletesInvokationName () ;
                  }
                }
              }
            }
            enumerator_6582.gotoNextObject () ;
          }
          GalgasBool test_44 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_44) {
            test_44 = GGS_bool (ComparisonKind::equal, var_matchingReaderCount_6158.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_44) {
              const GGS_getterCallExpressionAST temp_45 = this ;
              const GGS_getterCallExpressionAST temp_46 = this ;
              GenericArray <FixItDescription> fixItArray47 ;
              inCompiler->emitSemanticError (temp_45.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (temp_46.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)).add_operation (GGS_string ("' func, and none of its fields defines it"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 144)), fixItArray47  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 143)) ;
              var_getterFormalArgumentTypeList_6284.drop () ; // Release error dropped variable
              var_hasCompilerArgument_6331.drop () ; // Release error dropped variable
              var_returnedType_6370.drop () ; // Release error dropped variable
              var_kind_6423.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_44) {
            GalgasBool test_48 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_48) {
              test_48 = GGS_bool (ComparisonKind::greaterThan, var_matchingReaderCount_6158.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_48) {
                GGS_string var_s_7954 = GGS_string::makeEmptyString () ;
                UpEnumerator__5B_string_5D_ enumerator_7984 (var_fieldList_6483) ;
                while (enumerator_7984.hasCurrentObject ()) {
                  var_s_7954.plusAssignOperation(enumerator_7984.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 150)) ;
                  enumerator_7984.gotoNextObject () ;
                  if (enumerator_7984.hasCurrentObject ()) {
                    var_s_7954.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 151)) ;
                  }
                }
                const GGS_getterCallExpressionAST temp_49 = this ;
                const GGS_getterCallExpressionAST temp_50 = this ;
                GenericArray <FixItDescription> fixItArray51 ;
                inCompiler->emitSemanticError (temp_49.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' struct type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (temp_50.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (GGS_string ("' func, and several of its fields defines it:"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 154)).add_operation (var_s_7954, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)).add_operation (GGS_string (" (exactly one field should define it)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 155)), fixItArray51  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 153)) ;
                var_getterFormalArgumentTypeList_6284.drop () ; // Release error dropped variable
                var_hasCompilerArgument_6331.drop () ; // Release error dropped variable
                var_returnedType_6370.drop () ; // Release error dropped variable
                var_kind_6423.drop () ; // Release error dropped variable
              }
            }
          }
          GalgasBool test_52 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_52) {
            const GGS_getterCallExpressionAST temp_53 = this ;
            test_52 = GGS_bool (ComparisonKind::notEqual, temp_53.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)).objectCompare (var_getterFormalArgumentTypeList_6284.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 159)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_52) {
              const GGS_getterCallExpressionAST temp_54 = this ;
              const GGS_getterCallExpressionAST temp_55 = this ;
              const GGS_getterCallExpressionAST temp_56 = this ;
              GenericArray <FixItDescription> fixItArray57 ;
              inCompiler->emitSemanticError (temp_54.readProperty_mGetterName ().readProperty_location (), GGS_string ("calling the '").add_operation (temp_55.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' func of '@"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string ("' requires "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (var_getterFormalArgumentTypeList_6284.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 162)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 162)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 161)).add_operation (GGS_string (" parameter(s), while this call has "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (temp_56.readProperty_mActualArgumentList ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 163)).getter_string (SOURCE_FILE ("expression-getter-call.galgas4", 163)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 162)).add_operation (GGS_string (" parameter(s)"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 163)), fixItArray57  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 160)) ;
              outArgument_outExpression.drop () ; // Release error dropped variable
            }
          }
          if (GalgasBool::boolFalse == test_52) {
            GGS__5B_semanticExpressionForGeneration_5D_ var_constructorEffectiveParameterList_8944 = GGS__5B_semanticExpressionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
            const GGS_getterCallExpressionAST temp_58 = this ;
            UpEnumerator__5B_actualOutputArgumentAST_5D_ enumerator_9013 (temp_58.readProperty_mActualArgumentList ()) ;
            UpEnumerator__5B_functionSignatureElement_5D_ enumerator_9044 (var_getterFormalArgumentTypeList_6284) ;
            while (enumerator_9013.hasCurrentObject () && enumerator_9044.hasCurrentObject ()) {
              GGS_semanticExpressionForGeneration var_exp_9444 ;
              callExtensionMethod_analyzeSemanticExpression ((cPtr_semanticExpressionAST *) enumerator_9013.current (HERE).readProperty_mExpression ().ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, enumerator_9044.current (HERE).readProperty_mFormalArgumentType (), constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioVariableMap, var_exp_9444, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 167)) ;
              GalgasBool test_59 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_59) {
                test_59 = GGS_bool (ComparisonKind::notEqual, enumerator_9044.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_9013.current (HERE).readProperty_mActualSelector ().readProperty_string ())).boolEnum () ;
                if (GalgasBool::boolTrue == test_59) {
                  GGS_string temp_60 ;
                  const GalgasBool test_61 = GGS_bool (ComparisonKind::notEqual, enumerator_9044.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_61) {
                    temp_60 = enumerator_9044.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  }else if (GalgasBool::boolFalse == test_61) {
                    temp_60 = GGS_string::makeEmptyString () ;
                  }
                  GGS_string var_s_9571 = GGS_string ("!").add_operation (temp_60, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 177)) ;
                  GenericArray <FixItDescription> fixItArray62 ;
                  appendFixItActions (fixItArray62, EnumFixItKind::fixItReplace, var_s_9571) ;
                  inCompiler->emitSemanticError (enumerator_9013.current (HERE).readProperty_mActualSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_9571, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)), fixItArray62  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 178)) ;
                }
              }
              {
              routine_checkAssignmentTypeWithImplicitGetterCall_3F__3F__3F__26_ (enumerator_9044.current (HERE).readProperty_mFormalArgumentType (), var_exp_9444.readProperty_mResultType (), enumerator_9013.current (HERE).readProperty_mEndOfExpressionLocation (), var_exp_9444, inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 180)) ;
              }
              var_constructorEffectiveParameterList_8944.plusPlusAssignOperation (var_exp_9444  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 181)) ;
              enumerator_9013.gotoNextObject () ;
              enumerator_9044.gotoNextObject () ;
            }
            GalgasBool test_63 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_63) {
              test_63 = GGS_bool (ComparisonKind::notEqual, var_obsoletedByGetter_6511.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_63) {
                const GGS_getterCallExpressionAST temp_64 = this ;
                GenericArray <FixItDescription> fixItArray65 ;
                appendFixItActions (fixItArray65, EnumFixItKind::fixItReplace, var_obsoletedByGetter_6511) ;
                inCompiler->emitSemanticError (temp_64.readProperty_mGetterName ().readProperty_location (), GGS_string ("obsolete func"), fixItArray65  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 184)) ;
              }
            }
            const GGS_getterCallExpressionAST temp_66 = this ;
            GGS_string temp_67 ;
            const GalgasBool test_68 = GGS_bool (ComparisonKind::equal, var_obsoletedByGetter_6511.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_68) {
              const GGS_getterCallExpressionAST temp_69 = this ;
              temp_67 = temp_69.readProperty_mGetterName ().readProperty_string () ;
            }else if (GalgasBool::boolFalse == test_68) {
              temp_67 = var_obsoletedByGetter_6511 ;
            }
            outArgument_outExpression = GGS_getterCallExpressionForGeneration::init_21__21__21__21__21__21__21__21_ (var_returnedType_6370, temp_66.readProperty_mGetterName ().readProperty_location (), var_kind_6423, var_receiverExpression_2972, var_fieldList_6483, temp_67, var_constructorEffectiveParameterList_8944, var_hasCompilerArgument_6331, inCompiler COMMA_HERE) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_39) {
        GalgasBool test_70 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_70) {
          test_70 = GGS_bool (ComparisonKind::equal, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 197)).readProperty_getterMap ().getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 197)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_70) {
            const GGS_getterCallExpressionAST temp_71 = this ;
            GenericArray <FixItDescription> fixItArray72 ;
            inCompiler->emitSemanticError (temp_71.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)).add_operation (GGS_string ("' type does not define any func"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 199)), fixItArray72  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 198)) ;
            outArgument_outExpression.drop () ; // Release error dropped variable
          }
        }
        if (GalgasBool::boolFalse == test_70) {
          const GGS_getterCallExpressionAST temp_73 = this ;
          const GGS_getterCallExpressionAST temp_74 = this ;
          GenericArray <FixItDescription> fixItArray75 ;
          appendFixItActions (fixItArray75, EnumFixItKind::fixItReplace, extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205)).readProperty_getterMap ().getter_keyList (inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 205))) ;
          inCompiler->emitSemanticError (temp_73.readProperty_mGetterName ().readProperty_location (), GGS_string ("the '@").add_operation (extensionGetter_definition (var_receiverType_3026, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' type does not define the '"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (temp_74.readProperty_mGetterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)).add_operation (GGS_string ("' func "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 203)), fixItArray75  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 202)) ;
          outArgument_outExpression.drop () ; // Release error dropped variable
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@getterCallExpressionForGeneration generateExpression'
//--------------------------------------------------------------------------------------------------

void cPtr_getterCallExpressionForGeneration::method_generateExpression (GGS_string & ioArgument_ioGeneratedCode,
                                                                        GGS_stringset & ioArgument_ioInclusionSet,
                                                                        GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                                        GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                        GGS_string & outArgument_outCppExpression,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_getterCallExpressionForGeneration temp_0 = this ;
  extensionMethod_addHeaderFileName (temp_0.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 236)) ;
  GGS_string var_receiverCppName_12353 ;
  const GGS_getterCallExpressionForGeneration temp_1 = this ;
  callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) temp_1.readProperty_mReceiverExpression ().ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_receiverCppName_12353, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 238)) ;
  GGS__5B_string_5D_ var_getterArgumentCppNameList_12417 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_getterCallExpressionForGeneration temp_2 = this ;
  UpEnumerator__5B_semanticExpressionForGeneration_5D_ enumerator_12476 (temp_2.readProperty_mActualArgumentList ()) ;
  while (enumerator_12476.hasCurrentObject ()) {
    GGS_string var_argumentCppName_12676 ;
    callExtensionMethod_generateExpression ((cPtr_semanticExpressionForGeneration *) enumerator_12476.current (HERE).ptr (), ioArgument_ioGeneratedCode, ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, var_argumentCppName_12676, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 248)) ;
    var_getterArgumentCppNameList_12417.plusPlusAssignOperation (var_argumentCppName_12676  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 255)) ;
    enumerator_12476.gotoNextObject () ;
  }
  const GGS_getterCallExpressionForGeneration temp_3 = this ;
  switch (temp_3.readProperty_mKind ().enumValue ()) {
  case GGS_methodKind::Enumeration::invalid:
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsExtension:
    {
      const GGS_getterCallExpressionForGeneration temp_4 = this ;
      GGS_unifiedTypeMapEntry var_baseType_12872 = temp_4.readProperty_mReceiverExpression ().readProperty_mResultType () ;
      extensionMethod_addHeaderFileName (var_baseType_12872, ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 261)) ;
      GGS_bool var_searching_12987 = GGS_bool (true) ;
      if (GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas4", 263)).isValid ()) {
        uint32_t variant_13010 = GGS_uint::class_func_max (SOURCE_FILE ("expression-getter-call.galgas4", 263)).uintValue () ;
        bool loop_13010 = true ;
        while (loop_13010) {
          loop_13010 = var_searching_12987.isValid () ;
          if (loop_13010) {
            loop_13010 = var_searching_12987.boolValue () ;
          }
          if (loop_13010 && (0 == variant_13010)) {
            loop_13010 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("expression-getter-call.galgas4", 263)) ;
          }
          if (loop_13010) {
            variant_13010 -= 1 ;
            GalgasBool test_5 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_5) {
              test_5 = extensionGetter_definition (var_baseType_12872, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 264)).readProperty_superType ().getter_isNull (SOURCE_FILE ("expression-getter-call.galgas4", 264)).operator_not (SOURCE_FILE ("expression-getter-call.galgas4", 264)).boolEnum () ;
              if (GalgasBool::boolTrue == test_5) {
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  const GGS_getterCallExpressionForGeneration temp_7 = this ;
                  test_6 = extensionGetter_definition (extensionGetter_definition (var_baseType_12872, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).readProperty_superType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).readProperty_getterMap ().getter_contains (temp_7.readProperty_mGetterName () COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 265)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    var_baseType_12872 = extensionGetter_definition (var_baseType_12872, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 266)).readProperty_superType () ;
                  }
                }
                if (GalgasBool::boolFalse == test_6) {
                  var_searching_12987 = GGS_bool (false) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_5) {
              var_searching_12987 = GGS_bool (false) ;
            }
          }
        }
      }
      const GGS_getterCallExpressionForGeneration temp_8 = this ;
      ioArgument_ioInclusionSet.plusPlusAssignOperation (GGS_string ("func-").add_operation (extensionGetter_definition (var_baseType_12872, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).readProperty_typeName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 274)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).add_operation (GGS_string ("-"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)).add_operation (temp_8.readProperty_mGetterName ().getter_fileNameRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 274)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274))  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 274)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (var_receiverCppName_12353 COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 275)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_getterCallExpressionForGeneration temp_10 = this ;
        test_9 = extensionGetter_definition (temp_10.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 276)).readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("expression-getter-call.galgas4", 276)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_getterCallExpressionForGeneration temp_11 = this ;
          const GGS_getterCallExpressionForGeneration temp_12 = this ;
          outArgument_outCppExpression = GGS_string ("callExtensionGetter_").add_operation (temp_11.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 277)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 277)).add_operation (GGS_string (" ((const cPtr_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 277)).add_operation (extensionGetter_identifierRepresentation (temp_12.readProperty_mReceiverExpression ().readProperty_mResultType (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (GGS_string (" *) "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (var_receiverCppName_12353, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)).add_operation (GGS_string (".ptr (), "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 278)) ;
        }
      }
      if (GalgasBool::boolFalse == test_9) {
        const GGS_getterCallExpressionForGeneration temp_13 = this ;
        extensionMethod_addHeaderFileName (temp_13.readProperty_mReceiverExpression ().readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 280)) ;
        const GGS_getterCallExpressionForGeneration temp_14 = this ;
        outArgument_outCppExpression = GGS_string ("extensionGetter_").add_operation (temp_14.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (var_receiverCppName_12353, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 281)) ;
      }
    }
    break ;
  case GGS_methodKind::Enumeration::enum_definedAsMember:
    {
      outArgument_outCppExpression = var_receiverCppName_12353 ;
      const GGS_getterCallExpressionForGeneration temp_15 = this ;
      UpEnumerator__5B_string_5D_ enumerator_14209 (temp_15.readProperty_mFieldList ()) ;
      while (enumerator_14209.hasCurrentObject ()) {
        outArgument_outCppExpression.plusAssignOperation(GGS_string (".readProperty_").add_operation (enumerator_14209.current (HERE).getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 286)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)).add_operation (GGS_string (" ()"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 286)) ;
        enumerator_14209.gotoNextObject () ;
      }
      const GGS_getterCallExpressionForGeneration temp_16 = this ;
      extensionMethod_addHeaderFileName (temp_16.readProperty_mResultType (), ioArgument_ioInclusionSet, inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 288)) ;
      const GGS_getterCallExpressionForGeneration temp_17 = this ;
      outArgument_outCppExpression.plusAssignOperation(GGS_string (".getter_").add_operation (temp_17.readProperty_mGetterName ().getter_identifierRepresentation (SOURCE_FILE ("expression-getter-call.galgas4", 289)), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 289)) ;
    }
    break ;
  }
  UpEnumerator__5B_string_5D_ enumerator_14493 (var_getterArgumentCppNameList_12417) ;
  while (enumerator_14493.hasCurrentObject ()) {
    outArgument_outCppExpression.plusAssignOperation(enumerator_14493.current (HERE), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 292)) ;
    enumerator_14493.gotoNextObject () ;
    if (enumerator_14493.hasCurrentObject ()) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 293)) ;
    }
  }
  GalgasBool test_18 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_18) {
    test_18 = GGS_bool (ComparisonKind::equal, var_getterArgumentCppNameList_12417.getter_count (SOURCE_FILE ("expression-getter-call.galgas4", 295)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_18) {
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_getterCallExpressionForGeneration temp_20 = this ;
        test_19 = temp_20.readProperty_mHasCompilerArgument ().boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          {
          ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 297)) ;
          }
          outArgument_outCppExpression.plusAssignOperation(function_gCompilerCppName (inCompiler COMMA_HERE).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 298)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_18) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      const GGS_getterCallExpressionForGeneration temp_22 = this ;
      test_21 = temp_22.readProperty_mHasCompilerArgument ().boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        {
        ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gCompilerCppName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 301)) ;
        }
        outArgument_outCppExpression.plusAssignOperation(GGS_string (", ").add_operation (function_gCompilerCppName (inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)).add_operation (GGS_string (" COMMA_"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 302)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      outArgument_outCppExpression.plusAssignOperation(GGS_string (" COMMA_"), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 304)) ;
    }
  }
  const GGS_getterCallExpressionForGeneration temp_23 = this ;
  outArgument_outCppExpression.plusAssignOperation(extensionGetter_sourceFile (temp_23.readProperty_mLocation (), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)), inCompiler  COMMA_SOURCE_FILE ("expression-getter-call.galgas4", 306)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalRoutineMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalRoutineMap_21_ (GGS_lexicalRoutineMap & outArgument_outLexicalRoutineMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalRoutineMap.drop () ; // Release 'out' argument
  outArgument_outLexicalRoutineMap = GGS_lexicalRoutineMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalRoutineFormalArgumentAST_5D_ var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_string_5D_ var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)), GGS_string ("ioASCIICharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 48)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 49)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 50)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inErrorNotHexDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 51)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 53)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 52)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)), GGS_string ("ioASCIICharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 61)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 62)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inErrorCodeGreaterThan255")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 63)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inErrorNotDecimalDigitCharacter")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 64)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoASCIIcharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 66)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 65)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 73)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 74)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 76)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 75)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 83)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 84)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("prependCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 86)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 85)) ;
  }
  {
  GGS__5B_lexicalRoutineFormalArgumentAST_5D_ temp_0 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)) ;
  temp_0.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 94)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("resetString"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 93)), inCompiler COMMA_HERE), temp_0, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 92)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 101)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_double (SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)), GGS_string ("ioDouble"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 102)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inConversionError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 103)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertStringToDouble"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 105)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 104)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)), GGS_string ("ioCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 113)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 114)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterCharacterIntoCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 116)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 115)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)), GGS_string ("ioNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 124)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 125)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 127)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 126)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)), GGS_string ("ioNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 135)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 136)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 138)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 137)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 146)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 147)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 148)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUIntToSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 150)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 149)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 158)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 159)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 160)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUInt64ToSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 162)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 161)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 170)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 171)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 172)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 173)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 175)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 174)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 183)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 184)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 185)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 186)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 188)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 187)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)), GGS_string ("inDecimalDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 195)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 196)) ;
  {
  GGS__5B_string_5D_ temp_1 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 200)) ;
  temp_1.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 200)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterDecimalDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 198)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_1, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 197)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)), GGS_string ("inBinaryDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 205)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 206)) ;
  {
  GGS__5B_string_5D_ temp_2 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 210)) ;
  temp_2.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 210)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinaryDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 208)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_2, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 207)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 215)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 216)) ;
  {
  GGS__5B_string_5D_ temp_3 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 220)) ;
  temp_3.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 220)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 218)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_3, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 217)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 225)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 226)) ;
  {
  GGS__5B_string_5D_ temp_4 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 230)) ;
  temp_4.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 230)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 228)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_4, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 227)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)), GGS_string ("ioBigInt"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 235)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("negateBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 237)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, GGS__5B_string_5D_::init (inCompiler COMMA_HERE), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 236)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 244)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 245)) ;
  {
  GGS__5B_string_5D_ temp_5 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 249)) ;
  temp_5.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinaryDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 249)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertBinaryStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 247)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_5, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 246)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 254)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_bigint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 255)) ;
  {
  GGS__5B_string_5D_ temp_6 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 259)) ;
  temp_6.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 259)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoBigInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 257)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_6, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 256)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 265)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 266)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 267)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 268)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 270)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 269)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)), GGS_string ("inHexDigitCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 278)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 279)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 280)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 281)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterHexDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 283)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 282)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 291)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 292)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 293)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 294)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 296)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 295)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 304)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 305)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 306)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 307)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 309)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 308)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 316)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 317)) ;
  {
  GGS__5B_string_5D_ temp_7 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  temp_7.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 321)) ;
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 319)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, temp_7, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 318)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 327)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 328)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 329)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotDecimalDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 330)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertDecimalStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 332)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 331)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 340)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 341)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 342)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 343)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 345)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 344)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 353)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 354)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 355)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotBinDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 356)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterBinDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 358)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 357)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 366)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 367)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 368)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 369)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 371)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 370)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 379)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 380)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 381)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotOctDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 382)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("enterOctDigitIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 384)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 383)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 392)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 393)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 394)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 396)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 395)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 404)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 405)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inResultTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 406)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("multiplyUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 408)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 407)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 416)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 417)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 418)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 419)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 421)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 420)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 429)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)), GGS_string ("ioUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 430)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 431)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 432)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoUInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 434)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 433)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 442)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 443)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 444)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 445)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 447)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 446)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 455)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_sint_36__34_ (SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)), GGS_string ("ioSignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 456)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inNumberTooLargeError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 457)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inCharacterIsNotHexDigitError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 458)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHexStringIntoSInt64"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 460)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 459)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_uint (SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)), GGS_string ("inUnsignedNumber"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 468)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)), GGS_string ("ioUnicodeCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 469)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inUnassignedUnicodeValueError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 470)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertUnsignedNumberToUnicodeChar"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 472)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 471)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)), GGS_string ("inString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 480)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)), GGS_string ("ioUnicodeCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 481)) ;
  var_errorMessageList_2312.plusPlusAssignOperation (GGS_string ("inUnassignedHTMLSequenceError")  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 482)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("convertHTMLSequenceToUnicodeCharacter"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 484)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 483)) ;
  }
  var_lexicalRoutineFormalArgumentList_2257 = GGS__5B_lexicalRoutineFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_errorMessageList_2312 = GGS__5B_string_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)), GGS_string ("inCodePointString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 492)) ;
  var_lexicalRoutineFormalArgumentList_2257.plusPlusAssignOperation (GGS_lexicalRoutineFormalArgumentAST::init_21__21__21_ (GGS_lexicalArgumentModeAST::class_func_lexicalInputOutputMode (SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)), GGS_lexicalTypeEnum::class_func_lexicalType_5F_string (SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)), GGS_string ("ioString"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 493)) ;
  {
  outArgument_outLexicalRoutineMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("codePointToUnicode"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 495)), inCompiler COMMA_HERE), var_lexicalRoutineFormalArgumentList_2257, var_errorMessageList_2312, GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 494)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLexicalFunctionMap!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLexicalFunctionMap_21_ (GGS_lexicalFunctionMap & outArgument_outLexicalFunctionMap,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outLexicalFunctionMap.drop () ; // Release 'out' argument
  outArgument_outLexicalFunctionMap = GGS_lexicalFunctionMap::init (inCompiler COMMA_HERE) ;
  GGS__5B_lexicalFunctionFormalArgumentAST_5D_ var_lexicalTypeList_22501 = GGS__5B_lexicalFunctionFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22501.plusPlusAssignOperation (GGS_lexicalFunctionFormalArgumentAST::init_21__21_ (GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 510)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 510)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("toLower"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 512)), inCompiler COMMA_HERE), var_lexicalTypeList_22501, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 514)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 511)) ;
  }
  var_lexicalTypeList_22501 = GGS__5B_lexicalFunctionFormalArgumentAST_5D_::init (inCompiler COMMA_HERE) ;
  var_lexicalTypeList_22501.plusPlusAssignOperation (GGS_lexicalFunctionFormalArgumentAST::init_21__21_ (GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 520)), GGS_string ("inCharacter"), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 520)) ;
  {
  outArgument_outLexicalFunctionMap.setter_insertKey (GGS_lstring::init_21__21_ (GGS_string ("toUpper"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 522)), inCompiler COMMA_HERE), var_lexicalTypeList_22501, GGS_lexicalTypeEnum::class_func_lexicalType_5F_char (SOURCE_FILE ("predefinedLexicalActions.galgas4", 524)), GGS_string::makeEmptyString (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 521)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'printPredefinedLexicalActions'
//
//--------------------------------------------------------------------------------------------------

void routine_printPredefinedLexicalActions (Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lexicalRoutineMap var_lexicalRoutineMap_23449 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_23449, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 536)) ;
  }
  GGS_string var_s_23548 = GGS_string::makeEmptyString () ;
  var_s_23548.plusAssignOperation(GGS_string ("**************** Prefined lexical routines  ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 539)) ;
  UpEnumerator_lexicalRoutineMap enumerator_23651 (var_lexicalRoutineMap_23449) ;
  while (enumerator_23651.hasCurrentObject ()) {
    var_s_23548.plusAssignOperation(enumerator_23651.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 541)) ;
    UpEnumerator__5B_lexicalRoutineFormalArgumentAST_5D_ enumerator_23744 (enumerator_23651.current (HERE).readProperty_mLexicalRoutineFormalArgumentList ()) ;
    while (enumerator_23744.hasCurrentObject ()) {
      var_s_23548.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_lexicalFormalModeName (enumerator_23744.current (HERE).readProperty_mLexicalFormalArgumentMode (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (GGS_string ("@"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (extensionGetter_lexicalTypeBaseName (enumerator_23744.current (HERE).readProperty_mLexicalFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)).add_operation (enumerator_23744.current (HERE).readProperty_mArgumentNameForComment (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 543)) ;
      enumerator_23744.gotoNextObject () ;
    }
    UpEnumerator__5B_string_5D_ enumerator_24004 (enumerator_23651.current (HERE).readProperty_mErrorMessageList ()) ;
    const bool bool_0 = true ;
    if (enumerator_24004.hasCurrentObject () && bool_0) {
      var_s_23548.plusAssignOperation(GGS_string (" error"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 546)) ;
      while (enumerator_24004.hasCurrentObject () && bool_0) {
        var_s_23548.plusAssignOperation(GGS_string (" ").add_operation (enumerator_24004.current (HERE), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 547)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 547)) ;
        enumerator_24004.gotoNextObject () ;
        if (enumerator_24004.hasCurrentObject () && bool_0) {
          var_s_23548.plusAssignOperation(GGS_string (","), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 548)) ;
        }
      }
    }
    var_s_23548.plusAssignOperation(GGS_string (" ;\n\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 550)) ;
    enumerator_23651.gotoNextObject () ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_24224 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_24224, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 553)) ;
  }
  var_s_23548.plusAssignOperation(GGS_string ("**************** Prefined lexical functions ****************\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 555)) ;
  UpEnumerator_lexicalFunctionMap enumerator_24409 (var_lexicalFunctionMap_24224) ;
  while (enumerator_24409.hasCurrentObject ()) {
    var_s_23548.plusAssignOperation(enumerator_24409.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 557)) ;
    UpEnumerator__5B_lexicalFunctionFormalArgumentAST_5D_ enumerator_24507 (enumerator_24409.current (HERE).readProperty_mLexicalTypeList ()) ;
    while (enumerator_24507.hasCurrentObject ()) {
      var_s_23548.plusAssignOperation(GGS_string (" \?@").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24507.current (HERE).readProperty_mLexicalType (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)).add_operation (enumerator_24507.current (HERE).readProperty_mArgumentNameForComment (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 559)) ;
      enumerator_24507.gotoNextObject () ;
    }
    var_s_23548.plusAssignOperation(GGS_string (" -> @").add_operation (extensionGetter_lexicalTypeBaseName (enumerator_24409.current (HERE).readProperty_mReturnedLexicalType (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)).add_operation (GGS_string (" ;\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 561)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, enumerator_24409.current (HERE).readProperty_mReplacementFunctionName ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        var_s_23548.plusAssignOperation(GGS_string ("Note: the '").add_operation (enumerator_24409.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)).add_operation (GGS_string ("' function is obsolete: use '"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)).add_operation (enumerator_24409.current (HERE).readProperty_mReplacementFunctionName (), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)).add_operation (GGS_string ("' function.\n"), inCompiler COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 563)) ;
      }
    }
    var_s_23548.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 565)) ;
    enumerator_24409.gotoNextObject () ;
  }
  var_s_23548.plusAssignOperation(GGS_string ("************************************************************"), inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 568)) ;
  {
  routine_println_3F_ (var_s_23548, inCompiler  COMMA_SOURCE_FILE ("predefinedLexicalActions.galgas4", 569)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'updateLIBPMatPath?'
//
//--------------------------------------------------------------------------------------------------

void routine_updateLIBPMatPath_3F_ (const GGS_string constinArgument_inLIBPMPath,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_filewrapper var_fw_1497 = GGS_libpmFileWrapper::class_func_contents (SOURCE_FILE ("libpmHandling.galgas4", 30)) ;
  UpEnumerator__5B_string_5D_ enumerator_1575 (var_fw_1497.getter_allDirectoryPaths (SOURCE_FILE ("libpmHandling.galgas4", 32))) ;
  while (enumerator_1575.hasCurrentObject ()) {
    GGS_string var_actualDirectory_1612 = constinArgument_inLIBPMPath.add_operation (enumerator_1575.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 33)) ;
    var_actualDirectory_1612.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 34)) ;
    enumerator_1575.gotoNextObject () ;
  }
  GGS_stringset var_allNeededFileSet_1734 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_1775 (var_fw_1497.getter_allTextFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 38))) ;
  while (enumerator_1775.hasCurrentObject ()) {
    GGS_string var_contents_1803 = var_fw_1497.getter_textFileContentsAtPath (enumerator_1775.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 39)) ;
    GGS_string var_actualFilePath_1856 = constinArgument_inLIBPMPath.add_operation (enumerator_1775.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 40)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, var_actualFilePath_1856.getter_pathExtension (SOURCE_FILE ("libpmHandling.galgas4", 41)).objectCompare (GGS_string ("py"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_bool joker_2017 ; // Joker input parameter
        var_contents_1803.method_writeToExecutableFileWhenDifferentContents (var_actualFilePath_1856, joker_2017, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 42)) ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_bool joker_2095 ; // Joker input parameter
      var_contents_1803.method_writeToFileWhenDifferentContents (var_actualFilePath_1856, joker_2095, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 44)) ;
    }
    var_allNeededFileSet_1734.plusPlusAssignOperation (enumerator_1775.current (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 46)) ;
    enumerator_1775.gotoNextObject () ;
  }
  UpEnumerator__5B_string_5D_ enumerator_2188 (var_fw_1497.getter_allBinaryFilePaths (SOURCE_FILE ("libpmHandling.galgas4", 49))) ;
  while (enumerator_2188.hasCurrentObject ()) {
    GGS_data var_contents_2218 = var_fw_1497.getter_binaryFileContentsAtPath (enumerator_2188.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 50)) ;
    GGS_string var_actualFilePath_2273 = constinArgument_inLIBPMPath.add_operation (enumerator_2188.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 51)) ;
    GGS_bool joker_2373 ; // Joker input parameter
    var_contents_2218.method_writeToFileWhenDifferentContents (var_actualFilePath_2273, joker_2373, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 52)) ;
    var_allNeededFileSet_1734.plusPlusAssignOperation (enumerator_2188.current (HERE)  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 53)) ;
    enumerator_2188.gotoNextObject () ;
  }
  GGS_stringset var_allActualFileSet_2458 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_string_5D_ enumerator_2526 (constinArgument_inLIBPMPath.getter_regularFiles (GGS_bool (true) COMMA_SOURCE_FILE ("libpmHandling.galgas4", 57))) ;
  while (enumerator_2526.hasCurrentObject ()) {
    var_allActualFileSet_2458.plusPlusAssignOperation (GGS_string ("/").add_operation (enumerator_2526.current (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58))  COMMA_SOURCE_FILE ("libpmHandling.galgas4", 58)) ;
    enumerator_2526.gotoNextObject () ;
  }
  GGS_stringset var_uselessFileSet_2580 = var_allActualFileSet_2458.subtract_operation (var_allNeededFileSet_1734, inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 60)) ;
  UpEnumerator_stringset enumerator_2640 (var_uselessFileSet_2580) ;
  while (enumerator_2640.hasCurrentObject ()) {
    {
    GGS_string::class_method_deleteFile (constinArgument_inLIBPMPath.add_operation (enumerator_2640.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 62)), inCompiler COMMA_SOURCE_FILE ("libpmHandling.galgas4", 62)) ;
    }
    enumerator_2640.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@templateLexiqueComponentAST keyRepresentation'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_templateLexiqueComponentAST::getter_keyRepresentation (Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  result = GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 129)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInGraph'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInGraph (GGS_semanticTypePrecedenceGraph & ioArgument_ioSemanticTypePrecedenceGraph,
                                                                       GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                       GGS_extensionInitializerForBuildingContext & /* ioArgument__5F_ioExtensionInitializerForBuildingContext */,
                                                                       GGS_extensionMethodMapForBuildingContext & /* ioArgument__5F_ioExtensionMethodMapForBuildingContext */,
                                                                       GGS_extensionGetterMapForBuildingContext & /* ioArgument__5F_ioExtensionGetterMapForBuildingContext */,
                                                                       GGS_extensionSetterMapForBuildingContext & /* ioArgument__5F_ioExtensionSetterMapForBuildingContext */,
                                                                       GGS__5B_semanticDeclarationAST_5D_ & /* ioArgument__5F_ioExtensionOverrideDefinitionList */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_lstring var_key_5434 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_0.readProperty_mLexiqueComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 142)), temp_1.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addNode (var_key_5434, temp_2, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 143)) ;
  }
  const GGS_templateLexiqueComponentAST temp_3 = this ;
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  GGS_lstring var_superKey_5588 = GGS_lstring::init_21__21_ (GGS_string ("lexique ").add_operation (temp_3.readProperty_mLexiqueSuperComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 144)), temp_4.readProperty_mLexiqueComponentName ().readProperty_location (), inCompiler COMMA_HERE) ;
  {
  ioArgument_ioSemanticTypePrecedenceGraph.setter_addEdge (var_key_5434, var_superKey_5588 COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 145)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST enterDeclarationInSemanticContext'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_enterDeclarationInSemanticContext (GGS_equatableExtensionMap & /* ioArgument__5F_ioEquatableExtensionMap */,
                                                                                 const GGS_extensionInitializerForBuildingContext /* constinArgument__5F_inExtensionInitializerMapForBuildingContext */,
                                                                                 const GGS_extensionMethodMapForBuildingContext /* constinArgument__5F_inExtensionMethodMapForBuildingContext */,
                                                                                 const GGS_extensionGetterMapForBuildingContext /* constinArgument__5F_inExtensionGetterMapForBuildingContext */,
                                                                                 const GGS_extensionSetterMapForBuildingContext /* constinArgument__5F_inExtensionSetterMapForBuildingContext */,
                                                                                 GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                 GGS_semanticContext & ioArgument_ioSemanticContext,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_superLexiqueIsTemplate_6607 ;
  GGS_terminalMap var_terminalMap_6641 ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_6664 ;
  GGS__5B_terminalDeclarationAST_5D_ var_terminalListAST_6691 ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeListAST_6718 ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationListAST_6786 ;
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  ioArgument_ioSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_0.readProperty_mLexiqueSuperComponentName (), var_superLexiqueIsTemplate_6607, var_terminalMap_6641, var_indexingListAST_6664, var_terminalListAST_6691, var_lexicalAttributeListAST_6718, var_lexicalListDeclarationListAST_6786, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 159)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_superLexiqueIsTemplate_6607.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_templateLexiqueComponentAST temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLexiqueSuperComponentName ().readProperty_location (), GGS_string ("cannot inherit from a template lexique"), fixItArray3  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 170)) ;
    }
  }
  {
  const GGS_templateLexiqueComponentAST temp_4 = this ;
  ioArgument_ioSemanticContext.mProperty_mLexiqueComponentMapForSemanticAnalysis.setter_insertKey (temp_4.readProperty_mLexiqueComponentName (), GGS_bool (true), var_terminalMap_6641, var_indexingListAST_6664, var_terminalListAST_6691, var_lexicalAttributeListAST_6718, var_lexicalListDeclarationListAST_6786, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 173)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@templateLexiqueComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_templateLexiqueComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                const GGS_semanticContext constinArgument_inSemanticContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_templateLexiqueComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_8011 = function_lexiqueNameForUsefulEntitiesGraph (temp_0.readProperty_mLexiqueComponentName (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 196)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_8011, var_nameForUsefulness_8011, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 197)) ;
  }
  GGS__5B_terminalDeclarationAST_5D_ var_terminalListAST_8453 ;
  GGS__5B_lexicalAttributeAST_5D_ var_lexicalAttributeListAST_8480 ;
  GGS__5B_lexicalListDeclarationAST_5D_ var_lexicalListDeclarationListAST_8548 ;
  const GGS_templateLexiqueComponentAST temp_1 = this ;
  GGS_bool joker_8350 ; // Joker input parameter
  GGS_terminalMap joker_8388 ; // Joker input parameter
  GGS__5B_indexingAST_5D_ joker_8415 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueSuperComponentName (), joker_8350, joker_8388, joker_8415, var_terminalListAST_8453, var_lexicalAttributeListAST_8480, var_lexicalListDeclarationListAST_8548, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 199)) ;
  GGS_lexicalTypeMap var_lexicalTypeMap_8677 = function_gLexicalTypeMap (inCompiler COMMA_HERE) ;
  GGS_lexicalRoutineMap var_lexicalRoutineMap_8808 ;
  {
  routine_buildLexicalRoutineMap_21_ (var_lexicalRoutineMap_8808, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 212)) ;
  }
  GGS_lexicalFunctionMap var_lexicalFunctionMap_8927 ;
  {
  routine_buildLexicalFunctionMap_21_ (var_lexicalFunctionMap_8927, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 214)) ;
  }
  GGS_stringset var_unicodeTestFunctions_9054 ;
  {
  routine_lexicalUnicodeTestFunctionAnalysis_21_ (var_unicodeTestFunctions_9054, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 216)) ;
  }
  const GGS_templateLexiqueComponentAST temp_2 = this ;
  GGS_lexiqueAnalysisContext var_lexiqueAnalysisContext_9147 = GGS_lexiqueAnalysisContext::init_21__21__21__21__21__21__21__21__21__21__21_ (temp_2.readProperty_mLexiqueComponentName ().readProperty_string (), var_lexicalRoutineMap_8808, var_lexicalFunctionMap_8927, GGS_lexicalMessageMap::init (inCompiler COMMA_HERE), GGS_terminalMap::init (inCompiler COMMA_HERE), GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE), GGS_lexicalAttributeMap::init (inCompiler COMMA_HERE), GGS_lexicalExplicitTokenListMapMap::init (inCompiler COMMA_HERE), GGS_stringset::init (inCompiler COMMA_HERE), GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE), var_unicodeTestFunctions_9054, inCompiler COMMA_HERE) ;
  {
  routine_buildLexicalAttributeMap_3F__3F__26_ (var_lexicalTypeMap_8677, var_lexicalAttributeListAST_8480, var_lexiqueAnalysisContext_9147.mProperty_mLexicalAttributeMap, inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 232)) ;
  }
  GGS__5B_terminalAST_5D_ var_terminalList_9750 = GGS__5B_terminalAST_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_terminalDeclarationAST_5D_ enumerator_9787 (var_terminalListAST_8453) ;
  while (enumerator_9787.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_9820 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, enumerator_9787.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 241)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_lstring joker_9969 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_9787.current (HERE).readProperty_mStyle (), joker_9969, var_terminalStyleIndex_9820, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 242)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_10010 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_10082 (enumerator_9787.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_10082.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_10196 ;
      var_lexiqueAnalysisContext_9147.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_10082.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_10196, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 246)) ;
      var_argumentTypeList_10010.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_10082.current (HERE).readProperty_mFormalSelector (), enumerator_10082.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_10196, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 247)) ;
      enumerator_10082.gotoNextObject () ;
    }
    {
    var_lexiqueAnalysisContext_9147.mProperty_mTerminalMap.setter_insertKey (enumerator_9787.current (HERE).readProperty_mName (), var_argumentTypeList_10010, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 249)) ;
    }
    var_terminalList_9750.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_9787.current (HERE).readProperty_mName (), var_argumentTypeList_10010, enumerator_9787.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string (), enumerator_9787.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_9787.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 255)), var_terminalStyleIndex_9820, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 250)) ;
    enumerator_9787.gotoNextObject () ;
  }
  UpEnumerator__5B_lexicalListDeclarationAST_5D_ enumerator_10705 (var_lexicalListDeclarationListAST_8548) ;
  while (enumerator_10705.hasCurrentObject ()) {
    GGS_uint var_terminalStyleIndex_10752 = GGS_uint (uint32_t (0U)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, enumerator_10705.current (HERE).readProperty_mStyle ().readProperty_string ().getter_count (SOURCE_FILE ("template-lexique-component.galgas4", 260)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GGS_lstring joker_10907 ; // Joker input parameter
        constinArgument_inSemanticContext.readProperty_projectSettings ().readProperty_lexicalStyleMap ().method_search (enumerator_10705.current (HERE).readProperty_mStyle (), joker_10907, var_terminalStyleIndex_10752, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 261)) ;
      }
    }
    GGS__5B_lexicalSentValue_5D_ var_argumentTypeList_10948 = GGS__5B_lexicalSentValue_5D_::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_sentLexicalAttributeAST_5D_ enumerator_11023 (enumerator_10705.current (HERE).readProperty_mSentAttributeList ()) ;
    while (enumerator_11023.hasCurrentObject ()) {
      GGS_lexicalTypeEnum var_attributeLexicalType_11137 ;
      var_lexiqueAnalysisContext_9147.readProperty_mLexicalAttributeMap ().method_searchKey (enumerator_11023.current (HERE).readProperty_mAttributeName (), var_attributeLexicalType_11137, inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 265)) ;
      var_argumentTypeList_10948.plusPlusAssignOperation (GGS_lexicalSentValue::init_21__21__21_ (enumerator_11023.current (HERE).readProperty_mFormalSelector (), enumerator_11023.current (HERE).readProperty_mAttributeName ().readProperty_string (), var_attributeLexicalType_11137, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 266)) ;
      enumerator_11023.gotoNextObject () ;
    }
    UpEnumerator__5B_lexicalListEntryAST_5D_ enumerator_11307 (enumerator_10705.current (HERE).readProperty_mEntryList ()) ;
    while (enumerator_11307.hasCurrentObject ()) {
      GGS_string var_syntaxErrorMessage_11331 = enumerator_10705.current (HERE).readProperty_mSyntaxErrorMessage ().readProperty_string ().getter_replacing (GGS_string ("%K"), enumerator_11307.current (HERE).readProperty_mTerminalSpelling ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 269)) ;
      var_terminalList_9750.plusPlusAssignOperation (GGS_terminalAST::init_21__21__21__21_isEndOfTemplateMark_21_atomicSelection_21_ (enumerator_11307.current (HERE).readProperty_mTerminalSpelling (), var_argumentTypeList_10948, var_syntaxErrorMessage_11331, enumerator_11307.current (HERE).readProperty_isEndOfTemplateMark (), enumerator_11307.current (HERE).readProperty_nonAtomicSelection ().operator_not (SOURCE_FILE ("template-lexique-component.galgas4", 275)), var_terminalStyleIndex_10752, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 270)) ;
      enumerator_11307.gotoNextObject () ;
    }
    enumerator_10705.gotoNextObject () ;
  }
  GGS_stringset var_unicodeStringToGenerate_11791 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS__5B_templateDelimitorAST_5D_ var_templateDelimitorList_11851 = GGS__5B_templateDelimitorAST_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_templateLexiqueComponentAST temp_5 = this ;
  UpEnumerator__5B_templateDelimitor_32_AST_5D_ enumerator_11911 (temp_5.readProperty_mTemplateDelimitorList ()) ;
  while (enumerator_11911.hasCurrentObject ()) {
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_11911.current (HERE).readProperty_mStartString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 283)) ;
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_11911.current (HERE).readProperty_mEndString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 284)) ;
    var_templateDelimitorList_11851.plusPlusAssignOperation (GGS_templateDelimitorAST::init_21__21__21_ (enumerator_11911.current (HERE).readProperty_mStartString (), enumerator_11911.current (HERE).readProperty_mEndString (), enumerator_11911.current (HERE).readProperty_mPreserved (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 285)) ;
    enumerator_11911.gotoNextObject () ;
  }
  const GGS_templateLexiqueComponentAST temp_6 = this ;
  UpEnumerator__5B_templateReplacementAST_5D_ enumerator_12299 (temp_6.readProperty_mTemplateReplacementList ()) ;
  while (enumerator_12299.hasCurrentObject ()) {
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_12299.current (HERE).readProperty_mMatchString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 289)) ;
    var_unicodeStringToGenerate_11791.plusPlusAssignOperation (enumerator_12299.current (HERE).readProperty_mReplacementString ().readProperty_string ()  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 290)) ;
    enumerator_12299.gotoNextObject () ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("template-lexique-component.galgas4", 294)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_templateLexiqueComponentAST temp_8 = this ;
      const GGS_templateLexiqueComponentAST temp_9 = this ;
      GGS_string var_headerContents_12656 = GGS_templateLexiqueGenerationTemplates::class_func_cppHeader (temp_8.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 297)), temp_9.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 298)), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 296)) ;
      const GGS_templateLexiqueComponentAST temp_10 = this ;
      const GGS_templateLexiqueComponentAST temp_11 = this ;
      const GGS_templateLexiqueComponentAST temp_12 = this ;
      const GGS_templateLexiqueComponentAST temp_13 = this ;
      GGS_string var_cppContents_12885 = GGS_templateLexiqueGenerationTemplates::class_func_cppImplementation (temp_10.readProperty_mLexiqueComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 302)), temp_11.readProperty_mLexiqueSuperComponentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 303)), var_lexiqueAnalysisContext_9147.readProperty_mLexicalTokenListMap (), var_unicodeStringToGenerate_11791, var_templateDelimitorList_11851, var_terminalList_9750, temp_12.readProperty_mLexiqueComponentName ().readProperty_string (), temp_13.readProperty_mTemplateReplacementList (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 301)) ;
      const GGS_templateLexiqueComponentAST temp_14 = this ;
      const GGS_templateLexiqueComponentAST temp_15 = this ;
      const GGS_templateLexiqueComponentAST temp_16 = this ;
      const GGS_templateLexiqueComponentAST temp_17 = this ;
      GGS_string var_swiftuiImplementation_13345 = GGS_templateLexiqueGenerationTemplates::class_func_swiftuiImplementationZone (GGS_string ("lexique-").add_operation (temp_14.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 313)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 313)).add_operation (GGS_string ("-swiftui"), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 313)), temp_15.readProperty_mLexiqueComponentName ().readProperty_string (), temp_16.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_terminalList_9750, var_templateDelimitorList_11851, temp_17.readProperty_mTemplateReplacementList (), inCompiler  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 312)) ;
      const GGS_templateLexiqueComponentAST temp_18 = this ;
      const GGS_templateLexiqueComponentAST temp_19 = this ;
      const GGS_templateLexiqueComponentAST temp_20 = this ;
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_lexiqueDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("lexique-").add_operation (temp_18.readProperty_mLexiqueComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("template-lexique-component.galgas4", 324)), inCompiler COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 324)), temp_19.readProperty_mLexiqueComponentName ().readProperty_string (), temp_20.readProperty_mLexiqueSuperComponentName ().readProperty_string (), var_headerContents_12656, var_cppContents_12885, var_swiftuiImplementation_13345, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("template-lexique-component.galgas4", 321)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'checkMethodSignatures????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkMethodSignatures_3F__3F__3F__3F_ (const GGS__5B_formalParameterForGeneration_5D_ constinArgument_inTestedSignature,
                                                    const GGS_location constinArgument_inErrorLocation,
                                                    const GGS__5B_formalParameterSignatureElement_5D_ constinArgument_inReferenceSignature,
                                                    const GGS_location constinArgument_inReferenceLocation,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 31)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 31)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this proc declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 32)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 32)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)).add_operation (GGS_string (" formal parameter(s), but overriden proc declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 33)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 33)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 33)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 32)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 34)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_2123 (constinArgument_inReferenceSignature) ;
    UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_2155 (constinArgument_inTestedSignature) ;
    while (enumerator_2123.hasCurrentObject () && enumerator_2155.hasCurrentObject ()) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode ().objectCompare (enumerator_2155.current (HERE).readProperty_mFormalArgumentPassingMode ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string ("' formal parameter is declared as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2155.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)).add_operation (GGS_string (", but overriden proc declares it as "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)).add_operation (extensionGetter_formalArgumentMessage (enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 40)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 39)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 38)) ;
          GenericArray <FixItDescription> fixItArray5 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 42)) ;
        }
      }
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_2155.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string var_s_2728 ;
          switch (enumerator_2123.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
          case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
            {
              var_s_2728 = GGS_string ("\?") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
            {
              var_s_2728 = GGS_string ("\?!") ;
            }
            break ;
          case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
            {
              var_s_2728 = GGS_string ("!") ;
            }
            break ;
          }
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_2123.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          var_s_2728.plusAssignOperation(temp_7, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 54)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_2728) ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_2728, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 55)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_2155.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_2123.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 57)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_2155.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (extensionGetter_definition (enumerator_2155.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)).add_operation (GGS_string ("' type, but overriden proc declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (extensionGetter_definition (enumerator_2123.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 59)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 60)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 58)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden proc is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 61)) ;
        }
      }
      enumerator_2123.gotoNextObject () ;
      enumerator_2155.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkGetterSignatures??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkGetterSignatures_3F__3F__3F__3F__3F__3F_ (const GGS__5B_formalInputParameterForGeneration_5D_ constinArgument_inTestedSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inReturnType,
                                                            const GGS_location constinArgument_inErrorLocation,
                                                            const GGS__5B_functionSignatureElement_5D_ constinArgument_inReferenceSignature,
                                                            const GGS_unifiedTypeMapEntry constinArgument_inInheritedReturnType,
                                                            const GGS_location constinArgument_inReferenceLocation,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 79)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 79)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("the return type is '@").add_operation (extensionGetter_definition (constinArgument_inReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 80)).add_operation (GGS_string ("', but overriden func names '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).add_operation (extensionGetter_definition (constinArgument_inInheritedReturnType, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 82)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 81)).add_operation (GGS_string ("' as return type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 82)), fixItArray1  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 80)) ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 83)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 85)).objectCompare (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 85)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inErrorLocation, GGS_string ("this func declares ").add_operation (constinArgument_inTestedSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 86)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 86)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)).add_operation (GGS_string (" formal parameter(s), but overriden func declares "), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)).add_operation (constinArgument_inReferenceSignature.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 87)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 87)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 86)) ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray5  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 88)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    UpEnumerator__5B_functionSignatureElement_5D_ enumerator_5076 (constinArgument_inReferenceSignature) ;
    UpEnumerator__5B_formalInputParameterForGeneration_5D_ enumerator_5108 (constinArgument_inTestedSignature) ;
    while (enumerator_5076.hasCurrentObject () && enumerator_5108.hasCurrentObject ()) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::notEqual, enumerator_5108.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GGS_string temp_7 ;
          const GalgasBool test_8 = GGS_bool (ComparisonKind::notEqual, enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            temp_7 = enumerator_5076.current (HERE).readProperty_mFormalSelector ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          }else if (GalgasBool::boolFalse == test_8) {
            temp_7 = GGS_string::makeEmptyString () ;
          }
          GGS_string var_s_5223 = GGS_string ("\?").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 92)) ;
          GenericArray <FixItDescription> fixItArray9 ;
          appendFixItActions (fixItArray9, EnumFixItKind::fixItReplace, var_s_5223) ;
          inCompiler->emitSemanticError (enumerator_5108.current (HERE).readProperty_mFormalSelector ().readProperty_location (), GGS_string ("the selector should be '").add_operation (var_s_5223, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)), fixItArray9  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 93)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, extensionGetter_definition (enumerator_5108.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ().objectCompare (extensionGetter_definition (enumerator_5076.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 95)).readProperty_typeName ().readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (enumerator_5108.current (HERE).readProperty_mFormalArgumentName ().readProperty_location (), GGS_string ("the '").add_operation (enumerator_5108.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' formal parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (extensionGetter_definition (enumerator_5108.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)).add_operation (GGS_string ("' type, but overriden func declares with the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (extensionGetter_definition (enumerator_5076.current (HERE).readProperty_mFormalArgumentType (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 97)).add_operation (GGS_string ("' type"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 98)), fixItArray11  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 96)) ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (constinArgument_inReferenceLocation, GGS_string ("overriden func is declared here"), fixItArray12  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 99)) ;
        }
      }
      enumerator_5076.gotoNextObject () ;
      enumerator_5108.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildLocalVariableMapAndSignature?&?&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                    GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                    const GGS__5B_formalParameterAST_5D_ constinArgument_inRoutineSignatureAST,
                                                                    GGS_localVarManager & ioArgument_ioVariableMap,
                                                                    GGS__5B_formalParameterForGeneration_5D_ & outArgument_outRoutineSignature,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterAST_5D_ enumerator_6996 (constinArgument_inRoutineSignatureAST) ;
  while (enumerator_6996.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_type_7029 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 124)) ;
    GGS_string var_formalArgumentCppName_7123 ;
    switch (enumerator_6996.current (HERE).readProperty_mFormalArgumentPassingMode ().enumValue ()) {
    case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
      {
        var_formalArgumentCppName_7123 = GGS_string ("inArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 129)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 128)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            {
            extensionSetter_insertInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 131)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          {
          extensionSetter_insertInputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 138)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
      {
        var_formalArgumentCppName_7123 = GGS_string ("outArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 147)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 146)) ;
        {
        extensionSetter_insertOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 148)) ;
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
      {
        var_formalArgumentCppName_7123 = GGS_string ("ioArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 156)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 155)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertInputOutputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 158)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertInputOutputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 165)) ;
          }
        }
      }
      break ;
    case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
      {
        var_formalArgumentCppName_7123 = GGS_string ("constinArgument_").add_operation (enumerator_6996.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 174)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 173)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = enumerator_6996.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 176)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          {
          extensionSetter_insertConstantInputFormalArgument (ioArgument_ioVariableMap, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_type_7029, var_formalArgumentCppName_7123, var_formalArgumentCppName_7123, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 183)) ;
          }
        }
      }
      break ;
    }
    outArgument_outRoutineSignature.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_6996.current (HERE).readProperty_mFormalSelector (), enumerator_6996.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_7029, enumerator_6996.current (HERE).readProperty_mFormalArgumentName (), var_formalArgumentCppName_7123, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 191)) ;
    enumerator_6996.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeRoutineBody?&?&???!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeRoutineBody_3F__26__3F__26__3F__3F__3F__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                     GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                     const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                     GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                     const GGS__5B_formalParameterAST_5D_ constinArgument_inRoutineSignatureAST,
                                                                     const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                     const GGS_location constinArgument_inEndOfMethodLocation,
                                                                     GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                     GGS__5B_formalParameterForGeneration_5D_ & outArgument_outRoutineSignature,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outRoutineSignature.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_10302 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_selfAvailability_2E_available var_selfAvailable_10458 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 208)).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_10577 (extensionGetter_definition (var_selfAvailable_10458.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 209)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_10577.hasCurrentObject ()) {
        GGS_bool temp_1 ;
        const GalgasBool test_2 = GGS_bool (ComparisonKind::equal, var_selfAvailable_10458.readProperty_selfMutability ().objectCompare (GGS_selfMutability::class_func_initializer (SOURCE_FILE ("semanticAnalysis.galgas4", 210)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          temp_1 = GGS_bool (ComparisonKind::notEqual, enumerator_10577.current (HERE).readProperty_initialization ().objectCompare (GGS_propertyInCollectionInitializationAST::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 211)))) ;
        }else if (GalgasBool::boolFalse == test_2) {
          temp_1 = GGS_bool (true) ;
        }
        GGS_bool var_initialized_10611 = temp_1 ;
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_10302, enumerator_10577.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfMethodLocation, enumerator_10577.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_10577.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 219)), var_initialized_10611, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 214)) ;
        }
        enumerator_10577.gotoNextObject () ;
      }
    }
  }
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inRoutineSignatureAST, var_variableMap_10302, outArgument_outRoutineSignature, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 225)) ;
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_11334 (constinArgument_inInstructionList) ;
  while (enumerator_11334.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_11334.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_10302, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 235)) ;
    enumerator_11334.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_10302, constinArgument_inEndOfMethodLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 245)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@externFunctionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_externFunctionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_externFunctionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_12444 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 258)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_12444, var_nameForUsefulness_12444, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 259)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_externFunctionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_12444  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 261)) ;
    }
  }
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalArgumentList_12689 = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  const GGS_externFunctionDeclarationAST temp_3 = this ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_12771 (temp_3.readProperty_mFormalArgumentList ()) ;
  while (enumerator_12771.hasCurrentObject ()) {
    var_formalArgumentList_12689.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_12771.current (HERE).readProperty_mFormalSelector (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_12771.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 268)), enumerator_12771.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), enumerator_12771.current (HERE).readProperty_mFormalArgumentName (), enumerator_12771.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 266)) ;
    enumerator_12771.gotoNextObject () ;
  }
  const GGS_externFunctionDeclarationAST temp_4 = this ;
  const GGS_externFunctionDeclarationAST temp_5 = this ;
  const GGS_externFunctionDeclarationAST temp_6 = this ;
  const GGS_externFunctionDeclarationAST temp_7 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionPrototypeDeclarationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21_ (GGS_string ("extern func ").add_operation (temp_4.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 274)), GGS_bool (true), GGS_string ("func-").add_operation (temp_5.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 276)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 276)), temp_6.readProperty_mFunctionName ().readProperty_string (), var_formalArgumentList_12689, extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_7.readProperty_mResultTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 273)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeFunctionBody?&?&????!signatureIR!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                             GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                             const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS__5B_formalInputParameterAST_5D_ constinArgument_inFunctionSignature,
                                                                                             const GGS__5B_semanticInstructionAST_5D_ constinArgument_inInstructionList,
                                                                                             const GGS_lstring constinArgument_inResultTypeName,
                                                                                             const GGS_location constinArgument_inEndOfFunctionLocation,
                                                                                             GGS__5B_formalInputParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                                             GGS_unifiedTypeMapEntry & outArgument_outReturnedType,
                                                                                             GGS_string & outArgument_outResultVariableCppName,
                                                                                             GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outSemanticInstructionListForGeneration,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outReturnedType.drop () ; // Release 'out' argument
  outArgument_outResultVariableCppName.drop () ; // Release 'out' argument
  outArgument_outSemanticInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_14395 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  outArgument_outSignatureForGeneration = GGS__5B_formalInputParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalInputParameterAST_5D_ enumerator_14600 (constinArgument_inFunctionSignature) ;
  while (enumerator_14600.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_parameterType_14631 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_14600.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 301)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = enumerator_14600.current (HERE).readProperty_mIsConstant ().boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_string var_cppName_14765 = GGS_string ("constinArgument_").add_operation (enumerator_14600.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 303)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 303)) ;
        outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_14600.current (HERE).readProperty_mFormalSelector (), var_parameterType_14631, var_cppName_14765, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), enumerator_14600.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 304)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = enumerator_14600.current (HERE).readProperty_mIsUnused ().boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            extensionSetter_insertConstantInputFormalArgumentDeclaredAsUnused (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_14765, var_cppName_14765, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 311)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          extensionSetter_insertConstantInputFormalArgument (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_14765, var_cppName_14765, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 313)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      GGS_string var_cppName_15382 = GGS_string ("inArgument_").add_operation (enumerator_14600.current (HERE).readProperty_mFormalArgumentName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 316)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 316)) ;
      outArgument_outSignatureForGeneration.plusPlusAssignOperation (GGS_formalInputParameterForGeneration::init_21__21__21__21__21_ (enumerator_14600.current (HERE).readProperty_mFormalSelector (), var_parameterType_14631, var_cppName_15382, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), enumerator_14600.current (HERE).readProperty_mIsConstant (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 317)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = enumerator_14600.current (HERE).readProperty_mIsUnused ().boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertInputFormalArgumentDeclaredAsUnused (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_15382, var_cppName_15382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 324)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_2) {
        {
        extensionSetter_insertInputFormalArgument (var_variableMap_14395, enumerator_14600.current (HERE).readProperty_mFormalArgumentName (), var_parameterType_14631, var_cppName_15382, var_cppName_15382, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 326)) ;
        }
      }
    }
    enumerator_14600.gotoNextObject () ;
  }
  outArgument_outReturnedType = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, constinArgument_inResultTypeName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 331)) ;
  outArgument_outResultVariableCppName = GGS_string ("result") ;
  {
  extensionSetter_insertOutputFormalArgument (var_variableMap_14395, GGS_string ("result").getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 333)), outArgument_outReturnedType, outArgument_outResultVariableCppName, outArgument_outResultVariableCppName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 333)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_selfAvailability_2E_available var_selfAvailable_16301 = constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 335)).unwrappedValue () ;
    if (!constinArgument_inAnalysisContext.readProperty_selfAvailability ().getter_getAvailable (SOURCE_FILE ("semanticAnalysis.galgas4", 335)).isValuated ()) {
      test_3 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_3) {
      UpEnumerator__5B_typedProperty_5D_ enumerator_16420 (extensionGetter_definition (var_selfAvailable_16301.readProperty_type (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 336)).readProperty_allTypedPropertyList ()) ;
      while (enumerator_16420.hasCurrentObject ()) {
        {
        extensionSetter_insertInitializerSelfProperty (var_variableMap_14395, enumerator_16420.current (HERE).readProperty_name ().readProperty_string (), constinArgument_inEndOfFunctionLocation, enumerator_16420.current (HERE).readProperty_typeEntry (), GGS_string ("<< unused >>"), GGS_string ("self.").add_operation (enumerator_16420.current (HERE).readProperty_name ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 342)), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 337)) ;
        }
        enumerator_16420.gotoNextObject () ;
      }
    }
  }
  outArgument_outSemanticInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticInstructionAST_5D_ enumerator_16828 (constinArgument_inInstructionList) ;
  while (enumerator_16828.hasCurrentObject ()) {
    callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) enumerator_16828.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, outArgument_outSemanticInstructionListForGeneration, var_variableMap_14395, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 350)) ;
    enumerator_16828.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_14395, constinArgument_inEndOfFunctionLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 360)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@functionDeclarationAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_functionDeclarationAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & ioArgument_ioUsefulnessRootEntities,
                                                           GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                           const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                           const GGS_semanticContext constinArgument_inSemanticContext,
                                                           GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                           const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                           GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_functionDeclarationAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_17701 = function_functionNameForUsefulEntitiesGraph (temp_0.readProperty_mFunctionName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 375)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_17701, var_nameForUsefulness_17701, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 376)) ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_functionDeclarationAST temp_2 = this ;
    test_1 = temp_2.readProperty_usefullFunc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      ioArgument_ioUsefulnessRootEntities.plusPlusAssignOperation (var_nameForUsefulness_17701  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 378)) ;
    }
  }
  GGS_analysisContext var_analysisContext_17968 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 385)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS__5B_formalInputParameterForGeneration_5D_ var_formalInputParameterList_18429 ;
  GGS_unifiedTypeMapEntry var_returnType_18464 ;
  GGS_string var_resultVariableCppName_18485 ;
  GGS__5B_semanticInstructionForGeneration_5D_ var_semanticInstructionListForGeneration_18517 ;
  {
  const GGS_functionDeclarationAST temp_3 = this ;
  const GGS_functionDeclarationAST temp_4 = this ;
  const GGS_functionDeclarationAST temp_5 = this ;
  const GGS_functionDeclarationAST temp_6 = this ;
  routine_analyzeFunctionBody_3F__26__3F__26__3F__3F__3F__3F__21_signatureIR_21__21__21_ (var_nameForUsefulness_17701, ioArgument_ioUsefulEntitiesGraph, var_analysisContext_17968, ioArgument_ioTypeMap, temp_3.readProperty_mFormalArgumentList (), temp_4.readProperty_mFunctionInstructionList (), temp_5.readProperty_mResultTypeName (), temp_6.readProperty_mEndOfFunctionInstructionList (), var_formalInputParameterList_18429, var_returnType_18464, var_resultVariableCppName_18485, var_semanticInstructionListForGeneration_18517, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 388)) ;
  }
  const GGS_functionDeclarationAST temp_7 = this ;
  const GGS_functionDeclarationAST temp_8 = this ;
  const GGS_functionDeclarationAST temp_9 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_functionImplementationForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21_ (GGS_string ("function ").add_operation (temp_7.readProperty_mFunctionName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 404)), GGS_bool (true), GGS_string ("func-").add_operation (temp_8.readProperty_mFunctionName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 406)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 406)), temp_9.readProperty_mFunctionName ().readProperty_string (), var_formalInputParameterList_18429, var_returnType_18464, var_resultVariableCppName_18485, var_semanticInstructionListForGeneration_18517, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 403)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3SyntaxComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_SyntaxComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                 GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                 const GGS_string /* constinArgument__5F_inProductDirectory */,
                                                                 const GGS_semanticContext constinArgument_inSemanticContext,
                                                                 GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                 const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                 GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_galgas_33_SyntaxComponentAST temp_0 = this ;
  GGS_lstring var_nameForUsefulness_19519 = function_syntaxNameForUsefulEntitiesGraph (temp_0.readProperty_mSyntaxComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 427)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_nameForUsefulness_19519, var_nameForUsefulness_19519, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 428)) ;
  }
  GGS_terminalMap var_terminalMap_19858 ;
  GGS__5B_indexingAST_5D_ var_indexingListAST_19895 ;
  const GGS_galgas_33_SyntaxComponentAST temp_1 = this ;
  GGS_bool joker_19832 ; // Joker input parameter
  GGS__5B_terminalDeclarationAST_5D_ joker_19916_3 ; // Joker input parameter
  GGS__5B_lexicalAttributeAST_5D_ joker_19916_2 ; // Joker input parameter
  GGS__5B_lexicalListDeclarationAST_5D_ joker_19916_1 ; // Joker input parameter
  constinArgument_inSemanticContext.readProperty_mLexiqueComponentMapForSemanticAnalysis ().method_searchKey (temp_1.readProperty_mLexiqueName (), joker_19832, var_terminalMap_19858, var_indexingListAST_19895, joker_19916_3, joker_19916_2, joker_19916_1, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 430)) ;
  GGS_stringset var_indexNameSet_20003 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_indexingAST_5D_ enumerator_20037 (var_indexingListAST_19895) ;
  while (enumerator_20037.hasCurrentObject ()) {
    var_indexNameSet_20003.plusPlusAssignOperation (enumerator_20037.current (HERE).readProperty_mIndexName ().readProperty_string ()  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 440)) ;
    enumerator_20037.gotoNextObject () ;
  }
  GGS_bool var_hasIndexing_20119 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("semanticAnalysis.galgas4", 444)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_galgas_33_SyntaxComponentAST temp_3 = this ;
      GGS_string var_lexiqueName_20298 = temp_3.readProperty_mLexiqueName ().readProperty_string () ;
      GGS_syntaxDeclarationForGeneration var_syntaxDeclarationForGeneration_20757 ;
      {
      const GGS_galgas_33_SyntaxComponentAST temp_4 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_5 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_6 = this ;
      const GGS_galgas_33_SyntaxComponentAST temp_7 = this ;
      routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (var_nameForUsefulness_19519, ioArgument_ioUsefulEntitiesGraph, temp_4.readProperty_mNonterminalDeclarationList (), temp_5.readProperty_mRuleList (), temp_6.readProperty_mSyntaxComponentName ().readProperty_string (), var_lexiqueName_20298, constinArgument_inSemanticContext, ioArgument_ioTypeMap, constinArgument_inPredefinedTypes, var_terminalMap_19858, var_indexNameSet_20003, var_hasIndexing_20119, temp_7.readProperty_mHasTranslateFeature (), var_syntaxDeclarationForGeneration_20757, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 446)) ;
      }
      ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (var_syntaxDeclarationForGeneration_20757  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 462)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@galgas3GrammarComponentAST semanticAnalysis'
//--------------------------------------------------------------------------------------------------

void cPtr_galgas_33_GrammarComponentAST::method_semanticAnalysis (GGS__5B_lstring_5D_ & /* ioArgument__5F_ioUsefulnessRootEntities */,
                                                                  GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                  const GGS_string constinArgument_inProductDirectory,
                                                                  const GGS_semanticContext constinArgument_inSemanticContext,
                                                                  GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                  const GGS_predefinedTypes /* constinArgument__5F_inPredefinedTypes */,
                                                                  GGS__5B_semanticDeclarationForGeneration_5D_ & ioArgument_ioSemanticDeclarationListForGeneration,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_galgas_33_GrammarComponentAST temp_0 = this ;
  routine_println_3F_ (GGS_string ("*** Analyzing '").add_operation (temp_0.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 479)).add_operation (GGS_string ("' grammar"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 479)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 479)) ;
  }
  const GGS_galgas_33_GrammarComponentAST temp_1 = this ;
  GGS_lstring var_grammarNameForUsefulness_21756 = function_grammarNameForUsefulEntitiesGraph (temp_1.readProperty_mGrammarComponentName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 481)) ;
  {
  ioArgument_ioUsefulEntitiesGraph.setter_addNode (var_grammarNameForUsefulness_21756, var_grammarNameForUsefulness_21756, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 482)) ;
  }
  GGS_terminalSymbolsMapForGrammarAnalysis var_actuallyUsedTerminalSymbolMap_22061 = GGS_terminalSymbolsMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_nonTerminalSymbolMapForGrammarAnalysis var_nonTerminalMapForGrammarAnalysis_22143 = GGS_nonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  GGS_lstring var_lexiqueComponentName_22197 = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("semanticAnalysis.galgas4", 486)) ;
  GGS__5B_syntaxComponentForGrammarAnalysis_5D_ var_syntaxComponentListForGrammarAnalysis_22305 = GGS__5B_syntaxComponentForGrammarAnalysis_5D_::init (inCompiler COMMA_HERE) ;
  GGS__5B_nonTerminalToAdd_5D_ var_nonTerminalToAddList_22375 = GGS__5B_nonTerminalToAdd_5D_::init (inCompiler COMMA_HERE) ;
  GGS_uint var_addedNonTerminalCount_22414 = GGS_uint (uint32_t (0U)) ;
  const GGS_galgas_33_GrammarComponentAST temp_2 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_22474 (temp_2.readProperty_mSyntaxComponents ()) ;
  while (enumerator_22474.hasCurrentObject ()) {
    GGS_lstring var_syntaxNameForUsefulness_22503 = function_syntaxNameForUsefulEntitiesGraph (enumerator_22474.current (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 491)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_21756, var_syntaxNameForUsefulness_22503 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 492)) ;
    }
    GGS_uint var_addedNonTerminalCountRef_22698 = var_addedNonTerminalCount_22414 ;
    GGS_lstring var_lexiqueName_22866 ;
    GGS__5B_nonterminalDeclarationAST_5D_ var_nonterminalDeclarationList_22919 ;
    GGS__5B_syntaxRuleAST_5D_ var_ruleList_22975 ;
    GGS_bool var_hasTranslateFeature_23002 ;
    constinArgument_inSemanticContext.readProperty_mSyntaxComponentMapForSemanticAnalysis ().method_searchKey (enumerator_22474.current (HERE), var_lexiqueName_22866, var_nonterminalDeclarationList_22919, var_ruleList_22975, var_hasTranslateFeature_23002, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 494)) ;
    GGS_lstring var_lexiqueNameForUsefulness_23036 = function_lexiqueNameForUsefulEntitiesGraph (var_lexiqueName_22866, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 501)) ;
    {
    ioArgument_ioUsefulEntitiesGraph.setter_addEdge (var_grammarNameForUsefulness_21756, var_lexiqueNameForUsefulness_23036 COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 502)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_galgas_33_GrammarComponentAST temp_4 = this ;
      test_3 = temp_4.readProperty_mHasTranslateFeature ().operator_and (var_hasTranslateFeature_23002.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 504)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 504)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_galgas_33_GrammarComponentAST temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (enumerator_22474.current (HERE).readProperty_location (), GGS_string ("as '").add_operation (temp_5.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 505)).add_operation (GGS_string ("' grammar declares 'translate' feature, this syntax component should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 505)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 505)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_galgas_33_GrammarComponentAST temp_8 = this ;
        test_7 = var_hasTranslateFeature_23002.operator_and (temp_8.readProperty_mHasTranslateFeature ().operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 506)) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 506)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_galgas_33_GrammarComponentAST temp_9 = this ;
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mGrammarComponentName ().readProperty_location (), GGS_string ("as '").add_operation (enumerator_22474.current (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 507)).add_operation (GGS_string ("' syntax component declares 'translate' feature, this grammar should do so"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 507)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 507)) ;
        }
      }
    }
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_lexiqueComponentName_22197.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        var_lexiqueComponentName_22197 = var_lexiqueName_22866 ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::notEqual, var_lexiqueName_22866.readProperty_string ().objectCompare (var_lexiqueComponentName_22197.readProperty_string ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (enumerator_22474.current (HERE).readProperty_location (), GGS_string ("this syntax component uses '").add_operation (var_lexiqueName_22866.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 513)).add_operation (GGS_string ("' lexique component, but the first syntax component uses the '"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 514)).add_operation (var_lexiqueComponentName_22197.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 514)).add_operation (GGS_string ("' lexique component (they should be the same)"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 515)), fixItArray13  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 513)) ;
        }
      }
    }
    {
    routine_handleNonTerminalDeclarations_26__3F_ (var_nonTerminalMapForGrammarAnalysis_22143, var_nonterminalDeclarationList_22919, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 518)) ;
    }
    {
    routine_handleNonTerminalDeclarationsFromRuleList_26__3F_ (var_nonTerminalMapForGrammarAnalysis_22143, var_ruleList_22975, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 523)) ;
    }
    {
    routine_buildRuleList_3F__3F__3F__26__26__26_ (var_nonTerminalMapForGrammarAnalysis_22143, enumerator_22474.current (HERE), var_ruleList_22975, var_actuallyUsedTerminalSymbolMap_22061, var_syntaxComponentListForGrammarAnalysis_22305, var_addedNonTerminalCount_22414, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 528)) ;
    }
    GGS_uint var_i_24698 = GGS_uint (uint32_t (0U)) ;
    if (var_addedNonTerminalCount_22414.isValid ()) {
      uint32_t variant_24708 = var_addedNonTerminalCount_22414.uintValue () ;
      bool loop_24708 = true ;
      while (loop_24708) {
        loop_24708 = GGS_bool (ComparisonKind::lowerThan, var_i_24698.objectCompare (var_addedNonTerminalCount_22414.subtract_operation (var_addedNonTerminalCountRef_22698, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 537)))).isValid () ;
        if (loop_24708) {
          loop_24708 = GGS_bool (ComparisonKind::lowerThan, var_i_24698.objectCompare (var_addedNonTerminalCount_22414.subtract_operation (var_addedNonTerminalCountRef_22698, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 537)))).boolValue () ;
        }
        if (loop_24708 && (0 == variant_24708)) {
          loop_24708 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("semanticAnalysis.galgas4", 537)) ;
        }
        if (loop_24708) {
          variant_24708 -= 1 ;
          var_nonTerminalToAddList_22375.plusPlusAssignOperation (GGS_nonTerminalToAdd::init_21__21_ (enumerator_22474.current (HERE).readProperty_string (), var_i_24698, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 538)) ;
          var_i_24698.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 539)) ;
        }
      }
    }
    enumerator_22474.gotoNextObject () ;
  }
  GGS_uint var_startSymbolIndex_25092 ;
  GGS_nonterminalSymbolLabelMapForGrammarAnalysis var_startSymbolAltMap_25164 ;
  const GGS_galgas_33_GrammarComponentAST temp_14 = this ;
  var_nonTerminalMapForGrammarAnalysis_22143.method_searchKey (temp_14.readProperty_mStartSymbolName (), var_startSymbolIndex_25092, var_startSymbolAltMap_25164, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 544)) ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_15 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_16 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_17 = this ;
  routine_checkLabelMap_3F__3F__3F__3F_ (temp_15.readProperty_mStartSymbolName ().readProperty_location (), temp_16.readProperty_mStartSymbolLabelList (), var_nonTerminalMapForGrammarAnalysis_22143.getter_locationForKey (temp_17.readProperty_mStartSymbolName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 553)), var_startSymbolAltMap_25164, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 550)) ;
  }
  GGS_unusedNonTerminalSymbolMapForGrammarAnalysis var_unusedNonTerminalSymbolsForGrammar_25545 = GGS_unusedNonTerminalSymbolMapForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  const GGS_galgas_33_GrammarComponentAST temp_18 = this ;
  UpEnumerator__5B_lstring_5D_ enumerator_25618 (temp_18.readProperty_mUnusedNonterminalList ()) ;
  while (enumerator_25618.hasCurrentObject ()) {
    GGS_uint var_nonterminalIndex_25722 ;
    GGS_nonterminalSymbolLabelMapForGrammarAnalysis joker_25740 ; // Joker input parameter
    var_nonTerminalMapForGrammarAnalysis_22143.method_searchKey (enumerator_25618.current (HERE), var_nonterminalIndex_25722, joker_25740, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 559)) ;
    {
    var_unusedNonTerminalSymbolsForGrammar_25545.setter_insertKey (enumerator_25618.current (HERE), var_nonterminalIndex_25722, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 560)) ;
    }
    enumerator_25618.gotoNextObject () ;
  }
  GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis var_nonTerminalSymbolSortedListForGrammarAnalysis_25991 = GGS_nonTerminalSymbolSortedArrayForGrammarAnalysis::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_26064 (var_nonTerminalMapForGrammarAnalysis_22143) ;
  while (enumerator_26064.hasCurrentObject ()) {
    var_nonTerminalSymbolSortedListForGrammarAnalysis_25991.plusPlusAssignOperation (GGS_sortedNonTerminalSymbolForGrammarAnalysis::init_21__21__21_ (enumerator_26064.current (HERE).readProperty_lkey (), enumerator_26064.current (HERE).readProperty_mNonTerminalIndex (), enumerator_26064.current (HERE).readProperty_mNonterminalSymbolParametersMap (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 565)) ;
    enumerator_26064.gotoNextObject () ;
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_buildOptionValue::class_func_emitSyntaxDiagrams (SOURCE_FILE ("semanticAnalysis.galgas4", 568)).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      {
      const GGS_galgas_33_GrammarComponentAST temp_20 = this ;
      const GGS_galgas_33_GrammarComponentAST temp_21 = this ;
      routine_emitProductionRulesInTexFile_3F__3F__3F__3F__3F_ (constinArgument_inProductDirectory, temp_20.readProperty_mGrammarComponentName ().readProperty_string (), var_nonTerminalMapForGrammarAnalysis_22143, var_syntaxComponentListForGrammarAnalysis_22305, temp_21.readProperty_mStartSymbolName (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 569)) ;
      }
    }
  }
  GGS_string var_dotDocumentFilePath_26706 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../graph-class/graph-class.dot"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 578)) ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = GGS_buildOptionValue::class_func_emitClassGraph (SOURCE_FILE ("semanticAnalysis.galgas4", 579)).boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      {
      routine_emitClassGraphFile_3F__3F_ (var_dotDocumentFilePath_26706, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 580)) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    {
    GGS_string::class_method_deleteFileIfExists (var_dotDocumentFilePath_26706, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 585)) ;
    }
  }
  GGS_stringset var_implementationFileHeader_27262 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_nonTerminalSymbolMapForGrammarAnalysis enumerator_27314 (var_nonTerminalMapForGrammarAnalysis_22143) ;
  while (enumerator_27314.hasCurrentObject ()) {
    UpEnumerator_nonterminalSymbolLabelMapForGrammarAnalysis enumerator_27387 (enumerator_27314.current (HERE).readProperty_mNonterminalSymbolParametersMap ()) ;
    while (enumerator_27387.hasCurrentObject ()) {
      UpEnumerator__5B_signatureElementForGrammarAnalysis_5D_ enumerator_27456 (enumerator_27387.current (HERE).readProperty_mFormalParametersList ()) ;
      while (enumerator_27456.hasCurrentObject ()) {
        switch (enumerator_27456.current (HERE).readProperty_mFormalArgumentPassingModeForGrammarAnalysis ().enumValue ()) {
        case GGS_formalArgumentPassingModeAST::Enumeration::invalid:
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentVarIn:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentConstantIn:
          {
            GGS_unifiedTypeMapEntry var_t_27611 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_27456.current (HERE).readProperty_mGalgasTypeNameForGrammarAnalysis (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 596)) ;
            extensionMethod_addHeaderFileName (var_t_27611, var_implementationFileHeader_27262, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 597)) ;
          }
          break ;
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentInOut:
        case GGS_formalArgumentPassingModeAST::Enumeration::enum_argumentOut:
          break ;
        }
        enumerator_27456.gotoNextObject () ;
      }
      enumerator_27387.gotoNextObject () ;
    }
    enumerator_27314.gotoNextObject () ;
  }
  GalgasBool test_23 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_23) {
    test_23 = GGS_buildOptionValue::class_func_generateOneHeader (SOURCE_FILE ("semanticAnalysis.galgas4", 603)).boolEnum () ;
    if (GalgasBool::boolTrue == test_23) {
      var_implementationFileHeader_27262 = GGS_stringset::init (inCompiler COMMA_HERE) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_24 = this ;
  GGS_string var_HTMLFilePath_27994 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 607)).add_operation (temp_24.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 607)).add_operation (GGS_string (".html"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 607)) ;
  GGS_string var_grammarCppFile_28523 ;
  GGS_string var_grammarHTMLHelperContents_28556 ;
  GGS_string var_swiftGrammarDescription_28600 ;
  {
  const GGS_galgas_33_GrammarComponentAST temp_25 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_26 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_27 = this ;
  GGS_string temp_28 ;
  const GalgasBool test_29 = temp_27.readProperty_mHasTranslateFeature ().boolEnum () ;
  if (GalgasBool::boolTrue == test_29) {
    temp_28 = function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) ;
  }else if (GalgasBool::boolFalse == test_29) {
    temp_28 = GGS_string::makeEmptyString () ;
  }
  routine_grammarAnalysisAndGeneration_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__21__21__21_ (temp_25.readProperty_mGrammarComponentName (), temp_26.readProperty_mGrammarClass (), var_startSymbolIndex_25092, var_lexiqueComponentName_22197.readProperty_string (), var_actuallyUsedTerminalSymbolMap_22061, var_syntaxComponentListForGrammarAnalysis_22305, var_unusedNonTerminalSymbolsForGrammar_25545, var_HTMLFilePath_27994, var_nonTerminalSymbolSortedListForGrammarAnalysis_25991, temp_28, var_grammarCppFile_28523, var_grammarHTMLHelperContents_28556, var_swiftGrammarDescription_28600, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 608)) ;
  }
  GalgasBool test_30 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_30) {
    test_30 = GGS_buildOptionValue::class_func_outputHTMLgrammarFile (SOURCE_FILE ("semanticAnalysis.galgas4", 624)).boolEnum () ;
    if (GalgasBool::boolTrue == test_30) {
      var_HTMLFilePath_27994.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 625)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 625)) ;
      GGS_bool joker_28910 ; // Joker input parameter
      var_grammarHTMLHelperContents_28556.method_writeToFileWhenDifferentContents (var_HTMLFilePath_27994, joker_28910, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 626)) ;
    }
  }
  if (GalgasBool::boolFalse == test_30) {
    {
    GGS_string::class_method_deleteFileIfExists (var_HTMLFilePath_27994, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 628)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_31 = this ;
  GGS_string var_swiftFilePath_29071 = constinArgument_inProductDirectory.add_operation (GGS_string ("/../helpers/"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 631)).add_operation (temp_31.readProperty_mGrammarComponentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 631)).add_operation (GGS_string (".swift"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 631)) ;
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    test_32 = GGS_buildOptionValue::class_func_outputGrammarSwiftDescriptionFile (SOURCE_FILE ("semanticAnalysis.galgas4", 632)).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      var_swiftFilePath_29071.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 633)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 633)) ;
      GGS_bool joker_29363 ; // Joker input parameter
      var_swiftGrammarDescription_28600.method_writeToFileWhenDifferentContents (var_swiftFilePath_29071, joker_29363, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 634)) ;
    }
  }
  if (GalgasBool::boolFalse == test_32) {
    {
    GGS_string::class_method_deleteFileIfExists (var_swiftFilePath_29071, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 636)) ;
    }
  }
  const GGS_galgas_33_GrammarComponentAST temp_33 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_34 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_35 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_36 = this ;
  const GGS_galgas_33_GrammarComponentAST temp_37 = this ;
  ioArgument_ioSemanticDeclarationListForGeneration.plusPlusAssignOperation (GGS_grammarForGeneration::init_21_infoMessage_21_generateHeader_21_implementationCppFileName_21__21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), GGS_bool (true), GGS_string ("grammar-").add_operation (temp_33.readProperty_mGrammarComponentName ().readProperty_string ().getter_fileNameRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 643)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 643)), temp_34.readProperty_mGrammarComponentName ().readProperty_string (), var_lexiqueComponentName_22197.readProperty_string (), var_nonTerminalMapForGrammarAnalysis_22143, var_nonTerminalToAddList_22375, temp_35.readProperty_mSyntaxComponents (), temp_36.readProperty_mStartSymbolName ().readProperty_string (), temp_37.readProperty_mHasTranslateFeature (), var_grammarCppFile_28523, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 640)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Function 'buildPredefinedTypes'
//
//--------------------------------------------------------------------------------------------------

GGS_predefinedTypes function_buildPredefinedTypes (const GGS_unifiedTypeMap & constinArgument_inTypeMap,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_predefinedTypes result ; // Returned variable
  result = GGS_predefinedTypes::init_21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21__21_ (extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("location").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 662)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 662)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 663)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("char").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 664)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 664)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("string").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 665)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 665)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("uint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 666)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 666)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("sint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 667)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 667)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("u64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 668)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 668)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("s64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 669)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("f64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 670)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbool").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 671)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 671)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lchar").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 672)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 672)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lstring").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 673)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 673)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("luint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 674)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 674)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lsint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 675)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 675)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lu64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 676)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 676)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("ls64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 677)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 677)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lf64").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 678)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 678)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("lbigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 679)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("bigint").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 680)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 680)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("stringset").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 681)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 681)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[string]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 682)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 682)), extensionGetter_typeMapEntryForLKey (constinArgument_inTypeMap, GGS_string ("[lstring]").getter_here (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 683)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 683)), inCompiler COMMA_HERE) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterNonterminalNonTerminalInMapAndCheck??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (const GGS_lstring constinArgument_inNonTerminalName,
                                                                   const GGS_nonterminalLabelMap constinArgument_inNonterminalLabelMap,
                                                                   GGS_nonterminalMap & ioArgument_ioNonterminalDeclarationMap,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_nonterminalMap_2E_element var_entry_34319 = ioArgument_ioNonterminalDeclarationMap.readSubcript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).unwrappedValue () ;
    if (!ioArgument_ioNonterminalDeclarationMap.readSubcript__3F_ (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_HERE).isValuated ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      GGS_stringset var_firstDeclarationLabelSet_34406 = var_entry_34319.readProperty_mLabelMap ().getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 762)) ;
      GGS_stringset var_reDeclarationLabelSet_34475 = constinArgument_inNonterminalLabelMap.getter_keySet (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 763)) ;
      GGS_stringset var_missingLabelSet_34547 = var_firstDeclarationLabelSet_34406.subtract_operation (var_reDeclarationLabelSet_34475, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 764)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::greaterThan, var_missingLabelSet_34547.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 765)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GGS_string var_s_34670 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_34688 (var_missingLabelSet_34547) ;
          while (enumerator_34688.hasCurrentObject ()) {
            var_s_34670.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_34688.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 768)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 768)) ;
            enumerator_34688.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 771)).add_operation (GGS_string ("' nonterminal is redeclared without the following label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 771)).add_operation (var_s_34670, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 771)), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 770)) ;
        }
      }
      GGS_stringset var_newLabelSet_34913 = var_reDeclarationLabelSet_34475.subtract_operation (var_firstDeclarationLabelSet_34406, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 773)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::greaterThan, var_newLabelSet_34913.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 774)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          GGS_string var_s_35020 = GGS_string::makeEmptyString () ;
          UpEnumerator_stringset enumerator_35038 (var_newLabelSet_34913) ;
          while (enumerator_35038.hasCurrentObject ()) {
            var_s_35020.plusAssignOperation(GGS_string ("\n-  ").add_operation (enumerator_35038.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 777)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 777)) ;
            enumerator_35038.gotoNextObject () ;
          }
          GenericArray <FixItDescription> fixItArray4 ;
          inCompiler->emitSemanticError (constinArgument_inNonTerminalName.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inNonTerminalName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 780)).add_operation (GGS_string ("' nonterminal is redeclared with the new label(s):"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 780)).add_operation (var_s_35020, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 780)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 779)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::equal, var_missingLabelSet_34547.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 782)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::equal, var_newLabelSet_34913.getter_count (SOURCE_FILE ("semanticAnalysis.galgas4", 782)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 782)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          UpEnumerator_nonterminalLabelMap enumerator_35325 (var_entry_34319.readProperty_mLabelMap ()) ;
          UpEnumerator_nonterminalLabelMap enumerator_35348 (constinArgument_inNonterminalLabelMap) ;
          while (enumerator_35325.hasCurrentObject () && enumerator_35348.hasCurrentObject ()) {
            GGS__5B_formalParameterSignatureElement_5D_ var_newSignature_35420 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
            UpEnumerator__5B_formalParameterSignatureElement_5D_ enumerator_35470 (enumerator_35348.current (HERE).readProperty_mSignature ()) ;
            while (enumerator_35470.hasCurrentObject ()) {
              var_newSignature_35420.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_35470.current (HERE).readProperty_mFormalSelector (), enumerator_35470.current (HERE).readProperty_mFormalArgumentType (), enumerator_35470.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_35470.current (HERE).readProperty_mFormalArgumentName (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 786)) ;
              enumerator_35470.gotoNextObject () ;
            }
            {
            routine_checkMethodSignatures_3F__3F__3F__3F_ (enumerator_35325.current (HERE).readProperty_mSignatureForGeneration (), enumerator_35325.current (HERE).readProperty_mEndOfArgumentLocation (), var_newSignature_35420, enumerator_35348.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 788)) ;
            }
            enumerator_35325.gotoNextObject () ;
            enumerator_35348.gotoNextObject () ;
          }
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioNonterminalDeclarationMap.setter_insertKey (constinArgument_inNonTerminalName, constinArgument_inNonterminalLabelMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 797)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildNonterminalDeclarationsMap??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                              const GGS_semanticContext /* constinArgument__5F_inSemanticContext */,
                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              GGS_nonterminalMap & outArgument_outNonterminalDeclarationMap,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNonterminalDeclarationMap.drop () ; // Release 'out' argument
  outArgument_outNonterminalDeclarationMap = GGS_nonterminalMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_nonterminalDeclarationAST_5D_ enumerator_36421 (constinArgument_inNonterminalDeclarationList) ;
  while (enumerator_36421.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_36461 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_nonTerminalLabelAST_5D_ enumerator_36537 (enumerator_36421.current (HERE).readProperty_mLabels ()) ;
    while (enumerator_36537.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_36558 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_36628 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_36705 (enumerator_36537.current (HERE).readProperty_mFormalArgumentList ()) ;
      while (enumerator_36705.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_t_36740 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_36705.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 816)) ;
        var_signatureForGeneration_36558.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_36705.current (HERE).readProperty_mFormalSelector (), enumerator_36705.current (HERE).readProperty_mFormalArgumentPassingMode (), var_t_36740, enumerator_36705.current (HERE).readProperty_mFormalArgumentName (), enumerator_36705.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 817)) ;
        var_signature_36628.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_36705.current (HERE).readProperty_mFormalSelector (), var_t_36740, enumerator_36705.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_36705.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 818)) ;
        enumerator_36705.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_36461.setter_insertKey (enumerator_36537.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_36558, var_signature_36628, enumerator_36537.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 820)) ;
      }
      enumerator_36537.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_36421.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_36461, outArgument_outNonterminalDeclarationMap, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 822)) ;
    }
    enumerator_36421.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@semanticInstructionAST analyzeSyntaxInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_semanticInstructionAST::method_analyzeSyntaxInstruction (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                   GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                   const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                   GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                   const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                   const GGS_terminalMap /* constinArgument__5F_inTerminalMap */,
                                                                   const GGS_string /* constinArgument__5F_inLexiqueName */,
                                                                   const GGS_nonterminalMap /* constinArgument__5F_inNonterminalMap */,
                                                                   const GGS_string /* constinArgument__5F_inComponentName */,
                                                                   const GGS_stringset /* constinArgument__5F_inIndexNameSet */,
                                                                   GGS__5B_semanticInstructionForGeneration_5D_ & ioArgument_ioInstructionListForGeneration,
                                                                   GGS_localVarManager & ioArgument_ioVariableMap,
                                                                   GGS_uint & /* ioArgument__5F_ioSelectMethodCount */,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_semanticInstructionAST temp_0 = this ;
  callExtensionMethod_analyzeSemanticInstruction ((cPtr_semanticInstructionAST *) temp_0.ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, ioArgument_ioInstructionListForGeneration, ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 847)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterAnonymousVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterAnonymousVariable::method_analyzeInputParameter (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                         GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                         const GGS_lexicalTypeEnum /* constinArgument__5F_inRequiredLexicalType */,
                                                                         const GGS_string /* constinArgument__5F_inLexicalAttributeName */,
                                                                         GGS__5B_terminalCheckAssignement_5D_ & /* ioArgument__5F_ioTerminalCheckAssignementList */,
                                                                         GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                const GGS_string constinArgument_inLexicalAttributeName,
                                                                GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                GGS_localVarManager & ioArgument_ioVariableMap,
                                                                Compiler * inCompiler
                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_type_39384 ;
  GGS_string var_cppName_39403 ;
  {
  const GGS_inputParameterVariable temp_0 = this ;
  GGS_string joker_39412 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_0.readProperty_mActualParameterName (), var_type_39384, var_cppName_39403, joker_39412, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 877)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_39443 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_39443 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_expectedType_39443.objectCompare (var_type_39384)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_inputParameterVariable temp_2 = this ;
      const GGS_inputParameterVariable temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 891)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 891)).add_operation (extensionGetter_identifierRepresentation (var_type_39384, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 891)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 891)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 891)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_39443, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 892)), fixItArray4  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 890)) ;
    }
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (GGS_string::makeEmptyString (), var_cppName_39403, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 894)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredVariable analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredVariable::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_41065 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_41065 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredVariable temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredVariable temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_41928 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 923)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_41065.objectCompare (var_type_41928)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredVariable temp_4 = this ;
          const GGS_inputParameterDeclaredVariable temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (extensionGetter_definition (var_type_41928, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 926)).add_operation (extensionGetter_definition (var_expectedType_41065, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 927)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 925)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredVariable temp_7 = this ;
  const GGS_inputParameterDeclaredVariable temp_8 = this ;
  GGS_string var_cppName_42324 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 931)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 931)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 931)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 931)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 931)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 931)) ;
  {
  const GGS_inputParameterDeclaredVariable temp_9 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), GGS_bool (true), var_expectedType_41065, var_cppName_42324, var_cppName_42324, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 932)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_41065, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 940)).readProperty_typeName ().readProperty_string (), var_cppName_42324, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 939)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@inputParameterDeclaredConstant analyzeInputParameter'
//--------------------------------------------------------------------------------------------------

void cPtr_inputParameterDeclaredConstant::method_analyzeInputParameter (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                        const GGS_lexicalTypeEnum constinArgument_inRequiredLexicalType,
                                                                        const GGS_string constinArgument_inLexicalAttributeName,
                                                                        GGS__5B_terminalCheckAssignement_5D_ & ioArgument_ioTerminalCheckAssignementList,
                                                                        GGS_localVarManager & ioArgument_ioVariableMap,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_unifiedTypeMapEntry var_expectedType_43258 ;
  switch (constinArgument_inRequiredLexicalType.enumValue ()) {
  case GGS_lexicalTypeEnum::Enumeration::invalid:
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_string:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLStringType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_char:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLCharType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_uint_36__34_:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLUInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSIntType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_sint_36__34_:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLSInt_36__34_Type () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_double:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLDoubleType () ;
    }
    break ;
  case GGS_lexicalTypeEnum::Enumeration::enum_lexicalType_5F_bigint:
    {
      var_expectedType_43258 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mLBigIntType () ;
    }
    break ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_inputParameterDeclaredConstant temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mActualParameterTypeName ().readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_inputParameterDeclaredConstant temp_2 = this ;
      GGS_unifiedTypeMapEntry var_type_44121 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_2.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 968)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::notEqual, var_expectedType_43258.objectCompare (var_type_44121)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_inputParameterDeclaredConstant temp_4 = this ;
          const GGS_inputParameterDeclaredConstant temp_5 = this ;
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (temp_4.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_5.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 971)).add_operation (GGS_string ("' formal argument has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 971)).add_operation (extensionGetter_definition (var_type_44121, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 971)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 971)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 971)).add_operation (extensionGetter_definition (var_expectedType_43258, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 972)), fixItArray6  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 970)) ;
        }
      }
    }
  }
  const GGS_inputParameterDeclaredConstant temp_7 = this ;
  const GGS_inputParameterDeclaredConstant temp_8 = this ;
  GGS_string var_cppName_44517 = GGS_string ("var_").add_operation (temp_7.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 976)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)).add_operation (temp_8.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 976)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 976)) ;
  {
  const GGS_inputParameterDeclaredConstant temp_9 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_9.readProperty_mActualParameterName (), var_expectedType_43258, var_cppName_44517, var_cppName_44517, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 977)) ;
  }
  ioArgument_ioTerminalCheckAssignementList.plusPlusAssignOperation (GGS_terminalCheckAssignement::init_21__21__21_ (extensionGetter_definition (var_expectedType_43258, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 980)).readProperty_typeName ().readProperty_string (), var_cppName_44517, constinArgument_inLexicalAttributeName, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 979)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_analyzeSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                    const GGS_bool /* constinArgument__5F_inHasTranslateFeature */,
                                                                                    GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_analyzeSDT (const GGS_analysisContext /* constinArgument__5F_inAnalysisContext */,
                                                                                    GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                    const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                    GGS_localVarManager & /* ioArgument__5F_ioVariableMap */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1001)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationDropResult temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mLocation (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1002)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                     GGS_unifiedTypeMap & /* ioArgument__5F_ioTypeMap */,
                                                                                     const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                     GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1013)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1014)) ;
    }
  }
  GGS_unifiedTypeMapEntry var_type_46419 ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_3 = this ;
  GGS_string joker_46425 ; // Joker input parameter
  GGS_string joker_46429 ; // Joker input parameter
  extensionSetter_searchForWriteAccess (ioArgument_ioVariableMap, temp_3.readProperty_mActualParameterName (), var_type_46419, joker_46425, joker_46429, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1016)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_46439 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, var_expectedType_46439.objectCompare (var_type_46419)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_5 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_6.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1020)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1020)).add_operation (extensionGetter_identifierRepresentation (var_type_46419, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1020)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1020)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1020)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_46439, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1021)), fixItArray7  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1019)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                             GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                             const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                             GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1032)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the syntax component to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1033)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_4 = this ;
  GGS_string var_cppName_47316 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1035)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1035)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1035)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1035)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1035)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1035)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_47461 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1036)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_6 = this ;
  extensionSetter_insertInitializedLocalVariable (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), GGS_bool (true), var_type_47461, var_cppName_47316, var_cppName_47316, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1037)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_47686 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_47686.objectCompare (var_type_47461)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1047)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1047)).add_operation (extensionGetter_identifierRepresentation (var_type_47461, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1047)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1047)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1047)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_47686, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1048)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1046)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst analyzeSDT'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_analyzeSDT (const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                               GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                               const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                               GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasTranslateFeature.operator_not (SOURCE_FILE ("semanticAnalysis.galgas4", 1059)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the ':>' construct requires the grammar to be declared with 'translate' feature"), fixItArray2  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1060)) ;
    }
  }
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_3 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_4 = this ;
  GGS_string var_cppName_48556 = GGS_string ("var_").add_operation (temp_3.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1062)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1062)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1062)).add_operation (temp_4.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1062)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1062)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1062)) ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_5 = this ;
  GGS_unifiedTypeMapEntry var_type_48701 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, temp_5.readProperty_mActualParameterTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1063)) ;
  {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_6 = this ;
  extensionSetter_insertInitializedLocalConstant (ioArgument_ioVariableMap, temp_6.readProperty_mActualParameterName (), var_type_48701, var_cppName_48556, var_cppName_48556, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1064)) ;
  }
  GGS_unifiedTypeMapEntry var_expectedType_48877 = constinArgument_inAnalysisContext.readProperty_predefinedTypes ().readProperty_mStringType () ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_expectedType_48877.objectCompare (var_type_48701)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_8 = this ;
      const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mActualParameterName ().readProperty_location (), GGS_string ("the '").add_operation (temp_9.readProperty_mActualParameterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1068)).add_operation (GGS_string ("' parameter has the '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1068)).add_operation (extensionGetter_identifierRepresentation (var_type_48701, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1068)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1068)).add_operation (GGS_string (", bit an '@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1068)).add_operation (extensionGetter_identifierRepresentation (var_expectedType_48877, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)).add_operation (GGS_string ("' parameter is required here"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1069)), fixItArray10  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1067)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultNone generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultNone::method_generateCode (const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                                                      const GGS_string constinArgument_inAccessMethodName,
                                                                                      GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                                                      GGS_string & ioArgument_ioGeneratedCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inGenerateSyntaxDirectedTranslationString.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioGeneratedCode.plusAssignOperation(function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE).add_operation (GGS_string (".appendString ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1081)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1081)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1081)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1081)) ;
      {
      ioArgument_ioUnusedVariableCppNameSet.setter_removeKey (function_gSyntaxDirectedTranslationResultVarName (inCompiler COMMA_HERE) COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1082)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationDropResult generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationDropResult::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                      const GGS_string /* constinArgument__5F_inAccessMethodName */,
                                                                                      GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                      GGS_string & /* ioArgument__5F_ioGeneratedCode */,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInVar::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                       const GGS_string constinArgument_inAccessMethodName,
                                                                                       GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                       GGS_string & ioArgument_ioGeneratedCode,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInVar temp_1 = this ;
  GGS_string var_cppName_50531 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1102)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1102)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1102)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1102)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1102)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1102)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(var_cppName_50531.add_operation (GGS_string (" = GGS_string ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                               const GGS_string constinArgument_inAccessMethodName,
                                                                                               GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                               GGS_string & ioArgument_ioGeneratedCode,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredVar temp_1 = this ;
  GGS_string var_cppName_51119 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1113)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1113)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1113)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1113)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1113)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1113)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("GGS_string ").add_operation (var_cppName_51119, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1114)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst::method_generateCode (const GGS_bool /* constinArgument__5F_inGenerateSyntaxDirectedTranslationString */,
                                                                                                 const GGS_string constinArgument_inAccessMethodName,
                                                                                                 GGS_stringset & /* ioArgument__5F_ioUnusedVariableCppNameSet */,
                                                                                                 GGS_string & ioArgument_ioGeneratedCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_0 = this ;
  const GGS_grammarInstructionSyntaxDirectedTranslationResultInDeclaredConst temp_1 = this ;
  GGS_string var_cppName_51712 = GGS_string ("var_").add_operation (temp_0.readProperty_mActualParameterName ().readProperty_string ().getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1124)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1124)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1124)).add_operation (temp_1.readProperty_mActualParameterName ().readProperty_location ().getter_startLocationIndex (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1124)).getter_string (SOURCE_FILE ("semanticAnalysis.galgas4", 1124)), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1124)) ;
  ioArgument_ioGeneratedCode.plusAssignOperation(GGS_string ("const GGS_string ").add_operation (var_cppName_51712, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).add_operation (constinArgument_inAccessMethodName, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)).add_operation (GGS_string (") ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1125)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeSyntaxInstructionList?&?&????????&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeSyntaxInstructionList_3F__26__3F__26__3F__3F__3F__3F__3F__3F__3F__3F__26__26__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                       GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                       const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                       GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                       const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                       const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                       const GGS_string constinArgument_inLexiqueName,
                                                                                                       const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                       const GGS_string constinArgument_inComponentName,
                                                                                                       const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inSyntaxInstructionListAST,
                                                                                                       const GGS_location constinArgument_inEndOfBranchLocation,
                                                                                                       const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                       GGS_localVarManager & ioArgument_ioVariableMap,
                                                                                                       GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                       GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  {
  extensionSetter_openBranch (ioArgument_ioVariableMap, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1148)) ;
  }
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_52888 (constinArgument_inSyntaxInstructionListAST) ;
  while (enumerator_52888.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_52888.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, ioArgument_ioVariableMap, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1151)) ;
    enumerator_52888.gotoNextObject () ;
  }
  {
  extensionSetter_closeBranch (ioArgument_ioVariableMap, constinArgument_inEndOfBranchLocation, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1168)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfRuleLabel?&???&???????&!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (const GGS_lstring constinArgument_inUsefulnessCallerEntityName,
                                                                                                              GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                              const GGS__5B_formalParameterAST_5D_ constinArgument_inFormalArguments,
                                                                                                              const GGS__5B_syntaxInstructionAST_5D_ constinArgument_inSyntaxInstructionList,
                                                                                                              const GGS_analysisContext constinArgument_inAnalysisContext,
                                                                                                              GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                              const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                              const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                              const GGS_string constinArgument_inLexiqueName,
                                                                                                              const GGS_nonterminalMap constinArgument_inNonterminalMap,
                                                                                                              const GGS_string constinArgument_inComponentName,
                                                                                                              const GGS_location constinArgument_inEndOfInstructionList,
                                                                                                              const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                              GGS_uint & ioArgument_ioSelectMethodCount,
                                                                                                              GGS__5B_formalParameterForGeneration_5D_ & outArgument_outSignatureForGeneration,
                                                                                                              GGS__5B_formalParameterSignatureElement_5D_ & outArgument_outSignature,
                                                                                                              GGS__5B_semanticInstructionForGeneration_5D_ & outArgument_outInstructionListForGeneration,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSignatureForGeneration.drop () ; // Release 'out' argument
  outArgument_outSignature.drop () ; // Release 'out' argument
  outArgument_outInstructionListForGeneration.drop () ; // Release 'out' argument
  GGS_localVarManager var_variableMap_54438 = GGS_localVarManager::init_21_ (constinArgument_inAnalysisContext.readProperty_semanticContext ().readProperty_mGlobalConstantMap (), inCompiler COMMA_HERE) ;
  {
  routine_buildLocalVariableMapAndSignature_3F__26__3F__26__21_ (constinArgument_inAnalysisContext.readProperty_semanticContext (), ioArgument_ioTypeMap, constinArgument_inFormalArguments, var_variableMap_54438, outArgument_outSignatureForGeneration, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1197)) ;
  }
  outArgument_outSignature = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_formalParameterForGeneration_5D_ enumerator_54772 (outArgument_outSignatureForGeneration) ;
  while (enumerator_54772.hasCurrentObject ()) {
    outArgument_outSignature.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_54772.current (HERE).readProperty_mFormalSelector (), enumerator_54772.current (HERE).readProperty_mFormalArgumentType (), enumerator_54772.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_54772.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1207)) ;
    enumerator_54772.gotoNextObject () ;
  }
  outArgument_outInstructionListForGeneration = GGS__5B_semanticInstructionForGeneration_5D_::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_syntaxInstructionAST_5D_ enumerator_55092 (constinArgument_inSyntaxInstructionList) ;
  while (enumerator_55092.hasCurrentObject ()) {
    callExtensionMethod_analyzeSyntaxInstruction ((cPtr_syntaxInstructionAST *) enumerator_55092.current (HERE).ptr (), constinArgument_inUsefulnessCallerEntityName, ioArgument_ioUsefulEntitiesGraph, constinArgument_inAnalysisContext, ioArgument_ioTypeMap, constinArgument_inHasTranslateFeature, constinArgument_inTerminalMap, constinArgument_inLexiqueName, constinArgument_inNonterminalMap, constinArgument_inComponentName, constinArgument_inIndexNameSet, outArgument_outInstructionListForGeneration, var_variableMap_54438, ioArgument_ioSelectMethodCount, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1212)) ;
    enumerator_55092.gotoNextObject () ;
  }
  extensionMethod_checkAutomatonStates (var_variableMap_54438, constinArgument_inEndOfInstructionList, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1229)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'semanticAnalysisOfSyntaxComponent?&?????&?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_semanticAnalysisOfSyntaxComponent_3F__26__3F__3F__3F__3F__3F__26__3F__3F__3F__3F__3F__21_ (const GGS_lstring constinArgument_inSyntaxComponentUsefulnessName,
                                                                                                        GGS_usefulEntitiesGraph & ioArgument_ioUsefulEntitiesGraph,
                                                                                                        const GGS__5B_nonterminalDeclarationAST_5D_ constinArgument_inNonterminalDeclarationList,
                                                                                                        const GGS__5B_syntaxRuleAST_5D_ constinArgument_inRuleList,
                                                                                                        const GGS_string constinArgument_inSyntaxComponentName,
                                                                                                        const GGS_string constinArgument_inLexiqueName,
                                                                                                        const GGS_semanticContext constinArgument_inSemanticContext,
                                                                                                        GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                                                                        const GGS_predefinedTypes constinArgument_inPredefinedTypes,
                                                                                                        const GGS_terminalMap constinArgument_inTerminalMap,
                                                                                                        const GGS_stringset constinArgument_inIndexNameSet,
                                                                                                        const GGS_bool constinArgument_inHasIndexing,
                                                                                                        const GGS_bool constinArgument_inHasTranslateFeature,
                                                                                                        GGS_syntaxDeclarationForGeneration & outArgument_outSyntaxDeclarationForGeneration,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSyntaxDeclarationForGeneration.drop () ; // Release 'out' argument
  GGS_nonterminalMap var_nonterminalMap_56669 ;
  {
  routine_buildNonterminalDeclarationsMap_3F__3F__26__21_ (constinArgument_inNonterminalDeclarationList, constinArgument_inSemanticContext, ioArgument_ioTypeMap, var_nonterminalMap_56669, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1255)) ;
  }
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_56757 (constinArgument_inRuleList) ;
  while (enumerator_56757.hasCurrentObject ()) {
    GGS_nonterminalLabelMap var_nonterminalLabelMap_56800 = GGS_nonterminalLabelMap::init (inCompiler COMMA_HERE) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_56850 (enumerator_56757.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_56850.hasCurrentObject ()) {
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_56906 = GGS__5B_formalParameterForGeneration_5D_::init (inCompiler COMMA_HERE) ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_56980 = GGS__5B_formalParameterSignatureElement_5D_::init (inCompiler COMMA_HERE) ;
      UpEnumerator__5B_formalParameterAST_5D_ enumerator_57023 (enumerator_56850.current (HERE).readProperty_mFormalArguments ()) ;
      while (enumerator_57023.hasCurrentObject ()) {
        GGS_unifiedTypeMapEntry var_type_57055 = extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_57023.current (HERE).readProperty_mFormalArgumentTypeName (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1268)) ;
        var_signatureForGeneration_56906.plusPlusAssignOperation (GGS_formalParameterForGeneration::init_21__21__21__21__21_ (enumerator_57023.current (HERE).readProperty_mFormalSelector (), enumerator_57023.current (HERE).readProperty_mFormalArgumentPassingMode (), var_type_57055, enumerator_57023.current (HERE).readProperty_mFormalArgumentName (), GGS_string ("argument_").add_operation (enumerator_57023.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1274)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1269)) ;
        var_signature_56980.plusPlusAssignOperation (GGS_formalParameterSignatureElement::init_21__21__21__21_ (enumerator_57023.current (HERE).readProperty_mFormalSelector (), var_type_57055, enumerator_57023.current (HERE).readProperty_mFormalArgumentPassingMode (), enumerator_57023.current (HERE).readProperty_mFormalArgumentName ().readProperty_string (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1275)) ;
        enumerator_57023.gotoNextObject () ;
      }
      {
      var_nonterminalLabelMap_56800.setter_insertKey (enumerator_56850.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_56906, var_signature_56980, enumerator_56850.current (HERE).readProperty_mEndOfArgumentLocation (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1277)) ;
      }
      enumerator_56850.gotoNextObject () ;
    }
    {
    routine_enterNonterminalNonTerminalInMapAndCheck_3F__3F__26_ (enumerator_56757.current (HERE).readProperty_mNonterminalName (), var_nonterminalLabelMap_56800, var_nonterminalMap_56669, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1279)) ;
    }
    enumerator_56757.gotoNextObject () ;
  }
  GGS_analysisContext var_analysisContext_57759 = GGS_analysisContext::init_21__21__21_selfObjectCppName_21_selfAvailability_21_selfObjectCppPrefixForAccessingProperty (constinArgument_inSemanticContext, constinArgument_inPredefinedTypes, GGS_string::makeEmptyString (), GGS_selfAvailability::class_func_none (SOURCE_FILE ("semanticAnalysis.galgas4", 1286)), GGS_string::makeEmptyString (), inCompiler COMMA_HERE) ;
  GGS_uint var_selectMethodCount_57981 = GGS_uint (uint32_t (0U)) ;
  GGS__5B_ruleDeclarationAST_5D_ var_ruleDeclarationList_58031 = GGS__5B_ruleDeclarationAST_5D_::init (inCompiler COMMA_HERE) ;
  GGS_uint var_newRuleIndex_58069 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator__5B_syntaxRuleAST_5D_ enumerator_58101 (constinArgument_inRuleList) ;
  while (enumerator_58101.hasCurrentObject ()) {
    GGS__5B_ruleLabelImplementationAST_5D_ var_ruleLabelImplementationList_58161 = GGS__5B_ruleLabelImplementationAST_5D_::init (inCompiler COMMA_HERE) ;
    GGS_uint var_localSelectMethodCount_58209 = var_selectMethodCount_57981 ;
    GGS_nonterminalLabelMap joker_58306 ; // Joker input parameter
    var_nonterminalMap_56669.method_searchKey (enumerator_58101.current (HERE).readProperty_mNonterminalName (), joker_58306, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1297)) ;
    UpEnumerator__5B_syntaxRuleLabelAST_5D_ enumerator_58334 (enumerator_58101.current (HERE).readProperty_mLabelList ()) ;
    while (enumerator_58334.hasCurrentObject ()) {
      var_localSelectMethodCount_58209 = var_selectMethodCount_57981 ;
      GGS__5B_formalParameterForGeneration_5D_ var_signatureForGeneration_58891 ;
      GGS__5B_formalParameterSignatureElement_5D_ var_signature_58928 ;
      GGS__5B_semanticInstructionForGeneration_5D_ var_instructionListForGeneration_58952 ;
      {
      routine_semanticAnalysisOfRuleLabel_3F__26__3F__3F__3F__26__3F__3F__3F__3F__3F__3F__3F__26__21__21__21_ (constinArgument_inSyntaxComponentUsefulnessName, ioArgument_ioUsefulEntitiesGraph, enumerator_58334.current (HERE).readProperty_mFormalArguments (), enumerator_58334.current (HERE).readProperty_mSyntaxInstructionList (), var_analysisContext_57759, ioArgument_ioTypeMap, constinArgument_inTerminalMap, constinArgument_inHasTranslateFeature, constinArgument_inLexiqueName.getter_identifierRepresentation (SOURCE_FILE ("semanticAnalysis.galgas4", 1309)), var_nonterminalMap_56669, constinArgument_inSyntaxComponentName, enumerator_58334.current (HERE).readProperty_mEndOfInstructionList (), constinArgument_inIndexNameSet, var_localSelectMethodCount_58209, var_signatureForGeneration_58891, var_signature_58928, var_instructionListForGeneration_58952, inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1300)) ;
      }
      var_ruleLabelImplementationList_58161.plusPlusAssignOperation (GGS_ruleLabelImplementationAST::init_21__21__21__21__21_ (enumerator_58334.current (HERE).readProperty_mLabelName (), var_signatureForGeneration_58891, var_signature_58928, enumerator_58334.current (HERE).readProperty_mEndOfArgumentLocation (), var_instructionListForGeneration_58952, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1319)) ;
      enumerator_58334.gotoNextObject () ;
    }
    var_selectMethodCount_57981 = var_localSelectMethodCount_58209 ;
    GGS_nonterminalLabelMap joker_59294 ; // Joker input parameter
    var_nonterminalMap_56669.method_searchKey (enumerator_58101.current (HERE).readProperty_mNonterminalName (), joker_59294, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1327)) ;
    var_ruleDeclarationList_58031.plusPlusAssignOperation (GGS_ruleDeclarationAST::init_21__21__21_ (enumerator_58101.current (HERE).readProperty_mNonterminalName ().readProperty_string (), var_newRuleIndex_58069, var_ruleLabelImplementationList_58161, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1328)) ;
    var_newRuleIndex_58069.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1332)) ;
    enumerator_58101.gotoNextObject () ;
  }
  outArgument_outSyntaxDeclarationForGeneration = GGS_syntaxDeclarationForGeneration::init_21_infoMessage_21__21__21__21__21__21__21_ (GGS_string::makeEmptyString (), constinArgument_inSyntaxComponentName, constinArgument_inLexiqueName, var_nonterminalMap_56669, var_ruleDeclarationList_58031, var_selectMethodCount_57981, constinArgument_inHasIndexing, constinArgument_inHasTranslateFeature, inCompiler COMMA_HERE) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitClassGraphFile??'
//
//--------------------------------------------------------------------------------------------------

void routine_emitClassGraphFile_3F__3F_ (const GGS_string constinArgument_inDotDocumentFilePath,
                                         const GGS_unifiedTypeMap constinArgument_inTypeMap,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  constinArgument_inDotDocumentFilePath.getter_deletingLastPathComponent (SOURCE_FILE ("semanticAnalysis.galgas4", 1351)).method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1351)) ;
  GGS_string var_document_60024 = GGS_string ("digraph G {\n") ;
  var_document_60024.plusAssignOperation(GGS_string ("  rankdir=LR ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1353)) ;
  var_document_60024.plusAssignOperation(GGS_string ("  node [shape=record fontname=helvetica style=rounded] ;\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1354)) ;
  UpEnumerator_unifiedTypeMap enumerator_60173 (constinArgument_inTypeMap) ;
  while (enumerator_60173.hasCurrentObject ()) {
    switch (enumerator_60173.current (HERE).readProperty_mElement ().readProperty_mDefinition ().enumValue ()) {
    case GGS_typeDefinition::Enumeration::invalid:
      break ;
    case GGS_typeDefinition::Enumeration::enum_unsolved:
      break ;
    case GGS_typeDefinition::Enumeration::enum_solved:
      {
        GGS_unifiedTypeDefinition extractedValue_60283_definition_0 ;
        enumerator_60173.current (HERE).readProperty_mElement ().readProperty_mDefinition ().getAssociatedValuesFor_solved (extractedValue_60283_definition_0) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          test_0 = extractedValue_60283_definition_0.readProperty_typeKind ().getter_isClassType (SOURCE_FILE ("semanticAnalysis.galgas4", 1359)).boolEnum () ;
          if (GalgasBool::boolTrue == test_0) {
            switch (extractedValue_60283_definition_0.readProperty_superType ().enumValue ()) {
            case GGS_unifiedTypeMapEntry::Enumeration::invalid:
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_null:
              {
                var_document_60024.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_60283_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1362)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1362)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1362)) ;
              }
              break ;
            case GGS_unifiedTypeMapEntry::Enumeration::enum_element:
              {
                GGS_unifiedTypeMapElementClass_2E_weak extractedValue_60484_superType_0 ;
                extractedValue_60283_definition_0.readProperty_superType ().getAssociatedValuesFor_element (extractedValue_60484_superType_0) ;
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  const GGS_unifiedTypeMapElementClass var_t_60514 = extractedValue_60484_superType_0.unwrappedValue () ;
                  if (!extractedValue_60484_superType_0.isValuated ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    const GGS_typeDefinition_2E_solved var_solvedType_60533 = var_t_60514.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1364)).unwrappedValue () ;
                    if (!var_t_60514.readProperty_mDefinition ().getter_getSolved (SOURCE_FILE ("semanticAnalysis.galgas4", 1364)).isValuated ()) {
                      test_1 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_1) {
                      var_document_60024.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_60283_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1365)).add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1365)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1365)) ;
                      var_document_60024.plusAssignOperation(GGS_string ("  \"@").add_operation (extractedValue_60283_definition_0.readProperty_typeName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1366)).add_operation (GGS_string ("\" -> \"@"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1366)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1366)) ;
                      var_document_60024.plusAssignOperation(var_solvedType_60533.readProperty_definition ().readProperty_typeName ().readProperty_string ().add_operation (GGS_string ("\" ;\n"), inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1367)), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1367)) ;
                    }
                  }
                }
              }
              break ;
            }
          }
        }
      }
      break ;
    }
    enumerator_60173.gotoNextObject () ;
  }
  var_document_60024.plusAssignOperation(GGS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1373)) ;
  GGS_bool joker_60919 ; // Joker input parameter
  var_document_60024.method_writeToFileWhenDifferentContents (constinArgument_inDotDocumentFilePath, joker_60919, inCompiler COMMA_SOURCE_FILE ("semanticAnalysis.galgas4", 1374)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkextensionSetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionSetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_7063 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 167)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_7148 (var_descendantClasses_7063) ;
  while (enumerator_7148.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_7186 = extensionGetter_definition (enumerator_7148.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 169)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_7253 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_7186.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 170)) ;
    GGS_bool var_found_7362 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_7393 (var_overridingMethods_7253) ;
    bool bool_0 = var_found_7362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 172)).isValidAndTrue () ;
    if (enumerator_7393.hasCurrentObject () && bool_0) {
      while (enumerator_7393.hasCurrentObject () && bool_0) {
        var_found_7362 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionSetterName.readProperty_string ().objectCompare (enumerator_7393.current (HERE).readProperty_string ())) ;
        enumerator_7393.gotoNextObject () ;
        if (enumerator_7393.hasCurrentObject ()) {
          bool_0 = var_found_7362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 172)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_7362.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 175)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_7148.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 176)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_7186.readProperty_string (), constinArgument_inAbstractExtensionSetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 177)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionSetterName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionSetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 187)).add_operation (var_descendantClassName_7186.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 188)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 188)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 186)) ;
        }
      }
    }
    enumerator_7148.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionMethodDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionMethodName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionMethodListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_8654 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 204)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_8739 (var_descendantClasses_8654) ;
  while (enumerator_8739.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_8777 = extensionGetter_definition (enumerator_8739.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 206)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingMethods_8844 = extensionGetter_listForKey (constinArgument_inOverridingExtensionMethodListMap, var_descendantClassName_8777.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 207)) ;
    GGS_bool var_found_8953 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_8986 (var_overridingMethods_8844) ;
    bool bool_0 = var_found_8953.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 209)).isValidAndTrue () ;
    if (enumerator_8986.hasCurrentObject () && bool_0) {
      while (enumerator_8986.hasCurrentObject () && bool_0) {
        var_found_8953 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionMethodName.readProperty_string ().objectCompare (enumerator_8986.current (HERE).readProperty_string ())) ;
        enumerator_8986.gotoNextObject () ;
        if (enumerator_8986.hasCurrentObject ()) {
          bool_0 = var_found_8953.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 209)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_8953.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 212)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_8739.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 213)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_8777.readProperty_string (), constinArgument_inAbstractExtensionMethodName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionMethodListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 214)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionMethodName.readProperty_location (), GGS_string ("an abstract extension proc '").add_operation (constinArgument_inAbstractExtensionMethodName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 224)).add_operation (var_descendantClassName_8777.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 225)).add_operation (GGS_string ("' does not implement this proc"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 225)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 223)) ;
        }
      }
    }
    enumerator_8739.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkExtensionGetterDefinitionForClass??????'
//
//--------------------------------------------------------------------------------------------------

void routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (const GGS_string constinArgument_inClassNameForErrorSignaling,
                                                                             const GGS_string constinArgument_inClassName,
                                                                             const GGS_lstring constinArgument_inAbstractExtensionGetterName,
                                                                             const GGS_descendantClassListMap constinArgument_inDescendantClassListMap,
                                                                             const GGS_genericExtensionMethodListMap constinArgument_inOverridingExtensionGetterListMap,
                                                                             const GGS_unifiedTypeMap constinArgument_inUnifiedTypeMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_unifiedTypeMapEntry_5D_ var_descendantClasses_10249 = extensionGetter_listForKey (constinArgument_inDescendantClassListMap, constinArgument_inClassName, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 241)) ;
  UpEnumerator__5B_unifiedTypeMapEntry_5D_ enumerator_10338 (var_descendantClasses_10249) ;
  while (enumerator_10338.hasCurrentObject ()) {
    GGS_lstring var_descendantClassName_10376 = extensionGetter_definition (enumerator_10338.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 243)).readProperty_typeName () ;
    GGS__5B_lstring_5D_ var_overridingReaders_10447 = extensionGetter_listForKey (constinArgument_inOverridingExtensionGetterListMap, var_descendantClassName_10376.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 244)) ;
    GGS_bool var_found_10556 = GGS_bool (false) ;
    UpEnumerator__5B_lstring_5D_ enumerator_10592 (var_overridingReaders_10447) ;
    bool bool_0 = var_found_10556.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 246)).isValidAndTrue () ;
    if (enumerator_10592.hasCurrentObject () && bool_0) {
      while (enumerator_10592.hasCurrentObject () && bool_0) {
        var_found_10556 = GGS_bool (ComparisonKind::equal, constinArgument_inAbstractExtensionGetterName.readProperty_string ().objectCompare (enumerator_10592.current (HERE).readProperty_string ())) ;
        enumerator_10592.gotoNextObject () ;
        if (enumerator_10592.hasCurrentObject ()) {
          bool_0 = var_found_10556.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 246)).isValidAndTrue () ;
        }
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_found_10556.operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 249)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = extensionGetter_definition (enumerator_10338.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)).readProperty_isConcrete ().operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 250)).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            {
            routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (constinArgument_inClassNameForErrorSignaling, var_descendantClassName_10376.readProperty_string (), constinArgument_inAbstractExtensionGetterName, constinArgument_inDescendantClassListMap, constinArgument_inOverridingExtensionGetterListMap, constinArgument_inUnifiedTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 251)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          GenericArray <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inAbstractExtensionGetterName.readProperty_location (), GGS_string ("an abstract extension func '").add_operation (constinArgument_inAbstractExtensionGetterName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).add_operation (GGS_string ("' is defined for abstract class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).add_operation (constinArgument_inClassNameForErrorSignaling, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)).add_operation (GGS_string ("', but concrete descendant class '@"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 261)).add_operation (var_descendantClassName_10376.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 262)).add_operation (GGS_string ("' does not implement this func"), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 262)), fixItArray3  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 260)) ;
        }
      }
    }
    enumerator_10338.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performGalgas3ProjectGlobalCheckings&?'
//
//--------------------------------------------------------------------------------------------------

void routine_performGalgas_33_ProjectGlobalCheckings_26__3F_ (GGS_unifiedTypeMap & ioArgument_ioTypeMap,
                                                              const GGS__5B_semanticDeclarationAST_5D_ constinArgument_inSemanticDeclarationList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_println_3F_ (GGS_string ("*** Perform global checkings"), inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 272)) ;
  }
  GGS_descendantClassListMap var_descendantClassListMap_11853 = GGS_descendantClassListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_unifiedTypeMap enumerator_11896 (ioArgument_ioTypeMap) ;
  while (enumerator_11896.hasCurrentObject ()) {
    GGS_unifiedTypeMapEntry var_superType_11918 = callExtensionGetter_definition ((const cPtr_unifiedTypeMapElementClass *) enumerator_11896.current (HERE).readProperty_mElement ().ptr (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 277)).readProperty_superType () ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_superType_11918.getter_isNull (SOURCE_FILE ("projectGlobalCheckings.galgas4", 278)).operator_not (SOURCE_FILE ("projectGlobalCheckings.galgas4", 278)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        extensionSetter_insertKey (var_descendantClassListMap_11853, extensionGetter_definition (var_superType_11918, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 280)).readProperty_typeName ().readProperty_string (), extensionGetter_typeMapEntryForLKey (ioArgument_ioTypeMap, enumerator_11896.current (HERE).readProperty_lkey (), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 281)), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 279)) ;
        }
      }
    }
    enumerator_11896.gotoNextObject () ;
  }
  GGS_genericExtensionMethodListMap var_abstractExtensionMethodListMap_12238 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionMethodListMap_12312 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionMethodListMap_12378 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionMethodListMap_12454 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionGetterListMap_12538 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionReaderListMap_12612 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionGetterListMap_12678 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionGetterListMap_12754 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_abstractExtensionSetterListMap_12838 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_extensionSetterListMap_12912 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingExtensionSetterListMap_12978 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  GGS_genericExtensionMethodListMap var_overridingAbstractExtensionSetterListMap_13054 = GGS_genericExtensionMethodListMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator__5B_semanticDeclarationAST_5D_ enumerator_13122 (constinArgument_inSemanticDeclarationList) ;
  while (enumerator_13122.hasCurrentObject ()) {
    callExtensionMethod_buildExtensionListMaps ((cPtr_semanticDeclarationAST *) enumerator_13122.current (HERE).ptr (), var_abstractExtensionSetterListMap_12838, var_extensionSetterListMap_12912, var_overridingExtensionSetterListMap_12978, var_overridingAbstractExtensionSetterListMap_13054, var_abstractExtensionMethodListMap_12238, var_extensionMethodListMap_12312, var_overridingExtensionMethodListMap_12378, var_overridingAbstractExtensionMethodListMap_12454, var_abstractExtensionGetterListMap_12538, var_extensionReaderListMap_12612, var_overridingExtensionGetterListMap_12678, var_overridingAbstractExtensionGetterListMap_12754, inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 299)) ;
    enumerator_13122.gotoNextObject () ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, GGS_application::class_func_errorCount (SOURCE_FILE ("projectGlobalCheckings.galgas4", 315)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_13852 (var_abstractExtensionSetterListMap_12838.readProperty_dictionary ()) ;
      while (enumerator_13852.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_13960 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14004 (enumerator_13852.current_value (HERE)) ;
        while (enumerator_14004.hasCurrentObject ()) {
          {
          var_extensionSetterMap_13960.setter_insertKey (enumerator_14004.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 320)) ;
          }
          enumerator_14004.gotoNextObject () ;
        }
        enumerator_13852.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14173 (var_extensionSetterListMap_12912.readProperty_dictionary ()) ;
      while (enumerator_14173.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14273 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14317 (enumerator_14173.current_value (HERE)) ;
        while (enumerator_14317.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14273.setter_insertKey (enumerator_14317.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 327)) ;
          }
          enumerator_14317.gotoNextObject () ;
        }
        enumerator_14173.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14492 (var_overridingExtensionSetterListMap_12978.readProperty_dictionary ()) ;
      while (enumerator_14492.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14602 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14646 (enumerator_14492.current_value (HERE)) ;
        while (enumerator_14646.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14602.setter_insertKey (enumerator_14646.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 334)) ;
          }
          enumerator_14646.gotoNextObject () ;
        }
        enumerator_14492.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_14830 (var_overridingAbstractExtensionMethodListMap_12454.readProperty_dictionary ()) ;
      while (enumerator_14830.hasCurrentObject ()) {
        GGS_extensionSetterMapForGlobalCheckings var_extensionSetterMap_14948 = GGS_extensionSetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_14992 (enumerator_14830.current_value (HERE)) ;
        while (enumerator_14992.hasCurrentObject ()) {
          {
          var_extensionSetterMap_14948.setter_insertKey (enumerator_14992.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 341)) ;
          }
          enumerator_14992.gotoNextObject () ;
        }
        enumerator_14830.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15220 (var_abstractExtensionSetterListMap_12838.readProperty_dictionary ()) ;
      while (enumerator_15220.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15297 (enumerator_15220.current_value (HERE)) ;
        while (enumerator_15297.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15220.current_key (HERE), enumerator_15220.current_key (HERE), enumerator_15297.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionSetterListMap_12978, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 347)) ;
          }
          enumerator_15297.gotoNextObject () ;
        }
        enumerator_15220.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_15691 (var_overridingAbstractExtensionSetterListMap_13054.readProperty_dictionary ()) ;
      while (enumerator_15691.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_15780 (enumerator_15691.current_value (HERE)) ;
        while (enumerator_15780.hasCurrentObject ()) {
          {
          routine_checkextensionSetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_15691.current_key (HERE), enumerator_15691.current_key (HERE), enumerator_15780.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionSetterListMap_12978, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 360)) ;
          }
          enumerator_15780.gotoNextObject () ;
        }
        enumerator_15691.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16101 (var_abstractExtensionMethodListMap_12238.readProperty_dictionary ()) ;
      while (enumerator_16101.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16207 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16251 (enumerator_16101.current_value (HERE)) ;
        while (enumerator_16251.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16207.setter_insertKey (enumerator_16251.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 374)) ;
          }
          enumerator_16251.gotoNextObject () ;
        }
        enumerator_16101.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16409 (var_extensionMethodListMap_12312.readProperty_dictionary ()) ;
      while (enumerator_16409.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16507 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16551 (enumerator_16409.current_value (HERE)) ;
        while (enumerator_16551.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16507.setter_insertKey (enumerator_16551.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 381)) ;
          }
          enumerator_16551.gotoNextObject () ;
        }
        enumerator_16409.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_16715 (var_overridingExtensionMethodListMap_12378.readProperty_dictionary ()) ;
      while (enumerator_16715.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_16823 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_16867 (enumerator_16715.current_value (HERE)) ;
        while (enumerator_16867.hasCurrentObject ()) {
          {
          var_extensionMethodMap_16823.setter_insertKey (enumerator_16867.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 388)) ;
          }
          enumerator_16867.gotoNextObject () ;
        }
        enumerator_16715.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17040 (var_overridingAbstractExtensionMethodListMap_12454.readProperty_dictionary ()) ;
      while (enumerator_17040.hasCurrentObject ()) {
        GGS_extensionMethodMapForGlobalCheckings var_extensionMethodMap_17156 = GGS_extensionMethodMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_17200 (enumerator_17040.current_value (HERE)) ;
        while (enumerator_17200.hasCurrentObject ()) {
          {
          var_extensionMethodMap_17156.setter_insertKey (enumerator_17200.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 395)) ;
          }
          enumerator_17200.gotoNextObject () ;
        }
        enumerator_17040.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17408 (var_abstractExtensionMethodListMap_12238.readProperty_dictionary ()) ;
      while (enumerator_17408.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17485 (enumerator_17408.current_value (HERE)) ;
        while (enumerator_17485.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17408.current_key (HERE), enumerator_17408.current_key (HERE), enumerator_17485.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionMethodListMap_12378, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 401)) ;
          }
          enumerator_17485.gotoNextObject () ;
        }
        enumerator_17408.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_17850 (var_overridingAbstractExtensionMethodListMap_12454.readProperty_dictionary ()) ;
      while (enumerator_17850.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_17937 (enumerator_17850.current_value (HERE)) ;
        while (enumerator_17937.hasCurrentObject ()) {
          {
          routine_checkExtensionMethodDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_17850.current_key (HERE), enumerator_17850.current_key (HERE), enumerator_17937.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionMethodListMap_12378, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 414)) ;
          }
          enumerator_17937.gotoNextObject () ;
        }
        enumerator_17850.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18405 (var_abstractExtensionGetterListMap_12538.readProperty_dictionary ()) ;
      while (enumerator_18405.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18513 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18557 (enumerator_18405.current_value (HERE)) ;
        while (enumerator_18557.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18513.setter_insertKey (enumerator_18557.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 430)) ;
          }
          enumerator_18557.gotoNextObject () ;
        }
        enumerator_18405.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_18717 (var_extensionReaderListMap_12612.readProperty_dictionary ()) ;
      while (enumerator_18717.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_18817 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_18861 (enumerator_18717.current_value (HERE)) ;
        while (enumerator_18861.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_18817.setter_insertKey (enumerator_18861.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 437)) ;
          }
          enumerator_18861.gotoNextObject () ;
        }
        enumerator_18717.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19027 (var_overridingExtensionGetterListMap_12678.readProperty_dictionary ()) ;
      while (enumerator_19027.hasCurrentObject ()) {
        GGS_extensionGetterMapForGlobalCheckings var_ExtensionGetterMap_19137 = GGS_extensionGetterMapForGlobalCheckings::init (inCompiler COMMA_HERE) ;
        UpEnumerator__5B_lstring_5D_ enumerator_19181 (enumerator_19027.current_value (HERE)) ;
        while (enumerator_19181.hasCurrentObject ()) {
          {
          var_ExtensionGetterMap_19137.setter_insertKey (enumerator_19181.current (HERE), inCompiler COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 444)) ;
          }
          enumerator_19181.gotoNextObject () ;
        }
        enumerator_19027.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19366 (var_abstractExtensionGetterListMap_12538.readProperty_dictionary ()) ;
      while (enumerator_19366.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19445 (enumerator_19366.current_value (HERE)) ;
        while (enumerator_19445.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19366.current_key (HERE), enumerator_19366.current_key (HERE), enumerator_19445.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionGetterListMap_12678, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 450)) ;
          }
          enumerator_19445.gotoNextObject () ;
        }
        enumerator_19366.gotoNextObject () ;
      }
      UpEnumerator__5B_string_3A__5B_lstring_5D__5D_ enumerator_19787 (var_overridingAbstractExtensionGetterListMap_12754.readProperty_dictionary ()) ;
      while (enumerator_19787.hasCurrentObject ()) {
        UpEnumerator__5B_lstring_5D_ enumerator_19876 (enumerator_19787.current_value (HERE)) ;
        while (enumerator_19876.hasCurrentObject ()) {
          {
          routine_checkExtensionGetterDefinitionForClass_3F__3F__3F__3F__3F__3F_ (enumerator_19787.current_key (HERE), enumerator_19787.current_key (HERE), enumerator_19876.current (HERE), var_descendantClassListMap_11853, var_overridingExtensionGetterListMap_12678, ioArgument_ioTypeMap, inCompiler  COMMA_SOURCE_FILE ("projectGlobalCheckings.galgas4", 463)) ;
          }
          enumerator_19876.gotoNextObject () ;
        }
        enumerator_19787.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInstructionList&?&&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInstructionList_26__3F__26__26__3F__26_ (GGS_stringset & ioArgument_ioInclusionSet,
                                                              const GGS__5B_semanticInstructionForGeneration_5D_ constinArgument_inInstructionList,
                                                              GGS_uint & ioArgument_ioTemporaryVariableIndex,
                                                              GGS_stringset & ioArgument_ioUnusedVariableCppNameSet,
                                                              const GGS_bool constinArgument_inGenerateSyntaxDirectedTranslationString,
                                                              GGS_string & ioArgument_ioGeneratedCode,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  ioArgument_ioGeneratedCode.setter_incIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 35)) ;
  }
  UpEnumerator__5B_semanticInstructionForGeneration_5D_ enumerator_1855 (constinArgument_inInstructionList) ;
  while (enumerator_1855.hasCurrentObject ()) {
    callExtensionMethod_generateInstruction ((cPtr_semanticInstructionForGeneration *) enumerator_1855.current (HERE).ptr (), ioArgument_ioInclusionSet, ioArgument_ioTemporaryVariableIndex, ioArgument_ioUnusedVariableCppNameSet, constinArgument_inGenerateSyntaxDirectedTranslationString, ioArgument_ioGeneratedCode, inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 37)) ;
    enumerator_1855.gotoNextObject () ;
  }
  {
  ioArgument_ioGeneratedCode.setter_decIndentation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 45)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticTypeForGeneration::getter_getImplementationCppFileName (Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 217)).readProperty_headerFileName () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (true) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticTypeForGeneration::getter_isPredefined (Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 229)).readProperty_isPredefined () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticTypeForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticTypeForGeneration::getter_headerKind (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  const GGS_semanticTypeForGeneration temp_0 = this ;
  result = extensionGetter_definition (temp_0.readProperty_mSelfTypeEntry (), inCompiler COMMA_SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 235)).readProperty_headerKind () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration getImplementationCppFileName'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_semanticDeclarationWithHeaderForGeneration::getter_getImplementationCppFileName (Compiler */* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result = temp_0.readProperty_implementationCppFileName () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration hasCppHeaderFile'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_hasCppHeaderFile (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  const GGS_semanticDeclarationWithHeaderForGeneration temp_0 = this ;
  result = temp_0.readProperty_generateHeader () ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration headerKind'
//
//--------------------------------------------------------------------------------------------------

GGS_headerKind cPtr_semanticDeclarationWithHeaderForGeneration::getter_headerKind (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_headerKind result ; // Returned variable
  result = GGS_headerKind::class_func_twoHeaders (SOURCE_FILE ("semanticsDecoratedTypes.galgas4", 264)) ;
//---
  return result ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@semanticDeclarationWithHeaderForGeneration isPredefined'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_semanticDeclarationWithHeaderForGeneration::getter_isPredefined (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result ; // Returned variable
  result = GGS_bool (false) ;
//---
  return result ;
}


#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "execution-mode.h"
#include "filewrapper-utilities.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "galgas4",
  "galgasTemplate",
  "galgas4project",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a GALGAS 4 source file",
  "a GALGAS Template source file",
  "a GALGAS4 project source file",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "4.0.0" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GGS_string var_creationProjectName_1418 = GGS_buildOptionValue::class_func_create_5F_project (SOURCE_FILE ("galgasProgram.galgas4", 26)) ;
    {
    routine_projectCreation_3F_ (var_creationProjectName_1418, inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 27)) ;
    }
  }
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_buildOptionValue::class_func_printPredefinedLexicalActions (SOURCE_FILE ("galgasProgram.galgas4", 33)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        {
        routine_printPredefinedLexicalActions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 34)) ;
        }
      }
    }
  }
  {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, GGS_buildOptionValue::class_func_extractLIBPMOption (SOURCE_FILE ("galgasProgram.galgas4", 41)).objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        {
        routine_updateLIBPMatPath_3F_ (GGS_buildOptionValue::class_func_extractLIBPMOption (SOURCE_FILE ("galgasProgram.galgas4", 42)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 42)) ;
        }
      }
    }
  }
  {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_buildOptionValue::class_func_check_5F_big_5F_int (SOURCE_FILE ("galgasProgram.galgas4", 51)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        {
        routine_checkBigInteger (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 52)) ;
        }
      }
    }
  }
  {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_buildOptionValue::class_func_displayUnicodeLexicalTestFunctions (SOURCE_FILE ("galgasProgram.galgas4", 61)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_displayUnicodeLexicalTestFunctions (inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 62)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_parentDirectory_2943 = constinArgument_inSourceFile.readProperty_string ().getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)).getter_deletingLastPathComponent (SOURCE_FILE ("galgasProgram.galgas4", 76)) ;
  GGS__5B_string_5D_ temp_0 = GGS__5B_string_5D_::init (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  temp_0.plusPlusAssignOperation (GGS_string ("galgas4project")  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GGS__5B_string_5D_ var_candidateProjectFiles_3039 = var_parentDirectory_2943.getter_regularFilesWithExtensions (GGS_bool (false), temp_0 COMMA_SOURCE_FILE ("galgasProgram.galgas4", 77)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::equal, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 78)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), GGS_string ("no project file in parent directory of source file"), fixItArray2  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 79)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::greaterThan, var_candidateProjectFiles_3039.getter_count (SOURCE_FILE ("galgasProgram.galgas4", 80)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        GGS_string var_s_3320 = GGS_string ("several project files in source file parent directory:") ;
        UpEnumerator__5B_string_5D_ enumerator_3398 (var_candidateProjectFiles_3039) ;
        while (enumerator_3398.hasCurrentObject ()) {
          var_s_3320.plusAssignOperation(GGS_string ("\n  - ").add_operation (enumerator_3398.current (HERE), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 83)) ;
          enumerator_3398.gotoNextObject () ;
        }
        GenericArray <FixItDescription> fixItArray4 ;
        inCompiler->emitSemanticError (constinArgument_inSourceFile.readProperty_location (), var_s_3320, fixItArray4  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 85)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GGS_string var_projectFilePath_3501 = var_parentDirectory_2943.add_operation (GGS_string ("/"), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)).add_operation (var_candidateProjectFiles_3039.getter_first (inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)), inCompiler COMMA_SOURCE_FILE ("galgasProgram.galgas4", 87)) ;
      {
      routine_parseAndAnalyzeProject_3F__3F_ (GGS_lstring::init_21__21_ (var_projectFilePath_3501, constinArgument_inSourceFile.readProperty_location (), inCompiler COMMA_HERE), constinArgument_inSourceFile.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 88)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_1'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__31_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS__5B_templateInstructionAST_5D_ joker_4063 ; // Joker input parameter
  cGrammar_templateGrammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile, joker_4063  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 102)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_2'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__32_ (const GGS_lstring constinArgument_inProjectSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_parseAndAnalyzeProject_3F__3F_ (constinArgument_inProjectSourceFile, GGS_string::makeEmptyString (), inCompiler  COMMA_SOURCE_FILE ("galgasProgram.galgas4", 115)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = true ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "galgas4") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_galgas_34_Grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_galgas_34_Grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_galgas_34_Grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgasTemplate") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__31_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_templateGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_templateGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_templateGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else if (fileExtension == "galgas4project") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__32_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_projectComponentGrammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_projectComponentGrammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_projectComponentGrammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gBuildOption_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value () != "") {
        commonCompiler->writeIssueJSONFile (gBuildOption_emit_5F_issue_5F_json_5F_file.readProperty_value ()) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

